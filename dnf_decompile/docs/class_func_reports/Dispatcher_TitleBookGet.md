# Dispatcher_TitleBookGet

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## process

```asm
// === 081d7ada Dispatcher_TitleBookGet::process  [0x081d7ada-0x81d7cff] ===
 81d7ada:	55                   	push   %ebp
 81d7adb:	89 e5                	mov    %esp,%ebp
 81d7add:	56                   	push   %esi
 81d7ade:	53                   	push   %ebx
 81d7adf:	83 ec 40             	sub    $0x40,%esp
 81d7ae2:	8b 45 10             	mov    0x10(%ebp),%eax
 81d7ae5:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81d7ae8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d7aeb:	89 04 24             	mov    %eax,(%esp)
 81d7aee:	e8 99 28 f0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81d7af3:	83 f8 02             	cmp    $0x2,%eax
 81d7af6:	0f 9e c0             	setle  %al
 81d7af9:	84 c0                	test   %al,%al
 81d7afb:	74 0a                	je     81d7b07 <_ZN23Dispatcher_TitleBookGet7processEP5CUserR8MSG_BASER9ParamBase+0x2d>
 81d7afd:	b8 00 00 00 00       	mov    $0x0,%eax
 81d7b02:	e9 f2 01 00 00       	jmp    81d7cf9 <_ZN23Dispatcher_TitleBookGet7processEP5CUserR8MSG_BASER9ParamBase+0x21f>
 81d7b07:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d7b0a:	8d 70 11             	lea    0x11(%eax),%esi
 81d7b0d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d7b10:	8b 40 0d             	mov    0xd(%eax),%eax
 81d7b13:	89 c3                	mov    %eax,%ebx
 81d7b15:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d7b18:	8b 48 15             	mov    0x15(%eax),%ecx
 81d7b1b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d7b1e:	8b 50 1d             	mov    0x1d(%eax),%edx
 81d7b21:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d7b24:	8b 40 19             	mov    0x19(%eax),%eax
 81d7b27:	89 74 24 14          	mov    %esi,0x14(%esp)
 81d7b2b:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 81d7b2f:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 81d7b33:	89 54 24 08          	mov    %edx,0x8(%esp)
 81d7b37:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d7b3b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d7b3e:	89 04 24             	mov    %eax,(%esp)
 81d7b41:	e8 7e aa 46 00       	call   86425c4 <_ZN10CTitleBook8getTitleEP5CUser24ENUM_TITLE_BOOK_CATEGORYii14ENUM_ITEMSPACERi>
 81d7b46:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d7b49:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81d7b4d:	0f 84 c7 00 00 00    	je     81d7c1a <_ZN23Dispatcher_TitleBookGet7processEP5CUserR8MSG_BASER9ParamBase+0x140>
 81d7b53:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81d7b56:	89 04 24             	mov    %eax,(%esp)
 81d7b59:	e8 ee 61 3b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81d7b5e:	c7 44 24 08 9d 01 00 	movl   $0x19d,0x8(%esp)
 81d7b65:	00 
 81d7b66:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d7b6d:	00 
 81d7b6e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81d7b71:	89 04 24             	mov    %eax,(%esp)
 81d7b74:	e8 83 3d ef ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81d7b79:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81d7b80:	00 
 81d7b81:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81d7b84:	89 04 24             	mov    %eax,(%esp)
 81d7b87:	e8 94 3d ef ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81d7b8c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d7b8f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d7b93:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81d7b96:	89 04 24             	mov    %eax,(%esp)
 81d7b99:	e8 82 3d ef ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81d7b9e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d7ba1:	8b 40 0d             	mov    0xd(%eax),%eax
 81d7ba4:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d7ba8:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81d7bab:	89 04 24             	mov    %eax,(%esp)
 81d7bae:	e8 89 3d ef ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81d7bb3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d7bb6:	8b 40 19             	mov    0x19(%eax),%eax
 81d7bb9:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d7bbd:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81d7bc0:	89 04 24             	mov    %eax,(%esp)
 81d7bc3:	e8 74 3d ef ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81d7bc8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d7bcf:	00 
 81d7bd0:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81d7bd3:	89 04 24             	mov    %eax,(%esp)
 81d7bd6:	e8 7d 3d ef ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81d7bdb:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81d7bde:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d7be2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d7be5:	89 04 24             	mov    %eax,(%esp)
 81d7be8:	e8 cd 09 47 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81d7bed:	eb 1b                	jmp    81d7c0a <_ZN23Dispatcher_TitleBookGet7processEP5CUserR8MSG_BASER9ParamBase+0x130>
 81d7bef:	89 d3                	mov    %edx,%ebx
 81d7bf1:	89 c6                	mov    %eax,%esi
 81d7bf3:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81d7bf6:	89 04 24             	mov    %eax,(%esp)
 81d7bf9:	e8 82 62 3b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81d7bfe:	89 f0                	mov    %esi,%eax
 81d7c00:	89 da                	mov    %ebx,%edx
 81d7c02:	89 04 24             	mov    %eax,(%esp)
 81d7c05:	e8 46 bb 90 00       	call   8ae3750 <_Unwind_Resume>
 81d7c0a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81d7c0d:	89 04 24             	mov    %eax,(%esp)
 81d7c10:	e8 6b 62 3b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81d7c15:	e9 da 00 00 00       	jmp    81d7cf4 <_ZN23Dispatcher_TitleBookGet7processEP5CUserR8MSG_BASER9ParamBase+0x21a>
 81d7c1a:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81d7c1d:	89 04 24             	mov    %eax,(%esp)
 81d7c20:	e8 27 61 3b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81d7c25:	c7 44 24 08 9d 01 00 	movl   $0x19d,0x8(%esp)
 81d7c2c:	00 
 81d7c2d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d7c34:	00 
 81d7c35:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81d7c38:	89 04 24             	mov    %eax,(%esp)
 81d7c3b:	e8 bc 3c ef ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81d7c40:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d7c47:	00 
 81d7c48:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81d7c4b:	89 04 24             	mov    %eax,(%esp)
 81d7c4e:	e8 cd 3c ef ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81d7c53:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d7c56:	8b 40 0d             	mov    0xd(%eax),%eax
 81d7c59:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d7c5d:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81d7c60:	89 04 24             	mov    %eax,(%esp)
 81d7c63:	e8 d4 3c ef ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81d7c68:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d7c6b:	8b 40 11             	mov    0x11(%eax),%eax
 81d7c6e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d7c72:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81d7c75:	89 04 24             	mov    %eax,(%esp)
 81d7c78:	e8 bf 3c ef ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81d7c7d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d7c80:	8b 40 19             	mov    0x19(%eax),%eax
 81d7c83:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d7c87:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81d7c8a:	89 04 24             	mov    %eax,(%esp)
 81d7c8d:	e8 aa 3c ef ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81d7c92:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d7c95:	8b 40 1d             	mov    0x1d(%eax),%eax
 81d7c98:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d7c9c:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81d7c9f:	89 04 24             	mov    %eax,(%esp)
 81d7ca2:	e8 95 3c ef ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81d7ca7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d7cae:	00 
 81d7caf:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81d7cb2:	89 04 24             	mov    %eax,(%esp)
 81d7cb5:	e8 9e 3c ef ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81d7cba:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81d7cbd:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d7cc1:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d7cc4:	89 04 24             	mov    %eax,(%esp)
 81d7cc7:	e8 ee 08 47 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81d7ccc:	eb 1b                	jmp    81d7ce9 <_ZN23Dispatcher_TitleBookGet7processEP5CUserR8MSG_BASER9ParamBase+0x20f>
 81d7cce:	89 d3                	mov    %edx,%ebx
 81d7cd0:	89 c6                	mov    %eax,%esi
 81d7cd2:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81d7cd5:	89 04 24             	mov    %eax,(%esp)
 81d7cd8:	e8 a3 61 3b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81d7cdd:	89 f0                	mov    %esi,%eax
 81d7cdf:	89 da                	mov    %ebx,%edx
 81d7ce1:	89 04 24             	mov    %eax,(%esp)
 81d7ce4:	e8 67 ba 90 00       	call   8ae3750 <_Unwind_Resume>
 81d7ce9:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81d7cec:	89 04 24             	mov    %eax,(%esp)
 81d7cef:	e8 8c 61 3b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81d7cf4:	b8 00 00 00 00       	mov    $0x0,%eax
 81d7cf9:	83 c4 40             	add    $0x40,%esp
 81d7cfc:	5b                   	pop    %ebx
 81d7cfd:	5e                   	pop    %esi
 81d7cfe:	5d                   	pop    %ebp
 81d7cff:	c3                   	ret

```

