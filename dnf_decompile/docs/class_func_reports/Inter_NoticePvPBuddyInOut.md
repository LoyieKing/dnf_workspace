# Inter_NoticePvPBuddyInOut

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e1d96 Inter_NoticePvPBuddyInOut::dispatch_sig  [0x084e1d96-0x84e1f01] ===
 84e1d96:	55                   	push   %ebp
 84e1d97:	89 e5                	mov    %esp,%ebp
 84e1d99:	56                   	push   %esi
 84e1d9a:	53                   	push   %ebx
 84e1d9b:	83 ec 30             	sub    $0x30,%esp
 84e1d9e:	8b 45 10             	mov    0x10(%ebp),%eax
 84e1da1:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84e1da4:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e1da7:	89 04 24             	mov    %eax,(%esp)
 84e1daa:	e8 dd 85 bf ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84e1daf:	83 f8 02             	cmp    $0x2,%eax
 84e1db2:	0f 9e c0             	setle  %al
 84e1db5:	84 c0                	test   %al,%al
 84e1db7:	74 0a                	je     84e1dc3 <_ZN25Inter_NoticePvPBuddyInOut12dispatch_sigEP5CUserPci+0x2d>
 84e1db9:	bb 00 00 00 00       	mov    $0x0,%ebx
 84e1dbe:	e9 35 01 00 00       	jmp    84e1ef8 <_ZN25Inter_NoticePvPBuddyInOut12dispatch_sigEP5CUserPci+0x162>
 84e1dc3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e1dc6:	8b 58 0a             	mov    0xa(%eax),%ebx
 84e1dc9:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e1dcc:	89 04 24             	mov    %eax,(%esp)
 84e1dcf:	e8 7a 9e be ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84e1dd4:	39 c3                	cmp    %eax,%ebx
 84e1dd6:	0f 95 c0             	setne  %al
 84e1dd9:	84 c0                	test   %al,%al
 84e1ddb:	74 0a                	je     84e1de7 <_ZN25Inter_NoticePvPBuddyInOut12dispatch_sigEP5CUserPci+0x51>
 84e1ddd:	bb 00 00 00 00       	mov    $0x0,%ebx
 84e1de2:	e9 11 01 00 00       	jmp    84e1ef8 <_ZN25Inter_NoticePvPBuddyInOut12dispatch_sigEP5CUserPci+0x162>
 84e1de7:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e1dea:	89 04 24             	mov    %eax,(%esp)
 84e1ded:	e8 5a bf 0a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84e1df2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e1df5:	0f b6 40 12          	movzbl 0x12(%eax),%eax
 84e1df9:	84 c0                	test   %al,%al
 84e1dfb:	75 36                	jne    84e1e33 <_ZN25Inter_NoticePvPBuddyInOut12dispatch_sigEP5CUserPci+0x9d>
 84e1dfd:	c7 44 24 08 0d 01 00 	movl   $0x10d,0x8(%esp)
 84e1e04:	00 
 84e1e05:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e1e0c:	00 
 84e1e0d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e1e10:	89 04 24             	mov    %eax,(%esp)
 84e1e13:	e8 e4 9a be ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84e1e18:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e1e1b:	0f b6 40 13          	movzbl 0x13(%eax),%eax
 84e1e1f:	0f b6 c0             	movzbl %al,%eax
 84e1e22:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e1e26:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e1e29:	89 04 24             	mov    %eax,(%esp)
 84e1e2c:	e8 ef 9a be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e1e31:	eb 1b                	jmp    84e1e4e <_ZN25Inter_NoticePvPBuddyInOut12dispatch_sigEP5CUserPci+0xb8>
 84e1e33:	c7 44 24 08 0e 01 00 	movl   $0x10e,0x8(%esp)
 84e1e3a:	00 
 84e1e3b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e1e42:	00 
 84e1e43:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e1e46:	89 04 24             	mov    %eax,(%esp)
 84e1e49:	e8 ae 9a be ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84e1e4e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e1e51:	0f b6 40 14          	movzbl 0x14(%eax),%eax
 84e1e55:	0f be c0             	movsbl %al,%eax
 84e1e58:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e1e5c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e1e5f:	89 04 24             	mov    %eax,(%esp)
 84e1e62:	e8 b9 9a be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e1e67:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e1e6a:	83 c0 15             	add    $0x15,%eax
 84e1e6d:	89 04 24             	mov    %eax,(%esp)
 84e1e70:	e8 3b c5 b9 ff       	call   807e3b0 <strlen@plt>
 84e1e75:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84e1e78:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e1e7b:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e1e7f:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e1e82:	89 04 24             	mov    %eax,(%esp)
 84e1e85:	e8 b2 9a be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84e1e8a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e1e8d:	8d 50 15             	lea    0x15(%eax),%edx
 84e1e90:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e1e93:	89 44 24 08          	mov    %eax,0x8(%esp)
 84e1e97:	89 54 24 04          	mov    %edx,0x4(%esp)
 84e1e9b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e1e9e:	89 04 24             	mov    %eax,(%esp)
 84e1ea1:	e8 3e 55 cd ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84e1ea6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e1ead:	00 
 84e1eae:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e1eb1:	89 04 24             	mov    %eax,(%esp)
 84e1eb4:	e8 9f 9a be ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84e1eb9:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e1ebc:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e1ec0:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e1ec3:	89 04 24             	mov    %eax,(%esp)
 84e1ec6:	e8 ef 66 16 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84e1ecb:	bb 00 00 00 00       	mov    $0x0,%ebx
 84e1ed0:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e1ed3:	89 04 24             	mov    %eax,(%esp)
 84e1ed6:	e8 a5 bf 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e1edb:	eb 1b                	jmp    84e1ef8 <_ZN25Inter_NoticePvPBuddyInOut12dispatch_sigEP5CUserPci+0x162>
 84e1edd:	89 d3                	mov    %edx,%ebx
 84e1edf:	89 c6                	mov    %eax,%esi
 84e1ee1:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e1ee4:	89 04 24             	mov    %eax,(%esp)
 84e1ee7:	e8 94 bf 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e1eec:	89 f0                	mov    %esi,%eax
 84e1eee:	89 da                	mov    %ebx,%edx
 84e1ef0:	89 04 24             	mov    %eax,(%esp)
 84e1ef3:	e8 58 18 60 00       	call   8ae3750 <_Unwind_Resume>
 84e1ef8:	89 d8                	mov    %ebx,%eax
 84e1efa:	83 c4 30             	add    $0x30,%esp
 84e1efd:	5b                   	pop    %ebx
 84e1efe:	5e                   	pop    %esi
 84e1eff:	5d                   	pop    %ebp
 84e1f00:	c3                   	ret
 84e1f01:	90                   	nop

```

```c
// Inter_NoticePvPBuddyInOut::dispatch_sig @ 0x84e1d96

/* Inter_NoticePvPBuddyInOut::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_NoticePvPBuddyInOut::dispatch_sig(CUser *param_1,char *param_2,int param_3)

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
    PacketGuard::PacketGuard(local_20);
    if (*(char *)(local_14 + 0x12) == '\0') {
                    /* try { // try from 084e1e13 to 084e1eca has its CatchHandler @ 084e1edd */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0x10d);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(uint)*(byte *)(local_14 + 0x13));
    }
    else {
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0x10e);
    }
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(int)*(char *)(local_14 + 0x14));
    local_10 = strlen((char *)(local_14 + 0x15));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,local_10);
    InterfacePacketBuf::put_str((InterfacePacketBuf *)local_20,(char *)(local_14 + 0x15),local_10);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
    CUser::Send((CUser *)param_2,local_20);
    PacketGuard::~PacketGuard(local_20);
  }
  return 0;
}

```

