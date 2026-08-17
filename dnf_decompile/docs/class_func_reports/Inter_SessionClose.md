# Inter_SessionClose

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084c7af0 Inter_SessionClose::dispatch_sig  [0x084c7af0-0x84c7c41] ===
 84c7af0:	55                   	push   %ebp
 84c7af1:	89 e5                	mov    %esp,%ebp
 84c7af3:	56                   	push   %esi
 84c7af4:	53                   	push   %ebx
 84c7af5:	83 ec 40             	sub    $0x40,%esp
 84c7af8:	8b 45 10             	mov    0x10(%ebp),%eax
 84c7afb:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84c7afe:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84c7b01:	8b 18                	mov    (%eax),%ebx
 84c7b03:	e8 86 46 c0 ff       	call   80cc18e <_Z14G_CGameManagerv>
 84c7b08:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84c7b0c:	89 04 24             	mov    %eax,(%esp)
 84c7b0f:	e8 b2 cd dc ff       	call   82948c6 <_ZN12CGameManager14GetUserByAccIdEj>
 84c7b14:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84c7b17:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 84c7b1b:	75 0a                	jne    84c7b27 <_ZN18Inter_SessionClose12dispatch_sigEP5CUserPci+0x37>
 84c7b1d:	bb 00 00 00 00       	mov    $0x0,%ebx
 84c7b22:	e9 12 01 00 00       	jmp    84c7c39 <_ZN18Inter_SessionClose12dispatch_sigEP5CUserPci+0x149>
 84c7b27:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84c7b2a:	89 04 24             	mov    %eax,(%esp)
 84c7b2d:	e8 1a 62 0c 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84c7b32:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84c7b39:	00 
 84c7b3a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84c7b41:	00 
 84c7b42:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84c7b45:	89 04 24             	mov    %eax,(%esp)
 84c7b48:	e8 af 3d c0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84c7b4d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84c7b54:	00 
 84c7b55:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84c7b58:	89 04 24             	mov    %eax,(%esp)
 84c7b5b:	e8 c0 3d c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84c7b60:	c7 44 24 04 12 00 00 	movl   $0x12,0x4(%esp)
 84c7b67:	00 
 84c7b68:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84c7b6b:	89 04 24             	mov    %eax,(%esp)
 84c7b6e:	e8 ad 3d c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84c7b73:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84c7b7a:	00 
 84c7b7b:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84c7b7e:	89 04 24             	mov    %eax,(%esp)
 84c7b81:	e8 d2 3d c0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84c7b86:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84c7b89:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c7b8d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84c7b90:	89 04 24             	mov    %eax,(%esp)
 84c7b93:	e8 22 0a 18 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84c7b98:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84c7b9b:	8b 00                	mov    (%eax),%eax
 84c7b9d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84c7ba4:	00 
 84c7ba5:	89 04 24             	mov    %eax,(%esp)
 84c7ba8:	e8 9e 14 c4 ff       	call   810904b <_Z14NumberToStringji>
 84c7bad:	89 c3                	mov    %eax,%ebx
 84c7baf:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84c7bb6:	00 
 84c7bb7:	c7 44 24 08 04 20 00 	movl   $0x2004,0x8(%esp)
 84c7bbe:	00 
 84c7bbf:	c7 44 24 04 e0 de c8 	movl   $0x8c8dee0,0x4(%esp)
 84c7bc6:	08 
 84c7bc7:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84c7bca:	89 04 24             	mov    %eax,(%esp)
 84c7bcd:	e8 46 7b 08 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84c7bd2:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84c7bd6:	c7 44 24 04 8a 76 c8 	movl   $0x8c8768a,0x4(%esp)
 84c7bdd:	08 
 84c7bde:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84c7be1:	89 04 24             	mov    %eax,(%esp)
 84c7be4:	e8 9f 7b 08 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84c7be9:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84c7bf0:	00 
 84c7bf1:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84c7bf8:	00 
 84c7bf9:	c7 44 24 04 0f 00 00 	movl   $0xf,0x4(%esp)
 84c7c00:	00 
 84c7c01:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84c7c04:	89 04 24             	mov    %eax,(%esp)
 84c7c07:	e8 e8 0d 18 00       	call   86489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>
 84c7c0c:	bb 00 00 00 00       	mov    $0x0,%ebx
 84c7c11:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84c7c14:	89 04 24             	mov    %eax,(%esp)
 84c7c17:	e8 64 62 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84c7c1c:	eb 1b                	jmp    84c7c39 <_ZN18Inter_SessionClose12dispatch_sigEP5CUserPci+0x149>
 84c7c1e:	89 d3                	mov    %edx,%ebx
 84c7c20:	89 c6                	mov    %eax,%esi
 84c7c22:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84c7c25:	89 04 24             	mov    %eax,(%esp)
 84c7c28:	e8 53 62 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84c7c2d:	89 f0                	mov    %esi,%eax
 84c7c2f:	89 da                	mov    %ebx,%edx
 84c7c31:	89 04 24             	mov    %eax,(%esp)
 84c7c34:	e8 17 bb 61 00       	call   8ae3750 <_Unwind_Resume>
 84c7c39:	89 d8                	mov    %ebx,%eax
 84c7c3b:	83 c4 40             	add    $0x40,%esp
 84c7c3e:	5b                   	pop    %ebx
 84c7c3f:	5e                   	pop    %esi
 84c7c40:	5d                   	pop    %ebp
 84c7c41:	c3                   	ret

```

```c
// Inter_SessionClose::dispatch_sig @ 0x84c7af0

/* Inter_SessionClose::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_SessionClose::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  uint uVar1;
  CGameManager *this;
  undefined4 uVar2;
  PacketGuard local_30 [12];
  cMyTrace local_24 [16];
  uint *local_14;
  CUser *local_10;
  
  local_14 = (uint *)param_3;
  uVar1 = *(uint *)param_3;
  this = (CGameManager *)G_CGameManager();
  local_10 = (CUser *)CGameManager::GetUserByAccId(this,uVar1);
  if (local_10 != (CUser *)0x0) {
    PacketGuard::PacketGuard(local_30);
                    /* try { // try from 084c7b48 to 084c7c0b has its CatchHandler @ 084c7c1e */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,1,1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,0x12);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
    CUser::Send(local_10,local_30);
    uVar2 = NumberToString(*local_14,0);
    cMyTrace::cMyTrace(local_24,"virtual int Inter_SessionClose::dispatch_sig(CUser*, char*, int)",
                       0x2004,0);
    cMyTrace::operator()(local_24,&DAT_08c8768a,uVar2);
    CUser::DisConnSig(local_10,0xf,1,0);
    PacketGuard::~PacketGuard(local_30);
  }
  return 0;
}

```

