# Dispatcher_GuildMasterDelegate

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 082082d6 Dispatcher_GuildMasterDelegate::dispatch_sig  [0x082082d6-0x82084e7] ===
 82082d6:	55                   	push   %ebp
 82082d7:	89 e5                	mov    %esp,%ebp
 82082d9:	56                   	push   %esi
 82082da:	53                   	push   %ebx
 82082db:	83 ec 50             	sub    $0x50,%esp
 82082de:	8b 45 0c             	mov    0xc(%ebp),%eax
 82082e1:	89 04 24             	mov    %eax,(%esp)
 82082e4:	e8 a3 20 ed ff       	call   80da38c <_ZN5CUser9get_stateEv>
 82082e9:	83 f8 02             	cmp    $0x2,%eax
 82082ec:	7e 0f                	jle    82082fd <_ZN30Dispatcher_GuildMasterDelegate12dispatch_sigEP5CUserR9PacketBuf+0x27>
 82082ee:	8b 45 0c             	mov    0xc(%ebp),%eax
 82082f1:	89 04 24             	mov    %eax,(%esp)
 82082f4:	e8 39 81 f1 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 82082f9:	85 c0                	test   %eax,%eax
 82082fb:	75 07                	jne    8208304 <_ZN30Dispatcher_GuildMasterDelegate12dispatch_sigEP5CUserR9PacketBuf+0x2e>
 82082fd:	b8 01 00 00 00       	mov    $0x1,%eax
 8208302:	eb 05                	jmp    8208309 <_ZN30Dispatcher_GuildMasterDelegate12dispatch_sigEP5CUserR9PacketBuf+0x33>
 8208304:	b8 00 00 00 00       	mov    $0x0,%eax
 8208309:	84 c0                	test   %al,%al
 820830b:	74 29                	je     8208336 <_ZN30Dispatcher_GuildMasterDelegate12dispatch_sigEP5CUserR9PacketBuf+0x60>
 820830d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8208314:	00 
 8208315:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 820831c:	00 
 820831d:	c7 44 24 04 60 e7 bc 	movl   $0x8bce760,0x4(%esp)
 8208324:	08 
 8208325:	c7 04 24 37 a3 00 00 	movl   $0xa337,(%esp)
 820832c:	e8 a6 85 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8208331:	e9 ab 01 00 00       	jmp    82084e1 <_ZN30Dispatcher_GuildMasterDelegate12dispatch_sigEP5CUserR9PacketBuf+0x20b>
 8208336:	8b 45 0c             	mov    0xc(%ebp),%eax
 8208339:	89 04 24             	mov    %eax,(%esp)
 820833c:	e8 2b 71 02 00       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 8208341:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8208344:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8208348:	75 25                	jne    820836f <_ZN30Dispatcher_GuildMasterDelegate12dispatch_sigEP5CUserR9PacketBuf+0x99>
 820834a:	c7 44 24 08 22 00 00 	movl   $0x22,0x8(%esp)
 8208351:	00 
 8208352:	c7 44 24 04 9e 00 00 	movl   $0x9e,0x4(%esp)
 8208359:	00 
 820835a:	8b 45 0c             	mov    0xc(%ebp),%eax
 820835d:	89 04 24             	mov    %eax,(%esp)
 8208360:	e8 dd 3b 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8208365:	b8 00 00 00 00       	mov    $0x0,%eax
 820836a:	e9 72 01 00 00       	jmp    82084e1 <_ZN30Dispatcher_GuildMasterDelegate12dispatch_sigEP5CUserR9PacketBuf+0x20b>
 820836f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8208372:	89 04 24             	mov    %eax,(%esp)
 8208375:	e8 f8 7d 02 00       	call   8230172 <_ZN5CUser13IsGuildMasterEv>
 820837a:	83 f0 01             	xor    $0x1,%eax
 820837d:	84 c0                	test   %al,%al
 820837f:	74 25                	je     82083a6 <_ZN30Dispatcher_GuildMasterDelegate12dispatch_sigEP5CUserR9PacketBuf+0xd0>
 8208381:	c7 44 24 08 24 00 00 	movl   $0x24,0x8(%esp)
 8208388:	00 
 8208389:	c7 44 24 04 9e 00 00 	movl   $0x9e,0x4(%esp)
 8208390:	00 
 8208391:	8b 45 0c             	mov    0xc(%ebp),%eax
 8208394:	89 04 24             	mov    %eax,(%esp)
 8208397:	e8 a6 3b 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 820839c:	b8 00 00 00 00       	mov    $0x0,%eax
 82083a1:	e9 3b 01 00 00       	jmp    82084e1 <_ZN30Dispatcher_GuildMasterDelegate12dispatch_sigEP5CUserR9PacketBuf+0x20b>
 82083a6:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 82083ab:	c7 44 24 08 0e 00 00 	movl   $0xe,0x8(%esp)
 82083b2:	00 
 82083b3:	8b 55 0c             	mov    0xc(%ebp),%edx
 82083b6:	89 54 24 04          	mov    %edx,0x4(%esp)
 82083ba:	89 04 24             	mov    %eax,(%esp)
 82083bd:	e8 40 06 08 00       	call   8288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>
 82083c2:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82083c5:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 82083c9:	74 27                	je     82083f2 <_ZN30Dispatcher_GuildMasterDelegate12dispatch_sigEP5CUserR9PacketBuf+0x11c>
 82083cb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82083ce:	0f b6 c0             	movzbl %al,%eax
 82083d1:	89 44 24 08          	mov    %eax,0x8(%esp)
 82083d5:	c7 44 24 04 9e 00 00 	movl   $0x9e,0x4(%esp)
 82083dc:	00 
 82083dd:	8b 45 0c             	mov    0xc(%ebp),%eax
 82083e0:	89 04 24             	mov    %eax,(%esp)
 82083e3:	e8 5a 3b 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 82083e8:	b8 00 00 00 00       	mov    $0x0,%eax
 82083ed:	e9 ef 00 00 00       	jmp    82084e1 <_ZN30Dispatcher_GuildMasterDelegate12dispatch_sigEP5CUserR9PacketBuf+0x20b>
 82083f2:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 82083f9:	8d 45 cc             	lea    -0x34(%ebp),%eax
 82083fc:	89 44 24 04          	mov    %eax,0x4(%esp)
 8208400:	8b 45 10             	mov    0x10(%ebp),%eax
 8208403:	89 04 24             	mov    %eax,(%esp)
 8208406:	e8 e5 4c 38 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 820840b:	83 f0 01             	xor    $0x1,%eax
 820840e:	84 c0                	test   %al,%al
 8208410:	74 29                	je     820843b <_ZN30Dispatcher_GuildMasterDelegate12dispatch_sigEP5CUserR9PacketBuf+0x165>
 8208412:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8208419:	00 
 820841a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8208421:	00 
 8208422:	c7 44 24 04 60 e7 bc 	movl   $0x8bce760,0x4(%esp)
 8208429:	08 
 820842a:	c7 04 24 5b a3 00 00 	movl   $0xa35b,(%esp)
 8208431:	e8 a1 84 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8208436:	e9 a6 00 00 00       	jmp    82084e1 <_ZN30Dispatcher_GuildMasterDelegate12dispatch_sigEP5CUserR9PacketBuf+0x20b>
 820843b:	8b 45 cc             	mov    -0x34(%ebp),%eax
 820843e:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8208442:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 8208449:	00 
 820844a:	8d 45 d2             	lea    -0x2e(%ebp),%eax
 820844d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8208451:	8b 45 10             	mov    0x10(%ebp),%eax
 8208454:	89 04 24             	mov    %eax,(%esp)
 8208457:	e8 60 4e 38 00       	call   858d2bc <_ZN9PacketBuf7get_strEPcii>
 820845c:	83 f0 01             	xor    $0x1,%eax
 820845f:	84 c0                	test   %al,%al
 8208461:	74 26                	je     8208489 <_ZN30Dispatcher_GuildMasterDelegate12dispatch_sigEP5CUserR9PacketBuf+0x1b3>
 8208463:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 820846a:	00 
 820846b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8208472:	00 
 8208473:	c7 44 24 04 60 e7 bc 	movl   $0x8bce760,0x4(%esp)
 820847a:	08 
 820847b:	c7 04 24 5e a3 00 00 	movl   $0xa35e,(%esp)
 8208482:	e8 50 84 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8208487:	eb 58                	jmp    82084e1 <_ZN30Dispatcher_GuildMasterDelegate12dispatch_sigEP5CUserR9PacketBuf+0x20b>
 8208489:	8b 75 cc             	mov    -0x34(%ebp),%esi
 820848c:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8208493:	ff 
 8208494:	8b 45 0c             	mov    0xc(%ebp),%eax
 8208497:	89 04 24             	mov    %eax,(%esp)
 820849a:	e8 01 5b 44 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 820849f:	89 c3                	mov    %eax,%ebx
 82084a1:	8b 45 0c             	mov    0xc(%ebp),%eax
 82084a4:	89 04 24             	mov    %eax,(%esp)
 82084a7:	e8 e4 37 ec ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 82084ac:	8b 15 2c be 40 09    	mov    0x940be2c,%edx
 82084b2:	89 44 24 04          	mov    %eax,0x4(%esp)
 82084b6:	89 14 24             	mov    %edx,(%esp)
 82084b9:	e8 fa 4e f1 ff       	call   811d3b8 <_ZN15CServerProxyMgrI17CGuildServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 82084be:	8d 55 d2             	lea    -0x2e(%ebp),%edx
 82084c1:	89 54 24 10          	mov    %edx,0x10(%esp)
 82084c5:	89 74 24 0c          	mov    %esi,0xc(%esp)
 82084c9:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 82084cd:	8b 55 f0             	mov    -0x10(%ebp),%edx
 82084d0:	89 54 24 04          	mov    %edx,0x4(%esp)
 82084d4:	89 04 24             	mov    %eax,(%esp)
 82084d7:	e8 d0 5d 26 00       	call   846e2ac <_ZN17CGuildServerProxy23SendGuildMasterDelegateEjjiPc>
 82084dc:	b8 00 00 00 00       	mov    $0x0,%eax
 82084e1:	83 c4 50             	add    $0x50,%esp
 82084e4:	5b                   	pop    %ebx
 82084e5:	5e                   	pop    %esi
 82084e6:	5d                   	pop    %ebp
 82084e7:	c3                   	ret