```c
// Dispatcher_TitleBookGet::process @ 0x81d7ada

/* Dispatcher_TitleBookGet::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 Dispatcher_TitleBookGet::process(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  int iVar1;
  PacketGuard local_2c [12];
  PacketGuard local_20 [12];
  ParamBase *local_14;
  int local_10;
  
  local_14 = param_3;
  iVar1 = CUser::get_state((CUser *)param_2);
  if (2 < iVar1) {
    local_10 = CTitleBook::getTitle
                         (param_2,*(undefined4 *)(local_14 + 0x19),*(undefined4 *)(local_14 + 0x1d),
                          *(undefined4 *)(local_14 + 0x15),*(undefined4 *)(local_14 + 0xd),
                          local_14 + 0x11);
    if (local_10 == 0) {
      PacketGuard::PacketGuard(local_2c);
                    /* try { // try from 081d7c3b to 081d7ccb has its CatchHandler @ 081d7cce */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,1,0x19d);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,1);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,*(int *)(local_14 + 0xd));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,*(int *)(local_14 + 0x11));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,*(int *)(local_14 + 0x19));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,*(int *)(local_14 + 0x1d));
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
      CUser::Send((CUser *)param_2,local_2c);
      PacketGuard::~PacketGuard(local_2c);
    }
    else {
      PacketGuard::PacketGuard(local_20);
                    /* try { // try from 081d7b74 to 081d7bec has its CatchHandler @ 081d7bef */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,1,0x19d);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,local_10);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,*(int *)(local_14 + 0xd));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,*(int *)(local_14 + 0x19));
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
      CUser::Send((CUser *)param_2,local_20);
      PacketGuard::~PacketGuard(local_20);
    }
  }
  return 0;
}

```

