# Inter_CreateCharac

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## dispatch_sig

```asm
// === 084bee06 Inter_CreateCharac::dispatch_sig  [0x084bee06-0x84bf4ab] ===
 84bee06:	55                   	push   %ebp
 84bee07:	89 e5                	mov    %esp,%ebp
 84bee09:	57                   	push   %edi
 84bee0a:	56                   	push   %esi
 84bee0b:	53                   	push   %ebx
 84bee0c:	81 ec ec 02 00 00    	sub    $0x2ec,%esp
 84bee12:	8b 45 0c             	mov    0xc(%ebp),%eax
 84bee15:	89 04 24             	mov    %eax,(%esp)
 84bee18:	e8 6f b5 c1 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84bee1d:	85 c0                	test   %eax,%eax
 84bee1f:	0f 94 c0             	sete   %al
 84bee22:	84 c0                	test   %al,%al
 84bee24:	74 0a                	je     84bee30 <_ZN18Inter_CreateCharac12dispatch_sigEP5CUserPci+0x2a>
 84bee26:	bb c0 06 00 00       	mov    $0x6c0,%ebx
 84bee2b:	e9 6f 06 00 00       	jmp    84bf49f <_ZN18Inter_CreateCharac12dispatch_sigEP5CUserPci+0x699>
 84bee30:	8b 45 0c             	mov    0xc(%ebp),%eax
 84bee33:	89 04 24             	mov    %eax,(%esp)
 84bee36:	e8 7b bc 18 00       	call   864aab6 <_ZN5CUser18unlockCreateCharacEv>
 84bee3b:	83 f0 01             	xor    $0x1,%eax
 84bee3e:	84 c0                	test   %al,%al
 84bee40:	74 0a                	je     84bee4c <_ZN18Inter_CreateCharac12dispatch_sigEP5CUserPci+0x46>
 84bee42:	bb c4 06 00 00       	mov    $0x6c4,%ebx
 84bee47:	e9 53 06 00 00       	jmp    84bf49f <_ZN18Inter_CreateCharac12dispatch_sigEP5CUserPci+0x699>
 84bee4c:	8b 45 10             	mov    0x10(%ebp),%eax
 84bee4f:	89 45 dc             	mov    %eax,-0x24(%ebp)
 84bee52:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84bee55:	89 04 24             	mov    %eax,(%esp)
 84bee58:	e8 ef ee 0c 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84bee5d:	c7 44 24 08 05 00 00 	movl   $0x5,0x8(%esp)
 84bee64:	00 
 84bee65:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84bee6c:	00 
 84bee6d:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84bee70:	89 04 24             	mov    %eax,(%esp)
 84bee73:	e8 84 ca c0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84bee78:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84bee7b:	8b 80 44 53 00 00    	mov    0x5344(%eax),%eax
 84bee81:	85 c0                	test   %eax,%eax
 84bee83:	0f 84 e1 00 00 00    	je     84bef6a <_ZN18Inter_CreateCharac12dispatch_sigEP5CUserPci+0x164>
 84bee89:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84bee90:	00 
 84bee91:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84bee94:	89 04 24             	mov    %eax,(%esp)
 84bee97:	e8 84 ca c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84bee9c:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84bee9f:	8b 80 44 53 00 00    	mov    0x5344(%eax),%eax
 84beea5:	83 f8 01             	cmp    $0x1,%eax
 84beea8:	75 15                	jne    84beebf <_ZN18Inter_CreateCharac12dispatch_sigEP5CUserPci+0xb9>
 84beeaa:	c7 44 24 04 12 00 00 	movl   $0x12,0x4(%esp)
 84beeb1:	00 
 84beeb2:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84beeb5:	89 04 24             	mov    %eax,(%esp)
 84beeb8:	e8 63 ca c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84beebd:	eb 7c                	jmp    84bef3b <_ZN18Inter_CreateCharac12dispatch_sigEP5CUserPci+0x135>
 84beebf:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84beec2:	8b 80 44 53 00 00    	mov    0x5344(%eax),%eax
 84beec8:	83 f8 04             	cmp    $0x4,%eax
 84beecb:	75 15                	jne    84beee2 <_ZN18Inter_CreateCharac12dispatch_sigEP5CUserPci+0xdc>
 84beecd:	c7 44 24 04 14 00 00 	movl   $0x14,0x4(%esp)
 84beed4:	00 
 84beed5:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84beed8:	89 04 24             	mov    %eax,(%esp)
 84beedb:	e8 40 ca c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84beee0:	eb 59                	jmp    84bef3b <_ZN18Inter_CreateCharac12dispatch_sigEP5CUserPci+0x135>
 84beee2:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84beee5:	8b 80 44 53 00 00    	mov    0x5344(%eax),%eax
 84beeeb:	83 f8 05             	cmp    $0x5,%eax
 84beeee:	75 15                	jne    84bef05 <_ZN18Inter_CreateCharac12dispatch_sigEP5CUserPci+0xff>
 84beef0:	c7 44 24 04 5f 00 00 	movl   $0x5f,0x4(%esp)
 84beef7:	00 
 84beef8:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84beefb:	89 04 24             	mov    %eax,(%esp)
 84beefe:	e8 1d ca c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84bef03:	eb 36                	jmp    84bef3b <_ZN18Inter_CreateCharac12dispatch_sigEP5CUserPci+0x135>
 84bef05:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84bef08:	8b 80 44 53 00 00    	mov    0x5344(%eax),%eax
 84bef0e:	83 f8 03             	cmp    $0x3,%eax
 84bef11:	75 15                	jne    84bef28 <_ZN18Inter_CreateCharac12dispatch_sigEP5CUserPci+0x122>
 84bef13:	c7 44 24 04 18 00 00 	movl   $0x18,0x4(%esp)
 84bef1a:	00 
 84bef1b:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84bef1e:	89 04 24             	mov    %eax,(%esp)
 84bef21:	e8 fa c9 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84bef26:	eb 13                	jmp    84bef3b <_ZN18Inter_CreateCharac12dispatch_sigEP5CUserPci+0x135>
 84bef28:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84bef2f:	00 
 84bef30:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84bef33:	89 04 24             	mov    %eax,(%esp)
 84bef36:	e8 e5 c9 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84bef3b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84bef42:	00 
 84bef43:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84bef46:	89 04 24             	mov    %eax,(%esp)
 84bef49:	e8 0a ca c0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84bef4e:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84bef51:	89 44 24 04          	mov    %eax,0x4(%esp)
 84bef55:	8b 45 0c             	mov    0xc(%ebp),%eax
 84bef58:	89 04 24             	mov    %eax,(%esp)
 84bef5b:	e8 5a 96 18 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84bef60:	bb 00 00 00 00       	mov    $0x0,%ebx
 84bef65:	e9 2a 05 00 00       	jmp    84bf494 <_ZN18Inter_CreateCharac12dispatch_sigEP5CUserPci+0x68e>
 84bef6a:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84bef6d:	0f b6 40 23          	movzbl 0x23(%eax),%eax
 84bef71:	84 c0                	test   %al,%al
 84bef73:	0f 8e b1 01 00 00    	jle    84bf12a <_ZN18Inter_CreateCharac12dispatch_sigEP5CUserPci+0x324>
 84bef79:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 84bef80:	e8 19 cd c0 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 84bef85:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 84bef88:	8d 45 84             	lea    -0x7c(%ebp),%eax
 84bef8b:	89 44 24 04          	mov    %eax,0x4(%esp)
 84bef8f:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84bef92:	89 04 24             	mov    %eax,(%esp)
 84bef95:	e8 c6 f3 bb ff       	call   807e360 <localtime_r@plt>
 84bef9a:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84bef9d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84befa0:	8b 08                	mov    (%eax),%ecx
 84befa2:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84befa5:	8b 50 04             	mov    0x4(%eax),%edx
 84befa8:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84befab:	8b 40 08             	mov    0x8(%eax),%eax
 84befae:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 84befb2:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84befb6:	89 44 24 08          	mov    %eax,0x8(%esp)
 84befba:	c7 44 24 04 46 70 c8 	movl   $0x8c87046,0x4(%esp)
 84befc1:	08 
 84befc2:	8d 85 48 fd ff ff    	lea    -0x2b8(%ebp),%eax
 84befc8:	89 04 24             	mov    %eax,(%esp)
 84befcb:	e8 70 f4 bb ff       	call   807e440 <sprintf@plt>
 84befd0:	c7 45 b4 00 00 00 00 	movl   $0x0,-0x4c(%ebp)
 84befd7:	c7 45 b8 00 00 00 00 	movl   $0x0,-0x48(%ebp)
 84befde:	c7 45 bc 00 00 00 00 	movl   $0x0,-0x44(%ebp)
 84befe5:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
 84befec:	8b 45 0c             	mov    0xc(%ebp),%eax
 84befef:	89 04 24             	mov    %eax,(%esp)
 84beff2:	e8 13 d9 02 00       	call   84ec90a <_ZN5CUser21get_public_ip_addressEv>
 84beff7:	89 45 b0             	mov    %eax,-0x50(%ebp)
 84beffa:	8b 45 b0             	mov    -0x50(%ebp),%eax
 84beffd:	89 04 24             	mov    %eax,(%esp)
 84bf000:	e8 bb ed bb ff       	call   807ddc0 <inet_ntoa@plt>
 84bf005:	89 44 24 04          	mov    %eax,0x4(%esp)
 84bf009:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84bf00c:	89 04 24             	mov    %eax,(%esp)
 84bf00f:	e8 dc ee bb ff       	call   807def0 <strcpy@plt>
 84bf014:	8d 95 48 fe ff ff    	lea    -0x1b8(%ebp),%edx
 84bf01a:	b8 00 00 00 00       	mov    $0x0,%eax
 84bf01f:	b9 3f 00 00 00       	mov    $0x3f,%ecx
 84bf024:	89 d7                	mov    %edx,%edi
 84bf026:	f3 ab                	rep stos %eax,%es:(%edi)
 84bf028:	89 fa                	mov    %edi,%edx
 84bf02a:	66 89 02             	mov    %ax,(%edx)
 84bf02d:	83 c2 02             	add    $0x2,%edx
 84bf030:	88 02                	mov    %al,(%edx)
 84bf032:	83 c2 01             	add    $0x1,%edx
 84bf035:	e8 47 d1 c0 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 84bf03a:	89 04 24             	mov    %eax,(%esp)
 84bf03d:	e8 58 b3 c1 ff       	call   80da39a <_ZN12CEnvironment13get_file_nameEv>
 84bf042:	89 44 24 08          	mov    %eax,0x8(%esp)
 84bf046:	c7 44 24 04 55 70 c8 	movl   $0x8c87055,0x4(%esp)
 84bf04d:	08 
 84bf04e:	8d 85 48 fe ff ff    	lea    -0x1b8(%ebp),%eax
 84bf054:	89 04 24             	mov    %eax,(%esp)
 84bf057:	e8 e4 f3 bb ff       	call   807e440 <sprintf@plt>
 84bf05c:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84bf05f:	8b 80 48 53 00 00    	mov    0x5348(%eax),%eax
 84bf065:	89 85 40 fd ff ff    	mov    %eax,-0x2c0(%ebp)
 84bf06b:	e8 11 d1 c0 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 84bf070:	89 04 24             	mov    %eax,(%esp)
 84bf073:	e8 68 7c c4 ff       	call   8106ce0 <_ZN12CEnvironment16get_server_groupEv>
 84bf078:	89 c7                	mov    %eax,%edi
 84bf07a:	8b 45 0c             	mov    0xc(%ebp),%eax
 84bf07d:	89 04 24             	mov    %eax,(%esp)
 84bf080:	e8 33 d9 02 00       	call   84ec9b8 <_ZN5CUser13isHangameUserEv>
 84bf085:	84 c0                	test   %al,%al
 84bf087:	74 07                	je     84bf090 <_ZN18Inter_CreateCharac12dispatch_sigEP5CUserPci+0x28a>
 84bf089:	bb 01 00 00 00       	mov    $0x1,%ebx
 84bf08e:	eb 05                	jmp    84bf095 <_ZN18Inter_CreateCharac12dispatch_sigEP5CUserPci+0x28f>
 84bf090:	bb 00 00 00 00       	mov    $0x0,%ebx
 84bf095:	8b 45 0c             	mov    0xc(%ebp),%eax
 84bf098:	89 04 24             	mov    %eax,(%esp)
 84bf09b:	e8 ce b2 c1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 84bf0a0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84bf0a7:	00 
 84bf0a8:	89 04 24             	mov    %eax,(%esp)
 84bf0ab:	e8 9b 9f c4 ff       	call   810904b <_Z14NumberToStringji>
 84bf0b0:	89 c6                	mov    %eax,%esi
 84bf0b2:	c7 44 24 08 03 07 00 	movl   $0x703,0x8(%esp)
 84bf0b9:	00 
 84bf0ba:	c7 44 24 04 00 e2 c8 	movl   $0x8c8e200,0x4(%esp)
 84bf0c1:	08 
 84bf0c2:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84bf0c5:	89 04 24             	mov    %eax,(%esp)
 84bf0c8:	e8 9f 87 c4 ff       	call   810786c <_ZN10CMyFileLogC1EPKci>
 84bf0cd:	8d 85 48 fd ff ff    	lea    -0x2b8(%ebp),%eax
 84bf0d3:	89 44 24 20          	mov    %eax,0x20(%esp)
 84bf0d7:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84bf0da:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 84bf0de:	8b 85 40 fd ff ff    	mov    -0x2c0(%ebp),%eax
 84bf0e4:	89 44 24 18          	mov    %eax,0x18(%esp)
 84bf0e8:	89 7c 24 14          	mov    %edi,0x14(%esp)
 84bf0ec:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 84bf0f0:	89 74 24 0c          	mov    %esi,0xc(%esp)
 84bf0f4:	c7 44 24 08 6f 70 c8 	movl   $0x8c8706f,0x8(%esp)
 84bf0fb:	08 
 84bf0fc:	8d 85 48 fe ff ff    	lea    -0x1b8(%ebp),%eax
 84bf102:	89 44 24 04          	mov    %eax,0x4(%esp)
 84bf106:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84bf109:	89 04 24             	mov    %eax,(%esp)
 84bf10c:	e8 87 87 c4 ff       	call   8107898 <_ZN10CMyFileLogclEPKcS1_z>
 84bf111:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84bf114:	0f b6 40 24          	movzbl 0x24(%eax),%eax
 84bf118:	0f b6 d0             	movzbl %al,%edx
 84bf11b:	8b 45 0c             	mov    0xc(%ebp),%eax
 84bf11e:	89 54 24 04          	mov    %edx,0x4(%esp)
 84bf122:	89 04 24             	mov    %eax,(%esp)
 84bf125:	e8 bc ce 02 00       	call   84ebfe6 <_ZN15CUserCharacInfo25setUserEventCharacterFlagEh>
 84bf12a:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84bf12d:	89 44 24 04          	mov    %eax,0x4(%esp)
 84bf131:	8b 45 0c             	mov    0xc(%ebp),%eax
 84bf134:	89 04 24             	mov    %eax,(%esp)
 84bf137:	e8 4a b0 18 00       	call   864a186 <_ZN5CUser12CreateCharacEP17SIG_CREATE_CHARAC>
 84bf13c:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84bf13f:	0f b6 40 22          	movzbl 0x22(%eax),%eax
 84bf143:	0f be d0             	movsbl %al,%edx
 84bf146:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84bf149:	8d 48 04             	lea    0x4(%eax),%ecx
 84bf14c:	8b 45 0c             	mov    0xc(%ebp),%eax
 84bf14f:	8b 80 f8 96 07 00    	mov    0x796f8(%eax),%eax
 84bf155:	89 54 24 08          	mov    %edx,0x8(%esp)
 84bf159:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 84bf15d:	89 04 24             	mov    %eax,(%esp)
 84bf160:	e8 0b ac ff ff       	call   84b9d70 <_ZN10HistoryLog13WriteCreateChEP8_IO_FILEPci>
 84bf165:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84bf16c:	00 
 84bf16d:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84bf170:	89 04 24             	mov    %eax,(%esp)
 84bf173:	e8 a8 c7 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84bf178:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84bf17f:	00 
 84bf180:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84bf183:	89 04 24             	mov    %eax,(%esp)
 84bf186:	e8 cd c7 c0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84bf18b:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84bf18e:	89 44 24 04          	mov    %eax,0x4(%esp)
 84bf192:	8b 45 0c             	mov    0xc(%ebp),%eax
 84bf195:	89 04 24             	mov    %eax,(%esp)
 84bf198:	e8 1d 94 18 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84bf19d:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84bf1a0:	89 04 24             	mov    %eax,(%esp)
 84bf1a3:	e8 3e c7 c0 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 84bf1a8:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 84bf1af:	00 
 84bf1b0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84bf1b7:	00 
 84bf1b8:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84bf1bb:	89 04 24             	mov    %eax,(%esp)
 84bf1be:	e8 39 c7 c0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84bf1c3:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84bf1ca:	00 
 84bf1cb:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84bf1ce:	89 04 24             	mov    %eax,(%esp)
 84bf1d1:	e8 4a c7 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84bf1d6:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84bf1d9:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 84bf1e0:	00 
 84bf1e1:	89 44 24 04          	mov    %eax,0x4(%esp)
 84bf1e5:	8b 45 0c             	mov    0xc(%ebp),%eax
 84bf1e8:	89 04 24             	mov    %eax,(%esp)
 84bf1eb:	e8 5e b2 19 00       	call   865a44e <_ZN5CUser15make_basic_infoEPcc>
 84bf1f0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84bf1f7:	00 
 84bf1f8:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84bf1fb:	89 04 24             	mov    %eax,(%esp)
 84bf1fe:	e8 55 c7 c0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84bf203:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84bf206:	89 44 24 04          	mov    %eax,0x4(%esp)
 84bf20a:	8b 45 0c             	mov    0xc(%ebp),%eax
 84bf20d:	89 04 24             	mov    %eax,(%esp)
 84bf210:	e8 a5 93 18 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84bf215:	8b 45 0c             	mov    0xc(%ebp),%eax
 84bf218:	89 04 24             	mov    %eax,(%esp)
 84bf21b:	e8 20 25 19 00       	call   8651740 <_ZN5CUser16UpdateCharacViewEv>
 84bf220:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84bf223:	89 44 24 08          	mov    %eax,0x8(%esp)
 84bf227:	8b 45 0c             	mov    0xc(%ebp),%eax
 84bf22a:	89 44 24 04          	mov    %eax,0x4(%esp)
 84bf22e:	8b 45 08             	mov    0x8(%ebp),%eax
 84bf231:	89 04 24             	mov    %eax,(%esp)
 84bf234:	e8 73 02 00 00       	call   84bf4ac <_ZN18Inter_CreateCharac13process_eventEP5CUserP17SIG_CREATE_CHARAC>
 84bf239:	e8 43 cf c0 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 84bf23e:	8b 80 78 03 00 00    	mov    0x378(%eax),%eax
 84bf244:	83 f8 0a             	cmp    $0xa,%eax
 84bf247:	75 1a                	jne    84bf263 <_ZN18Inter_CreateCharac12dispatch_sigEP5CUserPci+0x45d>
 84bf249:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 84bf250:	e8 49 ca c0 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 84bf255:	3d 50 70 8e 47       	cmp    $0x478e7050,%eax
 84bf25a:	77 07                	ja     84bf263 <_ZN18Inter_CreateCharac12dispatch_sigEP5CUserPci+0x45d>
 84bf25c:	b8 01 00 00 00       	mov    $0x1,%eax
 84bf261:	eb 05                	jmp    84bf268 <_ZN18Inter_CreateCharac12dispatch_sigEP5CUserPci+0x462>
 84bf263:	b8 00 00 00 00       	mov    $0x0,%eax
 84bf268:	84 c0                	test   %al,%al
 84bf26a:	0f 84 af 01 00 00    	je     84bf41f <_ZN18Inter_CreateCharac12dispatch_sigEP5CUserPci+0x619>
 84bf270:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84bf273:	0f b6 80 4d 53 00 00 	movzbl 0x534d(%eax),%eax
 84bf27a:	84 c0                	test   %al,%al
 84bf27c:	0f 84 9d 01 00 00    	je     84bf41f <_ZN18Inter_CreateCharac12dispatch_sigEP5CUserPci+0x619>
 84bf282:	8d 85 47 ff ff ff    	lea    -0xb9(%ebp),%eax
 84bf288:	89 04 24             	mov    %eax,(%esp)
 84bf28b:	e8 c4 c5 c0 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 84bf290:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84bf293:	0f b6 40 22          	movzbl 0x22(%eax),%eax
 84bf297:	0f be c0             	movsbl %al,%eax
 84bf29a:	83 f8 04             	cmp    $0x4,%eax
 84bf29d:	77 43                	ja     84bf2e2 <_ZN18Inter_CreateCharac12dispatch_sigEP5CUserPci+0x4dc>
 84bf29f:	8b 04 85 a8 70 c8 08 	mov    0x8c870a8(,%eax,4),%eax
 84bf2a6:	ff e0                	jmp    *%eax
 84bf2a8:	c7 85 49 ff ff ff 70 	movl   $0x1c70,-0xb7(%ebp)
 84bf2af:	1c 00 00 
 84bf2b2:	eb 2e                	jmp    84bf2e2 <_ZN18Inter_CreateCharac12dispatch_sigEP5CUserPci+0x4dc>
 84bf2b4:	c7 85 49 ff ff ff 71 	movl   $0x1c71,-0xb7(%ebp)
 84bf2bb:	1c 00 00 
 84bf2be:	eb 22                	jmp    84bf2e2 <_ZN18Inter_CreateCharac12dispatch_sigEP5CUserPci+0x4dc>
 84bf2c0:	c7 85 49 ff ff ff 72 	movl   $0x1c72,-0xb7(%ebp)
 84bf2c7:	1c 00 00 
 84bf2ca:	eb 16                	jmp    84bf2e2 <_ZN18Inter_CreateCharac12dispatch_sigEP5CUserPci+0x4dc>
 84bf2cc:	c7 85 49 ff ff ff 73 	movl   $0x1c73,-0xb7(%ebp)
 84bf2d3:	1c 00 00 
 84bf2d6:	eb 0a                	jmp    84bf2e2 <_ZN18Inter_CreateCharac12dispatch_sigEP5CUserPci+0x4dc>
 84bf2d8:	c7 85 49 ff ff ff 74 	movl   $0x1c74,-0xb7(%ebp)
 84bf2df:	1c 00 00 
 84bf2e2:	c6 85 48 ff ff ff 02 	movb   $0x2,-0xb8(%ebp)
 84bf2e9:	c7 85 4e ff ff ff 01 	movl   $0x1,-0xb2(%ebp)
 84bf2f0:	00 00 00 
 84bf2f3:	66 c7 85 52 ff ff ff 	movw   $0x0,-0xae(%ebp)
 84bf2fa:	00 00 
 84bf2fc:	8d 85 47 ff ff ff    	lea    -0xb9(%ebp),%eax
 84bf302:	89 04 24             	mov    %eax,(%esp)
 84bf305:	e8 88 c5 c0 ff       	call   80cb892 <_ZN10Inven_Item13ResetItemAttrEv>
 84bf30a:	8b 85 49 ff ff ff    	mov    -0xb7(%ebp),%eax
 84bf310:	85 c0                	test   %eax,%eax
 84bf312:	74 24                	je     84bf338 <_ZN18Inter_CreateCharac12dispatch_sigEP5CUserPci+0x532>
 84bf314:	8b 85 49 ff ff ff    	mov    -0xb7(%ebp),%eax
 84bf31a:	89 c3                	mov    %eax,%ebx
 84bf31c:	e8 7a ce c0 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84bf321:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84bf325:	89 04 24             	mov    %eax,(%esp)
 84bf328:	e8 05 07 ea ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 84bf32d:	85 c0                	test   %eax,%eax
 84bf32f:	74 07                	je     84bf338 <_ZN18Inter_CreateCharac12dispatch_sigEP5CUserPci+0x532>
 84bf331:	b8 01 00 00 00       	mov    $0x1,%eax
 84bf336:	eb 05                	jmp    84bf33d <_ZN18Inter_CreateCharac12dispatch_sigEP5CUserPci+0x537>
 84bf338:	b8 00 00 00 00       	mov    $0x0,%eax
 84bf33d:	84 c0                	test   %al,%al
 84bf33f:	0f 84 da 00 00 00    	je     84bf41f <_ZN18Inter_CreateCharac12dispatch_sigEP5CUserPci+0x619>
 84bf345:	8b 45 0c             	mov    0xc(%ebp),%eax
 84bf348:	89 04 24             	mov    %eax,(%esp)
 84bf34b:	e8 40 c9 c0 ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 84bf350:	89 c6                	mov    %eax,%esi
 84bf352:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84bf359:	00 
 84bf35a:	c7 44 24 08 82 70 c8 	movl   $0x8c87082,0x8(%esp)
 84bf361:	08 
 84bf362:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 84bf369:	00 
 84bf36a:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 84bf371:	e8 88 64 5e 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 84bf376:	89 04 24             	mov    %eax,(%esp)
 84bf379:	e8 32 f0 bb ff       	call   807e3b0 <strlen@plt>
 84bf37e:	89 85 44 fd ff ff    	mov    %eax,-0x2bc(%ebp)
 84bf384:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84bf38b:	00 
 84bf38c:	c7 44 24 08 82 70 c8 	movl   $0x8c87082,0x8(%esp)
 84bf393:	08 
 84bf394:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 84bf39b:	00 
 84bf39c:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 84bf3a3:	e8 56 64 5e 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 84bf3a8:	89 c3                	mov    %eax,%ebx
 84bf3aa:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84bf3ad:	8b b8 48 53 00 00    	mov    0x5348(%eax),%edi
 84bf3b3:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84bf3ba:	00 
 84bf3bb:	c7 44 24 08 95 70 c8 	movl   $0x8c87095,0x8(%esp)
 84bf3c2:	08 
 84bf3c3:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 84bf3ca:	00 
 84bf3cb:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 84bf3d2:	e8 27 64 5e 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 84bf3d7:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 84bf3de:	00 
 84bf3df:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 84bf3e6:	00 
 84bf3e7:	89 74 24 1c          	mov    %esi,0x1c(%esp)
 84bf3eb:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 84bf3f2:	00 
 84bf3f3:	8b 95 44 fd ff ff    	mov    -0x2bc(%ebp),%edx
 84bf3f9:	89 54 24 14          	mov    %edx,0x14(%esp)
 84bf3fd:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 84bf401:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 84bf405:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84bf40c:	00 
 84bf40d:	8d 95 47 ff ff ff    	lea    -0xb9(%ebp),%edx
 84bf413:	89 54 24 04          	mov    %edx,0x4(%esp)
 84bf417:	89 04 24             	mov    %eax,(%esp)
 84bf41a:	e8 c9 61 09 00       	call   85555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>
 84bf41f:	a1 30 f7 41 09       	mov    0x941f730,%eax
 84bf424:	c7 44 24 04 74 00 00 	movl   $0x74,0x4(%esp)
 84bf42b:	00 
 84bf42c:	89 04 24             	mov    %eax,(%esp)
 84bf42f:	e8 64 65 c5 ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 84bf434:	89 45 e0             	mov    %eax,-0x20(%ebp)
 84bf437:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 84bf43b:	74 35                	je     84bf472 <_ZN18Inter_CreateCharac12dispatch_sigEP5CUserPci+0x66c>
 84bf43d:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84bf440:	0f b6 40 22          	movzbl 0x22(%eax),%eax
 84bf444:	0f be d0             	movsbl %al,%edx
 84bf447:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84bf44a:	8b 80 48 53 00 00    	mov    0x5348(%eax),%eax
 84bf450:	89 54 24 10          	mov    %edx,0x10(%esp)
 84bf454:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 84bf45b:	00 
 84bf45c:	89 44 24 08          	mov    %eax,0x8(%esp)
 84bf460:	8b 45 0c             	mov    0xc(%ebp),%eax
 84bf463:	89 44 24 04          	mov    %eax,0x4(%esp)
 84bf467:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84bf46a:	89 04 24             	mov    %eax,(%esp)
 84bf46d:	e8 0a 1c ce ff       	call   81a107c <_ZN17CAradRyosikaEvent7DoEventEP5CUseriii>
 84bf472:	bb 00 00 00 00       	mov    $0x0,%ebx
 84bf477:	eb 1b                	jmp    84bf494 <_ZN18Inter_CreateCharac12dispatch_sigEP5CUserPci+0x68e>
 84bf479:	89 d3                	mov    %edx,%ebx
 84bf47b:	89 c6                	mov    %eax,%esi
 84bf47d:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84bf480:	89 04 24             	mov    %eax,(%esp)
 84bf483:	e8 f8 e9 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84bf488:	89 f0                	mov    %esi,%eax
 84bf48a:	89 da                	mov    %ebx,%edx
 84bf48c:	89 04 24             	mov    %eax,(%esp)
 84bf48f:	e8 bc 42 62 00       	call   8ae3750 <_Unwind_Resume>
 84bf494:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84bf497:	89 04 24             	mov    %eax,(%esp)
 84bf49a:	e8 e1 e9 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84bf49f:	89 d8                	mov    %ebx,%eax
 84bf4a1:	81 c4 ec 02 00 00    	add    $0x2ec,%esp
 84bf4a7:	5b                   	pop    %ebx
 84bf4a8:	5e                   	pop    %esi
 84bf4a9:	5f                   	pop    %edi
 84bf4aa:	5d                   	pop    %ebp
 84bf4ab:	c3                   	ret

```

