# Inter_MonitorNoticeMemberChatMsg

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084ccfda Inter_MonitorNoticeMemberChatMsg::dispatch_sig  [0x084ccfda-0x84cd217] ===
 84ccfda:	55                   	push   %ebp
 84ccfdb:	89 e5                	mov    %esp,%ebp
 84ccfdd:	56                   	push   %esi
 84ccfde:	53                   	push   %ebx
 84ccfdf:	83 ec 40             	sub    $0x40,%esp
 84ccfe2:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ccfe5:	89 04 24             	mov    %eax,(%esp)
 84ccfe8:	e8 9f d3 c0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84ccfed:	85 c0                	test   %eax,%eax
 84ccfef:	0f 94 c0             	sete   %al
 84ccff2:	84 c0                	test   %al,%al
 84ccff4:	74 0a                	je     84cd000 <_ZN32Inter_MonitorNoticeMemberChatMsg12dispatch_sigEP5CUserPci+0x26>
 84ccff6:	bb 00 00 00 00       	mov    $0x0,%ebx
 84ccffb:	e9 0e 02 00 00       	jmp    84cd20e <_ZN32Inter_MonitorNoticeMemberChatMsg12dispatch_sigEP5CUserPci+0x234>
 84cd000:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cd003:	89 04 24             	mov    %eax,(%esp)
 84cd006:	e8 b9 25 d6 ff       	call   822f5c4 <_ZN15CUserCharacInfo20get_charac_memberkeyEv>
 84cd00b:	85 c0                	test   %eax,%eax
 84cd00d:	0f 94 c0             	sete   %al
 84cd010:	84 c0                	test   %al,%al
 84cd012:	74 4d                	je     84cd061 <_ZN32Inter_MonitorNoticeMemberChatMsg12dispatch_sigEP5CUserPci+0x87>
 84cd014:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84cd01b:	ff 
 84cd01c:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cd01f:	89 04 24             	mov    %eax,(%esp)
 84cd022:	e8 79 0f 18 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84cd027:	89 44 24 14          	mov    %eax,0x14(%esp)
 84cd02b:	c7 44 24 10 d0 84 c8 	movl   $0x8c884d0,0x10(%esp)
 84cd032:	08 
 84cd033:	c7 44 24 0c 52 28 00 	movl   $0x2852,0xc(%esp)
 84cd03a:	00 
 84cd03b:	c7 44 24 08 40 d3 c8 	movl   $0x8c8d340,0x8(%esp)
 84cd042:	08 
 84cd043:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84cd04a:	08 
 84cd04b:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84cd052:	e8 b3 6b 60 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84cd057:	bb 00 00 00 00       	mov    $0x0,%ebx
 84cd05c:	e9 ad 01 00 00       	jmp    84cd20e <_ZN32Inter_MonitorNoticeMemberChatMsg12dispatch_sigEP5CUserPci+0x234>
 84cd061:	8b 45 10             	mov    0x10(%ebp),%eax
 84cd064:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84cd067:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84cd06e:	ff 
 84cd06f:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cd072:	89 04 24             	mov    %eax,(%esp)
 84cd075:	e8 26 0f 18 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84cd07a:	89 c2                	mov    %eax,%edx
 84cd07c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84cd07f:	8b 40 0e             	mov    0xe(%eax),%eax
 84cd082:	39 c2                	cmp    %eax,%edx
 84cd084:	0f 95 c0             	setne  %al
 84cd087:	84 c0                	test   %al,%al
 84cd089:	74 57                	je     84cd0e2 <_ZN32Inter_MonitorNoticeMemberChatMsg12dispatch_sigEP5CUserPci+0x108>
 84cd08b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84cd08e:	8b 58 0e             	mov    0xe(%eax),%ebx
 84cd091:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84cd098:	ff 
 84cd099:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cd09c:	89 04 24             	mov    %eax,(%esp)
 84cd09f:	e8 fc 0e 18 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84cd0a4:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 84cd0a8:	89 44 24 14          	mov    %eax,0x14(%esp)
 84cd0ac:	c7 44 24 10 40 85 c8 	movl   $0x8c88540,0x10(%esp)
 84cd0b3:	08 
 84cd0b4:	c7 44 24 0c 59 28 00 	movl   $0x2859,0xc(%esp)
 84cd0bb:	00 
 84cd0bc:	c7 44 24 08 40 d3 c8 	movl   $0x8c8d340,0x8(%esp)
 84cd0c3:	08 
 84cd0c4:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84cd0cb:	08 
 84cd0cc:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84cd0d3:	e8 32 6b 60 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84cd0d8:	bb 00 00 00 00       	mov    $0x0,%ebx
 84cd0dd:	e9 2c 01 00 00       	jmp    84cd20e <_ZN32Inter_MonitorNoticeMemberChatMsg12dispatch_sigEP5CUserPci+0x234>
 84cd0e2:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84cd0e5:	89 04 24             	mov    %eax,(%esp)
 84cd0e8:	e8 5f 0c 0c 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84cd0ed:	c7 44 24 08 41 00 00 	movl   $0x41,0x8(%esp)
 84cd0f4:	00 
 84cd0f5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84cd0fc:	00 
 84cd0fd:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84cd100:	89 04 24             	mov    %eax,(%esp)
 84cd103:	e8 f4 e7 bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84cd108:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 84cd10f:	00 
 84cd110:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84cd113:	89 04 24             	mov    %eax,(%esp)
 84cd116:	e8 05 e8 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84cd11b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84cd122:	00 
 84cd123:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84cd126:	89 04 24             	mov    %eax,(%esp)
 84cd129:	e8 f2 e7 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84cd12e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84cd131:	83 c0 12             	add    $0x12,%eax
 84cd134:	89 04 24             	mov    %eax,(%esp)
 84cd137:	e8 74 12 bb ff       	call   807e3b0 <strlen@plt>
 84cd13c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84cd13f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84cd142:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cd146:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84cd149:	89 04 24             	mov    %eax,(%esp)
 84cd14c:	e8 eb e7 bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84cd151:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84cd154:	8d 50 12             	lea    0x12(%eax),%edx
 84cd157:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84cd15a:	89 44 24 08          	mov    %eax,0x8(%esp)
 84cd15e:	89 54 24 04          	mov    %edx,0x4(%esp)
 84cd162:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84cd165:	89 04 24             	mov    %eax,(%esp)
 84cd168:	e8 77 a2 ce ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84cd16d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84cd174:	00 
 84cd175:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84cd178:	89 04 24             	mov    %eax,(%esp)
 84cd17b:	e8 a0 e7 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84cd180:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84cd183:	0f b6 40 30          	movzbl 0x30(%eax),%eax
 84cd187:	0f b6 c0             	movzbl %al,%eax
 84cd18a:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cd18e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84cd191:	89 04 24             	mov    %eax,(%esp)
 84cd194:	e8 a3 e7 bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84cd199:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84cd19c:	0f b6 40 30          	movzbl 0x30(%eax),%eax
 84cd1a0:	0f b6 c0             	movzbl %al,%eax
 84cd1a3:	8b 55 f0             	mov    -0x10(%ebp),%edx
 84cd1a6:	83 c2 31             	add    $0x31,%edx
 84cd1a9:	89 44 24 08          	mov    %eax,0x8(%esp)
 84cd1ad:	89 54 24 04          	mov    %edx,0x4(%esp)
 84cd1b1:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84cd1b4:	89 04 24             	mov    %eax,(%esp)
 84cd1b7:	e8 28 a2 ce ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84cd1bc:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84cd1c3:	00 
 84cd1c4:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84cd1c7:	89 04 24             	mov    %eax,(%esp)
 84cd1ca:	e8 89 e7 bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84cd1cf:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84cd1d2:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cd1d6:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cd1d9:	89 04 24             	mov    %eax,(%esp)
 84cd1dc:	e8 d9 b3 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84cd1e1:	bb 00 00 00 00       	mov    $0x0,%ebx
 84cd1e6:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84cd1e9:	89 04 24             	mov    %eax,(%esp)
 84cd1ec:	e8 8f 0c 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84cd1f1:	eb 1b                	jmp    84cd20e <_ZN32Inter_MonitorNoticeMemberChatMsg12dispatch_sigEP5CUserPci+0x234>
 84cd1f3:	89 d3                	mov    %edx,%ebx
 84cd1f5:	89 c6                	mov    %eax,%esi
 84cd1f7:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84cd1fa:	89 04 24             	mov    %eax,(%esp)
 84cd1fd:	e8 7e 0c 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84cd202:	89 f0                	mov    %esi,%eax
 84cd204:	89 da                	mov    %ebx,%edx
 84cd206:	89 04 24             	mov    %eax,(%esp)
 84cd209:	e8 42 65 61 00       	call   8ae3750 <_Unwind_Resume>
 84cd20e:	89 d8                	mov    %ebx,%eax
 84cd210:	83 c4 40             	add    $0x40,%esp
 84cd213:	5b                   	pop    %ebx
 84cd214:	5e                   	pop    %esi
 84cd215:	5d                   	pop    %ebp
 84cd216:	c3                   	ret
 84cd217:	90                   	nop

