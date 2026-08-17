# Inter_ReqQueryCharacInfoMailbox

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e2a06 Inter_ReqQueryCharacInfoMailbox::dispatch_sig  [0x084e2a06-0x84e2b93] ===
 84e2a06:	55                   	push   %ebp
 84e2a07:	89 e5                	mov    %esp,%ebp
 84e2a09:	56                   	push   %esi
 84e2a0a:	53                   	push   %ebx
 84e2a0b:	83 ec 20             	sub    $0x20,%esp
 84e2a0e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e2a11:	89 04 24             	mov    %eax,(%esp)
 84e2a14:	e8 73 79 bf ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84e2a19:	83 f8 02             	cmp    $0x2,%eax
 84e2a1c:	0f 9e c0             	setle  %al
 84e2a1f:	84 c0                	test   %al,%al
 84e2a21:	74 0a                	je     84e2a2d <_ZN31Inter_ReqQueryCharacInfoMailbox12dispatch_sigEP5CUserPci+0x27>
 84e2a23:	b8 00 00 00 00       	mov    $0x0,%eax
 84e2a28:	e9 5f 01 00 00       	jmp    84e2b8c <_ZN31Inter_ReqQueryCharacInfoMailbox12dispatch_sigEP5CUserPci+0x186>
 84e2a2d:	8b 45 10             	mov    0x10(%ebp),%eax
 84e2a30:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84e2a33:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e2a36:	8b 40 20             	mov    0x20(%eax),%eax
 84e2a39:	85 c0                	test   %eax,%eax
 84e2a3b:	74 25                	je     84e2a62 <_ZN31Inter_ReqQueryCharacInfoMailbox12dispatch_sigEP5CUserPci+0x5c>
 84e2a3d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e2a40:	8b 40 20             	mov    0x20(%eax),%eax
 84e2a43:	0f b6 c0             	movzbl %al,%eax
 84e2a46:	89 44 24 08          	mov    %eax,0x8(%esp)
 84e2a4a:	c7 44 24 04 45 01 00 	movl   $0x145,0x4(%esp)
 84e2a51:	00 
 84e2a52:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e2a55:	89 04 24             	mov    %eax,(%esp)
 84e2a58:	e8 e5 94 19 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 84e2a5d:	e9 25 01 00 00       	jmp    84e2b87 <_ZN31Inter_ReqQueryCharacInfoMailbox12dispatch_sigEP5CUserPci+0x181>
 84e2a62:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e2a65:	89 04 24             	mov    %eax,(%esp)
 84e2a68:	e8 df b2 0a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84e2a6d:	c7 44 24 08 45 01 00 	movl   $0x145,0x8(%esp)
 84e2a74:	00 
 84e2a75:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e2a7c:	00 
 84e2a7d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e2a80:	89 04 24             	mov    %eax,(%esp)
 84e2a83:	e8 74 8e be ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84e2a88:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e2a8f:	00 
 84e2a90:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e2a93:	89 04 24             	mov    %eax,(%esp)
 84e2a96:	e8 85 8e be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e2a9b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e2a9e:	89 04 24             	mov    %eax,(%esp)
 84e2aa1:	e8 0a b9 b9 ff       	call   807e3b0 <strlen@plt>
 84e2aa6:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e2aaa:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e2aad:	89 04 24             	mov    %eax,(%esp)
 84e2ab0:	e8 87 8e be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84e2ab5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e2ab8:	89 04 24             	mov    %eax,(%esp)
 84e2abb:	e8 f0 b8 b9 ff       	call   807e3b0 <strlen@plt>
 84e2ac0:	89 c2                	mov    %eax,%edx
 84e2ac2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e2ac5:	89 54 24 08          	mov    %edx,0x8(%esp)
 84e2ac9:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e2acd:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e2ad0:	89 04 24             	mov    %eax,(%esp)
 84e2ad3:	e8 0c 49 cd ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84e2ad8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e2adb:	0f b7 40 2a          	movzwl 0x2a(%eax),%eax
 84e2adf:	98                   	cwtl
 84e2ae0:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e2ae4:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e2ae7:	89 04 24             	mov    %eax,(%esp)
 84e2aea:	e8 b5 73 bf ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 84e2aef:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e2af2:	0f b6 40 28          	movzbl 0x28(%eax),%eax
 84e2af6:	0f be c0             	movsbl %al,%eax
 84e2af9:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e2afd:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e2b00:	89 04 24             	mov    %eax,(%esp)
 84e2b03:	e8 18 8e be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e2b08:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e2b0b:	0f b6 40 2c          	movzbl 0x2c(%eax),%eax
 84e2b0f:	0f be c0             	movsbl %al,%eax
 84e2b12:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e2b16:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e2b19:	89 04 24             	mov    %eax,(%esp)
 84e2b1c:	e8 ff 8d be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e2b21:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e2b24:	0f b6 40 2d          	movzbl 0x2d(%eax),%eax
 84e2b28:	0f be c0             	movsbl %al,%eax
 84e2b2b:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e2b2f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e2b32:	89 04 24             	mov    %eax,(%esp)
 84e2b35:	e8 e6 8d be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e2b3a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e2b41:	00 
 84e2b42:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e2b45:	89 04 24             	mov    %eax,(%esp)
 84e2b48:	e8 0b 8e be ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84e2b4d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e2b50:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e2b54:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e2b57:	89 04 24             	mov    %eax,(%esp)
 84e2b5a:	e8 5b 5a 16 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84e2b5f:	eb 1b                	jmp    84e2b7c <_ZN31Inter_ReqQueryCharacInfoMailbox12dispatch_sigEP5CUserPci+0x176>
 84e2b61:	89 d3                	mov    %edx,%ebx
 84e2b63:	89 c6                	mov    %eax,%esi
 84e2b65:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e2b68:	89 04 24             	mov    %eax,(%esp)
 84e2b6b:	e8 10 b3 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e2b70:	89 f0                	mov    %esi,%eax
 84e2b72:	89 da                	mov    %ebx,%edx
 84e2b74:	89 04 24             	mov    %eax,(%esp)
 84e2b77:	e8 d4 0b 60 00       	call   8ae3750 <_Unwind_Resume>
 84e2b7c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e2b7f:	89 04 24             	mov    %eax,(%esp)
 84e2b82:	e8 f9 b2 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e2b87:	b8 00 00 00 00       	mov    $0x0,%eax
 84e2b8c:	83 c4 20             	add    $0x20,%esp
 84e2b8f:	5b                   	pop    %ebx
 84e2b90:	5e                   	pop    %esi
 84e2b91:	5d                   	pop    %ebp
 84e2b92:	c3                   	ret
 84e2b93:	90                   	nop

```

```c
// Inter_ReqQueryCharacInfoMailbox::dispatch_sig @ 0x84e2a06

/* Inter_ReqQueryCharacInfoMailbox::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_ReqQueryCharacInfoMailbox::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  size_t sVar2;
  PacketGuard local_1c [12];
  char *local_10;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (2 < iVar1) {
    local_10 = (char *)param_3;
    if (*(int *)(param_3 + 0x20) == 0) {
      PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084e2a83 to 084e2b5e has its CatchHandler @ 084e2b61 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x145);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
      sVar2 = strlen(local_10);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,sVar2);
      sVar2 = strlen(local_10);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_1c,local_10,sVar2);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,(int)*(short *)(local_10 + 0x2a))
      ;
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(int)local_10[0x28]);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(int)local_10[0x2c]);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(int)local_10[0x2d]);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
      CUser::Send((CUser *)param_2,local_1c);
      PacketGuard::~PacketGuard(local_1c);
    }
    else {
      CUser::SendCmdErrorPacket((CUser *)param_2,0x145,*(uint *)(param_3 + 0x20) & 0xff);
    }
  }
  return 0;
}

```

