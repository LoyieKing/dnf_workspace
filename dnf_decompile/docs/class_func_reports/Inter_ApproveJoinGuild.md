# Inter_ApproveJoinGuild

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e3f0e Inter_ApproveJoinGuild::dispatch_sig  [0x084e3f0e-0x84e4051] ===
 84e3f0e:	55                   	push   %ebp
 84e3f0f:	89 e5                	mov    %esp,%ebp
 84e3f11:	56                   	push   %esi
 84e3f12:	53                   	push   %ebx
 84e3f13:	83 ec 20             	sub    $0x20,%esp
 84e3f16:	8b 45 10             	mov    0x10(%ebp),%eax
 84e3f19:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84e3f1c:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e3f1f:	89 04 24             	mov    %eax,(%esp)
 84e3f22:	e8 65 64 bf ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84e3f27:	83 f8 02             	cmp    $0x2,%eax
 84e3f2a:	0f 9e c0             	setle  %al
 84e3f2d:	84 c0                	test   %al,%al
 84e3f2f:	74 0a                	je     84e3f3b <_ZN22Inter_ApproveJoinGuild12dispatch_sigEP5CUserPci+0x2d>
 84e3f31:	bb 00 00 00 00       	mov    $0x0,%ebx
 84e3f36:	e9 0d 01 00 00       	jmp    84e4048 <_ZN22Inter_ApproveJoinGuild12dispatch_sigEP5CUserPci+0x13a>
 84e3f3b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e3f3e:	8b 58 0e             	mov    0xe(%eax),%ebx
 84e3f41:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e3f44:	89 04 24             	mov    %eax,(%esp)
 84e3f47:	e8 02 7d be ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84e3f4c:	39 c3                	cmp    %eax,%ebx
 84e3f4e:	0f 95 c0             	setne  %al
 84e3f51:	84 c0                	test   %al,%al
 84e3f53:	74 0a                	je     84e3f5f <_ZN22Inter_ApproveJoinGuild12dispatch_sigEP5CUserPci+0x51>
 84e3f55:	bb 00 00 00 00       	mov    $0x0,%ebx
 84e3f5a:	e9 e9 00 00 00       	jmp    84e4048 <_ZN22Inter_ApproveJoinGuild12dispatch_sigEP5CUserPci+0x13a>
 84e3f5f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e3f62:	89 04 24             	mov    %eax,(%esp)
 84e3f65:	e8 e2 9d 0a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84e3f6a:	c7 44 24 08 5f 01 00 	movl   $0x15f,0x8(%esp)
 84e3f71:	00 
 84e3f72:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e3f79:	00 
 84e3f7a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e3f7d:	89 04 24             	mov    %eax,(%esp)
 84e3f80:	e8 77 79 be ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84e3f85:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e3f88:	8b 40 0a             	mov    0xa(%eax),%eax
 84e3f8b:	85 c0                	test   %eax,%eax
 84e3f8d:	74 3f                	je     84e3fce <_ZN22Inter_ApproveJoinGuild12dispatch_sigEP5CUserPci+0xc0>
 84e3f8f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e3f96:	00 
 84e3f97:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e3f9a:	89 04 24             	mov    %eax,(%esp)
 84e3f9d:	e8 7e 79 be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e3fa2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e3fa5:	8b 40 0a             	mov    0xa(%eax),%eax
 84e3fa8:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e3fac:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e3faf:	89 04 24             	mov    %eax,(%esp)
 84e3fb2:	e8 69 79 be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e3fb7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e3fba:	8b 40 16             	mov    0x16(%eax),%eax
 84e3fbd:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e3fc1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e3fc4:	89 04 24             	mov    %eax,(%esp)
 84e3fc7:	e8 70 79 be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84e3fcc:	eb 28                	jmp    84e3ff6 <_ZN22Inter_ApproveJoinGuild12dispatch_sigEP5CUserPci+0xe8>
 84e3fce:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e3fd5:	00 
 84e3fd6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e3fd9:	89 04 24             	mov    %eax,(%esp)
 84e3fdc:	e8 3f 79 be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e3fe1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e3fe4:	8b 40 16             	mov    0x16(%eax),%eax
 84e3fe7:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e3feb:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e3fee:	89 04 24             	mov    %eax,(%esp)
 84e3ff1:	e8 46 79 be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84e3ff6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e3ffd:	00 
 84e3ffe:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e4001:	89 04 24             	mov    %eax,(%esp)
 84e4004:	e8 4f 79 be ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84e4009:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e400c:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e4010:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e4013:	89 04 24             	mov    %eax,(%esp)
 84e4016:	e8 9f 45 16 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84e401b:	bb 00 00 00 00       	mov    $0x0,%ebx
 84e4020:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e4023:	89 04 24             	mov    %eax,(%esp)
 84e4026:	e8 55 9e 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e402b:	eb 1b                	jmp    84e4048 <_ZN22Inter_ApproveJoinGuild12dispatch_sigEP5CUserPci+0x13a>
 84e402d:	89 d3                	mov    %edx,%ebx
 84e402f:	89 c6                	mov    %eax,%esi
 84e4031:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e4034:	89 04 24             	mov    %eax,(%esp)
 84e4037:	e8 44 9e 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e403c:	89 f0                	mov    %esi,%eax
 84e403e:	89 da                	mov    %ebx,%edx
 84e4040:	89 04 24             	mov    %eax,(%esp)
 84e4043:	e8 08 f7 5f 00       	call   8ae3750 <_Unwind_Resume>
 84e4048:	89 d8                	mov    %ebx,%eax
 84e404a:	83 c4 20             	add    $0x20,%esp
 84e404d:	5b                   	pop    %ebx
 84e404e:	5e                   	pop    %esi
 84e404f:	5d                   	pop    %ebp
 84e4050:	c3                   	ret
 84e4051:	90                   	nop

```

```c
// Inter_ApproveJoinGuild::dispatch_sig @ 0x84e3f0e

/* Inter_ApproveJoinGuild::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_ApproveJoinGuild::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  PacketGuard local_1c [12];
  int local_10;
  
  local_10 = param_3;
  iVar1 = CUser::get_state((CUser *)param_2);
  if ((2 < iVar1) &&
     (iVar1 = *(int *)(local_10 + 0xe),
     iVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2), iVar1 == iVar2)) {
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084e3f80 to 084e401a has its CatchHandler @ 084e402d */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x15f);
    if (*(int *)(local_10 + 10) == 0) {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0x16));
    }
    else {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 10));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0x16));
    }
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send((CUser *)param_2,local_1c);
    PacketGuard::~PacketGuard(local_1c);
  }
  return 0;
}

```

