# Inter_GuildBoardData

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084dee6a Inter_GuildBoardData::dispatch_sig  [0x084dee6a-0x84df2ab] ===
 84dee6a:	55                   	push   %ebp
 84dee6b:	89 e5                	mov    %esp,%ebp
 84dee6d:	57                   	push   %edi
 84dee6e:	56                   	push   %esi
 84dee6f:	53                   	push   %ebx
 84dee70:	83 ec 6c             	sub    $0x6c,%esp
 84dee73:	8b 45 10             	mov    0x10(%ebp),%eax
 84dee76:	89 45 d8             	mov    %eax,-0x28(%ebp)
 84dee79:	8b 45 0c             	mov    0xc(%ebp),%eax
 84dee7c:	89 04 24             	mov    %eax,(%esp)
 84dee7f:	e8 08 b5 bf ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84dee84:	83 f8 02             	cmp    $0x2,%eax
 84dee87:	0f 9e c0             	setle  %al
 84dee8a:	84 c0                	test   %al,%al
 84dee8c:	74 0a                	je     84dee98 <_ZN20Inter_GuildBoardData12dispatch_sigEP5CUserPci+0x2e>
 84dee8e:	bb 00 00 00 00       	mov    $0x0,%ebx
 84dee93:	e9 09 04 00 00       	jmp    84df2a1 <_ZN20Inter_GuildBoardData12dispatch_sigEP5CUserPci+0x437>
 84dee98:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84dee9f:	ff 
 84deea0:	8b 45 0c             	mov    0xc(%ebp),%eax
 84deea3:	89 04 24             	mov    %eax,(%esp)
 84deea6:	e8 f5 f0 16 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84deeab:	89 c2                	mov    %eax,%edx
 84deead:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84deeb0:	8b 40 13             	mov    0x13(%eax),%eax
 84deeb3:	39 c2                	cmp    %eax,%edx
 84deeb5:	0f 95 c0             	setne  %al
 84deeb8:	84 c0                	test   %al,%al
 84deeba:	74 0a                	je     84deec6 <_ZN20Inter_GuildBoardData12dispatch_sigEP5CUserPci+0x5c>
 84deebc:	bb 00 00 00 00       	mov    $0x0,%ebx
 84deec1:	e9 db 03 00 00       	jmp    84df2a1 <_ZN20Inter_GuildBoardData12dispatch_sigEP5CUserPci+0x437>
 84deec6:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84deec9:	89 04 24             	mov    %eax,(%esp)
 84deecc:	e8 7b ee 0a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84deed1:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84deed4:	0f b7 40 0c          	movzwl 0xc(%eax),%eax
 84deed8:	0f b7 c0             	movzwl %ax,%eax
 84deedb:	3d 2a 23 00 00       	cmp    $0x232a,%eax
 84deee0:	74 09                	je     84deeeb <_ZN20Inter_GuildBoardData12dispatch_sigEP5CUserPci+0x81>
 84deee2:	3d 2e 23 00 00       	cmp    $0x232e,%eax
 84deee7:	74 1f                	je     84def08 <_ZN20Inter_GuildBoardData12dispatch_sigEP5CUserPci+0x9e>
 84deee9:	eb 38                	jmp    84def23 <_ZN20Inter_GuildBoardData12dispatch_sigEP5CUserPci+0xb9>
 84deeeb:	c7 44 24 08 55 01 00 	movl   $0x155,0x8(%esp)
 84deef2:	00 
 84deef3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84deefa:	00 
 84deefb:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84deefe:	89 04 24             	mov    %eax,(%esp)
 84def01:	e8 f6 c9 be ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84def06:	eb 1b                	jmp    84def23 <_ZN20Inter_GuildBoardData12dispatch_sigEP5CUserPci+0xb9>
 84def08:	c7 44 24 08 56 01 00 	movl   $0x156,0x8(%esp)
 84def0f:	00 
 84def10:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84def17:	00 
 84def18:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84def1b:	89 04 24             	mov    %eax,(%esp)
 84def1e:	e8 d9 c9 be ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84def23:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84def26:	0f b7 40 0a          	movzwl 0xa(%eax),%eax
 84def2a:	66 85 c0             	test   %ax,%ax
 84def2d:	0f 85 f0 02 00 00    	jne    84df223 <_ZN20Inter_GuildBoardData12dispatch_sigEP5CUserPci+0x3b9>
 84def33:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84def3a:	00 
 84def3b:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84def3e:	89 04 24             	mov    %eax,(%esp)
 84def41:	e8 da c9 be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84def46:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84def49:	0f b6 40 0e          	movzbl 0xe(%eax),%eax
 84def4d:	0f b6 c0             	movzbl %al,%eax
 84def50:	89 44 24 04          	mov    %eax,0x4(%esp)
 84def54:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84def57:	89 04 24             	mov    %eax,(%esp)
 84def5a:	e8 c1 c9 be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84def5f:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84def62:	0f b6 40 17          	movzbl 0x17(%eax),%eax
 84def66:	0f be c0             	movsbl %al,%eax
 84def69:	89 44 24 04          	mov    %eax,0x4(%esp)
 84def6d:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84def70:	89 04 24             	mov    %eax,(%esp)
 84def73:	e8 a8 c9 be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84def78:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 84def7f:	e9 06 02 00 00       	jmp    84df18a <_ZN20Inter_GuildBoardData12dispatch_sigEP5CUserPci+0x320>
 84def84:	c6 45 e3 00          	movb   $0x0,-0x1d(%ebp)
 84def88:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84def8b:	8b 55 d8             	mov    -0x28(%ebp),%edx
 84def8e:	69 c0 a5 00 00 00    	imul   $0xa5,%eax,%eax
 84def94:	8d 04 02             	lea    (%edx,%eax,1),%eax
 84def97:	05 9e 00 00 00       	add    $0x9e,%eax
 84def9c:	0f b6 00             	movzbl (%eax),%eax
 84def9f:	3c 01                	cmp    $0x1,%al
 84defa1:	75 04                	jne    84defa7 <_ZN20Inter_GuildBoardData12dispatch_sigEP5CUserPci+0x13d>
 84defa3:	c6 45 e3 01          	movb   $0x1,-0x1d(%ebp)
 84defa7:	0f b6 45 e3          	movzbl -0x1d(%ebp),%eax
 84defab:	89 44 24 04          	mov    %eax,0x4(%esp)
 84defaf:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84defb2:	89 04 24             	mov    %eax,(%esp)
 84defb5:	e8 66 c9 be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84defba:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84defbd:	8b 55 d8             	mov    -0x28(%ebp),%edx
 84defc0:	69 c0 a5 00 00 00    	imul   $0xa5,%eax,%eax
 84defc6:	8d 04 02             	lea    (%edx,%eax,1),%eax
 84defc9:	05 9c 00 00 00       	add    $0x9c,%eax
 84defce:	0f b6 00             	movzbl (%eax),%eax
 84defd1:	0f be c0             	movsbl %al,%eax
 84defd4:	89 44 24 04          	mov    %eax,0x4(%esp)
 84defd8:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84defdb:	89 04 24             	mov    %eax,(%esp)
 84defde:	e8 3d c9 be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84defe3:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84defea:	ff 
 84defeb:	8b 45 0c             	mov    0xc(%ebp),%eax
 84defee:	89 04 24             	mov    %eax,(%esp)
 84deff1:	e8 aa ef 16 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84deff6:	89 c2                	mov    %eax,%edx
 84deff8:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84deffb:	8b 4d d8             	mov    -0x28(%ebp),%ecx
 84deffe:	69 c0 a5 00 00 00    	imul   $0xa5,%eax,%eax
 84df004:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84df007:	05 90 00 00 00       	add    $0x90,%eax
 84df00c:	8b 40 08             	mov    0x8(%eax),%eax
 84df00f:	39 c2                	cmp    %eax,%edx
 84df011:	0f 94 c0             	sete   %al
 84df014:	84 c0                	test   %al,%al
 84df016:	74 15                	je     84df02d <_ZN20Inter_GuildBoardData12dispatch_sigEP5CUserPci+0x1c3>
 84df018:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84df01f:	00 
 84df020:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84df023:	89 04 24             	mov    %eax,(%esp)
 84df026:	e8 f5 c8 be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84df02b:	eb 13                	jmp    84df040 <_ZN20Inter_GuildBoardData12dispatch_sigEP5CUserPci+0x1d6>
 84df02d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84df034:	00 
 84df035:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84df038:	89 04 24             	mov    %eax,(%esp)
 84df03b:	e8 e0 c8 be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84df040:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84df043:	69 c0 a5 00 00 00    	imul   $0xa5,%eax,%eax
 84df049:	05 90 00 00 00       	add    $0x90,%eax
 84df04e:	03 45 d8             	add    -0x28(%ebp),%eax
 84df051:	83 c0 0f             	add    $0xf,%eax
 84df054:	89 04 24             	mov    %eax,(%esp)
 84df057:	e8 54 f3 b9 ff       	call   807e3b0 <strlen@plt>
 84df05c:	89 44 24 04          	mov    %eax,0x4(%esp)
 84df060:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84df063:	89 04 24             	mov    %eax,(%esp)
 84df066:	e8 d1 c8 be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84df06b:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84df06e:	69 c0 a5 00 00 00    	imul   $0xa5,%eax,%eax
 84df074:	05 90 00 00 00       	add    $0x90,%eax
 84df079:	03 45 d8             	add    -0x28(%ebp),%eax
 84df07c:	83 c0 0f             	add    $0xf,%eax
 84df07f:	89 04 24             	mov    %eax,(%esp)
 84df082:	e8 29 f3 b9 ff       	call   807e3b0 <strlen@plt>
 84df087:	8b 55 dc             	mov    -0x24(%ebp),%edx
 84df08a:	69 d2 a5 00 00 00    	imul   $0xa5,%edx,%edx
 84df090:	81 c2 90 00 00 00    	add    $0x90,%edx
 84df096:	03 55 d8             	add    -0x28(%ebp),%edx
 84df099:	83 c2 0f             	add    $0xf,%edx
 84df09c:	89 44 24 08          	mov    %eax,0x8(%esp)
 84df0a0:	89 54 24 04          	mov    %edx,0x4(%esp)
 84df0a4:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84df0a7:	89 04 24             	mov    %eax,(%esp)
 84df0aa:	e8 35 83 cd ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84df0af:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84df0b2:	8b 55 d8             	mov    -0x28(%ebp),%edx
 84df0b5:	69 c0 a5 00 00 00    	imul   $0xa5,%eax,%eax
 84df0bb:	8d 04 02             	lea    (%edx,%eax,1),%eax
 84df0be:	83 e8 80             	sub    $0xffffff80,%eax
 84df0c1:	8b 40 14             	mov    0x14(%eax),%eax
 84df0c4:	89 44 24 04          	mov    %eax,0x4(%esp)
 84df0c8:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84df0cb:	89 04 24             	mov    %eax,(%esp)
 84df0ce:	e8 69 c8 be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84df0d3:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 84df0da:	e8 bf cb be ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 84df0df:	89 c2                	mov    %eax,%edx
 84df0e1:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84df0e4:	8b 4d d8             	mov    -0x28(%ebp),%ecx
 84df0e7:	69 c0 a5 00 00 00    	imul   $0xa5,%eax,%eax
 84df0ed:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84df0f0:	83 e8 80             	sub    $0xffffff80,%eax
 84df0f3:	8b 40 10             	mov    0x10(%eax),%eax
 84df0f6:	89 d1                	mov    %edx,%ecx
 84df0f8:	29 c1                	sub    %eax,%ecx
 84df0fa:	89 c8                	mov    %ecx,%eax
 84df0fc:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84df0ff:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 84df103:	79 07                	jns    84df10c <_ZN20Inter_GuildBoardData12dispatch_sigEP5CUserPci+0x2a2>
 84df105:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 84df10c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84df10f:	89 44 24 04          	mov    %eax,0x4(%esp)
 84df113:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84df116:	89 04 24             	mov    %eax,(%esp)
 84df119:	e8 1e c8 be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84df11e:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84df121:	69 c0 a5 00 00 00    	imul   $0xa5,%eax,%eax
 84df127:	83 c0 10             	add    $0x10,%eax
 84df12a:	03 45 d8             	add    -0x28(%ebp),%eax
 84df12d:	83 c0 08             	add    $0x8,%eax
 84df130:	89 04 24             	mov    %eax,(%esp)
 84df133:	e8 78 f2 b9 ff       	call   807e3b0 <strlen@plt>
 84df138:	89 44 24 04          	mov    %eax,0x4(%esp)
 84df13c:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84df13f:	89 04 24             	mov    %eax,(%esp)
 84df142:	e8 f5 c7 be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84df147:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84df14a:	69 c0 a5 00 00 00    	imul   $0xa5,%eax,%eax
 84df150:	83 c0 10             	add    $0x10,%eax
 84df153:	03 45 d8             	add    -0x28(%ebp),%eax
 84df156:	83 c0 08             	add    $0x8,%eax
 84df159:	89 04 24             	mov    %eax,(%esp)
 84df15c:	e8 4f f2 b9 ff       	call   807e3b0 <strlen@plt>
 84df161:	8b 55 dc             	mov    -0x24(%ebp),%edx
 84df164:	69 d2 a5 00 00 00    	imul   $0xa5,%edx,%edx
 84df16a:	83 c2 10             	add    $0x10,%edx
 84df16d:	03 55 d8             	add    -0x28(%ebp),%edx
 84df170:	83 c2 08             	add    $0x8,%edx
 84df173:	89 44 24 08          	mov    %eax,0x8(%esp)
 84df177:	89 54 24 04          	mov    %edx,0x4(%esp)
 84df17b:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84df17e:	89 04 24             	mov    %eax,(%esp)
 84df181:	e8 5e 82 cd ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84df186:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 84df18a:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84df18d:	0f b6 40 17          	movzbl 0x17(%eax),%eax
 84df191:	0f be c0             	movsbl %al,%eax
 84df194:	3b 45 dc             	cmp    -0x24(%ebp),%eax
 84df197:	0f 9f c0             	setg   %al
 84df19a:	84 c0                	test   %al,%al
 84df19c:	0f 85 e2 fd ff ff    	jne    84def84 <_ZN20Inter_GuildBoardData12dispatch_sigEP5CUserPci+0x11a>
 84df1a2:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84df1a5:	0f b6 40 17          	movzbl 0x17(%eax),%eax
 84df1a9:	0f be c0             	movsbl %al,%eax
 84df1ac:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 84df1af:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84df1b2:	0f b6 40 0e          	movzbl 0xe(%eax),%eax
 84df1b6:	0f b6 f8             	movzbl %al,%edi
 84df1b9:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84df1bc:	0f b7 40 0c          	movzwl 0xc(%eax),%eax
 84df1c0:	0f b7 f0             	movzwl %ax,%esi
 84df1c3:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84df1ca:	ff 
 84df1cb:	8b 45 0c             	mov    0xc(%ebp),%eax
 84df1ce:	89 04 24             	mov    %eax,(%esp)
 84df1d1:	e8 ca ed 16 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84df1d6:	89 c3                	mov    %eax,%ebx
 84df1d8:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84df1df:	00 
 84df1e0:	c7 44 24 08 51 4b 00 	movl   $0x4b51,0x8(%esp)
 84df1e7:	00 
 84df1e8:	c7 44 24 04 a0 bb c8 	movl   $0x8c8bba0,0x4(%esp)
 84df1ef:	08 
 84df1f0:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84df1f3:	89 04 24             	mov    %eax,(%esp)
 84df1f6:	e8 1d 05 07 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84df1fb:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 84df1fe:	89 44 24 14          	mov    %eax,0x14(%esp)
 84df202:	89 7c 24 10          	mov    %edi,0x10(%esp)
 84df206:	89 74 24 0c          	mov    %esi,0xc(%esp)
 84df20a:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84df20e:	c7 44 24 04 e0 99 c8 	movl   $0x8c899e0,0x4(%esp)
 84df215:	08 
 84df216:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84df219:	89 04 24             	mov    %eax,(%esp)
 84df21c:	e8 67 05 07 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84df221:	eb 2c                	jmp    84df24f <_ZN20Inter_GuildBoardData12dispatch_sigEP5CUserPci+0x3e5>
 84df223:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84df22a:	00 
 84df22b:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84df22e:	89 04 24             	mov    %eax,(%esp)
 84df231:	e8 ea c6 be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84df236:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84df239:	0f b7 40 0a          	movzwl 0xa(%eax),%eax
 84df23d:	0f b7 c0             	movzwl %ax,%eax
 84df240:	89 44 24 04          	mov    %eax,0x4(%esp)
 84df244:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84df247:	89 04 24             	mov    %eax,(%esp)
 84df24a:	e8 55 ac bf ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 84df24f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84df256:	00 
 84df257:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84df25a:	89 04 24             	mov    %eax,(%esp)
 84df25d:	e8 f6 c6 be ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84df262:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84df265:	89 44 24 04          	mov    %eax,0x4(%esp)
 84df269:	8b 45 0c             	mov    0xc(%ebp),%eax
 84df26c:	89 04 24             	mov    %eax,(%esp)
 84df26f:	e8 46 93 16 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84df274:	bb 00 00 00 00       	mov    $0x0,%ebx
 84df279:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84df27c:	89 04 24             	mov    %eax,(%esp)
 84df27f:	e8 fc eb 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84df284:	eb 1b                	jmp    84df2a1 <_ZN20Inter_GuildBoardData12dispatch_sigEP5CUserPci+0x437>
 84df286:	89 d3                	mov    %edx,%ebx
 84df288:	89 c6                	mov    %eax,%esi
 84df28a:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84df28d:	89 04 24             	mov    %eax,(%esp)
 84df290:	e8 eb eb 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84df295:	89 f0                	mov    %esi,%eax
 84df297:	89 da                	mov    %ebx,%edx
 84df299:	89 04 24             	mov    %eax,(%esp)
 84df29c:	e8 af 44 60 00       	call   8ae3750 <_Unwind_Resume>
 84df2a1:	89 d8                	mov    %ebx,%eax
 84df2a3:	83 c4 6c             	add    $0x6c,%esp
 84df2a6:	5b                   	pop    %ebx
 84df2a7:	5e                   	pop    %esi
 84df2a8:	5f                   	pop    %edi
 84df2a9:	5d                   	pop    %ebp
 84df2aa:	c3                   	ret
 84df2ab:	90                   	nop

