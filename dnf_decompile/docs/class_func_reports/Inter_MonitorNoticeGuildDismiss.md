# Inter_MonitorNoticeGuildDismiss

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084ca00c Inter_MonitorNoticeGuildDismiss::dispatch_sig  [0x084ca00c-0x84ca1e5] ===
 84ca00c:	55                   	push   %ebp
 84ca00d:	89 e5                	mov    %esp,%ebp
 84ca00f:	56                   	push   %esi
 84ca010:	53                   	push   %ebx
 84ca011:	83 ec 40             	sub    $0x40,%esp
 84ca014:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ca017:	89 04 24             	mov    %eax,(%esp)
 84ca01a:	e8 6d 03 c1 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84ca01f:	85 c0                	test   %eax,%eax
 84ca021:	0f 94 c0             	sete   %al
 84ca024:	84 c0                	test   %al,%al
 84ca026:	74 0a                	je     84ca032 <_ZN31Inter_MonitorNoticeGuildDismiss12dispatch_sigEP5CUserPci+0x26>
 84ca028:	bb 00 00 00 00       	mov    $0x0,%ebx
 84ca02d:	e9 aa 01 00 00       	jmp    84ca1dc <_ZN31Inter_MonitorNoticeGuildDismiss12dispatch_sigEP5CUserPci+0x1d0>
 84ca032:	8b 45 10             	mov    0x10(%ebp),%eax
 84ca035:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84ca038:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84ca03f:	ff 
 84ca040:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ca043:	89 04 24             	mov    %eax,(%esp)
 84ca046:	e8 55 3f 18 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84ca04b:	89 c2                	mov    %eax,%edx
 84ca04d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84ca050:	8b 40 0e             	mov    0xe(%eax),%eax
 84ca053:	39 c2                	cmp    %eax,%edx
 84ca055:	0f 95 c0             	setne  %al
 84ca058:	84 c0                	test   %al,%al
 84ca05a:	74 57                	je     84ca0b3 <_ZN31Inter_MonitorNoticeGuildDismiss12dispatch_sigEP5CUserPci+0xa7>
 84ca05c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84ca05f:	8b 58 0e             	mov    0xe(%eax),%ebx
 84ca062:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84ca069:	ff 
 84ca06a:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ca06d:	89 04 24             	mov    %eax,(%esp)
 84ca070:	e8 2b 3f 18 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84ca075:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 84ca079:	89 44 24 14          	mov    %eax,0x14(%esp)
 84ca07d:	c7 44 24 10 b0 7b c8 	movl   $0x8c87bb0,0x10(%esp)
 84ca084:	08 
 84ca085:	c7 44 24 0c 29 24 00 	movl   $0x2429,0xc(%esp)
 84ca08c:	00 
 84ca08d:	c7 44 24 08 40 d9 c8 	movl   $0x8c8d940,0x8(%esp)
 84ca094:	08 
 84ca095:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84ca09c:	08 
 84ca09d:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84ca0a4:	e8 61 9b 60 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84ca0a9:	bb 00 00 00 00       	mov    $0x0,%ebx
 84ca0ae:	e9 29 01 00 00       	jmp    84ca1dc <_ZN31Inter_MonitorNoticeGuildDismiss12dispatch_sigEP5CUserPci+0x1d0>
 84ca0b3:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ca0b6:	89 04 24             	mov    %eax,(%esp)
 84ca0b9:	e8 a6 60 d6 ff       	call   8230164 <_ZN5CUser14GetGuildDBInfoEv>
 84ca0be:	8b 70 17             	mov    0x17(%eax),%esi
 84ca0c1:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84ca0c8:	ff 
 84ca0c9:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ca0cc:	89 04 24             	mov    %eax,(%esp)
 84ca0cf:	e8 cc 3e 18 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84ca0d4:	89 c3                	mov    %eax,%ebx
 84ca0d6:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84ca0dd:	00 
 84ca0de:	c7 44 24 08 2d 24 00 	movl   $0x242d,0x8(%esp)
 84ca0e5:	00 
 84ca0e6:	c7 44 24 04 40 d9 c8 	movl   $0x8c8d940,0x4(%esp)
 84ca0ed:	08 
 84ca0ee:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84ca0f1:	89 04 24             	mov    %eax,(%esp)
 84ca0f4:	e8 1f 56 08 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84ca0f9:	89 74 24 0c          	mov    %esi,0xc(%esp)
 84ca0fd:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84ca101:	c7 44 24 04 14 7c c8 	movl   $0x8c87c14,0x4(%esp)
 84ca108:	08 
 84ca109:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84ca10c:	89 04 24             	mov    %eax,(%esp)
 84ca10f:	e8 74 56 08 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84ca114:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ca117:	89 04 24             	mov    %eax,(%esp)
 84ca11a:	e8 45 60 d6 ff       	call   8230164 <_ZN5CUser14GetGuildDBInfoEv>
 84ca11f:	8b 58 17             	mov    0x17(%eax),%ebx
 84ca122:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84ca129:	ff 
 84ca12a:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ca12d:	89 04 24             	mov    %eax,(%esp)
 84ca130:	e8 6b 3e 18 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84ca135:	39 c3                	cmp    %eax,%ebx
 84ca137:	0f 94 c0             	sete   %al
 84ca13a:	84 c0                	test   %al,%al
 84ca13c:	74 13                	je     84ca151 <_ZN31Inter_MonitorNoticeGuildDismiss12dispatch_sigEP5CUserPci+0x145>
 84ca13e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ca141:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84ca148:	00 
 84ca149:	89 04 24             	mov    %eax,(%esp)
 84ca14c:	e8 3f 54 d6 ff       	call   822f590 <_ZN15CUserCharacInfo22set_guild_create_rightEh>
 84ca151:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ca154:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84ca15b:	00 
 84ca15c:	89 04 24             	mov    %eax,(%esp)
 84ca15f:	e8 ba c5 dd ff       	call   82a671e <_ZN15CUserCharacInfo19set_charac_guildkeyEj>
 84ca164:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84ca167:	89 04 24             	mov    %eax,(%esp)
 84ca16a:	e8 dd 3b 0c 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84ca16f:	c7 44 24 08 3d 00 00 	movl   $0x3d,0x8(%esp)
 84ca176:	00 
 84ca177:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84ca17e:	00 
 84ca17f:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84ca182:	89 04 24             	mov    %eax,(%esp)
 84ca185:	e8 72 17 c0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84ca18a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84ca191:	00 
 84ca192:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84ca195:	89 04 24             	mov    %eax,(%esp)
 84ca198:	e8 bb 17 c0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84ca19d:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84ca1a0:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ca1a4:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ca1a7:	89 04 24             	mov    %eax,(%esp)
 84ca1aa:	e8 0b e4 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84ca1af:	bb 00 00 00 00       	mov    $0x0,%ebx
 84ca1b4:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84ca1b7:	89 04 24             	mov    %eax,(%esp)
 84ca1ba:	e8 c1 3c 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84ca1bf:	eb 1b                	jmp    84ca1dc <_ZN31Inter_MonitorNoticeGuildDismiss12dispatch_sigEP5CUserPci+0x1d0>
 84ca1c1:	89 d3                	mov    %edx,%ebx
 84ca1c3:	89 c6                	mov    %eax,%esi
 84ca1c5:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84ca1c8:	89 04 24             	mov    %eax,(%esp)
 84ca1cb:	e8 b0 3c 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84ca1d0:	89 f0                	mov    %esi,%eax
 84ca1d2:	89 da                	mov    %ebx,%edx
 84ca1d4:	89 04 24             	mov    %eax,(%esp)
 84ca1d7:	e8 74 95 61 00       	call   8ae3750 <_Unwind_Resume>
 84ca1dc:	89 d8                	mov    %ebx,%eax
 84ca1de:	83 c4 40             	add    $0x40,%esp
 84ca1e1:	5b                   	pop    %ebx
 84ca1e2:	5e                   	pop    %esi
 84ca1e3:	5d                   	pop    %ebp
 84ca1e4:	c3                   	ret
 84ca1e5:	90                   	nop