```

```c
// Dispatcher_GuildMasterDelegate::dispatch_sig @ 0x82082d6

/* Dispatcher_GuildMasterDelegate::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_GuildMasterDelegate::dispatch_sig
          (Dispatcher_GuildMasterDelegate *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  CGuildServerProxy *this_00;
  int local_38;
  char local_32 [30];
  uint local_14;
  uint local_10;
  
  iVar3 = CUser::get_state(param_1);
  if (2 < iVar3) {
    iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
    if (iVar3 != 0) {
      bVar1 = false;
      goto LAB_08208309;
    }
  }
  bVar1 = true;
LAB_08208309:
  if (bVar1) {
    uVar4 = LineFunc(0xa337,
                     "virtual int Dispatcher_GuildMasterDelegate::dispatch_sig(CUser*, PacketBuf&)",
                     0,0);
  }
  else {
    local_14 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_1);
    if (local_14 == 0) {
      CUser::SendCmdErrorPacket(param_1,0x9e,0x22);
      uVar4 = 0;
    }
    else {
      cVar2 = CUser::IsGuildMaster(param_1);
      if (cVar2 == '\x01') {
        local_10 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0xe);
        if (local_10 == 0) {
          local_38 = 0;
          cVar2 = PacketBuf::get_int(param_2,&local_38);
          if (cVar2 == '\x01') {
            cVar2 = PacketBuf::get_str(param_2,local_32,0x1e,local_38);
            iVar3 = local_38;
            if (cVar2 == '\x01') {
              uVar5 = CUser::get_charac_no(param_1,-1);
              uVar4 = CUser::GetServerGroup(param_1);
              this_00 = (CGuildServerProxy *)
                        CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                                  (GlobalData::s_guild_proxy_mgr,uVar4);
              CGuildServerProxy::SendGuildMasterDelegate(this_00,local_14,uVar5,iVar3,local_32);
              uVar4 = 0;
            }
            else {
              uVar4 = LineFunc(0xa35e,
                               "virtual int Dispatcher_GuildMasterDelegate::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
            }
          }
          else {
            uVar4 = LineFunc(0xa35b,
                             "virtual int Dispatcher_GuildMasterDelegate::dispatch_sig(CUser*, PacketBuf&)"
                             ,0,0);
          }
        }
        else {
          CUser::SendCmdErrorPacket(param_1,0x9e,local_10 & 0xff);
          uVar4 = 0;
        }
      }
      else {
        CUser::SendCmdErrorPacket(param_1,0x9e,0x24);
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}

```