```c
// Inter_CreateCharac::dispatch_sig @ 0x84bee06

/* Inter_CreateCharac::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_CreateCharac::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  CEnvironment *pCVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  CDataManager *this;
  size_t sVar10;
  undefined4 uVar11;
  byte bVar12;
  char local_2bc [256];
  char local_1bc [255];
  Inven_Item local_bd;
  undefined1 local_bc;
  int local_bb;
  undefined4 local_b6;
  undefined2 local_b2;
  tm local_80;
  in_addr_t local_54;
  char local_50 [16];
  time_t local_40;
  PacketGuard local_3c [12];
  CMyFileLog local_30 [8];
  SIG_CREATE_CHARAC *local_28;
  CAradRyosikaEvent *local_24;
  tm *local_20;
  
  bVar12 = 0;
  iVar3 = CUser::get_state((CUser *)param_2);
  if (iVar3 == 0) {
    return 0x6c0;
  }
  cVar2 = CUser::unlockCreateCharac((CUser *)param_2);
  if (cVar2 != '\x01') {
    return 0x6c4;
  }
  local_28 = (SIG_CREATE_CHARAC *)param_3;
  PacketGuard::PacketGuard(local_3c);
                    /* try { // try from 084bee73 to 084bf471 has its CatchHandler @ 084bf479 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_3c,1,5);
  if (*(int *)(local_28 + 0x5344) != 0) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,0);
    if (*(int *)(local_28 + 0x5344) == 1) {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,0x12);
    }
    else if (*(int *)(local_28 + 0x5344) == 4) {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,0x14);
    }
    else if (*(int *)(local_28 + 0x5344) == 5) {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,0x5f);
    }
    else if (*(int *)(local_28 + 0x5344) == 3) {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,0x18);
    }
    else {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,2);
    }
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_3c,true);
    CUser::Send((CUser *)param_2,local_3c);
    goto LAB_084bf494;
  }
  if ('\0' < (char)local_28[0x23]) {
    local_40 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    local_20 = localtime_r(&local_40,&local_80);
    sprintf(local_2bc,"%02d:%02d:%02d",local_20->tm_hour,local_20->tm_min,local_20->tm_sec);
    local_50[0] = '\0';
    local_50[1] = '\0';
    local_50[2] = '\0';
    local_50[3] = '\0';
    local_50[4] = '\0';
    local_50[5] = '\0';
    local_50[6] = '\0';
    local_50[7] = '\0';
    local_50[8] = '\0';
    local_50[9] = '\0';
    local_50[10] = '\0';
    local_50[0xb] = '\0';
    local_50[0xc] = '\0';
    local_50[0xd] = '\0';
    local_50[0xe] = '\0';
    local_50[0xf] = '\0';
    local_54 = CUser::get_public_ip_address((CUser *)param_2);
    pcVar4 = inet_ntoa((in_addr)local_54);
    strcpy(local_50,pcVar4);
    pcVar4 = local_1bc;
    for (iVar3 = 0x3f; iVar3 != 0; iVar3 = iVar3 + -1) {
      pcVar4[0] = '\0';
      pcVar4[1] = '\0';
      pcVar4[2] = '\0';
      pcVar4[3] = '\0';
      pcVar4 = pcVar4 + ((uint)bVar12 * -2 + 1) * 4;
    }
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pCVar5 = (CEnvironment *)G_CEnvironment();
    uVar6 = CEnvironment::get_file_name(pCVar5);
    sprintf(local_1bc,"./log/%s/JumpingCharacter",uVar6);
    uVar6 = *(undefined4 *)(local_28 + 0x5348);
    pCVar5 = (CEnvironment *)G_CEnvironment();
    uVar7 = CEnvironment::get_server_group(pCVar5);
    cVar2 = CUser::isHangameUser((CUser *)param_2);
    uVar8 = CUser::get_acc_id((CUser *)param_2);
    uVar9 = NumberToString(uVar8,0);
    CMyFileLog::CMyFileLog
              (local_30,"virtual int Inter_CreateCharac::dispatch_sig(CUser*, char*, int)",0x703);
    CMyFileLog::operator()
              (local_30,local_1bc,",%s,%d,%d,%d,%s,%s",uVar9,(uint)(cVar2 != '\0'),uVar7,uVar6,
               local_50,local_2bc);
    CUserCharacInfo::setUserEventCharacterFlag((CUserCharacInfo *)param_2,(uchar)local_28[0x24]);
  }
  CUser::CreateCharac((CUser *)param_2,local_28);
  HistoryLog::WriteCreateCh
            (*(_IO_FILE **)(param_2 + 0x796f8),(char *)(local_28 + 4),(int)(char)local_28[0x22]);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,1);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_3c,true);
  CUser::Send((CUser *)param_2,local_3c);
  InterfacePacketBuf::clear((InterfacePacketBuf *)local_3c);
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_3c,0,2);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,2);
  CUser::make_basic_info((CUser *)param_2,(char *)local_3c,'\x02');
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_3c,true);
  CUser::Send((CUser *)param_2,local_3c);
  CUser::UpdateCharacView((CUser *)param_2);
  process_event((Inter_CreateCharac *)param_1,(CUser *)param_2,local_28);
  iVar3 = G_CEnvironment();
  if ((*(int *)(iVar3 + 0x378) == 10) &&
     (uVar8 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_), uVar8 < 0x478e7051))
  {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (local_28[0x534d] != (SIG_CREATE_CHARAC)0x0)) {
    Inven_Item::Inven_Item(&local_bd);
    switch(local_28[0x22]) {
    case (SIG_CREATE_CHARAC)0x0:
      local_bb = 0x1c70;
      break;
    case (SIG_CREATE_CHARAC)0x1:
      local_bb = 0x1c71;
      break;
    case (SIG_CREATE_CHARAC)0x2:
      local_bb = 0x1c72;
      break;
    case (SIG_CREATE_CHARAC)0x3:
      local_bb = 0x1c73;
      break;
    case (SIG_CREATE_CHARAC)0x4:
      local_bb = 0x1c74;
    }
    local_bc = 2;
    local_b6 = 1;
    local_b2 = 0;
    Inven_Item::ResetItemAttr(&local_bd);
    iVar3 = local_bb;
    if (local_bb == 0) {
LAB_084bf338:
      bVar1 = false;
    }
    else {
      this = (CDataManager *)G_CDataManager();
      iVar3 = CDataManager::find_item(this,iVar3);
      if (iVar3 == 0) goto LAB_084bf338;
      bVar1 = true;
    }
    if (bVar1) {
      uVar7 = CUser::GetServerGroup((CUser *)param_2);
      pcVar4 = (char *)RDARScriptStringManager::findString
                                 ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                  "game_server_msg_10",(bool *)0x0);
      sVar10 = strlen(pcVar4);
      uVar9 = RDARScriptStringManager::findString
                        ((RDARScriptStringManager *)g_scriptStringManager_,4,"game_server_msg_10",
                         (bool *)0x0);
      uVar6 = *(undefined4 *)(local_28 + 0x5348);
      uVar11 = RDARScriptStringManager::findString
                         ((RDARScriptStringManager *)g_scriptStringManager_,4,"game_server_msg_09",
                          (bool *)0x0);
      WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                (uVar11,&local_bd,0,uVar6,uVar9,sVar10,0,uVar7,0,0);
    }
  }
  local_24 = (CAradRyosikaEvent *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x74);
  if (local_24 != (CAradRyosikaEvent *)0x0) {
    CAradRyosikaEvent::DoEvent
              (local_24,(CUser *)param_2,*(int *)(local_28 + 0x5348),1,(int)(char)local_28[0x22]);
  }
LAB_084bf494:
  PacketGuard::~PacketGuard(local_3c);
  return 0;
}

```

