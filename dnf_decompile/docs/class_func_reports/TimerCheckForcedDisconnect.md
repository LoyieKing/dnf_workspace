# TimerCheckForcedDisconnect

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## RegistNextTimer

```asm
// === 08636f26 TimerCheckForcedDisconnect::RegistNextTimer  [0x08636f26-0x8636f8f] ===
 8636f26:	55                   	push   %ebp
 8636f27:	89 e5                	mov    %esp,%ebp
 8636f29:	56                   	push   %esi
 8636f2a:	53                   	push   %ebx
 8636f2b:	83 ec 30             	sub    $0x30,%esp
 8636f2e:	c7 45 f4 0a 00 00 00 	movl   $0xa,-0xc(%ebp)
 8636f35:	8b 45 0c             	mov    0xc(%ebp),%eax
 8636f38:	89 04 24             	mov    %eax,(%esp)
 8636f3b:	e8 3c 34 aa ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 8636f40:	0f b7 f0             	movzwl %ax,%esi
 8636f43:	8b 45 0c             	mov    0xc(%ebp),%eax
 8636f46:	89 04 24             	mov    %eax,(%esp)
 8636f49:	e8 48 1d a9 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 8636f4e:	89 c3                	mov    %eax,%ebx
 8636f50:	e8 27 f5 ab ff       	call   80f647c <_Z12G_TimerQueuev>
 8636f55:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 8636f5c:	00 
 8636f5d:	89 74 24 14          	mov    %esi,0x14(%esp)
 8636f61:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8636f64:	89 54 24 10          	mov    %edx,0x10(%esp)
 8636f68:	c7 44 24 0c 6a 00 00 	movl   $0x6a,0xc(%esp)
 8636f6f:	00 
 8636f70:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8636f74:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8636f7b:	00 
 8636f7c:	89 04 24             	mov    %eax,(%esp)
 8636f7f:	e8 92 9e ff ff       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 8636f84:	b8 01 00 00 00       	mov    $0x1,%eax
 8636f89:	83 c4 30             	add    $0x30,%esp
 8636f8c:	5b                   	pop    %ebx
 8636f8d:	5e                   	pop    %esi
 8636f8e:	5d                   	pop    %ebp
 8636f8f:	c3                   	ret

```

```c
// TimerCheckForcedDisconnect::RegistNextTimer @ 0x8636f26

/* TimerCheckForcedDisconnect::RegistNextTimer(CUser*) */

undefined4 __thiscall
TimerCheckForcedDisconnect::RegistNextTimer(TimerCheckForcedDisconnect *this,CUser *param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  TimerQueue *pTVar3;
  
  uVar1 = CUser::get_unique_id(param_1);
  uVar2 = CUser::GetUID(param_1);
  pTVar3 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar3,0,uVar2,0x6a,10,uVar1,0);
  return 1;
}

```

---

## dispatch_sig