```

```c
// Inter_MonitorNoticeGuildDismiss::dispatch_sig @ 0x84ca00c

/* Inter_MonitorNoticeGuildDismiss::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MonitorNoticeGuildDismiss::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  PacketGuard local_2c [12];
  cMyTrace local_20 [16];
  int local_10;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 != 0) {
    local_10 = param_3;
    iVar2 = CUser::get_charac_no((CUser *)param_2,-1);
    if (iVar2 == *(int *)(local_10 + 0xe)) {
      iVar2 = CUser::GetGuildDBInfo((CUser *)param_2);
      uVar1 = *(undefined4 *)(iVar2 + 0x17);
      uVar3 = CUser::get_charac_no((CUser *)param_2,-1);
      cMyTrace::cMyTrace(local_20,
                         "virtual int Inter_MonitorNoticeGuildDismiss::dispatch_sig(CUser*, char*, int)"
                         ,0x242d,0);
      cMyTrace::operator()
                (local_20,"Guild Create Right Init! Char id : %d, Master Id : %d",uVar3,uVar1);
      iVar2 = CUser::GetGuildDBInfo((CUser *)param_2);
      iVar2 = *(int *)(iVar2 + 0x17);
      iVar4 = CUser::get_charac_no((CUser *)param_2,-1);
      if (iVar2 == iVar4) {
        CUserCharacInfo::set_guild_create_right((CUserCharacInfo *)param_2,'\0');
      }
      CUserCharacInfo::set_charac_guildkey((CUserCharacInfo *)param_2,0);
      PacketGuard::PacketGuard(local_2c);
                    /* try { // try from 084ca185 to 084ca1ae has its CatchHandler @ 084ca1c1 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,0,0x3d);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
      CUser::Send((CUser *)param_2,local_2c);
      PacketGuard::~PacketGuard(local_2c);
    }
    else {
      uVar1 = *(undefined4 *)(local_10 + 0xe);
      uVar3 = CUser::get_charac_no((CUser *)param_2,-1);
      LogManager::logFormat
                (1,"InterDispatcher.cpp",
                 "virtual int Inter_MonitorNoticeGuildDismiss::dispatch_sig(CUser*, char*, int)",
                 0x2429,
                 "Inter_MonitorNoticeGuildDismiss::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)"
                 ,uVar3,uVar1);
    }
  }
  return 0;
}

```