---

## process_createGift

```asm
// === 084bf4ce Inter_CreateCharac::process_createGift  [0x084bf4ce-0x84bf7e9] ===
 84bf4ce:	55                   	push   %ebp
 84bf4cf:	89 e5                	mov    %esp,%ebp
 84bf4d1:	57                   	push   %edi
 84bf4d2:	56                   	push   %esi
 84bf4d3:	53                   	push   %ebx
 84bf4d4:	81 ec cc 01 00 00    	sub    $0x1cc,%esp
 84bf4da:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 84bf4de:	0f 84 fa 02 00 00    	je     84bf7de <_ZN18Inter_CreateCharac18process_createGiftEP5CUserP17SIG_CREATE_CHARAC+0x310>
 84bf4e4:	8b 45 10             	mov    0x10(%ebp),%eax
 84bf4e7:	0f b6 40 22          	movzbl 0x22(%eax),%eax
 84bf4eb:	0f be c0             	movsbl %al,%eax
 84bf4ee:	89 45 c8             	mov    %eax,-0x38(%ebp)
 84bf4f1:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84bf4f4:	89 04 24             	mov    %eax,(%esp)
 84bf4f7:	e8 fe 9c 02 00       	call   84e91fa <_ZN17createChracScript14rewardInfoListC1Ev>
 84bf4fc:	e8 9a cc c0 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84bf501:	8d 55 b4             	lea    -0x4c(%ebp),%edx
 84bf504:	89 54 24 08          	mov    %edx,0x8(%esp)
 84bf508:	8b 55 c8             	mov    -0x38(%ebp),%edx
 84bf50b:	89 54 24 04          	mov    %edx,0x4(%esp)
 84bf50f:	89 04 24             	mov    %eax,(%esp)
 84bf512:	e8 51 61 ea ff       	call   8365668 <_ZNK12CDataManager23get_createCharacterGiftEiRN17createChracScript14rewardInfoListE>
 84bf517:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84bf51a:	89 04 24             	mov    %eax,(%esp)
 84bf51d:	e8 ca 1c 03 00       	call   84f11ec <_ZNKSt6vectorIN17createChracScript10rewardInfoESaIS1_EE5emptyEv>
 84bf522:	84 c0                	test   %al,%al
 84bf524:	0f 85 a7 02 00 00    	jne    84bf7d1 <_ZN18Inter_CreateCharac18process_createGiftEP5CUserP17SIG_CREATE_CHARAC+0x303>
 84bf52a:	8b 45 0c             	mov    0xc(%ebp),%eax
 84bf52d:	89 04 24             	mov    %eax,(%esp)
 84bf530:	e8 b1 08 d7 ff       	call   822fde6 <_ZNK5CUser10getRegTimeEv>
 84bf535:	89 45 cc             	mov    %eax,-0x34(%ebp)
 84bf538:	8b 45 0c             	mov    0xc(%ebp),%eax
 84bf53b:	89 04 24             	mov    %eax,(%esp)
 84bf53e:	e8 39 b4 18 00       	call   864a97c <_ZNK5CUser19GetServerGroupToPvPEv>
 84bf543:	89 45 d0             	mov    %eax,-0x30(%ebp)
 84bf546:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84bf549:	89 04 24             	mov    %eax,(%esp)
 84bf54c:	e8 f5 7e f2 ff       	call   83e7446 <_ZNKSt6vectorIN17createChracScript10rewardInfoESaIS1_EE4sizeEv>
 84bf551:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 84bf554:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 84bf55b:	e9 43 02 00 00       	jmp    84bf7a3 <_ZN18Inter_CreateCharac18process_createGiftEP5CUserP17SIG_CREATE_CHARAC+0x2d5>
 84bf560:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84bf563:	89 44 24 04          	mov    %eax,0x4(%esp)
 84bf567:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84bf56a:	89 04 24             	mov    %eax,(%esp)
 84bf56d:	e8 be 1c 03 00       	call   84f1230 <_ZNSt6vectorIN17createChracScript10rewardInfoESaIS1_EEixEj>
 84bf572:	89 45 dc             	mov    %eax,-0x24(%ebp)
 84bf575:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84bf578:	8b 40 0c             	mov    0xc(%eax),%eax
 84bf57b:	85 c0                	test   %eax,%eax
 84bf57d:	7e 0f                	jle    84bf58e <_ZN18Inter_CreateCharac18process_createGiftEP5CUserP17SIG_CREATE_CHARAC+0xc0>
 84bf57f:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84bf582:	8b 40 0c             	mov    0xc(%eax),%eax
 84bf585:	3b 45 cc             	cmp    -0x34(%ebp),%eax
 84bf588:	0f 8f 0d 02 00 00    	jg     84bf79b <_ZN18Inter_CreateCharac18process_createGiftEP5CUserP17SIG_CREATE_CHARAC+0x2cd>
 84bf58e:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84bf591:	8b 40 10             	mov    0x10(%eax),%eax
 84bf594:	85 c0                	test   %eax,%eax
 84bf596:	7e 0f                	jle    84bf5a7 <_ZN18Inter_CreateCharac18process_createGiftEP5CUserP17SIG_CREATE_CHARAC+0xd9>
 84bf598:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84bf59b:	8b 40 10             	mov    0x10(%eax),%eax
 84bf59e:	3b 45 cc             	cmp    -0x34(%ebp),%eax
 84bf5a1:	0f 8e f7 01 00 00    	jle    84bf79e <_ZN18Inter_CreateCharac18process_createGiftEP5CUserP17SIG_CREATE_CHARAC+0x2d0>
 84bf5a7:	8b 55 dc             	mov    -0x24(%ebp),%edx
 84bf5aa:	8d 45 b0             	lea    -0x50(%ebp),%eax
 84bf5ad:	89 54 24 04          	mov    %edx,0x4(%esp)
 84bf5b1:	89 04 24             	mov    %eax,(%esp)
 84bf5b4:	e8 8f ec bc ff       	call   808e248 <_ZNSt6vectorIiSaIiEE5beginEv>
 84bf5b9:	83 ec 04             	sub    $0x4,%esp
 84bf5bc:	e9 a9 01 00 00       	jmp    84bf76a <_ZN18Inter_CreateCharac18process_createGiftEP5CUserP17SIG_CREATE_CHARAC+0x29c>
 84bf5c1:	8d 85 73 ff ff ff    	lea    -0x8d(%ebp),%eax
 84bf5c7:	89 04 24             	mov    %eax,(%esp)
 84bf5ca:	e8 85 c2 c0 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 84bf5cf:	8d 45 b0             	lea    -0x50(%ebp),%eax
 84bf5d2:	89 04 24             	mov    %eax,(%esp)
 84bf5d5:	e8 f2 f1 bc ff       	call   808e7cc <_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv>
 84bf5da:	8b 18                	mov    (%eax),%ebx
 84bf5dc:	e8 ba cb c0 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84bf5e1:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84bf5e5:	89 04 24             	mov    %eax,(%esp)
 84bf5e8:	e8 45 04 ea ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 84bf5ed:	89 45 e0             	mov    %eax,-0x20(%ebp)
 84bf5f0:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 84bf5f4:	0f 84 52 01 00 00    	je     84bf74c <_ZN18Inter_CreateCharac18process_createGiftEP5CUserP17SIG_CREATE_CHARAC+0x27e>
 84bf5fa:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84bf5fd:	89 04 24             	mov    %eax,(%esp)
 84bf600:	e8 43 16 c5 ff       	call   8110c48 <_ZNK5CItem9get_indexEv>
 84bf605:	89 85 75 ff ff ff    	mov    %eax,-0x8b(%ebp)
 84bf60b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84bf60e:	8b 00                	mov    (%eax),%eax
 84bf610:	83 c0 08             	add    $0x8,%eax
 84bf613:	8b 10                	mov    (%eax),%edx
 84bf615:	8d 85 73 ff ff ff    	lea    -0x8d(%ebp),%eax
 84bf61b:	89 44 24 04          	mov    %eax,0x4(%esp)
 84bf61f:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84bf622:	89 04 24             	mov    %eax,(%esp)
 84bf625:	ff d2                	call   *%edx
 84bf627:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84bf62e:	00 
 84bf62f:	8d 85 73 ff ff ff    	lea    -0x8d(%ebp),%eax
 84bf635:	89 04 24             	mov    %eax,(%esp)
 84bf638:	e8 47 c2 c0 ff       	call   80cb884 <_ZN10Inven_Item12set_add_infoEi>
 84bf63d:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84bf640:	83 c0 18             	add    $0x18,%eax
 84bf643:	89 04 24             	mov    %eax,(%esp)
 84bf646:	e8 a5 6e 24 00       	call   87064f0 <_ZNKSs5c_strEv>
 84bf64b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84bf652:	00 
 84bf653:	89 44 24 08          	mov    %eax,0x8(%esp)
 84bf657:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 84bf65e:	00 
 84bf65f:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 84bf666:	e8 93 61 5e 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 84bf66b:	c7 44 24 08 ff 00 00 	movl   $0xff,0x8(%esp)
 84bf672:	00 
 84bf673:	89 44 24 04          	mov    %eax,0x4(%esp)
 84bf677:	8d 85 73 fe ff ff    	lea    -0x18d(%ebp),%eax
 84bf67d:	89 04 24             	mov    %eax,(%esp)
 84bf680:	e8 4b e2 bb ff       	call   807d8d0 <strncpy@plt>
 84bf685:	8b 85 75 ff ff ff    	mov    -0x8b(%ebp),%eax
 84bf68b:	85 c0                	test   %eax,%eax
 84bf68d:	0f 84 ba 00 00 00    	je     84bf74d <_ZN18Inter_CreateCharac18process_createGiftEP5CUserP17SIG_CREATE_CHARAC+0x27f>
 84bf693:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84bf696:	89 04 24             	mov    %eax,(%esp)
 84bf699:	e8 68 1c c3 ff       	call   80f1306 <_ZNK5CItem17getExpirationDateEv>
 84bf69e:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84bf6a1:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 84bf6a5:	0f 95 c0             	setne  %al
 84bf6a8:	0f b6 c0             	movzbl %al,%eax
 84bf6ab:	89 85 64 fe ff ff    	mov    %eax,-0x19c(%ebp)
 84bf6b1:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 84bf6b5:	0f 94 c0             	sete   %al
 84bf6b8:	0f b6 f8             	movzbl %al,%edi
 84bf6bb:	8d 85 73 fe ff ff    	lea    -0x18d(%ebp),%eax
 84bf6c1:	89 04 24             	mov    %eax,(%esp)
 84bf6c4:	e8 e7 ec bb ff       	call   807e3b0 <strlen@plt>
 84bf6c9:	89 c6                	mov    %eax,%esi
 84bf6cb:	8b 45 10             	mov    0x10(%ebp),%eax
 84bf6ce:	8b 98 48 53 00 00    	mov    0x5348(%eax),%ebx
 84bf6d4:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84bf6d7:	83 c0 14             	add    $0x14,%eax
 84bf6da:	89 04 24             	mov    %eax,(%esp)
 84bf6dd:	e8 0e 6e 24 00       	call   87064f0 <_ZNKSs5c_strEv>
 84bf6e2:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84bf6e9:	00 
 84bf6ea:	89 44 24 08          	mov    %eax,0x8(%esp)
 84bf6ee:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 84bf6f5:	00 
 84bf6f6:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 84bf6fd:	e8 fc 60 5e 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 84bf702:	8b 95 64 fe ff ff    	mov    -0x19c(%ebp),%edx
 84bf708:	89 54 24 24          	mov    %edx,0x24(%esp)
 84bf70c:	89 7c 24 20          	mov    %edi,0x20(%esp)
 84bf710:	8b 55 d0             	mov    -0x30(%ebp),%edx
 84bf713:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 84bf717:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84bf71a:	89 54 24 18          	mov    %edx,0x18(%esp)
 84bf71e:	89 74 24 14          	mov    %esi,0x14(%esp)
 84bf722:	8d 95 73 fe ff ff    	lea    -0x18d(%ebp),%edx
 84bf728:	89 54 24 10          	mov    %edx,0x10(%esp)
 84bf72c:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84bf730:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84bf737:	00 
 84bf738:	8d 95 73 ff ff ff    	lea    -0x8d(%ebp),%edx
 84bf73e:	89 54 24 04          	mov    %edx,0x4(%esp)
 84bf742:	89 04 24             	mov    %eax,(%esp)
 84bf745:	e8 9e 5e 09 00       	call   85555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>
 84bf74a:	eb 01                	jmp    84bf74d <_ZN18Inter_CreateCharac18process_createGiftEP5CUserP17SIG_CREATE_CHARAC+0x27f>
 84bf74c:	90                   	nop
 84bf74d:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84bf750:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84bf757:	00 
 84bf758:	8d 55 b0             	lea    -0x50(%ebp),%edx
 84bf75b:	89 54 24 04          	mov    %edx,0x4(%esp)
 84bf75f:	89 04 24             	mov    %eax,(%esp)
 84bf762:	e8 9f 21 e8 ff       	call   8341906 <_ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEi>
 84bf767:	83 ec 04             	sub    $0x4,%esp
 84bf76a:	8b 55 dc             	mov    -0x24(%ebp),%edx
 84bf76d:	8d 45 c0             	lea    -0x40(%ebp),%eax
 84bf770:	89 54 24 04          	mov    %edx,0x4(%esp)
 84bf774:	89 04 24             	mov    %eax,(%esp)
 84bf777:	e8 f0 ea bc ff       	call   808e26c <_ZNSt6vectorIiSaIiEE3endEv>
 84bf77c:	83 ec 04             	sub    $0x4,%esp
 84bf77f:	8d 45 c0             	lea    -0x40(%ebp),%eax
 84bf782:	89 44 24 04          	mov    %eax,0x4(%esp)
 84bf786:	8d 45 b0             	lea    -0x50(%ebp),%eax
 84bf789:	89 04 24             	mov    %eax,(%esp)
 84bf78c:	e8 d1 ac c2 ff       	call   80ea462 <_ZN9__gnu_cxxneIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_>
 84bf791:	84 c0                	test   %al,%al
 84bf793:	0f 85 28 fe ff ff    	jne    84bf5c1 <_ZN18Inter_CreateCharac18process_createGiftEP5CUserP17SIG_CREATE_CHARAC+0xf3>
 84bf799:	eb 04                	jmp    84bf79f <_ZN18Inter_CreateCharac18process_createGiftEP5CUserP17SIG_CREATE_CHARAC+0x2d1>
 84bf79b:	90                   	nop
 84bf79c:	eb 01                	jmp    84bf79f <_ZN18Inter_CreateCharac18process_createGiftEP5CUserP17SIG_CREATE_CHARAC+0x2d1>
 84bf79e:	90                   	nop
 84bf79f:	83 45 d8 01          	addl   $0x1,-0x28(%ebp)
 84bf7a3:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84bf7a6:	3b 45 d4             	cmp    -0x2c(%ebp),%eax
 84bf7a9:	0f 92 c0             	setb   %al
 84bf7ac:	84 c0                	test   %al,%al
 84bf7ae:	0f 85 ac fd ff ff    	jne    84bf560 <_ZN18Inter_CreateCharac18process_createGiftEP5CUserP17SIG_CREATE_CHARAC+0x92>
 84bf7b4:	eb 1b                	jmp    84bf7d1 <_ZN18Inter_CreateCharac18process_createGiftEP5CUserP17SIG_CREATE_CHARAC+0x303>
 84bf7b6:	89 d3                	mov    %edx,%ebx
 84bf7b8:	89 c6                	mov    %eax,%esi
 84bf7ba:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84bf7bd:	89 04 24             	mov    %eax,(%esp)
 84bf7c0:	e8 57 ff f0 ff       	call   83cf71c <_ZN17createChracScript14rewardInfoListD1Ev>
 84bf7c5:	89 f0                	mov    %esi,%eax
 84bf7c7:	89 da                	mov    %ebx,%edx
 84bf7c9:	89 04 24             	mov    %eax,(%esp)
 84bf7cc:	e8 7f 3f 62 00       	call   8ae3750 <_Unwind_Resume>
 84bf7d1:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84bf7d4:	89 04 24             	mov    %eax,(%esp)
 84bf7d7:	e8 40 ff f0 ff       	call   83cf71c <_ZN17createChracScript14rewardInfoListD1Ev>
 84bf7dc:	eb 01                	jmp    84bf7df <_ZN18Inter_CreateCharac18process_createGiftEP5CUserP17SIG_CREATE_CHARAC+0x311>
 84bf7de:	90                   	nop
 84bf7df:	8d 65 f4             	lea    -0xc(%ebp),%esp
 84bf7e2:	83 c4 00             	add    $0x0,%esp
 84bf7e5:	5b                   	pop    %ebx
 84bf7e6:	5e                   	pop    %esi
 84bf7e7:	5f                   	pop    %edi
 84bf7e8:	5d                   	pop    %ebp
 84bf7e9:	c3                   	ret

```