```asm
// === 08636e06 TimerCheckForcedDisconnect::dispatch_sig  [0x08636e06-0x8636f25] ===
 8636e06:	55                   	push   %ebp
 8636e07:	89 e5                	mov    %esp,%ebp
 8636e09:	56                   	push   %esi
 8636e0a:	53                   	push   %ebx
 8636e0b:	83 ec 30             	sub    $0x30,%esp
 8636e0e:	e8 7b 53 a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 8636e13:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 8636e1a:	00 
 8636e1b:	8b 55 0c             	mov    0xc(%ebp),%edx
 8636e1e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8636e22:	89 04 24             	mov    %eax,(%esp)
 8636e25:	e8 7a d9 c5 ff       	call   82947a4 <_ZN12CGameManager7getUserEii>
 8636e2a:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8636e2d:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8636e31:	75 0a                	jne    8636e3d <_ZN26TimerCheckForcedDisconnect12dispatch_sigEiij+0x37>
 8636e33:	bb 00 00 00 00       	mov    $0x0,%ebx
 8636e38:	e9 e0 00 00 00       	jmp    8636f1d <_ZN26TimerCheckForcedDisconnect12dispatch_sigEiij+0x117>
 8636e3d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8636e40:	89 04 24             	mov    %eax,(%esp)
 8636e43:	e8 34 35 aa ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 8636e48:	0f b7 c0             	movzwl %ax,%eax
 8636e4b:	3b 45 10             	cmp    0x10(%ebp),%eax
 8636e4e:	0f 95 c0             	setne  %al
 8636e51:	84 c0                	test   %al,%al
 8636e53:	74 0a                	je     8636e5f <_ZN26TimerCheckForcedDisconnect12dispatch_sigEiij+0x59>
 8636e55:	bb 00 00 00 00       	mov    $0x0,%ebx
 8636e5a:	e9 be 00 00 00       	jmp    8636f1d <_ZN26TimerCheckForcedDisconnect12dispatch_sigEiij+0x117>
 8636e5f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8636e62:	89 04 24             	mov    %eax,(%esp)
 8636e65:	e8 22 35 aa ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8636e6a:	83 f8 07             	cmp    $0x7,%eax
 8636e6d:	0f 95 c0             	setne  %al
 8636e70:	84 c0                	test   %al,%al
 8636e72:	74 0a                	je     8636e7e <_ZN26TimerCheckForcedDisconnect12dispatch_sigEiij+0x78>
 8636e74:	bb 01 00 00 00       	mov    $0x1,%ebx
 8636e79:	e9 9f 00 00 00       	jmp    8636f1d <_ZN26TimerCheckForcedDisconnect12dispatch_sigEiij+0x117>
 8636e7e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8636e81:	89 04 24             	mov    %eax,(%esp)
 8636e84:	e8 c3 6e f5 ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8636e89:	c7 44 24 08 7b 00 00 	movl   $0x7b,0x8(%esp)
 8636e90:	00 
 8636e91:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8636e98:	00 
 8636e99:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8636e9c:	89 04 24             	mov    %eax,(%esp)
 8636e9f:	e8 58 4a a9 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8636ea4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8636eab:	00 
 8636eac:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8636eaf:	89 04 24             	mov    %eax,(%esp)
 8636eb2:	e8 a1 4a a9 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8636eb7:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8636eba:	89 44 24 04          	mov    %eax,0x4(%esp)
 8636ebe:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8636ec1:	89 04 24             	mov    %eax,(%esp)
 8636ec4:	e8 f1 16 01 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8636ec9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8636ecc:	89 44 24 04          	mov    %eax,0x4(%esp)
 8636ed0:	8b 45 08             	mov    0x8(%ebp),%eax
 8636ed3:	89 04 24             	mov    %eax,(%esp)
 8636ed6:	e8 4b 00 00 00       	call   8636f26 <_ZN26TimerCheckForcedDisconnect15RegistNextTimerEP5CUser>
 8636edb:	88 45 f7             	mov    %al,-0x9(%ebp)
 8636ede:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 8636ee2:	83 f0 01             	xor    $0x1,%eax
 8636ee5:	84 c0                	test   %al,%al
 8636ee7:	74 07                	je     8636ef0 <_ZN26TimerCheckForcedDisconnect12dispatch_sigEiij+0xea>
 8636ee9:	bb 00 00 00 00       	mov    $0x0,%ebx
 8636eee:	eb 22                	jmp    8636f12 <_ZN26TimerCheckForcedDisconnect12dispatch_sigEiij+0x10c>
 8636ef0:	bb 01 00 00 00       	mov    $0x1,%ebx
 8636ef5:	eb 1b                	jmp    8636f12 <_ZN26TimerCheckForcedDisconnect12dispatch_sigEiij+0x10c>
 8636ef7:	89 d3                	mov    %edx,%ebx
 8636ef9:	89 c6                	mov    %eax,%esi
 8636efb:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8636efe:	89 04 24             	mov    %eax,(%esp)
 8636f01:	e8 7a 6f f5 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 8636f06:	89 f0                	mov    %esi,%eax
 8636f08:	89 da                	mov    %ebx,%edx
 8636f0a:	89 04 24             	mov    %eax,(%esp)
 8636f0d:	e8 3e c8 4a 00       	call   8ae3750 <_Unwind_Resume>
 8636f12:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8636f15:	89 04 24             	mov    %eax,(%esp)
 8636f18:	e8 63 6f f5 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 8636f1d:	89 d8                	mov    %ebx,%eax
 8636f1f:	83 c4 30             	add    $0x30,%esp
 8636f22:	5b                   	pop    %ebx
 8636f23:	5e                   	pop    %esi
 8636f24:	5d                   	pop    %ebp
 8636f25:	c3                   	ret

```

```c
// TimerCheckForcedDisconnect::dispatch_sig @ 0x8636e06

/* TimerCheckForcedDisconnect::dispatch_sig(int, int, unsigned int) */

bool TimerCheckForcedDisconnect::dispatch_sig(int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  PacketGuard local_20 [12];
  CUser *local_14;
  char local_d;
  
  iVar1 = G_CGameManager();
  local_14 = (CUser *)CGameManager::getUser(iVar1,param_2);
  if (local_14 == (CUser *)0x0) {
    bVar3 = false;
  }
  else {
    uVar2 = CUser::get_unique_id(local_14);
    if ((uVar2 & 0xffff) == param_3) {
      iVar1 = CUser::get_state(local_14);
      if (iVar1 == 7) {
        PacketGuard::PacketGuard(local_20);
                    /* try { // try from 08636e9f to 08636eda has its CatchHandler @ 08636ef7 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0x7b);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
        CUser::Send(local_14,local_20);
        local_d = RegistNextTimer((TimerCheckForcedDisconnect *)param_1,local_14);
        bVar3 = local_d == '\x01';
        PacketGuard::~PacketGuard(local_20);
      }
      else {
        bVar3 = true;
      }
    }
    else {
      bVar3 = false;
    }
  }
  return bVar3;
}

```

