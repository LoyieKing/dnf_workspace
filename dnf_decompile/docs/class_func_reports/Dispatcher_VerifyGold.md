# Dispatcher_VerifyGold

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08223bc0 Dispatcher_VerifyGold::dispatch_sig  [0x08223bc0-0x8223cf5] ===
 8223bc0:	55                   	push   %ebp
 8223bc1:	89 e5                	mov    %esp,%ebp
 8223bc3:	56                   	push   %esi
 8223bc4:	53                   	push   %ebx
 8223bc5:	83 ec 20             	sub    $0x20,%esp
 8223bc8:	8b 45 0c             	mov    0xc(%ebp),%eax
 8223bcb:	89 04 24             	mov    %eax,(%esp)
 8223bce:	e8 b9 67 eb ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8223bd3:	83 f8 02             	cmp    $0x2,%eax
 8223bd6:	0f 9e c0             	setle  %al
 8223bd9:	84 c0                	test   %al,%al
 8223bdb:	74 0a                	je     8223be7 <_ZN21Dispatcher_VerifyGold12dispatch_sigEP5CUserR9PacketBuf+0x27>
 8223bdd:	bb 00 00 00 00       	mov    $0x0,%ebx
 8223be2:	e9 05 01 00 00       	jmp    8223cec <_ZN21Dispatcher_VerifyGold12dispatch_sigEP5CUserR9PacketBuf+0x12c>
 8223be7:	66 c7 45 f6 00 00    	movw   $0x0,-0xa(%ebp)
 8223bed:	8d 45 f6             	lea    -0xa(%ebp),%eax
 8223bf0:	89 44 24 04          	mov    %eax,0x4(%esp)
 8223bf4:	8b 45 10             	mov    0x10(%ebp),%eax
 8223bf7:	89 04 24             	mov    %eax,(%esp)
 8223bfa:	e8 b1 94 36 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 8223bff:	83 f0 01             	xor    $0x1,%eax
 8223c02:	84 c0                	test   %al,%al
 8223c04:	74 2b                	je     8223c31 <_ZN21Dispatcher_VerifyGold12dispatch_sigEP5CUserR9PacketBuf+0x71>
 8223c06:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8223c0d:	00 
 8223c0e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8223c15:	00 
 8223c16:	c7 44 24 04 40 ca bc 	movl   $0x8bcca40,0x4(%esp)
 8223c1d:	08 
 8223c1e:	c7 04 24 71 de 00 00 	movl   $0xde71,(%esp)
 8223c25:	e8 ad cc 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 8223c2a:	89 c3                	mov    %eax,%ebx
 8223c2c:	e9 bb 00 00 00       	jmp    8223cec <_ZN21Dispatcher_VerifyGold12dispatch_sigEP5CUserR9PacketBuf+0x12c>
 8223c31:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8223c34:	89 04 24             	mov    %eax,(%esp)
 8223c37:	e8 10 a1 36 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8223c3c:	c7 44 24 08 1f 01 00 	movl   $0x11f,0x8(%esp)
 8223c43:	00 
 8223c44:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8223c4b:	00 
 8223c4c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8223c4f:	89 04 24             	mov    %eax,(%esp)
 8223c52:	e8 a5 7c ea ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8223c57:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8223c5e:	00 
 8223c5f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8223c62:	89 04 24             	mov    %eax,(%esp)
 8223c65:	e8 b6 7c ea ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8223c6a:	0f b7 45 f6          	movzwl -0xa(%ebp),%eax
 8223c6e:	0f b7 c0             	movzwl %ax,%eax
 8223c71:	89 44 24 04          	mov    %eax,0x4(%esp)
 8223c75:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8223c78:	89 04 24             	mov    %eax,(%esp)
 8223c7b:	e8 24 62 eb ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8223c80:	8b 45 0c             	mov    0xc(%ebp),%eax
 8223c83:	89 04 24             	mov    %eax,(%esp)
 8223c86:	e8 fd 64 f5 ff       	call   817a188 <_ZNK15CUserCharacInfo17getCurCharacMoneyEv>
 8223c8b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8223c8f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8223c92:	89 04 24             	mov    %eax,(%esp)
 8223c95:	e8 a2 7c ea ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8223c9a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8223ca1:	00 
 8223ca2:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8223ca5:	89 04 24             	mov    %eax,(%esp)
 8223ca8:	e8 ab 7c ea ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8223cad:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8223cb0:	89 44 24 04          	mov    %eax,0x4(%esp)
 8223cb4:	8b 45 0c             	mov    0xc(%ebp),%eax
 8223cb7:	89 04 24             	mov    %eax,(%esp)
 8223cba:	e8 fb 48 42 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8223cbf:	bb 00 00 00 00       	mov    $0x0,%ebx
 8223cc4:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8223cc7:	89 04 24             	mov    %eax,(%esp)
 8223cca:	e8 b1 a1 36 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8223ccf:	eb 1b                	jmp    8223cec <_ZN21Dispatcher_VerifyGold12dispatch_sigEP5CUserR9PacketBuf+0x12c>
 8223cd1:	89 d3                	mov    %edx,%ebx
 8223cd3:	89 c6                	mov    %eax,%esi
 8223cd5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8223cd8:	89 04 24             	mov    %eax,(%esp)
 8223cdb:	e8 a0 a1 36 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8223ce0:	89 f0                	mov    %esi,%eax
 8223ce2:	89 da                	mov    %ebx,%edx
 8223ce4:	89 04 24             	mov    %eax,(%esp)
 8223ce7:	e8 64 fa 8b 00       	call   8ae3750 <_Unwind_Resume>
 8223cec:	89 d8                	mov    %ebx,%eax
 8223cee:	83 c4 20             	add    $0x20,%esp
 8223cf1:	5b                   	pop    %ebx
 8223cf2:	5e                   	pop    %esi
 8223cf3:	5d                   	pop    %ebp
 8223cf4:	c3                   	ret
 8223cf5:	90                   	nop

```

```c
// Dispatcher_VerifyGold::dispatch_sig @ 0x8223bc0

/* Dispatcher_VerifyGold::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_VerifyGold::dispatch_sig(Dispatcher_VerifyGold *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  PacketGuard local_1c [14];
  ushort local_e;
  
  iVar2 = CUser::get_state(param_1);
  if (iVar2 < 3) {
    uVar3 = 0;
  }
  else {
    local_e = 0;
    cVar1 = PacketBuf::get_short(param_2,&local_e);
    if (cVar1 == '\x01') {
      PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 08223c52 to 08223cbe has its CatchHandler @ 08223cd1 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x11f);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,(uint)local_e);
      iVar2 = CUserCharacInfo::getCurCharacMoney((CUserCharacInfo *)param_1);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,iVar2);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
      CUser::Send(param_1,local_1c);
      uVar3 = 0;
      PacketGuard::~PacketGuard(local_1c);
    }
    else {
      uVar3 = LineFunc(0xde71,"virtual int Dispatcher_VerifyGold::dispatch_sig(CUser*, PacketBuf&)",
                       0,0);
    }
  }
  return uVar3;
}

```