---

## read

```asm
// === 081d7974 Dispatcher_TitleBookGet::read  [0x081d7974-0x81d7ad9] ===
 81d7974:	55                   	push   %ebp
 81d7975:	89 e5                	mov    %esp,%ebp
 81d7977:	83 ec 28             	sub    $0x28,%esp
 81d797a:	8b 45 10             	mov    0x10(%ebp),%eax
 81d797d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d7980:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d7983:	83 c0 0d             	add    $0xd,%eax
 81d7986:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d798a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d798d:	89 04 24             	mov    %eax,(%esp)
 81d7990:	e8 5b 57 3b 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81d7995:	83 f0 01             	xor    $0x1,%eax
 81d7998:	84 c0                	test   %al,%al
 81d799a:	74 29                	je     81d79c5 <_ZN23Dispatcher_TitleBookGet4readER9PacketBufR8MSG_BASE+0x51>
 81d799c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d79a3:	00 
 81d79a4:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d79ab:	00 
 81d79ac:	c7 44 24 04 00 28 bd 	movl   $0x8bd2800,0x4(%esp)
 81d79b3:	08 
 81d79b4:	c7 04 24 0c 42 00 00 	movl   $0x420c,(%esp)
 81d79bb:	e8 17 8f 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d79c0:	e9 13 01 00 00       	jmp    81d7ad8 <_ZN23Dispatcher_TitleBookGet4readER9PacketBufR8MSG_BASE+0x164>
 81d79c5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d79c8:	83 c0 11             	add    $0x11,%eax
 81d79cb:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d79cf:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d79d2:	89 04 24             	mov    %eax,(%esp)
 81d79d5:	e8 16 57 3b 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81d79da:	83 f0 01             	xor    $0x1,%eax
 81d79dd:	84 c0                	test   %al,%al
 81d79df:	74 29                	je     81d7a0a <_ZN23Dispatcher_TitleBookGet4readER9PacketBufR8MSG_BASE+0x96>
 81d79e1:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d79e8:	00 
 81d79e9:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d79f0:	00 
 81d79f1:	c7 44 24 04 00 28 bd 	movl   $0x8bd2800,0x4(%esp)
 81d79f8:	08 
 81d79f9:	c7 04 24 0e 42 00 00 	movl   $0x420e,(%esp)
 81d7a00:	e8 d2 8e 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d7a05:	e9 ce 00 00 00       	jmp    81d7ad8 <_ZN23Dispatcher_TitleBookGet4readER9PacketBufR8MSG_BASE+0x164>
 81d7a0a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d7a0d:	83 c0 15             	add    $0x15,%eax
 81d7a10:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d7a14:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d7a17:	89 04 24             	mov    %eax,(%esp)
 81d7a1a:	e8 d1 56 3b 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81d7a1f:	83 f0 01             	xor    $0x1,%eax
 81d7a22:	84 c0                	test   %al,%al
 81d7a24:	74 29                	je     81d7a4f <_ZN23Dispatcher_TitleBookGet4readER9PacketBufR8MSG_BASE+0xdb>
 81d7a26:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d7a2d:	00 
 81d7a2e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d7a35:	00 
 81d7a36:	c7 44 24 04 00 28 bd 	movl   $0x8bd2800,0x4(%esp)
 81d7a3d:	08 
 81d7a3e:	c7 04 24 10 42 00 00 	movl   $0x4210,(%esp)
 81d7a45:	e8 8d 8e 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d7a4a:	e9 89 00 00 00       	jmp    81d7ad8 <_ZN23Dispatcher_TitleBookGet4readER9PacketBufR8MSG_BASE+0x164>
 81d7a4f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d7a52:	83 c0 19             	add    $0x19,%eax
 81d7a55:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d7a59:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d7a5c:	89 04 24             	mov    %eax,(%esp)
 81d7a5f:	e8 8c 56 3b 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81d7a64:	83 f0 01             	xor    $0x1,%eax
 81d7a67:	84 c0                	test   %al,%al
 81d7a69:	74 26                	je     81d7a91 <_ZN23Dispatcher_TitleBookGet4readER9PacketBufR8MSG_BASE+0x11d>
 81d7a6b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d7a72:	00 
 81d7a73:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d7a7a:	00 
 81d7a7b:	c7 44 24 04 00 28 bd 	movl   $0x8bd2800,0x4(%esp)
 81d7a82:	08 
 81d7a83:	c7 04 24 12 42 00 00 	movl   $0x4212,(%esp)
 81d7a8a:	e8 48 8e 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d7a8f:	eb 47                	jmp    81d7ad8 <_ZN23Dispatcher_TitleBookGet4readER9PacketBufR8MSG_BASE+0x164>
 81d7a91:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d7a94:	83 c0 1d             	add    $0x1d,%eax
 81d7a97:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d7a9b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d7a9e:	89 04 24             	mov    %eax,(%esp)
 81d7aa1:	e8 4a 56 3b 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81d7aa6:	83 f0 01             	xor    $0x1,%eax
 81d7aa9:	84 c0                	test   %al,%al
 81d7aab:	74 26                	je     81d7ad3 <_ZN23Dispatcher_TitleBookGet4readER9PacketBufR8MSG_BASE+0x15f>
 81d7aad:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d7ab4:	00 
 81d7ab5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d7abc:	00 
 81d7abd:	c7 44 24 04 00 28 bd 	movl   $0x8bd2800,0x4(%esp)
 81d7ac4:	08 
 81d7ac5:	c7 04 24 14 42 00 00 	movl   $0x4214,(%esp)
 81d7acc:	e8 06 8e 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d7ad1:	eb 05                	jmp    81d7ad8 <_ZN23Dispatcher_TitleBookGet4readER9PacketBufR8MSG_BASE+0x164>
 81d7ad3:	b8 00 00 00 00       	mov    $0x0,%eax
 81d7ad8:	c9                   	leave
 81d7ad9:	c3                   	ret

```

