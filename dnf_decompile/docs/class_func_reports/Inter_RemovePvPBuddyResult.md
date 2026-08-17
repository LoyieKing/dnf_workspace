# Inter_RemovePvPBuddyResult

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e1c1e Inter_RemovePvPBuddyResult::dispatch_sig  [0x084e1c1e-0x84e1d95] ===
 84e1c1e:	55                   	push   %ebp
 84e1c1f:	89 e5                	mov    %esp,%ebp
 84e1c21:	56                   	push   %esi
 84e1c22:	53                   	push   %ebx
 84e1c23:	83 ec 30             	sub    $0x30,%esp
 84e1c26:	8b 45 10             	mov    0x10(%ebp),%eax
 84e1c29:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84e1c2c:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e1c2f:	89 04 24             	mov    %eax,(%esp)
 84e1c32:	e8 55 87 bf ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84e1c37:	83 f8 02             	cmp    $0x2,%eax
 84e1c3a:	0f 9e c0             	setle  %al
 84e1c3d:	84 c0                	test   %al,%al
 84e1c3f:	74 0a                	je     84e1c4b <_ZN26Inter_RemovePvPBuddyResult12dispatch_sigEP5CUserPci+0x2d>
 84e1c41:	b8 00 00 00 00       	mov    $0x0,%eax
 84e1c46:	e9 43 01 00 00       	jmp    84e1d8e <_ZN26Inter_RemovePvPBuddyResult12dispatch_sigEP5CUserPci+0x170>
 84e1c4b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e1c4e:	8b 58 0a             	mov    0xa(%eax),%ebx
 84e1c51:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e1c54:	89 04 24             	mov    %eax,(%esp)
 84e1c57:	e8 f2 9f be ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84e1c5c:	39 c3                	cmp    %eax,%ebx
 84e1c5e:	0f 95 c0             	setne  %al
 84e1c61:	84 c0                	test   %al,%al
 84e1c63:	74 0a                	je     84e1c6f <_ZN26Inter_RemovePvPBuddyResult12dispatch_sigEP5CUserPci+0x51>
 84e1c65:	b8 00 00 00 00       	mov    $0x0,%eax
 84e1c6a:	e9 1f 01 00 00       	jmp    84e1d8e <_ZN26Inter_RemovePvPBuddyResult12dispatch_sigEP5CUserPci+0x170>
 84e1c6f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e1c72:	0f b6 40 31          	movzbl 0x31(%eax),%eax
 84e1c76:	84 c0                	test   %al,%al
 84e1c78:	74 26                	je     84e1ca0 <_ZN26Inter_RemovePvPBuddyResult12dispatch_sigEP5CUserPci+0x82>
 84e1c7a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e1c7d:	0f b6 40 31          	movzbl 0x31(%eax),%eax
 84e1c81:	0f b6 c0             	movzbl %al,%eax
 84e1c84:	89 44 24 08          	mov    %eax,0x8(%esp)
 84e1c88:	c7 44 24 04 23 01 00 	movl   $0x123,0x4(%esp)
 84e1c8f:	00 
 84e1c90:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e1c93:	89 04 24             	mov    %eax,(%esp)
 84e1c96:	e8 a7 a2 19 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 84e1c9b:	e9 e9 00 00 00       	jmp    84e1d89 <_ZN26Inter_RemovePvPBuddyResult12dispatch_sigEP5CUserPci+0x16b>
 84e1ca0:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e1ca3:	89 04 24             	mov    %eax,(%esp)
 84e1ca6:	e8 a1 c0 0a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84e1cab:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e1cae:	89 04 24             	mov    %eax,(%esp)
 84e1cb1:	e8 30 9c be ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 84e1cb6:	c7 44 24 08 23 01 00 	movl   $0x123,0x8(%esp)
 84e1cbd:	00 
 84e1cbe:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e1cc5:	00 
 84e1cc6:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e1cc9:	89 04 24             	mov    %eax,(%esp)
 84e1ccc:	e8 2b 9c be ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84e1cd1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e1cd8:	00 
 84e1cd9:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e1cdc:	89 04 24             	mov    %eax,(%esp)
 84e1cdf:	e8 3c 9c be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e1ce4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e1ce7:	0f b6 40 12          	movzbl 0x12(%eax),%eax
 84e1ceb:	0f be c0             	movsbl %al,%eax
 84e1cee:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e1cf2:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e1cf5:	89 04 24             	mov    %eax,(%esp)
 84e1cf8:	e8 23 9c be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e1cfd:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e1d00:	83 c0 13             	add    $0x13,%eax
 84e1d03:	89 04 24             	mov    %eax,(%esp)
 84e1d06:	e8 a5 c6 b9 ff       	call   807e3b0 <strlen@plt>
 84e1d0b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84e1d0e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e1d11:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e1d15:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e1d18:	89 04 24             	mov    %eax,(%esp)
 84e1d1b:	e8 1c 9c be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84e1d20:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e1d23:	8d 50 13             	lea    0x13(%eax),%edx
 84e1d26:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e1d29:	89 44 24 08          	mov    %eax,0x8(%esp)
 84e1d2d:	89 54 24 04          	mov    %edx,0x4(%esp)
 84e1d31:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e1d34:	89 04 24             	mov    %eax,(%esp)
 84e1d37:	e8 a8 56 cd ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84e1d3c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e1d43:	00 
 84e1d44:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e1d47:	89 04 24             	mov    %eax,(%esp)
 84e1d4a:	e8 09 9c be ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84e1d4f:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e1d52:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e1d56:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e1d59:	89 04 24             	mov    %eax,(%esp)
 84e1d5c:	e8 59 68 16 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84e1d61:	eb 1b                	jmp    84e1d7e <_ZN26Inter_RemovePvPBuddyResult12dispatch_sigEP5CUserPci+0x160>
 84e1d63:	89 d3                	mov    %edx,%ebx
 84e1d65:	89 c6                	mov    %eax,%esi
 84e1d67:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e1d6a:	89 04 24             	mov    %eax,(%esp)
 84e1d6d:	e8 0e c1 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e1d72:	89 f0                	mov    %esi,%eax
 84e1d74:	89 da                	mov    %ebx,%edx
 84e1d76:	89 04 24             	mov    %eax,(%esp)
 84e1d79:	e8 d2 19 60 00       	call   8ae3750 <_Unwind_Resume>
 84e1d7e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e1d81:	89 04 24             	mov    %eax,(%esp)
 84e1d84:	e8 f7 c0 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e1d89:	b8 00 00 00 00       	mov    $0x0,%eax
 84e1d8e:	83 c4 30             	add    $0x30,%esp
 84e1d91:	5b                   	pop    %ebx
 84e1d92:	5e                   	pop    %esi
 84e1d93:	5d                   	pop    %ebp
 84e1d94:	c3                   	ret
 84e1d95:	90                   	nop

```

```c
// Inter_RemovePvPBuddyResult::dispatch_sig @ 0x84e1c1e

/* Inter_RemovePvPBuddyResult::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_RemovePvPBuddyResult::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  PacketGuard local_20 [12];
  int local_14;
  size_t local_10;
  
  local_14 = param_3;
  iVar1 = CUser::get_state((CUser *)param_2);
  if ((2 < iVar1) &&
     (iVar1 = *(int *)(local_14 + 10),
     iVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2), iVar1 == iVar2)) {
    if (*(char *)(local_14 + 0x31) == '\0') {
      PacketGuard::PacketGuard(local_20);
                    /* try { // try from 084e1cb1 to 084e1d60 has its CatchHandler @ 084e1d63 */
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_20);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,1,0x123);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,1);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(int)*(char *)(local_14 + 0x12));
      local_10 = strlen((char *)(local_14 + 0x13));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,local_10);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_20,(char *)(local_14 + 0x13),local_10)
      ;
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
      CUser::Send((CUser *)param_2,local_20);
      PacketGuard::~PacketGuard(local_20);
    }
    else {
      CUser::SendCmdErrorPacket((CUser *)param_2,0x123,*(undefined1 *)(local_14 + 0x31));
    }
  }
  return 0;
}

```

