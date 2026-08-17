# Dispatcher_RemovePrivateStore

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08202bb6 Dispatcher_RemovePrivateStore::dispatch_sig  [0x08202bb6-0x8202cd9] ===
 8202bb6:	55                   	push   %ebp
 8202bb7:	89 e5                	mov    %esp,%ebp
 8202bb9:	56                   	push   %esi
 8202bba:	53                   	push   %ebx
 8202bbb:	83 ec 20             	sub    $0x20,%esp
 8202bbe:	8b 45 0c             	mov    0xc(%ebp),%eax
 8202bc1:	89 04 24             	mov    %eax,(%esp)
 8202bc4:	e8 c3 77 ed ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8202bc9:	83 f8 02             	cmp    $0x2,%eax
 8202bcc:	7e 0f                	jle    8202bdd <_ZN29Dispatcher_RemovePrivateStore12dispatch_sigEP5CUserR9PacketBuf+0x27>
 8202bce:	8b 45 0c             	mov    0xc(%ebp),%eax
 8202bd1:	89 04 24             	mov    %eax,(%esp)
 8202bd4:	e8 59 d8 f1 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 8202bd9:	85 c0                	test   %eax,%eax
 8202bdb:	75 07                	jne    8202be4 <_ZN29Dispatcher_RemovePrivateStore12dispatch_sigEP5CUserR9PacketBuf+0x2e>
 8202bdd:	b8 01 00 00 00       	mov    $0x1,%eax
 8202be2:	eb 05                	jmp    8202be9 <_ZN29Dispatcher_RemovePrivateStore12dispatch_sigEP5CUserR9PacketBuf+0x33>
 8202be4:	b8 00 00 00 00       	mov    $0x0,%eax
 8202be9:	84 c0                	test   %al,%al
 8202beb:	0f 84 9e 00 00 00    	je     8202c8f <_ZN29Dispatcher_RemovePrivateStore12dispatch_sigEP5CUserR9PacketBuf+0xd9>
 8202bf1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8202bf4:	89 04 24             	mov    %eax,(%esp)
 8202bf7:	e8 50 b1 38 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8202bfc:	c7 44 24 08 59 00 00 	movl   $0x59,0x8(%esp)
 8202c03:	00 
 8202c04:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8202c0b:	00 
 8202c0c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8202c0f:	89 04 24             	mov    %eax,(%esp)
 8202c12:	e8 e5 8c ec ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8202c17:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8202c1e:	00 
 8202c1f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8202c22:	89 04 24             	mov    %eax,(%esp)
 8202c25:	e8 f6 8c ec ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8202c2a:	c7 44 24 04 15 00 00 	movl   $0x15,0x4(%esp)
 8202c31:	00 
 8202c32:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8202c35:	89 04 24             	mov    %eax,(%esp)
 8202c38:	e8 e3 8c ec ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8202c3d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8202c44:	00 
 8202c45:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8202c48:	89 04 24             	mov    %eax,(%esp)
 8202c4b:	e8 08 8d ec ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8202c50:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8202c53:	89 44 24 04          	mov    %eax,0x4(%esp)
 8202c57:	8b 45 0c             	mov    0xc(%ebp),%eax
 8202c5a:	89 04 24             	mov    %eax,(%esp)
 8202c5d:	e8 58 59 44 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8202c62:	bb 00 00 00 00       	mov    $0x0,%ebx
 8202c67:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8202c6a:	89 04 24             	mov    %eax,(%esp)
 8202c6d:	e8 0e b2 38 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8202c72:	eb 5c                	jmp    8202cd0 <_ZN29Dispatcher_RemovePrivateStore12dispatch_sigEP5CUserR9PacketBuf+0x11a>
 8202c74:	89 d3                	mov    %edx,%ebx
 8202c76:	89 c6                	mov    %eax,%esi
 8202c78:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8202c7b:	89 04 24             	mov    %eax,(%esp)
 8202c7e:	e8 fd b1 38 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8202c83:	89 f0                	mov    %esi,%eax
 8202c85:	89 da                	mov    %ebx,%edx
 8202c87:	89 04 24             	mov    %eax,(%esp)
 8202c8a:	e8 c1 0a 8e 00       	call   8ae3750 <_Unwind_Resume>
 8202c8f:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8202c96:	e8 4d 1f 3c 00       	call   85c4be8 <_ZN13private_store26GetInstancePrivateStoreMgrEv>
 8202c9b:	8b 55 0c             	mov    0xc(%ebp),%edx
 8202c9e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8202ca2:	8d 55 f4             	lea    -0xc(%ebp),%edx
 8202ca5:	89 54 24 04          	mov    %edx,0x4(%esp)
 8202ca9:	89 04 24             	mov    %eax,(%esp)
 8202cac:	e8 e7 79 3c 00       	call   85ca698 <_ZN13private_store16CPrivateStoreMgr14GetStoreSellerEPPNS_7ISellerEP5CUser>
 8202cb1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8202cb4:	8b 00                	mov    (%eax),%eax
 8202cb6:	83 c0 04             	add    $0x4,%eax
 8202cb9:	8b 10                	mov    (%eax),%edx
 8202cbb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8202cbe:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8202cc5:	00 
 8202cc6:	89 04 24             	mov    %eax,(%esp)
 8202cc9:	ff d2                	call   *%edx
 8202ccb:	bb 00 00 00 00       	mov    $0x0,%ebx
 8202cd0:	89 d8                	mov    %ebx,%eax
 8202cd2:	83 c4 20             	add    $0x20,%esp
 8202cd5:	5b                   	pop    %ebx
 8202cd6:	5e                   	pop    %esi
 8202cd7:	5d                   	pop    %ebp
 8202cd8:	c3                   	ret
 8202cd9:	90                   	nop

```

```c
// Dispatcher_RemovePrivateStore::dispatch_sig @ 0x8202bb6

/* Dispatcher_RemovePrivateStore::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_RemovePrivateStore::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  int iVar2;
  CPrivateStoreMgr *this;
  PacketGuard local_1c [12];
  ISeller *local_10;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (2 < iVar2) {
    iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar2 != 0) {
      bVar1 = false;
      goto LAB_08202be9;
    }
  }
  bVar1 = true;
LAB_08202be9:
  if (bVar1) {
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 08202c12 to 08202c61 has its CatchHandler @ 08202c74 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x59);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0x15);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send((CUser *)param_2,local_1c);
    PacketGuard::~PacketGuard(local_1c);
  }
  else {
    local_10 = (ISeller *)0x0;
    this = (CPrivateStoreMgr *)private_store::GetInstancePrivateStoreMgr();
    private_store::CPrivateStoreMgr::GetStoreSeller(this,&local_10,(CUser *)param_2);
    (**(code **)(*(int *)local_10 + 4))(local_10,0);
  }
  return 0;
}

```

