# Dispatcher_RequestPCRoomPlayerCount

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0821d8d0 Dispatcher_RequestPCRoomPlayerCount::dispatch_sig  [0x0821d8d0-0x821d9a5] ===
 821d8d0:	55                   	push   %ebp
 821d8d1:	89 e5                	mov    %esp,%ebp
 821d8d3:	56                   	push   %esi
 821d8d4:	53                   	push   %ebx
 821d8d5:	83 ec 20             	sub    $0x20,%esp
 821d8d8:	8b 45 0c             	mov    0xc(%ebp),%eax
 821d8db:	89 04 24             	mov    %eax,(%esp)
 821d8de:	e8 a9 ca eb ff       	call   80da38c <_ZN5CUser9get_stateEv>
 821d8e3:	83 f8 02             	cmp    $0x2,%eax
 821d8e6:	7e 0f                	jle    821d8f7 <_ZN35Dispatcher_RequestPCRoomPlayerCount12dispatch_sigEP5CUserR9PacketBuf+0x27>
 821d8e8:	8b 45 0c             	mov    0xc(%ebp),%eax
 821d8eb:	89 04 24             	mov    %eax,(%esp)
 821d8ee:	e8 3f 2b f0 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 821d8f3:	85 c0                	test   %eax,%eax
 821d8f5:	75 07                	jne    821d8fe <_ZN35Dispatcher_RequestPCRoomPlayerCount12dispatch_sigEP5CUserR9PacketBuf+0x2e>
 821d8f7:	b8 01 00 00 00       	mov    $0x1,%eax
 821d8fc:	eb 05                	jmp    821d903 <_ZN35Dispatcher_RequestPCRoomPlayerCount12dispatch_sigEP5CUserR9PacketBuf+0x33>
 821d8fe:	b8 00 00 00 00       	mov    $0x0,%eax
 821d903:	84 c0                	test   %al,%al
 821d905:	0f 84 8e 00 00 00    	je     821d999 <_ZN35Dispatcher_RequestPCRoomPlayerCount12dispatch_sigEP5CUserR9PacketBuf+0xc9>
 821d90b:	8b 45 0c             	mov    0xc(%ebp),%eax
 821d90e:	89 04 24             	mov    %eax,(%esp)
 821d911:	e8 58 ca eb ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 821d916:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 821d91d:	00 
 821d91e:	89 04 24             	mov    %eax,(%esp)
 821d921:	e8 25 b7 ee ff       	call   810904b <_Z14NumberToStringji>
 821d926:	89 c3                	mov    %eax,%ebx
 821d928:	8b 45 0c             	mov    0xc(%ebp),%eax
 821d92b:	89 04 24             	mov    %eax,(%esp)
 821d92e:	e8 59 ca eb ff       	call   80da38c <_ZN5CUser9get_stateEv>
 821d933:	89 c6                	mov    %eax,%esi
 821d935:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 821d93c:	00 
 821d93d:	c7 44 24 08 86 d1 00 	movl   $0xd186,0x8(%esp)
 821d944:	00 
 821d945:	c7 44 24 04 60 d4 bc 	movl   $0x8bcd460,0x4(%esp)
 821d94c:	08 
 821d94d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 821d950:	89 04 24             	mov    %eax,(%esp)
 821d953:	e8 c0 1d 33 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 821d958:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 821d95c:	89 74 24 08          	mov    %esi,0x8(%esp)
 821d960:	c7 44 24 04 78 34 bc 	movl   $0x8bc3478,0x4(%esp)
 821d967:	08 
 821d968:	8d 45 e8             	lea    -0x18(%ebp),%eax
 821d96b:	89 04 24             	mov    %eax,(%esp)
 821d96e:	e8 15 1e 33 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 821d973:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821d97a:	00 
 821d97b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821d982:	00 
 821d983:	c7 44 24 04 60 d4 bc 	movl   $0x8bcd460,0x4(%esp)
 821d98a:	08 
 821d98b:	c7 04 24 87 d1 00 00 	movl   $0xd187,(%esp)
 821d992:	e8 40 2f 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821d997:	eb 05                	jmp    821d99e <_ZN35Dispatcher_RequestPCRoomPlayerCount12dispatch_sigEP5CUserR9PacketBuf+0xce>
 821d999:	b8 00 00 00 00       	mov    $0x0,%eax
 821d99e:	83 c4 20             	add    $0x20,%esp
 821d9a1:	5b                   	pop    %ebx
 821d9a2:	5e                   	pop    %esi
 821d9a3:	5d                   	pop    %ebp
 821d9a4:	c3                   	ret
 821d9a5:	90                   	nop

```

```c
// Dispatcher_RequestPCRoomPlayerCount::dispatch_sig @ 0x821d8d0

/* Dispatcher_RequestPCRoomPlayerCount::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_RequestPCRoomPlayerCount::dispatch_sig(CUser *param_1,PacketBuf *param_2)

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
      goto LAB_0821d903;
    }
  }
  bVar1 = true;
LAB_0821d903:
  if (bVar1) {
    uVar3 = CUser::get_acc_id((CUser *)param_2);
    uVar4 = NumberToString(uVar3,0);
    uVar5 = CUser::get_state((CUser *)param_2);
    cMyTrace::cMyTrace(local_1c,
                       "virtual int Dispatcher_RequestPCRoomPlayerCount::dispatch_sig(CUser*, PacketBuf&)"
                       ,0xd186,5);
    cMyTrace::operator()
              (local_1c,"PCROOM : Dispatcher_RequestPCRoomPlayerCount => User State : %d, m_id : %s"
               ,uVar5,uVar4);
    uVar4 = LineFunc(0xd187,
                     "virtual int Dispatcher_RequestPCRoomPlayerCount::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

```