```c
// Dispatcher_TitleBookGet::read @ 0x81d7974

/* Dispatcher_TitleBookGet::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_TitleBookGet::read(Dispatcher_TitleBookGet *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x11));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x15));
      if (cVar1 == '\x01') {
        cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x19));
        if (cVar1 == '\x01') {
          cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x1d));
          if (cVar1 == '\x01') {
            uVar2 = 0;
          }
          else {
            uVar2 = LineFunc(0x4214,
                             "virtual int Dispatcher_TitleBookGet::read(PacketBuf&, MSG_BASE&)",0,0)
            ;
          }
        }
        else {
          uVar2 = LineFunc(0x4212,"virtual int Dispatcher_TitleBookGet::read(PacketBuf&, MSG_BASE&)"
                           ,0,0);
        }
      }
      else {
        uVar2 = LineFunc(0x4210,"virtual int Dispatcher_TitleBookGet::read(PacketBuf&, MSG_BASE&)",0
                         ,0);
      }
    }
    else {
      uVar2 = LineFunc(0x420e,"virtual int Dispatcher_TitleBookGet::read(PacketBuf&, MSG_BASE&)",0,0
                      );
    }
  }
  else {
    uVar2 = LineFunc(0x420c,"virtual int Dispatcher_TitleBookGet::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}

```

