# DisPatcher_RemoveFriend

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 081cb5d8 DisPatcher_RemoveFriend::check_error  [0x081cb5d8-0x81cb617] ===
 81cb5d8:	55                   	push   %ebp
 81cb5d9:	89 e5                	mov    %esp,%ebp
 81cb5db:	83 ec 28             	sub    $0x28,%esp
 81cb5de:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cb5e1:	89 04 24             	mov    %eax,(%esp)
 81cb5e4:	e8 a3 ed f0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81cb5e9:	83 f8 02             	cmp    $0x2,%eax
 81cb5ec:	0f 9e c0             	setle  %al
 81cb5ef:	84 c0                	test   %al,%al
 81cb5f1:	74 07                	je     81cb5fa <_ZN23DisPatcher_RemoveFriend11check_errorEP5CUserR8MSG_BASE+0x22>
 81cb5f3:	b8 ff ff ff 7f       	mov    $0x7fffffff,%eax
 81cb5f8:	eb 1c                	jmp    81cb616 <_ZN23DisPatcher_RemoveFriend11check_errorEP5CUserR8MSG_BASE+0x3e>
 81cb5fa:	8b 45 10             	mov    0x10(%ebp),%eax
 81cb5fd:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81cb600:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cb603:	83 c0 11             	add    $0x11,%eax
 81cb606:	85 c0                	test   %eax,%eax
 81cb608:	75 07                	jne    81cb611 <_ZN23DisPatcher_RemoveFriend11check_errorEP5CUserR8MSG_BASE+0x39>
 81cb60a:	b8 01 00 00 00       	mov    $0x1,%eax
 81cb60f:	eb 05                	jmp    81cb616 <_ZN23DisPatcher_RemoveFriend11check_errorEP5CUserR8MSG_BASE+0x3e>
 81cb611:	b8 00 00 00 00       	mov    $0x0,%eax
 81cb616:	c9                   	leave
 81cb617:	c3                   	ret

```

```c
// DisPatcher_RemoveFriend::check_error @ 0x81cb5d8

/* DisPatcher_RemoveFriend::check_error(CUser*, MSG_BASE&) */