```

```c
// Inter_GuildBoardData::dispatch_sig @ 0x84dee6a

/* Inter_GuildBoardData::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_GuildBoardData::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  size_t sVar5;
  undefined4 uVar6;
  PacketGuard local_48 [12];
  cMyTrace local_3c [16];
  int local_2c;
  int local_28;
  undefined1 local_21;
  int local_20;
  
  local_2c = param_3;
  iVar4 = CUser::get_state((CUser *)param_2);
  if ((2 < iVar4) &&
     (iVar4 = CUser::get_charac_no((CUser *)param_2,-1), iVar4 == *(int *)(local_2c + 0x13))) {
    PacketGuard::PacketGuard(local_48);
    if (*(short *)(local_2c + 0xc) == 0x232a) {
                    /* try { // try from 084def01 to 084df273 has its CatchHandler @ 084df286 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_48,1,0x155);
    }
    else if (*(short *)(local_2c + 0xc) == 0x232e) {
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_48,1,0x156);
    }
    if (*(short *)(local_2c + 10) == 0) {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_48,1);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_48,(uint)*(byte *)(local_2c + 0xe));
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_48,(int)*(char *)(local_2c + 0x17));
      for (local_28 = 0; local_28 < *(char *)(local_2c + 0x17); local_28 = local_28 + 1) {
        local_21 = *(char *)(local_2c + local_28 * 0xa5 + 0x9e) == '\x01';
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_48,(uint)(byte)local_21);
        InterfacePacketBuf::put_byte
                  ((InterfacePacketBuf *)local_48,(int)*(char *)(local_2c + local_28 * 0xa5 + 0x9c))
        ;
        iVar4 = CUser::get_charac_no((CUser *)param_2,-1);
        if (iVar4 == *(int *)(local_2c + local_28 * 0xa5 + 0x98)) {
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_48,1);
        }
        else {
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_48,0);
        }
        sVar5 = strlen((char *)(local_28 * 0xa5 + local_2c + 0x9f));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_48,sVar5);
        sVar5 = strlen((char *)(local_28 * 0xa5 + local_2c + 0x9f));
        InterfacePacketBuf::put_str
                  ((InterfacePacketBuf *)local_48,(char *)(local_28 * 0xa5 + local_2c + 0x9f),sVar5)
        ;
        InterfacePacketBuf::put_int
                  ((InterfacePacketBuf *)local_48,*(int *)(local_2c + local_28 * 0xa5 + 0x94));
        local_20 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        local_20 = local_20 - *(int *)(local_2c + local_28 * 0xa5 + 0x90);
        if (local_20 < 0) {
          local_20 = 0;
        }
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_48,local_20);
        sVar5 = strlen((char *)(local_28 * 0xa5 + local_2c + 0x18));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_48,sVar5);
        sVar5 = strlen((char *)(local_28 * 0xa5 + local_2c + 0x18));
        InterfacePacketBuf::put_str
                  ((InterfacePacketBuf *)local_48,(char *)(local_28 * 0xa5 + local_2c + 0x18),sVar5)
        ;
      }
      cVar1 = *(char *)(local_2c + 0x17);
      bVar2 = *(byte *)(local_2c + 0xe);
      uVar3 = *(ushort *)(local_2c + 0xc);
      uVar6 = CUser::get_charac_no((CUser *)param_2,-1);
      cMyTrace::cMyTrace(local_3c,
                         "virtual int Inter_GuildBoardData::dispatch_sig(CUser*, char*, int)",0x4b51
                         ,0);
      cMyTrace::operator()
                (local_3c,
                 "GUILD_BOARD : CHARAC NO : %u, CODE : %u, TOTAL CNT : %u, CNT : %u : BOARD DATA SEND!!"
                 ,uVar6,(uint)uVar3,(uint)bVar2,(int)cVar1);
    }
    else {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_48,0);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_48,(uint)*(ushort *)(local_2c + 10))
      ;
    }
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_48,true);
    CUser::Send((CUser *)param_2,local_48);
    PacketGuard::~PacketGuard(local_48);
  }
  return 0;
}

```

