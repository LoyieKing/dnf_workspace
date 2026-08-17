# Inter_MonitorUserGetout

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084c8b0c Inter_MonitorUserGetout::dispatch_sig  [0x084c8b0c-0x84c8c4d] ===
 84c8b0c:	55                   	push   %ebp
 84c8b0d:	89 e5                	mov    %esp,%ebp
 84c8b0f:	56                   	push   %esi
 84c8b10:	53                   	push   %ebx
 84c8b11:	83 ec 40             	sub    $0x40,%esp
 84c8b14:	8b 45 10             	mov    0x10(%ebp),%eax
 84c8b17:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84c8b1a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84c8b1d:	8b 58 0a             	mov    0xa(%eax),%ebx
 84c8b20:	e8 69 36 c0 ff       	call   80cc18e <_Z14G_CGameManagerv>
 84c8b25:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84c8b29:	89 04 24             	mov    %eax,(%esp)
 84c8b2c:	e8 95 bd dc ff       	call   82948c6 <_ZN12CGameManager14GetUserByAccIdEj>
 84c8b31:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84c8b34:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 84c8b38:	75 0a                	jne    84c8b44 <_ZN23Inter_MonitorUserGetout12dispatch_sigEP5CUserPci+0x38>
 84c8b3a:	bb 00 00 00 00       	mov    $0x0,%ebx
 84c8b3f:	e9 01 01 00 00       	jmp    84c8c45 <_ZN23Inter_MonitorUserGetout12dispatch_sigEP5CUserPci+0x139>
 84c8b44:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84c8b47:	89 04 24             	mov    %eax,(%esp)
 84c8b4a:	e8 fd 51 0c 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84c8b4f:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84c8b56:	00 
 84c8b57:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84c8b5e:	00 
 84c8b5f:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84c8b62:	89 04 24             	mov    %eax,(%esp)
 84c8b65:	e8 92 2d c0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84c8b6a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84c8b71:	00 
 84c8b72:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84c8b75:	89 04 24             	mov    %eax,(%esp)
 84c8b78:	e8 a3 2d c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84c8b7d:	c7 44 24 04 41 00 00 	movl   $0x41,0x4(%esp)
 84c8b84:	00 
 84c8b85:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84c8b88:	89 04 24             	mov    %eax,(%esp)
 84c8b8b:	e8 90 2d c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84c8b90:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84c8b97:	00 
 84c8b98:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84c8b9b:	89 04 24             	mov    %eax,(%esp)
 84c8b9e:	e8 b5 2d c0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84c8ba3:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84c8ba6:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c8baa:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84c8bad:	89 04 24             	mov    %eax,(%esp)
 84c8bb0:	e8 05 fa 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84c8bb5:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84c8bbc:	00 
 84c8bbd:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84c8bc4:	00 
 84c8bc5:	c7 44 24 04 0f 00 00 	movl   $0xf,0x4(%esp)
 84c8bcc:	00 
 84c8bcd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84c8bd0:	89 04 24             	mov    %eax,(%esp)
 84c8bd3:	e8 1c fe 17 00       	call   86489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>
 84c8bd8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84c8bdb:	8b 58 0a             	mov    0xa(%eax),%ebx
 84c8bde:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84c8be5:	00 
 84c8be6:	c7 44 24 08 6c 22 00 	movl   $0x226c,0x8(%esp)
 84c8bed:	00 
 84c8bee:	c7 44 24 04 00 dd c8 	movl   $0x8c8dd00,0x4(%esp)
 84c8bf5:	08 
 84c8bf6:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84c8bf9:	89 04 24             	mov    %eax,(%esp)
 84c8bfc:	e8 17 6b 08 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84c8c01:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84c8c05:	c7 44 24 04 9d 78 c8 	movl   $0x8c8789d,0x4(%esp)
 84c8c0c:	08 
 84c8c0d:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84c8c10:	89 04 24             	mov    %eax,(%esp)
 84c8c13:	e8 70 6b 08 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84c8c18:	bb 00 00 00 00       	mov    $0x0,%ebx
 84c8c1d:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84c8c20:	89 04 24             	mov    %eax,(%esp)
 84c8c23:	e8 58 52 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84c8c28:	eb 1b                	jmp    84c8c45 <_ZN23Inter_MonitorUserGetout12dispatch_sigEP5CUserPci+0x139>
 84c8c2a:	89 d3                	mov    %edx,%ebx
 84c8c2c:	89 c6                	mov    %eax,%esi
 84c8c2e:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84c8c31:	89 04 24             	mov    %eax,(%esp)
 84c8c34:	e8 47 52 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84c8c39:	89 f0                	mov    %esi,%eax
 84c8c3b:	89 da                	mov    %ebx,%edx
 84c8c3d:	89 04 24             	mov    %eax,(%esp)
 84c8c40:	e8 0b ab 61 00       	call   8ae3750 <_Unwind_Resume>
 84c8c45:	89 d8                	mov    %ebx,%eax
 84c8c47:	83 c4 40             	add    $0x40,%esp
 84c8c4a:	5b                   	pop    %ebx
 84c8c4b:	5e                   	pop    %esi
 84c8c4c:	5d                   	pop    %ebp
 84c8c4d:	c3                   	ret

```

```c
// Inter_MonitorUserGetout::dispatch_sig @ 0x84c8b0c

/* Inter_MonitorUserGetout::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MonitorUserGetout::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  CGameManager *this;
  PacketGuard local_30 [12];
  cMyTrace local_24 [16];
  int local_14;
  CUser *local_10;
  
  local_14 = param_3;
  uVar1 = *(uint *)(param_3 + 10);
  this = (CGameManager *)G_CGameManager();
  local_10 = (CUser *)CGameManager::GetUserByAccId(this,uVar1);
  if (local_10 != (CUser *)0x0) {
    PacketGuard::PacketGuard(local_30);
                    /* try { // try from 084c8b65 to 084c8c17 has its CatchHandler @ 084c8c2a */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,1,1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,0x41);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
    CUser::Send(local_10,local_30);
    CUser::DisConnSig(local_10,0xf,1,0);
    uVar2 = *(undefined4 *)(local_14 + 10);
    cMyTrace::cMyTrace(local_24,
                       "virtual int Inter_MonitorUserGetout::dispatch_sig(CUser*, char*, int)",
                       0x226c,0);
    cMyTrace::operator()(local_24,&DAT_08c8789d,uVar2);
    PacketGuard::~PacketGuard(local_30);
  }
  return 0;
}

```

