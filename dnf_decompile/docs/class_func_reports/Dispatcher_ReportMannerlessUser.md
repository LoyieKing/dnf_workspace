# Dispatcher_ReportMannerlessUser

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08206124 Dispatcher_ReportMannerlessUser::dispatch_sig  [0x08206124-0x82064d5] ===
 8206124:	55                   	push   %ebp
 8206125:	89 e5                	mov    %esp,%ebp
 8206127:	53                   	push   %ebx
 8206128:	81 ec d4 01 00 00    	sub    $0x1d4,%esp
 820612e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8206131:	89 04 24             	mov    %eax,(%esp)
 8206134:	e8 53 42 ed ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8206139:	83 f8 02             	cmp    $0x2,%eax
 820613c:	7e 0f                	jle    820614d <_ZN31Dispatcher_ReportMannerlessUser12dispatch_sigEP5CUserR9PacketBuf+0x29>
 820613e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8206141:	89 04 24             	mov    %eax,(%esp)
 8206144:	e8 e9 a2 f1 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 8206149:	85 c0                	test   %eax,%eax
 820614b:	75 07                	jne    8206154 <_ZN31Dispatcher_ReportMannerlessUser12dispatch_sigEP5CUserR9PacketBuf+0x30>
 820614d:	b8 01 00 00 00       	mov    $0x1,%eax
 8206152:	eb 05                	jmp    8206159 <_ZN31Dispatcher_ReportMannerlessUser12dispatch_sigEP5CUserR9PacketBuf+0x35>
 8206154:	b8 00 00 00 00       	mov    $0x0,%eax
 8206159:	84 c0                	test   %al,%al
 820615b:	74 29                	je     8206186 <_ZN31Dispatcher_ReportMannerlessUser12dispatch_sigEP5CUserR9PacketBuf+0x62>
 820615d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8206164:	00 
 8206165:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 820616c:	00 
 820616d:	c7 44 24 04 a0 ec bc 	movl   $0x8bceca0,0x4(%esp)
 8206174:	08 
 8206175:	c7 04 24 84 9f 00 00 	movl   $0x9f84,(%esp)
 820617c:	e8 56 a7 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8206181:	e9 4a 03 00 00       	jmp    82064d0 <_ZN31Dispatcher_ReportMannerlessUser12dispatch_sigEP5CUserR9PacketBuf+0x3ac>
 8206186:	8d 85 41 fe ff ff    	lea    -0x1bf(%ebp),%eax
 820618c:	89 04 24             	mov    %eax,(%esp)
 820618f:	e8 52 60 02 00       	call   822c1e6 <_ZN33Packet_Mannerless_User_AccusationC1Ev>
 8206194:	8b 45 0c             	mov    0xc(%ebp),%eax
 8206197:	89 04 24             	mov    %eax,(%esp)
 820619a:	e8 af 5a ec ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 820619f:	89 85 4f fe ff ff    	mov    %eax,-0x1b1(%ebp)
 82061a5:	8b 45 0c             	mov    0xc(%ebp),%eax
 82061a8:	89 04 24             	mov    %eax,(%esp)
 82061ab:	e8 e6 2a ec ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 82061b0:	89 85 4b fe ff ff    	mov    %eax,-0x1b5(%ebp)
 82061b6:	c7 45 b0 04 00 00 00 	movl   $0x4,-0x50(%ebp)
 82061bd:	8d 45 b0             	lea    -0x50(%ebp),%eax
 82061c0:	89 44 24 04          	mov    %eax,0x4(%esp)
 82061c4:	8b 45 10             	mov    0x10(%ebp),%eax
 82061c7:	89 04 24             	mov    %eax,(%esp)
 82061ca:	e8 21 6f 38 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 82061cf:	83 f0 01             	xor    $0x1,%eax
 82061d2:	84 c0                	test   %al,%al
 82061d4:	75 08                	jne    82061de <_ZN31Dispatcher_ReportMannerlessUser12dispatch_sigEP5CUserR9PacketBuf+0xba>
 82061d6:	8b 45 b0             	mov    -0x50(%ebp),%eax
 82061d9:	83 f8 03             	cmp    $0x3,%eax
 82061dc:	7e 07                	jle    82061e5 <_ZN31Dispatcher_ReportMannerlessUser12dispatch_sigEP5CUserR9PacketBuf+0xc1>
 82061de:	b8 01 00 00 00       	mov    $0x1,%eax
 82061e3:	eb 05                	jmp    82061ea <_ZN31Dispatcher_ReportMannerlessUser12dispatch_sigEP5CUserR9PacketBuf+0xc6>
 82061e5:	b8 00 00 00 00       	mov    $0x0,%eax
 82061ea:	84 c0                	test   %al,%al
 82061ec:	74 29                	je     8206217 <_ZN31Dispatcher_ReportMannerlessUser12dispatch_sigEP5CUserR9PacketBuf+0xf3>
 82061ee:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82061f5:	00 
 82061f6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82061fd:	00 
 82061fe:	c7 44 24 04 a0 ec bc 	movl   $0x8bceca0,0x4(%esp)
 8206205:	08 
 8206206:	c7 04 24 8e 9f 00 00 	movl   $0x9f8e,(%esp)
 820620d:	e8 c5 a6 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8206212:	e9 b9 02 00 00       	jmp    82064d0 <_ZN31Dispatcher_ReportMannerlessUser12dispatch_sigEP5CUserR9PacketBuf+0x3ac>
 8206217:	8b 45 b0             	mov    -0x50(%ebp),%eax
 820621a:	89 85 53 fe ff ff    	mov    %eax,-0x1ad(%ebp)
 8206220:	8b 45 0c             	mov    0xc(%ebp),%eax
 8206223:	89 04 24             	mov    %eax,(%esp)
 8206226:	e8 43 41 ed ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 820622b:	89 85 5f fe ff ff    	mov    %eax,-0x1a1(%ebp)
 8206231:	8b 45 0c             	mov    0xc(%ebp),%eax
 8206234:	89 04 24             	mov    %eax,(%esp)
 8206237:	e8 ec ad ef ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 820623c:	89 04 24             	mov    %eax,(%esp)
 820623f:	e8 6c 81 e7 ff       	call   807e3b0 <strlen@plt>
 8206244:	89 45 ac             	mov    %eax,-0x54(%ebp)
 8206247:	c7 45 b4 1d 00 00 00 	movl   $0x1d,-0x4c(%ebp)
 820624e:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8206251:	89 44 24 04          	mov    %eax,0x4(%esp)
 8206255:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8206258:	89 04 24             	mov    %eax,(%esp)
 820625b:	e8 31 fe 02 00       	call   8236091 <_ZSt3minIjERKT_S2_S2_>
 8206260:	8b 18                	mov    (%eax),%ebx
 8206262:	8b 45 0c             	mov    0xc(%ebp),%eax
 8206265:	89 04 24             	mov    %eax,(%esp)
 8206268:	e8 bb ad ef ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 820626d:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8206271:	89 44 24 04          	mov    %eax,0x4(%esp)
 8206275:	8d 85 41 fe ff ff    	lea    -0x1bf(%ebp),%eax
 820627b:	83 c0 22             	add    $0x22,%eax
 820627e:	89 04 24             	mov    %eax,(%esp)
 8206281:	e8 4a 76 e7 ff       	call   807d8d0 <strncpy@plt>
 8206286:	c6 45 ab 00          	movb   $0x0,-0x55(%ebp)
 820628a:	8d 45 ab             	lea    -0x55(%ebp),%eax
 820628d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8206291:	8b 45 10             	mov    0x10(%ebp),%eax
 8206294:	89 04 24             	mov    %eax,(%esp)
 8206297:	e8 d4 6c 38 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 820629c:	0f b6 45 ab          	movzbl -0x55(%ebp),%eax
 82062a0:	0f b6 c0             	movzbl %al,%eax
 82062a3:	89 85 5b fe ff ff    	mov    %eax,-0x1a5(%ebp)
 82062a9:	8b 85 5b fe ff ff    	mov    -0x1a5(%ebp),%eax
 82062af:	83 f8 64             	cmp    $0x64,%eax
 82062b2:	7e 29                	jle    82062dd <_ZN31Dispatcher_ReportMannerlessUser12dispatch_sigEP5CUserR9PacketBuf+0x1b9>
 82062b4:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82062bb:	00 
 82062bc:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82062c3:	00 
 82062c4:	c7 44 24 04 a0 ec bc 	movl   $0x8bceca0,0x4(%esp)
 82062cb:	08 
 82062cc:	c7 04 24 a0 9f 00 00 	movl   $0x9fa0,(%esp)
 82062d3:	e8 ff a5 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 82062d8:	e9 f3 01 00 00       	jmp    82064d0 <_ZN31Dispatcher_ReportMannerlessUser12dispatch_sigEP5CUserR9PacketBuf+0x3ac>
 82062dd:	8b 85 5b fe ff ff    	mov    -0x1a5(%ebp),%eax
 82062e3:	85 c0                	test   %eax,%eax
 82062e5:	75 21                	jne    8206308 <_ZN31Dispatcher_ReportMannerlessUser12dispatch_sigEP5CUserR9PacketBuf+0x1e4>
 82062e7:	e8 95 5e ec ff       	call   80cc181 <_Z14G_CEnvironmentv>
 82062ec:	89 04 24             	mov    %eax,(%esp)
 82062ef:	e8 ec 09 f0 ff       	call   8106ce0 <_ZN12CEnvironment16get_server_groupEv>
 82062f4:	89 85 5b fe ff ff    	mov    %eax,-0x1a5(%ebp)
 82062fa:	8b 85 5b fe ff ff    	mov    -0x1a5(%ebp),%eax
 8206300:	89 85 57 fe ff ff    	mov    %eax,-0x1a9(%ebp)
 8206306:	eb 11                	jmp    8206319 <_ZN31Dispatcher_ReportMannerlessUser12dispatch_sigEP5CUserR9PacketBuf+0x1f5>
 8206308:	8b 45 0c             	mov    0xc(%ebp),%eax
 820630b:	89 04 24             	mov    %eax,(%esp)
 820630e:	e8 7d 59 ec ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 8206313:	89 85 57 fe ff ff    	mov    %eax,-0x1a9(%ebp)
 8206319:	c7 45 a4 00 00 00 00 	movl   $0x0,-0x5c(%ebp)
 8206320:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8206323:	89 44 24 04          	mov    %eax,0x4(%esp)
 8206327:	8b 45 10             	mov    0x10(%ebp),%eax
 820632a:	89 04 24             	mov    %eax,(%esp)
 820632d:	e8 0e 6f 38 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 8206332:	83 f0 01             	xor    $0x1,%eax
 8206335:	84 c0                	test   %al,%al
 8206337:	74 0a                	je     8206343 <_ZN31Dispatcher_ReportMannerlessUser12dispatch_sigEP5CUserR9PacketBuf+0x21f>
 8206339:	b8 00 00 00 00       	mov    $0x0,%eax
 820633e:	e9 8d 01 00 00       	jmp    82064d0 <_ZN31Dispatcher_ReportMannerlessUser12dispatch_sigEP5CUserR9PacketBuf+0x3ac>
 8206343:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 8206346:	89 44 24 0c          	mov    %eax,0xc(%esp)
 820634a:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 8206351:	00 
 8206352:	8d 85 41 fe ff ff    	lea    -0x1bf(%ebp),%eax
 8206358:	83 c0 40             	add    $0x40,%eax
 820635b:	89 44 24 04          	mov    %eax,0x4(%esp)
 820635f:	8b 45 10             	mov    0x10(%ebp),%eax
 8206362:	89 04 24             	mov    %eax,(%esp)
 8206365:	e8 52 6f 38 00       	call   858d2bc <_ZN9PacketBuf7get_strEPcii>
 820636a:	83 f0 01             	xor    $0x1,%eax
 820636d:	84 c0                	test   %al,%al
 820636f:	74 0a                	je     820637b <_ZN31Dispatcher_ReportMannerlessUser12dispatch_sigEP5CUserR9PacketBuf+0x257>
 8206371:	b8 00 00 00 00       	mov    $0x0,%eax
 8206376:	e9 55 01 00 00       	jmp    82064d0 <_ZN31Dispatcher_ReportMannerlessUser12dispatch_sigEP5CUserR9PacketBuf+0x3ac>
 820637b:	8b 85 53 fe ff ff    	mov    -0x1ad(%ebp),%eax
 8206381:	89 04 24             	mov    %eax,(%esp)
 8206384:	e8 41 5e 02 00       	call   822c1ca <_ZN33Packet_Mannerless_User_Accusation24isNeedTypeForChattingMsgEi>
 8206389:	84 c0                	test   %al,%al
 820638b:	74 62                	je     82063ef <_ZN31Dispatcher_ReportMannerlessUser12dispatch_sigEP5CUserR9PacketBuf+0x2cb>
 820638d:	c7 45 a0 00 00 00 00 	movl   $0x0,-0x60(%ebp)
 8206394:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8206397:	89 44 24 04          	mov    %eax,0x4(%esp)
 820639b:	8b 45 10             	mov    0x10(%ebp),%eax
 820639e:	89 04 24             	mov    %eax,(%esp)
 82063a1:	e8 9a 6e 38 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 82063a6:	83 f0 01             	xor    $0x1,%eax
 82063a9:	84 c0                	test   %al,%al
 82063ab:	74 0a                	je     82063b7 <_ZN31Dispatcher_ReportMannerlessUser12dispatch_sigEP5CUserR9PacketBuf+0x293>
 82063ad:	b8 00 00 00 00       	mov    $0x0,%eax
 82063b2:	e9 19 01 00 00       	jmp    82064d0 <_ZN31Dispatcher_ReportMannerlessUser12dispatch_sigEP5CUserR9PacketBuf+0x3ac>
 82063b7:	8b 45 a0             	mov    -0x60(%ebp),%eax
 82063ba:	89 44 24 0c          	mov    %eax,0xc(%esp)
 82063be:	c7 44 24 08 00 01 00 	movl   $0x100,0x8(%esp)
 82063c5:	00 
 82063c6:	8d 85 41 fe ff ff    	lea    -0x1bf(%ebp),%eax
 82063cc:	83 c0 5e             	add    $0x5e,%eax
 82063cf:	89 44 24 04          	mov    %eax,0x4(%esp)
 82063d3:	8b 45 10             	mov    0x10(%ebp),%eax
 82063d6:	89 04 24             	mov    %eax,(%esp)
 82063d9:	e8 de 6e 38 00       	call   858d2bc <_ZN9PacketBuf7get_strEPcii>
 82063de:	83 f0 01             	xor    $0x1,%eax
 82063e1:	84 c0                	test   %al,%al
 82063e3:	74 0a                	je     82063ef <_ZN31Dispatcher_ReportMannerlessUser12dispatch_sigEP5CUserR9PacketBuf+0x2cb>
 82063e5:	b8 00 00 00 00       	mov    $0x0,%eax
 82063ea:	e9 e1 00 00 00       	jmp    82064d0 <_ZN31Dispatcher_ReportMannerlessUser12dispatch_sigEP5CUserR9PacketBuf+0x3ac>
 82063ef:	8b 45 0c             	mov    0xc(%ebp),%eax
 82063f2:	89 04 24             	mov    %eax,(%esp)
 82063f5:	e8 84 3e ed ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 82063fa:	8d 55 bb             	lea    -0x45(%ebp),%edx
 82063fd:	c7 44 24 0c 0b 00 00 	movl   $0xb,0xc(%esp)
 8206404:	00 
 8206405:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 820640c:	00 
 820640d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8206411:	89 14 24             	mov    %edx,(%esp)
 8206414:	e8 ff 54 2f 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 8206419:	83 ec 04             	sub    $0x4,%esp
 820641c:	8b 45 bd             	mov    -0x43(%ebp),%eax
 820641f:	3d 7e 67 00 00       	cmp    $0x677e,%eax
 8206424:	0f 94 c0             	sete   %al
 8206427:	84 c0                	test   %al,%al
 8206429:	74 04                	je     820642f <_ZN31Dispatcher_ReportMannerlessUser12dispatch_sigEP5CUserR9PacketBuf+0x30b>
 820642b:	c6 45 9f 70          	movb   $0x70,-0x61(%ebp)
 820642f:	8b 95 57 fe ff ff    	mov    -0x1a9(%ebp),%edx
 8206435:	8b 85 5b fe ff ff    	mov    -0x1a5(%ebp),%eax
 820643b:	39 c2                	cmp    %eax,%edx
 820643d:	75 55                	jne    8206494 <_ZN31Dispatcher_ReportMannerlessUser12dispatch_sigEP5CUserR9PacketBuf+0x370>
 820643f:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 8206442:	8b 45 ac             	mov    -0x54(%ebp),%eax
 8206445:	39 c2                	cmp    %eax,%edx
 8206447:	75 4b                	jne    8206494 <_ZN31Dispatcher_ReportMannerlessUser12dispatch_sigEP5CUserR9PacketBuf+0x370>
 8206449:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 820644c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8206450:	8d 85 41 fe ff ff    	lea    -0x1bf(%ebp),%eax
 8206456:	83 c0 40             	add    $0x40,%eax
 8206459:	89 44 24 04          	mov    %eax,0x4(%esp)
 820645d:	8d 85 41 fe ff ff    	lea    -0x1bf(%ebp),%eax
 8206463:	83 c0 22             	add    $0x22,%eax
 8206466:	89 04 24             	mov    %eax,(%esp)
 8206469:	e8 52 84 e7 ff       	call   807e8c0 <strncmp@plt>
 820646e:	85 c0                	test   %eax,%eax
 8206470:	75 22                	jne    8206494 <_ZN31Dispatcher_ReportMannerlessUser12dispatch_sigEP5CUserR9PacketBuf+0x370>
 8206472:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 8206479:	00 
 820647a:	c7 44 24 04 8c 00 00 	movl   $0x8c,0x4(%esp)
 8206481:	00 
 8206482:	8b 45 0c             	mov    0xc(%ebp),%eax
 8206485:	89 04 24             	mov    %eax,(%esp)
 8206488:	e8 b5 5a 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 820648d:	b8 00 00 00 00       	mov    $0x0,%eax
 8206492:	eb 3c                	jmp    82064d0 <_ZN31Dispatcher_ReportMannerlessUser12dispatch_sigEP5CUserR9PacketBuf+0x3ac>
 8206494:	8d 9d 41 fe ff ff    	lea    -0x1bf(%ebp),%ebx
 820649a:	8b 45 0c             	mov    0xc(%ebp),%eax
 820649d:	89 04 24             	mov    %eax,(%esp)
 82064a0:	e8 eb 57 ec ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 82064a5:	8b 15 28 be 40 09    	mov    0x940be28,%edx
 82064ab:	89 44 24 04          	mov    %eax,0x4(%esp)
 82064af:	89 14 24             	mov    %edx,(%esp)
 82064b2:	e8 d3 bb f0 ff       	call   811208a <_ZN15CServerProxyMgrI19CMonitorServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 82064b7:	c7 44 24 08 5f 01 00 	movl   $0x15f,0x8(%esp)
 82064be:	00 
 82064bf:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 82064c3:	89 04 24             	mov    %eax,(%esp)
 82064c6:	e8 79 a9 26 00       	call   8470e44 <_ZN19CMonitorServerProxy13SendTcpPacketEPci>
 82064cb:	b8 00 00 00 00       	mov    $0x0,%eax
 82064d0:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 82064d3:	c9                   	leave
 82064d4:	c3                   	ret
 82064d5:	90                   	nop

