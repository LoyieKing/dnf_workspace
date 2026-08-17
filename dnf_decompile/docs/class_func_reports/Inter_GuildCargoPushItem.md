# Inter_GuildCargoPushItem

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084ddea2 Inter_GuildCargoPushItem::dispatch_sig  [0x084ddea2-0x84de32f] ===
 84ddea2:	55                   	push   %ebp
 84ddea3:	89 e5                	mov    %esp,%ebp
 84ddea5:	57                   	push   %edi
 84ddea6:	56                   	push   %esi
 84ddea7:	53                   	push   %ebx
 84ddea8:	81 ec dc 00 00 00    	sub    $0xdc,%esp
 84ddeae:	8b 45 10             	mov    0x10(%ebp),%eax
 84ddeb1:	89 45 dc             	mov    %eax,-0x24(%ebp)
 84ddeb4:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ddeb7:	89 04 24             	mov    %eax,(%esp)
 84ddeba:	e8 cd c4 bf ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84ddebf:	83 f8 02             	cmp    $0x2,%eax
 84ddec2:	0f 9e c0             	setle  %al
 84ddec5:	84 c0                	test   %al,%al
 84ddec7:	74 0a                	je     84dded3 <_ZN24Inter_GuildCargoPushItem12dispatch_sigEP5CUserPci+0x31>
 84ddec9:	bb 00 00 00 00       	mov    $0x0,%ebx
 84ddece:	e9 50 04 00 00       	jmp    84de323 <_ZN24Inter_GuildCargoPushItem12dispatch_sigEP5CUserPci+0x481>
 84dded3:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84ddeda:	ff 
 84ddedb:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ddede:	89 04 24             	mov    %eax,(%esp)
 84ddee1:	e8 ba 00 17 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84ddee6:	89 c2                	mov    %eax,%edx
 84ddee8:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84ddeeb:	8b 40 0e             	mov    0xe(%eax),%eax
 84ddeee:	39 c2                	cmp    %eax,%edx
 84ddef0:	0f 95 c0             	setne  %al
 84ddef3:	84 c0                	test   %al,%al
 84ddef5:	74 0a                	je     84ddf01 <_ZN24Inter_GuildCargoPushItem12dispatch_sigEP5CUserPci+0x5f>
 84ddef7:	bb 00 00 00 00       	mov    $0x0,%ebx
 84ddefc:	e9 22 04 00 00       	jmp    84de323 <_ZN24Inter_GuildCargoPushItem12dispatch_sigEP5CUserPci+0x481>
 84ddf01:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84ddf04:	8b 40 23             	mov    0x23(%eax),%eax
 84ddf07:	89 45 80             	mov    %eax,-0x80(%ebp)
 84ddf0a:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84ddf0d:	0f b7 40 21          	movzwl 0x21(%eax),%eax
 84ddf11:	0f b7 f8             	movzwl %ax,%edi
 84ddf14:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84ddf17:	8b 70 1d             	mov    0x1d(%eax),%esi
 84ddf1a:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84ddf1d:	8b 40 18             	mov    0x18(%eax),%eax
 84ddf20:	89 c3                	mov    %eax,%ebx
 84ddf22:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84ddf25:	8b 48 13             	mov    0x13(%eax),%ecx
 84ddf28:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84ddf2b:	0f b6 40 12          	movzbl 0x12(%eax),%eax
 84ddf2f:	0f b6 d0             	movzbl %al,%edx
 84ddf32:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ddf35:	05 00 97 07 00       	add    $0x79700,%eax
 84ddf3a:	89 85 74 ff ff ff    	mov    %eax,-0x8c(%ebp)
 84ddf40:	8b 45 80             	mov    -0x80(%ebp),%eax
 84ddf43:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 84ddf47:	89 7c 24 18          	mov    %edi,0x18(%esp)
 84ddf4b:	89 74 24 14          	mov    %esi,0x14(%esp)
 84ddf4f:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 84ddf53:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 84ddf57:	89 54 24 08          	mov    %edx,0x8(%esp)
 84ddf5b:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 84ddf62:	00 
 84ddf63:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 84ddf69:	89 04 24             	mov    %eax,(%esp)
 84ddf6c:	e8 c1 87 1a 00       	call   8686732 <_ZN15cUserHistoryLog24GuildCargoPushItemResultE31ENUM_GUILD_CARGO_HISTORY_REASONiiiiii>
 84ddf71:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84ddf74:	0f b6 40 12          	movzbl 0x12(%eax),%eax
 84ddf78:	3c c1                	cmp    $0xc1,%al
 84ddf7a:	0f 84 bc 02 00 00    	je     84de23c <_ZN24Inter_GuildCargoPushItem12dispatch_sigEP5CUserPci+0x39a>
 84ddf80:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84ddf83:	0f b6 40 12          	movzbl 0x12(%eax),%eax
 84ddf87:	0f b6 c0             	movzbl %al,%eax
 84ddf8a:	89 44 24 08          	mov    %eax,0x8(%esp)
 84ddf8e:	c7 44 24 04 fb 00 00 	movl   $0xfb,0x4(%esp)
 84ddf95:	00 
 84ddf96:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ddf99:	89 04 24             	mov    %eax,(%esp)
 84ddf9c:	e8 a1 df 19 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 84ddfa1:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ddfa4:	89 04 24             	mov    %eax,(%esp)
 84ddfa7:	e8 e2 c2 bf ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 84ddfac:	89 45 e0             	mov    %eax,-0x20(%ebp)
 84ddfaf:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84ddfb2:	8b 40 18             	mov    0x18(%eax),%eax
 84ddfb5:	89 c3                	mov    %eax,%ebx
 84ddfb7:	e8 df e1 be ff       	call   80cc19b <_Z14G_CDataManagerv>
 84ddfbc:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84ddfc0:	89 04 24             	mov    %eax,(%esp)
 84ddfc3:	e8 6a 1a e8 ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 84ddfc8:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84ddfcb:	8d 45 93             	lea    -0x6d(%ebp),%eax
 84ddfce:	89 04 24             	mov    %eax,(%esp)
 84ddfd1:	e8 7e d8 be ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 84ddfd6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84ddfd9:	8b 00                	mov    (%eax),%eax
 84ddfdb:	83 c0 08             	add    $0x8,%eax
 84ddfde:	8b 10                	mov    (%eax),%edx
 84ddfe0:	8d 45 93             	lea    -0x6d(%ebp),%eax
 84ddfe3:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ddfe7:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84ddfea:	89 04 24             	mov    %eax,(%esp)
 84ddfed:	ff d2                	call   *%edx
 84ddfef:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84ddff2:	8b 40 18             	mov    0x18(%eax),%eax
 84ddff5:	89 45 95             	mov    %eax,-0x6b(%ebp)
 84ddff8:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84ddffb:	8b 40 1d             	mov    0x1d(%eax),%eax
 84ddffe:	89 45 9a             	mov    %eax,-0x66(%ebp)
 84de001:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84de004:	0f b7 40 21          	movzwl 0x21(%eax),%eax
 84de008:	66 89 45 9e          	mov    %ax,-0x62(%ebp)
 84de00c:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84de00f:	8b 40 23             	mov    0x23(%eax),%eax
 84de012:	89 45 a0             	mov    %eax,-0x60(%ebp)
 84de015:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84de018:	0f b6 40 1c          	movzbl 0x1c(%eax),%eax
 84de01c:	0f b6 c0             	movzbl %al,%eax
 84de01f:	89 44 24 04          	mov    %eax,0x4(%esp)
 84de023:	8d 45 93             	lea    -0x6d(%ebp),%eax
 84de026:	89 04 24             	mov    %eax,(%esp)
 84de029:	e8 ba 27 c7 ff       	call   81507e8 <_ZN10Inven_Item11SetItemAttrEh>
 84de02e:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84de031:	0f b7 40 28          	movzwl 0x28(%eax),%eax
 84de035:	0f b7 d0             	movzwl %ax,%edx
 84de038:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84de03b:	0f b6 40 27          	movzbl 0x27(%eax),%eax
 84de03f:	0f b6 c0             	movzbl %al,%eax
 84de042:	89 54 24 08          	mov    %edx,0x8(%esp)
 84de046:	89 44 24 04          	mov    %eax,0x4(%esp)
 84de04a:	8d 45 93             	lea    -0x6d(%ebp),%eax
 84de04d:	83 c0 11             	add    $0x11,%eax
 84de050:	89 04 24             	mov    %eax,(%esp)
 84de053:	e8 8c 60 fd ff       	call   84b40e4 <_ZN17stAmplifyOption_t6assignEht>
 84de058:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84de05b:	8b 50 34             	mov    0x34(%eax),%edx
 84de05e:	89 55 b8             	mov    %edx,-0x48(%ebp)
 84de061:	8b 50 38             	mov    0x38(%eax),%edx
 84de064:	89 55 bc             	mov    %edx,-0x44(%ebp)
 84de067:	8b 50 3c             	mov    0x3c(%eax),%edx
 84de06a:	89 55 c0             	mov    %edx,-0x40(%ebp)
 84de06d:	0f b7 40 40          	movzwl 0x40(%eax),%eax
 84de071:	66 89 45 c4          	mov    %ax,-0x3c(%ebp)
 84de075:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84de078:	83 c0 42             	add    $0x42,%eax
 84de07b:	89 04 24             	mov    %eax,(%esp)
 84de07e:	e8 d5 0c c4 ff       	call   811ed58 <_ZNK19UpgradeSeparateInfo18GetUpgradeSeparateEv>
 84de083:	0f b6 c0             	movzbl %al,%eax
 84de086:	89 44 24 04          	mov    %eax,0x4(%esp)
 84de08a:	8d 45 93             	lea    -0x6d(%ebp),%eax
 84de08d:	83 c0 33             	add    $0x33,%eax
 84de090:	89 04 24             	mov    %eax,(%esp)
 84de093:	e8 d2 af 00 00       	call   84e906a <_ZN19UpgradeSeparateInfo18SetUpgradeSeparateEh>
 84de098:	c7 44 24 4c 00 00 00 	movl   $0x0,0x4c(%esp)
 84de09f:	00 
 84de0a0:	c7 44 24 48 01 00 00 	movl   $0x1,0x48(%esp)
 84de0a7:	00 
 84de0a8:	c7 44 24 44 27 00 00 	movl   $0x27,0x44(%esp)
 84de0af:	00 
 84de0b0:	8b 45 93             	mov    -0x6d(%ebp),%eax
 84de0b3:	89 44 24 04          	mov    %eax,0x4(%esp)
 84de0b7:	8b 45 97             	mov    -0x69(%ebp),%eax
 84de0ba:	89 44 24 08          	mov    %eax,0x8(%esp)
 84de0be:	8b 45 9b             	mov    -0x65(%ebp),%eax
 84de0c1:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84de0c5:	8b 45 9f             	mov    -0x61(%ebp),%eax
 84de0c8:	89 44 24 10          	mov    %eax,0x10(%esp)
 84de0cc:	8b 45 a3             	mov    -0x5d(%ebp),%eax
 84de0cf:	89 44 24 14          	mov    %eax,0x14(%esp)
 84de0d3:	8b 45 a7             	mov    -0x59(%ebp),%eax
 84de0d6:	89 44 24 18          	mov    %eax,0x18(%esp)
 84de0da:	8b 45 ab             	mov    -0x55(%ebp),%eax
 84de0dd:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 84de0e1:	8b 45 af             	mov    -0x51(%ebp),%eax
 84de0e4:	89 44 24 20          	mov    %eax,0x20(%esp)
 84de0e8:	8b 45 b3             	mov    -0x4d(%ebp),%eax
 84de0eb:	89 44 24 24          	mov    %eax,0x24(%esp)
 84de0ef:	8b 45 b7             	mov    -0x49(%ebp),%eax
 84de0f2:	89 44 24 28          	mov    %eax,0x28(%esp)
 84de0f6:	8b 45 bb             	mov    -0x45(%ebp),%eax
 84de0f9:	89 44 24 2c          	mov    %eax,0x2c(%esp)
 84de0fd:	8b 45 bf             	mov    -0x41(%ebp),%eax
 84de100:	89 44 24 30          	mov    %eax,0x30(%esp)
 84de104:	8b 45 c3             	mov    -0x3d(%ebp),%eax
 84de107:	89 44 24 34          	mov    %eax,0x34(%esp)
 84de10b:	8b 45 c7             	mov    -0x39(%ebp),%eax
 84de10e:	89 44 24 38          	mov    %eax,0x38(%esp)
 84de112:	8b 45 cb             	mov    -0x35(%ebp),%eax
 84de115:	89 44 24 3c          	mov    %eax,0x3c(%esp)
 84de119:	0f b6 45 cf          	movzbl -0x31(%ebp),%eax
 84de11d:	88 44 24 40          	mov    %al,0x40(%esp)
 84de121:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84de124:	89 04 24             	mov    %eax,(%esp)
 84de127:	e8 5a 4c 02 00       	call   8502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>
 84de12c:	c1 e8 1f             	shr    $0x1f,%eax
 84de12f:	84 c0                	test   %al,%al
 84de131:	0f 84 fb 00 00 00    	je     84de232 <_ZN24Inter_GuildCargoPushItem12dispatch_sigEP5CUserPci+0x390>
 84de137:	8b 45 0c             	mov    0xc(%ebp),%eax
 84de13a:	89 04 24             	mov    %eax,(%esp)
 84de13d:	e8 4e db be ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 84de142:	89 c3                	mov    %eax,%ebx
 84de144:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84de147:	8b 70 0e             	mov    0xe(%eax),%esi
 84de14a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84de151:	00 
 84de152:	c7 44 24 08 85 99 c8 	movl   $0x8c89985,0x8(%esp)
 84de159:	08 
 84de15a:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 84de161:	00 
 84de162:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 84de169:	e8 90 76 5c 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 84de16e:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 84de175:	00 
 84de176:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 84de17d:	00 
 84de17e:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 84de182:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 84de189:	00 
 84de18a:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 84de191:	00 
 84de192:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 84de199:	00 
 84de19a:	89 74 24 0c          	mov    %esi,0xc(%esp)
 84de19e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84de1a5:	00 
 84de1a6:	8d 55 93             	lea    -0x6d(%ebp),%edx
 84de1a9:	89 54 24 04          	mov    %edx,0x4(%esp)
 84de1ad:	89 04 24             	mov    %eax,(%esp)
 84de1b0:	e8 33 74 07 00       	call   85555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>
 84de1b5:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84de1b8:	83 c0 42             	add    $0x42,%eax
 84de1bb:	89 04 24             	mov    %eax,(%esp)
 84de1be:	e8 95 0b c4 ff       	call   811ed58 <_ZNK19UpgradeSeparateInfo18GetUpgradeSeparateEv>
 84de1c3:	0f b6 c0             	movzbl %al,%eax
 84de1c6:	89 45 84             	mov    %eax,-0x7c(%ebp)
 84de1c9:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84de1cc:	0f b6 40 1c          	movzbl 0x1c(%eax),%eax
 84de1d0:	0f b6 f8             	movzbl %al,%edi
 84de1d3:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84de1d6:	8b 40 23             	mov    0x23(%eax),%eax
 84de1d9:	89 c6                	mov    %eax,%esi
 84de1db:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84de1de:	0f b7 40 21          	movzwl 0x21(%eax),%eax
 84de1e2:	0f b7 d8             	movzwl %ax,%ebx
 84de1e5:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84de1e8:	8b 48 1d             	mov    0x1d(%eax),%ecx
 84de1eb:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84de1ee:	8b 40 18             	mov    0x18(%eax),%eax
 84de1f1:	89 c2                	mov    %eax,%edx
 84de1f3:	8b 45 0c             	mov    0xc(%ebp),%eax
 84de1f6:	05 00 97 07 00       	add    $0x79700,%eax
 84de1fb:	89 85 74 ff ff ff    	mov    %eax,-0x8c(%ebp)
 84de201:	8b 45 84             	mov    -0x7c(%ebp),%eax
 84de204:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 84de208:	89 7c 24 18          	mov    %edi,0x18(%esp)
 84de20c:	89 74 24 14          	mov    %esi,0x14(%esp)
 84de210:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 84de214:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 84de218:	89 54 24 08          	mov    %edx,0x8(%esp)
 84de21c:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 84de223:	00 
 84de224:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 84de22a:	89 04 24             	mov    %eax,(%esp)
 84de22d:	e8 62 84 1a 00       	call   8686694 <_ZN15cUserHistoryLog22GuildCargoItemRecoveryE31ENUM_GUILD_CARGO_HISTORY_REASONiiiiih>
 84de232:	bb 00 00 00 00       	mov    $0x0,%ebx
 84de237:	e9 e7 00 00 00       	jmp    84de323 <_ZN24Inter_GuildCargoPushItem12dispatch_sigEP5CUserPci+0x481>
 84de23c:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84de23f:	89 04 24             	mov    %eax,(%esp)
 84de242:	e8 05 fb 0a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84de247:	c7 44 24 08 fb 00 00 	movl   $0xfb,0x8(%esp)
 84de24e:	00 
 84de24f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84de256:	00 
 84de257:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84de25a:	89 04 24             	mov    %eax,(%esp)
 84de25d:	e8 9a d6 be ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84de262:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84de269:	00 
 84de26a:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84de26d:	89 04 24             	mov    %eax,(%esp)
 84de270:	e8 ab d6 be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84de275:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84de278:	0f b6 40 4c          	movzbl 0x4c(%eax),%eax
 84de27c:	0f b6 c0             	movzbl %al,%eax
 84de27f:	89 44 24 04          	mov    %eax,0x4(%esp)
 84de283:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84de286:	89 04 24             	mov    %eax,(%esp)
 84de289:	e8 92 d6 be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84de28e:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84de291:	0f b7 40 4d          	movzwl 0x4d(%eax),%eax
 84de295:	0f b7 c0             	movzwl %ax,%eax
 84de298:	89 44 24 04          	mov    %eax,0x4(%esp)
 84de29c:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84de29f:	89 04 24             	mov    %eax,(%esp)
 84de2a2:	e8 fd bb bf ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 84de2a7:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84de2aa:	8b 40 1d             	mov    0x1d(%eax),%eax
 84de2ad:	89 44 24 04          	mov    %eax,0x4(%esp)
 84de2b1:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84de2b4:	89 04 24             	mov    %eax,(%esp)
 84de2b7:	e8 80 d6 be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84de2bc:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84de2bf:	8b 40 13             	mov    0x13(%eax),%eax
 84de2c2:	89 44 24 04          	mov    %eax,0x4(%esp)
 84de2c6:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84de2c9:	89 04 24             	mov    %eax,(%esp)
 84de2cc:	e8 d3 bb bf ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 84de2d1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84de2d8:	00 
 84de2d9:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84de2dc:	89 04 24             	mov    %eax,(%esp)
 84de2df:	e8 74 d6 be ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84de2e4:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84de2e7:	89 44 24 04          	mov    %eax,0x4(%esp)
 84de2eb:	8b 45 0c             	mov    0xc(%ebp),%eax
 84de2ee:	89 04 24             	mov    %eax,(%esp)
 84de2f1:	e8 c4 a2 16 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84de2f6:	bb 00 00 00 00       	mov    $0x0,%ebx
 84de2fb:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84de2fe:	89 04 24             	mov    %eax,(%esp)
 84de301:	e8 7a fb 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84de306:	eb 1b                	jmp    84de323 <_ZN24Inter_GuildCargoPushItem12dispatch_sigEP5CUserPci+0x481>
 84de308:	89 d3                	mov    %edx,%ebx
 84de30a:	89 c6                	mov    %eax,%esi
 84de30c:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84de30f:	89 04 24             	mov    %eax,(%esp)
 84de312:	e8 69 fb 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84de317:	89 f0                	mov    %esi,%eax
 84de319:	89 da                	mov    %ebx,%edx
 84de31b:	89 04 24             	mov    %eax,(%esp)
 84de31e:	e8 2d 54 60 00       	call   8ae3750 <_Unwind_Resume>
 84de323:	89 d8                	mov    %ebx,%eax
 84de325:	81 c4 dc 00 00 00    	add    $0xdc,%esp
 84de32b:	5b                   	pop    %ebx
 84de32c:	5e                   	pop    %esi
 84de32d:	5f                   	pop    %edi
 84de32e:	5d                   	pop    %ebp
 84de32f:	c3                   	ret

