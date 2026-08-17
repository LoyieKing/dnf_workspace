# Inter_NoticeHasBeenGuildMaster

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084c9d0a Inter_NoticeHasBeenGuildMaster::dispatch_sig  [0x084c9d0a-0x84c9e2f] ===
 84c9d0a:	55                   	push   %ebp
 84c9d0b:	89 e5                	mov    %esp,%ebp
 84c9d0d:	56                   	push   %esi
 84c9d0e:	53                   	push   %ebx
 84c9d0f:	83 ec 30             	sub    $0x30,%esp
 84c9d12:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c9d15:	89 04 24             	mov    %eax,(%esp)
 84c9d18:	e8 6f 06 c1 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84c9d1d:	85 c0                	test   %eax,%eax
 84c9d1f:	0f 94 c0             	sete   %al
 84c9d22:	84 c0                	test   %al,%al
 84c9d24:	74 0a                	je     84c9d30 <_ZN30Inter_NoticeHasBeenGuildMaster12dispatch_sigEP5CUserPci+0x26>
 84c9d26:	bb 00 00 00 00       	mov    $0x0,%ebx
 84c9d2b:	e9 f6 00 00 00       	jmp    84c9e26 <_ZN30Inter_NoticeHasBeenGuildMaster12dispatch_sigEP5CUserPci+0x11c>
 84c9d30:	8b 45 10             	mov    0x10(%ebp),%eax
 84c9d33:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84c9d36:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84c9d3d:	ff 
 84c9d3e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c9d41:	89 04 24             	mov    %eax,(%esp)
 84c9d44:	e8 57 42 18 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84c9d49:	89 c2                	mov    %eax,%edx
 84c9d4b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84c9d4e:	8b 40 0a             	mov    0xa(%eax),%eax
 84c9d51:	39 c2                	cmp    %eax,%edx
 84c9d53:	0f 95 c0             	setne  %al
 84c9d56:	84 c0                	test   %al,%al
 84c9d58:	74 54                	je     84c9dae <_ZN30Inter_NoticeHasBeenGuildMaster12dispatch_sigEP5CUserPci+0xa4>
 84c9d5a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84c9d5d:	8b 58 0a             	mov    0xa(%eax),%ebx
 84c9d60:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84c9d67:	ff 
 84c9d68:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c9d6b:	89 04 24             	mov    %eax,(%esp)
 84c9d6e:	e8 2d 42 18 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84c9d73:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 84c9d77:	89 44 24 14          	mov    %eax,0x14(%esp)
 84c9d7b:	c7 44 24 10 e8 7a c8 	movl   $0x8c87ae8,0x10(%esp)
 84c9d82:	08 
 84c9d83:	c7 44 24 0c da 23 00 	movl   $0x23da,0xc(%esp)
 84c9d8a:	00 
 84c9d8b:	c7 44 24 08 00 da c8 	movl   $0x8c8da00,0x8(%esp)
 84c9d92:	08 
 84c9d93:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84c9d9a:	08 
 84c9d9b:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84c9da2:	e8 63 9e 60 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84c9da7:	bb 00 00 00 00       	mov    $0x0,%ebx
 84c9dac:	eb 78                	jmp    84c9e26 <_ZN30Inter_NoticeHasBeenGuildMaster12dispatch_sigEP5CUserPci+0x11c>
 84c9dae:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84c9db1:	89 04 24             	mov    %eax,(%esp)
 84c9db4:	e8 93 3f 0c 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84c9db9:	c7 44 24 08 96 00 00 	movl   $0x96,0x8(%esp)
 84c9dc0:	00 
 84c9dc1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84c9dc8:	00 
 84c9dc9:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84c9dcc:	89 04 24             	mov    %eax,(%esp)
 84c9dcf:	e8 28 1b c0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84c9dd4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84c9ddb:	00 
 84c9ddc:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84c9ddf:	89 04 24             	mov    %eax,(%esp)
 84c9de2:	e8 71 1b c0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84c9de7:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84c9dea:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c9dee:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c9df1:	89 04 24             	mov    %eax,(%esp)
 84c9df4:	e8 c1 e7 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84c9df9:	bb 00 00 00 00       	mov    $0x0,%ebx
 84c9dfe:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84c9e01:	89 04 24             	mov    %eax,(%esp)
 84c9e04:	e8 77 40 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84c9e09:	eb 1b                	jmp    84c9e26 <_ZN30Inter_NoticeHasBeenGuildMaster12dispatch_sigEP5CUserPci+0x11c>
 84c9e0b:	89 d3                	mov    %edx,%ebx
 84c9e0d:	89 c6                	mov    %eax,%esi
 84c9e0f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84c9e12:	89 04 24             	mov    %eax,(%esp)
 84c9e15:	e8 66 40 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84c9e1a:	89 f0                	mov    %esi,%eax
 84c9e1c:	89 da                	mov    %ebx,%edx
 84c9e1e:	89 04 24             	mov    %eax,(%esp)
 84c9e21:	e8 2a 99 61 00       	call   8ae3750 <_Unwind_Resume>
 84c9e26:	89 d8                	mov    %ebx,%eax
 84c9e28:	83 c4 30             	add    $0x30,%esp
 84c9e2b:	5b                   	pop    %ebx
 84c9e2c:	5e                   	pop    %esi
 84c9e2d:	5d                   	pop    %ebp
 84c9e2e:	c3                   	ret
 84c9e2f:	90                   	nop

```

```c
// Inter_NoticeHasBeenGuildMaster::dispatch_sig @ 0x84c9d0a

/* Inter_NoticeHasBeenGuildMaster::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_NoticeHasBeenGuildMaster::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  PacketGuard local_1c [12];
  int local_10;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 != 0) {
    local_10 = param_3;
    iVar2 = CUser::get_charac_no((CUser *)param_2,-1);
    if (iVar2 == *(int *)(local_10 + 10)) {
      PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084c9dcf to 084c9df8 has its CatchHandler @ 084c9e0b */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0x96);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
      CUser::Send((CUser *)param_2,local_1c);
      PacketGuard::~PacketGuard(local_1c);
    }
    else {
      uVar1 = *(undefined4 *)(local_10 + 10);
      uVar3 = CUser::get_charac_no((CUser *)param_2,-1);
      LogManager::logFormat
                (1,"InterDispatcher.cpp",
                 "virtual int Inter_NoticeHasBeenGuildMaster::dispatch_sig(CUser*, char*, int)",
                 0x23da,
                 "Inter_NoticeHasBeenGuildMaster::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)"
                 ,uVar3,uVar1);
    }
  }
  return 0;
}

```

