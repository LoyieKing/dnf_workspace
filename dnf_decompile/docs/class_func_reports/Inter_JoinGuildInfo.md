# Inter_JoinGuildInfo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e3ace Inter_JoinGuildInfo::dispatch_sig  [0x084e3ace-0x84e3c5f] ===
 84e3ace:	55                   	push   %ebp
 84e3acf:	89 e5                	mov    %esp,%ebp
 84e3ad1:	56                   	push   %esi
 84e3ad2:	53                   	push   %ebx
 84e3ad3:	83 ec 30             	sub    $0x30,%esp
 84e3ad6:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e3ad9:	89 04 24             	mov    %eax,(%esp)
 84e3adc:	e8 ab 68 bf ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84e3ae1:	83 f8 02             	cmp    $0x2,%eax
 84e3ae4:	0f 9e c0             	setle  %al
 84e3ae7:	84 c0                	test   %al,%al
 84e3ae9:	74 0a                	je     84e3af5 <_ZN19Inter_JoinGuildInfo12dispatch_sigEP5CUserPci+0x27>
 84e3aeb:	bb 00 00 00 00       	mov    $0x0,%ebx
 84e3af0:	e9 61 01 00 00       	jmp    84e3c56 <_ZN19Inter_JoinGuildInfo12dispatch_sigEP5CUserPci+0x188>
 84e3af5:	8b 45 10             	mov    0x10(%ebp),%eax
 84e3af8:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84e3afb:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e3afe:	89 04 24             	mov    %eax,(%esp)
 84e3b01:	e8 46 a2 0a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84e3b06:	c7 44 24 08 31 01 00 	movl   $0x131,0x8(%esp)
 84e3b0d:	00 
 84e3b0e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e3b15:	00 
 84e3b16:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e3b19:	89 04 24             	mov    %eax,(%esp)
 84e3b1c:	e8 db 7d be ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84e3b21:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e3b24:	0f b6 00             	movzbl (%eax),%eax
 84e3b27:	0f be c0             	movsbl %al,%eax
 84e3b2a:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e3b2e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e3b31:	89 04 24             	mov    %eax,(%esp)
 84e3b34:	e8 e7 7d be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e3b39:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e3b3c:	0f b6 00             	movzbl (%eax),%eax
 84e3b3f:	84 c0                	test   %al,%al
 84e3b41:	0f 84 bd 00 00 00    	je     84e3c04 <_ZN19Inter_JoinGuildInfo12dispatch_sigEP5CUserPci+0x136>
 84e3b47:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e3b4a:	8b 40 04             	mov    0x4(%eax),%eax
 84e3b4d:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e3b51:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e3b54:	89 04 24             	mov    %eax,(%esp)
 84e3b57:	e8 e0 7d be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84e3b5c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e3b5f:	83 c0 26             	add    $0x26,%eax
 84e3b62:	89 04 24             	mov    %eax,(%esp)
 84e3b65:	e8 46 a8 b9 ff       	call   807e3b0 <strlen@plt>
 84e3b6a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84e3b6d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e3b70:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e3b74:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e3b77:	89 04 24             	mov    %eax,(%esp)
 84e3b7a:	e8 bd 7d be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84e3b7f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e3b82:	8d 50 26             	lea    0x26(%eax),%edx
 84e3b85:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e3b88:	89 44 24 08          	mov    %eax,0x8(%esp)
 84e3b8c:	89 54 24 04          	mov    %edx,0x4(%esp)
 84e3b90:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e3b93:	89 04 24             	mov    %eax,(%esp)
 84e3b96:	e8 49 38 cd ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84e3b9b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e3b9e:	83 c0 08             	add    $0x8,%eax
 84e3ba1:	89 04 24             	mov    %eax,(%esp)
 84e3ba4:	e8 07 a8 b9 ff       	call   807e3b0 <strlen@plt>
 84e3ba9:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84e3bac:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e3baf:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e3bb3:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e3bb6:	89 04 24             	mov    %eax,(%esp)
 84e3bb9:	e8 7e 7d be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84e3bbe:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e3bc1:	8d 50 08             	lea    0x8(%eax),%edx
 84e3bc4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e3bc7:	89 44 24 08          	mov    %eax,0x8(%esp)
 84e3bcb:	89 54 24 04          	mov    %edx,0x4(%esp)
 84e3bcf:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e3bd2:	89 04 24             	mov    %eax,(%esp)
 84e3bd5:	e8 0a 38 cd ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84e3bda:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e3bdd:	8b 40 40             	mov    0x40(%eax),%eax
 84e3be0:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e3be4:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e3be7:	89 04 24             	mov    %eax,(%esp)
 84e3bea:	e8 4d 7d be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84e3bef:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e3bf2:	8b 40 44             	mov    0x44(%eax),%eax
 84e3bf5:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e3bf9:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e3bfc:	89 04 24             	mov    %eax,(%esp)
 84e3bff:	e8 38 7d be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84e3c04:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e3c0b:	00 
 84e3c0c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e3c0f:	89 04 24             	mov    %eax,(%esp)
 84e3c12:	e8 41 7d be ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84e3c17:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e3c1a:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e3c1e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e3c21:	89 04 24             	mov    %eax,(%esp)
 84e3c24:	e8 91 49 16 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84e3c29:	bb 00 00 00 00       	mov    $0x0,%ebx
 84e3c2e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e3c31:	89 04 24             	mov    %eax,(%esp)
 84e3c34:	e8 47 a2 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e3c39:	eb 1b                	jmp    84e3c56 <_ZN19Inter_JoinGuildInfo12dispatch_sigEP5CUserPci+0x188>
 84e3c3b:	89 d3                	mov    %edx,%ebx
 84e3c3d:	89 c6                	mov    %eax,%esi
 84e3c3f:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e3c42:	89 04 24             	mov    %eax,(%esp)
 84e3c45:	e8 36 a2 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e3c4a:	89 f0                	mov    %esi,%eax
 84e3c4c:	89 da                	mov    %ebx,%edx
 84e3c4e:	89 04 24             	mov    %eax,(%esp)
 84e3c51:	e8 fa fa 5f 00       	call   8ae3750 <_Unwind_Resume>
 84e3c56:	89 d8                	mov    %ebx,%eax
 84e3c58:	83 c4 30             	add    $0x30,%esp
 84e3c5b:	5b                   	pop    %ebx
 84e3c5c:	5e                   	pop    %esi
 84e3c5d:	5d                   	pop    %ebp
 84e3c5e:	c3                   	ret
 84e3c5f:	90                   	nop

```

```c
// Inter_JoinGuildInfo::dispatch_sig @ 0x84e3ace

/* Inter_JoinGuildInfo::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_JoinGuildInfo::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  PacketGuard local_20 [12];
  char *local_14;
  size_t local_10;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (2 < iVar1) {
    local_14 = (char *)param_3;
    PacketGuard::PacketGuard(local_20);
                    /* try { // try from 084e3b1c to 084e3c28 has its CatchHandler @ 084e3c3b */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0x131);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(int)*local_14);
    if (*local_14 != '\0') {
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,*(int *)(local_14 + 4));
      local_10 = strlen(local_14 + 0x26);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,local_10);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_20,local_14 + 0x26,local_10);
      local_10 = strlen(local_14 + 8);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,local_10);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_20,local_14 + 8,local_10);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,*(int *)(local_14 + 0x40));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,*(int *)(local_14 + 0x44));
    }
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
    CUser::Send((CUser *)param_2,local_20);
    PacketGuard::~PacketGuard(local_20);
  }
  return 0;
}

```

