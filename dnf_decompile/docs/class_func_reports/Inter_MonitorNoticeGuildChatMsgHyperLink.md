# Inter_MonitorNoticeGuildChatMsgHyperLink

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e503c Inter_MonitorNoticeGuildChatMsgHyperLink::dispatch_sig  [0x084e503c-0x84e5281] ===
 84e503c:	55                   	push   %ebp
 84e503d:	89 e5                	mov    %esp,%ebp
 84e503f:	56                   	push   %esi
 84e5040:	53                   	push   %ebx
 84e5041:	83 ec 40             	sub    $0x40,%esp
 84e5044:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e5047:	89 04 24             	mov    %eax,(%esp)
 84e504a:	e8 3d 53 bf ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84e504f:	85 c0                	test   %eax,%eax
 84e5051:	0f 94 c0             	sete   %al
 84e5054:	84 c0                	test   %al,%al
 84e5056:	74 0a                	je     84e5062 <_ZN40Inter_MonitorNoticeGuildChatMsgHyperLink12dispatch_sigEP5CUserPci+0x26>
 84e5058:	bb 00 00 00 00       	mov    $0x0,%ebx
 84e505d:	e9 16 02 00 00       	jmp    84e5278 <_ZN40Inter_MonitorNoticeGuildChatMsgHyperLink12dispatch_sigEP5CUserPci+0x23c>
 84e5062:	8b 45 10             	mov    0x10(%ebp),%eax
 84e5065:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84e5068:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84e506f:	ff 
 84e5070:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e5073:	89 04 24             	mov    %eax,(%esp)
 84e5076:	e8 25 8f 16 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84e507b:	89 c2                	mov    %eax,%edx
 84e507d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84e5080:	8b 40 0e             	mov    0xe(%eax),%eax
 84e5083:	39 c2                	cmp    %eax,%edx
 84e5085:	0f 95 c0             	setne  %al
 84e5088:	84 c0                	test   %al,%al
 84e508a:	74 57                	je     84e50e3 <_ZN40Inter_MonitorNoticeGuildChatMsgHyperLink12dispatch_sigEP5CUserPci+0xa7>
 84e508c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84e508f:	8b 58 0e             	mov    0xe(%eax),%ebx
 84e5092:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84e5099:	ff 
 84e509a:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e509d:	89 04 24             	mov    %eax,(%esp)
 84e50a0:	e8 fb 8e 16 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84e50a5:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 84e50a9:	89 44 24 14          	mov    %eax,0x14(%esp)
 84e50ad:	c7 44 24 10 04 a1 c8 	movl   $0x8c8a104,0x10(%esp)
 84e50b4:	08 
 84e50b5:	c7 44 24 0c e4 63 00 	movl   $0x63e4,0xc(%esp)
 84e50bc:	00 
 84e50bd:	c7 44 24 08 80 b6 c8 	movl   $0x8c8b680,0x8(%esp)
 84e50c4:	08 
 84e50c5:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84e50cc:	08 
 84e50cd:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84e50d4:	e8 31 eb 5e 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84e50d9:	bb 00 00 00 00       	mov    $0x0,%ebx
 84e50de:	e9 95 01 00 00       	jmp    84e5278 <_ZN40Inter_MonitorNoticeGuildChatMsgHyperLink12dispatch_sigEP5CUserPci+0x23c>
 84e50e3:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84e50e6:	89 04 24             	mov    %eax,(%esp)
 84e50e9:	e8 5e 8c 0a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84e50ee:	c7 44 24 08 73 01 00 	movl   $0x173,0x8(%esp)
 84e50f5:	00 
 84e50f6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e50fd:	00 
 84e50fe:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84e5101:	89 04 24             	mov    %eax,(%esp)
 84e5104:	e8 f3 67 be ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84e5109:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 84e5110:	00 
 84e5111:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84e5114:	89 04 24             	mov    %eax,(%esp)
 84e5117:	e8 04 68 be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e511c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e5123:	00 
 84e5124:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84e5127:	89 04 24             	mov    %eax,(%esp)
 84e512a:	e8 f1 67 be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e512f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84e5132:	83 c0 12             	add    $0x12,%eax
 84e5135:	89 04 24             	mov    %eax,(%esp)
 84e5138:	e8 73 92 b9 ff       	call   807e3b0 <strlen@plt>
 84e513d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84e5140:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e5143:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e5147:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84e514a:	89 04 24             	mov    %eax,(%esp)
 84e514d:	e8 ea 67 be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84e5152:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84e5155:	8d 50 12             	lea    0x12(%eax),%edx
 84e5158:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e515b:	89 44 24 08          	mov    %eax,0x8(%esp)
 84e515f:	89 54 24 04          	mov    %edx,0x4(%esp)
 84e5163:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84e5166:	89 04 24             	mov    %eax,(%esp)
 84e5169:	e8 76 22 cd ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84e516e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e5175:	00 
 84e5176:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84e5179:	89 04 24             	mov    %eax,(%esp)
 84e517c:	e8 9f 67 be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e5181:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84e5184:	0f b6 80 69 01 00 00 	movzbl 0x169(%eax),%eax
 84e518b:	0f b6 c0             	movzbl %al,%eax
 84e518e:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e5192:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84e5195:	89 04 24             	mov    %eax,(%esp)
 84e5198:	e8 9f 67 be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84e519d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84e51a0:	0f b6 80 69 01 00 00 	movzbl 0x169(%eax),%eax
 84e51a7:	0f b6 c0             	movzbl %al,%eax
 84e51aa:	8b 55 ec             	mov    -0x14(%ebp),%edx
 84e51ad:	81 c2 6a 01 00 00    	add    $0x16a,%edx
 84e51b3:	89 44 24 08          	mov    %eax,0x8(%esp)
 84e51b7:	89 54 24 04          	mov    %edx,0x4(%esp)
 84e51bb:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84e51be:	89 04 24             	mov    %eax,(%esp)
 84e51c1:	e8 1e 22 cd ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84e51c6:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84e51c9:	0f b6 40 30          	movzbl 0x30(%eax),%eax
 84e51cd:	0f b6 c0             	movzbl %al,%eax
 84e51d0:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e51d4:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84e51d7:	89 04 24             	mov    %eax,(%esp)
 84e51da:	e8 41 67 be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e51df:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 84e51e6:	eb 2a                	jmp    84e5212 <_ZN40Inter_MonitorNoticeGuildChatMsgHyperLink12dispatch_sigEP5CUserPci+0x1d6>
 84e51e8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e51eb:	6b c0 68             	imul   $0x68,%eax,%eax
 84e51ee:	83 c0 30             	add    $0x30,%eax
 84e51f1:	03 45 ec             	add    -0x14(%ebp),%eax
 84e51f4:	83 c0 01             	add    $0x1,%eax
 84e51f7:	c7 44 24 08 68 00 00 	movl   $0x68,0x8(%esp)
 84e51fe:	00 
 84e51ff:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e5203:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84e5206:	89 04 24             	mov    %eax,(%esp)
 84e5209:	e8 fa 8c c3 ff       	call   811df08 <_ZN18InterfacePacketBuf10put_binaryEPci>
 84e520e:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 84e5212:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84e5215:	0f b6 40 30          	movzbl 0x30(%eax),%eax
 84e5219:	0f b6 c0             	movzbl %al,%eax
 84e521c:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 84e521f:	0f 9f c0             	setg   %al
 84e5222:	84 c0                	test   %al,%al
 84e5224:	75 c2                	jne    84e51e8 <_ZN40Inter_MonitorNoticeGuildChatMsgHyperLink12dispatch_sigEP5CUserPci+0x1ac>
 84e5226:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e522d:	00 
 84e522e:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84e5231:	89 04 24             	mov    %eax,(%esp)
 84e5234:	e8 1f 67 be ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84e5239:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84e523c:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e5240:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e5243:	89 04 24             	mov    %eax,(%esp)
 84e5246:	e8 6f 33 16 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84e524b:	bb 00 00 00 00       	mov    $0x0,%ebx
 84e5250:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84e5253:	89 04 24             	mov    %eax,(%esp)
 84e5256:	e8 25 8c 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e525b:	eb 1b                	jmp    84e5278 <_ZN40Inter_MonitorNoticeGuildChatMsgHyperLink12dispatch_sigEP5CUserPci+0x23c>
 84e525d:	89 d3                	mov    %edx,%ebx
 84e525f:	89 c6                	mov    %eax,%esi
 84e5261:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84e5264:	89 04 24             	mov    %eax,(%esp)
 84e5267:	e8 14 8c 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e526c:	89 f0                	mov    %esi,%eax
 84e526e:	89 da                	mov    %ebx,%edx
 84e5270:	89 04 24             	mov    %eax,(%esp)
 84e5273:	e8 d8 e4 5f 00       	call   8ae3750 <_Unwind_Resume>
 84e5278:	89 d8                	mov    %ebx,%eax
 84e527a:	83 c4 40             	add    $0x40,%esp
 84e527d:	5b                   	pop    %ebx
 84e527e:	5e                   	pop    %esi
 84e527f:	5d                   	pop    %ebp
 84e5280:	c3                   	ret
 84e5281:	90                   	nop

