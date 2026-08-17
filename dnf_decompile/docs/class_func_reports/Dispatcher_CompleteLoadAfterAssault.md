# Dispatcher_CompleteLoadAfterAssault

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08206b5c Dispatcher_CompleteLoadAfterAssault::dispatch_sig  [0x08206b5c-0x8206cf9] ===
 8206b5c:	55                   	push   %ebp
 8206b5d:	89 e5                	mov    %esp,%ebp
 8206b5f:	57                   	push   %edi
 8206b60:	56                   	push   %esi
 8206b61:	53                   	push   %ebx
 8206b62:	83 ec 4c             	sub    $0x4c,%esp
 8206b65:	8b 45 0c             	mov    0xc(%ebp),%eax
 8206b68:	89 04 24             	mov    %eax,(%esp)
 8206b6b:	e8 1c 38 ed ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8206b70:	83 f8 01             	cmp    $0x1,%eax
 8206b73:	0f 9e c0             	setle  %al
 8206b76:	84 c0                	test   %al,%al
 8206b78:	74 29                	je     8206ba3 <_ZN35Dispatcher_CompleteLoadAfterAssault12dispatch_sigEP5CUserR9PacketBuf+0x47>
 8206b7a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8206b81:	00 
 8206b82:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8206b89:	00 
 8206b8a:	c7 44 24 04 80 eb bc 	movl   $0x8bceb80,0x4(%esp)
 8206b91:	08 
 8206b92:	c7 04 24 51 a1 00 00 	movl   $0xa151,(%esp)
 8206b99:	e8 39 9d 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8206b9e:	e9 4f 01 00 00       	jmp    8206cf2 <_ZN35Dispatcher_CompleteLoadAfterAssault12dispatch_sigEP5CUserR9PacketBuf+0x196>
 8206ba3:	8b 45 0c             	mov    0xc(%ebp),%eax
 8206ba6:	89 04 24             	mov    %eax,(%esp)
 8206ba9:	e8 46 8b 02 00       	call   822f6f4 <_ZN15CUserCharacInfo22GetCurCharacSuperStateEv>
 8206bae:	84 c0                	test   %al,%al
 8206bb0:	74 65                	je     8206c17 <_ZN35Dispatcher_CompleteLoadAfterAssault12dispatch_sigEP5CUserR9PacketBuf+0xbb>
 8206bb2:	8b 45 0c             	mov    0xc(%ebp),%eax
 8206bb5:	89 04 24             	mov    %eax,(%esp)
 8206bb8:	e8 91 50 ec ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8206bbd:	89 c7                	mov    %eax,%edi
 8206bbf:	8b 45 0c             	mov    0xc(%ebp),%eax
 8206bc2:	89 04 24             	mov    %eax,(%esp)
 8206bc5:	e8 c8 8a 02 00       	call   822f692 <_ZN15CUserCharacInfo12GetLoginTickEv>
 8206bca:	89 c6                	mov    %eax,%esi
 8206bcc:	e8 ca 55 ec ff       	call   80cc19b <_Z14G_CDataManagerv>
 8206bd1:	8b 80 88 a6 00 00    	mov    0xa688(%eax),%eax
 8206bd7:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8206bda:	8b 45 0c             	mov    0xc(%ebp),%eax
 8206bdd:	89 04 24             	mov    %eax,(%esp)
 8206be0:	e8 b1 20 ec ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 8206be5:	89 c3                	mov    %eax,%ebx
 8206be7:	e8 90 f8 ee ff       	call   80f647c <_Z12G_TimerQueuev>
 8206bec:	89 7c 24 18          	mov    %edi,0x18(%esp)
 8206bf0:	89 74 24 14          	mov    %esi,0x14(%esp)
 8206bf4:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 8206bf7:	89 54 24 10          	mov    %edx,0x10(%esp)
 8206bfb:	c7 44 24 0c 7f 00 00 	movl   $0x7f,0xc(%esp)
 8206c02:	00 
 8206c03:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8206c07:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8206c0e:	00 
 8206c0f:	89 04 24             	mov    %eax,(%esp)
 8206c12:	e8 ff a1 42 00       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 8206c17:	8b 45 0c             	mov    0xc(%ebp),%eax
 8206c1a:	89 04 24             	mov    %eax,(%esp)
 8206c1d:	e8 2a e5 44 00       	call   865514c <_ZN5CUser8GetPartyEv>
 8206c22:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8206c25:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 8206c29:	0f 84 be 00 00 00    	je     8206ced <_ZN35Dispatcher_CompleteLoadAfterAssault12dispatch_sigEP5CUserR9PacketBuf+0x191>
 8206c2f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8206c32:	89 44 24 04          	mov    %eax,0x4(%esp)
 8206c36:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8206c39:	89 04 24             	mov    %eax,(%esp)
 8206c3c:	e8 97 d3 3a 00       	call   85b3fd8 <_ZN6CParty22CheckRecvFromAllMemberEP5CUser>
 8206c41:	84 c0                	test   %al,%al
 8206c43:	0f 84 a4 00 00 00    	je     8206ced <_ZN35Dispatcher_CompleteLoadAfterAssault12dispatch_sigEP5CUserR9PacketBuf+0x191>
 8206c49:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8206c4c:	89 04 24             	mov    %eax,(%esp)
 8206c4f:	e8 f8 70 38 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8206c54:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8206c57:	89 04 24             	mov    %eax,(%esp)
 8206c5a:	e8 87 4c ec ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 8206c5f:	c7 44 24 08 f8 00 00 	movl   $0xf8,0x8(%esp)
 8206c66:	00 
 8206c67:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8206c6e:	00 
 8206c6f:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8206c72:	89 04 24             	mov    %eax,(%esp)
 8206c75:	e8 82 4c ec ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8206c7a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8206c81:	00 
 8206c82:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8206c85:	89 04 24             	mov    %eax,(%esp)
 8206c88:	e8 93 4c ec ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8206c8d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8206c94:	00 
 8206c95:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8206c98:	89 04 24             	mov    %eax,(%esp)
 8206c9b:	e8 b8 4c ec ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8206ca0:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8206ca3:	89 44 24 04          	mov    %eax,0x4(%esp)
 8206ca7:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8206caa:	89 04 24             	mov    %eax,(%esp)
 8206cad:	e8 9c 64 39 00       	call   859d14e <_ZN6CParty13send_to_partyER11PacketGuard>
 8206cb2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8206cb9:	00 
 8206cba:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8206cbd:	89 04 24             	mov    %eax,(%esp)
 8206cc0:	e8 59 6b 02 00       	call   822d81e <_ZN6CParty17SetRecvResultFlagEb>
 8206cc5:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8206cc8:	89 04 24             	mov    %eax,(%esp)
 8206ccb:	e8 b0 71 38 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8206cd0:	eb 1b                	jmp    8206ced <_ZN35Dispatcher_CompleteLoadAfterAssault12dispatch_sigEP5CUserR9PacketBuf+0x191>
 8206cd2:	89 d3                	mov    %edx,%ebx
 8206cd4:	89 c6                	mov    %eax,%esi
 8206cd6:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8206cd9:	89 04 24             	mov    %eax,(%esp)
 8206cdc:	e8 9f 71 38 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8206ce1:	89 f0                	mov    %esi,%eax
 8206ce3:	89 da                	mov    %ebx,%edx
 8206ce5:	89 04 24             	mov    %eax,(%esp)
 8206ce8:	e8 63 ca 8d 00       	call   8ae3750 <_Unwind_Resume>
 8206ced:	b8 00 00 00 00       	mov    $0x0,%eax
 8206cf2:	83 c4 4c             	add    $0x4c,%esp
 8206cf5:	5b                   	pop    %ebx
 8206cf6:	5e                   	pop    %esi
 8206cf7:	5f                   	pop    %edi
 8206cf8:	5d                   	pop    %ebp
 8206cf9:	c3                   	ret