```

```c
// Inter_GuildCargoPushItem::dispatch_sig @ 0x84ddea2

/* Inter_GuildCargoPushItem::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_GuildCargoPushItem::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  uchar uVar2;
  undefined1 uVar3;
  int iVar4;
  CDataManager *this;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined2 local_71;
  undefined2 uStack_6f;
  undefined2 uStack_6d;
  undefined1 uStack_6b;
  undefined4 uStack_6a;
  undefined1 local_66;
  undefined4 uStack_65;
  undefined4 uStack_61;
  undefined4 local_5d;
  undefined4 local_59;
  undefined4 local_55;
  undefined4 local_51;
  undefined4 uStack_4d;
  undefined4 uStack_49;
  undefined4 uStack_45;
  undefined1 uStack_41;
  undefined2 local_40;
  UpgradeSeparateInfo UStack_3e;
  undefined4 local_3d;
  undefined4 local_39;
  undefined1 local_35;
  PacketGuard local_34 [12];
  int local_28;
  undefined4 local_24;
  int *local_20;
  
  local_28 = param_3;
  iVar4 = CUser::get_state((CUser *)param_2);
  if ((2 < iVar4) &&
     (iVar4 = CUser::get_charac_no((CUser *)param_2,-1), iVar4 == *(int *)(local_28 + 0xe))) {
    cUserHistoryLog::GuildCargoPushItemResult
              ((cUserHistoryLog *)(param_2 + 0x79700),8,*(undefined1 *)(local_28 + 0x12),
               *(undefined4 *)(local_28 + 0x13),*(undefined4 *)(local_28 + 0x18),
               *(undefined4 *)(local_28 + 0x1d),*(undefined2 *)(local_28 + 0x21),
               *(undefined4 *)(local_28 + 0x23));
    if (*(char *)(local_28 + 0x12) == -0x3f) {
      PacketGuard::PacketGuard(local_34);
                    /* try { // try from 084de25d to 084de2f5 has its CatchHandler @ 084de308 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_34,1,0xfb);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,1);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,(uint)*(byte *)(local_28 + 0x4c));
      InterfacePacketBuf::put_short
                ((InterfacePacketBuf *)local_34,(uint)*(ushort *)(local_28 + 0x4d));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_34,*(int *)(local_28 + 0x1d));
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_34,*(int *)(local_28 + 0x13));
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_34,true);
      CUser::Send((CUser *)param_2,local_34);
      PacketGuard::~PacketGuard(local_34);
    }
    else {
      CUser::SendCmdErrorPacket((CUser *)param_2,0xfb,*(undefined1 *)(local_28 + 0x12));
      local_24 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
      iVar4 = *(int *)(local_28 + 0x18);
      this = (CDataManager *)G_CDataManager();
      local_20 = (int *)CDataManager::find_item(this,iVar4);
      Inven_Item::Inven_Item((Inven_Item *)&local_71);
      (**(code **)(*local_20 + 8))(local_20,&local_71);
      uStack_6f = (undefined2)*(undefined4 *)(local_28 + 0x18);
      uStack_6d = (undefined2)((uint)*(undefined4 *)(local_28 + 0x18) >> 0x10);
      uStack_6a = *(undefined4 *)(local_28 + 0x1d);
      local_66 = (undefined1)*(undefined2 *)(local_28 + 0x21);
      uStack_65._0_1_ = (undefined1)((ushort)*(undefined2 *)(local_28 + 0x21) >> 8);
      uStack_65._1_3_ = (undefined3)*(undefined4 *)(local_28 + 0x23);
      uStack_61._0_1_ = (undefined1)((uint)*(undefined4 *)(local_28 + 0x23) >> 0x18);
      Inven_Item::SetItemAttr((Inven_Item *)&local_71,*(uchar *)(local_28 + 0x1c));
      stAmplifyOption_t::assign
                ((stAmplifyOption_t *)((int)&uStack_61 + 1),*(uchar *)(local_28 + 0x27),
                 *(ushort *)(local_28 + 0x28));
      uStack_4d._1_3_ = (undefined3)*(undefined4 *)(local_28 + 0x34);
      uStack_49._1_3_ = (undefined3)*(undefined4 *)(local_28 + 0x38);
      uStack_49 = CONCAT31(uStack_49._1_3_,(char)((uint)*(undefined4 *)(local_28 + 0x34) >> 0x18));
      uStack_45._1_3_ = (undefined3)*(undefined4 *)(local_28 + 0x3c);
      uStack_45 = CONCAT31(uStack_45._1_3_,(char)((uint)*(undefined4 *)(local_28 + 0x38) >> 0x18));
      uStack_41 = (undefined1)((uint)*(undefined4 *)(local_28 + 0x3c) >> 0x18);
      local_40 = *(undefined2 *)(local_28 + 0x40);
      uVar2 = UpgradeSeparateInfo::GetUpgradeSeparate((UpgradeSeparateInfo *)(local_28 + 0x42));
      UpgradeSeparateInfo::SetUpgradeSeparate(&UStack_3e,uVar2);
      iVar4 = CInventory::insertItemIntoInventory
                        (local_24,CONCAT22(uStack_6f,local_71),
                         CONCAT13((undefined1)uStack_6a,CONCAT12(uStack_6b,uStack_6d)),
                         CONCAT13(local_66,uStack_6a._1_3_),uStack_65,uStack_61,local_5d,local_59,
                         local_55,local_51,uStack_4d,uStack_49,uStack_45,
                         CONCAT13(UStack_3e,CONCAT21(local_40,uStack_41)),local_3d,local_39,local_35
                         ,0x27,1,0);
      if (iVar4 < 0) {
        uVar5 = CUser::GetServerGroup((CUser *)param_2);
        uVar1 = *(undefined4 *)(local_28 + 0xe);
        uVar6 = RDARScriptStringManager::findString
                          ((RDARScriptStringManager *)g_scriptStringManager_,4,"game_server_msg_114"
                           ,(bool *)0x0);
        WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(uVar6,&local_71,0,uVar1,0,0,0,uVar5,0,0);
        uVar3 = UpgradeSeparateInfo::GetUpgradeSeparate((UpgradeSeparateInfo *)(local_28 + 0x42));
        cUserHistoryLog::GuildCargoItemRecovery
                  ((cUserHistoryLog *)(param_2 + 0x79700),9,*(undefined4 *)(local_28 + 0x18),
                   *(undefined4 *)(local_28 + 0x1d),*(undefined2 *)(local_28 + 0x21),
                   *(undefined4 *)(local_28 + 0x23),*(undefined1 *)(local_28 + 0x1c),uVar3);
      }
    }
  }
  return 0;
}

```

