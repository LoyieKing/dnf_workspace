# Inter_LoadGameOption

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d7e84 Inter_LoadGameOption::dispatch_sig  [0x084d7e84-0x84d8095] ===
 84d7e84:	55                   	push   %ebp
 84d7e85:	89 e5                	mov    %esp,%ebp
 84d7e87:	56                   	push   %esi
 84d7e88:	53                   	push   %ebx
 84d7e89:	83 ec 30             	sub    $0x30,%esp
 84d7e8c:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d7e8f:	89 04 24             	mov    %eax,(%esp)
 84d7e92:	e8 f5 24 c0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84d7e97:	83 f8 01             	cmp    $0x1,%eax
 84d7e9a:	0f 9e c0             	setle  %al
 84d7e9d:	84 c0                	test   %al,%al
 84d7e9f:	74 0a                	je     84d7eab <_ZN20Inter_LoadGameOption12dispatch_sigEP5CUserPci+0x27>
 84d7ea1:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d7ea6:	e9 e2 01 00 00       	jmp    84d808d <_ZN20Inter_LoadGameOption12dispatch_sigEP5CUserPci+0x209>
 84d7eab:	8b 45 10             	mov    0x10(%ebp),%eax
 84d7eae:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84d7eb1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d7eb4:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84d7ebb:	00 
 84d7ebc:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d7ec3:	00 
 84d7ec4:	89 04 24             	mov    %eax,(%esp)
 84d7ec7:	e8 6a f4 fd ff       	call   84b7336 <_ZN10CETCOption12setETCOptionE15ENUM_OPTION_ETCs>
 84d7ecc:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d7ecf:	89 04 24             	mov    %eax,(%esp)
 84d7ed2:	e8 77 7d d5 ff       	call   822fc4e <_ZN5CUser16GetGameOptionRefEv>
 84d7ed7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84d7eda:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d7edd:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d7ee1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d7ee4:	89 04 24             	mov    %eax,(%esp)
 84d7ee7:	e8 08 ef fd ff       	call   84b6df4 <_ZN11CGameOption12SetEtcOptionER10CETCOption>
 84d7eec:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d7eef:	83 c0 48             	add    $0x48,%eax
 84d7ef2:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84d7ef9:	00 
 84d7efa:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d7efe:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d7f01:	89 04 24             	mov    %eax,(%esp)
 84d7f04:	e8 6b ef fd ff       	call   84b6e74 <_ZN11CGameOption18SetQuickChatOptionERK20CQuickChattingOptionj>
 84d7f09:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d7f0c:	05 74 01 00 00       	add    $0x174,%eax
 84d7f11:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84d7f18:	00 
 84d7f19:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d7f1d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d7f20:	89 04 24             	mov    %eax,(%esp)
 84d7f23:	e8 4c ef fd ff       	call   84b6e74 <_ZN11CGameOption18SetQuickChatOptionERK20CQuickChattingOptionj>
 84d7f28:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d7f2b:	05 a0 02 00 00       	add    $0x2a0,%eax
 84d7f30:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d7f34:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d7f37:	89 04 24             	mov    %eax,(%esp)
 84d7f3a:	e8 41 f1 fd ff       	call   84b7080 <_ZN11CGameOption15SetEmoticonInfoERK23CChattingEmoticonConfig>
 84d7f3f:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d7f42:	89 04 24             	mov    %eax,(%esp)
 84d7f45:	e8 02 5e 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84d7f4a:	c7 44 24 08 ad 00 00 	movl   $0xad,0x8(%esp)
 84d7f51:	00 
 84d7f52:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84d7f59:	00 
 84d7f5a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d7f5d:	89 04 24             	mov    %eax,(%esp)
 84d7f60:	e8 97 39 bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84d7f65:	c7 44 24 04 48 00 00 	movl   $0x48,0x4(%esp)
 84d7f6c:	00 
 84d7f6d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d7f70:	89 04 24             	mov    %eax,(%esp)
 84d7f73:	e8 c4 39 bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84d7f78:	e8 2a 24 c0 ff       	call   80da3a7 <_Z11G_GameWorldv>
 84d7f7d:	89 04 24             	mov    %eax,(%esp)
 84d7f80:	e8 c9 5c f7 ff       	call   844dc4e <_ZNK9GameWorld18IsSchoolPvPChannelEv>
 84d7f85:	84 c0                	test   %al,%al
 84d7f87:	74 36                	je     84d7fbf <_ZN20Inter_LoadGameOption12dispatch_sigEP5CUserPci+0x13b>
 84d7f89:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d7f8c:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84d7f93:	00 
 84d7f94:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 84d7f9b:	00 
 84d7f9c:	89 04 24             	mov    %eax,(%esp)
 84d7f9f:	e8 92 f3 fd ff       	call   84b7336 <_ZN10CETCOption12setETCOptionE15ENUM_OPTION_ETCs>
 84d7fa4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d7fa7:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84d7fae:	00 
 84d7faf:	c7 44 24 04 0b 00 00 	movl   $0xb,0x4(%esp)
 84d7fb6:	00 
 84d7fb7:	89 04 24             	mov    %eax,(%esp)
 84d7fba:	e8 77 f3 fd ff       	call   84b7336 <_ZN10CETCOption12setETCOptionE15ENUM_OPTION_ETCs>
 84d7fbf:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d7fc2:	c7 44 24 08 48 00 00 	movl   $0x48,0x8(%esp)
 84d7fc9:	00 
 84d7fca:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d7fce:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d7fd1:	89 04 24             	mov    %eax,(%esp)
 84d7fd4:	e8 2f 5f c4 ff       	call   811df08 <_ZN18InterfacePacketBuf10put_binaryEPci>
 84d7fd9:	c7 44 24 04 2c 01 00 	movl   $0x12c,0x4(%esp)
 84d7fe0:	00 
 84d7fe1:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d7fe4:	89 04 24             	mov    %eax,(%esp)
 84d7fe7:	e8 50 39 bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84d7fec:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d7fef:	83 c0 48             	add    $0x48,%eax
 84d7ff2:	c7 44 24 08 2c 01 00 	movl   $0x12c,0x8(%esp)
 84d7ff9:	00 
 84d7ffa:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d7ffe:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d8001:	89 04 24             	mov    %eax,(%esp)
 84d8004:	e8 ff 5e c4 ff       	call   811df08 <_ZN18InterfacePacketBuf10put_binaryEPci>
 84d8009:	c7 44 24 04 2c 01 00 	movl   $0x12c,0x4(%esp)
 84d8010:	00 
 84d8011:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d8014:	89 04 24             	mov    %eax,(%esp)
 84d8017:	e8 20 39 bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84d801c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d801f:	05 74 01 00 00       	add    $0x174,%eax
 84d8024:	c7 44 24 08 2c 01 00 	movl   $0x12c,0x8(%esp)
 84d802b:	00 
 84d802c:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d8030:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d8033:	89 04 24             	mov    %eax,(%esp)
 84d8036:	e8 cd 5e c4 ff       	call   811df08 <_ZN18InterfacePacketBuf10put_binaryEPci>
 84d803b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d8042:	00 
 84d8043:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d8046:	89 04 24             	mov    %eax,(%esp)
 84d8049:	e8 0a 39 bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84d804e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d8051:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d8055:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d8058:	89 04 24             	mov    %eax,(%esp)
 84d805b:	e8 5a 05 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84d8060:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d8065:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d8068:	89 04 24             	mov    %eax,(%esp)
 84d806b:	e8 10 5e 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d8070:	eb 1b                	jmp    84d808d <_ZN20Inter_LoadGameOption12dispatch_sigEP5CUserPci+0x209>
 84d8072:	89 d3                	mov    %edx,%ebx
 84d8074:	89 c6                	mov    %eax,%esi
 84d8076:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d8079:	89 04 24             	mov    %eax,(%esp)
 84d807c:	e8 ff 5d 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d8081:	89 f0                	mov    %esi,%eax
 84d8083:	89 da                	mov    %ebx,%edx
 84d8085:	89 04 24             	mov    %eax,(%esp)
 84d8088:	e8 c3 b6 60 00       	call   8ae3750 <_Unwind_Resume>
 84d808d:	89 d8                	mov    %ebx,%eax
 84d808f:	83 c4 30             	add    $0x30,%esp
 84d8092:	5b                   	pop    %ebx
 84d8093:	5e                   	pop    %esi
 84d8094:	5d                   	pop    %ebp
 84d8095:	c3                   	ret

