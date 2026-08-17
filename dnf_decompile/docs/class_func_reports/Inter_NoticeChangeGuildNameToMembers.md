# Inter_NoticeChangeGuildNameToMembers

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d51dc Inter_NoticeChangeGuildNameToMembers::dispatch_sig  [0x084d51dc-0x84d5339] ===
 84d51dc:	55                   	push   %ebp
 84d51dd:	89 e5                	mov    %esp,%ebp
 84d51df:	56                   	push   %esi
 84d51e0:	53                   	push   %ebx
 84d51e1:	83 ec 40             	sub    $0x40,%esp
 84d51e4:	8b 45 10             	mov    0x10(%ebp),%eax
 84d51e7:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84d51ea:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84d51f1:	ff 
 84d51f2:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d51f5:	89 04 24             	mov    %eax,(%esp)
 84d51f8:	e8 a3 8d 17 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84d51fd:	89 c2                	mov    %eax,%edx
 84d51ff:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d5202:	8b 40 0e             	mov    0xe(%eax),%eax
 84d5205:	39 c2                	cmp    %eax,%edx
 84d5207:	0f 95 c0             	setne  %al
 84d520a:	84 c0                	test   %al,%al
 84d520c:	74 57                	je     84d5265 <_ZN36Inter_NoticeChangeGuildNameToMembers12dispatch_sigEP5CUserPci+0x89>
 84d520e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d5211:	8b 58 0e             	mov    0xe(%eax),%ebx
 84d5214:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84d521b:	ff 
 84d521c:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d521f:	89 04 24             	mov    %eax,(%esp)
 84d5222:	e8 79 8d 17 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84d5227:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 84d522b:	89 44 24 14          	mov    %eax,0x14(%esp)
 84d522f:	c7 44 24 10 e0 90 c8 	movl   $0x8c890e0,0x10(%esp)
 84d5236:	08 
 84d5237:	c7 44 24 0c ca 36 00 	movl   $0x36ca,0xc(%esp)
 84d523e:	00 
 84d523f:	c7 44 24 08 40 c7 c8 	movl   $0x8c8c740,0x8(%esp)
 84d5246:	08 
 84d5247:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84d524e:	08 
 84d524f:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84d5256:	e8 af e9 5f 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84d525b:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d5260:	e9 cc 00 00 00       	jmp    84d5331 <_ZN36Inter_NoticeChangeGuildNameToMembers12dispatch_sigEP5CUserPci+0x155>
 84d5265:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d5268:	89 04 24             	mov    %eax,(%esp)
 84d526b:	e8 dc 8a 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84d5270:	c7 44 24 08 da 00 00 	movl   $0xda,0x8(%esp)
 84d5277:	00 
 84d5278:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84d527f:	00 
 84d5280:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d5283:	89 04 24             	mov    %eax,(%esp)
 84d5286:	e8 71 66 bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84d528b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d528e:	83 c0 16             	add    $0x16,%eax
 84d5291:	89 04 24             	mov    %eax,(%esp)
 84d5294:	e8 17 91 ba ff       	call   807e3b0 <strlen@plt>
 84d5299:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84d529c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d529f:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d52a3:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d52a6:	89 04 24             	mov    %eax,(%esp)
 84d52a9:	e8 8e 66 bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84d52ae:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d52b1:	8d 50 16             	lea    0x16(%eax),%edx
 84d52b4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d52b7:	89 44 24 08          	mov    %eax,0x8(%esp)
 84d52bb:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d52bf:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d52c2:	89 04 24             	mov    %eax,(%esp)
 84d52c5:	e8 1a 21 ce ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84d52ca:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d52d1:	00 
 84d52d2:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d52d5:	89 04 24             	mov    %eax,(%esp)
 84d52d8:	e8 7b 66 bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84d52dd:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d52e0:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d52e4:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d52e7:	89 04 24             	mov    %eax,(%esp)
 84d52ea:	e8 cb 32 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84d52ef:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d52f2:	83 c0 16             	add    $0x16,%eax
 84d52f5:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d52f9:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d52fc:	89 04 24             	mov    %eax,(%esp)
 84d52ff:	e8 60 7b 01 00       	call   84ece64 <_ZN5CUser15ChangeGuildNameEPc>
 84d5304:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d5309:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d530c:	89 04 24             	mov    %eax,(%esp)
 84d530f:	e8 6c 8b 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d5314:	eb 1b                	jmp    84d5331 <_ZN36Inter_NoticeChangeGuildNameToMembers12dispatch_sigEP5CUserPci+0x155>
 84d5316:	89 d3                	mov    %edx,%ebx
 84d5318:	89 c6                	mov    %eax,%esi
 84d531a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d531d:	89 04 24             	mov    %eax,(%esp)
 84d5320:	e8 5b 8b 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d5325:	89 f0                	mov    %esi,%eax
 84d5327:	89 da                	mov    %ebx,%edx
 84d5329:	89 04 24             	mov    %eax,(%esp)
 84d532c:	e8 1f e4 60 00       	call   8ae3750 <_Unwind_Resume>
 84d5331:	89 d8                	mov    %ebx,%eax
 84d5333:	83 c4 40             	add    $0x40,%esp
 84d5336:	5b                   	pop    %ebx
 84d5337:	5e                   	pop    %esi
 84d5338:	5d                   	pop    %ebp
 84d5339:	c3                   	ret

```

```c
// Inter_NoticeChangeGuildNameToMembers::dispatch_sig @ 0x84d51dc

/* Inter_NoticeChangeGuildNameToMembers::dispatch_sig(CUser*, char*, int) */

undefined4
Inter_NoticeChangeGuildNameToMembers::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  PacketGuard local_20 [12];
  int local_14;
  size_t local_10;
  
  local_14 = param_3;
  iVar2 = CUser::get_charac_no((CUser *)param_2,-1);
  if (iVar2 == *(int *)(local_14 + 0xe)) {
    PacketGuard::PacketGuard(local_20);
                    /* try { // try from 084d5286 to 084d52ee has its CatchHandler @ 084d5316 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0xda);
    local_10 = strlen((char *)(local_14 + 0x16));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,local_10);
    InterfacePacketBuf::put_str((InterfacePacketBuf *)local_20,(char *)(local_14 + 0x16),local_10);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
    CUser::Send((CUser *)param_2,local_20);
    CUser::ChangeGuildName((CUser *)param_2,(char *)(local_14 + 0x16));
    PacketGuard::~PacketGuard(local_20);
  }
  else {
    uVar1 = *(undefined4 *)(local_14 + 0xe);
    uVar3 = CUser::get_charac_no((CUser *)param_2,-1);
    LogManager::logFormat
              (1,"InterDispatcher.cpp",
               "virtual int Inter_NoticeChangeGuildNameToMembers::dispatch_sig(CUser*, char*, int)",
               0x36ca,
               "Inter_NoticeChangeGuildNameToMembers::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharId(%d)"
               ,uVar3,uVar1);
  }
  return 0;
}

```