```

```c
// Dispatcher_CompleteLoadAfterAssault::dispatch_sig @ 0x8206b5c

/* Dispatcher_CompleteLoadAfterAssault::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_CompleteLoadAfterAssault::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  TimerQueue *pTVar7;
  PacketGuard local_2c [12];
  CParty *local_20;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 < 2) {
    uVar3 = LineFunc(0xa151,
                     "virtual int Dispatcher_CompleteLoadAfterAssault::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
  }
  else {
    cVar1 = CUserCharacInfo::GetCurCharacSuperState((CUserCharacInfo *)param_2);
    if (cVar1 != '\0') {
      uVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
      uVar5 = CUserCharacInfo::GetLoginTick((CUserCharacInfo *)param_2);
      iVar2 = G_CDataManager();
      uVar3 = *(undefined4 *)(iVar2 + 0xa688);
      uVar6 = CUser::GetUID((CUser *)param_2);
      pTVar7 = (TimerQueue *)G_TimerQueue();
      TimerQueue::InsertTimer(pTVar7,0,uVar6,0x7f,uVar3,uVar5,uVar4);
    }
    local_20 = (CParty *)CUser::GetParty((CUser *)param_2);
    if (local_20 != (CParty *)0x0) {
      cVar1 = CParty::CheckRecvFromAllMember(local_20,(CUser *)param_2);
      if (cVar1 != '\0') {
        PacketGuard::PacketGuard(local_2c);
                    /* try { // try from 08206c5a to 08206cb1 has its CatchHandler @ 08206cd2 */
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_2c);
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,1,0xf8);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,1);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
        CParty::send_to_party(local_20,local_2c);
        CParty::SetRecvResultFlag(local_20,true);
        PacketGuard::~PacketGuard(local_2c);
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}

```