```c
// Inter_CreateCharac::process_createGift @ 0x84bf4ce

/* Inter_CreateCharac::process_createGift(CUser*, SIG_CREATE_CHARAC*) */

void __thiscall
Inter_CreateCharac::process_createGift
          (Inter_CreateCharac *this,CUser *param_1,SIG_CREATE_CHARAC *param_2)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  CDataManager *pCVar5;
  int *piVar6;
  char *pcVar7;
  size_t sVar8;
  undefined4 uVar9;
  bool bVar10;
  char local_191 [256];
  Inven_Item local_91 [2];
  int local_8f;
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_54 [4];
  rewardInfoList local_50 [12];
  __normal_iterator local_44 [4];
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_40 [4];
  int local_3c;
  int local_38;
  undefined4 local_34;
  uint local_30;
  uint local_2c;
  int local_28;
  CItem *local_24;
  int local_20;
  
  if (param_1 != (CUser *)0x0) {
    local_3c = (int)(char)param_2[0x22];
    createChracScript::rewardInfoList::rewardInfoList(local_50);
                    /* try { // try from 084bf4fc to 084bf790 has its CatchHandler @ 084bf7b6 */
    pCVar5 = (CDataManager *)G_CDataManager();
    CDataManager::get_createCharacterGift(pCVar5,local_3c,local_50);
    cVar3 = std::vector<createChracScript::rewardInfo,std::allocator<createChracScript::rewardInfo>>
            ::empty();
    if (cVar3 == '\0') {
      local_38 = CUser::getRegTime(param_1);
      local_34 = CUser::GetServerGroupToPvP(param_1);
      local_30 = std::
                 vector<createChracScript::rewardInfo,std::allocator<createChracScript::rewardInfo>>
                 ::size((vector<createChracScript::rewardInfo,std::allocator<createChracScript::rewardInfo>>
                         *)local_50);
      for (local_2c = 0; local_2c < local_30; local_2c = local_2c + 1) {
        local_28 = std::
                   vector<createChracScript::rewardInfo,std::allocator<createChracScript::rewardInfo>>
                   ::operator[]((vector<createChracScript::rewardInfo,std::allocator<createChracScript::rewardInfo>>
                                 *)local_50,local_2c);
        if (((*(int *)(local_28 + 0xc) < 1) || (*(int *)(local_28 + 0xc) <= local_38)) &&
           ((*(int *)(local_28 + 0x10) < 1 || (local_38 < *(int *)(local_28 + 0x10))))) {
          std::vector<int,std::allocator<int>>::begin();
          while( true ) {
            std::vector<int,std::allocator<int>>::end();
            bVar4 = __gnu_cxx::operator!=(local_54,local_44);
            if (!bVar4) break;
            Inven_Item::Inven_Item(local_91);
            piVar6 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>
                            ::operator*(local_54);
            iVar1 = *piVar6;
            pCVar5 = (CDataManager *)G_CDataManager();
            local_24 = (CItem *)CDataManager::find_item(pCVar5,iVar1);
            if (local_24 != (CItem *)0x0) {
              local_8f = CItem::get_index(local_24);
              (**(code **)(*(int *)local_24 + 8))(local_24,local_91);
              Inven_Item::set_add_info(local_91,1);
              pcVar7 = (char *)std::string::c_str((string *)(local_28 + 0x18));
              pcVar7 = (char *)RDARScriptStringManager::findString
                                         ((RDARScriptStringManager *)g_scriptStringManager_,4,pcVar7
                                          ,(bool *)0x0);
              strncpy(local_191,pcVar7,0xff);
              if (local_8f != 0) {
                local_20 = CItem::getExpirationDate(local_24);
                bVar4 = local_20 != 0;
                bVar10 = local_20 == 0;
                sVar8 = strlen(local_191);
                uVar2 = *(undefined4 *)(param_2 + 0x5348);
                pcVar7 = (char *)std::string::c_str((string *)(local_28 + 0x14));
                uVar9 = RDARScriptStringManager::findString
                                  ((RDARScriptStringManager *)g_scriptStringManager_,4,pcVar7,
                                   (bool *)0x0);
                WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                          (uVar9,local_91,0,uVar2,local_191,sVar8,local_20,local_34,bVar10,bVar4);
              }
            }
            __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                      (local_40,(int)local_54);
          }
        }
      }
    }
    createChracScript::rewardInfoList::~rewardInfoList(local_50);
  }
  return;
}

```