```

```c
// Inter_LoadGameOption::dispatch_sig @ 0x84d7e84

/* Inter_LoadGameOption::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_LoadGameOption::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  GameWorld *this;
  PacketGuard local_20 [12];
  CETCOption *local_14;
  CGameOption *local_10;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (1 < iVar2) {
    local_14 = (CETCOption *)param_3;
    CETCOption::setETCOption((CETCOption *)param_3,1,1);
    local_10 = (CGameOption *)CUser::GetGameOptionRef((CUser *)param_2);
    CGameOption::SetEtcOption(local_10,local_14);
    CGameOption::SetQuickChatOption(local_10,(CQuickChattingOption *)(local_14 + 0x48),0);
    CGameOption::SetQuickChatOption(local_10,(CQuickChattingOption *)(local_14 + 0x174),1);
    CGameOption::SetEmoticonInfo(local_10,(CChattingEmoticonConfig *)(local_14 + 0x2a0));
    PacketGuard::PacketGuard(local_20);
                    /* try { // try from 084d7f60 to 084d805f has its CatchHandler @ 084d8072 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0xad);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,0x48);
    this = (GameWorld *)G_GameWorld();
    cVar1 = GameWorld::IsSchoolPvPChannel(this);
    if (cVar1 != '\0') {
      CETCOption::setETCOption(local_14,10,1);
      CETCOption::setETCOption(local_14,0xb,0);
    }
    InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_20,(char *)local_14,0x48);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,300);
    InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_20,(char *)(local_14 + 0x48),300);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,300);
    InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_20,(char *)(local_14 + 0x174),300);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
    CUser::Send((CUser *)param_2,local_20);
    PacketGuard::~PacketGuard(local_20);
  }
  return 0;
}

```