```

```c
// Inter_MonitorNoticeGuildChatMsgHyperLink::dispatch_sig @ 0x84e503c

/* Inter_MonitorNoticeGuildChatMsgHyperLink::dispatch_sig(CUser*, char*, int) */

undefined4
Inter_MonitorNoticeGuildChatMsgHyperLink::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  PacketGuard local_24 [12];
  int local_18;
  size_t local_14;
  int local_10;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 != 0) {
    local_18 = param_3;
    iVar2 = CUser::get_charac_no((CUser *)param_2,-1);
    if (iVar2 == *(int *)(local_18 + 0xe)) {
      PacketGuard::PacketGuard(local_24);
                    /* try { // try from 084e5104 to 084e524a has its CatchHandler @ 084e525d */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,0,0x173);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,6);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,0);
      local_14 = strlen((char *)(local_18 + 0x12));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,local_14);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_24,(char *)(local_18 + 0x12),local_14)
      ;
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,0);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,(uint)*(byte *)(local_18 + 0x169));
      InterfacePacketBuf::put_str
                ((InterfacePacketBuf *)local_24,(char *)(local_18 + 0x16a),
                 (uint)*(byte *)(local_18 + 0x169));
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,(uint)*(byte *)(local_18 + 0x30));
      for (local_10 = 0; local_10 < (int)(uint)*(byte *)(local_18 + 0x30); local_10 = local_10 + 1)
      {
        InterfacePacketBuf::put_binary
                  ((InterfacePacketBuf *)local_24,(char *)(local_10 * 0x68 + local_18 + 0x31),0x68);
      }
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
      CUser::Send((CUser *)param_2,local_24);
      PacketGuard::~PacketGuard(local_24);
    }
    else {
      uVar1 = *(undefined4 *)(local_18 + 0xe);
      uVar3 = CUser::get_charac_no((CUser *)param_2,-1);
      LogManager::logFormat
                (1,"InterDispatcher.cpp",
                 "virtual int Inter_MonitorNoticeGuildChatMsgHyperLink::dispatch_sig(CUser*, char*, int)"
                 ,0x63e4,
                 "Inter_MonitorNoticeGuildChatMsgHyperLink::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)"
                 ,uVar3,uVar1);
    }
  }
  return 0;
}

```