```

```c
// Dispatcher_ReportMannerlessUser::dispatch_sig @ 0x8206124

/* Dispatcher_ReportMannerlessUser::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_ReportMannerlessUser::dispatch_sig
          (Dispatcher_ReportMannerlessUser *this,CUser *param_1,PacketBuf *param_2)

{
  size_t __n;
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  uint *puVar6;
  CEnvironment *this_00;
  undefined4 uVar7;
  CMonitorServerProxy *this_01;
  uint uVar8;
  Packet_Mannerless_User_Accusation local_1c3 [10];
  undefined4 local_1b9;
  undefined4 local_1b5;
  int local_1b1;
  uint local_1ad;
  uint local_1a9;
  undefined4 local_1a5;
  char acStack_1a1 [30];
  char acStack_183 [30];
  char acStack_165 [256];
  undefined1 local_65;
  uint local_64;
  uint local_60;
  byte local_59;
  size_t local_58;
  int local_54 [2];
  undefined1 local_49 [2];
  int local_47;
  
  iVar3 = CUser::get_state(param_1);
  if ((iVar3 < 3) ||
     (iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1), iVar3 == 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    uVar4 = LineFunc(0x9f84,
                     "virtual int Dispatcher_ReportMannerlessUser::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
  }
  else {
    Packet_Mannerless_User_Accusation::Packet_Mannerless_User_Accusation(local_1c3);
    local_1b5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    local_1b9 = CUser::GetUID(param_1);
    local_54[0] = 4;
    cVar2 = PacketBuf::get_int(param_2,local_54);
    if ((cVar2 == '\x01') && (local_54[0] < 4)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar4 = LineFunc(0x9f8e,
                       "virtual int Dispatcher_ReportMannerlessUser::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
    }
    else {
      local_1b1 = local_54[0];
      local_1a5 = CUser::get_acc_id(param_1);
      pcVar5 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
      local_58 = strlen(pcVar5);
      local_54[1] = 0x1d;
      puVar6 = std::min<unsigned_int>(&local_58,(uint *)(local_54 + 1));
      __n = *puVar6;
      pcVar5 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
      strncpy(acStack_1a1,pcVar5,__n);
      local_59 = 0;
      PacketBuf::get_byte(param_2,&local_59);
      local_1a9 = (uint)local_59;
      if (local_1a9 < 0x65) {
        if (local_1a9 == 0) {
          this_00 = (CEnvironment *)G_CEnvironment();
          local_1ad = CEnvironment::get_server_group(this_00);
          local_1a9 = local_1ad;
        }
        else {
          local_1ad = CUser::GetServerGroup(param_1);
        }
        local_60 = 0;
        cVar2 = PacketBuf::get_int(param_2,&local_60);
        if (cVar2 == '\x01') {
          cVar2 = PacketBuf::get_str(param_2,acStack_183,0x1e,local_60);
          if (cVar2 == '\x01') {
            cVar2 = Packet_Mannerless_User_Accusation::isNeedTypeForChattingMsg(local_1b1);
            if (cVar2 != '\0') {
              local_64 = 0;
              cVar2 = PacketBuf::get_int(param_2,&local_64);
              if (cVar2 != '\x01') {
                return 0;
              }
              cVar2 = PacketBuf::get_str(param_2,acStack_165,0x100,local_64);
              if (cVar2 != '\x01') {
                return 0;
              }
            }
            iVar3 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
            uVar4 = 0xb;
            uVar8 = 0;
            CInventory::GetInvenSlot((int)local_49,iVar3);
            if (local_47 == 0x677e) {
              local_65 = 0x70;
            }
            if (((local_1ad == local_1a9) && (local_60 == local_58)) &&
               (uVar8 = local_60, iVar3 = strncmp(acStack_1a1,acStack_183,local_60), iVar3 == 0)) {
              CUser::SendCmdErrorPacket(param_1,0x8c,3);
              return 0;
            }
            uVar7 = CUser::GetServerGroup(param_1);
            this_01 = (CMonitorServerProxy *)
                      CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                                (GlobalData::s_monitor_proxy_mgr,uVar7,uVar8,uVar4);
            CMonitorServerProxy::SendTcpPacket(this_01,(char *)local_1c3,0x15f);
            uVar4 = 0;
          }
          else {
            uVar4 = 0;
          }
        }
        else {
          uVar4 = 0;
        }
      }
      else {
        uVar4 = LineFunc(0x9fa0,
                         "virtual int Dispatcher_ReportMannerlessUser::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
      }
    }
  }
  return uVar4;
}

```