undefined4 __thiscall
DisPatcher_RemoveFriend::check_error(DisPatcher_RemoveFriend *this,CUser *param_1,MSG_BASE *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CUser::get_state(param_1);
  if (iVar1 < 3) {
    uVar2 = 0x7fffffff;
  }
  else if (param_2 == (MSG_BASE *)0xffffffef) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## process

```asm
// === 081cb618 DisPatcher_RemoveFriend::process  [0x081cb618-0x81cb737] ===
 81cb618:	55                   	push   %ebp
 81cb619:	89 e5                	mov    %esp,%ebp
 81cb61b:	56                   	push   %esi
 81cb61c:	53                   	push   %ebx
 81cb61d:	83 ec 50             	sub    $0x50,%esp
 81cb620:	8b 45 14             	mov    0x14(%ebp),%eax
 81cb623:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81cb626:	8b 45 10             	mov    0x10(%ebp),%eax
 81cb629:	89 44 24 08          	mov    %eax,0x8(%esp)
 81cb62d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cb630:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cb634:	8b 45 08             	mov    0x8(%ebp),%eax
 81cb637:	89 04 24             	mov    %eax,(%esp)
 81cb63a:	e8 99 ff ff ff       	call   81cb5d8 <_ZN23DisPatcher_RemoveFriend11check_errorEP5CUserR8MSG_BASE>
 81cb63f:	89 c2                	mov    %eax,%edx
 81cb641:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81cb644:	89 50 04             	mov    %edx,0x4(%eax)
 81cb647:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81cb64a:	8b 40 04             	mov    0x4(%eax),%eax
 81cb64d:	85 c0                	test   %eax,%eax
 81cb64f:	7e 0a                	jle    81cb65b <_ZN23DisPatcher_RemoveFriend7processEP5CUserR8MSG_BASER9ParamBase+0x43>
 81cb651:	b8 00 00 00 00       	mov    $0x0,%eax
 81cb656:	e9 d5 00 00 00       	jmp    81cb730 <_ZN23DisPatcher_RemoveFriend7processEP5CUserR8MSG_BASER9ParamBase+0x118>
 81cb65b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81cb65e:	8b 40 04             	mov    0x4(%eax),%eax
 81cb661:	85 c0                	test   %eax,%eax
 81cb663:	79 32                	jns    81cb697 <_ZN23DisPatcher_RemoveFriend7processEP5CUserR8MSG_BASER9ParamBase+0x7f>
 81cb665:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cb668:	89 04 24             	mov    %eax,(%esp)
 81cb66b:	e8 fe ec f0 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81cb670:	8b 55 ec             	mov    -0x14(%ebp),%edx
 81cb673:	8b 52 04             	mov    0x4(%edx),%edx
 81cb676:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81cb67a:	89 54 24 08          	mov    %edx,0x8(%esp)
 81cb67e:	c7 44 24 04 60 4f bd 	movl   $0x8bd4f60,0x4(%esp)
 81cb685:	08 
 81cb686:	c7 04 24 41 21 00 00 	movl   $0x2141,(%esp)
 81cb68d:	e8 45 52 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81cb692:	e9 99 00 00 00       	jmp    81cb730 <_ZN23DisPatcher_RemoveFriend7processEP5CUserR8MSG_BASER9ParamBase+0x118>
 81cb697:	8b 45 10             	mov    0x10(%ebp),%eax
 81cb69a:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81cb69d:	8d 45 bc             	lea    -0x44(%ebp),%eax
 81cb6a0:	89 04 24             	mov    %eax,(%esp)
 81cb6a3:	e8 0a 06 06 00       	call   822bcb2 <_ZN24Packet_Monitor_Del_BuddyC1Ev>
 81cb6a8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cb6ab:	89 04 24             	mov    %eax,(%esp)
 81cb6ae:	e8 9b 05 f0 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 81cb6b3:	89 45 c6             	mov    %eax,-0x3a(%ebp)
 81cb6b6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cb6b9:	89 04 24             	mov    %eax,(%esp)
 81cb6bc:	e8 d5 d5 ef ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 81cb6c1:	89 45 ca             	mov    %eax,-0x36(%ebp)
 81cb6c4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81cb6c7:	83 c0 11             	add    $0x11,%eax
 81cb6ca:	89 04 24             	mov    %eax,(%esp)
 81cb6cd:	e8 de 2c eb ff       	call   807e3b0 <strlen@plt>
 81cb6d2:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81cb6d5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cb6d8:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81cb6db:	83 c2 11             	add    $0x11,%edx
 81cb6de:	89 44 24 08          	mov    %eax,0x8(%esp)
 81cb6e2:	89 54 24 04          	mov    %edx,0x4(%esp)
 81cb6e6:	8d 45 bc             	lea    -0x44(%ebp),%eax
 81cb6e9:	83 c0 12             	add    $0x12,%eax
 81cb6ec:	89 04 24             	mov    %eax,(%esp)
 81cb6ef:	e8 ac 21 eb ff       	call   807d8a0 <memcpy@plt>
 81cb6f4:	0f b7 45 be          	movzwl -0x42(%ebp),%eax
 81cb6f8:	0f b7 f0             	movzwl %ax,%esi
 81cb6fb:	8d 5d bc             	lea    -0x44(%ebp),%ebx
 81cb6fe:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cb701:	89 04 24             	mov    %eax,(%esp)
 81cb704:	e8 87 05 f0 ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 81cb709:	8b 15 28 be 40 09    	mov    0x940be28,%edx
 81cb70f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cb713:	89 14 24             	mov    %edx,(%esp)
 81cb716:	e8 6f 69 f4 ff       	call   811208a <_ZN15CServerProxyMgrI19CMonitorServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 81cb71b:	89 74 24 08          	mov    %esi,0x8(%esp)
 81cb71f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81cb723:	89 04 24             	mov    %eax,(%esp)
 81cb726:	e8 c9 56 2a 00       	call   8470df4 <_ZN19CMonitorServerProxy10SendPacketEPci>
 81cb72b:	b8 00 00 00 00       	mov    $0x0,%eax
 81cb730:	83 c4 50             	add    $0x50,%esp
 81cb733:	5b                   	pop    %ebx
 81cb734:	5e                   	pop    %esi
 81cb735:	5d                   	pop    %ebp
 81cb736:	c3                   	ret
 81cb737:	90                   	nop

```

```c
// DisPatcher_RemoveFriend::process @ 0x81cb618

/* DisPatcher_RemoveFriend::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
DisPatcher_RemoveFriend::process
          (DisPatcher_RemoveFriend *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  CMonitorServerProxy *this_00;
  Packet_Monitor_Del_Buddy local_48 [2];
  ushort local_46;
  undefined4 local_3e;
  undefined4 local_3a;
  undefined1 auStack_36 [30];
  ParamBase *local_18;
  MSG_BASE *local_14;
  size_t local_10;
  
  local_18 = param_3;
  uVar1 = check_error(this,param_1,param_2);
  *(undefined4 *)(local_18 + 4) = uVar1;
  if (*(int *)(local_18 + 4) < 1) {
    if (*(int *)(local_18 + 4) < 0) {
      uVar2 = CUser::get_acc_id(param_1);
      uVar1 = LineFunc(0x2141,
                       "virtual int DisPatcher_RemoveFriend::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(local_18 + 4),uVar2);
    }
    else {
      local_14 = param_2;
      Packet_Monitor_Del_Buddy::Packet_Monitor_Del_Buddy(local_48);
      local_3e = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      local_3a = CUser::GetUID(param_1);
      local_10 = strlen((char *)(local_14 + 0x11));
      memcpy(auStack_36,local_14 + 0x11,local_10);
      uVar1 = CUser::GetServerGroup(param_1);
      this_00 = (CMonitorServerProxy *)
                CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                          (GlobalData::s_monitor_proxy_mgr,uVar1);
      CMonitorServerProxy::SendPacket(this_00,(char *)local_48,(uint)local_46);
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## read

```asm
// === 081cb52e DisPatcher_RemoveFriend::read  [0x081cb52e-0x81cb5d7] ===
 81cb52e:	55                   	push   %ebp
 81cb52f:	89 e5                	mov    %esp,%ebp
 81cb531:	83 ec 28             	sub    $0x28,%esp
 81cb534:	8b 45 10             	mov    0x10(%ebp),%eax
 81cb537:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81cb53a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cb53d:	83 c0 0d             	add    $0xd,%eax
 81cb540:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cb544:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cb547:	89 04 24             	mov    %eax,(%esp)
 81cb54a:	e8 a1 1b 3c 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81cb54f:	83 f0 01             	xor    $0x1,%eax
 81cb552:	84 c0                	test   %al,%al
 81cb554:	74 26                	je     81cb57c <_ZN23DisPatcher_RemoveFriend4readER9PacketBufR8MSG_BASE+0x4e>
 81cb556:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81cb55d:	00 
 81cb55e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81cb565:	00 
 81cb566:	c7 44 24 04 c0 4f bd 	movl   $0x8bd4fc0,0x4(%esp)
 81cb56d:	08 
 81cb56e:	c7 04 24 15 21 00 00 	movl   $0x2115,(%esp)
 81cb575:	e8 5d 53 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81cb57a:	eb 59                	jmp    81cb5d5 <_ZN23DisPatcher_RemoveFriend4readER9PacketBufR8MSG_BASE+0xa7>
 81cb57c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cb57f:	8b 40 0d             	mov    0xd(%eax),%eax
 81cb582:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81cb585:	83 c2 11             	add    $0x11,%edx
 81cb588:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81cb58c:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 81cb593:	00 
 81cb594:	89 54 24 04          	mov    %edx,0x4(%esp)
 81cb598:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cb59b:	89 04 24             	mov    %eax,(%esp)
 81cb59e:	e8 19 1d 3c 00       	call   858d2bc <_ZN9PacketBuf7get_strEPcii>
 81cb5a3:	83 f0 01             	xor    $0x1,%eax
 81cb5a6:	84 c0                	test   %al,%al
 81cb5a8:	74 26                	je     81cb5d0 <_ZN23DisPatcher_RemoveFriend4readER9PacketBufR8MSG_BASE+0xa2>
 81cb5aa:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81cb5b1:	00 
 81cb5b2:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81cb5b9:	00 
 81cb5ba:	c7 44 24 04 c0 4f bd 	movl   $0x8bd4fc0,0x4(%esp)
 81cb5c1:	08 
 81cb5c2:	c7 04 24 1c 21 00 00 	movl   $0x211c,(%esp)
 81cb5c9:	e8 09 53 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81cb5ce:	eb 05                	jmp    81cb5d5 <_ZN23DisPatcher_RemoveFriend4readER9PacketBufR8MSG_BASE+0xa7>
 81cb5d0:	b8 00 00 00 00       	mov    $0x0,%eax
 81cb5d5:	c9                   	leave
 81cb5d6:	c3                   	ret
 81cb5d7:	90                   	nop

```

```c
// DisPatcher_RemoveFriend::read @ 0x81cb52e

/* DisPatcher_RemoveFriend::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
DisPatcher_RemoveFriend::read(DisPatcher_RemoveFriend *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_str(param_1,(char *)(param_2 + 0x11),0x1e,*(int *)(param_2 + 0xd));
    if (cVar1 == '\x01') {
      uVar2 = 0;
    }
    else {
      uVar2 = LineFunc(0x211c,"virtual int DisPatcher_RemoveFriend::read(PacketBuf&, MSG_BASE&)",0,0
                      );
    }
  }
  else {
    uVar2 = LineFunc(0x2115,"virtual int DisPatcher_RemoveFriend::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}

```

---

## send

```asm
// === 081cb738 DisPatcher_RemoveFriend::send  [0x081cb738-0x81cb77f] ===
 81cb738:	55                   	push   %ebp
 81cb739:	89 e5                	mov    %esp,%ebp
 81cb73b:	83 ec 28             	sub    $0x28,%esp
 81cb73e:	8b 45 10             	mov    0x10(%ebp),%eax
 81cb741:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81cb744:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cb747:	8b 40 04             	mov    0x4(%eax),%eax
 81cb74a:	3d ff ff ff 7f       	cmp    $0x7fffffff,%eax
 81cb74f:	74 2c                	je     81cb77d <_ZN23DisPatcher_RemoveFriend4sendEP5CUserR9ParamBase+0x45>
 81cb751:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cb754:	8b 40 04             	mov    0x4(%eax),%eax
 81cb757:	85 c0                	test   %eax,%eax
 81cb759:	74 23                	je     81cb77e <_ZN23DisPatcher_RemoveFriend4sendEP5CUserR9ParamBase+0x46>
 81cb75b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cb75e:	8b 40 04             	mov    0x4(%eax),%eax
 81cb761:	0f b6 c0             	movzbl %al,%eax
 81cb764:	89 44 24 08          	mov    %eax,0x8(%esp)
 81cb768:	c7 44 24 04 40 00 00 	movl   $0x40,0x4(%esp)
 81cb76f:	00 
 81cb770:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cb773:	89 04 24             	mov    %eax,(%esp)
 81cb776:	e8 c7 07 4b 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81cb77b:	eb 01                	jmp    81cb77e <_ZN23DisPatcher_RemoveFriend4sendEP5CUserR9ParamBase+0x46>
 81cb77d:	90                   	nop
 81cb77e:	c9                   	leave
 81cb77f:	c3                   	ret

```

```c
// DisPatcher_RemoveFriend::send @ 0x81cb738

/* DisPatcher_RemoveFriend::send(CUser*, ParamBase&) */

void __thiscall
DisPatcher_RemoveFriend::send(DisPatcher_RemoveFriend *this,CUser *param_1,ParamBase *param_2)

{
  if ((*(int *)(param_2 + 4) != 0x7fffffff) && (*(int *)(param_2 + 4) != 0)) {
    CUser::SendCmdErrorPacket(param_1,0x40,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}

```