---

## process_event

```asm
// === 084bf4ac Inter_CreateCharac::process_event  [0x084bf4ac-0x84bf4cd] ===
 84bf4ac:	55                   	push   %ebp
 84bf4ad:	89 e5                	mov    %esp,%ebp
 84bf4af:	83 ec 18             	sub    $0x18,%esp
 84bf4b2:	8b 45 10             	mov    0x10(%ebp),%eax
 84bf4b5:	89 44 24 08          	mov    %eax,0x8(%esp)
 84bf4b9:	8b 45 0c             	mov    0xc(%ebp),%eax
 84bf4bc:	89 44 24 04          	mov    %eax,0x4(%esp)
 84bf4c0:	8b 45 08             	mov    0x8(%ebp),%eax
 84bf4c3:	89 04 24             	mov    %eax,(%esp)
 84bf4c6:	e8 03 00 00 00       	call   84bf4ce <_ZN18Inter_CreateCharac18process_createGiftEP5CUserP17SIG_CREATE_CHARAC>
 84bf4cb:	c9                   	leave
 84bf4cc:	c3                   	ret
 84bf4cd:	90                   	nop

```

```c
// Inter_CreateCharac::process_event @ 0x84bf4ac

/* Inter_CreateCharac::process_event(CUser*, SIG_CREATE_CHARAC*) */

void __thiscall
Inter_CreateCharac::process_event
          (Inter_CreateCharac *this,CUser *param_1,SIG_CREATE_CHARAC *param_2)

{
  process_createGift(this,param_1,param_2);
  return;
}

```

