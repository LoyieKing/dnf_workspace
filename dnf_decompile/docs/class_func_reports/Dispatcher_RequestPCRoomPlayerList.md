# Dispatcher_RequestPCRoomPlayerList

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0821d7fa Dispatcher_RequestPCRoomPlayerList::dispatch_sig  [0x0821d7fa-0x821d8cf] ===
 821d7fa:	55                   	push   %ebp
 821d7fb:	89 e5                	mov    %esp,%ebp
 821d7fd:	56                   	push   %esi
 821d7fe:	53                   	push   %ebx
 821d7ff:	83 ec 20             	sub    $0x20,%esp
 821d802:	8b 45 0c             	mov    0xc(%ebp),%eax
 821d805:	89 04 24             	mov    %eax,(%esp)
 821d808:	e8 7f cb eb ff       	call   80da38c <_ZN5CUser9get_stateEv>
 821d80d:	83 f8 02             	cmp    $0x2,%eax
 821d810:	7e 0f                	jle    821d821 <_ZN34Dispatcher_RequestPCRoomPlayerList12dispatch_sigEP5CUserR9PacketBuf+0x27>
 821d812:	8b 45 0c             	mov    0xc(%ebp),%eax
 821d815:	89 04 24             	mov    %eax,(%esp)
 821d818:	e8 15 2c f0 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 821d81d:	85 c0                	test   %eax,%eax
 821d81f:	75 07                	jne    821d828 <_ZN34Dispatcher_RequestPCRoomPlayerList12dispatch_sigEP5CUserR9PacketBuf+0x2e>
 821d821:	b8 01 00 00 00       	mov    $0x1,%eax
 821d826:	eb 05                	jmp    821d82d <_ZN34Dispatcher_RequestPCRoomPlayerList12dispatch_sigEP5CUserR9PacketBuf+0x33>
 821d828:	b8 00 00 00 00       	mov    $0x0,%eax
 821d82d:	84 c0                	test   %al,%al
 821d82f:	0f 84 8e 00 00 00    	je     821d8c3 <_ZN34Dispatcher_RequestPCRoomPlayerList12dispatch_sigEP5CUserR9PacketBuf+0xc9>
 821d835:	8b 45 0c             	mov    0xc(%ebp),%eax
 821d838:	89 04 24             	mov    %eax,(%esp)
 821d83b:	e8 2e cb eb ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 821d840:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 821d847:	00 
 821d848:	89 04 24             	mov    %eax,(%esp)
 821d84b:	e8 fb b7 ee ff       	call   810904b <_Z14NumberToStringji>
 821d850:	89 c3                	mov    %eax,%ebx
 821d852:	8b 45 0c             	mov    0xc(%ebp),%eax
 821d855:	89 04 24             	mov    %eax,(%esp)
 821d858:	e8 2f cb eb ff       	call   80da38c <_ZN5CUser9get_stateEv>
 821d85d:	89 c6                	mov    %eax,%esi
 821d85f:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 821d866:	00 
 821d867:	c7 44 24 08 4e d1 00 	movl   $0xd14e,0x8(%esp)
 821d86e:	00 
 821d86f:	c7 44 24 04 c0 d4 bc 	movl   $0x8bcd4c0,0x4(%esp)
 821d876:	08 
 821d877:	8d 45 e8             	lea    -0x18(%ebp),%eax
 821d87a:	89 04 24             	mov    %eax,(%esp)
 821d87d:	e8 96 1e 33 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 821d882:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 821d886:	89 74 24 08          	mov    %esi,0x8(%esp)
 821d88a:	c7 44 24 04 2c 34 bc 	movl   $0x8bc342c,0x4(%esp)
 821d891:	08 
 821d892:	8d 45 e8             	lea    -0x18(%ebp),%eax
 821d895:	89 04 24             	mov    %eax,(%esp)
 821d898:	e8 eb 1e 33 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 821d89d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821d8a4:	00 
 821d8a5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821d8ac:	00 
 821d8ad:	c7 44 24 04 c0 d4 bc 	movl   $0x8bcd4c0,0x4(%esp)
 821d8b4:	08 
 821d8b5:	c7 04 24 4f d1 00 00 	movl   $0xd14f,(%esp)
 821d8bc:	e8 16 30 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821d8c1:	eb 05                	jmp    821d8c8 <_ZN34Dispatcher_RequestPCRoomPlayerList12dispatch_sigEP5CUserR9PacketBuf+0xce>
 821d8c3:	b8 00 00 00 00       	mov    $0x0,%eax
 821d8c8:	83 c4 20             	add    $0x20,%esp
 821d8cb:	5b                   	pop    %ebx
 821d8cc:	5e                   	pop    %esi
 821d8cd:	5d                   	pop    %ebp
 821d8ce:	c3                   	ret
 821d8cf:	90                   	nop

```

```c
// Dispatcher_RequestPCRoomPlayerList::dispatch_sig @ 0x821d7fa

/* Dispatcher_RequestPCRoomPlayerList::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_RequestPCRoomPlayerList::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  cMyTrace local_1c [16];
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (2 < iVar2) {
    iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar2 != 0) {
      bVar1 = false;
      goto LAB_0821d82d;
    }
  }
  bVar1 = true;
LAB_0821d82d:
  if (bVar1) {
    uVar3 = CUser::get_acc_id((CUser *)param_2);
    uVar4 = NumberToString(uVar3,0);
    uVar5 = CUser::get_state((CUser *)param_2);
    cMyTrace::cMyTrace(local_1c,
                       "virtual int Dispatcher_RequestPCRoomPlayerList::dispatch_sig(CUser*, PacketBuf&)"
                       ,0xd14e,5);
    cMyTrace::operator()
              (local_1c,"PCROOM : Dispatcher_RequestPCRoomPlayerList => User State : %d, m_id : %s",
               uVar5,uVar4);
    uVar4 = LineFunc(0xd14f,
                     "virtual int Dispatcher_RequestPCRoomPlayerList::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

```