```

```c
// Inter_MonitorNoticeMemberChatMsg::dispatch_sig @ 0x84ccfda

/* Inter_MonitorNoticeMemberChatMsg::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MonitorNoticeMemberChatMsg::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  PacketGuard local_20 [12];
  int local_14;
  size_t local_10;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (iVar1 != 0) {
    iVar1 = CUserCharacInfo::get_charac_memberkey((CUserCharacInfo *)param_2);
    if (iVar1 == 0) {
      uVar2 = CUser::get_charac_no((CUser *)param_2,-1);
      LogManager::logFormat
                (1,"InterDispatcher.cpp",
                 "virtual int Inter_MonitorNoticeMemberChatMsg::dispatch_sig(CUser*, char*, int)",
                 0x2852,
                 "MEMBER : Inter_MonitorNoticeMemberChatMsg::dispatch_sig() : 0 == pUser->get_charac_memberkey() (Char id : %d)"
                 ,uVar2);
    }
    else {
      local_14 = param_3;
      iVar1 = CUser::get_charac_no((CUser *)param_2,-1);
      if (iVar1 == *(int *)(local_14 + 0xe)) {
        PacketGuard::PacketGuard(local_20);
                    /* try { // try from 084cd103 to 084cd1e0 has its CatchHandler @ 084cd1f3 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0x41);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,8);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
        local_10 = strlen((char *)(local_14 + 0x12));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,local_10);
        InterfacePacketBuf::put_str
                  ((InterfacePacketBuf *)local_20,(char *)(local_14 + 0x12),local_10);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,(uint)*(byte *)(local_14 + 0x30))
        ;
        InterfacePacketBuf::put_str
                  ((InterfacePacketBuf *)local_20,(char *)(local_14 + 0x31),
                   (uint)*(byte *)(local_14 + 0x30));
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
        CUser::Send((CUser *)param_2,local_20);
        PacketGuard::~PacketGuard(local_20);
      }
      else {
        uVar2 = *(undefined4 *)(local_14 + 0xe);
        uVar3 = CUser::get_charac_no((CUser *)param_2,-1);
        LogManager::logFormat
                  (1,"InterDispatcher.cpp",
                   "virtual int Inter_MonitorNoticeMemberChatMsg::dispatch_sig(CUser*, char*, int)",
                   0x2859,
                   "MEMBER : Inter_MonitorNoticeMemberChatMsg::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)"
                   ,uVar3,uVar2);
      }
    }
  }
  return 0;
}

```

