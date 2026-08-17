# Inter_SecurityCardActivate

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d3d56 Inter_SecurityCardActivate::dispatch_sig  [0x084d3d56-0x84d3e77] ===
 84d3d56:	55                   	push   %ebp
 84d3d57:	89 e5                	mov    %esp,%ebp
 84d3d59:	56                   	push   %esi
 84d3d5a:	53                   	push   %ebx
 84d3d5b:	83 ec 20             	sub    $0x20,%esp
 84d3d5e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d3d61:	89 04 24             	mov    %eax,(%esp)
 84d3d64:	e8 23 66 c0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84d3d69:	83 f8 02             	cmp    $0x2,%eax
 84d3d6c:	0f 9e c0             	setle  %al
 84d3d6f:	84 c0                	test   %al,%al
 84d3d71:	74 0a                	je     84d3d7d <_ZN26Inter_SecurityCardActivate12dispatch_sigEP5CUserPci+0x27>
 84d3d73:	b8 00 00 00 00       	mov    $0x0,%eax
 84d3d78:	e9 f3 00 00 00       	jmp    84d3e70 <_ZN26Inter_SecurityCardActivate12dispatch_sigEP5CUserPci+0x11a>
 84d3d7d:	8b 45 10             	mov    0x10(%ebp),%eax
 84d3d80:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84d3d83:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d3d86:	0f b6 40 0a          	movzbl 0xa(%eax),%eax
 84d3d8a:	84 c0                	test   %al,%al
 84d3d8c:	0f 84 be 00 00 00    	je     84d3e50 <_ZN26Inter_SecurityCardActivate12dispatch_sigEP5CUserPci+0xfa>
 84d3d92:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d3d95:	89 04 24             	mov    %eax,(%esp)
 84d3d98:	e8 83 bf d5 ff       	call   822fd20 <_ZN5CUser15getSecurityCardEv>
 84d3d9d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d3da4:	00 
 84d3da5:	89 04 24             	mov    %eax,(%esp)
 84d3da8:	e8 d5 7f 01 00       	call   84ebd82 <_ZN8WongWork13CSecurityCard11setActivateEb>
 84d3dad:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d3db0:	89 04 24             	mov    %eax,(%esp)
 84d3db3:	e8 68 bf d5 ff       	call   822fd20 <_ZN5CUser15getSecurityCardEv>
 84d3db8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d3dbf:	00 
 84d3dc0:	89 04 24             	mov    %eax,(%esp)
 84d3dc3:	e8 d2 7f 01 00       	call   84ebd9a <_ZN8WongWork13CSecurityCard11setCertFlagEc>
 84d3dc8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d3dcb:	89 04 24             	mov    %eax,(%esp)
 84d3dce:	e8 79 9f 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84d3dd3:	c7 44 24 08 a8 00 00 	movl   $0xa8,0x8(%esp)
 84d3dda:	00 
 84d3ddb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d3de2:	00 
 84d3de3:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d3de6:	89 04 24             	mov    %eax,(%esp)
 84d3de9:	e8 0e 7b bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84d3dee:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d3df5:	00 
 84d3df6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d3df9:	89 04 24             	mov    %eax,(%esp)
 84d3dfc:	e8 1f 7b bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d3e01:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d3e08:	00 
 84d3e09:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d3e0c:	89 04 24             	mov    %eax,(%esp)
 84d3e0f:	e8 44 7b bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84d3e14:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d3e17:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d3e1b:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d3e1e:	89 04 24             	mov    %eax,(%esp)
 84d3e21:	e8 94 47 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84d3e26:	eb 1b                	jmp    84d3e43 <_ZN26Inter_SecurityCardActivate12dispatch_sigEP5CUserPci+0xed>
 84d3e28:	89 d3                	mov    %edx,%ebx
 84d3e2a:	89 c6                	mov    %eax,%esi
 84d3e2c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d3e2f:	89 04 24             	mov    %eax,(%esp)
 84d3e32:	e8 49 a0 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d3e37:	89 f0                	mov    %esi,%eax
 84d3e39:	89 da                	mov    %ebx,%edx
 84d3e3b:	89 04 24             	mov    %eax,(%esp)
 84d3e3e:	e8 0d f9 60 00       	call   8ae3750 <_Unwind_Resume>
 84d3e43:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d3e46:	89 04 24             	mov    %eax,(%esp)
 84d3e49:	e8 32 a0 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d3e4e:	eb 1b                	jmp    84d3e6b <_ZN26Inter_SecurityCardActivate12dispatch_sigEP5CUserPci+0x115>
 84d3e50:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84d3e57:	00 
 84d3e58:	c7 44 24 04 a8 00 00 	movl   $0xa8,0x4(%esp)
 84d3e5f:	00 
 84d3e60:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d3e63:	89 04 24             	mov    %eax,(%esp)
 84d3e66:	e8 d7 80 1a 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 84d3e6b:	b8 00 00 00 00       	mov    $0x0,%eax
 84d3e70:	83 c4 20             	add    $0x20,%esp
 84d3e73:	5b                   	pop    %ebx
 84d3e74:	5e                   	pop    %esi
 84d3e75:	5d                   	pop    %ebp
 84d3e76:	c3                   	ret
 84d3e77:	90                   	nop

```

```c
// Inter_SecurityCardActivate::dispatch_sig @ 0x84d3d56

/* Inter_SecurityCardActivate::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_SecurityCardActivate::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  CSecurityCard *pCVar2;
  PacketGuard local_1c [12];
  int local_10;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (2 < iVar1) {
    local_10 = param_3;
    if (*(char *)(param_3 + 10) == '\0') {
      CUser::SendCmdErrorPacket((CUser *)param_2,0xa8,1);
    }
    else {
      pCVar2 = (CSecurityCard *)CUser::getSecurityCard((CUser *)param_2);
      WongWork::CSecurityCard::setActivate(pCVar2,true);
      pCVar2 = (CSecurityCard *)CUser::getSecurityCard((CUser *)param_2);
      WongWork::CSecurityCard::setCertFlag(pCVar2,'\x01');
      PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084d3de9 to 084d3e25 has its CatchHandler @ 084d3e28 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0xa8);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
      CUser::Send((CUser *)param_2,local_1c);
      PacketGuard::~PacketGuard(local_1c);
    }
  }
  return 0;
}

```

