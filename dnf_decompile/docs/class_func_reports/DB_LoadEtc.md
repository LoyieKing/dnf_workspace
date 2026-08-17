# DB_LoadEtc

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 38

---

## DB_LoadEtc

```asm
// === 08403b84 DB_LoadEtc::DB_LoadEtc  [0x08403b84-0x8403b9f] ===
 8403b84:	55                   	push   %ebp
 8403b85:	89 e5                	mov    %esp,%ebp
 8403b87:	83 ec 18             	sub    $0x18,%esp
 8403b8a:	8b 45 08             	mov    0x8(%ebp),%eax
 8403b8d:	89 04 24             	mov    %eax,(%esp)
 8403b90:	e8 11 9c 04 00       	call   844d7a6 <_ZN12DBDispatcherC1Ev>
 8403b95:	8b 45 08             	mov    0x8(%ebp),%eax
 8403b98:	c7 00 00 fc c5 08    	movl   $0x8c5fc00,(%eax)
 8403b9e:	c9                   	leave
 8403b9f:	c3                   	ret

```

```c
// DB_LoadEtc::DB_LoadEtc @ 0x8403b84

/* DB_LoadEtc::DB_LoadEtc() */

void __thiscall DB_LoadEtc::DB_LoadEtc(DB_LoadEtc *this)

{
  DBDispatcher::DBDispatcher((DBDispatcher *)this);
  *(undefined ***)this = &PTR_dispatch_08c5fc00;
  return;
}

```

---

## GetUserPvp

```asm
// === 08407dc2 DB_LoadEtc::GetUserPvp  [0x08407dc2-0x840838d] ===
 8407dc2:	55                   	push   %ebp
 8407dc3:	89 e5                	mov    %esp,%ebp
 8407dc5:	83 ec 68             	sub    $0x68,%esp
 8407dc8:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8407dcd:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8407dd4:	00 
 8407dd5:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8407ddc:	00 
 8407ddd:	89 04 24             	mov    %eax,(%esp)
 8407de0:	e8 59 d4 fe ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8407de5:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8407de8:	8b 45 0c             	mov    0xc(%ebp),%eax
 8407deb:	8b 40 04             	mov    0x4(%eax),%eax
 8407dee:	89 44 24 08          	mov    %eax,0x8(%esp)
 8407df2:	c7 44 24 04 5c 4c c4 	movl   $0x8c44c5c,0x4(%esp)
 8407df9:	08 
 8407dfa:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8407dfd:	89 04 24             	mov    %eax,(%esp)
 8407e00:	e8 bb c3 fe ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8407e05:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8407e0c:	00 
 8407e0d:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8407e10:	89 04 24             	mov    %eax,(%esp)
 8407e13:	e8 0e c5 fe ff       	call   83f4326 <_ZN5MySQL4execEb>
 8407e18:	83 f0 01             	xor    $0x1,%eax
 8407e1b:	84 c0                	test   %al,%al
 8407e1d:	74 0a                	je     8407e29 <_ZN10DB_LoadEtc10GetUserPvpEP12SIG_LOAD_ETC+0x67>
 8407e1f:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8407e24:	e9 62 05 00 00       	jmp    840838b <_ZN10DB_LoadEtc10GetUserPvpEP12SIG_LOAD_ETC+0x5c9>
 8407e29:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8407e2c:	89 04 24             	mov    %eax,(%esp)
 8407e2f:	e8 88 c6 fe ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 8407e34:	83 f0 01             	xor    $0x1,%eax
 8407e37:	84 c0                	test   %al,%al
 8407e39:	74 0a                	je     8407e45 <_ZN10DB_LoadEtc10GetUserPvpEP12SIG_LOAD_ETC+0x83>
 8407e3b:	b8 01 00 00 00       	mov    $0x1,%eax
 8407e40:	e9 46 05 00 00       	jmp    840838b <_ZN10DB_LoadEtc10GetUserPvpEP12SIG_LOAD_ETC+0x5c9>
 8407e45:	8b 45 0c             	mov    0xc(%ebp),%eax
 8407e48:	05 40 03 00 00       	add    $0x340,%eax
 8407e4d:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8407e50:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8407e53:	89 44 24 08          	mov    %eax,0x8(%esp)
 8407e57:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8407e5e:	00 
 8407e5f:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8407e62:	89 04 24             	mov    %eax,(%esp)
 8407e65:	e8 c2 ea d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8407e6a:	83 f0 01             	xor    $0x1,%eax
 8407e6d:	84 c0                	test   %al,%al
 8407e6f:	74 0a                	je     8407e7b <_ZN10DB_LoadEtc10GetUserPvpEP12SIG_LOAD_ETC+0xb9>
 8407e71:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8407e76:	e9 10 05 00 00       	jmp    840838b <_ZN10DB_LoadEtc10GetUserPvpEP12SIG_LOAD_ETC+0x5c9>
 8407e7b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8407e7e:	83 c0 04             	add    $0x4,%eax
 8407e81:	89 44 24 08          	mov    %eax,0x8(%esp)
 8407e85:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8407e8c:	00 
 8407e8d:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8407e90:	89 04 24             	mov    %eax,(%esp)
 8407e93:	e8 94 ea d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8407e98:	83 f0 01             	xor    $0x1,%eax
 8407e9b:	84 c0                	test   %al,%al
 8407e9d:	74 0a                	je     8407ea9 <_ZN10DB_LoadEtc10GetUserPvpEP12SIG_LOAD_ETC+0xe7>
 8407e9f:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8407ea4:	e9 e2 04 00 00       	jmp    840838b <_ZN10DB_LoadEtc10GetUserPvpEP12SIG_LOAD_ETC+0x5c9>
 8407ea9:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8407eac:	83 c0 08             	add    $0x8,%eax
 8407eaf:	89 44 24 08          	mov    %eax,0x8(%esp)
 8407eb3:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8407eba:	00 
 8407ebb:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8407ebe:	89 04 24             	mov    %eax,(%esp)
 8407ec1:	e8 66 ea d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8407ec6:	83 f0 01             	xor    $0x1,%eax
 8407ec9:	84 c0                	test   %al,%al
 8407ecb:	74 0a                	je     8407ed7 <_ZN10DB_LoadEtc10GetUserPvpEP12SIG_LOAD_ETC+0x115>
 8407ecd:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8407ed2:	e9 b4 04 00 00       	jmp    840838b <_ZN10DB_LoadEtc10GetUserPvpEP12SIG_LOAD_ETC+0x5c9>
 8407ed7:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8407eda:	83 c0 14             	add    $0x14,%eax
 8407edd:	89 44 24 08          	mov    %eax,0x8(%esp)
 8407ee1:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8407ee8:	00 
 8407ee9:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8407eec:	89 04 24             	mov    %eax,(%esp)
 8407eef:	e8 38 ea d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8407ef4:	83 f0 01             	xor    $0x1,%eax
 8407ef7:	84 c0                	test   %al,%al
 8407ef9:	74 0a                	je     8407f05 <_ZN10DB_LoadEtc10GetUserPvpEP12SIG_LOAD_ETC+0x143>
 8407efb:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8407f00:	e9 86 04 00 00       	jmp    840838b <_ZN10DB_LoadEtc10GetUserPvpEP12SIG_LOAD_ETC+0x5c9>
 8407f05:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8407f08:	83 c0 18             	add    $0x18,%eax
 8407f0b:	89 44 24 08          	mov    %eax,0x8(%esp)
 8407f0f:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8407f16:	00 
 8407f17:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8407f1a:	89 04 24             	mov    %eax,(%esp)
 8407f1d:	e8 0a ea d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8407f22:	83 f0 01             	xor    $0x1,%eax
 8407f25:	84 c0                	test   %al,%al
 8407f27:	74 0a                	je     8407f33 <_ZN10DB_LoadEtc10GetUserPvpEP12SIG_LOAD_ETC+0x171>
 8407f29:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8407f2e:	e9 58 04 00 00       	jmp    840838b <_ZN10DB_LoadEtc10GetUserPvpEP12SIG_LOAD_ETC+0x5c9>
 8407f33:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8407f36:	83 c0 1c             	add    $0x1c,%eax
 8407f39:	89 44 24 08          	mov    %eax,0x8(%esp)
 8407f3d:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 8407f44:	00 
 8407f45:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8407f48:	89 04 24             	mov    %eax,(%esp)
 8407f4b:	e8 dc e9 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8407f50:	83 f0 01             	xor    $0x1,%eax
 8407f53:	84 c0                	test   %al,%al
 8407f55:	74 0a                	je     8407f61 <_ZN10DB_LoadEtc10GetUserPvpEP12SIG_LOAD_ETC+0x19f>
 8407f57:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8407f5c:	e9 2a 04 00 00       	jmp    840838b <_ZN10DB_LoadEtc10GetUserPvpEP12SIG_LOAD_ETC+0x5c9>
 8407f61:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8407f64:	83 c0 20             	add    $0x20,%eax
 8407f67:	89 44 24 08          	mov    %eax,0x8(%esp)
 8407f6b:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 8407f72:	00 
 8407f73:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8407f76:	89 04 24             	mov    %eax,(%esp)
 8407f79:	e8 ae e9 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8407f7e:	83 f0 01             	xor    $0x1,%eax
 8407f81:	84 c0                	test   %al,%al
 8407f83:	74 0a                	je     8407f8f <_ZN10DB_LoadEtc10GetUserPvpEP12SIG_LOAD_ETC+0x1cd>
 8407f85:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8407f8a:	e9 fc 03 00 00       	jmp    840838b <_ZN10DB_LoadEtc10GetUserPvpEP12SIG_LOAD_ETC+0x5c9>
 8407f8f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8407f92:	83 c0 24             	add    $0x24,%eax
 8407f95:	89 44 24 08          	mov    %eax,0x8(%esp)
 8407f99:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 8407fa0:	00 
 8407fa1:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8407fa4:	89 04 24             	mov    %eax,(%esp)
 8407fa7:	e8 80 e9 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8407fac:	83 f0 01             	xor    $0x1,%eax
 8407faf:	84 c0                	test   %al,%al
 8407fb1:	74 0a                	je     8407fbd <_ZN10DB_LoadEtc10GetUserPvpEP12SIG_LOAD_ETC+0x1fb>
 8407fb3:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8407fb8:	e9 ce 03 00 00       	jmp    840838b <_ZN10DB_LoadEtc10GetUserPvpEP12SIG_LOAD_ETC+0x5c9>
 8407fbd:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8407fc0:	83 c0 28             	add    $0x28,%eax
 8407fc3:	89 44 24 08          	mov    %eax,0x8(%esp)
 8407fc7:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 8407fce:	00 
 8407fcf:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8407fd2:	89 04 24             	mov    %eax,(%esp)
 8407fd5:	e8 52 e9 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8407fda:	83 f0 01             	xor    $0x1,%eax
 8407fdd:	84 c0                	test   %al,%al
 8407fdf:	74 0a                	je     8407feb <_ZN10DB_LoadEtc10GetUserPvpEP12SIG_LOAD_ETC+0x229>
 8407fe1:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8407fe6:	e9 a0 03 00 00       	jmp    840838b <_ZN10DB_LoadEtc10GetUserPvpEP12SIG_LOAD_ETC+0x5c9>
 8407feb:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8407fee:	83 c0 2c             	add    $0x2c,%eax
 8407ff1:	89 44 24 08          	mov    %eax,0x8(%esp)
 8407ff5:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 8407ffc:	00 
 8407ffd:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8408000:	89 04 24             	mov    %eax,(%esp)
 8408003:	e8 24 e9 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8408008:	83 f0 01             	xor    $0x1,%eax
 840800b:	84 c0                	test   %al,%al
 840800d:	74 0a                	je     8408019 <_ZN10DB_LoadEtc10GetUserPvpEP12SIG_LOAD_ETC+0x257>
 840800f:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8408014:	e9 72 03 00 00       	jmp    840838b <_ZN10DB_LoadEtc10GetUserPvpEP12SIG_LOAD_ETC+0x5c9>
 8408019:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840801c:	83 c0 30             	add    $0x30,%eax
 840801f:	89 44 24 08          	mov    %eax,0x8(%esp)
 8408023:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 840802a:	00 
 840802b:	8b 45 e8             	mov    -0x18(%ebp),%eax
 840802e:	89 04 24             	mov    %eax,(%esp)
 8408031:	e8 f6 e8 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8408036:	83 f0 01             	xor    $0x1,%eax
 8408039:	84 c0                	test   %al,%al
 840803b:	74 0a                	je     8408047 <_ZN10DB_LoadEtc10GetUserPvpEP12SIG_LOAD_ETC+0x285>
 840803d:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8408042:	e9 44 03 00 00       	jmp    840838b <_ZN10DB_LoadEtc10GetUserPvpEP12SIG_LOAD_ETC+0x5c9>
 8408047:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840804a:	83 c0 34             	add    $0x34,%eax
 840804d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8408051:	c7 44 24 04 0b 00 00 	movl   $0xb,0x4(%esp)
 8408058:	00 
 8408059:	8b 45 e8             	mov    -0x18(%ebp),%eax
 840805c:	89 04 24             	mov    %eax,(%esp)
 840805f:	e8 c8 e8 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8408064:	83 f0 01             	xor    $0x1,%eax
 8408067:	84 c0                	test   %al,%al
 8408069:	74 0a                	je     8408075 <_ZN10DB_LoadEtc10GetUserPvpEP12SIG_LOAD_ETC+0x2b3>
 840806b:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8408070:	e9 16 03 00 00       	jmp    840838b <_ZN10DB_LoadEtc10GetUserPvpEP12SIG_LOAD_ETC+0x5c9>
 8408075:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8408078:	83 c0 38             	add    $0x38,%eax
 840807b:	89 44 24 08          	mov    %eax,0x8(%esp)
 840807f:	c7 44 24 04 0c 00 00 	movl   $0xc,0x4(%esp)
 8408086:	00 
 8408087:	8b 45 e8             	mov    -0x18(%ebp),%eax
 840808a:	89 04 24             	mov    %eax,(%esp)
 840808d:	e8 9a e8 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8408092:	83 f0 01             	xor    $0x1,%eax
 8408095:	84 c0                	test   %al,%al
 8408097:	74 0a                	je     84080a3 <_ZN10DB_LoadEtc10GetUserPvpEP12SIG_LOAD_ETC+0x2e1>
 8408099:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 840809e:	e9 e8 02 00 00       	jmp    840838b <_ZN10DB_LoadEtc10GetUserPvpEP12SIG_LOAD_ETC+0x5c9>
 84080a3:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84080a6:	83 c0 3c             	add    $0x3c,%eax
 84080a9:	89 44 24 08          	mov    %eax,0x8(%esp)
 84080ad:	c7 44 24 04 0d 00 00 	movl   $0xd,0x4(%esp)
 84080b4:	00 
 84080b5:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84080b8:	89 04 24             	mov    %eax,(%esp)
 84080bb:	e8 6c e8 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 84080c0:	83 f0 01             	xor    $0x1,%eax
 84080c3:	84 c0                	test   %al,%al
 84080c5:	74 0a                	je     84080d1 <_ZN10DB_LoadEtc10GetUserPvpEP12SIG_LOAD_ETC+0x30f>
 84080c7:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 84080cc:	e9 ba 02 00 00       	jmp    840838b <_ZN10DB_LoadEtc10GetUserPvpEP12SIG_LOAD_ETC+0x5c9>
 84080d1:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84080d4:	83 c0 40             	add    $0x40,%eax
 84080d7:	89 44 24 08          	mov    %eax,0x8(%esp)
 84080db:	c7 44 24 04 0e 00 00 	movl   $0xe,0x4(%esp)
 84080e2:	00 
 84080e3:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84080e6:	89 04 24             	mov    %eax,(%esp)
 84080e9:	e8 3e e8 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 84080ee:	83 f0 01             	xor    $0x1,%eax
 84080f1:	84 c0                	test   %al,%al
 84080f3:	74 0a                	je     84080ff <_ZN10DB_LoadEtc10GetUserPvpEP12SIG_LOAD_ETC+0x33d>
 84080f5:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 84080fa:	e9 8c 02 00 00       	jmp    840838b <_ZN10DB_LoadEtc10GetUserPvpEP12SIG_LOAD_ETC+0x5c9>
 84080ff:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8408102:	83 c0 44             	add    $0x44,%eax
 8408105:	89 44 24 08          	mov    %eax,0x8(%esp)
 8408109:	c7 44 24 04 0f 00 00 	movl   $0xf,0x4(%esp)
 8408110:	00 
 8408111:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8408114:	89 04 24             	mov    %eax,(%esp)
 8408117:	e8 10 e8 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 840811c:	83 f0 01             	xor    $0x1,%eax
 840811f:	84 c0                	test   %al,%al
 8408121:	74 0a                	je     840812d <_ZN10DB_LoadEtc10GetUserPvpEP12SIG_LOAD_ETC+0x36b>
 8408123:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8408128:	e9 5e 02 00 00       	jmp    840838b <_ZN10DB_LoadEtc10GetUserPvpEP12SIG_LOAD_ETC+0x5c9>
 840812d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8408130:	83 c0 48             	add    $0x48,%eax
 8408133:	89 44 24 08          	mov    %eax,0x8(%esp)
 8408137:	c7 44 24 04 10 00 00 	movl   $0x10,0x4(%esp)
 840813e:	00 
 840813f:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8408142:	89 04 24             	mov    %eax,(%esp)
 8408145:	e8 e2 e7 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 840814a:	83 f0 01             	xor    $0x1,%eax
 840814d:	84 c0                	test   %al,%al
 840814f:	74 0a                	je     840815b <_ZN10DB_LoadEtc10GetUserPvpEP12SIG_LOAD_ETC+0x399>
 8408151:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8408156:	e9 30 02 00 00       	jmp    840838b <_ZN10DB_LoadEtc10GetUserPvpEP12SIG_LOAD_ETC+0x5c9>
 840815b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840815e:	83 c0 4c             	add    $0x4c,%eax
 8408161:	89 44 24 08          	mov    %eax,0x8(%esp)
 8408165:	c7 44 24 04 11 00 00 	movl   $0x11,0x4(%esp)
 840816c:	00 
 840816d:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8408170:	89 04 24             	mov    %eax,(%esp)
 8408173:	e8 b4 e7 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8408178:	83 f0 01             	xor    $0x1,%eax
 840817b:	84 c0                	test   %al,%al
 840817d:	74 0a                	je     8408189 <_ZN10DB_LoadEtc10GetUserPvpEP12SIG_LOAD_ETC+0x3c7>
 840817f:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8408184:	e9 02 02 00 00       	jmp    840838b <_ZN10DB_LoadEtc10GetUserPvpEP12SIG_LOAD_ETC+0x5c9>
 8408189:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840818c:	83 c0 50             	add    $0x50,%eax
 840818f:	89 44 24 08          	mov    %eax,0x8(%esp)
 8408193:	c7 44 24 04 12 00 00 	movl   $0x12,0x4(%esp)
 840819a:	00 
 840819b:	8b 45 e8             	mov    -0x18(%ebp),%eax
 840819e:	89 04 24             	mov    %eax,(%esp)
 84081a1:	e8 86 e7 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 84081a6:	83 f0 01             	xor    $0x1,%eax
 84081a9:	84 c0                	test   %al,%al
 84081ab:	74 0a                	je     84081b7 <_ZN10DB_LoadEtc10GetUserPvpEP12SIG_LOAD_ETC+0x3f5>
 84081ad:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 84081b2:	e9 d4 01 00 00       	jmp    840838b <_ZN10DB_LoadEtc10GetUserPvpEP12SIG_LOAD_ETC+0x5c9>
 84081b7:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84081ba:	83 c0 54             	add    $0x54,%eax
 84081bd:	89 44 24 08          	mov    %eax,0x8(%esp)
 84081c1:	c7 44 24 04 13 00 00 	movl   $0x13,0x4(%esp)
 84081c8:	00 
 84081c9:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84081cc:	89 04 24             	mov    %eax,(%esp)
 84081cf:	e8 58 e7 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 84081d4:	83 f0 01             	xor    $0x1,%eax
 84081d7:	84 c0                	test   %al,%al
 84081d9:	74 0a                	je     84081e5 <_ZN10DB_LoadEtc10GetUserPvpEP12SIG_LOAD_ETC+0x423>
 84081db:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 84081e0:	e9 a6 01 00 00       	jmp    840838b <_ZN10DB_LoadEtc10GetUserPvpEP12SIG_LOAD_ETC+0x5c9>
 84081e5:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84081e8:	83 c0 58             	add    $0x58,%eax
 84081eb:	89 44 24 08          	mov    %eax,0x8(%esp)
 84081ef:	c7 44 24 04 14 00 00 	movl   $0x14,0x4(%esp)
 84081f6:	00 
 84081f7:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84081fa:	89 04 24             	mov    %eax,(%esp)
 84081fd:	e8 2a e7 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8408202:	83 f0 01             	xor    $0x1,%eax
 8408205:	84 c0                	test   %al,%al
 8408207:	74 0a                	je     8408213 <_ZN10DB_LoadEtc10GetUserPvpEP12SIG_LOAD_ETC+0x451>
 8408209:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 840820e:	e9 78 01 00 00       	jmp    840838b <_ZN10DB_LoadEtc10GetUserPvpEP12SIG_LOAD_ETC+0x5c9>
 8408213:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8408216:	83 c0 5c             	add    $0x5c,%eax
 8408219:	89 44 24 08          	mov    %eax,0x8(%esp)
 840821d:	c7 44 24 04 15 00 00 	movl   $0x15,0x4(%esp)
 8408224:	00 
 8408225:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8408228:	89 04 24             	mov    %eax,(%esp)
 840822b:	e8 fc e6 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8408230:	83 f0 01             	xor    $0x1,%eax
 8408233:	84 c0                	test   %al,%al
 8408235:	74 0a                	je     8408241 <_ZN10DB_LoadEtc10GetUserPvpEP12SIG_LOAD_ETC+0x47f>
 8408237:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 840823c:	e9 4a 01 00 00       	jmp    840838b <_ZN10DB_LoadEtc10GetUserPvpEP12SIG_LOAD_ETC+0x5c9>
 8408241:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8408248:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 840824b:	89 44 24 08          	mov    %eax,0x8(%esp)
 840824f:	c7 44 24 04 16 00 00 	movl   $0x16,0x4(%esp)
 8408256:	00 
 8408257:	8b 45 e8             	mov    -0x18(%ebp),%eax
 840825a:	89 04 24             	mov    %eax,(%esp)
 840825d:	e8 ca e6 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8408262:	83 f0 01             	xor    $0x1,%eax
 8408265:	84 c0                	test   %al,%al
 8408267:	74 0a                	je     8408273 <_ZN10DB_LoadEtc10GetUserPvpEP12SIG_LOAD_ETC+0x4b1>
 8408269:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 840826e:	e9 18 01 00 00       	jmp    840838b <_ZN10DB_LoadEtc10GetUserPvpEP12SIG_LOAD_ETC+0x5c9>
 8408273:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8408276:	83 c0 64             	add    $0x64,%eax
 8408279:	89 44 24 08          	mov    %eax,0x8(%esp)
 840827d:	c7 44 24 04 17 00 00 	movl   $0x17,0x4(%esp)
 8408284:	00 
 8408285:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8408288:	89 04 24             	mov    %eax,(%esp)
 840828b:	e8 62 a0 cd ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 8408290:	83 f0 01             	xor    $0x1,%eax
 8408293:	84 c0                	test   %al,%al
 8408295:	74 0a                	je     84082a1 <_ZN10DB_LoadEtc10GetUserPvpEP12SIG_LOAD_ETC+0x4df>
 8408297:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 840829c:	e9 ea 00 00 00       	jmp    840838b <_ZN10DB_LoadEtc10GetUserPvpEP12SIG_LOAD_ETC+0x5c9>
 84082a1:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84082a4:	83 c0 60             	add    $0x60,%eax
 84082a7:	89 44 24 08          	mov    %eax,0x8(%esp)
 84082ab:	c7 44 24 04 18 00 00 	movl   $0x18,0x4(%esp)
 84082b2:	00 
 84082b3:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84082b6:	89 04 24             	mov    %eax,(%esp)
 84082b9:	e8 34 a0 cd ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 84082be:	83 f0 01             	xor    $0x1,%eax
 84082c1:	84 c0                	test   %al,%al
 84082c3:	74 0a                	je     84082cf <_ZN10DB_LoadEtc10GetUserPvpEP12SIG_LOAD_ETC+0x50d>
 84082c5:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 84082ca:	e9 bc 00 00 00       	jmp    840838b <_ZN10DB_LoadEtc10GetUserPvpEP12SIG_LOAD_ETC+0x5c9>
 84082cf:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 84082d6:	e8 c3 39 cc ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 84082db:	89 45 e0             	mov    %eax,-0x20(%ebp)
 84082de:	8d 45 b0             	lea    -0x50(%ebp),%eax
 84082e1:	89 44 24 04          	mov    %eax,0x4(%esp)
 84082e5:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84082e8:	89 04 24             	mov    %eax,(%esp)
 84082eb:	e8 70 60 c7 ff       	call   807e360 <localtime_r@plt>
 84082f0:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84082f3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84082f6:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 84082fd:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8408300:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 8408307:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840830a:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8408310:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8408313:	89 04 24             	mov    %eax,(%esp)
 8408316:	e8 05 65 c7 ff       	call   807e820 <mktime@plt>
 840831b:	8b 55 ec             	mov    -0x14(%ebp),%edx
 840831e:	89 42 68             	mov    %eax,0x68(%edx)
 8408321:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8408324:	8b 50 68             	mov    0x68(%eax),%edx
 8408327:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840832a:	39 c2                	cmp    %eax,%edx
 840832c:	7e 0a                	jle    8408338 <_ZN10DB_LoadEtc10GetUserPvpEP12SIG_LOAD_ETC+0x576>
 840832e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8408331:	c7 40 60 00 00 00 00 	movl   $0x0,0x60(%eax)
 8408338:	8d 45 dc             	lea    -0x24(%ebp),%eax
 840833b:	89 44 24 08          	mov    %eax,0x8(%esp)
 840833f:	c7 44 24 04 19 00 00 	movl   $0x19,0x4(%esp)
 8408346:	00 
 8408347:	8b 45 e8             	mov    -0x18(%ebp),%eax
 840834a:	89 04 24             	mov    %eax,(%esp)
 840834d:	e8 da e5 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8408352:	83 f0 01             	xor    $0x1,%eax
 8408355:	84 c0                	test   %al,%al
 8408357:	74 07                	je     8408360 <_ZN10DB_LoadEtc10GetUserPvpEP12SIG_LOAD_ETC+0x59e>
 8408359:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 840835e:	eb 2b                	jmp    840838b <_ZN10DB_LoadEtc10GetUserPvpEP12SIG_LOAD_ETC+0x5c9>
 8408360:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8408367:	e8 32 39 cc ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 840836c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 840836f:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8408372:	05 80 51 01 00       	add    $0x15180,%eax
 8408377:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 840837a:	7d 0a                	jge    8408386 <_ZN10DB_LoadEtc10GetUserPvpEP12SIG_LOAD_ETC+0x5c4>
 840837c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840837f:	c7 40 5c 00 00 00 00 	movl   $0x0,0x5c(%eax)
 8408386:	b8 00 00 00 00       	mov    $0x0,%eax
 840838b:	c9                   	leave
 840838c:	c3                   	ret
 840838d:	90                   	nop

```

```c
// DB_LoadEtc::GetUserPvp @ 0x8407dc2

/* DB_LoadEtc::GetUserPvp(SIG_LOAD_ETC*) */

undefined4 __thiscall DB_LoadEtc::GetUserPvp(DB_LoadEtc *this,SIG_LOAD_ETC *param_1)

{
  char cVar1;
  undefined4 uVar2;
  time_t tVar3;
  int iVar4;
  tm local_54;
  int local_28;
  time_t local_24;
  int local_20;
  MySQL *local_1c;
  SIG_LOAD_ETC *local_18;
  tm *local_14;
  
  local_1c = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  MySQL::set_query(local_1c,
                   "seLect win,lose,pvp_point,pvp_grade,avg_kill_count,avg_buf_count,avg_debuf_count,avg_heal_count,avg_counter_count,avg_back_atk_count,avg_union_hit_count,avg_overkill_count,avg_combo_count,avg_aerial_count,avg_attacked_count,avg_deal_damage,avg_technic,avg_style,avg_hit_penalty,pvp_count,win_point,pvp_grade_ext,unix_timestamp(last_play_time),play_count,play_time,unix_timestamp(pvp_grade_ext_update_time) from pvp_result where charac_no=%u"
                   ,*(undefined4 *)(param_1 + 4));
  cVar1 = MySQL::exec(local_1c,true);
  if (cVar1 == '\x01') {
    cVar1 = MySQL::fetch(local_1c);
    if (cVar1 == '\x01') {
      local_18 = param_1 + 0x340;
      cVar1 = MySQL::get_int(local_1c,0,(int *)local_18);
      if (cVar1 == '\x01') {
        cVar1 = MySQL::get_int(local_1c,1,(int *)(local_18 + 4));
        if (cVar1 == '\x01') {
          cVar1 = MySQL::get_int(local_1c,2,(int *)(local_18 + 8));
          if (cVar1 == '\x01') {
            cVar1 = MySQL::get_int(local_1c,3,(int *)(local_18 + 0x14));
            if (cVar1 == '\x01') {
              cVar1 = MySQL::get_int(local_1c,4,(int *)(local_18 + 0x18));
              if (cVar1 == '\x01') {
                cVar1 = MySQL::get_int(local_1c,5,(int *)(local_18 + 0x1c));
                if (cVar1 == '\x01') {
                  cVar1 = MySQL::get_int(local_1c,6,(int *)(local_18 + 0x20));
                  if (cVar1 == '\x01') {
                    cVar1 = MySQL::get_int(local_1c,7,(int *)(local_18 + 0x24));
                    if (cVar1 == '\x01') {
                      cVar1 = MySQL::get_int(local_1c,8,(int *)(local_18 + 0x28));
                      if (cVar1 == '\x01') {
                        cVar1 = MySQL::get_int(local_1c,9,(int *)(local_18 + 0x2c));
                        if (cVar1 == '\x01') {
                          cVar1 = MySQL::get_int(local_1c,10,(int *)(local_18 + 0x30));
                          if (cVar1 == '\x01') {
                            cVar1 = MySQL::get_int(local_1c,0xb,(int *)(local_18 + 0x34));
                            if (cVar1 == '\x01') {
                              cVar1 = MySQL::get_int(local_1c,0xc,(int *)(local_18 + 0x38));
                              if (cVar1 == '\x01') {
                                cVar1 = MySQL::get_int(local_1c,0xd,(int *)(local_18 + 0x3c));
                                if (cVar1 == '\x01') {
                                  cVar1 = MySQL::get_int(local_1c,0xe,(int *)(local_18 + 0x40));
                                  if (cVar1 == '\x01') {
                                    cVar1 = MySQL::get_int(local_1c,0xf,(int *)(local_18 + 0x44));
                                    if (cVar1 == '\x01') {
                                      cVar1 = MySQL::get_int(local_1c,0x10,(int *)(local_18 + 0x48))
                                      ;
                                      if (cVar1 == '\x01') {
                                        cVar1 = MySQL::get_int(local_1c,0x11,
                                                               (int *)(local_18 + 0x4c));
                                        if (cVar1 == '\x01') {
                                          cVar1 = MySQL::get_int(local_1c,0x12,
                                                                 (int *)(local_18 + 0x50));
                                          if (cVar1 == '\x01') {
                                            cVar1 = MySQL::get_int(local_1c,0x13,
                                                                   (int *)(local_18 + 0x54));
                                            if (cVar1 == '\x01') {
                                              cVar1 = MySQL::get_int(local_1c,0x14,
                                                                     (int *)(local_18 + 0x58));
                                              if (cVar1 == '\x01') {
                                                cVar1 = MySQL::get_int(local_1c,0x15,
                                                                       (int *)(local_18 + 0x5c));
                                                if (cVar1 == '\x01') {
                                                  local_20 = 0;
                                                  cVar1 = MySQL::get_int(local_1c,0x16,&local_20);
                                                  if (cVar1 == '\x01') {
                                                    cVar1 = MySQL::get_uint(local_1c,0x17,
                                                                            (uint *)(local_18 + 100)
                                                                           );
                                                    if (cVar1 == '\x01') {
                                                      cVar1 = MySQL::get_uint(local_1c,0x18,
                                                                              (uint *)(local_18 +
                                                                                      0x60));
                                                      if (cVar1 == '\x01') {
                                                        local_24 = CSystemTime::getCurSec
                                                                             ((CSystemTime *)
                                                                              GlobalData::
                                                                              s_systemTime_);
                                                        local_14 = localtime_r(&local_24,&local_54);
                                                        local_14->tm_hour = 0;
                                                        local_14->tm_min = 0;
                                                        local_14->tm_sec = 0;
                                                        tVar3 = mktime(local_14);
                                                        *(time_t *)(local_18 + 0x68) = tVar3;
                                                        if (local_20 < *(int *)(local_18 + 0x68)) {
                                                          *(int *)(local_18 + 0x60) = 0;
                                                        }
                                                        cVar1 = MySQL::get_int(local_1c,0x19,
                                                                               &local_28);
                                                        if (cVar1 == '\x01') {
                                                          iVar4 = CSystemTime::getCurSec
                                                                            ((CSystemTime *)
                                                                             GlobalData::
                                                                             s_systemTime_);
                                                          if (local_28 + 0x15180 < iVar4) {
                                                            *(int *)(local_18 + 0x5c) = 0;
                                                          }
                                                          uVar2 = 0;
                                                        }
                                                        else {
                                                          uVar2 = 0xffffffff;
                                                        }
                                                      }
                                                      else {
                                                        uVar2 = 0xffffffff;
                                                      }
                                                    }
                                                    else {
                                                      uVar2 = 0xffffffff;
                                                    }
                                                  }
                                                  else {
                                                    uVar2 = 0xffffffff;
                                                  }
                                                }
                                                else {
                                                  uVar2 = 0xffffffff;
                                                }
                                              }
                                              else {
                                                uVar2 = 0xffffffff;
                                              }
                                            }
                                            else {
                                              uVar2 = 0xffffffff;
                                            }
                                          }
                                          else {
                                            uVar2 = 0xffffffff;
                                          }
                                        }
                                        else {
                                          uVar2 = 0xffffffff;
                                        }
                                      }
                                      else {
                                        uVar2 = 0xffffffff;
                                      }
                                    }
                                    else {
                                      uVar2 = 0xffffffff;
                                    }
                                  }
                                  else {
                                    uVar2 = 0xffffffff;
                                  }
                                }
                                else {
                                  uVar2 = 0xffffffff;
                                }
                              }
                              else {
                                uVar2 = 0xffffffff;
                              }
                            }
                            else {
                              uVar2 = 0xffffffff;
                            }
                          }
                          else {
                            uVar2 = 0xffffffff;
                          }
                        }
                        else {
                          uVar2 = 0xffffffff;
                        }
                      }
                      else {
                        uVar2 = 0xffffffff;
                      }
                    }
                    else {
                      uVar2 = 0xffffffff;
                    }
                  }
                  else {
                    uVar2 = 0xffffffff;
                  }
                }
                else {
                  uVar2 = 0xffffffff;
                }
              }
              else {
                uVar2 = 0xffffffff;
              }
            }
            else {
              uVar2 = 0xffffffff;
            }
          }
          else {
            uVar2 = 0xffffffff;
          }
        }
        else {
          uVar2 = 0xffffffff;
        }
      }
      else {
        uVar2 = 0xffffffff;
      }
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

```

---

## GetUserPvpBase

```asm
// === 08407db4 DB_LoadEtc::GetUserPvpBase  [0x08407db4-0x8407dc1] ===
 8407db4:	55                   	push   %ebp
 8407db5:	89 e5                	mov    %esp,%ebp
 8407db7:	83 ec 10             	sub    $0x10,%esp
 8407dba:	b8 01 00 00 00       	mov    $0x1,%eax
 8407dbf:	c9                   	leave
 8407dc0:	c3                   	ret
 8407dc1:	90                   	nop

```

```c
// DB_LoadEtc::GetUserPvpBase @ 0x8407db4

/* DB_LoadEtc::GetUserPvpBase(SIG_LOAD_ETC*) */

undefined4 DB_LoadEtc::GetUserPvpBase(SIG_LOAD_ETC *param_1)

{
  return 1;
}

```

---

## GetUserRecord

```asm
// === 084075c4 DB_LoadEtc::GetUserRecord  [0x084075c4-0x84075d1] ===
 84075c4:	55                   	push   %ebp
 84075c5:	89 e5                	mov    %esp,%ebp
 84075c7:	83 ec 10             	sub    $0x10,%esp
 84075ca:	b8 01 00 00 00       	mov    $0x1,%eax
 84075cf:	c9                   	leave
 84075d0:	c3                   	ret
 84075d1:	90                   	nop

```

```c
// DB_LoadEtc::GetUserRecord @ 0x84075c4

/* DB_LoadEtc::GetUserRecord(SIG_LOAD_ETC*) */

undefined4 DB_LoadEtc::GetUserRecord(SIG_LOAD_ETC *param_1)

{
  return 1;
}

```

---

## GetUserSkill

```asm
// === 084075d2 DB_LoadEtc::GetUserSkill  [0x084075d2-0x8407db3] ===
 84075d2:	55                   	push   %ebp
 84075d3:	89 e5                	mov    %esp,%ebp
 84075d5:	53                   	push   %ebx
 84075d6:	81 ec d4 00 00 00    	sub    $0xd4,%esp
 84075dc:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 84075e1:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84075e8:	00 
 84075e9:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 84075f0:	00 
 84075f1:	89 04 24             	mov    %eax,(%esp)
 84075f4:	e8 45 dc fe ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 84075f9:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84075fc:	8b 45 0c             	mov    0xc(%ebp),%eax
 84075ff:	8b 58 04             	mov    0x4(%eax),%ebx
 8407602:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8407609:	e8 b8 47 ff ff       	call   83fbdc6 <_Z20get_skill_table_nameb>
 840760e:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8407612:	89 44 24 08          	mov    %eax,0x8(%esp)
 8407616:	c7 44 24 04 18 49 c4 	movl   $0x8c44918,0x4(%esp)
 840761d:	08 
 840761e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8407621:	89 04 24             	mov    %eax,(%esp)
 8407624:	e8 97 cb fe ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8407629:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8407630:	00 
 8407631:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8407634:	89 04 24             	mov    %eax,(%esp)
 8407637:	e8 ea cc fe ff       	call   83f4326 <_ZN5MySQL4execEb>
 840763c:	88 45 eb             	mov    %al,-0x15(%ebp)
 840763f:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 8407643:	83 f0 01             	xor    $0x1,%eax
 8407646:	84 c0                	test   %al,%al
 8407648:	74 50                	je     840769a <_ZN10DB_LoadEtc12GetUserSkillEP12SIG_LOAD_ETC+0xc8>
 840764a:	8b 45 0c             	mov    0xc(%ebp),%eax
 840764d:	8b 58 04             	mov    0x4(%eax),%ebx
 8407650:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8407657:	00 
 8407658:	c7 44 24 08 50 1d 00 	movl   $0x1d50,0x8(%esp)
 840765f:	00 
 8407660:	c7 44 24 04 40 d4 c5 	movl   $0x8c5d440,0x4(%esp)
 8407667:	08 
 8407668:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 840766e:	89 04 24             	mov    %eax,(%esp)
 8407671:	e8 a2 80 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8407676:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 840767a:	c7 44 24 04 f0 49 c4 	movl   $0x8c449f0,0x4(%esp)
 8407681:	08 
 8407682:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 8407688:	89 04 24             	mov    %eax,(%esp)
 840768b:	e8 f8 80 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8407690:	b8 00 00 00 00       	mov    $0x0,%eax
 8407695:	e9 10 07 00 00       	jmp    8407daa <_ZN10DB_LoadEtc12GetUserSkillEP12SIG_LOAD_ETC+0x7d8>
 840769a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840769d:	89 04 24             	mov    %eax,(%esp)
 84076a0:	e8 c7 ac cd ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 84076a5:	85 c0                	test   %eax,%eax
 84076a7:	75 18                	jne    84076c1 <_ZN10DB_LoadEtc12GetUserSkillEP12SIG_LOAD_ETC+0xef>
 84076a9:	e8 f9 2c cd ff       	call   80da3a7 <_Z11G_GameWorldv>
 84076ae:	89 04 24             	mov    %eax,(%esp)
 84076b1:	e8 68 cd e2 ff       	call   823441e <_ZNK9GameWorld20IsPvPSkilTreeChannelEv>
 84076b6:	84 c0                	test   %al,%al
 84076b8:	74 07                	je     84076c1 <_ZN10DB_LoadEtc12GetUserSkillEP12SIG_LOAD_ETC+0xef>
 84076ba:	b8 01 00 00 00       	mov    $0x1,%eax
 84076bf:	eb 05                	jmp    84076c6 <_ZN10DB_LoadEtc12GetUserSkillEP12SIG_LOAD_ETC+0xf4>
 84076c1:	b8 00 00 00 00       	mov    $0x0,%eax
 84076c6:	84 c0                	test   %al,%al
 84076c8:	0f 84 b2 00 00 00    	je     8407780 <_ZN10DB_LoadEtc12GetUserSkillEP12SIG_LOAD_ETC+0x1ae>
 84076ce:	8b 45 0c             	mov    0xc(%ebp),%eax
 84076d1:	8b 58 04             	mov    0x4(%eax),%ebx
 84076d4:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 84076db:	e8 e6 46 ff ff       	call   83fbdc6 <_Z20get_skill_table_nameb>
 84076e0:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84076e4:	89 44 24 08          	mov    %eax,0x8(%esp)
 84076e8:	c7 44 24 04 28 4a c4 	movl   $0x8c44a28,0x4(%esp)
 84076ef:	08 
 84076f0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84076f3:	89 04 24             	mov    %eax,(%esp)
 84076f6:	e8 c5 ca fe ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84076fb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8407702:	00 
 8407703:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8407706:	89 04 24             	mov    %eax,(%esp)
 8407709:	e8 18 cc fe ff       	call   83f4326 <_ZN5MySQL4execEb>
 840770e:	88 45 eb             	mov    %al,-0x15(%ebp)
 8407711:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 8407715:	83 f0 01             	xor    $0x1,%eax
 8407718:	84 c0                	test   %al,%al
 840771a:	74 50                	je     840776c <_ZN10DB_LoadEtc12GetUserSkillEP12SIG_LOAD_ETC+0x19a>
 840771c:	8b 45 0c             	mov    0xc(%ebp),%eax
 840771f:	8b 58 04             	mov    0x4(%eax),%ebx
 8407722:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8407729:	00 
 840772a:	c7 44 24 08 5d 1d 00 	movl   $0x1d5d,0x8(%esp)
 8407731:	00 
 8407732:	c7 44 24 04 40 d4 c5 	movl   $0x8c5d440,0x4(%esp)
 8407739:	08 
 840773a:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 8407740:	89 04 24             	mov    %eax,(%esp)
 8407743:	e8 d0 7f 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8407748:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 840774c:	c7 44 24 04 50 4a c4 	movl   $0x8c44a50,0x4(%esp)
 8407753:	08 
 8407754:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 840775a:	89 04 24             	mov    %eax,(%esp)
 840775d:	e8 26 80 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8407762:	b8 00 00 00 00       	mov    $0x0,%eax
 8407767:	e9 3e 06 00 00       	jmp    8407daa <_ZN10DB_LoadEtc12GetUserSkillEP12SIG_LOAD_ETC+0x7d8>
 840776c:	8b 45 0c             	mov    0xc(%ebp),%eax
 840776f:	c6 80 d4 cd 00 00 01 	movb   $0x1,0xcdd4(%eax)
 8407776:	b8 01 00 00 00       	mov    $0x1,%eax
 840777b:	e9 2a 06 00 00       	jmp    8407daa <_ZN10DB_LoadEtc12GetUserSkillEP12SIG_LOAD_ETC+0x7d8>
 8407780:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8407783:	89 04 24             	mov    %eax,(%esp)
 8407786:	e8 31 cd fe ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 840778b:	88 45 eb             	mov    %al,-0x15(%ebp)
 840778e:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 8407792:	83 f0 01             	xor    $0x1,%eax
 8407795:	84 c0                	test   %al,%al
 8407797:	74 50                	je     84077e9 <_ZN10DB_LoadEtc12GetUserSkillEP12SIG_LOAD_ETC+0x217>
 8407799:	8b 45 0c             	mov    0xc(%ebp),%eax
 840779c:	8b 58 04             	mov    0x4(%eax),%ebx
 840779f:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 84077a6:	00 
 84077a7:	c7 44 24 08 69 1d 00 	movl   $0x1d69,0x8(%esp)
 84077ae:	00 
 84077af:	c7 44 24 04 40 d4 c5 	movl   $0x8c5d440,0x4(%esp)
 84077b6:	08 
 84077b7:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 84077bd:	89 04 24             	mov    %eax,(%esp)
 84077c0:	e8 53 7f 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84077c5:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84077c9:	c7 44 24 04 90 4a c4 	movl   $0x8c44a90,0x4(%esp)
 84077d0:	08 
 84077d1:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 84077d7:	89 04 24             	mov    %eax,(%esp)
 84077da:	e8 a9 7f 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84077df:	b8 00 00 00 00       	mov    $0x0,%eax
 84077e4:	e9 c1 05 00 00       	jmp    8407daa <_ZN10DB_LoadEtc12GetUserSkillEP12SIG_LOAD_ETC+0x7d8>
 84077e9:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 84077f0:	8b 45 0c             	mov    0xc(%ebp),%eax
 84077f3:	8d 90 c8 c9 00 00    	lea    0xc9c8(%eax),%edx
 84077f9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84077fc:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8407800:	89 54 24 08          	mov    %edx,0x8(%esp)
 8407804:	89 44 24 04          	mov    %eax,0x4(%esp)
 8407808:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840780b:	89 04 24             	mov    %eax,(%esp)
 840780e:	e8 df aa cd ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 8407813:	88 45 eb             	mov    %al,-0x15(%ebp)
 8407816:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 840781a:	83 f0 01             	xor    $0x1,%eax
 840781d:	84 c0                	test   %al,%al
 840781f:	74 4a                	je     840786b <_ZN10DB_LoadEtc12GetUserSkillEP12SIG_LOAD_ETC+0x299>
 8407821:	8b 45 0c             	mov    0xc(%ebp),%eax
 8407824:	8b 58 04             	mov    0x4(%eax),%ebx
 8407827:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 840782e:	00 
 840782f:	c7 44 24 08 71 1d 00 	movl   $0x1d71,0x8(%esp)
 8407836:	00 
 8407837:	c7 44 24 04 40 d4 c5 	movl   $0x8c5d440,0x4(%esp)
 840783e:	08 
 840783f:	8d 45 88             	lea    -0x78(%ebp),%eax
 8407842:	89 04 24             	mov    %eax,(%esp)
 8407845:	e8 ce 7e 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 840784a:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 840784e:	c7 44 24 04 c8 4a c4 	movl   $0x8c44ac8,0x4(%esp)
 8407855:	08 
 8407856:	8d 45 88             	lea    -0x78(%ebp),%eax
 8407859:	89 04 24             	mov    %eax,(%esp)
 840785c:	e8 27 7f 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8407861:	b8 00 00 00 00       	mov    $0x0,%eax
 8407866:	e9 3f 05 00 00       	jmp    8407daa <_ZN10DB_LoadEtc12GetUserSkillEP12SIG_LOAD_ETC+0x7d8>
 840786b:	8b 45 0c             	mov    0xc(%ebp),%eax
 840786e:	05 cc c9 00 00       	add    $0xc9cc,%eax
 8407873:	89 c2                	mov    %eax,%edx
 8407875:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8407878:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 840787c:	c7 44 24 10 02 00 00 	movl   $0x2,0x10(%esp)
 8407883:	00 
 8407884:	c7 44 24 0c 98 01 00 	movl   $0x198,0xc(%esp)
 840788b:	00 
 840788c:	89 54 24 08          	mov    %edx,0x8(%esp)
 8407890:	89 44 24 04          	mov    %eax,0x4(%esp)
 8407894:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8407897:	89 04 24             	mov    %eax,(%esp)
 840789a:	e8 da 43 ff ff       	call   83fbc79 <_Z24get_compressed_blob_dataP5MySQLiPcii>
 840789f:	83 f0 01             	xor    $0x1,%eax
 84078a2:	84 c0                	test   %al,%al
 84078a4:	74 0a                	je     84078b0 <_ZN10DB_LoadEtc12GetUserSkillEP12SIG_LOAD_ETC+0x2de>
 84078a6:	b8 00 00 00 00       	mov    $0x0,%eax
 84078ab:	e9 fa 04 00 00       	jmp    8407daa <_ZN10DB_LoadEtc12GetUserSkillEP12SIG_LOAD_ETC+0x7d8>
 84078b0:	8b 45 0c             	mov    0xc(%ebp),%eax
 84078b3:	8d 90 64 cb 00 00    	lea    0xcb64(%eax),%edx
 84078b9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84078bc:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 84078c0:	89 54 24 08          	mov    %edx,0x8(%esp)
 84078c4:	89 44 24 04          	mov    %eax,0x4(%esp)
 84078c8:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84078cb:	89 04 24             	mov    %eax,(%esp)
 84078ce:	e8 1f aa cd ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 84078d3:	88 45 eb             	mov    %al,-0x15(%ebp)
 84078d6:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 84078da:	83 f0 01             	xor    $0x1,%eax
 84078dd:	84 c0                	test   %al,%al
 84078df:	74 4a                	je     840792b <_ZN10DB_LoadEtc12GetUserSkillEP12SIG_LOAD_ETC+0x359>
 84078e1:	8b 45 0c             	mov    0xc(%ebp),%eax
 84078e4:	8b 58 04             	mov    0x4(%eax),%ebx
 84078e7:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 84078ee:	00 
 84078ef:	c7 44 24 08 98 1d 00 	movl   $0x1d98,0x8(%esp)
 84078f6:	00 
 84078f7:	c7 44 24 04 40 d4 c5 	movl   $0x8c5d440,0x4(%esp)
 84078fe:	08 
 84078ff:	8d 45 98             	lea    -0x68(%ebp),%eax
 8407902:	89 04 24             	mov    %eax,(%esp)
 8407905:	e8 0e 7e 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 840790a:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 840790e:	c7 44 24 04 00 4b c4 	movl   $0x8c44b00,0x4(%esp)
 8407915:	08 
 8407916:	8d 45 98             	lea    -0x68(%ebp),%eax
 8407919:	89 04 24             	mov    %eax,(%esp)
 840791c:	e8 67 7e 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8407921:	b8 00 00 00 00       	mov    $0x0,%eax
 8407926:	e9 7f 04 00 00       	jmp    8407daa <_ZN10DB_LoadEtc12GetUserSkillEP12SIG_LOAD_ETC+0x7d8>
 840792b:	8b 45 0c             	mov    0xc(%ebp),%eax
 840792e:	05 68 cb 00 00       	add    $0xcb68,%eax
 8407933:	89 c2                	mov    %eax,%edx
 8407935:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8407938:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 840793c:	c7 44 24 10 02 00 00 	movl   $0x2,0x10(%esp)
 8407943:	00 
 8407944:	c7 44 24 0c 98 01 00 	movl   $0x198,0xc(%esp)
 840794b:	00 
 840794c:	89 54 24 08          	mov    %edx,0x8(%esp)
 8407950:	89 44 24 04          	mov    %eax,0x4(%esp)
 8407954:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8407957:	89 04 24             	mov    %eax,(%esp)
 840795a:	e8 1a 43 ff ff       	call   83fbc79 <_Z24get_compressed_blob_dataP5MySQLiPcii>
 840795f:	83 f0 01             	xor    $0x1,%eax
 8407962:	84 c0                	test   %al,%al
 8407964:	74 0a                	je     8407970 <_ZN10DB_LoadEtc12GetUserSkillEP12SIG_LOAD_ETC+0x39e>
 8407966:	b8 00 00 00 00       	mov    $0x0,%eax
 840796b:	e9 3a 04 00 00       	jmp    8407daa <_ZN10DB_LoadEtc12GetUserSkillEP12SIG_LOAD_ETC+0x7d8>
 8407970:	8b 45 0c             	mov    0xc(%ebp),%eax
 8407973:	8d 90 00 cd 00 00    	lea    0xcd00(%eax),%edx
 8407979:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840797c:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8407980:	89 54 24 08          	mov    %edx,0x8(%esp)
 8407984:	89 44 24 04          	mov    %eax,0x4(%esp)
 8407988:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840798b:	89 04 24             	mov    %eax,(%esp)
 840798e:	e8 5f a9 cd ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 8407993:	88 45 eb             	mov    %al,-0x15(%ebp)
 8407996:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 840799a:	83 f0 01             	xor    $0x1,%eax
 840799d:	84 c0                	test   %al,%al
 840799f:	74 4a                	je     84079eb <_ZN10DB_LoadEtc12GetUserSkillEP12SIG_LOAD_ETC+0x419>
 84079a1:	8b 45 0c             	mov    0xc(%ebp),%eax
 84079a4:	8b 58 04             	mov    0x4(%eax),%ebx
 84079a7:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 84079ae:	00 
 84079af:	c7 44 24 08 ac 1d 00 	movl   $0x1dac,0x8(%esp)
 84079b6:	00 
 84079b7:	c7 44 24 04 40 d4 c5 	movl   $0x8c5d440,0x4(%esp)
 84079be:	08 
 84079bf:	8d 45 a8             	lea    -0x58(%ebp),%eax
 84079c2:	89 04 24             	mov    %eax,(%esp)
 84079c5:	e8 4e 7d 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84079ca:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84079ce:	c7 44 24 04 38 4b c4 	movl   $0x8c44b38,0x4(%esp)
 84079d5:	08 
 84079d6:	8d 45 a8             	lea    -0x58(%ebp),%eax
 84079d9:	89 04 24             	mov    %eax,(%esp)
 84079dc:	e8 a7 7d 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84079e1:	b8 00 00 00 00       	mov    $0x0,%eax
 84079e6:	e9 bf 03 00 00       	jmp    8407daa <_ZN10DB_LoadEtc12GetUserSkillEP12SIG_LOAD_ETC+0x7d8>
 84079eb:	8b 45 0c             	mov    0xc(%ebp),%eax
 84079ee:	8d 90 04 cd 00 00    	lea    0xcd04(%eax),%edx
 84079f4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84079f7:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 84079fb:	89 54 24 08          	mov    %edx,0x8(%esp)
 84079ff:	89 44 24 04          	mov    %eax,0x4(%esp)
 8407a03:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8407a06:	89 04 24             	mov    %eax,(%esp)
 8407a09:	e8 e4 a8 cd ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 8407a0e:	88 45 eb             	mov    %al,-0x15(%ebp)
 8407a11:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 8407a15:	83 f0 01             	xor    $0x1,%eax
 8407a18:	84 c0                	test   %al,%al
 8407a1a:	74 4a                	je     8407a66 <_ZN10DB_LoadEtc12GetUserSkillEP12SIG_LOAD_ETC+0x494>
 8407a1c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8407a1f:	8b 58 04             	mov    0x4(%eax),%ebx
 8407a22:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8407a29:	00 
 8407a2a:	c7 44 24 08 b2 1d 00 	movl   $0x1db2,0x8(%esp)
 8407a31:	00 
 8407a32:	c7 44 24 04 40 d4 c5 	movl   $0x8c5d440,0x4(%esp)
 8407a39:	08 
 8407a3a:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8407a3d:	89 04 24             	mov    %eax,(%esp)
 8407a40:	e8 d3 7c 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8407a45:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8407a49:	c7 44 24 04 70 4b c4 	movl   $0x8c44b70,0x4(%esp)
 8407a50:	08 
 8407a51:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8407a54:	89 04 24             	mov    %eax,(%esp)
 8407a57:	e8 2c 7d 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8407a5c:	b8 00 00 00 00       	mov    $0x0,%eax
 8407a61:	e9 44 03 00 00       	jmp    8407daa <_ZN10DB_LoadEtc12GetUserSkillEP12SIG_LOAD_ETC+0x7d8>
 8407a66:	8b 45 0c             	mov    0xc(%ebp),%eax
 8407a69:	05 08 cd 00 00       	add    $0xcd08,%eax
 8407a6e:	89 c2                	mov    %eax,%edx
 8407a70:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8407a73:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8407a77:	c7 44 24 10 04 00 00 	movl   $0x4,0x10(%esp)
 8407a7e:	00 
 8407a7f:	c7 44 24 0c c8 00 00 	movl   $0xc8,0xc(%esp)
 8407a86:	00 
 8407a87:	89 54 24 08          	mov    %edx,0x8(%esp)
 8407a8b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8407a8f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8407a92:	89 04 24             	mov    %eax,(%esp)
 8407a95:	e8 df 41 ff ff       	call   83fbc79 <_Z24get_compressed_blob_dataP5MySQLiPcii>
 8407a9a:	83 f0 01             	xor    $0x1,%eax
 8407a9d:	84 c0                	test   %al,%al
 8407a9f:	74 0a                	je     8407aab <_ZN10DB_LoadEtc12GetUserSkillEP12SIG_LOAD_ETC+0x4d9>
 8407aa1:	b8 00 00 00 00       	mov    $0x0,%eax
 8407aa6:	e9 ff 02 00 00       	jmp    8407daa <_ZN10DB_LoadEtc12GetUserSkillEP12SIG_LOAD_ETC+0x7d8>
 8407aab:	8b 45 0c             	mov    0xc(%ebp),%eax
 8407aae:	05 fd 29 00 00       	add    $0x29fd,%eax
 8407ab3:	89 c2                	mov    %eax,%edx
 8407ab5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8407ab8:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8407abc:	c7 44 24 10 02 00 00 	movl   $0x2,0x10(%esp)
 8407ac3:	00 
 8407ac4:	c7 44 24 0c 98 01 00 	movl   $0x198,0xc(%esp)
 8407acb:	00 
 8407acc:	89 54 24 08          	mov    %edx,0x8(%esp)
 8407ad0:	89 44 24 04          	mov    %eax,0x4(%esp)
 8407ad4:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8407ad7:	89 04 24             	mov    %eax,(%esp)
 8407ada:	e8 9a 41 ff ff       	call   83fbc79 <_Z24get_compressed_blob_dataP5MySQLiPcii>
 8407adf:	83 f0 01             	xor    $0x1,%eax
 8407ae2:	84 c0                	test   %al,%al
 8407ae4:	74 0a                	je     8407af0 <_ZN10DB_LoadEtc12GetUserSkillEP12SIG_LOAD_ETC+0x51e>
 8407ae6:	b8 00 00 00 00       	mov    $0x0,%eax
 8407aeb:	e9 ba 02 00 00       	jmp    8407daa <_ZN10DB_LoadEtc12GetUserSkillEP12SIG_LOAD_ETC+0x7d8>
 8407af0:	c7 85 54 ff ff ff 00 	movl   $0x0,-0xac(%ebp)
 8407af7:	00 00 00 
 8407afa:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8407afd:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8407b01:	8d 95 54 ff ff ff    	lea    -0xac(%ebp),%edx
 8407b07:	89 54 24 08          	mov    %edx,0x8(%esp)
 8407b0b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8407b0f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8407b12:	89 04 24             	mov    %eax,(%esp)
 8407b15:	e8 12 ee d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8407b1a:	83 f0 01             	xor    $0x1,%eax
 8407b1d:	84 c0                	test   %al,%al
 8407b1f:	74 0a                	je     8407b2b <_ZN10DB_LoadEtc12GetUserSkillEP12SIG_LOAD_ETC+0x559>
 8407b21:	b8 00 00 00 00       	mov    $0x0,%eax
 8407b26:	e9 7f 02 00 00       	jmp    8407daa <_ZN10DB_LoadEtc12GetUserSkillEP12SIG_LOAD_ETC+0x7d8>
 8407b2b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8407b2e:	05 97 2b 00 00       	add    $0x2b97,%eax
 8407b33:	89 c2                	mov    %eax,%edx
 8407b35:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8407b38:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8407b3c:	c7 44 24 10 02 00 00 	movl   $0x2,0x10(%esp)
 8407b43:	00 
 8407b44:	c7 44 24 0c 98 01 00 	movl   $0x198,0xc(%esp)
 8407b4b:	00 
 8407b4c:	89 54 24 08          	mov    %edx,0x8(%esp)
 8407b50:	89 44 24 04          	mov    %eax,0x4(%esp)
 8407b54:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8407b57:	89 04 24             	mov    %eax,(%esp)
 8407b5a:	e8 1a 41 ff ff       	call   83fbc79 <_Z24get_compressed_blob_dataP5MySQLiPcii>
 8407b5f:	83 f0 01             	xor    $0x1,%eax
 8407b62:	84 c0                	test   %al,%al
 8407b64:	74 0a                	je     8407b70 <_ZN10DB_LoadEtc12GetUserSkillEP12SIG_LOAD_ETC+0x59e>
 8407b66:	b8 00 00 00 00       	mov    $0x0,%eax
 8407b6b:	e9 3a 02 00 00       	jmp    8407daa <_ZN10DB_LoadEtc12GetUserSkillEP12SIG_LOAD_ETC+0x7d8>
 8407b70:	c7 85 50 ff ff ff 00 	movl   $0x0,-0xb0(%ebp)
 8407b77:	00 00 00 
 8407b7a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8407b7d:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8407b81:	8d 95 50 ff ff ff    	lea    -0xb0(%ebp),%edx
 8407b87:	89 54 24 08          	mov    %edx,0x8(%esp)
 8407b8b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8407b8f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8407b92:	89 04 24             	mov    %eax,(%esp)
 8407b95:	e8 92 ed d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8407b9a:	83 f0 01             	xor    $0x1,%eax
 8407b9d:	84 c0                	test   %al,%al
 8407b9f:	74 0a                	je     8407bab <_ZN10DB_LoadEtc12GetUserSkillEP12SIG_LOAD_ETC+0x5d9>
 8407ba1:	b8 00 00 00 00       	mov    $0x0,%eax
 8407ba6:	e9 ff 01 00 00       	jmp    8407daa <_ZN10DB_LoadEtc12GetUserSkillEP12SIG_LOAD_ETC+0x7d8>
 8407bab:	8b 45 0c             	mov    0xc(%ebp),%eax
 8407bae:	8d 90 d1 cd 00 00    	lea    0xcdd1(%eax),%edx
 8407bb4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8407bb7:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8407bbb:	89 54 24 08          	mov    %edx,0x8(%esp)
 8407bbf:	89 44 24 04          	mov    %eax,0x4(%esp)
 8407bc3:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8407bc6:	89 04 24             	mov    %eax,(%esp)
 8407bc9:	e8 ec 62 cf ff       	call   80fdeba <_ZN5MySQL9get_ubyteEiRh>
 8407bce:	83 f0 01             	xor    $0x1,%eax
 8407bd1:	84 c0                	test   %al,%al
 8407bd3:	74 0a                	je     8407bdf <_ZN10DB_LoadEtc12GetUserSkillEP12SIG_LOAD_ETC+0x60d>
 8407bd5:	b8 00 00 00 00       	mov    $0x0,%eax
 8407bda:	e9 cb 01 00 00       	jmp    8407daa <_ZN10DB_LoadEtc12GetUserSkillEP12SIG_LOAD_ETC+0x7d8>
 8407bdf:	8b 85 54 ff ff ff    	mov    -0xac(%ebp),%eax
 8407be5:	89 c2                	mov    %eax,%edx
 8407be7:	8b 45 0c             	mov    0xc(%ebp),%eax
 8407bea:	88 90 95 2b 00 00    	mov    %dl,0x2b95(%eax)
 8407bf0:	8b 85 54 ff ff ff    	mov    -0xac(%ebp),%eax
 8407bf6:	89 c2                	mov    %eax,%edx
 8407bf8:	8b 45 0c             	mov    0xc(%ebp),%eax
 8407bfb:	88 90 fc 29 00 00    	mov    %dl,0x29fc(%eax)
 8407c01:	8b 85 50 ff ff ff    	mov    -0xb0(%ebp),%eax
 8407c07:	89 c2                	mov    %eax,%edx
 8407c09:	8b 45 0c             	mov    0xc(%ebp),%eax
 8407c0c:	88 90 2f 2d 00 00    	mov    %dl,0x2d2f(%eax)
 8407c12:	8b 85 50 ff ff ff    	mov    -0xb0(%ebp),%eax
 8407c18:	89 c2                	mov    %eax,%edx
 8407c1a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8407c1d:	88 90 96 2b 00 00    	mov    %dl,0x2b96(%eax)
 8407c23:	8b 45 0c             	mov    0xc(%ebp),%eax
 8407c26:	8b 40 0c             	mov    0xc(%eax),%eax
 8407c29:	85 c0                	test   %eax,%eax
 8407c2b:	0f 84 74 01 00 00    	je     8407da5 <_ZN10DB_LoadEtc12GetUserSkillEP12SIG_LOAD_ETC+0x7d3>
 8407c31:	8b 45 0c             	mov    0xc(%ebp),%eax
 8407c34:	8b 40 0c             	mov    0xc(%eax),%eax
 8407c37:	89 44 24 08          	mov    %eax,0x8(%esp)
 8407c3b:	c7 44 24 04 a8 4b c4 	movl   $0x8c44ba8,0x4(%esp)
 8407c42:	08 
 8407c43:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8407c46:	89 04 24             	mov    %eax,(%esp)
 8407c49:	e8 72 c5 fe ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8407c4e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8407c55:	00 
 8407c56:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8407c59:	89 04 24             	mov    %eax,(%esp)
 8407c5c:	e8 c5 c6 fe ff       	call   83f4326 <_ZN5MySQL4execEb>
 8407c61:	88 45 eb             	mov    %al,-0x15(%ebp)
 8407c64:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 8407c68:	83 f0 01             	xor    $0x1,%eax
 8407c6b:	84 c0                	test   %al,%al
 8407c6d:	74 4a                	je     8407cb9 <_ZN10DB_LoadEtc12GetUserSkillEP12SIG_LOAD_ETC+0x6e7>
 8407c6f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8407c72:	8b 58 0c             	mov    0xc(%eax),%ebx
 8407c75:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8407c7c:	00 
 8407c7d:	c7 44 24 08 ea 1d 00 	movl   $0x1dea,0x8(%esp)
 8407c84:	00 
 8407c85:	c7 44 24 04 40 d4 c5 	movl   $0x8c5d440,0x4(%esp)
 8407c8c:	08 
 8407c8d:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8407c90:	89 04 24             	mov    %eax,(%esp)
 8407c93:	e8 80 7a 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8407c98:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8407c9c:	c7 44 24 04 e8 4b c4 	movl   $0x8c44be8,0x4(%esp)
 8407ca3:	08 
 8407ca4:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8407ca7:	89 04 24             	mov    %eax,(%esp)
 8407caa:	e8 d9 7a 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8407caf:	b8 00 00 00 00       	mov    $0x0,%eax
 8407cb4:	e9 f1 00 00 00       	jmp    8407daa <_ZN10DB_LoadEtc12GetUserSkillEP12SIG_LOAD_ETC+0x7d8>
 8407cb9:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8407cbc:	89 04 24             	mov    %eax,(%esp)
 8407cbf:	e8 f8 c7 fe ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 8407cc4:	88 45 eb             	mov    %al,-0x15(%ebp)
 8407cc7:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 8407ccb:	83 f0 01             	xor    $0x1,%eax
 8407cce:	84 c0                	test   %al,%al
 8407cd0:	74 4a                	je     8407d1c <_ZN10DB_LoadEtc12GetUserSkillEP12SIG_LOAD_ETC+0x74a>
 8407cd2:	8b 45 0c             	mov    0xc(%ebp),%eax
 8407cd5:	8b 58 0c             	mov    0xc(%eax),%ebx
 8407cd8:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8407cdf:	00 
 8407ce0:	c7 44 24 08 f1 1d 00 	movl   $0x1df1,0x8(%esp)
 8407ce7:	00 
 8407ce8:	c7 44 24 04 40 d4 c5 	movl   $0x8c5d440,0x4(%esp)
 8407cef:	08 
 8407cf0:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8407cf3:	89 04 24             	mov    %eax,(%esp)
 8407cf6:	e8 1d 7a 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8407cfb:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8407cff:	c7 44 24 04 20 4c c4 	movl   $0x8c44c20,0x4(%esp)
 8407d06:	08 
 8407d07:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8407d0a:	89 04 24             	mov    %eax,(%esp)
 8407d0d:	e8 76 7a 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8407d12:	b8 00 00 00 00       	mov    $0x0,%eax
 8407d17:	e9 8e 00 00 00       	jmp    8407daa <_ZN10DB_LoadEtc12GetUserSkillEP12SIG_LOAD_ETC+0x7d8>
 8407d1c:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8407d23:	8b 45 0c             	mov    0xc(%ebp),%eax
 8407d26:	83 c0 10             	add    $0x10,%eax
 8407d29:	89 c2                	mov    %eax,%edx
 8407d2b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8407d2e:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8407d32:	c7 44 24 10 02 00 00 	movl   $0x2,0x10(%esp)
 8407d39:	00 
 8407d3a:	c7 44 24 0c 98 01 00 	movl   $0x198,0xc(%esp)
 8407d41:	00 
 8407d42:	89 54 24 08          	mov    %edx,0x8(%esp)
 8407d46:	89 44 24 04          	mov    %eax,0x4(%esp)
 8407d4a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8407d4d:	89 04 24             	mov    %eax,(%esp)
 8407d50:	e8 24 3f ff ff       	call   83fbc79 <_Z24get_compressed_blob_dataP5MySQLiPcii>
 8407d55:	83 f0 01             	xor    $0x1,%eax
 8407d58:	84 c0                	test   %al,%al
 8407d5a:	74 07                	je     8407d63 <_ZN10DB_LoadEtc12GetUserSkillEP12SIG_LOAD_ETC+0x791>
 8407d5c:	b8 00 00 00 00       	mov    $0x0,%eax
 8407d61:	eb 47                	jmp    8407daa <_ZN10DB_LoadEtc12GetUserSkillEP12SIG_LOAD_ETC+0x7d8>
 8407d63:	8b 45 0c             	mov    0xc(%ebp),%eax
 8407d66:	05 a8 01 00 00       	add    $0x1a8,%eax
 8407d6b:	89 c2                	mov    %eax,%edx
 8407d6d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8407d70:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8407d74:	c7 44 24 10 02 00 00 	movl   $0x2,0x10(%esp)
 8407d7b:	00 
 8407d7c:	c7 44 24 0c 98 01 00 	movl   $0x198,0xc(%esp)
 8407d83:	00 
 8407d84:	89 54 24 08          	mov    %edx,0x8(%esp)
 8407d88:	89 44 24 04          	mov    %eax,0x4(%esp)
 8407d8c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8407d8f:	89 04 24             	mov    %eax,(%esp)
 8407d92:	e8 e2 3e ff ff       	call   83fbc79 <_Z24get_compressed_blob_dataP5MySQLiPcii>
 8407d97:	83 f0 01             	xor    $0x1,%eax
 8407d9a:	84 c0                	test   %al,%al
 8407d9c:	74 07                	je     8407da5 <_ZN10DB_LoadEtc12GetUserSkillEP12SIG_LOAD_ETC+0x7d3>
 8407d9e:	b8 00 00 00 00       	mov    $0x0,%eax
 8407da3:	eb 05                	jmp    8407daa <_ZN10DB_LoadEtc12GetUserSkillEP12SIG_LOAD_ETC+0x7d8>
 8407da5:	b8 01 00 00 00       	mov    $0x1,%eax
 8407daa:	81 c4 d4 00 00 00    	add    $0xd4,%esp
 8407db0:	5b                   	pop    %ebx
 8407db1:	5d                   	pop    %ebp
 8407db2:	c3                   	ret
 8407db3:	90                   	nop

```

```c
// DB_LoadEtc::GetUserSkill @ 0x84075d2

/* DB_LoadEtc::GetUserSkill(SIG_LOAD_ETC*) */

undefined4 __thiscall DB_LoadEtc::GetUserSkill(DB_LoadEtc *this,SIG_LOAD_ETC *param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  GameWorld *this_00;
  undefined4 uVar5;
  int local_b4 [2];
  cMyTrace local_ac [16];
  cMyTrace local_9c [16];
  cMyTrace local_8c [16];
  cMyTrace local_7c [16];
  cMyTrace local_6c [16];
  cMyTrace local_5c [16];
  cMyTrace local_4c [16];
  cMyTrace local_3c [16];
  cMyTrace local_2c [19];
  char local_19;
  MySQL *local_18;
  int local_14;
  int local_10;
  
  local_18 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  uVar5 = *(undefined4 *)(param_1 + 4);
  uVar3 = get_skill_table_name(false);
  MySQL::set_query(local_18,
                   "seLect remain_sp,skill_slot,remain_sp_2nd, skill_slot_2nd, remain_sfp_1st, remain_sfp_2nd, skill_command, skill_slot_lethe, lethe_flag, skill_slot_lethe_2nd, lethe_flag_2nd,script_version from %s where charac_no=%u"
                   ,uVar3,uVar5);
  local_19 = MySQL::exec(local_18,true);
  if (local_19 != '\x01') {
    uVar5 = *(undefined4 *)(param_1 + 4);
    cMyTrace::cMyTrace(local_ac,"bool DB_LoadEtc::GetUserSkill(SIG_LOAD_ETC*)",0x1d50,5);
    cMyTrace::operator()(local_ac,"DB_LoadSkill::GetUserSkill, exec() ERROR charac_no=%u",uVar5);
    return 0;
  }
  iVar4 = MySQL::get_n_rows(local_18);
  if (iVar4 == 0) {
    this_00 = (GameWorld *)G_GameWorld();
    cVar2 = GameWorld::IsPvPSkilTreeChannel(this_00);
    if (cVar2 != '\0') {
      bVar1 = true;
      goto LAB_084076c6;
    }
  }
  bVar1 = false;
LAB_084076c6:
  if (bVar1) {
    uVar5 = *(undefined4 *)(param_1 + 4);
    uVar3 = get_skill_table_name(false);
    MySQL::set_query(local_18,"inSert into %s (charac_no) values(%u)",uVar3,uVar5);
    local_19 = MySQL::exec(local_18,true);
    if (local_19 == '\x01') {
      param_1[0xcdd4] = (SIG_LOAD_ETC)0x1;
      uVar5 = 1;
    }
    else {
      uVar5 = *(undefined4 *)(param_1 + 4);
      cMyTrace::cMyTrace(local_9c,"bool DB_LoadEtc::GetUserSkill(SIG_LOAD_ETC*)",0x1d5d,5);
      cMyTrace::operator()
                (local_9c,"DB_LoadSkill::GetUserSkill insert, exec() ERROR charac_no=%u",uVar5);
      uVar5 = 0;
    }
  }
  else {
    local_19 = MySQL::fetch(local_18);
    if (local_19 == '\x01') {
      local_14 = 1;
      local_19 = MySQL::get_uint(local_18,0,(uint *)(param_1 + 0xc9c8));
      iVar4 = local_14;
      if (local_19 == '\x01') {
        local_14 = local_14 + 1;
        cVar2 = get_compressed_blob_data(local_18,iVar4,(char *)(param_1 + 0xc9cc),0x198,2);
        iVar4 = local_14;
        if (cVar2 == '\x01') {
          local_14 = local_14 + 1;
          local_19 = MySQL::get_uint(local_18,iVar4,(uint *)(param_1 + 0xcb64));
          iVar4 = local_14;
          if (local_19 == '\x01') {
            local_14 = local_14 + 1;
            cVar2 = get_compressed_blob_data(local_18,iVar4,(char *)(param_1 + 0xcb68),0x198,2);
            iVar4 = local_14;
            if (cVar2 == '\x01') {
              local_14 = local_14 + 1;
              local_19 = MySQL::get_uint(local_18,iVar4,(uint *)(param_1 + 0xcd00));
              iVar4 = local_14;
              if (local_19 == '\x01') {
                local_14 = local_14 + 1;
                local_19 = MySQL::get_uint(local_18,iVar4,(uint *)(param_1 + 0xcd04));
                iVar4 = local_14;
                if (local_19 == '\x01') {
                  local_14 = local_14 + 1;
                  cVar2 = get_compressed_blob_data(local_18,iVar4,(char *)(param_1 + 0xcd08),200,4);
                  iVar4 = local_14;
                  if (cVar2 == '\x01') {
                    local_14 = local_14 + 1;
                    cVar2 = get_compressed_blob_data
                                      (local_18,iVar4,(char *)(param_1 + 0x29fd),0x198,2);
                    iVar4 = local_14;
                    if (cVar2 == '\x01') {
                      local_b4[1] = 0;
                      local_14 = local_14 + 1;
                      cVar2 = MySQL::get_int(local_18,iVar4,local_b4 + 1);
                      iVar4 = local_14;
                      if (cVar2 == '\x01') {
                        local_14 = local_14 + 1;
                        cVar2 = get_compressed_blob_data
                                          (local_18,iVar4,(char *)(param_1 + 0x2b97),0x198,2);
                        iVar4 = local_14;
                        if (cVar2 == '\x01') {
                          local_b4[0] = 0;
                          local_14 = local_14 + 1;
                          cVar2 = MySQL::get_int(local_18,iVar4,local_b4);
                          iVar4 = local_14;
                          if (cVar2 == '\x01') {
                            local_14 = local_14 + 1;
                            cVar2 = MySQL::get_ubyte(local_18,iVar4,(uchar *)(param_1 + 0xcdd1));
                            if (cVar2 == '\x01') {
                              param_1[0x2b95] = SUB41(local_b4[1],0);
                              param_1[0x29fc] = SUB41(local_b4[1],0);
                              param_1[0x2d2f] = SUB41(local_b4[0],0);
                              param_1[0x2b96] = SUB41(local_b4[0],0);
                              if (*(int *)(param_1 + 0xc) != 0) {
                                MySQL::set_query(local_18,
                                                 "seLect skill_slot, skill_slot_2nd from skill where charac_no=%u"
                                                 ,*(undefined4 *)(param_1 + 0xc));
                                local_19 = MySQL::exec(local_18,true);
                                if (local_19 != '\x01') {
                                  uVar5 = *(undefined4 *)(param_1 + 0xc);
                                  cMyTrace::cMyTrace(local_3c,
                                                  "bool DB_LoadEtc::GetUserSkill(SIG_LOAD_ETC*)",
                                                  0x1dea,5);
                                  cMyTrace::operator()
                                            (local_3c,
                                             "DB_LoadSkill::GetUserSkill, exec() ERROR tagCharacNo=%u"
                                             ,uVar5);
                                  return 0;
                                }
                                local_19 = MySQL::fetch(local_18);
                                if (local_19 != '\x01') {
                                  uVar5 = *(undefined4 *)(param_1 + 0xc);
                                  cMyTrace::cMyTrace(local_2c,
                                                  "bool DB_LoadEtc::GetUserSkill(SIG_LOAD_ETC*)",
                                                  0x1df1,5);
                                  cMyTrace::operator()
                                            (local_2c,
                                             "DB_LoadSkill::GetUserSkill, fetch() ERROR tagCharacNo=%u"
                                             ,uVar5);
                                  return 0;
                                }
                                local_10 = 1;
                                cVar2 = get_compressed_blob_data
                                                  (local_18,0,(char *)(param_1 + 0x10),0x198,2);
                                iVar4 = local_10;
                                if (cVar2 != '\x01') {
                                  return 0;
                                }
                                local_10 = local_10 + 1;
                                cVar2 = get_compressed_blob_data
                                                  (local_18,iVar4,(char *)(param_1 + 0x1a8),0x198,2)
                                ;
                                if (cVar2 != '\x01') {
                                  return 0;
                                }
                              }
                              uVar5 = 1;
                            }
                            else {
                              uVar5 = 0;
                            }
                          }
                          else {
                            uVar5 = 0;
                          }
                        }
                        else {
                          uVar5 = 0;
                        }
                      }
                      else {
                        uVar5 = 0;
                      }
                    }
                    else {
                      uVar5 = 0;
                    }
                  }
                  else {
                    uVar5 = 0;
                  }
                }
                else {
                  uVar5 = *(undefined4 *)(param_1 + 4);
                  cMyTrace::cMyTrace(local_4c,"bool DB_LoadEtc::GetUserSkill(SIG_LOAD_ETC*)",0x1db2,
                                     5);
                  cMyTrace::operator()
                            (local_4c,"DB_LoadSkill::GetUserSkill, get(8) ERROR charac_no=%u",uVar5)
                  ;
                  uVar5 = 0;
                }
              }
              else {
                uVar5 = *(undefined4 *)(param_1 + 4);
                cMyTrace::cMyTrace(local_5c,"bool DB_LoadEtc::GetUserSkill(SIG_LOAD_ETC*)",0x1dac,5)
                ;
                cMyTrace::operator()
                          (local_5c,"DB_LoadSkill::GetUserSkill, get(7) ERROR charac_no=%u",uVar5);
                uVar5 = 0;
              }
            }
            else {
              uVar5 = 0;
            }
          }
          else {
            uVar5 = *(undefined4 *)(param_1 + 4);
            cMyTrace::cMyTrace(local_6c,"bool DB_LoadEtc::GetUserSkill(SIG_LOAD_ETC*)",0x1d98,5);
            cMyTrace::operator()
                      (local_6c,"DB_LoadSkill::GetUserSkill, get(4) ERROR charac_no=%u",uVar5);
            uVar5 = 0;
          }
        }
        else {
          uVar5 = 0;
        }
      }
      else {
        uVar5 = *(undefined4 *)(param_1 + 4);
        cMyTrace::cMyTrace(local_7c,"bool DB_LoadEtc::GetUserSkill(SIG_LOAD_ETC*)",0x1d71,5);
        cMyTrace::operator()(local_7c,"DB_LoadSkill::GetUserSkill, get(0) ERROR charac_no=%u",uVar5)
        ;
        uVar5 = 0;
      }
    }
    else {
      uVar5 = *(undefined4 *)(param_1 + 4);
      cMyTrace::cMyTrace(local_8c,"bool DB_LoadEtc::GetUserSkill(SIG_LOAD_ETC*)",0x1d69,5);
      cMyTrace::operator()(local_8c,"DB_LoadSkill::GetUserSkill, fetch() ERROR charac_no=%u",uVar5);
      uVar5 = 0;
    }
  }
  return uVar5;
}

```

---

## LoadAccountFirstLogin

```asm
// === 08405c6e DB_LoadEtc::LoadAccountFirstLogin  [0x08405c6e-0x8405e09] ===
 8405c6e:	55                   	push   %ebp
 8405c6f:	89 e5                	mov    %esp,%ebp
 8405c71:	53                   	push   %ebx
 8405c72:	83 ec 24             	sub    $0x24,%esp
 8405c75:	e8 21 65 cc ff       	call   80cc19b <_Z14G_CDataManagerv>
 8405c7a:	89 04 24             	mov    %eax,(%esp)
 8405c7d:	e8 e0 ae d0 ff       	call   8110b62 <_ZN12CDataManager20get_event_script_mngEv>
 8405c82:	8b 55 10             	mov    0x10(%ebp),%edx
 8405c85:	89 54 24 04          	mov    %edx,0x4(%esp)
 8405c89:	89 04 24             	mov    %eax,(%esp)
 8405c8c:	e8 a5 5d d0 ff       	call   810ba36 <_ZN13EventClassify15CEventScriptMng11is_eventingEi>
 8405c91:	83 f0 01             	xor    $0x1,%eax
 8405c94:	84 c0                	test   %al,%al
 8405c96:	74 0a                	je     8405ca2 <_ZN10DB_LoadEtc21LoadAccountFirstLoginEP12SIG_LOAD_ETCi+0x34>
 8405c98:	b8 00 00 00 00       	mov    $0x0,%eax
 8405c9d:	e9 62 01 00 00       	jmp    8405e04 <_ZN10DB_LoadEtc21LoadAccountFirstLoginEP12SIG_LOAD_ETCi+0x196>
 8405ca2:	e8 f4 64 cc ff       	call   80cc19b <_Z14G_CDataManagerv>
 8405ca7:	89 04 24             	mov    %eax,(%esp)
 8405caa:	e8 b3 ae d0 ff       	call   8110b62 <_ZN12CDataManager20get_event_script_mngEv>
 8405caf:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8405cb2:	8b 45 10             	mov    0x10(%ebp),%eax
 8405cb5:	89 44 24 04          	mov    %eax,0x4(%esp)
 8405cb9:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8405cbc:	89 04 24             	mov    %eax,(%esp)
 8405cbf:	e8 a6 5c d0 ff       	call   810b96a <_ZN13EventClassify15CEventScriptMng16get_event_entityEi>
 8405cc4:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8405cc7:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 8405ccb:	75 0a                	jne    8405cd7 <_ZN10DB_LoadEtc21LoadAccountFirstLoginEP12SIG_LOAD_ETCi+0x69>
 8405ccd:	b8 00 00 00 00       	mov    $0x0,%eax
 8405cd2:	e9 2d 01 00 00       	jmp    8405e04 <_ZN10DB_LoadEtc21LoadAccountFirstLoginEP12SIG_LOAD_ETCi+0x196>
 8405cd7:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8405cdc:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8405ce3:	00 
 8405ce4:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 8405ceb:	00 
 8405cec:	89 04 24             	mov    %eax,(%esp)
 8405cef:	e8 4a f5 fe ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8405cf4:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8405cf7:	8b 45 0c             	mov    0xc(%ebp),%eax
 8405cfa:	8b 00                	mov    (%eax),%eax
 8405cfc:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8405d03:	00 
 8405d04:	89 04 24             	mov    %eax,(%esp)
 8405d07:	e8 3f 33 d0 ff       	call   810904b <_Z14NumberToStringji>
 8405d0c:	89 c3                	mov    %eax,%ebx
 8405d0e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8405d11:	8b 00                	mov    (%eax),%eax
 8405d13:	83 c0 20             	add    $0x20,%eax
 8405d16:	8b 10                	mov    (%eax),%edx
 8405d18:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8405d1b:	89 04 24             	mov    %eax,(%esp)
 8405d1e:	ff d2                	call   *%edx
 8405d20:	89 04 24             	mov    %eax,(%esp)
 8405d23:	e8 88 8d 6d 00       	call   8adeab0 <_Z9toTStringRKSs>
 8405d28:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8405d2c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8405d30:	c7 44 24 04 e4 42 c4 	movl   $0x8c442e4,0x4(%esp)
 8405d37:	08 
 8405d38:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8405d3b:	89 04 24             	mov    %eax,(%esp)
 8405d3e:	e8 7d e4 fe ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8405d43:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8405d4a:	00 
 8405d4b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8405d4e:	89 04 24             	mov    %eax,(%esp)
 8405d51:	e8 d0 e5 fe ff       	call   83f4326 <_ZN5MySQL4execEb>
 8405d56:	83 f0 01             	xor    $0x1,%eax
 8405d59:	84 c0                	test   %al,%al
 8405d5b:	74 36                	je     8405d93 <_ZN10DB_LoadEtc21LoadAccountFirstLoginEP12SIG_LOAD_ETCi+0x125>
 8405d5d:	8b 45 10             	mov    0x10(%ebp),%eax
 8405d60:	89 44 24 04          	mov    %eax,0x4(%esp)
 8405d64:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8405d67:	89 04 24             	mov    %eax,(%esp)
 8405d6a:	e8 5d 53 d0 ff       	call   810b0cc <_ZN13EventClassify15CEventScriptMng31get_convert_to_user_confirmflagEi>
 8405d6f:	8b 55 0c             	mov    0xc(%ebp),%edx
 8405d72:	81 c2 bc c9 00 00    	add    $0xc9bc,%edx
 8405d78:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8405d7f:	00 
 8405d80:	89 44 24 04          	mov    %eax,0x4(%esp)
 8405d84:	89 14 24             	mov    %edx,(%esp)
 8405d87:	e8 58 a9 04 00       	call   84506e4 <_ZNSt6bitsetILj32EE3setEjb>
 8405d8c:	b8 00 00 00 00       	mov    $0x0,%eax
 8405d91:	eb 71                	jmp    8405e04 <_ZN10DB_LoadEtc21LoadAccountFirstLoginEP12SIG_LOAD_ETCi+0x196>
 8405d93:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8405d96:	89 04 24             	mov    %eax,(%esp)
 8405d99:	e8 ce c5 cd ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8405d9e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8405da1:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8405da5:	74 31                	je     8405dd8 <_ZN10DB_LoadEtc21LoadAccountFirstLoginEP12SIG_LOAD_ETCi+0x16a>
 8405da7:	8b 45 10             	mov    0x10(%ebp),%eax
 8405daa:	89 44 24 04          	mov    %eax,0x4(%esp)
 8405dae:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8405db1:	89 04 24             	mov    %eax,(%esp)
 8405db4:	e8 13 53 d0 ff       	call   810b0cc <_ZN13EventClassify15CEventScriptMng31get_convert_to_user_confirmflagEi>
 8405db9:	8b 55 0c             	mov    0xc(%ebp),%edx
 8405dbc:	81 c2 bc c9 00 00    	add    $0xc9bc,%edx
 8405dc2:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8405dc9:	00 
 8405dca:	89 44 24 04          	mov    %eax,0x4(%esp)
 8405dce:	89 14 24             	mov    %edx,(%esp)
 8405dd1:	e8 0e a9 04 00       	call   84506e4 <_ZNSt6bitsetILj32EE3setEjb>
 8405dd6:	eb 27                	jmp    8405dff <_ZN10DB_LoadEtc21LoadAccountFirstLoginEP12SIG_LOAD_ETCi+0x191>
 8405dd8:	8b 45 10             	mov    0x10(%ebp),%eax
 8405ddb:	89 44 24 04          	mov    %eax,0x4(%esp)
 8405ddf:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8405de2:	89 04 24             	mov    %eax,(%esp)
 8405de5:	e8 e2 52 d0 ff       	call   810b0cc <_ZN13EventClassify15CEventScriptMng31get_convert_to_user_confirmflagEi>
 8405dea:	8b 55 0c             	mov    0xc(%ebp),%edx
 8405ded:	81 c2 bc c9 00 00    	add    $0xc9bc,%edx
 8405df3:	89 44 24 04          	mov    %eax,0x4(%esp)
 8405df7:	89 14 24             	mov    %edx,(%esp)
 8405dfa:	e8 1f a9 04 00       	call   845071e <_ZNSt6bitsetILj32EE5resetEj>
 8405dff:	b8 01 00 00 00       	mov    $0x1,%eax
 8405e04:	83 c4 24             	add    $0x24,%esp
 8405e07:	5b                   	pop    %ebx
 8405e08:	5d                   	pop    %ebp
 8405e09:	c3                   	ret

```

```c
// DB_LoadEtc::LoadAccountFirstLogin @ 0x8405c6e

/* DB_LoadEtc::LoadAccountFirstLogin(SIG_LOAD_ETC*, int) */

undefined4 __thiscall
DB_LoadEtc::LoadAccountFirstLogin(DB_LoadEtc *this,SIG_LOAD_ETC *param_1,int param_2)

{
  char cVar1;
  CDataManager *pCVar2;
  CEventScriptMng *pCVar3;
  undefined4 uVar4;
  int *piVar5;
  MySQL *this_00;
  string *sSrc;
  TCHAR *pTVar6;
  uint uVar7;
  int iVar8;
  
  pCVar2 = (CDataManager *)G_CDataManager();
  pCVar3 = (CEventScriptMng *)CDataManager::get_event_script_mng(pCVar2);
  cVar1 = EventClassify::CEventScriptMng::is_eventing(pCVar3,param_2);
  if (cVar1 == '\x01') {
    pCVar2 = (CDataManager *)G_CDataManager();
    pCVar3 = (CEventScriptMng *)CDataManager::get_event_script_mng(pCVar2);
    piVar5 = (int *)EventClassify::CEventScriptMng::get_event_entity((int)pCVar3);
    if (piVar5 == (int *)0x0) {
      uVar4 = 0;
    }
    else {
      this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
      uVar4 = NumberToString(*(uint *)param_1,0);
      sSrc = (string *)(**(code **)(*piVar5 + 0x20))(piVar5);
      pTVar6 = toTString(sSrc);
      MySQL::set_query(this_00,"seLect m_id from %s where m_id=%s",pTVar6,uVar4);
      cVar1 = MySQL::exec(this_00,true);
      if (cVar1 == '\x01') {
        iVar8 = MySQL::get_n_rows(this_00);
        if (iVar8 == 0) {
          uVar7 = EventClassify::CEventScriptMng::get_convert_to_user_confirmflag(pCVar3,param_2);
          std::bitset<32u>::reset((bitset<32u> *)(param_1 + 0xc9bc),uVar7);
        }
        else {
          uVar7 = EventClassify::CEventScriptMng::get_convert_to_user_confirmflag(pCVar3,param_2);
          std::bitset<32u>::set((bitset<32u> *)(param_1 + 0xc9bc),uVar7,true);
        }
        uVar4 = 1;
      }
      else {
        uVar7 = EventClassify::CEventScriptMng::get_convert_to_user_confirmflag(pCVar3,param_2);
        std::bitset<32u>::set((bitset<32u> *)(param_1 + 0xc9bc),uVar7,true);
        uVar4 = 0;
      }
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

```

---

## LoadAccountFirstLoginDaily

```asm
// === 08405e0a DB_LoadEtc::LoadAccountFirstLoginDaily  [0x08405e0a-0x8406091] ===
 8405e0a:	55                   	push   %ebp
 8405e0b:	89 e5                	mov    %esp,%ebp
 8405e0d:	53                   	push   %ebx
 8405e0e:	81 ec a4 00 00 00    	sub    $0xa4,%esp
 8405e14:	e8 82 63 cc ff       	call   80cc19b <_Z14G_CDataManagerv>
 8405e19:	89 04 24             	mov    %eax,(%esp)
 8405e1c:	e8 41 ad d0 ff       	call   8110b62 <_ZN12CDataManager20get_event_script_mngEv>
 8405e21:	8b 55 10             	mov    0x10(%ebp),%edx
 8405e24:	89 54 24 04          	mov    %edx,0x4(%esp)
 8405e28:	89 04 24             	mov    %eax,(%esp)
 8405e2b:	e8 06 5c d0 ff       	call   810ba36 <_ZN13EventClassify15CEventScriptMng11is_eventingEi>
 8405e30:	83 f0 01             	xor    $0x1,%eax
 8405e33:	84 c0                	test   %al,%al
 8405e35:	74 0a                	je     8405e41 <_ZN10DB_LoadEtc26LoadAccountFirstLoginDailyEP12SIG_LOAD_ETCi+0x37>
 8405e37:	b8 00 00 00 00       	mov    $0x0,%eax
 8405e3c:	e9 47 02 00 00       	jmp    8406088 <_ZN10DB_LoadEtc26LoadAccountFirstLoginDailyEP12SIG_LOAD_ETCi+0x27e>
 8405e41:	e8 55 63 cc ff       	call   80cc19b <_Z14G_CDataManagerv>
 8405e46:	89 04 24             	mov    %eax,(%esp)
 8405e49:	e8 14 ad d0 ff       	call   8110b62 <_ZN12CDataManager20get_event_script_mngEv>
 8405e4e:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8405e51:	8b 45 10             	mov    0x10(%ebp),%eax
 8405e54:	89 44 24 04          	mov    %eax,0x4(%esp)
 8405e58:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8405e5b:	89 04 24             	mov    %eax,(%esp)
 8405e5e:	e8 07 5b d0 ff       	call   810b96a <_ZN13EventClassify15CEventScriptMng16get_event_entityEi>
 8405e63:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8405e66:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 8405e6a:	75 0a                	jne    8405e76 <_ZN10DB_LoadEtc26LoadAccountFirstLoginDailyEP12SIG_LOAD_ETCi+0x6c>
 8405e6c:	b8 00 00 00 00       	mov    $0x0,%eax
 8405e71:	e9 12 02 00 00       	jmp    8406088 <_ZN10DB_LoadEtc26LoadAccountFirstLoginDailyEP12SIG_LOAD_ETCi+0x27e>
 8405e76:	e8 20 63 cc ff       	call   80cc19b <_Z14G_CDataManagerv>
 8405e7b:	89 04 24             	mov    %eax,(%esp)
 8405e7e:	e8 df ac d0 ff       	call   8110b62 <_ZN12CDataManager20get_event_script_mngEv>
 8405e83:	89 04 24             	mov    %eax,(%esp)
 8405e86:	e8 4b 68 d0 ff       	call   810c6d6 <_ZN13EventClassify15CEventScriptMng14get_today_timeEv>
 8405e8b:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8405e8e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8405e91:	89 04 24             	mov    %eax,(%esp)
 8405e94:	e8 fb 51 d0 ff       	call   810b094 <_ZN13EventClassify12CEventEntity20get_event_start_timeEv>
 8405e99:	3b 45 e8             	cmp    -0x18(%ebp),%eax
 8405e9c:	7f 10                	jg     8405eae <_ZN10DB_LoadEtc26LoadAccountFirstLoginDailyEP12SIG_LOAD_ETCi+0xa4>
 8405e9e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8405ea1:	89 04 24             	mov    %eax,(%esp)
 8405ea4:	e8 f7 51 d0 ff       	call   810b0a0 <_ZN13EventClassify12CEventEntity18get_event_end_timeEv>
 8405ea9:	3b 45 e8             	cmp    -0x18(%ebp),%eax
 8405eac:	7d 07                	jge    8405eb5 <_ZN10DB_LoadEtc26LoadAccountFirstLoginDailyEP12SIG_LOAD_ETCi+0xab>
 8405eae:	b8 01 00 00 00       	mov    $0x1,%eax
 8405eb3:	eb 05                	jmp    8405eba <_ZN10DB_LoadEtc26LoadAccountFirstLoginDailyEP12SIG_LOAD_ETCi+0xb0>
 8405eb5:	b8 00 00 00 00       	mov    $0x0,%eax
 8405eba:	84 c0                	test   %al,%al
 8405ebc:	74 0a                	je     8405ec8 <_ZN10DB_LoadEtc26LoadAccountFirstLoginDailyEP12SIG_LOAD_ETCi+0xbe>
 8405ebe:	b8 00 00 00 00       	mov    $0x0,%eax
 8405ec3:	e9 c0 01 00 00       	jmp    8406088 <_ZN10DB_LoadEtc26LoadAccountFirstLoginDailyEP12SIG_LOAD_ETCi+0x27e>
 8405ec8:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8405ecd:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8405ed4:	00 
 8405ed5:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 8405edc:	00 
 8405edd:	89 04 24             	mov    %eax,(%esp)
 8405ee0:	e8 59 f3 fe ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8405ee5:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8405ee8:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8405eef:	e8 5c 78 c7 ff       	call   807d750 <time@plt>
 8405ef4:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8405ef7:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8405efa:	89 44 24 04          	mov    %eax,0x4(%esp)
 8405efe:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8405f01:	89 04 24             	mov    %eax,(%esp)
 8405f04:	e8 57 84 c7 ff       	call   807e360 <localtime_r@plt>
 8405f09:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8405f0c:	89 45 84             	mov    %eax,-0x7c(%ebp)
 8405f0f:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8405f12:	89 45 88             	mov    %eax,-0x78(%ebp)
 8405f15:	8b 45 b8             	mov    -0x48(%ebp),%eax
 8405f18:	89 45 8c             	mov    %eax,-0x74(%ebp)
 8405f1b:	8b 45 bc             	mov    -0x44(%ebp),%eax
 8405f1e:	89 45 90             	mov    %eax,-0x70(%ebp)
 8405f21:	8b 45 c0             	mov    -0x40(%ebp),%eax
 8405f24:	89 45 94             	mov    %eax,-0x6c(%ebp)
 8405f27:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8405f2a:	89 45 98             	mov    %eax,-0x68(%ebp)
 8405f2d:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8405f30:	89 45 9c             	mov    %eax,-0x64(%ebp)
 8405f33:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8405f36:	89 45 a0             	mov    %eax,-0x60(%ebp)
 8405f39:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8405f3c:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 8405f3f:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8405f42:	89 45 a8             	mov    %eax,-0x58(%ebp)
 8405f45:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8405f48:	89 45 ac             	mov    %eax,-0x54(%ebp)
 8405f4b:	e8 31 62 cc ff       	call   80cc181 <_Z14G_CEnvironmentv>
 8405f50:	8b 80 7c 03 00 00    	mov    0x37c(%eax),%eax
 8405f56:	89 45 8c             	mov    %eax,-0x74(%ebp)
 8405f59:	c7 45 88 00 00 00 00 	movl   $0x0,-0x78(%ebp)
 8405f60:	c7 45 84 00 00 00 00 	movl   $0x0,-0x7c(%ebp)
 8405f67:	8d 45 84             	lea    -0x7c(%ebp),%eax
 8405f6a:	89 04 24             	mov    %eax,(%esp)
 8405f6d:	e8 ae 88 c7 ff       	call   807e820 <mktime@plt>
 8405f72:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8405f75:	8b 55 b8             	mov    -0x48(%ebp),%edx
 8405f78:	8b 45 8c             	mov    -0x74(%ebp),%eax
 8405f7b:	39 c2                	cmp    %eax,%edx
 8405f7d:	7d 07                	jge    8405f86 <_ZN10DB_LoadEtc26LoadAccountFirstLoginDailyEP12SIG_LOAD_ETCi+0x17c>
 8405f7f:	81 6d f0 80 51 01 00 	subl   $0x15180,-0x10(%ebp)
 8405f86:	8b 45 0c             	mov    0xc(%ebp),%eax
 8405f89:	8b 18                	mov    (%eax),%ebx
 8405f8b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8405f8e:	8b 00                	mov    (%eax),%eax
 8405f90:	83 c0 20             	add    $0x20,%eax
 8405f93:	8b 10                	mov    (%eax),%edx
 8405f95:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8405f98:	89 04 24             	mov    %eax,(%esp)
 8405f9b:	ff d2                	call   *%edx
 8405f9d:	89 04 24             	mov    %eax,(%esp)
 8405fa0:	e8 0b 8b 6d 00       	call   8adeab0 <_Z9toTStringRKSs>
 8405fa5:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8405fa8:	89 54 24 10          	mov    %edx,0x10(%esp)
 8405fac:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8405fb0:	89 44 24 08          	mov    %eax,0x8(%esp)
 8405fb4:	c7 44 24 04 08 43 c4 	movl   $0x8c44308,0x4(%esp)
 8405fbb:	08 
 8405fbc:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8405fbf:	89 04 24             	mov    %eax,(%esp)
 8405fc2:	e8 f9 e1 fe ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8405fc7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8405fce:	00 
 8405fcf:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8405fd2:	89 04 24             	mov    %eax,(%esp)
 8405fd5:	e8 4c e3 fe ff       	call   83f4326 <_ZN5MySQL4execEb>
 8405fda:	83 f0 01             	xor    $0x1,%eax
 8405fdd:	84 c0                	test   %al,%al
 8405fdf:	74 36                	je     8406017 <_ZN10DB_LoadEtc26LoadAccountFirstLoginDailyEP12SIG_LOAD_ETCi+0x20d>
 8405fe1:	8b 45 10             	mov    0x10(%ebp),%eax
 8405fe4:	89 44 24 04          	mov    %eax,0x4(%esp)
 8405fe8:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8405feb:	89 04 24             	mov    %eax,(%esp)
 8405fee:	e8 d9 50 d0 ff       	call   810b0cc <_ZN13EventClassify15CEventScriptMng31get_convert_to_user_confirmflagEi>
 8405ff3:	8b 55 0c             	mov    0xc(%ebp),%edx
 8405ff6:	81 c2 bc c9 00 00    	add    $0xc9bc,%edx
 8405ffc:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8406003:	00 
 8406004:	89 44 24 04          	mov    %eax,0x4(%esp)
 8406008:	89 14 24             	mov    %edx,(%esp)
 840600b:	e8 d4 a6 04 00       	call   84506e4 <_ZNSt6bitsetILj32EE3setEjb>
 8406010:	b8 00 00 00 00       	mov    $0x0,%eax
 8406015:	eb 71                	jmp    8406088 <_ZN10DB_LoadEtc26LoadAccountFirstLoginDailyEP12SIG_LOAD_ETCi+0x27e>
 8406017:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840601a:	89 04 24             	mov    %eax,(%esp)
 840601d:	e8 4a c3 cd ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8406022:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8406025:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8406029:	74 31                	je     840605c <_ZN10DB_LoadEtc26LoadAccountFirstLoginDailyEP12SIG_LOAD_ETCi+0x252>
 840602b:	8b 45 10             	mov    0x10(%ebp),%eax
 840602e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8406032:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8406035:	89 04 24             	mov    %eax,(%esp)
 8406038:	e8 8f 50 d0 ff       	call   810b0cc <_ZN13EventClassify15CEventScriptMng31get_convert_to_user_confirmflagEi>
 840603d:	8b 55 0c             	mov    0xc(%ebp),%edx
 8406040:	81 c2 bc c9 00 00    	add    $0xc9bc,%edx
 8406046:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 840604d:	00 
 840604e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8406052:	89 14 24             	mov    %edx,(%esp)
 8406055:	e8 8a a6 04 00       	call   84506e4 <_ZNSt6bitsetILj32EE3setEjb>
 840605a:	eb 27                	jmp    8406083 <_ZN10DB_LoadEtc26LoadAccountFirstLoginDailyEP12SIG_LOAD_ETCi+0x279>
 840605c:	8b 45 10             	mov    0x10(%ebp),%eax
 840605f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8406063:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8406066:	89 04 24             	mov    %eax,(%esp)
 8406069:	e8 5e 50 d0 ff       	call   810b0cc <_ZN13EventClassify15CEventScriptMng31get_convert_to_user_confirmflagEi>
 840606e:	8b 55 0c             	mov    0xc(%ebp),%edx
 8406071:	81 c2 bc c9 00 00    	add    $0xc9bc,%edx
 8406077:	89 44 24 04          	mov    %eax,0x4(%esp)
 840607b:	89 14 24             	mov    %edx,(%esp)
 840607e:	e8 9b a6 04 00       	call   845071e <_ZNSt6bitsetILj32EE5resetEj>
 8406083:	b8 01 00 00 00       	mov    $0x1,%eax
 8406088:	81 c4 a4 00 00 00    	add    $0xa4,%esp
 840608e:	5b                   	pop    %ebx
 840608f:	5d                   	pop    %ebp
 8406090:	c3                   	ret
 8406091:	90                   	nop

```

```c
// DB_LoadEtc::LoadAccountFirstLoginDaily @ 0x8405e0a

/* DB_LoadEtc::LoadAccountFirstLoginDaily(SIG_LOAD_ETC*, int) */

undefined4 __thiscall
DB_LoadEtc::LoadAccountFirstLoginDaily(DB_LoadEtc *this,SIG_LOAD_ETC *param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  CDataManager *pCVar3;
  CEventScriptMng *pCVar4;
  int iVar5;
  undefined4 uVar6;
  string *sSrc;
  TCHAR *pTVar7;
  uint uVar8;
  tm local_80;
  tm local_54;
  time_t local_28;
  CEventScriptMng *local_24;
  CEventEntity *local_20;
  int local_1c;
  MySQL *local_18;
  int local_14;
  int local_10;
  
  pCVar3 = (CDataManager *)G_CDataManager();
  pCVar4 = (CEventScriptMng *)CDataManager::get_event_script_mng(pCVar3);
  cVar2 = EventClassify::CEventScriptMng::is_eventing(pCVar4,param_2);
  if (cVar2 != '\x01') {
    return 0;
  }
  pCVar3 = (CDataManager *)G_CDataManager();
  local_24 = (CEventScriptMng *)CDataManager::get_event_script_mng(pCVar3);
  local_20 = (CEventEntity *)EventClassify::CEventScriptMng::get_event_entity((int)local_24);
  if (local_20 != (CEventEntity *)0x0) {
    pCVar3 = (CDataManager *)G_CDataManager();
    pCVar4 = (CEventScriptMng *)CDataManager::get_event_script_mng(pCVar3);
    local_1c = EventClassify::CEventScriptMng::get_today_time(pCVar4);
    iVar5 = EventClassify::CEventEntity::get_event_start_time(local_20);
    if ((local_1c < iVar5) ||
       (iVar5 = EventClassify::CEventEntity::get_event_end_time(local_20), iVar5 < local_1c)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      uVar6 = 0;
    }
    else {
      local_18 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
      local_28 = time((time_t *)0x0);
      localtime_r(&local_28,&local_54);
      local_80.tm_sec = local_54.tm_sec;
      local_80.tm_min = local_54.tm_min;
      local_80.tm_hour = local_54.tm_hour;
      local_80.tm_mday = local_54.tm_mday;
      local_80.tm_mon = local_54.tm_mon;
      local_80.tm_year = local_54.tm_year;
      local_80.tm_wday = local_54.tm_wday;
      local_80.tm_yday = local_54.tm_yday;
      local_80.tm_isdst = local_54.tm_isdst;
      local_80.tm_gmtoff = local_54.tm_gmtoff;
      local_80.tm_zone = local_54.tm_zone;
      iVar5 = G_CEnvironment();
      local_80.tm_hour = *(int *)(iVar5 + 0x37c);
      local_80.tm_min = 0;
      local_80.tm_sec = 0;
      local_14 = mktime(&local_80);
      if (local_54.tm_hour < local_80.tm_hour) {
        local_14 = local_14 + -0x15180;
      }
      uVar6 = *(undefined4 *)param_1;
      sSrc = (string *)(**(code **)(*(int *)local_20 + 0x20))(local_20);
      pTVar7 = toTString(sSrc);
      MySQL::set_query(local_18,"seLect m_id from %s where m_id=%u and occ_date > FROM_UNIXTIME(%d)"
                       ,pTVar7,uVar6,local_14);
      cVar2 = MySQL::exec(local_18,true);
      if (cVar2 == '\x01') {
        local_10 = MySQL::get_n_rows(local_18);
        if (local_10 == 0) {
          uVar8 = EventClassify::CEventScriptMng::get_convert_to_user_confirmflag(local_24,param_2);
          std::bitset<32u>::reset((bitset<32u> *)(param_1 + 0xc9bc),uVar8);
        }
        else {
          uVar8 = EventClassify::CEventScriptMng::get_convert_to_user_confirmflag(local_24,param_2);
          std::bitset<32u>::set((bitset<32u> *)(param_1 + 0xc9bc),uVar8,true);
        }
        uVar6 = 1;
      }
      else {
        uVar8 = EventClassify::CEventScriptMng::get_convert_to_user_confirmflag(local_24,param_2);
        std::bitset<32u>::set((bitset<32u> *)(param_1 + 0xc9bc),uVar8,true);
        uVar6 = 0;
      }
    }
    return uVar6;
  }
  return 0;
}

```

---

## LoadAchievement

```asm
// === 08406422 DB_LoadEtc::LoadAchievement  [0x08406422-0x84065ff] ===
 8406422:	55                   	push   %ebp
 8406423:	89 e5                	mov    %esp,%ebp
 8406425:	57                   	push   %edi
 8406426:	53                   	push   %ebx
 8406427:	81 ec 00 1d 00 00    	sub    $0x1d00,%esp
 840642d:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8406432:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8406439:	00 
 840643a:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8406441:	00 
 8406442:	89 04 24             	mov    %eax,(%esp)
 8406445:	e8 f4 ed fe ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 840644a:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 840644d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8406450:	8b 40 04             	mov    0x4(%eax),%eax
 8406453:	89 44 24 08          	mov    %eax,0x8(%esp)
 8406457:	c7 44 24 04 dc 43 c4 	movl   $0x8c443dc,0x4(%esp)
 840645e:	08 
 840645f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8406462:	89 04 24             	mov    %eax,(%esp)
 8406465:	e8 56 dd fe ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 840646a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8406471:	00 
 8406472:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8406475:	89 04 24             	mov    %eax,(%esp)
 8406478:	e8 a9 de fe ff       	call   83f4326 <_ZN5MySQL4execEb>
 840647d:	88 45 eb             	mov    %al,-0x15(%ebp)
 8406480:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 8406484:	83 f0 01             	xor    $0x1,%eax
 8406487:	84 c0                	test   %al,%al
 8406489:	74 0a                	je     8406495 <_ZN10DB_LoadEtc15LoadAchievementEP12SIG_LOAD_ETC+0x73>
 840648b:	b8 00 00 00 00       	mov    $0x0,%eax
 8406490:	e9 61 01 00 00       	jmp    84065f6 <_ZN10DB_LoadEtc15LoadAchievementEP12SIG_LOAD_ETC+0x1d4>
 8406495:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8406498:	89 04 24             	mov    %eax,(%esp)
 840649b:	e8 cc be cd ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 84064a0:	85 c0                	test   %eax,%eax
 84064a2:	0f 94 c0             	sete   %al
 84064a5:	84 c0                	test   %al,%al
 84064a7:	74 0a                	je     84064b3 <_ZN10DB_LoadEtc15LoadAchievementEP12SIG_LOAD_ETC+0x91>
 84064a9:	b8 01 00 00 00       	mov    $0x1,%eax
 84064ae:	e9 43 01 00 00       	jmp    84065f6 <_ZN10DB_LoadEtc15LoadAchievementEP12SIG_LOAD_ETC+0x1d4>
 84064b3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84064b6:	89 04 24             	mov    %eax,(%esp)
 84064b9:	e8 fe df fe ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 84064be:	83 f0 01             	xor    $0x1,%eax
 84064c1:	84 c0                	test   %al,%al
 84064c3:	74 0a                	je     84064cf <_ZN10DB_LoadEtc15LoadAchievementEP12SIG_LOAD_ETC+0xad>
 84064c5:	b8 00 00 00 00       	mov    $0x0,%eax
 84064ca:	e9 27 01 00 00       	jmp    84065f6 <_ZN10DB_LoadEtc15LoadAchievementEP12SIG_LOAD_ETC+0x1d4>
 84064cf:	8d 9d 08 e3 ff ff    	lea    -0x1cf8(%ebp),%ebx
 84064d5:	b8 00 00 00 00       	mov    $0x0,%eax
 84064da:	ba 36 07 00 00       	mov    $0x736,%edx
 84064df:	89 df                	mov    %ebx,%edi
 84064e1:	89 d1                	mov    %edx,%ecx
 84064e3:	f3 ab                	rep stos %eax,%es:(%edi)
 84064e5:	c7 44 24 0c d8 1c 00 	movl   $0x1cd8,0xc(%esp)
 84064ec:	00 
 84064ed:	8d 85 08 e3 ff ff    	lea    -0x1cf8(%ebp),%eax
 84064f3:	89 44 24 08          	mov    %eax,0x8(%esp)
 84064f7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84064fe:	00 
 84064ff:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8406502:	89 04 24             	mov    %eax,(%esp)
 8406505:	e8 10 ee d1 ff       	call   812531a <_ZN5MySQL10get_binaryEiPvi>
 840650a:	83 f0 01             	xor    $0x1,%eax
 840650d:	84 c0                	test   %al,%al
 840650f:	74 0a                	je     840651b <_ZN10DB_LoadEtc15LoadAchievementEP12SIG_LOAD_ETC+0xf9>
 8406511:	b8 00 00 00 00       	mov    $0x0,%eax
 8406516:	e9 db 00 00 00       	jmp    84065f6 <_ZN10DB_LoadEtc15LoadAchievementEP12SIG_LOAD_ETC+0x1d4>
 840651b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8406522:	00 
 8406523:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8406526:	89 04 24             	mov    %eax,(%esp)
 8406529:	e8 b0 ee d1 ff       	call   81253de <_ZN5MySQL17get_binary_lengthEi>
 840652e:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8406531:	c7 45 e0 00 18 00 00 	movl   $0x1800,-0x20(%ebp)
 8406538:	8b 45 0c             	mov    0xc(%ebp),%eax
 840653b:	05 a4 b1 00 00       	add    $0xb1a4,%eax
 8406540:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8406543:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8406547:	8d 95 08 e3 ff ff    	lea    -0x1cf8(%ebp),%edx
 840654d:	89 54 24 08          	mov    %edx,0x8(%esp)
 8406551:	8d 55 e0             	lea    -0x20(%ebp),%edx
 8406554:	89 54 24 04          	mov    %edx,0x4(%esp)
 8406558:	89 04 24             	mov    %eax,(%esp)
 840655b:	e8 a2 bb 2a 00       	call   86b2102 <_Z14uncompress_zipPcRjPKcj>
 8406560:	83 f0 01             	xor    $0x1,%eax
 8406563:	84 c0                	test   %al,%al
 8406565:	74 0a                	je     8406571 <_ZN10DB_LoadEtc15LoadAchievementEP12SIG_LOAD_ETC+0x14f>
 8406567:	b8 00 00 00 00       	mov    $0x0,%eax
 840656c:	e9 85 00 00 00       	jmp    84065f6 <_ZN10DB_LoadEtc15LoadAchievementEP12SIG_LOAD_ETC+0x1d4>
 8406571:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8406578:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 840657f:	eb 26                	jmp    84065a7 <_ZN10DB_LoadEtc15LoadAchievementEP12SIG_LOAD_ETC+0x185>
 8406581:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8406584:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8406587:	89 d0                	mov    %edx,%eax
 8406589:	01 c0                	add    %eax,%eax
 840658b:	01 d0                	add    %edx,%eax
 840658d:	c1 e0 02             	shl    $0x2,%eax
 8406590:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8406593:	05 a0 b1 00 00       	add    $0xb1a0,%eax
 8406598:	8b 40 04             	mov    0x4(%eax),%eax
 840659b:	85 c0                	test   %eax,%eax
 840659d:	74 18                	je     84065b7 <_ZN10DB_LoadEtc15LoadAchievementEP12SIG_LOAD_ETC+0x195>
 840659f:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 84065a3:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 84065a7:	81 7d f4 ff 01 00 00 	cmpl   $0x1ff,-0xc(%ebp)
 84065ae:	0f 9e c0             	setle  %al
 84065b1:	84 c0                	test   %al,%al
 84065b3:	75 cc                	jne    8406581 <_ZN10DB_LoadEtc15LoadAchievementEP12SIG_LOAD_ETC+0x15f>
 84065b5:	eb 01                	jmp    84065b8 <_ZN10DB_LoadEtc15LoadAchievementEP12SIG_LOAD_ETC+0x196>
 84065b7:	90                   	nop
 84065b8:	8b 45 0c             	mov    0xc(%ebp),%eax
 84065bb:	8b 55 f0             	mov    -0x10(%ebp),%edx
 84065be:	89 90 a4 c9 00 00    	mov    %edx,0xc9a4(%eax)
 84065c4:	8b 45 0c             	mov    0xc(%ebp),%eax
 84065c7:	05 a8 c9 00 00       	add    $0xc9a8,%eax
 84065cc:	89 44 24 08          	mov    %eax,0x8(%esp)
 84065d0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84065d7:	00 
 84065d8:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84065db:	89 04 24             	mov    %eax,(%esp)
 84065de:	e8 0f bd cd ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 84065e3:	83 f0 01             	xor    $0x1,%eax
 84065e6:	84 c0                	test   %al,%al
 84065e8:	74 07                	je     84065f1 <_ZN10DB_LoadEtc15LoadAchievementEP12SIG_LOAD_ETC+0x1cf>
 84065ea:	b8 00 00 00 00       	mov    $0x0,%eax
 84065ef:	eb 05                	jmp    84065f6 <_ZN10DB_LoadEtc15LoadAchievementEP12SIG_LOAD_ETC+0x1d4>
 84065f1:	b8 01 00 00 00       	mov    $0x1,%eax
 84065f6:	81 c4 00 1d 00 00    	add    $0x1d00,%esp
 84065fc:	5b                   	pop    %ebx
 84065fd:	5f                   	pop    %edi
 84065fe:	5d                   	pop    %ebp
 84065ff:	c3                   	ret

```

```c
// DB_LoadEtc::LoadAchievement @ 0x8406422

/* DB_LoadEtc::LoadAchievement(SIG_LOAD_ETC*) */

undefined4 __thiscall DB_LoadEtc::LoadAchievement(DB_LoadEtc *this,SIG_LOAD_ETC *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  byte bVar5;
  char local_1cfc [7384];
  uint local_24;
  MySQL *local_20;
  char local_19;
  uint local_18;
  int local_14;
  int local_10;
  
  bVar5 = 0;
  local_20 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  MySQL::set_query(local_20,
                   "seLect achievement, unix_timestamp(last_update_time) from charac_achievement where charac_no=%u"
                   ,*(undefined4 *)(param_1 + 4));
  local_19 = MySQL::exec(local_20,true);
  if (local_19 == '\x01') {
    iVar3 = MySQL::get_n_rows(local_20);
    if (iVar3 == 0) {
      uVar2 = 1;
    }
    else {
      cVar1 = MySQL::fetch(local_20);
      if (cVar1 == '\x01') {
        pcVar4 = local_1cfc;
        for (iVar3 = 0x736; iVar3 != 0; iVar3 = iVar3 + -1) {
          pcVar4[0] = '\0';
          pcVar4[1] = '\0';
          pcVar4[2] = '\0';
          pcVar4[3] = '\0';
          pcVar4 = pcVar4 + ((uint)bVar5 * -2 + 1) * 4;
        }
        cVar1 = MySQL::get_binary(local_20,0,local_1cfc,0x1cd8);
        if (cVar1 == '\x01') {
          local_18 = MySQL::get_binary_length(local_20,0);
          local_24 = 0x1800;
          cVar1 = uncompress_zip((char *)(param_1 + 0xb1a4),&local_24,local_1cfc,local_18);
          if (cVar1 == '\x01') {
            local_14 = 0;
            local_10 = 0;
            while ((local_10 < 0x200 && (*(int *)(param_1 + local_10 * 0xc + 0xb1a4) != 0))) {
              local_14 = local_14 + 1;
              local_10 = local_10 + 1;
            }
            *(int *)(param_1 + 0xc9a4) = local_14;
            cVar1 = MySQL::get_uint(local_20,1,(uint *)(param_1 + 0xc9a8));
            if (cVar1 == '\x01') {
              uVar2 = 1;
            }
            else {
              uVar2 = 0;
            }
          }
          else {
            uVar2 = 0;
          }
        }
        else {
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 0;
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## LoadAttendanceInfo

```asm
// === 08448944 DB_LoadEtc::LoadAttendanceInfo  [0x08448944-0x8448a47] ===
 8448944:	55                   	push   %ebp
 8448945:	89 e5                	mov    %esp,%ebp
 8448947:	53                   	push   %ebx
 8448948:	83 ec 24             	sub    $0x24,%esp
 844894b:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8448950:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8448957:	00 
 8448958:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 844895f:	00 
 8448960:	89 04 24             	mov    %eax,(%esp)
 8448963:	e8 d6 c8 fa ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8448968:	89 45 ec             	mov    %eax,-0x14(%ebp)
 844896b:	8b 45 0c             	mov    0xc(%ebp),%eax
 844896e:	c6 00 00             	movb   $0x0,(%eax)
 8448971:	a1 30 f7 41 09       	mov    0x941f730,%eax
 8448976:	c7 44 24 04 60 00 00 	movl   $0x60,0x4(%esp)
 844897d:	00 
 844897e:	89 04 24             	mov    %eax,(%esp)
 8448981:	e8 12 d0 cc ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 8448986:	8b 10                	mov    (%eax),%edx
 8448988:	83 c2 34             	add    $0x34,%edx
 844898b:	8b 12                	mov    (%edx),%edx
 844898d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8448994:	00 
 8448995:	89 04 24             	mov    %eax,(%esp)
 8448998:	ff d2                	call   *%edx
 844899a:	83 f0 01             	xor    $0x1,%eax
 844899d:	84 c0                	test   %al,%al
 844899f:	74 0a                	je     84489ab <_ZN10DB_LoadEtc18LoadAttendanceInfoEP20SIG_ATTENDANCE_EVENTj+0x67>
 84489a1:	b8 00 00 00 00       	mov    $0x0,%eax
 84489a6:	e9 97 00 00 00       	jmp    8448a42 <_ZN10DB_LoadEtc18LoadAttendanceInfoEP20SIG_ATTENDANCE_EVENTj+0xfe>
 84489ab:	e8 d1 37 c8 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 84489b0:	8b 98 7c 03 00 00    	mov    0x37c(%eax),%ebx
 84489b6:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 84489bd:	e8 dc 32 c8 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 84489c2:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84489c6:	89 04 24             	mov    %eax,(%esp)
 84489c9:	e8 5c 07 cc ff       	call   810912a <_Z23GetCurrentResetBaseTimeli>
 84489ce:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84489d1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84489d8:	00 
 84489d9:	8b 45 10             	mov    0x10(%ebp),%eax
 84489dc:	89 04 24             	mov    %eax,(%esp)
 84489df:	e8 67 06 cc ff       	call   810904b <_Z14NumberToStringji>
 84489e4:	8b 55 f0             	mov    -0x10(%ebp),%edx
 84489e7:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84489eb:	89 44 24 08          	mov    %eax,0x8(%esp)
 84489ef:	c7 44 24 04 cc 88 c5 	movl   $0x8c588cc,0x4(%esp)
 84489f6:	08 
 84489f7:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84489fa:	89 04 24             	mov    %eax,(%esp)
 84489fd:	e8 be b7 fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8448a02:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8448a09:	00 
 8448a0a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8448a0d:	89 04 24             	mov    %eax,(%esp)
 8448a10:	e8 11 b9 fa ff       	call   83f4326 <_ZN5MySQL4execEb>
 8448a15:	83 f0 01             	xor    $0x1,%eax
 8448a18:	84 c0                	test   %al,%al
 8448a1a:	74 07                	je     8448a23 <_ZN10DB_LoadEtc18LoadAttendanceInfoEP20SIG_ATTENDANCE_EVENTj+0xdf>
 8448a1c:	b8 00 00 00 00       	mov    $0x0,%eax
 8448a21:	eb 1f                	jmp    8448a42 <_ZN10DB_LoadEtc18LoadAttendanceInfoEP20SIG_ATTENDANCE_EVENTj+0xfe>
 8448a23:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8448a26:	89 04 24             	mov    %eax,(%esp)
 8448a29:	e8 3e 99 c9 ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8448a2e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8448a31:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8448a35:	75 06                	jne    8448a3d <_ZN10DB_LoadEtc18LoadAttendanceInfoEP20SIG_ATTENDANCE_EVENTj+0xf9>
 8448a37:	8b 45 0c             	mov    0xc(%ebp),%eax
 8448a3a:	c6 00 01             	movb   $0x1,(%eax)
 8448a3d:	b8 01 00 00 00       	mov    $0x1,%eax
 8448a42:	83 c4 24             	add    $0x24,%esp
 8448a45:	5b                   	pop    %ebx
 8448a46:	5d                   	pop    %ebp
 8448a47:	c3                   	ret

```

```c
// DB_LoadEtc::LoadAttendanceInfo @ 0x8448944

/* DB_LoadEtc::LoadAttendanceInfo(SIG_ATTENDANCE_EVENT*, unsigned int) */

undefined4 __thiscall
DB_LoadEtc::LoadAttendanceInfo(DB_LoadEtc *this,SIG_ATTENDANCE_EVENT *param_1,uint param_2)

{
  char cVar1;
  MySQL *this_00;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  undefined4 uVar6;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  *param_1 = (SIG_ATTENDANCE_EVENT)0x0;
  piVar2 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x60);
  cVar1 = (**(code **)(*piVar2 + 0x34))(piVar2,0);
  if (cVar1 == '\x01') {
    iVar4 = G_CEnvironment();
    iVar4 = *(int *)(iVar4 + 0x37c);
    lVar5 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    uVar3 = GetCurrentResetBaseTime(lVar5,iVar4);
    uVar6 = NumberToString(param_2,0);
    MySQL::set_query(this_00,
                     "seLect occ_date from event_1207_attendance where m_id = %s and occ_date > from_unixtime(%u)"
                     ,uVar6,uVar3);
    cVar1 = MySQL::exec(this_00,true);
    if (cVar1 == '\x01') {
      iVar4 = MySQL::get_n_rows(this_00);
      if (iVar4 == 0) {
        *param_1 = (SIG_ATTENDANCE_EVENT)0x1;
      }
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## LoadAuraAvatarOption

```asm
// === 0840838e DB_LoadEtc::LoadAuraAvatarOption  [0x0840838e-0x84084df] ===
 840838e:	55                   	push   %ebp
 840838f:	89 e5                	mov    %esp,%ebp
 8408391:	83 ec 38             	sub    $0x38,%esp
 8408394:	8b 45 0c             	mov    0xc(%ebp),%eax
 8408397:	05 30 d7 00 00       	add    $0xd730,%eax
 840839c:	89 04 24             	mov    %eax,(%esp)
 840839f:	e8 72 52 04 00       	call   844d616 <_ZN18stAuraAvatarOption5resetEv>
 84083a4:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 84083a9:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84083b0:	00 
 84083b1:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84083b8:	00 
 84083b9:	89 04 24             	mov    %eax,(%esp)
 84083bc:	e8 7d ce fe ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 84083c1:	89 45 e8             	mov    %eax,-0x18(%ebp)
 84083c4:	8b 45 0c             	mov    0xc(%ebp),%eax
 84083c7:	8b 40 04             	mov    0x4(%eax),%eax
 84083ca:	89 44 24 08          	mov    %eax,0x8(%esp)
 84083ce:	c7 44 24 04 18 4e c4 	movl   $0x8c44e18,0x4(%esp)
 84083d5:	08 
 84083d6:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84083d9:	89 04 24             	mov    %eax,(%esp)
 84083dc:	e8 df bd fe ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84083e1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84083e8:	00 
 84083e9:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84083ec:	89 04 24             	mov    %eax,(%esp)
 84083ef:	e8 32 bf fe ff       	call   83f4326 <_ZN5MySQL4execEb>
 84083f4:	83 f0 01             	xor    $0x1,%eax
 84083f7:	84 c0                	test   %al,%al
 84083f9:	74 0a                	je     8408405 <_ZN10DB_LoadEtc20LoadAuraAvatarOptionEP12SIG_LOAD_ETC+0x77>
 84083fb:	b8 00 00 00 00       	mov    $0x0,%eax
 8408400:	e9 d9 00 00 00       	jmp    84084de <_ZN10DB_LoadEtc20LoadAuraAvatarOptionEP12SIG_LOAD_ETC+0x150>
 8408405:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8408408:	89 04 24             	mov    %eax,(%esp)
 840840b:	e8 5c 9f cd ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8408410:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8408413:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 8408417:	75 0a                	jne    8408423 <_ZN10DB_LoadEtc20LoadAuraAvatarOptionEP12SIG_LOAD_ETC+0x95>
 8408419:	b8 01 00 00 00       	mov    $0x1,%eax
 840841e:	e9 bb 00 00 00       	jmp    84084de <_ZN10DB_LoadEtc20LoadAuraAvatarOptionEP12SIG_LOAD_ETC+0x150>
 8408423:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
 8408427:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 840842e:	e9 92 00 00 00       	jmp    84084c5 <_ZN10DB_LoadEtc20LoadAuraAvatarOptionEP12SIG_LOAD_ETC+0x137>
 8408433:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8408436:	89 04 24             	mov    %eax,(%esp)
 8408439:	e8 7e c0 fe ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 840843e:	88 45 f3             	mov    %al,-0xd(%ebp)
 8408441:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 8408445:	83 f0 01             	xor    $0x1,%eax
 8408448:	84 c0                	test   %al,%al
 840844a:	0f 85 88 00 00 00    	jne    84084d8 <_ZN10DB_LoadEtc20LoadAuraAvatarOptionEP12SIG_LOAD_ETC+0x14a>
 8408450:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8408453:	89 44 24 08          	mov    %eax,0x8(%esp)
 8408457:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 840845e:	00 
 840845f:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8408462:	89 04 24             	mov    %eax,(%esp)
 8408465:	e8 c2 e4 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 840846a:	83 f0 01             	xor    $0x1,%eax
 840846d:	84 c0                	test   %al,%al
 840846f:	74 07                	je     8408478 <_ZN10DB_LoadEtc20LoadAuraAvatarOptionEP12SIG_LOAD_ETC+0xea>
 8408471:	b8 00 00 00 00       	mov    $0x0,%eax
 8408476:	eb 66                	jmp    84084de <_ZN10DB_LoadEtc20LoadAuraAvatarOptionEP12SIG_LOAD_ETC+0x150>
 8408478:	8d 45 e0             	lea    -0x20(%ebp),%eax
 840847b:	89 44 24 08          	mov    %eax,0x8(%esp)
 840847f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8408486:	00 
 8408487:	8b 45 e8             	mov    -0x18(%ebp),%eax
 840848a:	89 04 24             	mov    %eax,(%esp)
 840848d:	e8 9a e4 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8408492:	83 f0 01             	xor    $0x1,%eax
 8408495:	84 c0                	test   %al,%al
 8408497:	74 07                	je     84084a0 <_ZN10DB_LoadEtc20LoadAuraAvatarOptionEP12SIG_LOAD_ETC+0x112>
 8408499:	b8 00 00 00 00       	mov    $0x0,%eax
 840849e:	eb 3e                	jmp    84084de <_ZN10DB_LoadEtc20LoadAuraAvatarOptionEP12SIG_LOAD_ETC+0x150>
 84084a0:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84084a3:	85 c0                	test   %eax,%eax
 84084a5:	78 1a                	js     84084c1 <_ZN10DB_LoadEtc20LoadAuraAvatarOptionEP12SIG_LOAD_ETC+0x133>
 84084a7:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84084aa:	83 f8 02             	cmp    $0x2,%eax
 84084ad:	7f 12                	jg     84084c1 <_ZN10DB_LoadEtc20LoadAuraAvatarOptionEP12SIG_LOAD_ETC+0x133>
 84084af:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 84084b2:	8b 55 e0             	mov    -0x20(%ebp),%edx
 84084b5:	8b 45 0c             	mov    0xc(%ebp),%eax
 84084b8:	81 c1 cc 35 00 00    	add    $0x35cc,%ecx
 84084be:	89 14 88             	mov    %edx,(%eax,%ecx,4)
 84084c1:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 84084c5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84084c8:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 84084cb:	0f 9c c0             	setl   %al
 84084ce:	84 c0                	test   %al,%al
 84084d0:	0f 85 5d ff ff ff    	jne    8408433 <_ZN10DB_LoadEtc20LoadAuraAvatarOptionEP12SIG_LOAD_ETC+0xa5>
 84084d6:	eb 01                	jmp    84084d9 <_ZN10DB_LoadEtc20LoadAuraAvatarOptionEP12SIG_LOAD_ETC+0x14b>
 84084d8:	90                   	nop
 84084d9:	b8 01 00 00 00       	mov    $0x1,%eax
 84084de:	c9                   	leave
 84084df:	c3                   	ret

```

```c
// DB_LoadEtc::LoadAuraAvatarOption @ 0x840838e

/* DB_LoadEtc::LoadAuraAvatarOption(SIG_LOAD_ETC*) */

undefined4 __thiscall DB_LoadEtc::LoadAuraAvatarOption(DB_LoadEtc *this,SIG_LOAD_ETC *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int local_24;
  int local_20;
  MySQL *local_1c;
  int local_18;
  char local_11;
  int local_10;
  
  stAuraAvatarOption::reset((stAuraAvatarOption *)(param_1 + 0xd730));
  local_1c = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  MySQL::set_query(local_1c,"seLect option_type, value_1 from aura_avatar_option where charac_no=%u"
                   ,*(undefined4 *)(param_1 + 4));
  cVar1 = MySQL::exec(local_1c,true);
  if (cVar1 == '\x01') {
    local_18 = MySQL::get_n_rows(local_1c);
    if (local_18 == 0) {
      uVar2 = 1;
    }
    else {
      local_11 = '\0';
      local_10 = 0;
      while ((local_10 < local_18 && (local_11 = MySQL::fetch(local_1c), local_11 == '\x01'))) {
        cVar1 = MySQL::get_int(local_1c,0,&local_20);
        if (cVar1 != '\x01') {
          return 0;
        }
        cVar1 = MySQL::get_int(local_1c,1,&local_24);
        if (cVar1 != '\x01') {
          return 0;
        }
        if ((-1 < local_20) && (local_20 < 3)) {
          *(int *)(param_1 + (local_20 + 0x35cc) * 4) = local_24;
        }
        local_10 = local_10 + 1;
      }
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## LoadBoosterGage

```asm
// === 08446d9e DB_LoadEtc::LoadBoosterGage  [0x08446d9e-0x8446eeb] ===
 8446d9e:	55                   	push   %ebp
 8446d9f:	89 e5                	mov    %esp,%ebp
 8446da1:	53                   	push   %ebx
 8446da2:	83 ec 34             	sub    $0x34,%esp
 8446da5:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8446daa:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8446db1:	00 
 8446db2:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8446db9:	00 
 8446dba:	89 04 24             	mov    %eax,(%esp)
 8446dbd:	e8 7c e4 fa ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8446dc2:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8446dc5:	8b 45 0c             	mov    0xc(%ebp),%eax
 8446dc8:	8b 00                	mov    (%eax),%eax
 8446dca:	89 44 24 08          	mov    %eax,0x8(%esp)
 8446dce:	c7 44 24 04 b0 7e c5 	movl   $0x8c57eb0,0x4(%esp)
 8446dd5:	08 
 8446dd6:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8446dd9:	89 04 24             	mov    %eax,(%esp)
 8446ddc:	e8 df d3 fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8446de1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8446de8:	00 
 8446de9:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8446dec:	89 04 24             	mov    %eax,(%esp)
 8446def:	e8 32 d5 fa ff       	call   83f4326 <_ZN5MySQL4execEb>
 8446df4:	88 45 eb             	mov    %al,-0x15(%ebp)
 8446df7:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 8446dfb:	83 f0 01             	xor    $0x1,%eax
 8446dfe:	84 c0                	test   %al,%al
 8446e00:	74 0a                	je     8446e0c <_ZN10DB_LoadEtc15LoadBoosterGageEP12SIG_LOAD_ETC+0x6e>
 8446e02:	b8 00 00 00 00       	mov    $0x0,%eax
 8446e07:	e9 d9 00 00 00       	jmp    8446ee5 <_ZN10DB_LoadEtc15LoadBoosterGageEP12SIG_LOAD_ETC+0x147>
 8446e0c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8446e0f:	89 04 24             	mov    %eax,(%esp)
 8446e12:	e8 55 b5 c9 ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8446e17:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8446e1a:	83 7d f0 01          	cmpl   $0x1,-0x10(%ebp)
 8446e1e:	74 0a                	je     8446e2a <_ZN10DB_LoadEtc15LoadBoosterGageEP12SIG_LOAD_ETC+0x8c>
 8446e20:	b8 00 00 00 00       	mov    $0x0,%eax
 8446e25:	e9 bb 00 00 00       	jmp    8446ee5 <_ZN10DB_LoadEtc15LoadBoosterGageEP12SIG_LOAD_ETC+0x147>
 8446e2a:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 8446e2e:	83 f0 01             	xor    $0x1,%eax
 8446e31:	84 c0                	test   %al,%al
 8446e33:	74 0a                	je     8446e3f <_ZN10DB_LoadEtc15LoadBoosterGageEP12SIG_LOAD_ETC+0xa1>
 8446e35:	b8 00 00 00 00       	mov    $0x0,%eax
 8446e3a:	e9 a6 00 00 00       	jmp    8446ee5 <_ZN10DB_LoadEtc15LoadBoosterGageEP12SIG_LOAD_ETC+0x147>
 8446e3f:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8446e46:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8446e49:	89 04 24             	mov    %eax,(%esp)
 8446e4c:	e8 6b d6 fa ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 8446e51:	83 f0 01             	xor    $0x1,%eax
 8446e54:	84 c0                	test   %al,%al
 8446e56:	74 0a                	je     8446e62 <_ZN10DB_LoadEtc15LoadBoosterGageEP12SIG_LOAD_ETC+0xc4>
 8446e58:	b8 00 00 00 00       	mov    $0x0,%eax
 8446e5d:	e9 83 00 00 00       	jmp    8446ee5 <_ZN10DB_LoadEtc15LoadBoosterGageEP12SIG_LOAD_ETC+0x147>
 8446e62:	8b 45 0c             	mov    0xc(%ebp),%eax
 8446e65:	8d 90 cc ec 00 00    	lea    0xeccc(%eax),%edx
 8446e6b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8446e6e:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8446e72:	89 54 24 08          	mov    %edx,0x8(%esp)
 8446e76:	89 44 24 04          	mov    %eax,0x4(%esp)
 8446e7a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8446e7d:	89 04 24             	mov    %eax,(%esp)
 8446e80:	e8 a7 fa cc ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8446e85:	88 45 eb             	mov    %al,-0x15(%ebp)
 8446e88:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 8446e8c:	83 f0 01             	xor    $0x1,%eax
 8446e8f:	84 c0                	test   %al,%al
 8446e91:	74 4d                	je     8446ee0 <_ZN10DB_LoadEtc15LoadBoosterGageEP12SIG_LOAD_ETC+0x142>
 8446e93:	8b 45 0c             	mov    0xc(%ebp),%eax
 8446e96:	8b 18                	mov    (%eax),%ebx
 8446e98:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8446e9f:	00 
 8446ea0:	c7 44 24 08 c4 af 00 	movl   $0xafc4,0x8(%esp)
 8446ea7:	00 
 8446ea8:	c7 44 24 04 a0 b2 c5 	movl   $0x8c5b2a0,0x4(%esp)
 8446eaf:	08 
 8446eb0:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8446eb3:	89 04 24             	mov    %eax,(%esp)
 8446eb6:	e8 5d 88 10 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8446ebb:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8446ebf:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8446ec2:	89 44 24 08          	mov    %eax,0x8(%esp)
 8446ec6:	c7 44 24 04 e4 7e c5 	movl   $0x8c57ee4,0x4(%esp)
 8446ecd:	08 
 8446ece:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8446ed1:	89 04 24             	mov    %eax,(%esp)
 8446ed4:	e8 af 88 10 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8446ed9:	b8 00 00 00 00       	mov    $0x0,%eax
 8446ede:	eb 05                	jmp    8446ee5 <_ZN10DB_LoadEtc15LoadBoosterGageEP12SIG_LOAD_ETC+0x147>
 8446ee0:	b8 01 00 00 00       	mov    $0x1,%eax
 8446ee5:	83 c4 34             	add    $0x34,%esp
 8446ee8:	5b                   	pop    %ebx
 8446ee9:	5d                   	pop    %ebp
 8446eea:	c3                   	ret
 8446eeb:	90                   	nop

```

```c
// DB_LoadEtc::LoadBoosterGage @ 0x8446d9e

/* DB_LoadEtc::LoadBoosterGage(SIG_LOAD_ETC*) */

undefined4 __thiscall DB_LoadEtc::LoadBoosterGage(DB_LoadEtc *this,SIG_LOAD_ETC *param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  cMyTrace local_2c [19];
  char local_19;
  MySQL *local_18;
  int local_14;
  int local_10;
  
  local_18 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  MySQL::set_query(local_18,"seLect gage from member_booster_gage where m_id=%u",
                   *(undefined4 *)param_1);
  local_19 = MySQL::exec(local_18,true);
  if (local_19 == '\x01') {
    local_14 = MySQL::get_n_rows(local_18);
    if (local_14 == 1) {
      if (local_19 == '\x01') {
        local_10 = 0;
        cVar2 = MySQL::fetch(local_18);
        iVar1 = local_10;
        if (cVar2 == '\x01') {
          local_10 = local_10 + 1;
          local_19 = MySQL::get_int(local_18,iVar1,(int *)(param_1 + 0xeccc));
          if (local_19 == '\x01') {
            uVar3 = 1;
          }
          else {
            uVar3 = *(undefined4 *)param_1;
            cMyTrace::cMyTrace(local_2c,"bool DB_LoadEtc::LoadBoosterGage(SIG_LOAD_ETC*)",0xafc4,5);
            cMyTrace::operator()
                      (local_2c,"DB_LoadEtc::LoadBoosterGage, get(%d) ERROR m_id=%u",local_10,uVar3)
            ;
            uVar3 = 0;
          }
        }
        else {
          uVar3 = 0;
        }
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## LoadCharacItemStat

```asm
// === 08445660 DB_LoadEtc::LoadCharacItemStat  [0x08445660-0x84458c5] ===
 8445660:	55                   	push   %ebp
 8445661:	89 e5                	mov    %esp,%ebp
 8445663:	53                   	push   %ebx
 8445664:	83 ec 64             	sub    $0x64,%esp
 8445667:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 844566c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8445673:	00 
 8445674:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 844567b:	00 
 844567c:	89 04 24             	mov    %eax,(%esp)
 844567f:	e8 ba fb fa ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8445684:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8445687:	8b 45 0c             	mov    0xc(%ebp),%eax
 844568a:	8b 40 04             	mov    0x4(%eax),%eax
 844568d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8445691:	c7 44 24 04 a0 75 c5 	movl   $0x8c575a0,0x4(%esp)
 8445698:	08 
 8445699:	8b 45 f0             	mov    -0x10(%ebp),%eax
 844569c:	89 04 24             	mov    %eax,(%esp)
 844569f:	e8 1c eb fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84456a4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84456ab:	00 
 84456ac:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84456af:	89 04 24             	mov    %eax,(%esp)
 84456b2:	e8 6f ec fa ff       	call   83f4326 <_ZN5MySQL4execEb>
 84456b7:	88 45 ef             	mov    %al,-0x11(%ebp)
 84456ba:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
 84456be:	83 f0 01             	xor    $0x1,%eax
 84456c1:	84 c0                	test   %al,%al
 84456c3:	74 0a                	je     84456cf <_ZN10DB_LoadEtc18LoadCharacItemStatEP12SIG_LOAD_ETC+0x6f>
 84456c5:	b8 00 00 00 00       	mov    $0x0,%eax
 84456ca:	e9 f1 01 00 00       	jmp    84458c0 <_ZN10DB_LoadEtc18LoadCharacItemStatEP12SIG_LOAD_ETC+0x260>
 84456cf:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84456d2:	89 04 24             	mov    %eax,(%esp)
 84456d5:	e8 92 cc c9 ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 84456da:	85 c0                	test   %eax,%eax
 84456dc:	0f 94 c0             	sete   %al
 84456df:	84 c0                	test   %al,%al
 84456e1:	74 0a                	je     84456ed <_ZN10DB_LoadEtc18LoadCharacItemStatEP12SIG_LOAD_ETC+0x8d>
 84456e3:	b8 01 00 00 00       	mov    $0x1,%eax
 84456e8:	e9 d3 01 00 00       	jmp    84458c0 <_ZN10DB_LoadEtc18LoadCharacItemStatEP12SIG_LOAD_ETC+0x260>
 84456ed:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84456f0:	89 04 24             	mov    %eax,(%esp)
 84456f3:	e8 c4 ed fa ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 84456f8:	88 45 ef             	mov    %al,-0x11(%ebp)
 84456fb:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
 84456ff:	83 f0 01             	xor    $0x1,%eax
 8445702:	84 c0                	test   %al,%al
 8445704:	74 0a                	je     8445710 <_ZN10DB_LoadEtc18LoadCharacItemStatEP12SIG_LOAD_ETC+0xb0>
 8445706:	b8 00 00 00 00       	mov    $0x0,%eax
 844570b:	e9 b0 01 00 00       	jmp    84458c0 <_ZN10DB_LoadEtc18LoadCharacItemStatEP12SIG_LOAD_ETC+0x260>
 8445710:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8445717:	8b 45 0c             	mov    0xc(%ebp),%eax
 844571a:	8d 90 0c 23 00 00    	lea    0x230c(%eax),%edx
 8445720:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8445723:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8445727:	c7 44 24 0c 94 01 00 	movl   $0x194,0xc(%esp)
 844572e:	00 
 844572f:	89 54 24 08          	mov    %edx,0x8(%esp)
 8445733:	89 44 24 04          	mov    %eax,0x4(%esp)
 8445737:	8b 45 f0             	mov    -0x10(%ebp),%eax
 844573a:	89 04 24             	mov    %eax,(%esp)
 844573d:	e8 d8 fb cd ff       	call   812531a <_ZN5MySQL10get_binaryEiPvi>
 8445742:	88 45 ef             	mov    %al,-0x11(%ebp)
 8445745:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
 8445749:	83 f0 01             	xor    $0x1,%eax
 844574c:	84 c0                	test   %al,%al
 844574e:	74 51                	je     84457a1 <_ZN10DB_LoadEtc18LoadCharacItemStatEP12SIG_LOAD_ETC+0x141>
 8445750:	8b 45 0c             	mov    0xc(%ebp),%eax
 8445753:	8b 58 04             	mov    0x4(%eax),%ebx
 8445756:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 844575d:	00 
 844575e:	c7 44 24 08 8a ac 00 	movl   $0xac8a,0x8(%esp)
 8445765:	00 
 8445766:	c7 44 24 04 a0 b3 c5 	movl   $0x8c5b3a0,0x4(%esp)
 844576d:	08 
 844576e:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8445771:	89 04 24             	mov    %eax,(%esp)
 8445774:	e8 9f 9f 10 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8445779:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 844577d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8445780:	89 44 24 08          	mov    %eax,0x8(%esp)
 8445784:	c7 44 24 04 f8 75 c5 	movl   $0x8c575f8,0x4(%esp)
 844578b:	08 
 844578c:	8d 45 bc             	lea    -0x44(%ebp),%eax
 844578f:	89 04 24             	mov    %eax,(%esp)
 8445792:	e8 f1 9f 10 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8445797:	b8 00 00 00 00       	mov    $0x0,%eax
 844579c:	e9 1f 01 00 00       	jmp    84458c0 <_ZN10DB_LoadEtc18LoadCharacItemStatEP12SIG_LOAD_ETC+0x260>
 84457a1:	8b 45 0c             	mov    0xc(%ebp),%eax
 84457a4:	8d 90 a4 24 00 00    	lea    0x24a4(%eax),%edx
 84457aa:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84457ad:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 84457b1:	c7 44 24 0c 94 01 00 	movl   $0x194,0xc(%esp)
 84457b8:	00 
 84457b9:	89 54 24 08          	mov    %edx,0x8(%esp)
 84457bd:	89 44 24 04          	mov    %eax,0x4(%esp)
 84457c1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84457c4:	89 04 24             	mov    %eax,(%esp)
 84457c7:	e8 4e fb cd ff       	call   812531a <_ZN5MySQL10get_binaryEiPvi>
 84457cc:	88 45 ef             	mov    %al,-0x11(%ebp)
 84457cf:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
 84457d3:	83 f0 01             	xor    $0x1,%eax
 84457d6:	84 c0                	test   %al,%al
 84457d8:	74 51                	je     844582b <_ZN10DB_LoadEtc18LoadCharacItemStatEP12SIG_LOAD_ETC+0x1cb>
 84457da:	8b 45 0c             	mov    0xc(%ebp),%eax
 84457dd:	8b 58 04             	mov    0x4(%eax),%ebx
 84457e0:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 84457e7:	00 
 84457e8:	c7 44 24 08 91 ac 00 	movl   $0xac91,0x8(%esp)
 84457ef:	00 
 84457f0:	c7 44 24 04 a0 b3 c5 	movl   $0x8c5b3a0,0x4(%esp)
 84457f7:	08 
 84457f8:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84457fb:	89 04 24             	mov    %eax,(%esp)
 84457fe:	e8 15 9f 10 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8445803:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8445807:	8b 45 f4             	mov    -0xc(%ebp),%eax
 844580a:	89 44 24 08          	mov    %eax,0x8(%esp)
 844580e:	c7 44 24 04 3c 76 c5 	movl   $0x8c5763c,0x4(%esp)
 8445815:	08 
 8445816:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8445819:	89 04 24             	mov    %eax,(%esp)
 844581c:	e8 67 9f 10 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8445821:	b8 00 00 00 00       	mov    $0x0,%eax
 8445826:	e9 95 00 00 00       	jmp    84458c0 <_ZN10DB_LoadEtc18LoadCharacItemStatEP12SIG_LOAD_ETC+0x260>
 844582b:	8b 45 0c             	mov    0xc(%ebp),%eax
 844582e:	05 40 d7 00 00       	add    $0xd740,%eax
 8445833:	89 c2                	mov    %eax,%edx
 8445835:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8445838:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 844583c:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 8445843:	00 
 8445844:	c7 44 24 0c 88 13 00 	movl   $0x1388,0xc(%esp)
 844584b:	00 
 844584c:	89 54 24 08          	mov    %edx,0x8(%esp)
 8445850:	89 44 24 04          	mov    %eax,0x4(%esp)
 8445854:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8445857:	89 04 24             	mov    %eax,(%esp)
 844585a:	e8 1a 64 fb ff       	call   83fbc79 <_Z24get_compressed_blob_dataP5MySQLiPcii>
 844585f:	88 45 ef             	mov    %al,-0x11(%ebp)
 8445862:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
 8445866:	83 f0 01             	xor    $0x1,%eax
 8445869:	84 c0                	test   %al,%al
 844586b:	74 4e                	je     84458bb <_ZN10DB_LoadEtc18LoadCharacItemStatEP12SIG_LOAD_ETC+0x25b>
 844586d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8445870:	8b 58 04             	mov    0x4(%eax),%ebx
 8445873:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 844587a:	00 
 844587b:	c7 44 24 08 98 ac 00 	movl   $0xac98,0x8(%esp)
 8445882:	00 
 8445883:	c7 44 24 04 a0 b3 c5 	movl   $0x8c5b3a0,0x4(%esp)
 844588a:	08 
 844588b:	8d 45 dc             	lea    -0x24(%ebp),%eax
 844588e:	89 04 24             	mov    %eax,(%esp)
 8445891:	e8 82 9e 10 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8445896:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 844589a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 844589d:	89 44 24 08          	mov    %eax,0x8(%esp)
 84458a1:	c7 44 24 04 84 76 c5 	movl   $0x8c57684,0x4(%esp)
 84458a8:	08 
 84458a9:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84458ac:	89 04 24             	mov    %eax,(%esp)
 84458af:	e8 d4 9e 10 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84458b4:	b8 00 00 00 00       	mov    $0x0,%eax
 84458b9:	eb 05                	jmp    84458c0 <_ZN10DB_LoadEtc18LoadCharacItemStatEP12SIG_LOAD_ETC+0x260>
 84458bb:	b8 01 00 00 00       	mov    $0x1,%eax
 84458c0:	83 c4 64             	add    $0x64,%esp
 84458c3:	5b                   	pop    %ebx
 84458c4:	5d                   	pop    %ebp
 84458c5:	c3                   	ret

```

```c
// DB_LoadEtc::LoadCharacItemStat @ 0x8445660

/* DB_LoadEtc::LoadCharacItemStat(SIG_LOAD_ETC*) */

undefined4 __thiscall DB_LoadEtc::LoadCharacItemStat(DB_LoadEtc *this,SIG_LOAD_ETC *param_1)

{
  undefined4 uVar1;
  int iVar2;
  cMyTrace local_48 [16];
  cMyTrace local_38 [16];
  cMyTrace local_28 [19];
  char local_15;
  MySQL *local_14;
  int local_10;
  
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  MySQL::set_query(local_14,
                   "seLect cooltime_item, effect_item, check_flag from charac_item_stat where charac_no=%u"
                   ,*(undefined4 *)(param_1 + 4));
  local_15 = MySQL::exec(local_14,true);
  if (local_15 == '\x01') {
    iVar2 = MySQL::get_n_rows(local_14);
    if (iVar2 == 0) {
      uVar1 = 1;
    }
    else {
      local_15 = MySQL::fetch(local_14);
      if (local_15 == '\x01') {
        local_10 = 1;
        local_15 = MySQL::get_binary(local_14,0,param_1 + 0x230c,0x194);
        iVar2 = local_10;
        if (local_15 == '\x01') {
          local_10 = local_10 + 1;
          local_15 = MySQL::get_binary(local_14,iVar2,param_1 + 0x24a4,0x194);
          iVar2 = local_10;
          if (local_15 == '\x01') {
            local_10 = local_10 + 1;
            local_15 = get_compressed_blob_data(local_14,iVar2,(char *)(param_1 + 0xd740),5000,0);
            if (local_15 == '\x01') {
              uVar1 = 1;
            }
            else {
              uVar1 = *(undefined4 *)(param_1 + 4);
              cMyTrace::cMyTrace(local_28,"bool DB_LoadEtc::LoadCharacItemStat(SIG_LOAD_ETC*)",
                                 0xac98,5);
              cMyTrace::operator()
                        (local_28,
                         "DB_LoadEtc::LoadCharacItemStat item_dictionary, get(%d) ERROR charac_no=%u"
                         ,local_10,uVar1);
              uVar1 = 0;
            }
          }
          else {
            uVar1 = *(undefined4 *)(param_1 + 4);
            cMyTrace::cMyTrace(local_38,"bool DB_LoadEtc::LoadCharacItemStat(SIG_LOAD_ETC*)",0xac91,
                               5);
            cMyTrace::operator()
                      (local_38,
                       "DB_LoadEtc::LoadCharacItemStat effect_item, get(%d) ERROR charac_no=%u",
                       local_10,uVar1);
            uVar1 = 0;
          }
        }
        else {
          uVar1 = *(undefined4 *)(param_1 + 4);
          cMyTrace::cMyTrace(local_48,"bool DB_LoadEtc::LoadCharacItemStat(SIG_LOAD_ETC*)",0xac8a,5)
          ;
          cMyTrace::operator()
                    (local_48,"DB_LoadEtc::LoadCharacItemStat cooltime, get(%d) ERROR charac_no=%u",
                     local_10,uVar1);
          uVar1 = 0;
        }
      }
      else {
        uVar1 = 0;
      }
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## LoadCharacOption

```asm
// === 084084e0 DB_LoadEtc::LoadCharacOption  [0x084084e0-0x8408765] ===
 84084e0:	55                   	push   %ebp
 84084e1:	89 e5                	mov    %esp,%ebp
 84084e3:	53                   	push   %ebx
 84084e4:	83 ec 54             	sub    $0x54,%esp
 84084e7:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 84084ec:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84084f3:	00 
 84084f4:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84084fb:	00 
 84084fc:	89 04 24             	mov    %eax,(%esp)
 84084ff:	e8 3a cd fe ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8408504:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8408507:	8b 45 14             	mov    0x14(%ebp),%eax
 840850a:	8b 40 04             	mov    0x4(%eax),%eax
 840850d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8408511:	c7 44 24 04 60 4e c4 	movl   $0x8c44e60,0x4(%esp)
 8408518:	08 
 8408519:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840851c:	89 04 24             	mov    %eax,(%esp)
 840851f:	e8 9c bc fe ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8408524:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 840852b:	00 
 840852c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840852f:	89 04 24             	mov    %eax,(%esp)
 8408532:	e8 ef bd fe ff       	call   83f4326 <_ZN5MySQL4execEb>
 8408537:	83 f0 01             	xor    $0x1,%eax
 840853a:	84 c0                	test   %al,%al
 840853c:	74 0a                	je     8408548 <_ZN10DB_LoadEtc16LoadCharacOptionEiiP12SIG_LOAD_ETC+0x68>
 840853e:	b8 00 00 00 00       	mov    $0x0,%eax
 8408543:	e9 18 02 00 00       	jmp    8408760 <_ZN10DB_LoadEtc16LoadCharacOptionEiiP12SIG_LOAD_ETC+0x280>
 8408548:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840854b:	89 04 24             	mov    %eax,(%esp)
 840854e:	e8 19 9e cd ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8408553:	85 c0                	test   %eax,%eax
 8408555:	0f 94 c0             	sete   %al
 8408558:	84 c0                	test   %al,%al
 840855a:	74 0a                	je     8408566 <_ZN10DB_LoadEtc16LoadCharacOptionEiiP12SIG_LOAD_ETC+0x86>
 840855c:	b8 01 00 00 00       	mov    $0x1,%eax
 8408561:	e9 fa 01 00 00       	jmp    8408760 <_ZN10DB_LoadEtc16LoadCharacOptionEiiP12SIG_LOAD_ETC+0x280>
 8408566:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8408569:	89 04 24             	mov    %eax,(%esp)
 840856c:	e8 4b bf fe ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 8408571:	83 f0 01             	xor    $0x1,%eax
 8408574:	84 c0                	test   %al,%al
 8408576:	74 0a                	je     8408582 <_ZN10DB_LoadEtc16LoadCharacOptionEiiP12SIG_LOAD_ETC+0xa2>
 8408578:	b8 00 00 00 00       	mov    $0x0,%eax
 840857d:	e9 de 01 00 00       	jmp    8408760 <_ZN10DB_LoadEtc16LoadCharacOptionEiiP12SIG_LOAD_ETC+0x280>
 8408582:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 8408589:	8b 45 14             	mov    0x14(%ebp),%eax
 840858c:	8d 90 c8 ea 00 00    	lea    0xeac8(%eax),%edx
 8408592:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8408595:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 8408599:	c7 44 24 0c 00 02 00 	movl   $0x200,0xc(%esp)
 84085a0:	00 
 84085a1:	89 54 24 08          	mov    %edx,0x8(%esp)
 84085a5:	89 44 24 04          	mov    %eax,0x4(%esp)
 84085a9:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84085ac:	89 04 24             	mov    %eax,(%esp)
 84085af:	e8 66 cd d1 ff       	call   812531a <_ZN5MySQL10get_binaryEiPvi>
 84085b4:	83 f0 01             	xor    $0x1,%eax
 84085b7:	84 c0                	test   %al,%al
 84085b9:	74 0a                	je     84085c5 <_ZN10DB_LoadEtc16LoadCharacOptionEiiP12SIG_LOAD_ETC+0xe5>
 84085bb:	b8 00 00 00 00       	mov    $0x0,%eax
 84085c0:	e9 9b 01 00 00       	jmp    8408760 <_ZN10DB_LoadEtc16LoadCharacOptionEiiP12SIG_LOAD_ETC+0x280>
 84085c5:	8b 45 14             	mov    0x14(%ebp),%eax
 84085c8:	05 d8 ec 00 00       	add    $0xecd8,%eax
 84085cd:	89 c2                	mov    %eax,%edx
 84085cf:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84085d2:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 84085d6:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 84085dd:	00 
 84085de:	c7 44 24 0c c0 5d 00 	movl   $0x5dc0,0xc(%esp)
 84085e5:	00 
 84085e6:	89 54 24 08          	mov    %edx,0x8(%esp)
 84085ea:	89 44 24 04          	mov    %eax,0x4(%esp)
 84085ee:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84085f1:	89 04 24             	mov    %eax,(%esp)
 84085f4:	e8 80 36 ff ff       	call   83fbc79 <_Z24get_compressed_blob_dataP5MySQLiPcii>
 84085f9:	83 f0 01             	xor    $0x1,%eax
 84085fc:	84 c0                	test   %al,%al
 84085fe:	74 51                	je     8408651 <_ZN10DB_LoadEtc16LoadCharacOptionEiiP12SIG_LOAD_ETC+0x171>
 8408600:	8b 45 14             	mov    0x14(%ebp),%eax
 8408603:	8b 58 04             	mov    0x4(%eax),%ebx
 8408606:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 840860d:	00 
 840860e:	c7 44 24 08 5d 1f 00 	movl   $0x1f5d,0x8(%esp)
 8408615:	00 
 8408616:	c7 44 24 04 00 d4 c5 	movl   $0x8c5d400,0x4(%esp)
 840861d:	08 
 840861e:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8408621:	89 04 24             	mov    %eax,(%esp)
 8408624:	e8 ef 70 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8408629:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 840862d:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8408630:	89 44 24 08          	mov    %eax,0x8(%esp)
 8408634:	c7 44 24 04 d8 4e c4 	movl   $0x8c44ed8,0x4(%esp)
 840863b:	08 
 840863c:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 840863f:	89 04 24             	mov    %eax,(%esp)
 8408642:	e8 41 71 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8408647:	b8 00 00 00 00       	mov    $0x0,%eax
 840864c:	e9 0f 01 00 00       	jmp    8408760 <_ZN10DB_LoadEtc16LoadCharacOptionEiiP12SIG_LOAD_ETC+0x280>
 8408651:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8408658:	eb 2c                	jmp    8408686 <_ZN10DB_LoadEtc16LoadCharacOptionEiiP12SIG_LOAD_ETC+0x1a6>
 840865a:	8b 55 f0             	mov    -0x10(%ebp),%edx
 840865d:	8b 45 14             	mov    0x14(%ebp),%eax
 8408660:	81 c2 34 3b 00 00    	add    $0x3b34,%edx
 8408666:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 840866a:	85 c0                	test   %eax,%eax
 840866c:	79 14                	jns    8408682 <_ZN10DB_LoadEtc16LoadCharacOptionEiiP12SIG_LOAD_ETC+0x1a2>
 840866e:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8408671:	8b 45 14             	mov    0x14(%ebp),%eax
 8408674:	81 c2 34 3b 00 00    	add    $0x3b34,%edx
 840867a:	c7 44 90 0c 00 00 00 	movl   $0x0,0xc(%eax,%edx,4)
 8408681:	00 
 8408682:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8408686:	83 7d f0 04          	cmpl   $0x4,-0x10(%ebp)
 840868a:	0f 9e c0             	setle  %al
 840868d:	84 c0                	test   %al,%al
 840868f:	75 c9                	jne    840865a <_ZN10DB_LoadEtc16LoadCharacOptionEiiP12SIG_LOAD_ETC+0x17a>
 8408691:	8b 45 14             	mov    0x14(%ebp),%eax
 8408694:	c6 80 98 4a 01 00 00 	movb   $0x0,0x14a98(%eax)
 840869b:	8b 45 14             	mov    0x14(%ebp),%eax
 840869e:	8d 90 98 4a 01 00    	lea    0x14a98(%eax),%edx
 84086a4:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84086a7:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 84086ab:	89 54 24 08          	mov    %edx,0x8(%esp)
 84086af:	89 44 24 04          	mov    %eax,0x4(%esp)
 84086b3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84086b6:	89 04 24             	mov    %eax,(%esp)
 84086b9:	e8 fc 57 cf ff       	call   80fdeba <_ZN5MySQL9get_ubyteEiRh>
 84086be:	83 f0 01             	xor    $0x1,%eax
 84086c1:	84 c0                	test   %al,%al
 84086c3:	74 0a                	je     84086cf <_ZN10DB_LoadEtc16LoadCharacOptionEiiP12SIG_LOAD_ETC+0x1ef>
 84086c5:	b8 00 00 00 00       	mov    $0x0,%eax
 84086ca:	e9 91 00 00 00       	jmp    8408760 <_ZN10DB_LoadEtc16LoadCharacOptionEiiP12SIG_LOAD_ETC+0x280>
 84086cf:	8b 45 14             	mov    0x14(%ebp),%eax
 84086d2:	8d 90 9a 4a 01 00    	lea    0x14a9a(%eax),%edx
 84086d8:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84086db:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 84086df:	c7 44 24 0c 10 00 00 	movl   $0x10,0xc(%esp)
 84086e6:	00 
 84086e7:	89 54 24 08          	mov    %edx,0x8(%esp)
 84086eb:	89 44 24 04          	mov    %eax,0x4(%esp)
 84086ef:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84086f2:	89 04 24             	mov    %eax,(%esp)
 84086f5:	e8 f0 46 ce ff       	call   80ecdea <_ZN5MySQL7get_strEiPci>
 84086fa:	83 f0 01             	xor    $0x1,%eax
 84086fd:	84 c0                	test   %al,%al
 84086ff:	74 07                	je     8408708 <_ZN10DB_LoadEtc16LoadCharacOptionEiiP12SIG_LOAD_ETC+0x228>
 8408701:	b8 00 00 00 00       	mov    $0x0,%eax
 8408706:	eb 58                	jmp    8408760 <_ZN10DB_LoadEtc16LoadCharacOptionEiiP12SIG_LOAD_ETC+0x280>
 8408708:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 840870f:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8408716:	eb 26                	jmp    840873e <_ZN10DB_LoadEtc16LoadCharacOptionEiiP12SIG_LOAD_ETC+0x25e>
 8408718:	8b 55 f4             	mov    -0xc(%ebp),%edx
 840871b:	8b 4d 14             	mov    0x14(%ebp),%ecx
 840871e:	89 d0                	mov    %edx,%eax
 8408720:	01 c0                	add    %eax,%eax
 8408722:	01 d0                	add    %edx,%eax
 8408724:	c1 e0 03             	shl    $0x3,%eax
 8408727:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 840872a:	05 d0 ec 00 00       	add    $0xecd0,%eax
 840872f:	8b 40 08             	mov    0x8(%eax),%eax
 8408732:	85 c0                	test   %eax,%eax
 8408734:	74 18                	je     840874e <_ZN10DB_LoadEtc16LoadCharacOptionEiiP12SIG_LOAD_ETC+0x26e>
 8408736:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 840873a:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 840873e:	81 7d f4 e7 03 00 00 	cmpl   $0x3e7,-0xc(%ebp)
 8408745:	0f 9e c0             	setle  %al
 8408748:	84 c0                	test   %al,%al
 840874a:	75 cc                	jne    8408718 <_ZN10DB_LoadEtc16LoadCharacOptionEiiP12SIG_LOAD_ETC+0x238>
 840874c:	eb 01                	jmp    840874f <_ZN10DB_LoadEtc16LoadCharacOptionEiiP12SIG_LOAD_ETC+0x26f>
 840874e:	90                   	nop
 840874f:	8b 45 14             	mov    0x14(%ebp),%eax
 8408752:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8408755:	89 90 d4 ec 00 00    	mov    %edx,0xecd4(%eax)
 840875b:	b8 01 00 00 00       	mov    $0x1,%eax
 8408760:	83 c4 54             	add    $0x54,%esp
 8408763:	5b                   	pop    %ebx
 8408764:	5d                   	pop    %ebp
 8408765:	c3                   	ret

```

```c
// DB_LoadEtc::LoadCharacOption @ 0x84084e0

/* DB_LoadEtc::LoadCharacOption(int, int, SIG_LOAD_ETC*) */

undefined4 DB_LoadEtc::LoadCharacOption(int param_1,int param_2,SIG_LOAD_ETC *param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int in_stack_00000010;
  cMyTrace local_30 [16];
  MySQL *local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_20 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  MySQL::set_query(local_20,
                   "seLect options , best_clear_time, blue_marble_enter_count, charac_inform_notice from charac_option where charac_no=%u"
                   ,*(undefined4 *)(in_stack_00000010 + 4));
  cVar1 = MySQL::exec(local_20,true);
  if (cVar1 == '\x01') {
    iVar3 = MySQL::get_n_rows(local_20);
    if (iVar3 == 0) {
      uVar2 = 1;
    }
    else {
      cVar1 = MySQL::fetch(local_20);
      if (cVar1 == '\x01') {
        local_1c = 1;
        cVar1 = MySQL::get_binary(local_20,0,(void *)(in_stack_00000010 + 0xeac8),0x200);
        iVar3 = local_1c;
        if (cVar1 == '\x01') {
          local_1c = local_1c + 1;
          cVar1 = get_compressed_blob_data
                            (local_20,iVar3,(char *)(in_stack_00000010 + 0xecd8),24000,0);
          iVar3 = local_1c;
          if (cVar1 == '\x01') {
            for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
              if (*(int *)(in_stack_00000010 + 0xc + (local_14 + 0x3b34) * 4) < 0) {
                *(undefined4 *)(in_stack_00000010 + 0xc + (local_14 + 0x3b34) * 4) = 0;
              }
            }
            *(undefined1 *)(in_stack_00000010 + 0x14a98) = 0;
            local_1c = local_1c + 1;
            cVar1 = MySQL::get_ubyte(local_20,iVar3,(uchar *)(in_stack_00000010 + 0x14a98));
            iVar3 = local_1c;
            if (cVar1 == '\x01') {
              local_1c = local_1c + 1;
              cVar1 = MySQL::get_str(local_20,iVar3,(char *)(in_stack_00000010 + 0x14a9a),0x10);
              if (cVar1 == '\x01') {
                local_18 = 0;
                local_10 = 0;
                while ((local_10 < 1000 &&
                       (*(int *)(in_stack_00000010 + local_10 * 0x18 + 0xecd8) != 0))) {
                  local_18 = local_18 + 1;
                  local_10 = local_10 + 1;
                }
                *(int *)(in_stack_00000010 + 0xecd4) = local_18;
                uVar2 = 1;
              }
              else {
                uVar2 = 0;
              }
            }
            else {
              uVar2 = 0;
            }
          }
          else {
            uVar2 = *(undefined4 *)(in_stack_00000010 + 4);
            cMyTrace::cMyTrace(local_30,"bool DB_LoadEtc::LoadCharacOption(int, int, SIG_LOAD_ETC*)"
                               ,0x1f5d,5);
            cMyTrace::operator()
                      (local_30,
                       "DB_LoadEtc::LoadCharacOption best_clear_time, get(%d) ERROR charac_no=%u",
                       local_1c,uVar2);
            uVar2 = 0;
          }
        }
        else {
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 0;
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## LoadComboSkill

```asm
// === 0844a47a DB_LoadEtc::LoadComboSkill  [0x0844a47a-0x844a703] ===
 844a47a:	55                   	push   %ebp
 844a47b:	89 e5                	mov    %esp,%ebp
 844a47d:	56                   	push   %esi
 844a47e:	53                   	push   %ebx
 844a47f:	83 ec 70             	sub    $0x70,%esp
 844a482:	8b 45 10             	mov    0x10(%ebp),%eax
 844a485:	85 c0                	test   %eax,%eax
 844a487:	74 59                	je     844a4e2 <_ZN10DB_LoadEtc14LoadComboSkillEP12SIG_LOAD_ETC20ENUM_SKILL_TREE_KIND+0x68>
 844a489:	8b 45 10             	mov    0x10(%ebp),%eax
 844a48c:	83 f8 01             	cmp    $0x1,%eax
 844a48f:	74 51                	je     844a4e2 <_ZN10DB_LoadEtc14LoadComboSkillEP12SIG_LOAD_ETC20ENUM_SKILL_TREE_KIND+0x68>
 844a491:	8b 45 0c             	mov    0xc(%ebp),%eax
 844a494:	8b 70 04             	mov    0x4(%eax),%esi
 844a497:	8b 5d 10             	mov    0x10(%ebp),%ebx
 844a49a:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 844a4a1:	00 
 844a4a2:	c7 44 24 08 c4 ba 00 	movl   $0xbac4,0x8(%esp)
 844a4a9:	00 
 844a4aa:	c7 44 24 04 20 ae c5 	movl   $0x8c5ae20,0x4(%esp)
 844a4b1:	08 
 844a4b2:	8d 45 ac             	lea    -0x54(%ebp),%eax
 844a4b5:	89 04 24             	mov    %eax,(%esp)
 844a4b8:	e8 5b 52 10 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 844a4bd:	89 74 24 0c          	mov    %esi,0xc(%esp)
 844a4c1:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 844a4c5:	c7 44 24 04 54 90 c5 	movl   $0x8c59054,0x4(%esp)
 844a4cc:	08 
 844a4cd:	8d 45 ac             	lea    -0x54(%ebp),%eax
 844a4d0:	89 04 24             	mov    %eax,(%esp)
 844a4d3:	e8 b0 52 10 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 844a4d8:	b8 00 00 00 00       	mov    $0x0,%eax
 844a4dd:	e9 1a 02 00 00       	jmp    844a6fc <_ZN10DB_LoadEtc14LoadComboSkillEP12SIG_LOAD_ETC20ENUM_SKILL_TREE_KIND+0x282>
 844a4e2:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 844a4e7:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 844a4ee:	00 
 844a4ef:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 844a4f6:	00 
 844a4f7:	89 04 24             	mov    %eax,(%esp)
 844a4fa:	e8 3f ad fa ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 844a4ff:	89 45 ec             	mov    %eax,-0x14(%ebp)
 844a502:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 844a506:	75 0a                	jne    844a512 <_ZN10DB_LoadEtc14LoadComboSkillEP12SIG_LOAD_ETC20ENUM_SKILL_TREE_KIND+0x98>
 844a508:	b8 00 00 00 00       	mov    $0x0,%eax
 844a50d:	e9 ea 01 00 00       	jmp    844a6fc <_ZN10DB_LoadEtc14LoadComboSkillEP12SIG_LOAD_ETC20ENUM_SKILL_TREE_KIND+0x282>
 844a512:	8b 45 0c             	mov    0xc(%ebp),%eax
 844a515:	8b 58 04             	mov    0x4(%eax),%ebx
 844a518:	8b 45 10             	mov    0x10(%ebp),%eax
 844a51b:	89 04 24             	mov    %eax,(%esp)
 844a51e:	e8 68 fe ff ff       	call   844a38b <_Z22getComboSkillTableName20ENUM_SKILL_TREE_KIND>
 844a523:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 844a527:	89 44 24 08          	mov    %eax,0x8(%esp)
 844a52b:	c7 44 24 04 8c 90 c5 	movl   $0x8c5908c,0x4(%esp)
 844a532:	08 
 844a533:	8b 45 ec             	mov    -0x14(%ebp),%eax
 844a536:	89 04 24             	mov    %eax,(%esp)
 844a539:	e8 82 9c fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 844a53e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 844a545:	00 
 844a546:	8b 45 ec             	mov    -0x14(%ebp),%eax
 844a549:	89 04 24             	mov    %eax,(%esp)
 844a54c:	e8 d5 9d fa ff       	call   83f4326 <_ZN5MySQL4execEb>
 844a551:	88 45 f3             	mov    %al,-0xd(%ebp)
 844a554:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 844a558:	83 f0 01             	xor    $0x1,%eax
 844a55b:	84 c0                	test   %al,%al
 844a55d:	74 4a                	je     844a5a9 <_ZN10DB_LoadEtc14LoadComboSkillEP12SIG_LOAD_ETC20ENUM_SKILL_TREE_KIND+0x12f>
 844a55f:	8b 45 0c             	mov    0xc(%ebp),%eax
 844a562:	8b 58 04             	mov    0x4(%eax),%ebx
 844a565:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 844a56c:	00 
 844a56d:	c7 44 24 08 d4 ba 00 	movl   $0xbad4,0x8(%esp)
 844a574:	00 
 844a575:	c7 44 24 04 20 ae c5 	movl   $0x8c5ae20,0x4(%esp)
 844a57c:	08 
 844a57d:	8d 45 bc             	lea    -0x44(%ebp),%eax
 844a580:	89 04 24             	mov    %eax,(%esp)
 844a583:	e8 90 51 10 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 844a588:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 844a58c:	c7 44 24 04 e8 90 c5 	movl   $0x8c590e8,0x4(%esp)
 844a593:	08 
 844a594:	8d 45 bc             	lea    -0x44(%ebp),%eax
 844a597:	89 04 24             	mov    %eax,(%esp)
 844a59a:	e8 e9 51 10 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 844a59f:	b8 00 00 00 00       	mov    $0x0,%eax
 844a5a4:	e9 53 01 00 00       	jmp    844a6fc <_ZN10DB_LoadEtc14LoadComboSkillEP12SIG_LOAD_ETC20ENUM_SKILL_TREE_KIND+0x282>
 844a5a9:	8b 45 ec             	mov    -0x14(%ebp),%eax
 844a5ac:	89 04 24             	mov    %eax,(%esp)
 844a5af:	e8 b8 7d c9 ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 844a5b4:	89 45 f4             	mov    %eax,-0xc(%ebp)
 844a5b7:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 844a5bb:	75 0a                	jne    844a5c7 <_ZN10DB_LoadEtc14LoadComboSkillEP12SIG_LOAD_ETC20ENUM_SKILL_TREE_KIND+0x14d>
 844a5bd:	b8 01 00 00 00       	mov    $0x1,%eax
 844a5c2:	e9 35 01 00 00       	jmp    844a6fc <_ZN10DB_LoadEtc14LoadComboSkillEP12SIG_LOAD_ETC20ENUM_SKILL_TREE_KIND+0x282>
 844a5c7:	8b 45 10             	mov    0x10(%ebp),%eax
 844a5ca:	85 c0                	test   %eax,%eax
 844a5cc:	75 10                	jne    844a5de <_ZN10DB_LoadEtc14LoadComboSkillEP12SIG_LOAD_ETC20ENUM_SKILL_TREE_KIND+0x164>
 844a5ce:	8b 45 f4             	mov    -0xc(%ebp),%eax
 844a5d1:	89 c2                	mov    %eax,%edx
 844a5d3:	8b 45 0c             	mov    0xc(%ebp),%eax
 844a5d6:	88 90 ae 4a 01 00    	mov    %dl,0x14aae(%eax)
 844a5dc:	eb 16                	jmp    844a5f4 <_ZN10DB_LoadEtc14LoadComboSkillEP12SIG_LOAD_ETC20ENUM_SKILL_TREE_KIND+0x17a>
 844a5de:	8b 45 10             	mov    0x10(%ebp),%eax
 844a5e1:	83 f8 01             	cmp    $0x1,%eax
 844a5e4:	75 0e                	jne    844a5f4 <_ZN10DB_LoadEtc14LoadComboSkillEP12SIG_LOAD_ETC20ENUM_SKILL_TREE_KIND+0x17a>
 844a5e6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 844a5e9:	89 c2                	mov    %eax,%edx
 844a5eb:	8b 45 0c             	mov    0xc(%ebp),%eax
 844a5ee:	88 90 af 4a 01 00    	mov    %dl,0x14aaf(%eax)
 844a5f4:	8b 45 10             	mov    0x10(%ebp),%eax
 844a5f7:	85 c0                	test   %eax,%eax
 844a5f9:	75 7d                	jne    844a678 <_ZN10DB_LoadEtc14LoadComboSkillEP12SIG_LOAD_ETC20ENUM_SKILL_TREE_KIND+0x1fe>
 844a5fb:	8b 45 0c             	mov    0xc(%ebp),%eax
 844a5fe:	8d 90 b4 4a 01 00    	lea    0x14ab4(%eax),%edx
 844a604:	8b 45 0c             	mov    0xc(%ebp),%eax
 844a607:	8b 40 04             	mov    0x4(%eax),%eax
 844a60a:	89 54 24 10          	mov    %edx,0x10(%esp)
 844a60e:	8b 55 f4             	mov    -0xc(%ebp),%edx
 844a611:	89 54 24 0c          	mov    %edx,0xc(%esp)
 844a615:	89 44 24 08          	mov    %eax,0x8(%esp)
 844a619:	8b 45 ec             	mov    -0x14(%ebp),%eax
 844a61c:	89 44 24 04          	mov    %eax,0x4(%esp)
 844a620:	8b 45 08             	mov    0x8(%ebp),%eax
 844a623:	89 04 24             	mov    %eax,(%esp)
 844a626:	e8 d9 00 00 00       	call   844a704 <_ZN10DB_LoadEtc13getComboSkillEP5MySQLjiP15comoboSkillData>
 844a62b:	83 f0 01             	xor    $0x1,%eax
 844a62e:	84 c0                	test   %al,%al
 844a630:	0f 84 c1 00 00 00    	je     844a6f7 <_ZN10DB_LoadEtc14LoadComboSkillEP12SIG_LOAD_ETC20ENUM_SKILL_TREE_KIND+0x27d>
 844a636:	8b 45 0c             	mov    0xc(%ebp),%eax
 844a639:	8b 58 04             	mov    0x4(%eax),%ebx
 844a63c:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 844a643:	00 
 844a644:	c7 44 24 08 e7 ba 00 	movl   $0xbae7,0x8(%esp)
 844a64b:	00 
 844a64c:	c7 44 24 04 20 ae c5 	movl   $0x8c5ae20,0x4(%esp)
 844a653:	08 
 844a654:	8d 45 cc             	lea    -0x34(%ebp),%eax
 844a657:	89 04 24             	mov    %eax,(%esp)
 844a65a:	e8 b9 50 10 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 844a65f:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 844a663:	c7 44 24 04 20 91 c5 	movl   $0x8c59120,0x4(%esp)
 844a66a:	08 
 844a66b:	8d 45 cc             	lea    -0x34(%ebp),%eax
 844a66e:	89 04 24             	mov    %eax,(%esp)
 844a671:	e8 12 51 10 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 844a676:	eb 7f                	jmp    844a6f7 <_ZN10DB_LoadEtc14LoadComboSkillEP12SIG_LOAD_ETC20ENUM_SKILL_TREE_KIND+0x27d>
 844a678:	8b 45 10             	mov    0x10(%ebp),%eax
 844a67b:	83 f8 01             	cmp    $0x1,%eax
 844a67e:	75 77                	jne    844a6f7 <_ZN10DB_LoadEtc14LoadComboSkillEP12SIG_LOAD_ETC20ENUM_SKILL_TREE_KIND+0x27d>
 844a680:	8b 45 0c             	mov    0xc(%ebp),%eax
 844a683:	8d 90 08 4b 01 00    	lea    0x14b08(%eax),%edx
 844a689:	8b 45 0c             	mov    0xc(%ebp),%eax
 844a68c:	8b 40 04             	mov    0x4(%eax),%eax
 844a68f:	89 54 24 10          	mov    %edx,0x10(%esp)
 844a693:	8b 55 f4             	mov    -0xc(%ebp),%edx
 844a696:	89 54 24 0c          	mov    %edx,0xc(%esp)
 844a69a:	89 44 24 08          	mov    %eax,0x8(%esp)
 844a69e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 844a6a1:	89 44 24 04          	mov    %eax,0x4(%esp)
 844a6a5:	8b 45 08             	mov    0x8(%ebp),%eax
 844a6a8:	89 04 24             	mov    %eax,(%esp)
 844a6ab:	e8 54 00 00 00       	call   844a704 <_ZN10DB_LoadEtc13getComboSkillEP5MySQLjiP15comoboSkillData>
 844a6b0:	83 f0 01             	xor    $0x1,%eax
 844a6b3:	84 c0                	test   %al,%al
 844a6b5:	74 40                	je     844a6f7 <_ZN10DB_LoadEtc14LoadComboSkillEP12SIG_LOAD_ETC20ENUM_SKILL_TREE_KIND+0x27d>
 844a6b7:	8b 45 0c             	mov    0xc(%ebp),%eax
 844a6ba:	8b 58 04             	mov    0x4(%eax),%ebx
 844a6bd:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 844a6c4:	00 
 844a6c5:	c7 44 24 08 ef ba 00 	movl   $0xbaef,0x8(%esp)
 844a6cc:	00 
 844a6cd:	c7 44 24 04 20 ae c5 	movl   $0x8c5ae20,0x4(%esp)
 844a6d4:	08 
 844a6d5:	8d 45 dc             	lea    -0x24(%ebp),%eax
 844a6d8:	89 04 24             	mov    %eax,(%esp)
 844a6db:	e8 38 50 10 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 844a6e0:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 844a6e4:	c7 44 24 04 20 91 c5 	movl   $0x8c59120,0x4(%esp)
 844a6eb:	08 
 844a6ec:	8d 45 dc             	lea    -0x24(%ebp),%eax
 844a6ef:	89 04 24             	mov    %eax,(%esp)
 844a6f2:	e8 91 50 10 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 844a6f7:	b8 01 00 00 00       	mov    $0x1,%eax
 844a6fc:	83 c4 70             	add    $0x70,%esp
 844a6ff:	5b                   	pop    %ebx
 844a700:	5e                   	pop    %esi
 844a701:	5d                   	pop    %ebp
 844a702:	c3                   	ret
 844a703:	90                   	nop

```

```c
// DB_LoadEtc::LoadComboSkill @ 0x844a47a

/* DB_LoadEtc::LoadComboSkill(SIG_LOAD_ETC*, ENUM_SKILL_TREE_KIND) */

undefined4 __thiscall DB_LoadEtc::LoadComboSkill(DB_LoadEtc *this,int param_1,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  cMyTrace local_58 [16];
  cMyTrace local_48 [16];
  cMyTrace local_38 [16];
  cMyTrace local_28 [16];
  MySQL *local_18;
  char local_11;
  int local_10;
  
  if ((param_3 == 0) || (param_3 == 1)) {
    local_18 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
    if (local_18 == (MySQL *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(param_1 + 4);
      uVar3 = getComboSkillTableName(param_3);
      MySQL::set_query(local_18,
                       "seLect combo_idx, value1, value2, value3, value4, value5, value6 from %s where charac_no=%u"
                       ,uVar3,uVar2);
      local_11 = MySQL::exec(local_18,true);
      if (local_11 == '\x01') {
        local_10 = MySQL::get_n_rows(local_18);
        if (local_10 == 0) {
          uVar2 = 1;
        }
        else {
          if (param_3 == 0) {
            *(char *)(param_1 + 0x14aae) = (char)local_10;
          }
          else if (param_3 == 1) {
            *(char *)(param_1 + 0x14aaf) = (char)local_10;
          }
          if (param_3 == 0) {
            cVar1 = getComboSkill(this,local_18,*(uint *)(param_1 + 4),local_10,
                                  (comoboSkillData *)(param_1 + 0x14ab4));
            if (cVar1 != '\x01') {
              uVar2 = *(undefined4 *)(param_1 + 4);
              cMyTrace::cMyTrace(local_38,
                                 "bool DB_LoadEtc::LoadComboSkill(SIG_LOAD_ETC*, ENUM_SKILL_TREE_KIND)"
                                 ,0xbae7,5);
              cMyTrace::operator()
                        (local_38,"DB_LoadEtc::LoadComboSkill, getComboSkill ERROR charac_no=%u",
                         uVar2);
            }
          }
          else if (param_3 == 1) {
            cVar1 = getComboSkill(this,local_18,*(uint *)(param_1 + 4),local_10,
                                  (comoboSkillData *)(param_1 + 0x14b08));
            if (cVar1 != '\x01') {
              uVar2 = *(undefined4 *)(param_1 + 4);
              cMyTrace::cMyTrace(local_28,
                                 "bool DB_LoadEtc::LoadComboSkill(SIG_LOAD_ETC*, ENUM_SKILL_TREE_KIND)"
                                 ,0xbaef,5);
              cMyTrace::operator()
                        (local_28,"DB_LoadEtc::LoadComboSkill, getComboSkill ERROR charac_no=%u",
                         uVar2);
            }
          }
          uVar2 = 1;
        }
      }
      else {
        uVar2 = *(undefined4 *)(param_1 + 4);
        cMyTrace::cMyTrace(local_48,
                           "bool DB_LoadEtc::LoadComboSkill(SIG_LOAD_ETC*, ENUM_SKILL_TREE_KIND)",
                           0xbad4,5);
        cMyTrace::operator()(local_48,"DB_LoadEtc::LoadComboSkill, exec() ERROR charac_no=%u",uVar2)
        ;
        uVar2 = 0;
      }
    }
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 4);
    cMyTrace::cMyTrace(local_58,
                       "bool DB_LoadEtc::LoadComboSkill(SIG_LOAD_ETC*, ENUM_SKILL_TREE_KIND)",0xbac4
                       ,5);
    cMyTrace::operator()
              (local_58,"DB_LoadEtc::LoadComboSkill kind(%d) error characNo(%u)",param_3,uVar2);
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## LoadComboSkillInfo

```asm
// === 0844a3b2 DB_LoadEtc::LoadComboSkillInfo  [0x0844a3b2-0x844a479] ===
 844a3b2:	55                   	push   %ebp
 844a3b3:	89 e5                	mov    %esp,%ebp
 844a3b5:	83 ec 28             	sub    $0x28,%esp
 844a3b8:	8b 45 0c             	mov    0xc(%ebp),%eax
 844a3bb:	8b 80 b0 4a 01 00    	mov    0x14ab0(%eax),%eax
 844a3c1:	83 f8 09             	cmp    $0x9,%eax
 844a3c4:	0f 85 ae 00 00 00    	jne    844a478 <_ZN10DB_LoadEtc18LoadComboSkillInfoEP12SIG_LOAD_ETC+0xc6>
 844a3ca:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 844a3d1:	00 
 844a3d2:	8b 45 0c             	mov    0xc(%ebp),%eax
 844a3d5:	89 44 24 04          	mov    %eax,0x4(%esp)
 844a3d9:	8b 45 08             	mov    0x8(%ebp),%eax
 844a3dc:	89 04 24             	mov    %eax,(%esp)
 844a3df:	e8 96 00 00 00       	call   844a47a <_ZN10DB_LoadEtc14LoadComboSkillEP12SIG_LOAD_ETC20ENUM_SKILL_TREE_KIND>
 844a3e4:	83 f0 01             	xor    $0x1,%eax
 844a3e7:	84 c0                	test   %al,%al
 844a3e9:	74 36                	je     844a421 <_ZN10DB_LoadEtc18LoadComboSkillInfoEP12SIG_LOAD_ETC+0x6f>
 844a3eb:	c7 44 24 10 fc 8f c5 	movl   $0x8c58ffc,0x10(%esp)
 844a3f2:	08 
 844a3f3:	c7 44 24 0c b4 ba 00 	movl   $0xbab4,0xc(%esp)
 844a3fa:	00 
 844a3fb:	c7 44 24 08 80 ae c5 	movl   $0x8c5ae80,0x8(%esp)
 844a402:	08 
 844a403:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 844a40a:	08 
 844a40b:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 844a412:	e8 f3 97 68 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 844a417:	8b 45 0c             	mov    0xc(%ebp),%eax
 844a41a:	c7 40 08 01 00 00 00 	movl   $0x1,0x8(%eax)
 844a421:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 844a428:	00 
 844a429:	8b 45 0c             	mov    0xc(%ebp),%eax
 844a42c:	89 44 24 04          	mov    %eax,0x4(%esp)
 844a430:	8b 45 08             	mov    0x8(%ebp),%eax
 844a433:	89 04 24             	mov    %eax,(%esp)
 844a436:	e8 3f 00 00 00       	call   844a47a <_ZN10DB_LoadEtc14LoadComboSkillEP12SIG_LOAD_ETC20ENUM_SKILL_TREE_KIND>
 844a43b:	83 f0 01             	xor    $0x1,%eax
 844a43e:	84 c0                	test   %al,%al
 844a440:	74 36                	je     844a478 <_ZN10DB_LoadEtc18LoadComboSkillInfoEP12SIG_LOAD_ETC+0xc6>
 844a442:	c7 44 24 10 24 90 c5 	movl   $0x8c59024,0x10(%esp)
 844a449:	08 
 844a44a:	c7 44 24 0c ba ba 00 	movl   $0xbaba,0xc(%esp)
 844a451:	00 
 844a452:	c7 44 24 08 80 ae c5 	movl   $0x8c5ae80,0x8(%esp)
 844a459:	08 
 844a45a:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 844a461:	08 
 844a462:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 844a469:	e8 9c 97 68 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 844a46e:	8b 45 0c             	mov    0xc(%ebp),%eax
 844a471:	c7 40 08 01 00 00 00 	movl   $0x1,0x8(%eax)
 844a478:	c9                   	leave
 844a479:	c3                   	ret

```

```c
// DB_LoadEtc::LoadComboSkillInfo @ 0x844a3b2

/* DB_LoadEtc::LoadComboSkillInfo(SIG_LOAD_ETC*) */

void __thiscall DB_LoadEtc::LoadComboSkillInfo(DB_LoadEtc *this,SIG_LOAD_ETC *param_1)

{
  char cVar1;
  
  if (*(int *)(param_1 + 0x14ab0) == 9) {
    cVar1 = LoadComboSkill(this,param_1,0);
    if (cVar1 != '\x01') {
      LogManager::logFormat
                (1,"DBThread.cpp","void DB_LoadEtc::LoadComboSkillInfo(SIG_LOAD_ETC*)",0xbab4,
                 "DB_LoadETC ERROR : LoadComboSkill Fail");
      *(undefined4 *)(param_1 + 8) = 1;
    }
    cVar1 = LoadComboSkill(this,param_1,1);
    if (cVar1 != '\x01') {
      LogManager::logFormat
                (1,"DBThread.cpp","void DB_LoadEtc::LoadComboSkillInfo(SIG_LOAD_ETC*)",0xbaba,
                 "DB_LoadETC ERROR : LoadComboSkill Second Fail");
      *(undefined4 *)(param_1 + 8) = 1;
    }
  }
  return;
}

```

---

## LoadConditionEventInfo

```asm
// === 08407296 DB_LoadEtc::LoadConditionEventInfo  [0x08407296-0x84073a9] ===
 8407296:	55                   	push   %ebp
 8407297:	89 e5                	mov    %esp,%ebp
 8407299:	83 ec 28             	sub    $0x28,%esp
 840729c:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 84072a1:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84072a8:	00 
 84072a9:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84072b0:	00 
 84072b1:	89 04 24             	mov    %eax,(%esp)
 84072b4:	e8 85 df fe ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 84072b9:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84072bc:	8b 45 0c             	mov    0xc(%ebp),%eax
 84072bf:	8b 40 04             	mov    0x4(%eax),%eax
 84072c2:	89 44 24 08          	mov    %eax,0x8(%esp)
 84072c6:	c7 44 24 04 48 48 c4 	movl   $0x8c44848,0x4(%esp)
 84072cd:	08 
 84072ce:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84072d1:	89 04 24             	mov    %eax,(%esp)
 84072d4:	e8 e7 ce fe ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84072d9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84072e0:	00 
 84072e1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84072e4:	89 04 24             	mov    %eax,(%esp)
 84072e7:	e8 3a d0 fe ff       	call   83f4326 <_ZN5MySQL4execEb>
 84072ec:	83 f0 01             	xor    $0x1,%eax
 84072ef:	84 c0                	test   %al,%al
 84072f1:	74 0a                	je     84072fd <_ZN10DB_LoadEtc22LoadConditionEventInfoEP12SIG_LOAD_ETC+0x67>
 84072f3:	b8 00 00 00 00       	mov    $0x0,%eax
 84072f8:	e9 ab 00 00 00       	jmp    84073a8 <_ZN10DB_LoadEtc22LoadConditionEventInfoEP12SIG_LOAD_ETC+0x112>
 84072fd:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8407300:	89 04 24             	mov    %eax,(%esp)
 8407303:	e8 64 b0 cd ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8407308:	89 45 f4             	mov    %eax,-0xc(%ebp)
 840730b:	83 7d f4 01          	cmpl   $0x1,-0xc(%ebp)
 840730f:	74 1f                	je     8407330 <_ZN10DB_LoadEtc22LoadConditionEventInfoEP12SIG_LOAD_ETC+0x9a>
 8407311:	8b 45 0c             	mov    0xc(%ebp),%eax
 8407314:	66 c7 80 c8 40 00 00 	movw   $0x0,0x40c8(%eax)
 840731b:	00 00 
 840731d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8407320:	66 c7 80 ca 40 00 00 	movw   $0x0,0x40ca(%eax)
 8407327:	00 00 
 8407329:	b8 01 00 00 00       	mov    $0x1,%eax
 840732e:	eb 78                	jmp    84073a8 <_ZN10DB_LoadEtc22LoadConditionEventInfoEP12SIG_LOAD_ETC+0x112>
 8407330:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8407333:	89 04 24             	mov    %eax,(%esp)
 8407336:	e8 81 d1 fe ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 840733b:	83 f0 01             	xor    $0x1,%eax
 840733e:	84 c0                	test   %al,%al
 8407340:	74 07                	je     8407349 <_ZN10DB_LoadEtc22LoadConditionEventInfoEP12SIG_LOAD_ETC+0xb3>
 8407342:	b8 00 00 00 00       	mov    $0x0,%eax
 8407347:	eb 5f                	jmp    84073a8 <_ZN10DB_LoadEtc22LoadConditionEventInfoEP12SIG_LOAD_ETC+0x112>
 8407349:	8b 45 0c             	mov    0xc(%ebp),%eax
 840734c:	05 c8 40 00 00       	add    $0x40c8,%eax
 8407351:	89 44 24 08          	mov    %eax,0x8(%esp)
 8407355:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 840735c:	00 
 840735d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8407360:	89 04 24             	mov    %eax,(%esp)
 8407363:	e8 84 6a cf ff       	call   80fddec <_ZN5MySQL9get_shortEiRs>
 8407368:	83 f0 01             	xor    $0x1,%eax
 840736b:	84 c0                	test   %al,%al
 840736d:	74 07                	je     8407376 <_ZN10DB_LoadEtc22LoadConditionEventInfoEP12SIG_LOAD_ETC+0xe0>
 840736f:	b8 00 00 00 00       	mov    $0x0,%eax
 8407374:	eb 32                	jmp    84073a8 <_ZN10DB_LoadEtc22LoadConditionEventInfoEP12SIG_LOAD_ETC+0x112>
 8407376:	8b 45 0c             	mov    0xc(%ebp),%eax
 8407379:	05 ca 40 00 00       	add    $0x40ca,%eax
 840737e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8407382:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8407389:	00 
 840738a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840738d:	89 04 24             	mov    %eax,(%esp)
 8407390:	e8 57 6a cf ff       	call   80fddec <_ZN5MySQL9get_shortEiRs>
 8407395:	83 f0 01             	xor    $0x1,%eax
 8407398:	84 c0                	test   %al,%al
 840739a:	74 07                	je     84073a3 <_ZN10DB_LoadEtc22LoadConditionEventInfoEP12SIG_LOAD_ETC+0x10d>
 840739c:	b8 00 00 00 00       	mov    $0x0,%eax
 84073a1:	eb 05                	jmp    84073a8 <_ZN10DB_LoadEtc22LoadConditionEventInfoEP12SIG_LOAD_ETC+0x112>
 84073a3:	b8 01 00 00 00       	mov    $0x1,%eax
 84073a8:	c9                   	leave
 84073a9:	c3                   	ret

```

```c
// DB_LoadEtc::LoadConditionEventInfo @ 0x8407296

/* DB_LoadEtc::LoadConditionEventInfo(SIG_LOAD_ETC*) */

undefined4 __thiscall DB_LoadEtc::LoadConditionEventInfo(DB_LoadEtc *this,SIG_LOAD_ETC *param_1)

{
  char cVar1;
  MySQL *this_00;
  undefined4 uVar2;
  int iVar3;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  MySQL::set_query(this_00,
                   "seLect current_step, reward_step from event_conditionable_info where charac_no=%u"
                   ,*(undefined4 *)(param_1 + 4));
  cVar1 = MySQL::exec(this_00,true);
  if (cVar1 == '\x01') {
    iVar3 = MySQL::get_n_rows(this_00);
    if (iVar3 == 1) {
      cVar1 = MySQL::fetch(this_00);
      if (cVar1 == '\x01') {
        cVar1 = MySQL::get_short(this_00,0,(short *)(param_1 + 0x40c8));
        if (cVar1 == '\x01') {
          cVar1 = MySQL::get_short(this_00,1,(short *)(param_1 + 0x40ca));
          if (cVar1 == '\x01') {
            uVar2 = 1;
          }
          else {
            uVar2 = 0;
          }
        }
        else {
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      *(undefined2 *)(param_1 + 0x40c8) = 0;
      *(undefined2 *)(param_1 + 0x40ca) = 0;
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## LoadEventServerMessageInfo

```asm
// === 084356a2 DB_LoadEtc::LoadEventServerMessageInfo  [0x084356a2-0x8435a01] ===
 84356a2:	55                   	push   %ebp
 84356a3:	89 e5                	mov    %esp,%ebp
 84356a5:	57                   	push   %edi
 84356a6:	53                   	push   %ebx
 84356a7:	83 c4 80             	add    $0xffffff80,%esp
 84356aa:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 84356af:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84356b6:	00 
 84356b7:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 84356be:	00 
 84356bf:	89 04 24             	mov    %eax,(%esp)
 84356c2:	e8 77 fb fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 84356c7:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84356ca:	8b 45 0c             	mov    0xc(%ebp),%eax
 84356cd:	8b 90 34 2d 00 00    	mov    0x2d34(%eax),%edx
 84356d3:	8b 45 0c             	mov    0xc(%ebp),%eax
 84356d6:	8b 80 30 2d 00 00    	mov    0x2d30(%eax),%eax
 84356dc:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84356e0:	89 44 24 08          	mov    %eax,0x8(%esp)
 84356e4:	c7 44 24 04 10 32 c5 	movl   $0x8c53210,0x4(%esp)
 84356eb:	08 
 84356ec:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84356ef:	89 04 24             	mov    %eax,(%esp)
 84356f2:	e8 c9 ea fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84356f7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84356fe:	00 
 84356ff:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8435702:	89 04 24             	mov    %eax,(%esp)
 8435705:	e8 1c ec fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 843570a:	83 f0 01             	xor    $0x1,%eax
 843570d:	84 c0                	test   %al,%al
 843570f:	74 0a                	je     843571b <_ZN10DB_LoadEtc26LoadEventServerMessageInfoEP12SIG_LOAD_ETC+0x79>
 8435711:	b8 00 00 00 00       	mov    $0x0,%eax
 8435716:	e9 df 02 00 00       	jmp    84359fa <_ZN10DB_LoadEtc26LoadEventServerMessageInfoEP12SIG_LOAD_ETC+0x358>
 843571b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 843571e:	89 04 24             	mov    %eax,(%esp)
 8435721:	e8 46 cc ca ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8435726:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8435729:	c6 45 ef 00          	movb   $0x0,-0x11(%ebp)
 843572d:	c6 45 e3 00          	movb   $0x0,-0x1d(%ebp)
 8435731:	c6 45 e2 00          	movb   $0x0,-0x1e(%ebp)
 8435735:	8d 55 96             	lea    -0x6a(%ebp),%edx
 8435738:	bb 32 00 00 00       	mov    $0x32,%ebx
 843573d:	b8 00 00 00 00       	mov    $0x0,%eax
 8435742:	89 d1                	mov    %edx,%ecx
 8435744:	83 e1 02             	and    $0x2,%ecx
 8435747:	85 c9                	test   %ecx,%ecx
 8435749:	74 09                	je     8435754 <_ZN10DB_LoadEtc26LoadEventServerMessageInfoEP12SIG_LOAD_ETC+0xb2>
 843574b:	66 89 02             	mov    %ax,(%edx)
 843574e:	83 c2 02             	add    $0x2,%edx
 8435751:	83 eb 02             	sub    $0x2,%ebx
 8435754:	89 d9                	mov    %ebx,%ecx
 8435756:	c1 e9 02             	shr    $0x2,%ecx
 8435759:	89 d7                	mov    %edx,%edi
 843575b:	f3 ab                	rep stos %eax,%es:(%edi)
 843575d:	89 fa                	mov    %edi,%edx
 843575f:	89 d9                	mov    %ebx,%ecx
 8435761:	83 e1 02             	and    $0x2,%ecx
 8435764:	85 c9                	test   %ecx,%ecx
 8435766:	74 06                	je     843576e <_ZN10DB_LoadEtc26LoadEventServerMessageInfoEP12SIG_LOAD_ETC+0xcc>
 8435768:	66 89 02             	mov    %ax,(%edx)
 843576b:	83 c2 02             	add    $0x2,%edx
 843576e:	89 d9                	mov    %ebx,%ecx
 8435770:	83 e1 01             	and    $0x1,%ecx
 8435773:	85 c9                	test   %ecx,%ecx
 8435775:	74 05                	je     843577c <_ZN10DB_LoadEtc26LoadEventServerMessageInfoEP12SIG_LOAD_ETC+0xda>
 8435777:	88 02                	mov    %al,(%edx)
 8435779:	83 c2 01             	add    $0x1,%edx
 843577c:	c7 45 ce 00 00 00 00 	movl   $0x0,-0x32(%ebp)
 8435783:	c7 45 d2 00 00 00 00 	movl   $0x0,-0x2e(%ebp)
 843578a:	c7 45 d6 00 00 00 00 	movl   $0x0,-0x2a(%ebp)
 8435791:	c7 45 da 00 00 00 00 	movl   $0x0,-0x26(%ebp)
 8435798:	c7 45 de 00 00 00 00 	movl   $0x0,-0x22(%ebp)
 843579f:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 84357a6:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 84357ad:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 84357b4:	e9 1d 02 00 00       	jmp    84359d6 <_ZN10DB_LoadEtc26LoadEventServerMessageInfoEP12SIG_LOAD_ETC+0x334>
 84357b9:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84357bc:	89 04 24             	mov    %eax,(%esp)
 84357bf:	e8 f8 ec fb ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 84357c4:	88 45 ef             	mov    %al,-0x11(%ebp)
 84357c7:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
 84357cb:	83 f0 01             	xor    $0x1,%eax
 84357ce:	84 c0                	test   %al,%al
 84357d0:	74 0a                	je     84357dc <_ZN10DB_LoadEtc26LoadEventServerMessageInfoEP12SIG_LOAD_ETC+0x13a>
 84357d2:	b8 00 00 00 00       	mov    $0x0,%eax
 84357d7:	e9 1e 02 00 00       	jmp    84359fa <_ZN10DB_LoadEtc26LoadEventServerMessageInfoEP12SIG_LOAD_ETC+0x358>
 84357dc:	8d 45 e3             	lea    -0x1d(%ebp),%eax
 84357df:	89 44 24 08          	mov    %eax,0x8(%esp)
 84357e3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84357ea:	00 
 84357eb:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84357ee:	89 04 24             	mov    %eax,(%esp)
 84357f1:	e8 5e 86 cc ff       	call   80fde54 <_ZN5MySQL8get_byteEiRc>
 84357f6:	88 45 ef             	mov    %al,-0x11(%ebp)
 84357f9:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
 84357fd:	83 f0 01             	xor    $0x1,%eax
 8435800:	84 c0                	test   %al,%al
 8435802:	74 0a                	je     843580e <_ZN10DB_LoadEtc26LoadEventServerMessageInfoEP12SIG_LOAD_ETC+0x16c>
 8435804:	b8 00 00 00 00       	mov    $0x0,%eax
 8435809:	e9 ec 01 00 00       	jmp    84359fa <_ZN10DB_LoadEtc26LoadEventServerMessageInfoEP12SIG_LOAD_ETC+0x358>
 843580e:	8d 45 e2             	lea    -0x1e(%ebp),%eax
 8435811:	89 44 24 08          	mov    %eax,0x8(%esp)
 8435815:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843581c:	00 
 843581d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8435820:	89 04 24             	mov    %eax,(%esp)
 8435823:	e8 2c 86 cc ff       	call   80fde54 <_ZN5MySQL8get_byteEiRc>
 8435828:	88 45 ef             	mov    %al,-0x11(%ebp)
 843582b:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
 843582f:	83 f0 01             	xor    $0x1,%eax
 8435832:	84 c0                	test   %al,%al
 8435834:	74 0a                	je     8435840 <_ZN10DB_LoadEtc26LoadEventServerMessageInfoEP12SIG_LOAD_ETC+0x19e>
 8435836:	b8 00 00 00 00       	mov    $0x0,%eax
 843583b:	e9 ba 01 00 00       	jmp    84359fa <_ZN10DB_LoadEtc26LoadEventServerMessageInfoEP12SIG_LOAD_ETC+0x358>
 8435840:	c7 44 24 0c 14 00 00 	movl   $0x14,0xc(%esp)
 8435847:	00 
 8435848:	8d 45 ce             	lea    -0x32(%ebp),%eax
 843584b:	89 44 24 08          	mov    %eax,0x8(%esp)
 843584f:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8435856:	00 
 8435857:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 843585a:	89 04 24             	mov    %eax,(%esp)
 843585d:	e8 88 75 cb ff       	call   80ecdea <_ZN5MySQL7get_strEiPci>
 8435862:	88 45 ef             	mov    %al,-0x11(%ebp)
 8435865:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
 8435869:	83 f0 01             	xor    $0x1,%eax
 843586c:	84 c0                	test   %al,%al
 843586e:	74 0a                	je     843587a <_ZN10DB_LoadEtc26LoadEventServerMessageInfoEP12SIG_LOAD_ETC+0x1d8>
 8435870:	b8 00 00 00 00       	mov    $0x0,%eax
 8435875:	e9 80 01 00 00       	jmp    84359fa <_ZN10DB_LoadEtc26LoadEventServerMessageInfoEP12SIG_LOAD_ETC+0x358>
 843587a:	c7 44 24 0c 32 00 00 	movl   $0x32,0xc(%esp)
 8435881:	00 
 8435882:	8d 45 96             	lea    -0x6a(%ebp),%eax
 8435885:	89 44 24 08          	mov    %eax,0x8(%esp)
 8435889:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8435890:	00 
 8435891:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8435894:	89 04 24             	mov    %eax,(%esp)
 8435897:	e8 4e 75 cb ff       	call   80ecdea <_ZN5MySQL7get_strEiPci>
 843589c:	88 45 ef             	mov    %al,-0x11(%ebp)
 843589f:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
 84358a3:	83 f0 01             	xor    $0x1,%eax
 84358a6:	84 c0                	test   %al,%al
 84358a8:	74 0a                	je     84358b4 <_ZN10DB_LoadEtc26LoadEventServerMessageInfoEP12SIG_LOAD_ETC+0x212>
 84358aa:	b8 00 00 00 00       	mov    $0x0,%eax
 84358af:	e9 46 01 00 00       	jmp    84359fa <_ZN10DB_LoadEtc26LoadEventServerMessageInfoEP12SIG_LOAD_ETC+0x358>
 84358b4:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84358b7:	89 44 24 08          	mov    %eax,0x8(%esp)
 84358bb:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 84358c2:	00 
 84358c3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84358c6:	89 04 24             	mov    %eax,(%esp)
 84358c9:	e8 5e 10 ce ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 84358ce:	88 45 ef             	mov    %al,-0x11(%ebp)
 84358d1:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
 84358d5:	83 f0 01             	xor    $0x1,%eax
 84358d8:	84 c0                	test   %al,%al
 84358da:	74 0a                	je     84358e6 <_ZN10DB_LoadEtc26LoadEventServerMessageInfoEP12SIG_LOAD_ETC+0x244>
 84358dc:	b8 00 00 00 00       	mov    $0x0,%eax
 84358e1:	e9 14 01 00 00       	jmp    84359fa <_ZN10DB_LoadEtc26LoadEventServerMessageInfoEP12SIG_LOAD_ETC+0x358>
 84358e6:	8b 55 f0             	mov    -0x10(%ebp),%edx
 84358e9:	0f b6 45 e3          	movzbl -0x1d(%ebp),%eax
 84358ed:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 84358f0:	6b d2 58             	imul   $0x58,%edx,%edx
 84358f3:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 84358f6:	81 c2 3c 2d 00 00    	add    $0x2d3c,%edx
 84358fc:	88 02                	mov    %al,(%edx)
 84358fe:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8435901:	0f b6 45 e2          	movzbl -0x1e(%ebp),%eax
 8435905:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8435908:	6b d2 58             	imul   $0x58,%edx,%edx
 843590b:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 843590e:	81 c2 3d 2d 00 00    	add    $0x2d3d,%edx
 8435914:	88 02                	mov    %al,(%edx)
 8435916:	8b 5d f0             	mov    -0x10(%ebp),%ebx
 8435919:	8d 45 96             	lea    -0x6a(%ebp),%eax
 843591c:	89 04 24             	mov    %eax,(%esp)
 843591f:	e8 8c 8a c4 ff       	call   807e3b0 <strlen@plt>
 8435924:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8435927:	6b d3 58             	imul   $0x58,%ebx,%edx
 843592a:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 843592d:	81 c2 30 2d 00 00    	add    $0x2d30,%edx
 8435933:	89 42 10             	mov    %eax,0x10(%edx)
 8435936:	8d 45 96             	lea    -0x6a(%ebp),%eax
 8435939:	89 04 24             	mov    %eax,(%esp)
 843593c:	e8 6f 8a c4 ff       	call   807e3b0 <strlen@plt>
 8435941:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8435944:	6b d2 58             	imul   $0x58,%edx,%edx
 8435947:	81 c2 30 2d 00 00    	add    $0x2d30,%edx
 843594d:	03 55 0c             	add    0xc(%ebp),%edx
 8435950:	83 c2 14             	add    $0x14,%edx
 8435953:	89 44 24 08          	mov    %eax,0x8(%esp)
 8435957:	8d 45 96             	lea    -0x6a(%ebp),%eax
 843595a:	89 44 24 04          	mov    %eax,0x4(%esp)
 843595e:	89 14 24             	mov    %edx,(%esp)
 8435961:	e8 6a 7f c4 ff       	call   807d8d0 <strncpy@plt>
 8435966:	8b 5d f0             	mov    -0x10(%ebp),%ebx
 8435969:	8d 45 ce             	lea    -0x32(%ebp),%eax
 843596c:	89 04 24             	mov    %eax,(%esp)
 843596f:	e8 3c 8a c4 ff       	call   807e3b0 <strlen@plt>
 8435974:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8435977:	6b d3 58             	imul   $0x58,%ebx,%edx
 843597a:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 843597d:	81 c2 60 2d 00 00    	add    $0x2d60,%edx
 8435983:	89 42 18             	mov    %eax,0x18(%edx)
 8435986:	8d 45 ce             	lea    -0x32(%ebp),%eax
 8435989:	89 04 24             	mov    %eax,(%esp)
 843598c:	e8 1f 8a c4 ff       	call   807e3b0 <strlen@plt>
 8435991:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8435994:	6b d2 58             	imul   $0x58,%edx,%edx
 8435997:	81 c2 70 2d 00 00    	add    $0x2d70,%edx
 843599d:	03 55 0c             	add    0xc(%ebp),%edx
 84359a0:	83 c2 0c             	add    $0xc,%edx
 84359a3:	89 44 24 08          	mov    %eax,0x8(%esp)
 84359a7:	8d 45 ce             	lea    -0x32(%ebp),%eax
 84359aa:	89 44 24 04          	mov    %eax,0x4(%esp)
 84359ae:	89 14 24             	mov    %edx,(%esp)
 84359b1:	e8 1a 7f c4 ff       	call   807d8d0 <strncpy@plt>
 84359b6:	8b 55 f0             	mov    -0x10(%ebp),%edx
 84359b9:	8b 45 c8             	mov    -0x38(%ebp),%eax
 84359bc:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 84359bf:	6b d2 58             	imul   $0x58,%edx,%edx
 84359c2:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 84359c5:	81 c2 80 2d 00 00    	add    $0x2d80,%edx
 84359cb:	89 42 10             	mov    %eax,0x10(%edx)
 84359ce:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 84359d2:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 84359d6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84359d9:	3b 45 e8             	cmp    -0x18(%ebp),%eax
 84359dc:	0f 9c c0             	setl   %al
 84359df:	84 c0                	test   %al,%al
 84359e1:	0f 85 d2 fd ff ff    	jne    84357b9 <_ZN10DB_LoadEtc26LoadEventServerMessageInfoEP12SIG_LOAD_ETC+0x117>
 84359e7:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84359ea:	89 c2                	mov    %eax,%edx
 84359ec:	8b 45 0c             	mov    0xc(%ebp),%eax
 84359ef:	88 90 38 2d 00 00    	mov    %dl,0x2d38(%eax)
 84359f5:	b8 01 00 00 00       	mov    $0x1,%eax
 84359fa:	83 ec 80             	sub    $0xffffff80,%esp
 84359fd:	5b                   	pop    %ebx
 84359fe:	5f                   	pop    %edi
 84359ff:	5d                   	pop    %ebp
 8435a00:	c3                   	ret
 8435a01:	90                   	nop

```

```c
// DB_LoadEtc::LoadEventServerMessageInfo @ 0x84356a2

/* WARNING: Removing unreachable block (ram,0x08435777) */
/* DB_LoadEtc::LoadEventServerMessageInfo(SIG_LOAD_ETC*) */

undefined4 __thiscall DB_LoadEtc::LoadEventServerMessageInfo(DB_LoadEtc *this,SIG_LOAD_ETC *param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  size_t sVar4;
  char *pcVar5;
  uint uVar6;
  bool bVar7;
  byte bVar8;
  char local_6e [50];
  int local_3c;
  char local_36 [20];
  SIG_LOAD_ETC local_22;
  SIG_LOAD_ETC local_21;
  MySQL *local_20;
  int local_1c;
  char local_15;
  int local_14;
  int local_10;
  
  bVar8 = 0;
  local_20 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  MySQL::set_query(local_20,
                   "seLect kind, message_index, charac_name, message, unix_timestamp(update_time) from event_server_message where server_info=%d and (channel_no=%d or channel_no=0)"
                   ,*(undefined4 *)(param_1 + 0x2d30),*(undefined4 *)(param_1 + 0x2d34));
  cVar2 = MySQL::exec(local_20,true);
  if (cVar2 == '\x01') {
    local_1c = MySQL::get_n_rows(local_20);
    local_15 = '\0';
    local_21 = (SIG_LOAD_ETC)0x0;
    local_22 = (SIG_LOAD_ETC)0x0;
    pcVar5 = local_6e;
    uVar6 = 0x32;
    bVar7 = ((uint)pcVar5 & 2) != 0;
    if (bVar7) {
      local_6e[0] = '\0';
      local_6e[1] = '\0';
      pcVar5 = local_6e + 2;
      uVar6 = 0x30;
    }
    for (uVar6 = uVar6 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      pcVar5[0] = '\0';
      pcVar5[1] = '\0';
      pcVar5[2] = '\0';
      pcVar5[3] = '\0';
      pcVar5 = pcVar5 + ((uint)bVar8 * -2 + 1) * 4;
    }
    if (!bVar7) {
      pcVar5[0] = '\0';
      pcVar5[1] = '\0';
    }
    local_36[0] = '\0';
    local_36[1] = '\0';
    local_36[2] = '\0';
    local_36[3] = '\0';
    local_36[4] = '\0';
    local_36[5] = '\0';
    local_36[6] = '\0';
    local_36[7] = '\0';
    local_36[8] = '\0';
    local_36[9] = '\0';
    local_36[10] = '\0';
    local_36[0xb] = '\0';
    local_36[0xc] = '\0';
    local_36[0xd] = '\0';
    local_36[0xe] = '\0';
    local_36[0xf] = '\0';
    local_36[0x10] = '\0';
    local_36[0x11] = '\0';
    local_36[0x12] = '\0';
    local_36[0x13] = '\0';
    local_3c = 0;
    local_14 = 0;
    for (local_10 = 0; local_10 < local_1c; local_10 = local_10 + 1) {
      local_15 = MySQL::fetch(local_20);
      if (local_15 != '\x01') {
        return 0;
      }
      local_15 = MySQL::get_byte(local_20,0,(char *)&local_21);
      if (local_15 != '\x01') {
        return 0;
      }
      local_15 = MySQL::get_byte(local_20,1,(char *)&local_22);
      if (local_15 != '\x01') {
        return 0;
      }
      local_15 = MySQL::get_str(local_20,2,local_36,0x14);
      if (local_15 != '\x01') {
        return 0;
      }
      local_15 = MySQL::get_str(local_20,3,local_6e,0x32);
      if (local_15 != '\x01') {
        return 0;
      }
      local_15 = MySQL::get_int(local_20,4,&local_3c);
      iVar1 = local_14;
      if (local_15 != '\x01') {
        return 0;
      }
      param_1[local_14 * 0x58 + 0x2d3c] = local_21;
      param_1[local_14 * 0x58 + 0x2d3d] = local_22;
      sVar4 = strlen(local_6e);
      *(size_t *)(param_1 + iVar1 * 0x58 + 0x2d40) = sVar4;
      sVar4 = strlen(local_6e);
      strncpy((char *)(param_1 + local_14 * 0x58 + 0x2d44),local_6e,sVar4);
      iVar1 = local_14;
      sVar4 = strlen(local_36);
      *(size_t *)(param_1 + iVar1 * 0x58 + 0x2d78) = sVar4;
      sVar4 = strlen(local_36);
      strncpy((char *)(param_1 + local_14 * 0x58 + 0x2d7c),local_36,sVar4);
      *(int *)(param_1 + local_14 * 0x58 + 0x2d90) = local_3c;
      local_14 = local_14 + 1;
    }
    param_1[0x2d38] = SUB41(local_1c,0);
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## LoadFairPvPScore

```asm
// === 08404290 DB_LoadEtc::LoadFairPvPScore  [0x08404290-0x8404a67] ===
 8404290:	55                   	push   %ebp
 8404291:	89 e5                	mov    %esp,%ebp
 8404293:	53                   	push   %ebx
 8404294:	81 ec 04 01 00 00    	sub    $0x104,%esp
 840429a:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 840429f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84042a6:	00 
 84042a7:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 84042ae:	00 
 84042af:	89 04 24             	mov    %eax,(%esp)
 84042b2:	e8 87 0f ff ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 84042b7:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84042ba:	8b 45 0c             	mov    0xc(%ebp),%eax
 84042bd:	8b 40 04             	mov    0x4(%eax),%eax
 84042c0:	89 44 24 08          	mov    %eax,0x8(%esp)
 84042c4:	c7 44 24 04 2c 39 c4 	movl   $0x8c4392c,0x4(%esp)
 84042cb:	08 
 84042cc:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84042cf:	89 04 24             	mov    %eax,(%esp)
 84042d2:	e8 e9 fe fe ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84042d7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84042de:	00 
 84042df:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84042e2:	89 04 24             	mov    %eax,(%esp)
 84042e5:	e8 3c 00 ff ff       	call   83f4326 <_ZN5MySQL4execEb>
 84042ea:	88 45 eb             	mov    %al,-0x15(%ebp)
 84042ed:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 84042f1:	83 f0 01             	xor    $0x1,%eax
 84042f4:	84 c0                	test   %al,%al
 84042f6:	74 50                	je     8404348 <_ZN10DB_LoadEtc16LoadFairPvPScoreEP12SIG_LOAD_ETC+0xb8>
 84042f8:	8b 45 0c             	mov    0xc(%ebp),%eax
 84042fb:	8b 58 04             	mov    0x4(%eax),%ebx
 84042fe:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8404305:	00 
 8404306:	c7 44 24 08 18 16 00 	movl   $0x1618,0x8(%esp)
 840430d:	00 
 840430e:	c7 44 24 04 60 d6 c5 	movl   $0x8c5d660,0x4(%esp)
 8404315:	08 
 8404316:	8d 85 18 ff ff ff    	lea    -0xe8(%ebp),%eax
 840431c:	89 04 24             	mov    %eax,(%esp)
 840431f:	e8 f4 b3 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8404324:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8404328:	c7 44 24 04 4c 3a c4 	movl   $0x8c43a4c,0x4(%esp)
 840432f:	08 
 8404330:	8d 85 18 ff ff ff    	lea    -0xe8(%ebp),%eax
 8404336:	89 04 24             	mov    %eax,(%esp)
 8404339:	e8 4a b4 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 840433e:	b8 00 00 00 00       	mov    $0x0,%eax
 8404343:	e9 17 07 00 00       	jmp    8404a5f <_ZN10DB_LoadEtc16LoadFairPvPScoreEP12SIG_LOAD_ETC+0x7cf>
 8404348:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840434b:	89 04 24             	mov    %eax,(%esp)
 840434e:	e8 19 e0 cd ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8404353:	85 c0                	test   %eax,%eax
 8404355:	0f 94 c0             	sete   %al
 8404358:	84 c0                	test   %al,%al
 840435a:	0f 84 98 00 00 00    	je     84043f8 <_ZN10DB_LoadEtc16LoadFairPvPScoreEP12SIG_LOAD_ETC+0x168>
 8404360:	8b 45 0c             	mov    0xc(%ebp),%eax
 8404363:	8b 40 04             	mov    0x4(%eax),%eax
 8404366:	89 44 24 08          	mov    %eax,0x8(%esp)
 840436a:	c7 44 24 04 88 3a c4 	movl   $0x8c43a88,0x4(%esp)
 8404371:	08 
 8404372:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8404375:	89 04 24             	mov    %eax,(%esp)
 8404378:	e8 43 fe fe ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 840437d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8404384:	00 
 8404385:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8404388:	89 04 24             	mov    %eax,(%esp)
 840438b:	e8 96 ff fe ff       	call   83f4326 <_ZN5MySQL4execEb>
 8404390:	88 45 eb             	mov    %al,-0x15(%ebp)
 8404393:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 8404397:	83 f0 01             	xor    $0x1,%eax
 840439a:	84 c0                	test   %al,%al
 840439c:	74 50                	je     84043ee <_ZN10DB_LoadEtc16LoadFairPvPScoreEP12SIG_LOAD_ETC+0x15e>
 840439e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84043a1:	8b 58 04             	mov    0x4(%eax),%ebx
 84043a4:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 84043ab:	00 
 84043ac:	c7 44 24 08 25 16 00 	movl   $0x1625,0x8(%esp)
 84043b3:	00 
 84043b4:	c7 44 24 04 60 d6 c5 	movl   $0x8c5d660,0x4(%esp)
 84043bb:	08 
 84043bc:	8d 85 28 ff ff ff    	lea    -0xd8(%ebp),%eax
 84043c2:	89 04 24             	mov    %eax,(%esp)
 84043c5:	e8 4e b3 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84043ca:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84043ce:	c7 44 24 04 bc 3a c4 	movl   $0x8c43abc,0x4(%esp)
 84043d5:	08 
 84043d6:	8d 85 28 ff ff ff    	lea    -0xd8(%ebp),%eax
 84043dc:	89 04 24             	mov    %eax,(%esp)
 84043df:	e8 a4 b3 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84043e4:	b8 00 00 00 00       	mov    $0x0,%eax
 84043e9:	e9 71 06 00 00       	jmp    8404a5f <_ZN10DB_LoadEtc16LoadFairPvPScoreEP12SIG_LOAD_ETC+0x7cf>
 84043ee:	b8 01 00 00 00       	mov    $0x1,%eax
 84043f3:	e9 67 06 00 00       	jmp    8404a5f <_ZN10DB_LoadEtc16LoadFairPvPScoreEP12SIG_LOAD_ETC+0x7cf>
 84043f8:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84043fb:	89 04 24             	mov    %eax,(%esp)
 84043fe:	e8 b9 00 ff ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 8404403:	88 45 eb             	mov    %al,-0x15(%ebp)
 8404406:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 840440a:	83 f0 01             	xor    $0x1,%eax
 840440d:	84 c0                	test   %al,%al
 840440f:	74 50                	je     8404461 <_ZN10DB_LoadEtc16LoadFairPvPScoreEP12SIG_LOAD_ETC+0x1d1>
 8404411:	8b 45 0c             	mov    0xc(%ebp),%eax
 8404414:	8b 58 04             	mov    0x4(%eax),%ebx
 8404417:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 840441e:	00 
 840441f:	c7 44 24 08 2f 16 00 	movl   $0x162f,0x8(%esp)
 8404426:	00 
 8404427:	c7 44 24 04 60 d6 c5 	movl   $0x8c5d660,0x4(%esp)
 840442e:	08 
 840442f:	8d 85 38 ff ff ff    	lea    -0xc8(%ebp),%eax
 8404435:	89 04 24             	mov    %eax,(%esp)
 8404438:	e8 db b2 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 840443d:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8404441:	c7 44 24 04 fc 3a c4 	movl   $0x8c43afc,0x4(%esp)
 8404448:	08 
 8404449:	8d 85 38 ff ff ff    	lea    -0xc8(%ebp),%eax
 840444f:	89 04 24             	mov    %eax,(%esp)
 8404452:	e8 31 b3 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8404457:	b8 00 00 00 00       	mov    $0x0,%eax
 840445c:	e9 fe 05 00 00       	jmp    8404a5f <_ZN10DB_LoadEtc16LoadFairPvPScoreEP12SIG_LOAD_ETC+0x7cf>
 8404461:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8404468:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 840446f:	e9 c6 01 00 00       	jmp    840463a <_ZN10DB_LoadEtc16LoadFairPvPScoreEP12SIG_LOAD_ETC+0x3aa>
 8404474:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8404477:	89 d0                	mov    %edx,%eax
 8404479:	01 c0                	add    %eax,%eax
 840447b:	01 d0                	add    %edx,%eax
 840447d:	c1 e0 02             	shl    $0x2,%eax
 8404480:	05 10 cf 00 00       	add    $0xcf10,%eax
 8404485:	03 45 0c             	add    0xc(%ebp),%eax
 8404488:	8d 50 13             	lea    0x13(%eax),%edx
 840448b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840448e:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8404492:	89 54 24 08          	mov    %edx,0x8(%esp)
 8404496:	89 44 24 04          	mov    %eax,0x4(%esp)
 840449a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840449d:	89 04 24             	mov    %eax,(%esp)
 84044a0:	e8 4d de cd ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 84044a5:	88 45 eb             	mov    %al,-0x15(%ebp)
 84044a8:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 84044ac:	83 f0 01             	xor    $0x1,%eax
 84044af:	84 c0                	test   %al,%al
 84044b1:	74 57                	je     840450a <_ZN10DB_LoadEtc16LoadFairPvPScoreEP12SIG_LOAD_ETC+0x27a>
 84044b3:	8b 45 0c             	mov    0xc(%ebp),%eax
 84044b6:	8b 58 04             	mov    0x4(%eax),%ebx
 84044b9:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 84044c0:	00 
 84044c1:	c7 44 24 08 38 16 00 	movl   $0x1638,0x8(%esp)
 84044c8:	00 
 84044c9:	c7 44 24 04 60 d6 c5 	movl   $0x8c5d660,0x4(%esp)
 84044d0:	08 
 84044d1:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 84044d7:	89 04 24             	mov    %eax,(%esp)
 84044da:	e8 39 b2 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84044df:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84044e3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84044e6:	89 44 24 08          	mov    %eax,0x8(%esp)
 84044ea:	c7 44 24 04 38 3b c4 	movl   $0x8c43b38,0x4(%esp)
 84044f1:	08 
 84044f2:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 84044f8:	89 04 24             	mov    %eax,(%esp)
 84044fb:	e8 88 b2 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8404500:	b8 00 00 00 00       	mov    $0x0,%eax
 8404505:	e9 55 05 00 00       	jmp    8404a5f <_ZN10DB_LoadEtc16LoadFairPvPScoreEP12SIG_LOAD_ETC+0x7cf>
 840450a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 840450d:	89 d0                	mov    %edx,%eax
 840450f:	01 c0                	add    %eax,%eax
 8404511:	01 d0                	add    %edx,%eax
 8404513:	c1 e0 02             	shl    $0x2,%eax
 8404516:	05 10 cf 00 00       	add    $0xcf10,%eax
 840451b:	03 45 0c             	add    0xc(%ebp),%eax
 840451e:	8d 50 17             	lea    0x17(%eax),%edx
 8404521:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8404524:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8404528:	89 54 24 08          	mov    %edx,0x8(%esp)
 840452c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8404530:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8404533:	89 04 24             	mov    %eax,(%esp)
 8404536:	e8 b7 dd cd ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 840453b:	88 45 eb             	mov    %al,-0x15(%ebp)
 840453e:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 8404542:	83 f0 01             	xor    $0x1,%eax
 8404545:	84 c0                	test   %al,%al
 8404547:	74 57                	je     84045a0 <_ZN10DB_LoadEtc16LoadFairPvPScoreEP12SIG_LOAD_ETC+0x310>
 8404549:	8b 45 0c             	mov    0xc(%ebp),%eax
 840454c:	8b 58 04             	mov    0x4(%eax),%ebx
 840454f:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8404556:	00 
 8404557:	c7 44 24 08 3f 16 00 	movl   $0x163f,0x8(%esp)
 840455e:	00 
 840455f:	c7 44 24 04 60 d6 c5 	movl   $0x8c5d660,0x4(%esp)
 8404566:	08 
 8404567:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 840456d:	89 04 24             	mov    %eax,(%esp)
 8404570:	e8 a3 b1 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8404575:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8404579:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840457c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8404580:	c7 44 24 04 38 3b c4 	movl   $0x8c43b38,0x4(%esp)
 8404587:	08 
 8404588:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 840458e:	89 04 24             	mov    %eax,(%esp)
 8404591:	e8 f2 b1 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8404596:	b8 00 00 00 00       	mov    $0x0,%eax
 840459b:	e9 bf 04 00 00       	jmp    8404a5f <_ZN10DB_LoadEtc16LoadFairPvPScoreEP12SIG_LOAD_ETC+0x7cf>
 84045a0:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84045a3:	89 d0                	mov    %edx,%eax
 84045a5:	01 c0                	add    %eax,%eax
 84045a7:	01 d0                	add    %edx,%eax
 84045a9:	c1 e0 02             	shl    $0x2,%eax
 84045ac:	05 10 cf 00 00       	add    $0xcf10,%eax
 84045b1:	03 45 0c             	add    0xc(%ebp),%eax
 84045b4:	8d 50 1b             	lea    0x1b(%eax),%edx
 84045b7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84045ba:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 84045be:	89 54 24 08          	mov    %edx,0x8(%esp)
 84045c2:	89 44 24 04          	mov    %eax,0x4(%esp)
 84045c6:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84045c9:	89 04 24             	mov    %eax,(%esp)
 84045cc:	e8 21 dd cd ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 84045d1:	88 45 eb             	mov    %al,-0x15(%ebp)
 84045d4:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 84045d8:	83 f0 01             	xor    $0x1,%eax
 84045db:	84 c0                	test   %al,%al
 84045dd:	74 57                	je     8404636 <_ZN10DB_LoadEtc16LoadFairPvPScoreEP12SIG_LOAD_ETC+0x3a6>
 84045df:	8b 45 0c             	mov    0xc(%ebp),%eax
 84045e2:	8b 58 04             	mov    0x4(%eax),%ebx
 84045e5:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 84045ec:	00 
 84045ed:	c7 44 24 08 46 16 00 	movl   $0x1646,0x8(%esp)
 84045f4:	00 
 84045f5:	c7 44 24 04 60 d6 c5 	movl   $0x8c5d660,0x4(%esp)
 84045fc:	08 
 84045fd:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 8404603:	89 04 24             	mov    %eax,(%esp)
 8404606:	e8 0d b1 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 840460b:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 840460f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8404612:	89 44 24 08          	mov    %eax,0x8(%esp)
 8404616:	c7 44 24 04 38 3b c4 	movl   $0x8c43b38,0x4(%esp)
 840461d:	08 
 840461e:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 8404624:	89 04 24             	mov    %eax,(%esp)
 8404627:	e8 5c b1 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 840462c:	b8 00 00 00 00       	mov    $0x0,%eax
 8404631:	e9 29 04 00 00       	jmp    8404a5f <_ZN10DB_LoadEtc16LoadFairPvPScoreEP12SIG_LOAD_ETC+0x7cf>
 8404636:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 840463a:	83 7d f4 01          	cmpl   $0x1,-0xc(%ebp)
 840463e:	0f 9e c0             	setle  %al
 8404641:	84 c0                	test   %al,%al
 8404643:	0f 85 2b fe ff ff    	jne    8404474 <_ZN10DB_LoadEtc16LoadFairPvPScoreEP12SIG_LOAD_ETC+0x1e4>
 8404649:	8b 45 0c             	mov    0xc(%ebp),%eax
 840464c:	8d 90 3b cf 00 00    	lea    0xcf3b(%eax),%edx
 8404652:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8404655:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8404659:	89 54 24 08          	mov    %edx,0x8(%esp)
 840465d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8404661:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8404664:	89 04 24             	mov    %eax,(%esp)
 8404667:	e8 86 dc cd ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 840466c:	88 45 eb             	mov    %al,-0x15(%ebp)
 840466f:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 8404673:	83 f0 01             	xor    $0x1,%eax
 8404676:	84 c0                	test   %al,%al
 8404678:	74 57                	je     84046d1 <_ZN10DB_LoadEtc16LoadFairPvPScoreEP12SIG_LOAD_ETC+0x441>
 840467a:	8b 45 0c             	mov    0xc(%ebp),%eax
 840467d:	8b 58 04             	mov    0x4(%eax),%ebx
 8404680:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8404687:	00 
 8404688:	c7 44 24 08 67 16 00 	movl   $0x1667,0x8(%esp)
 840468f:	00 
 8404690:	c7 44 24 04 60 d6 c5 	movl   $0x8c5d660,0x4(%esp)
 8404697:	08 
 8404698:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 840469e:	89 04 24             	mov    %eax,(%esp)
 84046a1:	e8 72 b0 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84046a6:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84046aa:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84046ad:	89 44 24 08          	mov    %eax,0x8(%esp)
 84046b1:	c7 44 24 04 38 3b c4 	movl   $0x8c43b38,0x4(%esp)
 84046b8:	08 
 84046b9:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 84046bf:	89 04 24             	mov    %eax,(%esp)
 84046c2:	e8 c1 b0 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84046c7:	b8 00 00 00 00       	mov    $0x0,%eax
 84046cc:	e9 8e 03 00 00       	jmp    8404a5f <_ZN10DB_LoadEtc16LoadFairPvPScoreEP12SIG_LOAD_ETC+0x7cf>
 84046d1:	8b 45 0c             	mov    0xc(%ebp),%eax
 84046d4:	8d 90 3f cf 00 00    	lea    0xcf3f(%eax),%edx
 84046da:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84046dd:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 84046e1:	89 54 24 08          	mov    %edx,0x8(%esp)
 84046e5:	89 44 24 04          	mov    %eax,0x4(%esp)
 84046e9:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84046ec:	89 04 24             	mov    %eax,(%esp)
 84046ef:	e8 fe db cd ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 84046f4:	88 45 eb             	mov    %al,-0x15(%ebp)
 84046f7:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 84046fb:	83 f0 01             	xor    $0x1,%eax
 84046fe:	84 c0                	test   %al,%al
 8404700:	74 51                	je     8404753 <_ZN10DB_LoadEtc16LoadFairPvPScoreEP12SIG_LOAD_ETC+0x4c3>
 8404702:	8b 45 0c             	mov    0xc(%ebp),%eax
 8404705:	8b 58 04             	mov    0x4(%eax),%ebx
 8404708:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 840470f:	00 
 8404710:	c7 44 24 08 6e 16 00 	movl   $0x166e,0x8(%esp)
 8404717:	00 
 8404718:	c7 44 24 04 60 d6 c5 	movl   $0x8c5d660,0x4(%esp)
 840471f:	08 
 8404720:	8d 45 88             	lea    -0x78(%ebp),%eax
 8404723:	89 04 24             	mov    %eax,(%esp)
 8404726:	e8 ed af 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 840472b:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 840472f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8404732:	89 44 24 08          	mov    %eax,0x8(%esp)
 8404736:	c7 44 24 04 38 3b c4 	movl   $0x8c43b38,0x4(%esp)
 840473d:	08 
 840473e:	8d 45 88             	lea    -0x78(%ebp),%eax
 8404741:	89 04 24             	mov    %eax,(%esp)
 8404744:	e8 3f b0 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8404749:	b8 00 00 00 00       	mov    $0x0,%eax
 840474e:	e9 0c 03 00 00       	jmp    8404a5f <_ZN10DB_LoadEtc16LoadFairPvPScoreEP12SIG_LOAD_ETC+0x7cf>
 8404753:	8b 45 0c             	mov    0xc(%ebp),%eax
 8404756:	8d 90 43 cf 00 00    	lea    0xcf43(%eax),%edx
 840475c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840475f:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8404763:	89 54 24 08          	mov    %edx,0x8(%esp)
 8404767:	89 44 24 04          	mov    %eax,0x4(%esp)
 840476b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840476e:	89 04 24             	mov    %eax,(%esp)
 8404771:	e8 7c db cd ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 8404776:	88 45 eb             	mov    %al,-0x15(%ebp)
 8404779:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 840477d:	83 f0 01             	xor    $0x1,%eax
 8404780:	84 c0                	test   %al,%al
 8404782:	74 51                	je     84047d5 <_ZN10DB_LoadEtc16LoadFairPvPScoreEP12SIG_LOAD_ETC+0x545>
 8404784:	8b 45 0c             	mov    0xc(%ebp),%eax
 8404787:	8b 58 04             	mov    0x4(%eax),%ebx
 840478a:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8404791:	00 
 8404792:	c7 44 24 08 75 16 00 	movl   $0x1675,0x8(%esp)
 8404799:	00 
 840479a:	c7 44 24 04 60 d6 c5 	movl   $0x8c5d660,0x4(%esp)
 84047a1:	08 
 84047a2:	8d 45 98             	lea    -0x68(%ebp),%eax
 84047a5:	89 04 24             	mov    %eax,(%esp)
 84047a8:	e8 6b af 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84047ad:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84047b1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84047b4:	89 44 24 08          	mov    %eax,0x8(%esp)
 84047b8:	c7 44 24 04 38 3b c4 	movl   $0x8c43b38,0x4(%esp)
 84047bf:	08 
 84047c0:	8d 45 98             	lea    -0x68(%ebp),%eax
 84047c3:	89 04 24             	mov    %eax,(%esp)
 84047c6:	e8 bd af 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84047cb:	b8 00 00 00 00       	mov    $0x0,%eax
 84047d0:	e9 8a 02 00 00       	jmp    8404a5f <_ZN10DB_LoadEtc16LoadFairPvPScoreEP12SIG_LOAD_ETC+0x7cf>
 84047d5:	8b 45 0c             	mov    0xc(%ebp),%eax
 84047d8:	8d 90 47 cf 00 00    	lea    0xcf47(%eax),%edx
 84047de:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84047e1:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 84047e5:	89 54 24 08          	mov    %edx,0x8(%esp)
 84047e9:	89 44 24 04          	mov    %eax,0x4(%esp)
 84047ed:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84047f0:	89 04 24             	mov    %eax,(%esp)
 84047f3:	e8 fa da cd ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 84047f8:	88 45 eb             	mov    %al,-0x15(%ebp)
 84047fb:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 84047ff:	83 f0 01             	xor    $0x1,%eax
 8404802:	84 c0                	test   %al,%al
 8404804:	74 51                	je     8404857 <_ZN10DB_LoadEtc16LoadFairPvPScoreEP12SIG_LOAD_ETC+0x5c7>
 8404806:	8b 45 0c             	mov    0xc(%ebp),%eax
 8404809:	8b 58 04             	mov    0x4(%eax),%ebx
 840480c:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8404813:	00 
 8404814:	c7 44 24 08 7c 16 00 	movl   $0x167c,0x8(%esp)
 840481b:	00 
 840481c:	c7 44 24 04 60 d6 c5 	movl   $0x8c5d660,0x4(%esp)
 8404823:	08 
 8404824:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8404827:	89 04 24             	mov    %eax,(%esp)
 840482a:	e8 e9 ae 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 840482f:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8404833:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8404836:	89 44 24 08          	mov    %eax,0x8(%esp)
 840483a:	c7 44 24 04 38 3b c4 	movl   $0x8c43b38,0x4(%esp)
 8404841:	08 
 8404842:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8404845:	89 04 24             	mov    %eax,(%esp)
 8404848:	e8 3b af 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 840484d:	b8 00 00 00 00       	mov    $0x0,%eax
 8404852:	e9 08 02 00 00       	jmp    8404a5f <_ZN10DB_LoadEtc16LoadFairPvPScoreEP12SIG_LOAD_ETC+0x7cf>
 8404857:	8b 45 0c             	mov    0xc(%ebp),%eax
 840485a:	05 4b cf 00 00       	add    $0xcf4b,%eax
 840485f:	89 c2                	mov    %eax,%edx
 8404861:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8404864:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8404868:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 840486f:	00 
 8404870:	c7 44 24 0c 50 06 00 	movl   $0x650,0xc(%esp)
 8404877:	00 
 8404878:	89 54 24 08          	mov    %edx,0x8(%esp)
 840487c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8404880:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8404883:	89 04 24             	mov    %eax,(%esp)
 8404886:	e8 ee 73 ff ff       	call   83fbc79 <_Z24get_compressed_blob_dataP5MySQLiPcii>
 840488b:	83 f0 01             	xor    $0x1,%eax
 840488e:	84 c0                	test   %al,%al
 8404890:	74 0a                	je     840489c <_ZN10DB_LoadEtc16LoadFairPvPScoreEP12SIG_LOAD_ETC+0x60c>
 8404892:	b8 00 00 00 00       	mov    $0x0,%eax
 8404897:	e9 c3 01 00 00       	jmp    8404a5f <_ZN10DB_LoadEtc16LoadFairPvPScoreEP12SIG_LOAD_ETC+0x7cf>
 840489c:	8b 45 0c             	mov    0xc(%ebp),%eax
 840489f:	8d 90 9b d5 00 00    	lea    0xd59b(%eax),%edx
 84048a5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84048a8:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 84048ac:	89 54 24 08          	mov    %edx,0x8(%esp)
 84048b0:	89 44 24 04          	mov    %eax,0x4(%esp)
 84048b4:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84048b7:	89 04 24             	mov    %eax,(%esp)
 84048ba:	e8 33 da cd ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 84048bf:	88 45 eb             	mov    %al,-0x15(%ebp)
 84048c2:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 84048c6:	83 f0 01             	xor    $0x1,%eax
 84048c9:	84 c0                	test   %al,%al
 84048cb:	74 51                	je     840491e <_ZN10DB_LoadEtc16LoadFairPvPScoreEP12SIG_LOAD_ETC+0x68e>
 84048cd:	8b 45 0c             	mov    0xc(%ebp),%eax
 84048d0:	8b 58 04             	mov    0x4(%eax),%ebx
 84048d3:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 84048da:	00 
 84048db:	c7 44 24 08 89 16 00 	movl   $0x1689,0x8(%esp)
 84048e2:	00 
 84048e3:	c7 44 24 04 60 d6 c5 	movl   $0x8c5d660,0x4(%esp)
 84048ea:	08 
 84048eb:	8d 45 b8             	lea    -0x48(%ebp),%eax
 84048ee:	89 04 24             	mov    %eax,(%esp)
 84048f1:	e8 22 ae 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84048f6:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84048fa:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84048fd:	89 44 24 08          	mov    %eax,0x8(%esp)
 8404901:	c7 44 24 04 38 3b c4 	movl   $0x8c43b38,0x4(%esp)
 8404908:	08 
 8404909:	8d 45 b8             	lea    -0x48(%ebp),%eax
 840490c:	89 04 24             	mov    %eax,(%esp)
 840490f:	e8 74 ae 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8404914:	b8 00 00 00 00       	mov    $0x0,%eax
 8404919:	e9 41 01 00 00       	jmp    8404a5f <_ZN10DB_LoadEtc16LoadFairPvPScoreEP12SIG_LOAD_ETC+0x7cf>
 840491e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8404921:	8d 90 9f d5 00 00    	lea    0xd59f(%eax),%edx
 8404927:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840492a:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 840492e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8404932:	89 44 24 04          	mov    %eax,0x4(%esp)
 8404936:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8404939:	89 04 24             	mov    %eax,(%esp)
 840493c:	e8 eb 1f d1 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8404941:	88 45 eb             	mov    %al,-0x15(%ebp)
 8404944:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 8404948:	83 f0 01             	xor    $0x1,%eax
 840494b:	84 c0                	test   %al,%al
 840494d:	74 51                	je     84049a0 <_ZN10DB_LoadEtc16LoadFairPvPScoreEP12SIG_LOAD_ETC+0x710>
 840494f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8404952:	8b 58 04             	mov    0x4(%eax),%ebx
 8404955:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 840495c:	00 
 840495d:	c7 44 24 08 90 16 00 	movl   $0x1690,0x8(%esp)
 8404964:	00 
 8404965:	c7 44 24 04 60 d6 c5 	movl   $0x8c5d660,0x4(%esp)
 840496c:	08 
 840496d:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8404970:	89 04 24             	mov    %eax,(%esp)
 8404973:	e8 a0 ad 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8404978:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 840497c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840497f:	89 44 24 08          	mov    %eax,0x8(%esp)
 8404983:	c7 44 24 04 38 3b c4 	movl   $0x8c43b38,0x4(%esp)
 840498a:	08 
 840498b:	8d 45 c8             	lea    -0x38(%ebp),%eax
 840498e:	89 04 24             	mov    %eax,(%esp)
 8404991:	e8 f2 ad 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8404996:	b8 00 00 00 00       	mov    $0x0,%eax
 840499b:	e9 bf 00 00 00       	jmp    8404a5f <_ZN10DB_LoadEtc16LoadFairPvPScoreEP12SIG_LOAD_ETC+0x7cf>
 84049a0:	8b 45 0c             	mov    0xc(%ebp),%eax
 84049a3:	8b 98 9f d5 00 00    	mov    0xd59f(%eax),%ebx
 84049a9:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84049b0:	00 
 84049b1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84049b8:	00 
 84049b9:	c7 04 24 06 00 00 00 	movl   $0x6,(%esp)
 84049c0:	e8 95 d5 2a 00       	call   86b1f5a <_Z22getDailyInitializeTimeiii>
 84049c5:	39 c3                	cmp    %eax,%ebx
 84049c7:	0f 9c c0             	setl   %al
 84049ca:	84 c0                	test   %al,%al
 84049cc:	74 0d                	je     84049db <_ZN10DB_LoadEtc16LoadFairPvPScoreEP12SIG_LOAD_ETC+0x74b>
 84049ce:	8b 45 0c             	mov    0xc(%ebp),%eax
 84049d1:	c7 80 9b d5 00 00 00 	movl   $0x0,0xd59b(%eax)
 84049d8:	00 00 00 
 84049db:	8b 45 0c             	mov    0xc(%ebp),%eax
 84049de:	8d 90 a3 d5 00 00    	lea    0xd5a3(%eax),%edx
 84049e4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84049e7:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 84049eb:	89 54 24 08          	mov    %edx,0x8(%esp)
 84049ef:	89 44 24 04          	mov    %eax,0x4(%esp)
 84049f3:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84049f6:	89 04 24             	mov    %eax,(%esp)
 84049f9:	e8 bc 94 cf ff       	call   80fdeba <_ZN5MySQL9get_ubyteEiRh>
 84049fe:	88 45 eb             	mov    %al,-0x15(%ebp)
 8404a01:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 8404a05:	83 f0 01             	xor    $0x1,%eax
 8404a08:	84 c0                	test   %al,%al
 8404a0a:	74 4e                	je     8404a5a <_ZN10DB_LoadEtc16LoadFairPvPScoreEP12SIG_LOAD_ETC+0x7ca>
 8404a0c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8404a0f:	8b 58 04             	mov    0x4(%eax),%ebx
 8404a12:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8404a19:	00 
 8404a1a:	c7 44 24 08 a5 16 00 	movl   $0x16a5,0x8(%esp)
 8404a21:	00 
 8404a22:	c7 44 24 04 60 d6 c5 	movl   $0x8c5d660,0x4(%esp)
 8404a29:	08 
 8404a2a:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8404a2d:	89 04 24             	mov    %eax,(%esp)
 8404a30:	e8 e3 ac 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8404a35:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8404a39:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8404a3c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8404a40:	c7 44 24 04 38 3b c4 	movl   $0x8c43b38,0x4(%esp)
 8404a47:	08 
 8404a48:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8404a4b:	89 04 24             	mov    %eax,(%esp)
 8404a4e:	e8 35 ad 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8404a53:	b8 00 00 00 00       	mov    $0x0,%eax
 8404a58:	eb 05                	jmp    8404a5f <_ZN10DB_LoadEtc16LoadFairPvPScoreEP12SIG_LOAD_ETC+0x7cf>
 8404a5a:	b8 01 00 00 00       	mov    $0x1,%eax
 8404a5f:	81 c4 04 01 00 00    	add    $0x104,%esp
 8404a65:	5b                   	pop    %ebx
 8404a66:	5d                   	pop    %ebp
 8404a67:	c3                   	ret

```

```c
// DB_LoadEtc::LoadFairPvPScore @ 0x8404290

/* DB_LoadEtc::LoadFairPvPScore(SIG_LOAD_ETC*) */

undefined4 __thiscall DB_LoadEtc::LoadFairPvPScore(DB_LoadEtc *this,SIG_LOAD_ETC *param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  cMyTrace local_ec [16];
  cMyTrace local_dc [16];
  cMyTrace local_cc [16];
  cMyTrace local_bc [16];
  cMyTrace local_ac [16];
  cMyTrace local_9c [16];
  cMyTrace local_8c [16];
  cMyTrace local_7c [16];
  cMyTrace local_6c [16];
  cMyTrace local_5c [16];
  cMyTrace local_4c [16];
  cMyTrace local_3c [16];
  cMyTrace local_2c [19];
  char local_19;
  MySQL *local_18;
  int local_14;
  int local_10;
  
  local_18 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  MySQL::set_query(local_18,
                   "seLect private_win,private_lose,private_draw,relay_battle_win, relay_battle_lose, relay_battle_draw,relay_battle_2kill, relay_battle_3kill, successive_win, max_successive_win, job_score,daily_play_count, unix_timestamp(last_play_time), give_item from fair_pvp_score where charac_no=%u"
                   ,*(undefined4 *)(param_1 + 4));
  local_19 = MySQL::exec(local_18,true);
  if (local_19 == '\x01') {
    iVar4 = MySQL::get_n_rows(local_18);
    if (iVar4 == 0) {
      MySQL::set_query(local_18,"inSert into fair_pvp_score (charac_no) values(%u)",
                       *(undefined4 *)(param_1 + 4));
      local_19 = MySQL::exec(local_18,true);
      if (local_19 == '\x01') {
        uVar3 = 1;
      }
      else {
        uVar3 = *(undefined4 *)(param_1 + 4);
        cMyTrace::cMyTrace(local_dc,"bool DB_LoadEtc::LoadFairPvPScore(SIG_LOAD_ETC*)",0x1625,5);
        cMyTrace::operator()
                  (local_dc,"DB_LoadEtc::LoadFairPvPScore insert, exec() ERROR charac_no=%u",uVar3);
        uVar3 = 0;
      }
    }
    else {
      local_19 = MySQL::fetch(local_18);
      if (local_19 == '\x01') {
        local_14 = 0;
        for (local_10 = 0; iVar4 = local_14, local_19 = 1, local_10 < 2; local_10 = local_10 + 1) {
          local_14 = local_14 + 1;
          local_19 = MySQL::get_uint(local_18,iVar4,(uint *)(param_1 + local_10 * 0xc + 0xcf23));
          iVar4 = local_14;
          if (local_19 != '\x01') {
            uVar3 = *(undefined4 *)(param_1 + 4);
            cMyTrace::cMyTrace(local_bc,"bool DB_LoadEtc::LoadFairPvPScore(SIG_LOAD_ETC*)",0x1638,5)
            ;
            cMyTrace::operator()
                      (local_bc,"DB_LoadEtc::LoadFairPvPScore, get(%d) ERROR charac_no=%u",local_14,
                       uVar3);
            return 0;
          }
          local_14 = local_14 + 1;
          local_19 = MySQL::get_uint(local_18,iVar4,(uint *)(param_1 + local_10 * 0xc + 0xcf27));
          iVar4 = local_14;
          if (local_19 != '\x01') {
            uVar3 = *(undefined4 *)(param_1 + 4);
            cMyTrace::cMyTrace(local_ac,"bool DB_LoadEtc::LoadFairPvPScore(SIG_LOAD_ETC*)",0x163f,5)
            ;
            cMyTrace::operator()
                      (local_ac,"DB_LoadEtc::LoadFairPvPScore, get(%d) ERROR charac_no=%u",local_14,
                       uVar3);
            return 0;
          }
          local_14 = local_14 + 1;
          local_19 = MySQL::get_uint(local_18,iVar4,(uint *)(param_1 + local_10 * 0xc + 0xcf2b));
          if (local_19 != '\x01') {
            uVar3 = *(undefined4 *)(param_1 + 4);
            cMyTrace::cMyTrace(local_9c,"bool DB_LoadEtc::LoadFairPvPScore(SIG_LOAD_ETC*)",0x1646,5)
            ;
            cMyTrace::operator()
                      (local_9c,"DB_LoadEtc::LoadFairPvPScore, get(%d) ERROR charac_no=%u",local_14,
                       uVar3);
            return 0;
          }
        }
        local_14 = local_14 + 1;
        local_19 = MySQL::get_uint(local_18,iVar4,(uint *)(param_1 + 0xcf3b));
        iVar4 = local_14;
        if (local_19 == '\x01') {
          local_14 = local_14 + 1;
          local_19 = MySQL::get_uint(local_18,iVar4,(uint *)(param_1 + 0xcf3f));
          iVar4 = local_14;
          if (local_19 == '\x01') {
            local_14 = local_14 + 1;
            local_19 = MySQL::get_uint(local_18,iVar4,(uint *)(param_1 + 0xcf43));
            iVar4 = local_14;
            if (local_19 == '\x01') {
              local_14 = local_14 + 1;
              local_19 = MySQL::get_uint(local_18,iVar4,(uint *)(param_1 + 0xcf47));
              iVar4 = local_14;
              if (local_19 == '\x01') {
                local_14 = local_14 + 1;
                cVar2 = get_compressed_blob_data(local_18,iVar4,(char *)(param_1 + 0xcf4b),0x650,0);
                iVar4 = local_14;
                if (cVar2 == '\x01') {
                  local_14 = local_14 + 1;
                  local_19 = MySQL::get_uint(local_18,iVar4,(uint *)(param_1 + 0xd59b));
                  iVar4 = local_14;
                  if (local_19 == '\x01') {
                    local_14 = local_14 + 1;
                    local_19 = MySQL::get_int(local_18,iVar4,(int *)(param_1 + 0xd59f));
                    if (local_19 == '\x01') {
                      iVar4 = *(int *)(param_1 + 0xd59f);
                      iVar5 = getDailyInitializeTime(6,0,0);
                      iVar1 = local_14;
                      if (iVar4 < iVar5) {
                        *(undefined4 *)(param_1 + 0xd59b) = 0;
                      }
                      local_14 = local_14 + 1;
                      local_19 = MySQL::get_ubyte(local_18,iVar1,(uchar *)(param_1 + 0xd5a3));
                      if (local_19 == '\x01') {
                        uVar3 = 1;
                      }
                      else {
                        uVar3 = *(undefined4 *)(param_1 + 4);
                        cMyTrace::cMyTrace(local_2c,
                                           "bool DB_LoadEtc::LoadFairPvPScore(SIG_LOAD_ETC*)",0x16a5
                                           ,5);
                        cMyTrace::operator()
                                  (local_2c,
                                   "DB_LoadEtc::LoadFairPvPScore, get(%d) ERROR charac_no=%u",
                                   local_14,uVar3);
                        uVar3 = 0;
                      }
                    }
                    else {
                      uVar3 = *(undefined4 *)(param_1 + 4);
                      cMyTrace::cMyTrace(local_3c,"bool DB_LoadEtc::LoadFairPvPScore(SIG_LOAD_ETC*)"
                                         ,0x1690,5);
                      cMyTrace::operator()
                                (local_3c,"DB_LoadEtc::LoadFairPvPScore, get(%d) ERROR charac_no=%u"
                                 ,local_14,uVar3);
                      uVar3 = 0;
                    }
                  }
                  else {
                    uVar3 = *(undefined4 *)(param_1 + 4);
                    cMyTrace::cMyTrace(local_4c,"bool DB_LoadEtc::LoadFairPvPScore(SIG_LOAD_ETC*)",
                                       0x1689,5);
                    cMyTrace::operator()
                              (local_4c,"DB_LoadEtc::LoadFairPvPScore, get(%d) ERROR charac_no=%u",
                               local_14,uVar3);
                    uVar3 = 0;
                  }
                }
                else {
                  uVar3 = 0;
                }
              }
              else {
                uVar3 = *(undefined4 *)(param_1 + 4);
                cMyTrace::cMyTrace(local_5c,"bool DB_LoadEtc::LoadFairPvPScore(SIG_LOAD_ETC*)",
                                   0x167c,5);
                cMyTrace::operator()
                          (local_5c,"DB_LoadEtc::LoadFairPvPScore, get(%d) ERROR charac_no=%u",
                           local_14,uVar3);
                uVar3 = 0;
              }
            }
            else {
              uVar3 = *(undefined4 *)(param_1 + 4);
              cMyTrace::cMyTrace(local_6c,"bool DB_LoadEtc::LoadFairPvPScore(SIG_LOAD_ETC*)",0x1675,
                                 5);
              cMyTrace::operator()
                        (local_6c,"DB_LoadEtc::LoadFairPvPScore, get(%d) ERROR charac_no=%u",
                         local_14,uVar3);
              uVar3 = 0;
            }
          }
          else {
            uVar3 = *(undefined4 *)(param_1 + 4);
            cMyTrace::cMyTrace(local_7c,"bool DB_LoadEtc::LoadFairPvPScore(SIG_LOAD_ETC*)",0x166e,5)
            ;
            cMyTrace::operator()
                      (local_7c,"DB_LoadEtc::LoadFairPvPScore, get(%d) ERROR charac_no=%u",local_14,
                       uVar3);
            uVar3 = 0;
          }
        }
        else {
          uVar3 = *(undefined4 *)(param_1 + 4);
          cMyTrace::cMyTrace(local_8c,"bool DB_LoadEtc::LoadFairPvPScore(SIG_LOAD_ETC*)",0x1667,5);
          cMyTrace::operator()
                    (local_8c,"DB_LoadEtc::LoadFairPvPScore, get(%d) ERROR charac_no=%u",local_14,
                     uVar3);
          uVar3 = 0;
        }
      }
      else {
        uVar3 = *(undefined4 *)(param_1 + 4);
        cMyTrace::cMyTrace(local_cc,"bool DB_LoadEtc::LoadFairPvPScore(SIG_LOAD_ETC*)",0x162f,5);
        cMyTrace::operator()
                  (local_cc,"DB_LoadEtc::LoadFairPvPScore, fetch() ERROR charac_no=%u",uVar3);
        uVar3 = 0;
      }
    }
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 4);
    cMyTrace::cMyTrace(local_ec,"bool DB_LoadEtc::LoadFairPvPScore(SIG_LOAD_ETC*)",0x1618,5);
    cMyTrace::operator()(local_ec,"DB_LoadSkill::LoadFairPvPScore, exec() ERROR charac_no=%u",uVar3)
    ;
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## LoadItemMakingSkill

```asm
// === 084040b4 DB_LoadEtc::LoadItemMakingSkill  [0x084040b4-0x840428f] ===
 84040b4:	55                   	push   %ebp
 84040b5:	89 e5                	mov    %esp,%ebp
 84040b7:	53                   	push   %ebx
 84040b8:	83 ec 54             	sub    $0x54,%esp
 84040bb:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 84040c0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84040c7:	00 
 84040c8:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84040cf:	00 
 84040d0:	89 04 24             	mov    %eax,(%esp)
 84040d3:	e8 66 11 ff ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 84040d8:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84040db:	8b 45 0c             	mov    0xc(%ebp),%eax
 84040de:	8b 40 04             	mov    0x4(%eax),%eax
 84040e1:	89 44 24 08          	mov    %eax,0x8(%esp)
 84040e5:	c7 44 24 04 d4 37 c4 	movl   $0x8c437d4,0x4(%esp)
 84040ec:	08 
 84040ed:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84040f0:	89 04 24             	mov    %eax,(%esp)
 84040f3:	e8 c8 00 ff ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84040f8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84040ff:	00 
 8404100:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8404103:	89 04 24             	mov    %eax,(%esp)
 8404106:	e8 1b 02 ff ff       	call   83f4326 <_ZN5MySQL4execEb>
 840410b:	88 45 ef             	mov    %al,-0x11(%ebp)
 840410e:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
 8404112:	83 f0 01             	xor    $0x1,%eax
 8404115:	84 c0                	test   %al,%al
 8404117:	74 4a                	je     8404163 <_ZN10DB_LoadEtc19LoadItemMakingSkillEP12SIG_LOAD_ETC+0xaf>
 8404119:	8b 45 0c             	mov    0xc(%ebp),%eax
 840411c:	8b 58 04             	mov    0x4(%eax),%ebx
 840411f:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8404126:	00 
 8404127:	c7 44 24 08 dd 15 00 	movl   $0x15dd,0x8(%esp)
 840412e:	00 
 840412f:	c7 44 24 04 a0 d6 c5 	movl   $0x8c5d6a0,0x4(%esp)
 8404136:	08 
 8404137:	8d 45 bc             	lea    -0x44(%ebp),%eax
 840413a:	89 04 24             	mov    %eax,(%esp)
 840413d:	e8 d6 b5 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8404142:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8404146:	c7 44 24 04 70 38 c4 	movl   $0x8c43870,0x4(%esp)
 840414d:	08 
 840414e:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8404151:	89 04 24             	mov    %eax,(%esp)
 8404154:	e8 2f b6 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8404159:	b8 00 00 00 00       	mov    $0x0,%eax
 840415e:	e9 27 01 00 00       	jmp    840428a <_ZN10DB_LoadEtc19LoadItemMakingSkillEP12SIG_LOAD_ETC+0x1d6>
 8404163:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8404166:	89 04 24             	mov    %eax,(%esp)
 8404169:	e8 fe e1 cd ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 840416e:	85 c0                	test   %eax,%eax
 8404170:	0f 94 c0             	sete   %al
 8404173:	84 c0                	test   %al,%al
 8404175:	74 0a                	je     8404181 <_ZN10DB_LoadEtc19LoadItemMakingSkillEP12SIG_LOAD_ETC+0xcd>
 8404177:	b8 01 00 00 00       	mov    $0x1,%eax
 840417c:	e9 09 01 00 00       	jmp    840428a <_ZN10DB_LoadEtc19LoadItemMakingSkillEP12SIG_LOAD_ETC+0x1d6>
 8404181:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8404184:	89 04 24             	mov    %eax,(%esp)
 8404187:	e8 30 03 ff ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 840418c:	88 45 ef             	mov    %al,-0x11(%ebp)
 840418f:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
 8404193:	83 f0 01             	xor    $0x1,%eax
 8404196:	84 c0                	test   %al,%al
 8404198:	74 4a                	je     84041e4 <_ZN10DB_LoadEtc19LoadItemMakingSkillEP12SIG_LOAD_ETC+0x130>
 840419a:	8b 45 0c             	mov    0xc(%ebp),%eax
 840419d:	8b 58 04             	mov    0x4(%eax),%ebx
 84041a0:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 84041a7:	00 
 84041a8:	c7 44 24 08 e8 15 00 	movl   $0x15e8,0x8(%esp)
 84041af:	00 
 84041b0:	c7 44 24 04 a0 d6 c5 	movl   $0x8c5d6a0,0x4(%esp)
 84041b7:	08 
 84041b8:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84041bb:	89 04 24             	mov    %eax,(%esp)
 84041be:	e8 55 b5 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84041c3:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84041c7:	c7 44 24 04 ac 38 c4 	movl   $0x8c438ac,0x4(%esp)
 84041ce:	08 
 84041cf:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84041d2:	89 04 24             	mov    %eax,(%esp)
 84041d5:	e8 ae b5 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84041da:	b8 00 00 00 00       	mov    $0x0,%eax
 84041df:	e9 a6 00 00 00       	jmp    840428a <_ZN10DB_LoadEtc19LoadItemMakingSkillEP12SIG_LOAD_ETC+0x1d6>
 84041e4:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 84041eb:	e9 86 00 00 00       	jmp    8404276 <_ZN10DB_LoadEtc19LoadItemMakingSkillEP12SIG_LOAD_ETC+0x1c2>
 84041f0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84041f3:	05 78 6b 00 00       	add    $0x6b78,%eax
 84041f8:	01 c0                	add    %eax,%eax
 84041fa:	03 45 0c             	add    0xc(%ebp),%eax
 84041fd:	83 c0 10             	add    $0x10,%eax
 8404200:	89 44 24 08          	mov    %eax,0x8(%esp)
 8404204:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8404207:	89 44 24 04          	mov    %eax,0x4(%esp)
 840420b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840420e:	89 04 24             	mov    %eax,(%esp)
 8404211:	e8 d6 9b cf ff       	call   80fddec <_ZN5MySQL9get_shortEiRs>
 8404216:	88 45 ef             	mov    %al,-0x11(%ebp)
 8404219:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
 840421d:	83 f0 01             	xor    $0x1,%eax
 8404220:	84 c0                	test   %al,%al
 8404222:	74 4e                	je     8404272 <_ZN10DB_LoadEtc19LoadItemMakingSkillEP12SIG_LOAD_ETC+0x1be>
 8404224:	8b 45 0c             	mov    0xc(%ebp),%eax
 8404227:	8b 58 04             	mov    0x4(%eax),%ebx
 840422a:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8404231:	00 
 8404232:	c7 44 24 08 f2 15 00 	movl   $0x15f2,0x8(%esp)
 8404239:	00 
 840423a:	c7 44 24 04 a0 d6 c5 	movl   $0x8c5d6a0,0x4(%esp)
 8404241:	08 
 8404242:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8404245:	89 04 24             	mov    %eax,(%esp)
 8404248:	e8 cb b4 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 840424d:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8404251:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8404254:	89 44 24 08          	mov    %eax,0x8(%esp)
 8404258:	c7 44 24 04 f0 38 c4 	movl   $0x8c438f0,0x4(%esp)
 840425f:	08 
 8404260:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8404263:	89 04 24             	mov    %eax,(%esp)
 8404266:	e8 1d b5 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 840426b:	b8 00 00 00 00       	mov    $0x0,%eax
 8404270:	eb 18                	jmp    840428a <_ZN10DB_LoadEtc19LoadItemMakingSkillEP12SIG_LOAD_ETC+0x1d6>
 8404272:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8404276:	83 7d f4 0a          	cmpl   $0xa,-0xc(%ebp)
 840427a:	0f 9e c0             	setle  %al
 840427d:	84 c0                	test   %al,%al
 840427f:	0f 85 6b ff ff ff    	jne    84041f0 <_ZN10DB_LoadEtc19LoadItemMakingSkillEP12SIG_LOAD_ETC+0x13c>
 8404285:	b8 01 00 00 00       	mov    $0x1,%eax
 840428a:	83 c4 54             	add    $0x54,%esp
 840428d:	5b                   	pop    %ebx
 840428e:	5d                   	pop    %ebp
 840428f:	c3                   	ret

```

```c
// DB_LoadEtc::LoadItemMakingSkill @ 0x84040b4

/* DB_LoadEtc::LoadItemMakingSkill(SIG_LOAD_ETC*) */

undefined4 __thiscall DB_LoadEtc::LoadItemMakingSkill(DB_LoadEtc *this,SIG_LOAD_ETC *param_1)

{
  undefined4 uVar1;
  int iVar2;
  cMyTrace local_48 [16];
  cMyTrace local_38 [16];
  cMyTrace local_28 [19];
  char local_15;
  MySQL *local_14;
  int local_10;
  
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  MySQL::set_query(local_14,
                   "seLect weapon, cloth, leather, light_armor, heavy_armor, plate, amulet, wrist, ring, support, magic_stone from item_making_skill_info where charac_no=%u"
                   ,*(undefined4 *)(param_1 + 4));
  local_15 = MySQL::exec(local_14,true);
  if (local_15 == '\x01') {
    iVar2 = MySQL::get_n_rows(local_14);
    if (iVar2 == 0) {
      uVar1 = 1;
    }
    else {
      local_15 = MySQL::fetch(local_14);
      if (local_15 == '\x01') {
        for (local_10 = 0; local_15 = 1, local_10 < 0xb; local_10 = local_10 + 1) {
          local_15 = MySQL::get_short(local_14,local_10,
                                      (short *)(param_1 + (local_10 + 0x6b78) * 2 + 0x10));
          if (local_15 != '\x01') {
            uVar1 = *(undefined4 *)(param_1 + 4);
            cMyTrace::cMyTrace(local_28,"bool DB_LoadEtc::LoadItemMakingSkill(SIG_LOAD_ETC*)",0x15f2
                               ,5);
            cMyTrace::operator()
                      (local_28,"DB_LoadEtc::LoadItemMakingSkill get(%d) ERROR charac_no=%u",
                       local_10,uVar1);
            return 0;
          }
        }
        uVar1 = 1;
      }
      else {
        uVar1 = *(undefined4 *)(param_1 + 4);
        cMyTrace::cMyTrace(local_38,"bool DB_LoadEtc::LoadItemMakingSkill(SIG_LOAD_ETC*)",0x15e8,5);
        cMyTrace::operator()
                  (local_38,"DB_LoadEtc::LoadItemMakingSkill fetch, exec() ERROR charac_no=%u",uVar1
                  );
        uVar1 = 0;
      }
    }
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 4);
    cMyTrace::cMyTrace(local_48,"bool DB_LoadEtc::LoadItemMakingSkill(SIG_LOAD_ETC*)",0x15dd,5);
    cMyTrace::operator()
              (local_48,"DB_LoadEtc::LoadItemMakingSkill, exec() ERROR charac_no=%u",uVar1);
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## LoadLitmitItem

```asm
// === 08405c60 DB_LoadEtc::LoadLitmitItem  [0x08405c60-0x8405c6d] ===
 8405c60:	55                   	push   %ebp
 8405c61:	89 e5                	mov    %esp,%ebp
 8405c63:	83 ec 30             	sub    $0x30,%esp
 8405c66:	b8 01 00 00 00       	mov    $0x1,%eax
 8405c6b:	c9                   	leave
 8405c6c:	c3                   	ret
 8405c6d:	90                   	nop

```

```c
// DB_LoadEtc::LoadLitmitItem @ 0x8405c60

/* DB_LoadEtc::LoadLitmitItem(SIG_LOAD_ETC*) */

undefined4 DB_LoadEtc::LoadLitmitItem(SIG_LOAD_ETC *param_1)

{
  return 1;
}

```

---

## LoadOnceGiveAvengerTitle

```asm
// === 08406600 DB_LoadEtc::LoadOnceGiveAvengerTitle  [0x08406600-0x84066ad] ===
 8406600:	55                   	push   %ebp
 8406601:	89 e5                	mov    %esp,%ebp
 8406603:	83 ec 28             	sub    $0x28,%esp
 8406606:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 840660b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8406612:	00 
 8406613:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 840661a:	00 
 840661b:	89 04 24             	mov    %eax,(%esp)
 840661e:	e8 1b ec fe ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8406623:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8406626:	8b 45 0c             	mov    0xc(%ebp),%eax
 8406629:	8b 00                	mov    (%eax),%eax
 840662b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8406632:	00 
 8406633:	89 04 24             	mov    %eax,(%esp)
 8406636:	e8 10 2a d0 ff       	call   810904b <_Z14NumberToStringji>
 840663b:	89 44 24 08          	mov    %eax,0x8(%esp)
 840663f:	c7 44 24 04 3c 44 c4 	movl   $0x8c4443c,0x4(%esp)
 8406646:	08 
 8406647:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840664a:	89 04 24             	mov    %eax,(%esp)
 840664d:	e8 6e db fe ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8406652:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8406659:	00 
 840665a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840665d:	89 04 24             	mov    %eax,(%esp)
 8406660:	e8 c1 dc fe ff       	call   83f4326 <_ZN5MySQL4execEb>
 8406665:	83 f0 01             	xor    $0x1,%eax
 8406668:	84 c0                	test   %al,%al
 840666a:	74 11                	je     840667d <_ZN10DB_LoadEtc24LoadOnceGiveAvengerTitleEP12SIG_LOAD_ETC+0x7d>
 840666c:	8b 45 0c             	mov    0xc(%ebp),%eax
 840666f:	c6 80 ae c9 00 00 01 	movb   $0x1,0xc9ae(%eax)
 8406676:	b8 00 00 00 00       	mov    $0x0,%eax
 840667b:	eb 2f                	jmp    84066ac <_ZN10DB_LoadEtc24LoadOnceGiveAvengerTitleEP12SIG_LOAD_ETC+0xac>
 840667d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8406680:	89 04 24             	mov    %eax,(%esp)
 8406683:	e8 e4 bc cd ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8406688:	89 45 f4             	mov    %eax,-0xc(%ebp)
 840668b:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 840668f:	74 0c                	je     840669d <_ZN10DB_LoadEtc24LoadOnceGiveAvengerTitleEP12SIG_LOAD_ETC+0x9d>
 8406691:	8b 45 0c             	mov    0xc(%ebp),%eax
 8406694:	c6 80 ae c9 00 00 01 	movb   $0x1,0xc9ae(%eax)
 840669b:	eb 0a                	jmp    84066a7 <_ZN10DB_LoadEtc24LoadOnceGiveAvengerTitleEP12SIG_LOAD_ETC+0xa7>
 840669d:	8b 45 0c             	mov    0xc(%ebp),%eax
 84066a0:	c6 80 ae c9 00 00 00 	movb   $0x0,0xc9ae(%eax)
 84066a7:	b8 01 00 00 00       	mov    $0x1,%eax
 84066ac:	c9                   	leave
 84066ad:	c3                   	ret

```

```c
// DB_LoadEtc::LoadOnceGiveAvengerTitle @ 0x8406600

/* DB_LoadEtc::LoadOnceGiveAvengerTitle(SIG_LOAD_ETC*) */

undefined4 __thiscall DB_LoadEtc::LoadOnceGiveAvengerTitle(DB_LoadEtc *this,SIG_LOAD_ETC *param_1)

{
  char cVar1;
  MySQL *this_00;
  undefined4 uVar2;
  int iVar3;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  uVar2 = NumberToString(*(uint *)param_1,0);
  MySQL::set_query(this_00,"seLect m_id from event_1107_avenger_plan where m_id=%s",uVar2);
  cVar1 = MySQL::exec(this_00,true);
  if (cVar1 == '\x01') {
    iVar3 = MySQL::get_n_rows(this_00);
    if (iVar3 == 0) {
      param_1[0xc9ae] = (SIG_LOAD_ETC)0x0;
    }
    else {
      param_1[0xc9ae] = (SIG_LOAD_ETC)0x1;
    }
    uVar2 = 1;
  }
  else {
    param_1[0xc9ae] = (SIG_LOAD_ETC)0x1;
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## LoadPcRoomPlayTimeInfo

```asm
// === 084066ae DB_LoadEtc::LoadPcRoomPlayTimeInfo  [0x084066ae-0x840680f] ===
 84066ae:	55                   	push   %ebp
 84066af:	89 e5                	mov    %esp,%ebp
 84066b1:	83 ec 28             	sub    $0x28,%esp
 84066b4:	a1 30 f7 41 09       	mov    0x941f730,%eax
 84066b9:	c7 44 24 04 5c 00 00 	movl   $0x5c,0x4(%esp)
 84066c0:	00 
 84066c1:	89 04 24             	mov    %eax,(%esp)
 84066c4:	e8 cf f2 d0 ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 84066c9:	8b 10                	mov    (%eax),%edx
 84066cb:	83 c2 34             	add    $0x34,%edx
 84066ce:	8b 12                	mov    (%edx),%edx
 84066d0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84066d7:	00 
 84066d8:	89 04 24             	mov    %eax,(%esp)
 84066db:	ff d2                	call   *%edx
 84066dd:	83 f0 01             	xor    $0x1,%eax
 84066e0:	84 c0                	test   %al,%al
 84066e2:	74 0a                	je     84066ee <_ZN10DB_LoadEtc22LoadPcRoomPlayTimeInfoEP12SIG_LOAD_ETC+0x40>
 84066e4:	b8 01 00 00 00       	mov    $0x1,%eax
 84066e9:	e9 20 01 00 00       	jmp    840680e <_ZN10DB_LoadEtc22LoadPcRoomPlayTimeInfoEP12SIG_LOAD_ETC+0x160>
 84066ee:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 84066f3:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84066fa:	00 
 84066fb:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 8406702:	00 
 8406703:	89 04 24             	mov    %eax,(%esp)
 8406706:	e8 33 eb fe ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 840670b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 840670e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8406711:	8b 00                	mov    (%eax),%eax
 8406713:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 840671a:	00 
 840671b:	89 04 24             	mov    %eax,(%esp)
 840671e:	e8 28 29 d0 ff       	call   810904b <_Z14NumberToStringji>
 8406723:	89 44 24 08          	mov    %eax,0x8(%esp)
 8406727:	c7 44 24 04 74 44 c4 	movl   $0x8c44474,0x4(%esp)
 840672e:	08 
 840672f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8406732:	89 04 24             	mov    %eax,(%esp)
 8406735:	e8 86 da fe ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 840673a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8406741:	00 
 8406742:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8406745:	89 04 24             	mov    %eax,(%esp)
 8406748:	e8 d9 db fe ff       	call   83f4326 <_ZN5MySQL4execEb>
 840674d:	83 f0 01             	xor    $0x1,%eax
 8406750:	84 c0                	test   %al,%al
 8406752:	74 0a                	je     840675e <_ZN10DB_LoadEtc22LoadPcRoomPlayTimeInfoEP12SIG_LOAD_ETC+0xb0>
 8406754:	b8 00 00 00 00       	mov    $0x0,%eax
 8406759:	e9 b0 00 00 00       	jmp    840680e <_ZN10DB_LoadEtc22LoadPcRoomPlayTimeInfoEP12SIG_LOAD_ETC+0x160>
 840675e:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8406765:	c6 45 ef 00          	movb   $0x0,-0x11(%ebp)
 8406769:	8b 45 f4             	mov    -0xc(%ebp),%eax
 840676c:	89 04 24             	mov    %eax,(%esp)
 840676f:	e8 f8 bb cd ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8406774:	85 c0                	test   %eax,%eax
 8406776:	0f 94 c0             	sete   %al
 8406779:	84 c0                	test   %al,%al
 840677b:	74 0a                	je     8406787 <_ZN10DB_LoadEtc22LoadPcRoomPlayTimeInfoEP12SIG_LOAD_ETC+0xd9>
 840677d:	b8 01 00 00 00       	mov    $0x1,%eax
 8406782:	e9 87 00 00 00       	jmp    840680e <_ZN10DB_LoadEtc22LoadPcRoomPlayTimeInfoEP12SIG_LOAD_ETC+0x160>
 8406787:	8b 45 f4             	mov    -0xc(%ebp),%eax
 840678a:	89 04 24             	mov    %eax,(%esp)
 840678d:	e8 2a dd fe ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 8406792:	83 f0 01             	xor    $0x1,%eax
 8406795:	84 c0                	test   %al,%al
 8406797:	74 07                	je     84067a0 <_ZN10DB_LoadEtc22LoadPcRoomPlayTimeInfoEP12SIG_LOAD_ETC+0xf2>
 8406799:	b8 00 00 00 00       	mov    $0x0,%eax
 840679e:	eb 6e                	jmp    840680e <_ZN10DB_LoadEtc22LoadPcRoomPlayTimeInfoEP12SIG_LOAD_ETC+0x160>
 84067a0:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84067a3:	89 44 24 08          	mov    %eax,0x8(%esp)
 84067a7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84067ae:	00 
 84067af:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84067b2:	89 04 24             	mov    %eax,(%esp)
 84067b5:	e8 38 bb cd ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 84067ba:	83 f0 01             	xor    $0x1,%eax
 84067bd:	84 c0                	test   %al,%al
 84067bf:	74 07                	je     84067c8 <_ZN10DB_LoadEtc22LoadPcRoomPlayTimeInfoEP12SIG_LOAD_ETC+0x11a>
 84067c1:	b8 00 00 00 00       	mov    $0x0,%eax
 84067c6:	eb 46                	jmp    840680e <_ZN10DB_LoadEtc22LoadPcRoomPlayTimeInfoEP12SIG_LOAD_ETC+0x160>
 84067c8:	8d 45 ef             	lea    -0x11(%ebp),%eax
 84067cb:	89 44 24 08          	mov    %eax,0x8(%esp)
 84067cf:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84067d6:	00 
 84067d7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84067da:	89 04 24             	mov    %eax,(%esp)
 84067dd:	e8 d8 76 cf ff       	call   80fdeba <_ZN5MySQL9get_ubyteEiRh>
 84067e2:	83 f0 01             	xor    $0x1,%eax
 84067e5:	84 c0                	test   %al,%al
 84067e7:	74 07                	je     84067f0 <_ZN10DB_LoadEtc22LoadPcRoomPlayTimeInfoEP12SIG_LOAD_ETC+0x142>
 84067e9:	b8 00 00 00 00       	mov    $0x0,%eax
 84067ee:	eb 1e                	jmp    840680e <_ZN10DB_LoadEtc22LoadPcRoomPlayTimeInfoEP12SIG_LOAD_ETC+0x160>
 84067f0:	8b 55 f0             	mov    -0x10(%ebp),%edx
 84067f3:	8b 45 0c             	mov    0xc(%ebp),%eax
 84067f6:	89 90 b3 c9 00 00    	mov    %edx,0xc9b3(%eax)
 84067fc:	0f b6 55 ef          	movzbl -0x11(%ebp),%edx
 8406800:	8b 45 0c             	mov    0xc(%ebp),%eax
 8406803:	88 90 b7 c9 00 00    	mov    %dl,0xc9b7(%eax)
 8406809:	b8 01 00 00 00       	mov    $0x1,%eax
 840680e:	c9                   	leave
 840680f:	c3                   	ret

```

```c
// DB_LoadEtc::LoadPcRoomPlayTimeInfo @ 0x84066ae

/* DB_LoadEtc::LoadPcRoomPlayTimeInfo(SIG_LOAD_ETC*) */

undefined4 __thiscall DB_LoadEtc::LoadPcRoomPlayTimeInfo(DB_LoadEtc *this,SIG_LOAD_ETC *param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  SIG_LOAD_ETC local_15;
  uint local_14;
  MySQL *local_10;
  
  piVar2 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x5c);
  cVar1 = (**(code **)(*piVar2 + 0x34))(piVar2,0);
  if (cVar1 == '\x01') {
    local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
    uVar3 = NumberToString(*(uint *)param_1,0);
    MySQL::set_query(local_10,
                     "seLect play_time, reward_cnt from event_1204_pcroom_play_time where m_id = %s and occ_date > curdate()"
                     ,uVar3);
    cVar1 = MySQL::exec(local_10,true);
    if (cVar1 == '\x01') {
      local_14 = 0;
      local_15 = (SIG_LOAD_ETC)0x0;
      iVar4 = MySQL::get_n_rows(local_10);
      if (iVar4 == 0) {
        uVar3 = 1;
      }
      else {
        cVar1 = MySQL::fetch(local_10);
        if (cVar1 == '\x01') {
          cVar1 = MySQL::get_uint(local_10,0,&local_14);
          if (cVar1 == '\x01') {
            cVar1 = MySQL::get_ubyte(local_10,1,(uchar *)&local_15);
            if (cVar1 == '\x01') {
              *(uint *)(param_1 + 0xc9b3) = local_14;
              param_1[0xc9b7] = local_15;
              uVar3 = 1;
            }
            else {
              uVar3 = 0;
            }
          }
          else {
            uVar3 = 0;
          }
        }
        else {
          uVar3 = 0;
        }
      }
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

```

---

## LoadProperDungeonClearCount

```asm
// === 084073aa DB_LoadEtc::LoadProperDungeonClearCount  [0x084073aa-0x8407481] ===
 84073aa:	55                   	push   %ebp
 84073ab:	89 e5                	mov    %esp,%ebp
 84073ad:	83 ec 28             	sub    $0x28,%esp
 84073b0:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 84073b5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84073bc:	00 
 84073bd:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84073c4:	00 
 84073c5:	89 04 24             	mov    %eax,(%esp)
 84073c8:	e8 71 de fe ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 84073cd:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84073d0:	8b 45 0c             	mov    0xc(%ebp),%eax
 84073d3:	8b 40 04             	mov    0x4(%eax),%eax
 84073d6:	89 44 24 08          	mov    %eax,0x8(%esp)
 84073da:	c7 44 24 04 9c 48 c4 	movl   $0x8c4489c,0x4(%esp)
 84073e1:	08 
 84073e2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84073e5:	89 04 24             	mov    %eax,(%esp)
 84073e8:	e8 d3 cd fe ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84073ed:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84073f4:	00 
 84073f5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84073f8:	89 04 24             	mov    %eax,(%esp)
 84073fb:	e8 26 cf fe ff       	call   83f4326 <_ZN5MySQL4execEb>
 8407400:	83 f0 01             	xor    $0x1,%eax
 8407403:	84 c0                	test   %al,%al
 8407405:	74 07                	je     840740e <_ZN10DB_LoadEtc27LoadProperDungeonClearCountEP12SIG_LOAD_ETC+0x64>
 8407407:	b8 00 00 00 00       	mov    $0x0,%eax
 840740c:	eb 72                	jmp    8407480 <_ZN10DB_LoadEtc27LoadProperDungeonClearCountEP12SIG_LOAD_ETC+0xd6>
 840740e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8407411:	89 04 24             	mov    %eax,(%esp)
 8407414:	e8 53 af cd ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8407419:	89 45 f4             	mov    %eax,-0xc(%ebp)
 840741c:	83 7d f4 01          	cmpl   $0x1,-0xc(%ebp)
 8407420:	74 13                	je     8407435 <_ZN10DB_LoadEtc27LoadProperDungeonClearCountEP12SIG_LOAD_ETC+0x8b>
 8407422:	8b 45 0c             	mov    0xc(%ebp),%eax
 8407425:	66 c7 80 cc 40 00 00 	movw   $0x0,0x40cc(%eax)
 840742c:	00 00 
 840742e:	b8 01 00 00 00       	mov    $0x1,%eax
 8407433:	eb 4b                	jmp    8407480 <_ZN10DB_LoadEtc27LoadProperDungeonClearCountEP12SIG_LOAD_ETC+0xd6>
 8407435:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8407438:	89 04 24             	mov    %eax,(%esp)
 840743b:	e8 7c d0 fe ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 8407440:	83 f0 01             	xor    $0x1,%eax
 8407443:	84 c0                	test   %al,%al
 8407445:	74 07                	je     840744e <_ZN10DB_LoadEtc27LoadProperDungeonClearCountEP12SIG_LOAD_ETC+0xa4>
 8407447:	b8 00 00 00 00       	mov    $0x0,%eax
 840744c:	eb 32                	jmp    8407480 <_ZN10DB_LoadEtc27LoadProperDungeonClearCountEP12SIG_LOAD_ETC+0xd6>
 840744e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8407451:	05 cc 40 00 00       	add    $0x40cc,%eax
 8407456:	89 44 24 08          	mov    %eax,0x8(%esp)
 840745a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8407461:	00 
 8407462:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8407465:	89 04 24             	mov    %eax,(%esp)
 8407468:	e8 7f 69 cf ff       	call   80fddec <_ZN5MySQL9get_shortEiRs>
 840746d:	83 f0 01             	xor    $0x1,%eax
 8407470:	84 c0                	test   %al,%al
 8407472:	74 07                	je     840747b <_ZN10DB_LoadEtc27LoadProperDungeonClearCountEP12SIG_LOAD_ETC+0xd1>
 8407474:	b8 00 00 00 00       	mov    $0x0,%eax
 8407479:	eb 05                	jmp    8407480 <_ZN10DB_LoadEtc27LoadProperDungeonClearCountEP12SIG_LOAD_ETC+0xd6>
 840747b:	b8 01 00 00 00       	mov    $0x1,%eax
 8407480:	c9                   	leave
 8407481:	c3                   	ret

```

```c
// DB_LoadEtc::LoadProperDungeonClearCount @ 0x84073aa

/* DB_LoadEtc::LoadProperDungeonClearCount(SIG_LOAD_ETC*) */

undefined4 __thiscall
DB_LoadEtc::LoadProperDungeonClearCount(DB_LoadEtc *this,SIG_LOAD_ETC *param_1)

{
  char cVar1;
  MySQL *this_00;
  undefined4 uVar2;
  int iVar3;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  MySQL::set_query(this_00,"seLect clear_cnt from event_dungeon_clear where charac_no=%u",
                   *(undefined4 *)(param_1 + 4));
  cVar1 = MySQL::exec(this_00,true);
  if (cVar1 == '\x01') {
    iVar3 = MySQL::get_n_rows(this_00);
    if (iVar3 == 1) {
      cVar1 = MySQL::fetch(this_00);
      if (cVar1 == '\x01') {
        cVar1 = MySQL::get_short(this_00,0,(short *)(param_1 + 0x40cc));
        if (cVar1 == '\x01') {
          uVar2 = 1;
        }
        else {
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      *(undefined2 *)(param_1 + 0x40cc) = 0;
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## LoadPvPMissionList

```asm
// === 08406cce DB_LoadEtc::LoadPvPMissionList  [0x08406cce-0x8406eeb] ===
 8406cce:	55                   	push   %ebp
 8406ccf:	89 e5                	mov    %esp,%ebp
 8406cd1:	57                   	push   %edi
 8406cd2:	53                   	push   %ebx
 8406cd3:	81 ec f0 01 00 00    	sub    $0x1f0,%esp
 8406cd9:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8406cde:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8406ce5:	00 
 8406ce6:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8406ced:	00 
 8406cee:	89 04 24             	mov    %eax,(%esp)
 8406cf1:	e8 48 e5 fe ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8406cf6:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8406cf9:	8b 45 0c             	mov    0xc(%ebp),%eax
 8406cfc:	8b 40 04             	mov    0x4(%eax),%eax
 8406cff:	89 44 24 08          	mov    %eax,0x8(%esp)
 8406d03:	c7 44 24 04 3c 46 c4 	movl   $0x8c4463c,0x4(%esp)
 8406d0a:	08 
 8406d0b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8406d0e:	89 04 24             	mov    %eax,(%esp)
 8406d11:	e8 aa d4 fe ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8406d16:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8406d1d:	00 
 8406d1e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8406d21:	89 04 24             	mov    %eax,(%esp)
 8406d24:	e8 fd d5 fe ff       	call   83f4326 <_ZN5MySQL4execEb>
 8406d29:	88 45 f3             	mov    %al,-0xd(%ebp)
 8406d2c:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 8406d30:	83 f0 01             	xor    $0x1,%eax
 8406d33:	84 c0                	test   %al,%al
 8406d35:	74 4a                	je     8406d81 <_ZN10DB_LoadEtc18LoadPvPMissionListEP12SIG_LOAD_ETC+0xb3>
 8406d37:	8b 45 0c             	mov    0xc(%ebp),%eax
 8406d3a:	8b 58 04             	mov    0x4(%eax),%ebx
 8406d3d:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8406d44:	00 
 8406d45:	c7 44 24 08 3f 1b 00 	movl   $0x1b3f,0x8(%esp)
 8406d4c:	00 
 8406d4d:	c7 44 24 04 c0 d4 c5 	movl   $0x8c5d4c0,0x4(%esp)
 8406d54:	08 
 8406d55:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8406d58:	89 04 24             	mov    %eax,(%esp)
 8406d5b:	e8 b8 89 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8406d60:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8406d64:	c7 44 24 04 7c 46 c4 	movl   $0x8c4467c,0x4(%esp)
 8406d6b:	08 
 8406d6c:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8406d6f:	89 04 24             	mov    %eax,(%esp)
 8406d72:	e8 11 8a 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8406d77:	b8 00 00 00 00       	mov    $0x0,%eax
 8406d7c:	e9 61 01 00 00       	jmp    8406ee2 <_ZN10DB_LoadEtc18LoadPvPMissionListEP12SIG_LOAD_ETC+0x214>
 8406d81:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8406d84:	89 04 24             	mov    %eax,(%esp)
 8406d87:	e8 e0 b5 cd ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8406d8c:	85 c0                	test   %eax,%eax
 8406d8e:	0f 94 c0             	sete   %al
 8406d91:	84 c0                	test   %al,%al
 8406d93:	74 0a                	je     8406d9f <_ZN10DB_LoadEtc18LoadPvPMissionListEP12SIG_LOAD_ETC+0xd1>
 8406d95:	b8 00 00 00 00       	mov    $0x0,%eax
 8406d9a:	e9 43 01 00 00       	jmp    8406ee2 <_ZN10DB_LoadEtc18LoadPvPMissionListEP12SIG_LOAD_ETC+0x214>
 8406d9f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8406da2:	89 04 24             	mov    %eax,(%esp)
 8406da5:	e8 12 d7 fe ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 8406daa:	88 45 f3             	mov    %al,-0xd(%ebp)
 8406dad:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 8406db1:	83 f0 01             	xor    $0x1,%eax
 8406db4:	84 c0                	test   %al,%al
 8406db6:	74 4a                	je     8406e02 <_ZN10DB_LoadEtc18LoadPvPMissionListEP12SIG_LOAD_ETC+0x134>
 8406db8:	8b 45 0c             	mov    0xc(%ebp),%eax
 8406dbb:	8b 58 04             	mov    0x4(%eax),%ebx
 8406dbe:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8406dc5:	00 
 8406dc6:	c7 44 24 08 49 1b 00 	movl   $0x1b49,0x8(%esp)
 8406dcd:	00 
 8406dce:	c7 44 24 04 c0 d4 c5 	movl   $0x8c5d4c0,0x4(%esp)
 8406dd5:	08 
 8406dd6:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8406dd9:	89 04 24             	mov    %eax,(%esp)
 8406ddc:	e8 37 89 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8406de1:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8406de5:	c7 44 24 04 ac 46 c4 	movl   $0x8c446ac,0x4(%esp)
 8406dec:	08 
 8406ded:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8406df0:	89 04 24             	mov    %eax,(%esp)
 8406df3:	e8 90 89 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8406df8:	b8 00 00 00 00       	mov    $0x0,%eax
 8406dfd:	e9 e0 00 00 00       	jmp    8406ee2 <_ZN10DB_LoadEtc18LoadPvPMissionListEP12SIG_LOAD_ETC+0x214>
 8406e02:	8d 9d 20 fe ff ff    	lea    -0x1e0(%ebp),%ebx
 8406e08:	b8 00 00 00 00       	mov    $0x0,%eax
 8406e0d:	ba 66 00 00 00       	mov    $0x66,%edx
 8406e12:	89 df                	mov    %ebx,%edi
 8406e14:	89 d1                	mov    %edx,%ecx
 8406e16:	f3 ab                	rep stos %eax,%es:(%edi)
 8406e18:	c7 45 b8 98 01 00 00 	movl   $0x198,-0x48(%ebp)
 8406e1f:	8b 45 b8             	mov    -0x48(%ebp),%eax
 8406e22:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8406e26:	8d 85 20 fe ff ff    	lea    -0x1e0(%ebp),%eax
 8406e2c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8406e30:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8406e37:	00 
 8406e38:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8406e3b:	89 04 24             	mov    %eax,(%esp)
 8406e3e:	e8 d7 e4 d1 ff       	call   812531a <_ZN5MySQL10get_binaryEiPvi>
 8406e43:	83 f0 01             	xor    $0x1,%eax
 8406e46:	84 c0                	test   %al,%al
 8406e48:	74 47                	je     8406e91 <_ZN10DB_LoadEtc18LoadPvPMissionListEP12SIG_LOAD_ETC+0x1c3>
 8406e4a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8406e4d:	8b 58 04             	mov    0x4(%eax),%ebx
 8406e50:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8406e57:	00 
 8406e58:	c7 44 24 08 51 1b 00 	movl   $0x1b51,0x8(%esp)
 8406e5f:	00 
 8406e60:	c7 44 24 04 c0 d4 c5 	movl   $0x8c5d4c0,0x4(%esp)
 8406e67:	08 
 8406e68:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8406e6b:	89 04 24             	mov    %eax,(%esp)
 8406e6e:	e8 a5 88 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8406e73:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8406e77:	c7 44 24 04 fc 45 c4 	movl   $0x8c445fc,0x4(%esp)
 8406e7e:	08 
 8406e7f:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8406e82:	89 04 24             	mov    %eax,(%esp)
 8406e85:	e8 fe 88 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8406e8a:	b8 00 00 00 00       	mov    $0x0,%eax
 8406e8f:	eb 51                	jmp    8406ee2 <_ZN10DB_LoadEtc18LoadPvPMissionListEP12SIG_LOAD_ETC+0x214>
 8406e91:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8406e98:	00 
 8406e99:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8406e9c:	89 04 24             	mov    %eax,(%esp)
 8406e9f:	e8 3a e5 d1 ff       	call   81253de <_ZN5MySQL17get_binary_lengthEi>
 8406ea4:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8406ea7:	8b 45 0c             	mov    0xc(%ebp),%eax
 8406eaa:	05 d5 cd 00 00       	add    $0xcdd5,%eax
 8406eaf:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8406eb2:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8406eb6:	8d 95 20 fe ff ff    	lea    -0x1e0(%ebp),%edx
 8406ebc:	89 54 24 08          	mov    %edx,0x8(%esp)
 8406ec0:	8d 55 b8             	lea    -0x48(%ebp),%edx
 8406ec3:	89 54 24 04          	mov    %edx,0x4(%esp)
 8406ec7:	89 04 24             	mov    %eax,(%esp)
 8406eca:	e8 33 b2 2a 00       	call   86b2102 <_Z14uncompress_zipPcRjPKcj>
 8406ecf:	83 f0 01             	xor    $0x1,%eax
 8406ed2:	84 c0                	test   %al,%al
 8406ed4:	74 07                	je     8406edd <_ZN10DB_LoadEtc18LoadPvPMissionListEP12SIG_LOAD_ETC+0x20f>
 8406ed6:	b8 00 00 00 00       	mov    $0x0,%eax
 8406edb:	eb 05                	jmp    8406ee2 <_ZN10DB_LoadEtc18LoadPvPMissionListEP12SIG_LOAD_ETC+0x214>
 8406edd:	b8 01 00 00 00       	mov    $0x1,%eax
 8406ee2:	81 c4 f0 01 00 00    	add    $0x1f0,%esp
 8406ee8:	5b                   	pop    %ebx
 8406ee9:	5f                   	pop    %edi
 8406eea:	5d                   	pop    %ebp
 8406eeb:	c3                   	ret

```

```c
// DB_LoadEtc::LoadPvPMissionList @ 0x8406cce

/* DB_LoadEtc::LoadPvPMissionList(SIG_LOAD_ETC*) */

undefined4 __thiscall DB_LoadEtc::LoadPvPMissionList(DB_LoadEtc *this,SIG_LOAD_ETC *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  byte bVar5;
  char local_1e4 [408];
  uint local_4c;
  cMyTrace local_48 [16];
  cMyTrace local_38 [16];
  cMyTrace local_28 [16];
  MySQL *local_18;
  char local_11;
  uint local_10;
  
  bVar5 = 0;
  local_18 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  MySQL::set_query(local_18,"seLect pvp_mission_info from fair_pvp_score where charac_no=%u",
                   *(undefined4 *)(param_1 + 4));
  local_11 = MySQL::exec(local_18,true);
  if (local_11 == '\x01') {
    iVar3 = MySQL::get_n_rows(local_18);
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else {
      local_11 = MySQL::fetch(local_18);
      if (local_11 == '\x01') {
        local_11 = 1;
        pcVar4 = local_1e4;
        for (iVar3 = 0x66; iVar3 != 0; iVar3 = iVar3 + -1) {
          pcVar4[0] = '\0';
          pcVar4[1] = '\0';
          pcVar4[2] = '\0';
          pcVar4[3] = '\0';
          pcVar4 = pcVar4 + ((uint)bVar5 * -2 + 1) * 4;
        }
        local_4c = 0x198;
        cVar1 = MySQL::get_binary(local_18,0,local_1e4,0x198);
        if (cVar1 == '\x01') {
          local_10 = MySQL::get_binary_length(local_18,0);
          cVar1 = uncompress_zip((char *)(param_1 + 0xcdd5),&local_4c,local_1e4,local_10);
          if (cVar1 == '\x01') {
            uVar2 = 1;
          }
          else {
            uVar2 = 0;
          }
        }
        else {
          uVar2 = *(undefined4 *)(param_1 + 4);
          cMyTrace::cMyTrace(local_28,"bool DB_LoadEtc::LoadPvPMissionList(SIG_LOAD_ETC*)",0x1b51,5)
          ;
          cMyTrace::operator()
                    (local_28,"DB_LoadInventory::GetItemLock, get_binary(2) ERROR charac_no=%u",
                     uVar2);
          uVar2 = 0;
        }
      }
      else {
        uVar2 = *(undefined4 *)(param_1 + 4);
        cMyTrace::cMyTrace(local_38,"bool DB_LoadEtc::LoadPvPMissionList(SIG_LOAD_ETC*)",0x1b49,5);
        cMyTrace::operator()(local_38,"LoadPvPMissionList, fetch() ERROR charac_no=%u",uVar2);
        uVar2 = 0;
      }
    }
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 4);
    cMyTrace::cMyTrace(local_48,"bool DB_LoadEtc::LoadPvPMissionList(SIG_LOAD_ETC*)",0x1b3f,5);
    cMyTrace::operator()(local_48,"LoadPvPMissionList, exec() ERROR charac_no=%u",uVar2);
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## LoadQuestShop

```asm
// === 08404a68 DB_LoadEtc::LoadQuestShop  [0x08404a68-0x8404b71] ===
 8404a68:	55                   	push   %ebp
 8404a69:	89 e5                	mov    %esp,%ebp
 8404a6b:	53                   	push   %ebx
 8404a6c:	83 ec 44             	sub    $0x44,%esp
 8404a6f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8404a72:	8d 90 a7 d5 00 00    	lea    0xd5a7(%eax),%edx
 8404a78:	8b 45 0c             	mov    0xc(%ebp),%eax
 8404a7b:	8b 40 04             	mov    0x4(%eax),%eax
 8404a7e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8404a82:	89 04 24             	mov    %eax,(%esp)
 8404a85:	e8 e8 00 00 00       	call   8404b72 <_ZN10DB_LoadEtc14_LoadQuestShopEjP22CHARAC_QUEST_SHOP_DATA>
 8404a8a:	88 45 f7             	mov    %al,-0x9(%ebp)
 8404a8d:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 8404a91:	83 f0 01             	xor    $0x1,%eax
 8404a94:	84 c0                	test   %al,%al
 8404a96:	74 4a                	je     8404ae2 <_ZN10DB_LoadEtc13LoadQuestShopEP12SIG_LOAD_ETC+0x7a>
 8404a98:	8b 45 0c             	mov    0xc(%ebp),%eax
 8404a9b:	8b 58 04             	mov    0x4(%eax),%ebx
 8404a9e:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8404aa5:	00 
 8404aa6:	c7 44 24 08 c4 16 00 	movl   $0x16c4,0x8(%esp)
 8404aad:	00 
 8404aae:	c7 44 24 04 20 d6 c5 	movl   $0x8c5d620,0x4(%esp)
 8404ab5:	08 
 8404ab6:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8404ab9:	89 04 24             	mov    %eax,(%esp)
 8404abc:	e8 57 ac 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8404ac1:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8404ac5:	c7 44 24 04 74 3b c4 	movl   $0x8c43b74,0x4(%esp)
 8404acc:	08 
 8404acd:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8404ad0:	89 04 24             	mov    %eax,(%esp)
 8404ad3:	e8 b0 ac 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8404ad8:	b8 00 00 00 00       	mov    $0x0,%eax
 8404add:	e9 89 00 00 00       	jmp    8404b6b <_ZN10DB_LoadEtc13LoadQuestShopEP12SIG_LOAD_ETC+0x103>
 8404ae2:	8b 45 0c             	mov    0xc(%ebp),%eax
 8404ae5:	8b 40 0c             	mov    0xc(%eax),%eax
 8404ae8:	85 c0                	test   %eax,%eax
 8404aea:	74 7a                	je     8404b66 <_ZN10DB_LoadEtc13LoadQuestShopEP12SIG_LOAD_ETC+0xfe>
 8404aec:	8b 45 0c             	mov    0xc(%ebp),%eax
 8404aef:	8d 90 51 d6 00 00    	lea    0xd651(%eax),%edx
 8404af5:	8b 45 0c             	mov    0xc(%ebp),%eax
 8404af8:	8b 40 0c             	mov    0xc(%eax),%eax
 8404afb:	89 54 24 04          	mov    %edx,0x4(%esp)
 8404aff:	89 04 24             	mov    %eax,(%esp)
 8404b02:	e8 6b 00 00 00       	call   8404b72 <_ZN10DB_LoadEtc14_LoadQuestShopEjP22CHARAC_QUEST_SHOP_DATA>
 8404b07:	88 45 f7             	mov    %al,-0x9(%ebp)
 8404b0a:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 8404b0e:	83 f0 01             	xor    $0x1,%eax
 8404b11:	84 c0                	test   %al,%al
 8404b13:	74 47                	je     8404b5c <_ZN10DB_LoadEtc13LoadQuestShopEP12SIG_LOAD_ETC+0xf4>
 8404b15:	8b 45 0c             	mov    0xc(%ebp),%eax
 8404b18:	8b 58 0c             	mov    0xc(%eax),%ebx
 8404b1b:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8404b22:	00 
 8404b23:	c7 44 24 08 d5 16 00 	movl   $0x16d5,0x8(%esp)
 8404b2a:	00 
 8404b2b:	c7 44 24 04 20 d6 c5 	movl   $0x8c5d620,0x4(%esp)
 8404b32:	08 
 8404b33:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8404b36:	89 04 24             	mov    %eax,(%esp)
 8404b39:	e8 da ab 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8404b3e:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8404b42:	c7 44 24 04 ac 3b c4 	movl   $0x8c43bac,0x4(%esp)
 8404b49:	08 
 8404b4a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8404b4d:	89 04 24             	mov    %eax,(%esp)
 8404b50:	e8 33 ac 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8404b55:	b8 00 00 00 00       	mov    $0x0,%eax
 8404b5a:	eb 0f                	jmp    8404b6b <_ZN10DB_LoadEtc13LoadQuestShopEP12SIG_LOAD_ETC+0x103>
 8404b5c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8404b5f:	c6 80 fb d6 00 00 01 	movb   $0x1,0xd6fb(%eax)
 8404b66:	b8 01 00 00 00       	mov    $0x1,%eax
 8404b6b:	83 c4 44             	add    $0x44,%esp
 8404b6e:	5b                   	pop    %ebx
 8404b6f:	5d                   	pop    %ebp
 8404b70:	c3                   	ret
 8404b71:	90                   	nop

```

```c
// DB_LoadEtc::LoadQuestShop @ 0x8404a68

/* DB_LoadEtc::LoadQuestShop(SIG_LOAD_ETC*) */

undefined4 __thiscall DB_LoadEtc::LoadQuestShop(DB_LoadEtc *this,SIG_LOAD_ETC *param_1)

{
  undefined4 uVar1;
  cMyTrace local_30 [16];
  cMyTrace local_20 [19];
  char local_d;
  
  local_d = _LoadQuestShop(*(uint *)(param_1 + 4),(CHARAC_QUEST_SHOP_DATA *)(param_1 + 0xd5a7));
  if (local_d == '\x01') {
    if (*(int *)(param_1 + 0xc) != 0) {
      local_d = _LoadQuestShop(*(uint *)(param_1 + 0xc),(CHARAC_QUEST_SHOP_DATA *)(param_1 + 0xd651)
                              );
      if (local_d != '\x01') {
        uVar1 = *(undefined4 *)(param_1 + 0xc);
        cMyTrace::cMyTrace(local_20,"bool DB_LoadEtc::LoadQuestShop(SIG_LOAD_ETC*)",0x16d5,5);
        cMyTrace::operator()
                  (local_20,"DB_LoadInventory::_LoadQuestShop ERROR::tag_charac_no(%d)",uVar1);
        return 0;
      }
      param_1[0xd6fb] = (SIG_LOAD_ETC)0x1;
    }
    uVar1 = 1;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 4);
    cMyTrace::cMyTrace(local_30,"bool DB_LoadEtc::LoadQuestShop(SIG_LOAD_ETC*)",0x16c4,5);
    cMyTrace::operator()(local_30,"DB_LoadInventory::_LoadQuestShop ERROR::charac_no(%d)",uVar1);
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## LoadRedeemItem

```asm
// === 08406a6a DB_LoadEtc::LoadRedeemItem  [0x08406a6a-0x8406ccd] ===
 8406a6a:	55                   	push   %ebp
 8406a6b:	89 e5                	mov    %esp,%ebp
 8406a6d:	57                   	push   %edi
 8406a6e:	53                   	push   %ebx
 8406a6f:	81 ec 20 07 00 00    	sub    $0x720,%esp
 8406a75:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8406a7a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8406a81:	00 
 8406a82:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8406a89:	00 
 8406a8a:	89 04 24             	mov    %eax,(%esp)
 8406a8d:	e8 ac e7 fe ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8406a92:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8406a95:	8b 45 0c             	mov    0xc(%ebp),%eax
 8406a98:	8b 40 04             	mov    0x4(%eax),%eax
 8406a9b:	89 44 24 08          	mov    %eax,0x8(%esp)
 8406a9f:	c7 44 24 04 44 45 c4 	movl   $0x8c44544,0x4(%esp)
 8406aa6:	08 
 8406aa7:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8406aaa:	89 04 24             	mov    %eax,(%esp)
 8406aad:	e8 0e d7 fe ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8406ab2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8406ab9:	00 
 8406aba:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8406abd:	89 04 24             	mov    %eax,(%esp)
 8406ac0:	e8 61 d8 fe ff       	call   83f4326 <_ZN5MySQL4execEb>
 8406ac5:	88 45 f3             	mov    %al,-0xd(%ebp)
 8406ac8:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 8406acc:	83 f0 01             	xor    $0x1,%eax
 8406acf:	84 c0                	test   %al,%al
 8406ad1:	74 4a                	je     8406b1d <_ZN10DB_LoadEtc14LoadRedeemItemEP12SIG_LOAD_ETC+0xb3>
 8406ad3:	8b 45 0c             	mov    0xc(%ebp),%eax
 8406ad6:	8b 58 04             	mov    0x4(%eax),%ebx
 8406ad9:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8406ae0:	00 
 8406ae1:	c7 44 24 08 16 1b 00 	movl   $0x1b16,0x8(%esp)
 8406ae8:	00 
 8406ae9:	c7 44 24 04 00 d5 c5 	movl   $0x8c5d500,0x4(%esp)
 8406af0:	08 
 8406af1:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8406af4:	89 04 24             	mov    %eax,(%esp)
 8406af7:	e8 1c 8c 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8406afc:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8406b00:	c7 44 24 04 84 45 c4 	movl   $0x8c44584,0x4(%esp)
 8406b07:	08 
 8406b08:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8406b0b:	89 04 24             	mov    %eax,(%esp)
 8406b0e:	e8 75 8c 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8406b13:	b8 00 00 00 00       	mov    $0x0,%eax
 8406b18:	e9 a6 01 00 00       	jmp    8406cc3 <_ZN10DB_LoadEtc14LoadRedeemItemEP12SIG_LOAD_ETC+0x259>
 8406b1d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8406b20:	89 04 24             	mov    %eax,(%esp)
 8406b23:	e8 44 b8 cd ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8406b28:	85 c0                	test   %eax,%eax
 8406b2a:	0f 94 c0             	sete   %al
 8406b2d:	84 c0                	test   %al,%al
 8406b2f:	74 0a                	je     8406b3b <_ZN10DB_LoadEtc14LoadRedeemItemEP12SIG_LOAD_ETC+0xd1>
 8406b31:	b8 00 00 00 00       	mov    $0x0,%eax
 8406b36:	e9 88 01 00 00       	jmp    8406cc3 <_ZN10DB_LoadEtc14LoadRedeemItemEP12SIG_LOAD_ETC+0x259>
 8406b3b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8406b3e:	89 04 24             	mov    %eax,(%esp)
 8406b41:	e8 76 d9 fe ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 8406b46:	88 45 f3             	mov    %al,-0xd(%ebp)
 8406b49:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 8406b4d:	83 f0 01             	xor    $0x1,%eax
 8406b50:	84 c0                	test   %al,%al
 8406b52:	74 4a                	je     8406b9e <_ZN10DB_LoadEtc14LoadRedeemItemEP12SIG_LOAD_ETC+0x134>
 8406b54:	8b 45 0c             	mov    0xc(%ebp),%eax
 8406b57:	8b 58 04             	mov    0x4(%eax),%ebx
 8406b5a:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8406b61:	00 
 8406b62:	c7 44 24 08 20 1b 00 	movl   $0x1b20,0x8(%esp)
 8406b69:	00 
 8406b6a:	c7 44 24 04 00 d5 c5 	movl   $0x8c5d500,0x4(%esp)
 8406b71:	08 
 8406b72:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8406b75:	89 04 24             	mov    %eax,(%esp)
 8406b78:	e8 9b 8b 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8406b7d:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8406b81:	c7 44 24 04 c0 45 c4 	movl   $0x8c445c0,0x4(%esp)
 8406b88:	08 
 8406b89:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8406b8c:	89 04 24             	mov    %eax,(%esp)
 8406b8f:	e8 f4 8b 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8406b94:	b8 00 00 00 00       	mov    $0x0,%eax
 8406b99:	e9 25 01 00 00       	jmp    8406cc3 <_ZN10DB_LoadEtc14LoadRedeemItemEP12SIG_LOAD_ETC+0x259>
 8406b9e:	8d 95 f1 f8 ff ff    	lea    -0x70f(%ebp),%edx
 8406ba4:	bb c7 06 00 00       	mov    $0x6c7,%ebx
 8406ba9:	b8 00 00 00 00       	mov    $0x0,%eax
 8406bae:	89 d1                	mov    %edx,%ecx
 8406bb0:	83 e1 01             	and    $0x1,%ecx
 8406bb3:	85 c9                	test   %ecx,%ecx
 8406bb5:	74 08                	je     8406bbf <_ZN10DB_LoadEtc14LoadRedeemItemEP12SIG_LOAD_ETC+0x155>
 8406bb7:	88 02                	mov    %al,(%edx)
 8406bb9:	83 c2 01             	add    $0x1,%edx
 8406bbc:	83 eb 01             	sub    $0x1,%ebx
 8406bbf:	89 d1                	mov    %edx,%ecx
 8406bc1:	83 e1 02             	and    $0x2,%ecx
 8406bc4:	85 c9                	test   %ecx,%ecx
 8406bc6:	74 09                	je     8406bd1 <_ZN10DB_LoadEtc14LoadRedeemItemEP12SIG_LOAD_ETC+0x167>
 8406bc8:	66 89 02             	mov    %ax,(%edx)
 8406bcb:	83 c2 02             	add    $0x2,%edx
 8406bce:	83 eb 02             	sub    $0x2,%ebx
 8406bd1:	89 d9                	mov    %ebx,%ecx
 8406bd3:	c1 e9 02             	shr    $0x2,%ecx
 8406bd6:	89 d7                	mov    %edx,%edi
 8406bd8:	f3 ab                	rep stos %eax,%es:(%edi)
 8406bda:	89 fa                	mov    %edi,%edx
 8406bdc:	89 d9                	mov    %ebx,%ecx
 8406bde:	83 e1 02             	and    $0x2,%ecx
 8406be1:	85 c9                	test   %ecx,%ecx
 8406be3:	74 06                	je     8406beb <_ZN10DB_LoadEtc14LoadRedeemItemEP12SIG_LOAD_ETC+0x181>
 8406be5:	66 89 02             	mov    %ax,(%edx)
 8406be8:	83 c2 02             	add    $0x2,%edx
 8406beb:	89 d9                	mov    %ebx,%ecx
 8406bed:	83 e1 01             	and    $0x1,%ecx
 8406bf0:	85 c9                	test   %ecx,%ecx
 8406bf2:	74 05                	je     8406bf9 <_ZN10DB_LoadEtc14LoadRedeemItemEP12SIG_LOAD_ETC+0x18f>
 8406bf4:	88 02                	mov    %al,(%edx)
 8406bf6:	83 c2 01             	add    $0x1,%edx
 8406bf9:	c7 45 b8 c7 06 00 00 	movl   $0x6c7,-0x48(%ebp)
 8406c00:	8b 45 b8             	mov    -0x48(%ebp),%eax
 8406c03:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8406c07:	8d 85 f1 f8 ff ff    	lea    -0x70f(%ebp),%eax
 8406c0d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8406c11:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8406c18:	00 
 8406c19:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8406c1c:	89 04 24             	mov    %eax,(%esp)
 8406c1f:	e8 f6 e6 d1 ff       	call   812531a <_ZN5MySQL10get_binaryEiPvi>
 8406c24:	83 f0 01             	xor    $0x1,%eax
 8406c27:	84 c0                	test   %al,%al
 8406c29:	74 47                	je     8406c72 <_ZN10DB_LoadEtc14LoadRedeemItemEP12SIG_LOAD_ETC+0x208>
 8406c2b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8406c2e:	8b 58 04             	mov    0x4(%eax),%ebx
 8406c31:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8406c38:	00 
 8406c39:	c7 44 24 08 28 1b 00 	movl   $0x1b28,0x8(%esp)
 8406c40:	00 
 8406c41:	c7 44 24 04 00 d5 c5 	movl   $0x8c5d500,0x4(%esp)
 8406c48:	08 
 8406c49:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8406c4c:	89 04 24             	mov    %eax,(%esp)
 8406c4f:	e8 c4 8a 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8406c54:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8406c58:	c7 44 24 04 fc 45 c4 	movl   $0x8c445fc,0x4(%esp)
 8406c5f:	08 
 8406c60:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8406c63:	89 04 24             	mov    %eax,(%esp)
 8406c66:	e8 1d 8b 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8406c6b:	b8 00 00 00 00       	mov    $0x0,%eax
 8406c70:	eb 51                	jmp    8406cc3 <_ZN10DB_LoadEtc14LoadRedeemItemEP12SIG_LOAD_ETC+0x259>
 8406c72:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8406c79:	00 
 8406c7a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8406c7d:	89 04 24             	mov    %eax,(%esp)
 8406c80:	e8 59 e7 d1 ff       	call   81253de <_ZN5MySQL17get_binary_lengthEi>
 8406c85:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8406c88:	8b 45 0c             	mov    0xc(%ebp),%eax
 8406c8b:	05 ce 40 00 00       	add    $0x40ce,%eax
 8406c90:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8406c93:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8406c97:	8d 95 f1 f8 ff ff    	lea    -0x70f(%ebp),%edx
 8406c9d:	89 54 24 08          	mov    %edx,0x8(%esp)
 8406ca1:	8d 55 b8             	lea    -0x48(%ebp),%edx
 8406ca4:	89 54 24 04          	mov    %edx,0x4(%esp)
 8406ca8:	89 04 24             	mov    %eax,(%esp)
 8406cab:	e8 52 b4 2a 00       	call   86b2102 <_Z14uncompress_zipPcRjPKcj>
 8406cb0:	83 f0 01             	xor    $0x1,%eax
 8406cb3:	84 c0                	test   %al,%al
 8406cb5:	74 07                	je     8406cbe <_ZN10DB_LoadEtc14LoadRedeemItemEP12SIG_LOAD_ETC+0x254>
 8406cb7:	b8 00 00 00 00       	mov    $0x0,%eax
 8406cbc:	eb 05                	jmp    8406cc3 <_ZN10DB_LoadEtc14LoadRedeemItemEP12SIG_LOAD_ETC+0x259>
 8406cbe:	b8 01 00 00 00       	mov    $0x1,%eax
 8406cc3:	81 c4 20 07 00 00    	add    $0x720,%esp
 8406cc9:	5b                   	pop    %ebx
 8406cca:	5f                   	pop    %edi
 8406ccb:	5d                   	pop    %ebp
 8406ccc:	c3                   	ret
 8406ccd:	90                   	nop

```

```c
// DB_LoadEtc::LoadRedeemItem @ 0x8406a6a

/* DB_LoadEtc::LoadRedeemItem(SIG_LOAD_ETC*) */

undefined4 __thiscall DB_LoadEtc::LoadRedeemItem(DB_LoadEtc *this,SIG_LOAD_ETC *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  bool bVar7;
  byte bVar8;
  char local_713;
  char local_712 [1734];
  uint local_4c;
  cMyTrace local_48 [16];
  cMyTrace local_38 [16];
  cMyTrace local_28 [16];
  MySQL *local_18;
  char local_11;
  uint local_10;
  
  bVar8 = 0;
  local_18 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  MySQL::set_query(local_18,"seLect redeem_info from charac_inven_expand where charac_no=%u",
                   *(undefined4 *)(param_1 + 4));
  local_11 = MySQL::exec(local_18,true);
  if (local_11 == '\x01') {
    iVar3 = MySQL::get_n_rows(local_18);
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else {
      local_11 = MySQL::fetch(local_18);
      if (local_11 == '\x01') {
        pcVar5 = &local_713;
        uVar6 = 0x6c7;
        bVar7 = ((uint)pcVar5 & 1) != 0;
        if (bVar7) {
          local_713 = '\0';
          pcVar5 = local_712;
          uVar6 = 0x6c6;
        }
        if (((uint)pcVar5 & 2) != 0) {
          pcVar5[0] = '\0';
          pcVar5[1] = '\0';
          pcVar5 = pcVar5 + 2;
          uVar6 = uVar6 - 2;
        }
        local_11 = 1;
        for (uVar4 = uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          pcVar5[0] = '\0';
          pcVar5[1] = '\0';
          pcVar5[2] = '\0';
          pcVar5[3] = '\0';
          pcVar5 = pcVar5 + ((uint)bVar8 * -2 + 1) * 4;
        }
        if ((uVar6 & 2) != 0) {
          pcVar5[0] = '\0';
          pcVar5[1] = '\0';
          pcVar5 = pcVar5 + 2;
        }
        if (!bVar7) {
          *pcVar5 = '\0';
        }
        local_4c = 0x6c7;
        cVar1 = MySQL::get_binary(local_18,0,&local_713,0x6c7);
        if (cVar1 == '\x01') {
          local_10 = MySQL::get_binary_length(local_18,0);
          cVar1 = uncompress_zip((char *)(param_1 + 0x40ce),&local_4c,&local_713,local_10);
          if (cVar1 == '\x01') {
            uVar2 = 1;
          }
          else {
            uVar2 = 0;
          }
        }
        else {
          uVar2 = *(undefined4 *)(param_1 + 4);
          cMyTrace::cMyTrace(local_28,"bool DB_LoadEtc::LoadRedeemItem(SIG_LOAD_ETC*)",0x1b28,5);
          cMyTrace::operator()
                    (local_28,"DB_LoadInventory::GetItemLock, get_binary(2) ERROR charac_no=%u",
                     uVar2);
          uVar2 = 0;
        }
      }
      else {
        uVar2 = *(undefined4 *)(param_1 + 4);
        cMyTrace::cMyTrace(local_38,"bool DB_LoadEtc::LoadRedeemItem(SIG_LOAD_ETC*)",0x1b20,5);
        cMyTrace::operator()
                  (local_38,"DB_LoadRedeemItemList::dispatch, fetch() ERROR charac_no=%u",uVar2);
        uVar2 = 0;
      }
    }
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 4);
    cMyTrace::cMyTrace(local_48,"bool DB_LoadEtc::LoadRedeemItem(SIG_LOAD_ETC*)",0x1b16,5);
    cMyTrace::operator()
              (local_48,"DB_LoadRedeemItemList::dispatch, exec() ERROR charac_no=%u",uVar2);
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## LoadSeriaRoomAniDeco

```asm
// === 0844a20a DB_LoadEtc::LoadSeriaRoomAniDeco  [0x0844a20a-0x844a38a] ===
 844a20a:	55                   	push   %ebp
 844a20b:	89 e5                	mov    %esp,%ebp
 844a20d:	83 ec 38             	sub    $0x38,%esp
 844a210:	a1 30 f7 41 09       	mov    0x941f730,%eax
 844a215:	c7 44 24 04 69 00 00 	movl   $0x69,0x4(%esp)
 844a21c:	00 
 844a21d:	89 04 24             	mov    %eax,(%esp)
 844a220:	e8 73 b7 cc ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 844a225:	8b 10                	mov    (%eax),%edx
 844a227:	83 c2 34             	add    $0x34,%edx
 844a22a:	8b 12                	mov    (%edx),%edx
 844a22c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 844a233:	00 
 844a234:	89 04 24             	mov    %eax,(%esp)
 844a237:	ff d2                	call   *%edx
 844a239:	83 f0 01             	xor    $0x1,%eax
 844a23c:	84 c0                	test   %al,%al
 844a23e:	74 0a                	je     844a24a <_ZN10DB_LoadEtc20LoadSeriaRoomAniDecoEP12SIG_LOAD_ETC+0x40>
 844a240:	b8 00 00 00 00       	mov    $0x0,%eax
 844a245:	e9 3f 01 00 00       	jmp    844a389 <_ZN10DB_LoadEtc20LoadSeriaRoomAniDecoEP12SIG_LOAD_ETC+0x17f>
 844a24a:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 844a24f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 844a256:	00 
 844a257:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 844a25e:	00 
 844a25f:	89 04 24             	mov    %eax,(%esp)
 844a262:	e8 d7 af fa ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 844a267:	89 45 f4             	mov    %eax,-0xc(%ebp)
 844a26a:	8b 45 0c             	mov    0xc(%ebp),%eax
 844a26d:	8b 48 04             	mov    0x4(%eax),%ecx
 844a270:	8b 45 0c             	mov    0xc(%ebp),%eax
 844a273:	8b 90 30 2d 00 00    	mov    0x2d30(%eax),%edx
 844a279:	8b 45 0c             	mov    0xc(%ebp),%eax
 844a27c:	8b 00                	mov    (%eax),%eax
 844a27e:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 844a282:	89 54 24 0c          	mov    %edx,0xc(%esp)
 844a286:	89 44 24 08          	mov    %eax,0x8(%esp)
 844a28a:	c7 44 24 04 3c 8f c5 	movl   $0x8c58f3c,0x4(%esp)
 844a291:	08 
 844a292:	8b 45 f4             	mov    -0xc(%ebp),%eax
 844a295:	89 04 24             	mov    %eax,(%esp)
 844a298:	e8 23 9f fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 844a29d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 844a2a4:	00 
 844a2a5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 844a2a8:	89 04 24             	mov    %eax,(%esp)
 844a2ab:	e8 76 a0 fa ff       	call   83f4326 <_ZN5MySQL4execEb>
 844a2b0:	88 45 f3             	mov    %al,-0xd(%ebp)
 844a2b3:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 844a2b7:	83 f0 01             	xor    $0x1,%eax
 844a2ba:	84 c0                	test   %al,%al
 844a2bc:	74 3f                	je     844a2fd <_ZN10DB_LoadEtc20LoadSeriaRoomAniDecoEP12SIG_LOAD_ETC+0xf3>
 844a2be:	8b 45 0c             	mov    0xc(%ebp),%eax
 844a2c1:	8b 00                	mov    (%eax),%eax
 844a2c3:	89 44 24 14          	mov    %eax,0x14(%esp)
 844a2c7:	c7 44 24 10 b4 8f c5 	movl   $0x8c58fb4,0x10(%esp)
 844a2ce:	08 
 844a2cf:	c7 44 24 0c 8f ba 00 	movl   $0xba8f,0xc(%esp)
 844a2d6:	00 
 844a2d7:	c7 44 24 08 c0 ae c5 	movl   $0x8c5aec0,0x8(%esp)
 844a2de:	08 
 844a2df:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 844a2e6:	08 
 844a2e7:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 844a2ee:	e8 17 99 68 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 844a2f3:	b8 00 00 00 00       	mov    $0x0,%eax
 844a2f8:	e9 8c 00 00 00       	jmp    844a389 <_ZN10DB_LoadEtc20LoadSeriaRoomAniDecoEP12SIG_LOAD_ETC+0x17f>
 844a2fd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 844a300:	89 04 24             	mov    %eax,(%esp)
 844a303:	e8 64 80 c9 ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 844a308:	85 c0                	test   %eax,%eax
 844a30a:	0f 95 c0             	setne  %al
 844a30d:	84 c0                	test   %al,%al
 844a30f:	74 73                	je     844a384 <_ZN10DB_LoadEtc20LoadSeriaRoomAniDecoEP12SIG_LOAD_ETC+0x17a>
 844a311:	8b 45 f4             	mov    -0xc(%ebp),%eax
 844a314:	89 04 24             	mov    %eax,(%esp)
 844a317:	e8 a0 a1 fa ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 844a31c:	83 f0 01             	xor    $0x1,%eax
 844a31f:	84 c0                	test   %al,%al
 844a321:	74 07                	je     844a32a <_ZN10DB_LoadEtc20LoadSeriaRoomAniDecoEP12SIG_LOAD_ETC+0x120>
 844a323:	b8 00 00 00 00       	mov    $0x0,%eax
 844a328:	eb 5f                	jmp    844a389 <_ZN10DB_LoadEtc20LoadSeriaRoomAniDecoEP12SIG_LOAD_ETC+0x17f>
 844a32a:	8b 45 0c             	mov    0xc(%ebp),%eax
 844a32d:	05 5c 4b 01 00       	add    $0x14b5c,%eax
 844a332:	89 44 24 08          	mov    %eax,0x8(%esp)
 844a336:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 844a33d:	00 
 844a33e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 844a341:	89 04 24             	mov    %eax,(%esp)
 844a344:	e8 a3 3a cb ff       	call   80fddec <_ZN5MySQL9get_shortEiRs>
 844a349:	83 f0 01             	xor    $0x1,%eax
 844a34c:	84 c0                	test   %al,%al
 844a34e:	74 07                	je     844a357 <_ZN10DB_LoadEtc20LoadSeriaRoomAniDecoEP12SIG_LOAD_ETC+0x14d>
 844a350:	b8 00 00 00 00       	mov    $0x0,%eax
 844a355:	eb 32                	jmp    844a389 <_ZN10DB_LoadEtc20LoadSeriaRoomAniDecoEP12SIG_LOAD_ETC+0x17f>
 844a357:	8b 45 0c             	mov    0xc(%ebp),%eax
 844a35a:	05 5e 4b 01 00       	add    $0x14b5e,%eax
 844a35f:	89 44 24 08          	mov    %eax,0x8(%esp)
 844a363:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 844a36a:	00 
 844a36b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 844a36e:	89 04 24             	mov    %eax,(%esp)
 844a371:	e8 76 3a cb ff       	call   80fddec <_ZN5MySQL9get_shortEiRs>
 844a376:	83 f0 01             	xor    $0x1,%eax
 844a379:	84 c0                	test   %al,%al
 844a37b:	74 07                	je     844a384 <_ZN10DB_LoadEtc20LoadSeriaRoomAniDecoEP12SIG_LOAD_ETC+0x17a>
 844a37d:	b8 00 00 00 00       	mov    $0x0,%eax
 844a382:	eb 05                	jmp    844a389 <_ZN10DB_LoadEtc20LoadSeriaRoomAniDecoEP12SIG_LOAD_ETC+0x17f>
 844a384:	b8 01 00 00 00       	mov    $0x1,%eax
 844a389:	c9                   	leave
 844a38a:	c3                   	ret

```

```c
// DB_LoadEtc::LoadSeriaRoomAniDeco @ 0x844a20a

/* DB_LoadEtc::LoadSeriaRoomAniDeco(SIG_LOAD_ETC*) */

undefined4 __thiscall DB_LoadEtc::LoadSeriaRoomAniDeco(DB_LoadEtc *this,SIG_LOAD_ETC *param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  MySQL *this_00;
  int iVar4;
  
  piVar2 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x69);
  cVar1 = (**(code **)(*piVar2 + 0x34))(piVar2,0);
  if (cVar1 == '\x01') {
    this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
    MySQL::set_query(this_00,
                     "seLect receive_flow, deco_flow from event_1208_seriaroom_anideco where m_id = %d and server_id = %d and charac_no = %d"
                     ,*(undefined4 *)param_1,*(undefined4 *)(param_1 + 0x2d30),
                     *(undefined4 *)(param_1 + 4));
    cVar1 = MySQL::exec(this_00,true);
    if (cVar1 == '\x01') {
      iVar4 = MySQL::get_n_rows(this_00);
      if (iVar4 != 0) {
        cVar1 = MySQL::fetch(this_00);
        if (cVar1 != '\x01') {
          return 0;
        }
        cVar1 = MySQL::get_short(this_00,0,(short *)(param_1 + 0x14b5c));
        if (cVar1 != '\x01') {
          return 0;
        }
        cVar1 = MySQL::get_short(this_00,1,(short *)(param_1 + 0x14b5e));
        if (cVar1 != '\x01') {
          return 0;
        }
      }
      uVar3 = 1;
    }
    else {
      LogManager::logFormat
                (1,"DBThread.cpp","bool DB_LoadEtc::LoadSeriaRoomAniDeco(SIG_LOAD_ETC*)",0xba8f,
                 "LoadSeriaRoomAniDeco Query Error : m_id(%d)",*(undefined4 *)param_1);
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## LoadTODUserState

```asm
// === 08406eec DB_LoadEtc::LoadTODUserState  [0x08406eec-0x8407295] ===
 8406eec:	55                   	push   %ebp
 8406eed:	89 e5                	mov    %esp,%ebp
 8406eef:	56                   	push   %esi
 8406ef0:	53                   	push   %ebx
 8406ef1:	83 c4 80             	add    $0xffffff80,%esp
 8406ef4:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8406ef9:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8406f00:	00 
 8406f01:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8406f08:	00 
 8406f09:	89 04 24             	mov    %eax,(%esp)
 8406f0c:	e8 2d e3 fe ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8406f11:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8406f14:	8b 45 0c             	mov    0xc(%ebp),%eax
 8406f17:	8b 40 04             	mov    0x4(%eax),%eax
 8406f1a:	89 44 24 08          	mov    %eax,0x8(%esp)
 8406f1e:	c7 44 24 04 dc 46 c4 	movl   $0x8c446dc,0x4(%esp)
 8406f25:	08 
 8406f26:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8406f29:	89 04 24             	mov    %eax,(%esp)
 8406f2c:	e8 8f d2 fe ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8406f31:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8406f38:	00 
 8406f39:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8406f3c:	89 04 24             	mov    %eax,(%esp)
 8406f3f:	e8 e2 d3 fe ff       	call   83f4326 <_ZN5MySQL4execEb>
 8406f44:	84 c0                	test   %al,%al
 8406f46:	0f 84 3e 03 00 00    	je     840728a <_ZN10DB_LoadEtc16LoadTODUserStateEP12SIG_LOAD_ETC+0x39e>
 8406f4c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8406f4f:	89 04 24             	mov    %eax,(%esp)
 8406f52:	e8 65 d5 fe ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 8406f57:	84 c0                	test   %al,%al
 8406f59:	0f 84 2b 03 00 00    	je     840728a <_ZN10DB_LoadEtc16LoadTODUserStateEP12SIG_LOAD_ETC+0x39e>
 8406f5f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8406f62:	89 04 24             	mov    %eax,(%esp)
 8406f65:	e8 a6 d3 fe ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 8406f6a:	89 c3                	mov    %eax,%ebx
 8406f6c:	83 f3 01             	xor    $0x1,%ebx
 8406f6f:	89 d6                	mov    %edx,%esi
 8406f71:	83 f6 00             	xor    $0x0,%esi
 8406f74:	89 d8                	mov    %ebx,%eax
 8406f76:	09 f0                	or     %esi,%eax
 8406f78:	85 c0                	test   %eax,%eax
 8406f7a:	0f 94 c0             	sete   %al
 8406f7d:	84 c0                	test   %al,%al
 8406f7f:	0f 84 05 03 00 00    	je     840728a <_ZN10DB_LoadEtc16LoadTODUserStateEP12SIG_LOAD_ETC+0x39e>
 8406f85:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8406f8c:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
 8406f90:	8b 45 0c             	mov    0xc(%ebp),%eax
 8406f93:	8d 90 1c d7 00 00    	lea    0xd71c(%eax),%edx
 8406f99:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8406f9c:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8406fa0:	89 54 24 08          	mov    %edx,0x8(%esp)
 8406fa4:	89 44 24 04          	mov    %eax,0x4(%esp)
 8406fa8:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8406fab:	89 04 24             	mov    %eax,(%esp)
 8406fae:	e8 79 f9 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8406fb3:	88 45 f7             	mov    %al,-0x9(%ebp)
 8406fb6:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 8406fba:	83 f0 01             	xor    $0x1,%eax
 8406fbd:	84 c0                	test   %al,%al
 8406fbf:	74 4a                	je     840700b <_ZN10DB_LoadEtc16LoadTODUserStateEP12SIG_LOAD_ETC+0x11f>
 8406fc1:	8b 45 0c             	mov    0xc(%ebp),%eax
 8406fc4:	8b 58 04             	mov    0x4(%eax),%ebx
 8406fc7:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8406fce:	00 
 8406fcf:	c7 44 24 08 77 1b 00 	movl   $0x1b77,0x8(%esp)
 8406fd6:	00 
 8406fd7:	c7 44 24 04 80 d4 c5 	movl   $0x8c5d480,0x4(%esp)
 8406fde:	08 
 8406fdf:	8d 45 8c             	lea    -0x74(%ebp),%eax
 8406fe2:	89 04 24             	mov    %eax,(%esp)
 8406fe5:	e8 2e 87 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8406fea:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8406fee:	c7 44 24 04 a8 47 c4 	movl   $0x8c447a8,0x4(%esp)
 8406ff5:	08 
 8406ff6:	8d 45 8c             	lea    -0x74(%ebp),%eax
 8406ff9:	89 04 24             	mov    %eax,(%esp)
 8406ffc:	e8 87 87 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8407001:	b8 00 00 00 00       	mov    $0x0,%eax
 8407006:	e9 84 02 00 00       	jmp    840728f <_ZN10DB_LoadEtc16LoadTODUserStateEP12SIG_LOAD_ETC+0x3a3>
 840700b:	8b 45 0c             	mov    0xc(%ebp),%eax
 840700e:	8d 90 20 d7 00 00    	lea    0xd720(%eax),%edx
 8407014:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8407017:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 840701b:	89 54 24 08          	mov    %edx,0x8(%esp)
 840701f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8407023:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8407026:	89 04 24             	mov    %eax,(%esp)
 8407029:	e8 fe f8 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 840702e:	88 45 f7             	mov    %al,-0x9(%ebp)
 8407031:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 8407035:	83 f0 01             	xor    $0x1,%eax
 8407038:	84 c0                	test   %al,%al
 840703a:	74 4a                	je     8407086 <_ZN10DB_LoadEtc16LoadTODUserStateEP12SIG_LOAD_ETC+0x19a>
 840703c:	8b 45 0c             	mov    0xc(%ebp),%eax
 840703f:	8b 58 04             	mov    0x4(%eax),%ebx
 8407042:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8407049:	00 
 840704a:	c7 44 24 08 7f 1b 00 	movl   $0x1b7f,0x8(%esp)
 8407051:	00 
 8407052:	c7 44 24 04 80 d4 c5 	movl   $0x8c5d480,0x4(%esp)
 8407059:	08 
 840705a:	8d 45 9c             	lea    -0x64(%ebp),%eax
 840705d:	89 04 24             	mov    %eax,(%esp)
 8407060:	e8 b3 86 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8407065:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8407069:	c7 44 24 04 dc 47 c4 	movl   $0x8c447dc,0x4(%esp)
 8407070:	08 
 8407071:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8407074:	89 04 24             	mov    %eax,(%esp)
 8407077:	e8 0c 87 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 840707c:	b8 00 00 00 00       	mov    $0x0,%eax
 8407081:	e9 09 02 00 00       	jmp    840728f <_ZN10DB_LoadEtc16LoadTODUserStateEP12SIG_LOAD_ETC+0x3a3>
 8407086:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8407089:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 840708d:	8d 55 8a             	lea    -0x76(%ebp),%edx
 8407090:	89 54 24 08          	mov    %edx,0x8(%esp)
 8407094:	89 44 24 04          	mov    %eax,0x4(%esp)
 8407098:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840709b:	89 04 24             	mov    %eax,(%esp)
 840709e:	e8 ed f8 d0 ff       	call   8116990 <_ZN5MySQL10get_ushortEiRt>
 84070a3:	88 45 f7             	mov    %al,-0x9(%ebp)
 84070a6:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 84070aa:	83 f0 01             	xor    $0x1,%eax
 84070ad:	84 c0                	test   %al,%al
 84070af:	74 4a                	je     84070fb <_ZN10DB_LoadEtc16LoadTODUserStateEP12SIG_LOAD_ETC+0x20f>
 84070b1:	8b 45 0c             	mov    0xc(%ebp),%eax
 84070b4:	8b 58 04             	mov    0x4(%eax),%ebx
 84070b7:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 84070be:	00 
 84070bf:	c7 44 24 08 88 1b 00 	movl   $0x1b88,0x8(%esp)
 84070c6:	00 
 84070c7:	c7 44 24 04 80 d4 c5 	movl   $0x8c5d480,0x4(%esp)
 84070ce:	08 
 84070cf:	8d 45 ac             	lea    -0x54(%ebp),%eax
 84070d2:	89 04 24             	mov    %eax,(%esp)
 84070d5:	e8 3e 86 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84070da:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84070de:	c7 44 24 04 10 48 c4 	movl   $0x8c44810,0x4(%esp)
 84070e5:	08 
 84070e6:	8d 45 ac             	lea    -0x54(%ebp),%eax
 84070e9:	89 04 24             	mov    %eax,(%esp)
 84070ec:	e8 97 86 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84070f1:	b8 00 00 00 00       	mov    $0x0,%eax
 84070f6:	e9 94 01 00 00       	jmp    840728f <_ZN10DB_LoadEtc16LoadTODUserStateEP12SIG_LOAD_ETC+0x3a3>
 84070fb:	0f b7 45 8a          	movzwl -0x76(%ebp),%eax
 84070ff:	0f b7 c0             	movzwl %ax,%eax
 8407102:	89 44 24 04          	mov    %eax,0x4(%esp)
 8407106:	8d 45 88             	lea    -0x78(%ebp),%eax
 8407109:	89 04 24             	mov    %eax,(%esp)
 840710c:	e8 a3 76 1f 00       	call   85fe7b4 <_ZN9TOD_LayerC1Et>
 8407111:	8b 45 0c             	mov    0xc(%ebp),%eax
 8407114:	0f b7 55 88          	movzwl -0x78(%ebp),%edx
 8407118:	66 89 90 24 d7 00 00 	mov    %dx,0xd724(%eax)
 840711f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8407122:	8d 90 26 d7 00 00    	lea    0xd726(%eax),%edx
 8407128:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840712b:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 840712f:	89 54 24 08          	mov    %edx,0x8(%esp)
 8407133:	89 44 24 04          	mov    %eax,0x4(%esp)
 8407137:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840713a:	89 04 24             	mov    %eax,(%esp)
 840713d:	e8 aa 6c cf ff       	call   80fddec <_ZN5MySQL9get_shortEiRs>
 8407142:	88 45 f7             	mov    %al,-0x9(%ebp)
 8407145:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 8407149:	83 f0 01             	xor    $0x1,%eax
 840714c:	84 c0                	test   %al,%al
 840714e:	74 4a                	je     840719a <_ZN10DB_LoadEtc16LoadTODUserStateEP12SIG_LOAD_ETC+0x2ae>
 8407150:	8b 45 0c             	mov    0xc(%ebp),%eax
 8407153:	8b 58 04             	mov    0x4(%eax),%ebx
 8407156:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 840715d:	00 
 840715e:	c7 44 24 08 92 1b 00 	movl   $0x1b92,0x8(%esp)
 8407165:	00 
 8407166:	c7 44 24 04 80 d4 c5 	movl   $0x8c5d480,0x4(%esp)
 840716d:	08 
 840716e:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8407171:	89 04 24             	mov    %eax,(%esp)
 8407174:	e8 9f 85 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8407179:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 840717d:	c7 44 24 04 10 48 c4 	movl   $0x8c44810,0x4(%esp)
 8407184:	08 
 8407185:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8407188:	89 04 24             	mov    %eax,(%esp)
 840718b:	e8 f8 85 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8407190:	b8 00 00 00 00       	mov    $0x0,%eax
 8407195:	e9 f5 00 00 00       	jmp    840728f <_ZN10DB_LoadEtc16LoadTODUserStateEP12SIG_LOAD_ETC+0x3a3>
 840719a:	8b 45 0c             	mov    0xc(%ebp),%eax
 840719d:	8d 90 28 d7 00 00    	lea    0xd728(%eax),%edx
 84071a3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84071a6:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 84071aa:	89 54 24 08          	mov    %edx,0x8(%esp)
 84071ae:	89 44 24 04          	mov    %eax,0x4(%esp)
 84071b2:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84071b5:	89 04 24             	mov    %eax,(%esp)
 84071b8:	e8 6f f7 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 84071bd:	88 45 f7             	mov    %al,-0x9(%ebp)
 84071c0:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 84071c4:	83 f0 01             	xor    $0x1,%eax
 84071c7:	84 c0                	test   %al,%al
 84071c9:	74 47                	je     8407212 <_ZN10DB_LoadEtc16LoadTODUserStateEP12SIG_LOAD_ETC+0x326>
 84071cb:	8b 45 0c             	mov    0xc(%ebp),%eax
 84071ce:	8b 58 04             	mov    0x4(%eax),%ebx
 84071d1:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 84071d8:	00 
 84071d9:	c7 44 24 08 9a 1b 00 	movl   $0x1b9a,0x8(%esp)
 84071e0:	00 
 84071e1:	c7 44 24 04 80 d4 c5 	movl   $0x8c5d480,0x4(%esp)
 84071e8:	08 
 84071e9:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84071ec:	89 04 24             	mov    %eax,(%esp)
 84071ef:	e8 24 85 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84071f4:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84071f8:	c7 44 24 04 10 48 c4 	movl   $0x8c44810,0x4(%esp)
 84071ff:	08 
 8407200:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8407203:	89 04 24             	mov    %eax,(%esp)
 8407206:	e8 7d 85 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 840720b:	b8 00 00 00 00       	mov    $0x0,%eax
 8407210:	eb 7d                	jmp    840728f <_ZN10DB_LoadEtc16LoadTODUserStateEP12SIG_LOAD_ETC+0x3a3>
 8407212:	8b 45 0c             	mov    0xc(%ebp),%eax
 8407215:	8d 90 2c d7 00 00    	lea    0xd72c(%eax),%edx
 840721b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840721e:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8407222:	89 54 24 08          	mov    %edx,0x8(%esp)
 8407226:	89 44 24 04          	mov    %eax,0x4(%esp)
 840722a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840722d:	89 04 24             	mov    %eax,(%esp)
 8407230:	e8 f7 f6 d0 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8407235:	88 45 f7             	mov    %al,-0x9(%ebp)
 8407238:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 840723c:	83 f0 01             	xor    $0x1,%eax
 840723f:	84 c0                	test   %al,%al
 8407241:	74 47                	je     840728a <_ZN10DB_LoadEtc16LoadTODUserStateEP12SIG_LOAD_ETC+0x39e>
 8407243:	8b 45 0c             	mov    0xc(%ebp),%eax
 8407246:	8b 58 04             	mov    0x4(%eax),%ebx
 8407249:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8407250:	00 
 8407251:	c7 44 24 08 a2 1b 00 	movl   $0x1ba2,0x8(%esp)
 8407258:	00 
 8407259:	c7 44 24 04 80 d4 c5 	movl   $0x8c5d480,0x4(%esp)
 8407260:	08 
 8407261:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8407264:	89 04 24             	mov    %eax,(%esp)
 8407267:	e8 ac 84 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 840726c:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8407270:	c7 44 24 04 10 48 c4 	movl   $0x8c44810,0x4(%esp)
 8407277:	08 
 8407278:	8d 45 dc             	lea    -0x24(%ebp),%eax
 840727b:	89 04 24             	mov    %eax,(%esp)
 840727e:	e8 05 85 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8407283:	b8 00 00 00 00       	mov    $0x0,%eax
 8407288:	eb 05                	jmp    840728f <_ZN10DB_LoadEtc16LoadTODUserStateEP12SIG_LOAD_ETC+0x3a3>
 840728a:	b8 01 00 00 00       	mov    $0x1,%eax
 840728f:	83 ec 80             	sub    $0xffffff80,%esp
 8407292:	5b                   	pop    %ebx
 8407293:	5e                   	pop    %esi
 8407294:	5d                   	pop    %ebp
 8407295:	c3                   	ret

```

```c
// DB_LoadEtc::LoadTODUserState @ 0x8406eec

/* DB_LoadEtc::LoadTODUserState(SIG_LOAD_ETC*) */

undefined4 __thiscall DB_LoadEtc::LoadTODUserState(DB_LoadEtc *this,SIG_LOAD_ETC *param_1)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  undefined2 local_7c;
  ushort local_7a;
  cMyTrace local_78 [16];
  cMyTrace local_68 [16];
  cMyTrace local_58 [16];
  cMyTrace local_48 [16];
  cMyTrace local_38 [16];
  cMyTrace local_28 [16];
  MySQL *local_18;
  int local_14;
  char local_d;
  
  local_18 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  MySQL::set_query(local_18,
                   "seLect unix_timestamp(first_layer_start_date),today_enter_count,last_clear_layer,enter_count_by_week,unix_timestamp(m_date),unix_timestamp(last_clear_date) from charac_tower_despair where charac_no = %u"
                   ,*(undefined4 *)(param_1 + 4));
  cVar3 = MySQL::exec(local_18,true);
  if (((cVar3 != '\0') && (cVar3 = MySQL::fetch(local_18), cVar3 != '\0')) &&
     (lVar4 = MySQL::getAffectedRowCount(local_18), lVar4 == 1)) {
    local_d = 0;
    local_14 = 1;
    local_d = MySQL::get_int(local_18,0,(int *)(param_1 + 0xd71c));
    iVar2 = local_14;
    if (local_d != '\x01') {
      uVar1 = *(undefined4 *)(param_1 + 4);
      cMyTrace::cMyTrace(local_78,"bool DB_LoadEtc::LoadTODUserState(SIG_LOAD_ETC*)",0x1b77,5);
      cMyTrace::operator()(local_78,"TOD : select from charac_tower_despair charac_no=%u",uVar1);
      return 0;
    }
    local_14 = local_14 + 1;
    local_d = MySQL::get_int(local_18,iVar2,(int *)(param_1 + 0xd720));
    iVar2 = local_14;
    if (local_d != '\x01') {
      uVar1 = *(undefined4 *)(param_1 + 4);
      cMyTrace::cMyTrace(local_68,"bool DB_LoadEtc::LoadTODUserState(SIG_LOAD_ETC*)",0x1b7f,5);
      cMyTrace::operator()(local_68,"TOD select from charac_tower_despair charac_no=%u",uVar1);
      return 0;
    }
    local_14 = local_14 + 1;
    local_d = MySQL::get_ushort(local_18,iVar2,&local_7a);
    if (local_d != '\x01') {
      uVar1 = *(undefined4 *)(param_1 + 4);
      cMyTrace::cMyTrace(local_58,"bool DB_LoadEtc::LoadTODUserState(SIG_LOAD_ETC*)",0x1b88,5);
      cMyTrace::operator()(local_58,"[@TOD] select from charac_tower_despair charac_no=%d",uVar1);
      return 0;
    }
    TOD_Layer::TOD_Layer((TOD_Layer *)&local_7c,local_7a);
    iVar2 = local_14;
    *(undefined2 *)(param_1 + 0xd724) = local_7c;
    local_14 = local_14 + 1;
    local_d = MySQL::get_short(local_18,iVar2,(short *)(param_1 + 0xd726));
    iVar2 = local_14;
    if (local_d != '\x01') {
      uVar1 = *(undefined4 *)(param_1 + 4);
      cMyTrace::cMyTrace(local_48,"bool DB_LoadEtc::LoadTODUserState(SIG_LOAD_ETC*)",0x1b92,5);
      cMyTrace::operator()(local_48,"[@TOD] select from charac_tower_despair charac_no=%d",uVar1);
      return 0;
    }
    local_14 = local_14 + 1;
    local_d = MySQL::get_int(local_18,iVar2,(int *)(param_1 + 0xd728));
    iVar2 = local_14;
    if (local_d != '\x01') {
      uVar1 = *(undefined4 *)(param_1 + 4);
      cMyTrace::cMyTrace(local_38,"bool DB_LoadEtc::LoadTODUserState(SIG_LOAD_ETC*)",0x1b9a,5);
      cMyTrace::operator()(local_38,"[@TOD] select from charac_tower_despair charac_no=%d",uVar1);
      return 0;
    }
    local_14 = local_14 + 1;
    local_d = MySQL::get_int(local_18,iVar2,(int *)(param_1 + 0xd72c));
    if (local_d != '\x01') {
      uVar1 = *(undefined4 *)(param_1 + 4);
      cMyTrace::cMyTrace(local_28,"bool DB_LoadEtc::LoadTODUserState(SIG_LOAD_ETC*)",0x1ba2,5);
      cMyTrace::operator()(local_28,"[@TOD] select from charac_tower_despair charac_no=%d",uVar1);
      return 0;
    }
  }
  return 1;
}

```

---

## LoadTitleBook

```asm
// === 08406092 DB_LoadEtc::LoadTitleBook  [0x08406092-0x8406421] ===
 8406092:	55                   	push   %ebp
 8406093:	89 e5                	mov    %esp,%ebp
 8406095:	57                   	push   %edi
 8406096:	53                   	push   %ebx
 8406097:	81 ec 90 39 00 00    	sub    $0x3990,%esp
 840609d:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 84060a2:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84060a9:	00 
 84060aa:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84060b1:	00 
 84060b2:	89 04 24             	mov    %eax,(%esp)
 84060b5:	e8 84 f1 fe ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 84060ba:	89 45 e0             	mov    %eax,-0x20(%ebp)
 84060bd:	8b 45 0c             	mov    0xc(%ebp),%eax
 84060c0:	8b 40 04             	mov    0x4(%eax),%eax
 84060c3:	89 44 24 08          	mov    %eax,0x8(%esp)
 84060c7:	c7 44 24 04 4c 43 c4 	movl   $0x8c4434c,0x4(%esp)
 84060ce:	08 
 84060cf:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84060d2:	89 04 24             	mov    %eax,(%esp)
 84060d5:	e8 e6 e0 fe ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84060da:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84060e1:	00 
 84060e2:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84060e5:	89 04 24             	mov    %eax,(%esp)
 84060e8:	e8 39 e2 fe ff       	call   83f4326 <_ZN5MySQL4execEb>
 84060ed:	88 45 e7             	mov    %al,-0x19(%ebp)
 84060f0:	0f b6 45 e7          	movzbl -0x19(%ebp),%eax
 84060f4:	83 f0 01             	xor    $0x1,%eax
 84060f7:	84 c0                	test   %al,%al
 84060f9:	74 4a                	je     8406145 <_ZN10DB_LoadEtc13LoadTitleBookEP12SIG_LOAD_ETC+0xb3>
 84060fb:	8b 45 0c             	mov    0xc(%ebp),%eax
 84060fe:	8b 58 04             	mov    0x4(%eax),%ebx
 8406101:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8406108:	00 
 8406109:	c7 44 24 08 c0 19 00 	movl   $0x19c0,0x8(%esp)
 8406110:	00 
 8406111:	c7 44 24 04 40 d5 c5 	movl   $0x8c5d540,0x4(%esp)
 8406118:	08 
 8406119:	8d 45 d0             	lea    -0x30(%ebp),%eax
 840611c:	89 04 24             	mov    %eax,(%esp)
 840611f:	e8 f4 95 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8406124:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8406128:	c7 44 24 04 b0 43 c4 	movl   $0x8c443b0,0x4(%esp)
 840612f:	08 
 8406130:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8406133:	89 04 24             	mov    %eax,(%esp)
 8406136:	e8 4d 96 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 840613b:	b8 00 00 00 00       	mov    $0x0,%eax
 8406140:	e9 d3 02 00 00       	jmp    8406418 <_ZN10DB_LoadEtc13LoadTitleBookEP12SIG_LOAD_ETC+0x386>
 8406145:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8406148:	89 04 24             	mov    %eax,(%esp)
 840614b:	e8 1c c2 cd ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8406150:	85 c0                	test   %eax,%eax
 8406152:	0f 94 c0             	sete   %al
 8406155:	84 c0                	test   %al,%al
 8406157:	74 0a                	je     8406163 <_ZN10DB_LoadEtc13LoadTitleBookEP12SIG_LOAD_ETC+0xd1>
 8406159:	b8 00 00 00 00       	mov    $0x0,%eax
 840615e:	e9 b5 02 00 00       	jmp    8406418 <_ZN10DB_LoadEtc13LoadTitleBookEP12SIG_LOAD_ETC+0x386>
 8406163:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8406166:	89 04 24             	mov    %eax,(%esp)
 8406169:	e8 4e e3 fe ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 840616e:	83 f0 01             	xor    $0x1,%eax
 8406171:	84 c0                	test   %al,%al
 8406173:	74 0a                	je     840617f <_ZN10DB_LoadEtc13LoadTitleBookEP12SIG_LOAD_ETC+0xed>
 8406175:	b8 00 00 00 00       	mov    $0x0,%eax
 840617a:	e9 99 02 00 00       	jmp    8406418 <_ZN10DB_LoadEtc13LoadTitleBookEP12SIG_LOAD_ETC+0x386>
 840617f:	8d 9d 84 c6 ff ff    	lea    -0x397c(%ebp),%ebx
 8406185:	b8 00 00 00 00       	mov    $0x0,%eax
 840618a:	ba 04 05 00 00       	mov    $0x504,%edx
 840618f:	89 df                	mov    %ebx,%edi
 8406191:	89 d1                	mov    %edx,%ecx
 8406193:	f3 ab                	rep stos %eax,%es:(%edi)
 8406195:	c7 44 24 0c 10 14 00 	movl   $0x1410,0xc(%esp)
 840619c:	00 
 840619d:	8d 85 84 c6 ff ff    	lea    -0x397c(%ebp),%eax
 84061a3:	89 44 24 08          	mov    %eax,0x8(%esp)
 84061a7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84061ae:	00 
 84061af:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84061b2:	89 04 24             	mov    %eax,(%esp)
 84061b5:	e8 60 f1 d1 ff       	call   812531a <_ZN5MySQL10get_binaryEiPvi>
 84061ba:	83 f0 01             	xor    $0x1,%eax
 84061bd:	84 c0                	test   %al,%al
 84061bf:	74 0a                	je     84061cb <_ZN10DB_LoadEtc13LoadTitleBookEP12SIG_LOAD_ETC+0x139>
 84061c1:	b8 00 00 00 00       	mov    $0x0,%eax
 84061c6:	e9 4d 02 00 00       	jmp    8406418 <_ZN10DB_LoadEtc13LoadTitleBookEP12SIG_LOAD_ETC+0x386>
 84061cb:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84061d2:	00 
 84061d3:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84061d6:	89 04 24             	mov    %eax,(%esp)
 84061d9:	e8 00 f2 d1 ff       	call   81253de <_ZN5MySQL17get_binary_lengthEi>
 84061de:	89 45 e8             	mov    %eax,-0x18(%ebp)
 84061e1:	c7 45 cc ae 10 00 00 	movl   $0x10ae,-0x34(%ebp)
 84061e8:	8b 45 0c             	mov    0xc(%ebp),%eax
 84061eb:	05 6a 46 00 00       	add    $0x466a,%eax
 84061f0:	8b 55 e8             	mov    -0x18(%ebp),%edx
 84061f3:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84061f7:	8d 95 84 c6 ff ff    	lea    -0x397c(%ebp),%edx
 84061fd:	89 54 24 08          	mov    %edx,0x8(%esp)
 8406201:	8d 55 cc             	lea    -0x34(%ebp),%edx
 8406204:	89 54 24 04          	mov    %edx,0x4(%esp)
 8406208:	89 04 24             	mov    %eax,(%esp)
 840620b:	e8 f2 be 2a 00       	call   86b2102 <_Z14uncompress_zipPcRjPKcj>
 8406210:	83 f0 01             	xor    $0x1,%eax
 8406213:	84 c0                	test   %al,%al
 8406215:	74 0a                	je     8406221 <_ZN10DB_LoadEtc13LoadTitleBookEP12SIG_LOAD_ETC+0x18f>
 8406217:	b8 00 00 00 00       	mov    $0x0,%eax
 840621c:	e9 f7 01 00 00       	jmp    8406418 <_ZN10DB_LoadEtc13LoadTitleBookEP12SIG_LOAD_ETC+0x386>
 8406221:	8d 85 84 c6 ff ff    	lea    -0x397c(%ebp),%eax
 8406227:	ba 3c 39 00 00       	mov    $0x393c,%edx
 840622c:	89 54 24 08          	mov    %edx,0x8(%esp)
 8406230:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8406237:	00 
 8406238:	89 04 24             	mov    %eax,(%esp)
 840623b:	e8 80 7a c7 ff       	call   807dcc0 <memset@plt>
 8406240:	c7 44 24 0c 3c 39 00 	movl   $0x393c,0xc(%esp)
 8406247:	00 
 8406248:	8d 85 84 c6 ff ff    	lea    -0x397c(%ebp),%eax
 840624e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8406252:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8406259:	00 
 840625a:	8b 45 e0             	mov    -0x20(%ebp),%eax
 840625d:	89 04 24             	mov    %eax,(%esp)
 8406260:	e8 b5 f0 d1 ff       	call   812531a <_ZN5MySQL10get_binaryEiPvi>
 8406265:	83 f0 01             	xor    $0x1,%eax
 8406268:	84 c0                	test   %al,%al
 840626a:	74 0a                	je     8406276 <_ZN10DB_LoadEtc13LoadTitleBookEP12SIG_LOAD_ETC+0x1e4>
 840626c:	b8 00 00 00 00       	mov    $0x0,%eax
 8406271:	e9 a2 01 00 00       	jmp    8406418 <_ZN10DB_LoadEtc13LoadTitleBookEP12SIG_LOAD_ETC+0x386>
 8406276:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 840627d:	00 
 840627e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8406281:	89 04 24             	mov    %eax,(%esp)
 8406284:	e8 55 f1 d1 ff       	call   81253de <_ZN5MySQL17get_binary_lengthEi>
 8406289:	89 45 ec             	mov    %eax,-0x14(%ebp)
 840628c:	c7 45 c8 a8 2f 00 00 	movl   $0x2fa8,-0x38(%ebp)
 8406293:	8b 45 0c             	mov    0xc(%ebp),%eax
 8406296:	05 18 57 00 00       	add    $0x5718,%eax
 840629b:	8b 55 ec             	mov    -0x14(%ebp),%edx
 840629e:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84062a2:	8d 95 84 c6 ff ff    	lea    -0x397c(%ebp),%edx
 84062a8:	89 54 24 08          	mov    %edx,0x8(%esp)
 84062ac:	8d 55 c8             	lea    -0x38(%ebp),%edx
 84062af:	89 54 24 04          	mov    %edx,0x4(%esp)
 84062b3:	89 04 24             	mov    %eax,(%esp)
 84062b6:	e8 47 be 2a 00       	call   86b2102 <_Z14uncompress_zipPcRjPKcj>
 84062bb:	83 f0 01             	xor    $0x1,%eax
 84062be:	84 c0                	test   %al,%al
 84062c0:	74 0a                	je     84062cc <_ZN10DB_LoadEtc13LoadTitleBookEP12SIG_LOAD_ETC+0x23a>
 84062c2:	b8 00 00 00 00       	mov    $0x0,%eax
 84062c7:	e9 4c 01 00 00       	jmp    8406418 <_ZN10DB_LoadEtc13LoadTitleBookEP12SIG_LOAD_ETC+0x386>
 84062cc:	8d 85 84 c6 ff ff    	lea    -0x397c(%ebp),%eax
 84062d2:	ba 5c 22 00 00       	mov    $0x225c,%edx
 84062d7:	89 54 24 08          	mov    %edx,0x8(%esp)
 84062db:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84062e2:	00 
 84062e3:	89 04 24             	mov    %eax,(%esp)
 84062e6:	e8 d5 79 c7 ff       	call   807dcc0 <memset@plt>
 84062eb:	c7 44 24 0c 5c 22 00 	movl   $0x225c,0xc(%esp)
 84062f2:	00 
 84062f3:	8d 85 84 c6 ff ff    	lea    -0x397c(%ebp),%eax
 84062f9:	89 44 24 08          	mov    %eax,0x8(%esp)
 84062fd:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8406304:	00 
 8406305:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8406308:	89 04 24             	mov    %eax,(%esp)
 840630b:	e8 0a f0 d1 ff       	call   812531a <_ZN5MySQL10get_binaryEiPvi>
 8406310:	83 f0 01             	xor    $0x1,%eax
 8406313:	84 c0                	test   %al,%al
 8406315:	74 0a                	je     8406321 <_ZN10DB_LoadEtc13LoadTitleBookEP12SIG_LOAD_ETC+0x28f>
 8406317:	b8 00 00 00 00       	mov    $0x0,%eax
 840631c:	e9 f7 00 00 00       	jmp    8406418 <_ZN10DB_LoadEtc13LoadTitleBookEP12SIG_LOAD_ETC+0x386>
 8406321:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8406328:	00 
 8406329:	8b 45 e0             	mov    -0x20(%ebp),%eax
 840632c:	89 04 24             	mov    %eax,(%esp)
 840632f:	e8 aa f0 d1 ff       	call   81253de <_ZN5MySQL17get_binary_lengthEi>
 8406334:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8406337:	c7 45 c4 98 1c 00 00 	movl   $0x1c98,-0x3c(%ebp)
 840633e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8406341:	05 c0 86 00 00       	add    $0x86c0,%eax
 8406346:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8406349:	89 54 24 0c          	mov    %edx,0xc(%esp)
 840634d:	8d 95 84 c6 ff ff    	lea    -0x397c(%ebp),%edx
 8406353:	89 54 24 08          	mov    %edx,0x8(%esp)
 8406357:	8d 55 c4             	lea    -0x3c(%ebp),%edx
 840635a:	89 54 24 04          	mov    %edx,0x4(%esp)
 840635e:	89 04 24             	mov    %eax,(%esp)
 8406361:	e8 9c bd 2a 00       	call   86b2102 <_Z14uncompress_zipPcRjPKcj>
 8406366:	83 f0 01             	xor    $0x1,%eax
 8406369:	84 c0                	test   %al,%al
 840636b:	74 0a                	je     8406377 <_ZN10DB_LoadEtc13LoadTitleBookEP12SIG_LOAD_ETC+0x2e5>
 840636d:	b8 00 00 00 00       	mov    $0x0,%eax
 8406372:	e9 a1 00 00 00       	jmp    8406418 <_ZN10DB_LoadEtc13LoadTitleBookEP12SIG_LOAD_ETC+0x386>
 8406377:	8d 9d 84 c6 ff ff    	lea    -0x397c(%ebp),%ebx
 840637d:	b8 00 00 00 00       	mov    $0x0,%eax
 8406382:	ba 4d 04 00 00       	mov    $0x44d,%edx
 8406387:	89 df                	mov    %ebx,%edi
 8406389:	89 d1                	mov    %edx,%ecx
 840638b:	f3 ab                	rep stos %eax,%es:(%edi)
 840638d:	c7 44 24 0c 34 11 00 	movl   $0x1134,0xc(%esp)
 8406394:	00 
 8406395:	8d 85 84 c6 ff ff    	lea    -0x397c(%ebp),%eax
 840639b:	89 44 24 08          	mov    %eax,0x8(%esp)
 840639f:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 84063a6:	00 
 84063a7:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84063aa:	89 04 24             	mov    %eax,(%esp)
 84063ad:	e8 68 ef d1 ff       	call   812531a <_ZN5MySQL10get_binaryEiPvi>
 84063b2:	83 f0 01             	xor    $0x1,%eax
 84063b5:	84 c0                	test   %al,%al
 84063b7:	74 07                	je     84063c0 <_ZN10DB_LoadEtc13LoadTitleBookEP12SIG_LOAD_ETC+0x32e>
 84063b9:	b8 00 00 00 00       	mov    $0x0,%eax
 84063be:	eb 58                	jmp    8406418 <_ZN10DB_LoadEtc13LoadTitleBookEP12SIG_LOAD_ETC+0x386>
 84063c0:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 84063c7:	00 
 84063c8:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84063cb:	89 04 24             	mov    %eax,(%esp)
 84063ce:	e8 0b f0 d1 ff       	call   81253de <_ZN5MySQL17get_binary_lengthEi>
 84063d3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84063d6:	c7 45 c0 4c 0e 00 00 	movl   $0xe4c,-0x40(%ebp)
 84063dd:	8b 45 0c             	mov    0xc(%ebp),%eax
 84063e0:	05 58 a3 00 00       	add    $0xa358,%eax
 84063e5:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84063e8:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84063ec:	8d 95 84 c6 ff ff    	lea    -0x397c(%ebp),%edx
 84063f2:	89 54 24 08          	mov    %edx,0x8(%esp)
 84063f6:	8d 55 c0             	lea    -0x40(%ebp),%edx
 84063f9:	89 54 24 04          	mov    %edx,0x4(%esp)
 84063fd:	89 04 24             	mov    %eax,(%esp)
 8406400:	e8 fd bc 2a 00       	call   86b2102 <_Z14uncompress_zipPcRjPKcj>
 8406405:	83 f0 01             	xor    $0x1,%eax
 8406408:	84 c0                	test   %al,%al
 840640a:	74 07                	je     8406413 <_ZN10DB_LoadEtc13LoadTitleBookEP12SIG_LOAD_ETC+0x381>
 840640c:	b8 00 00 00 00       	mov    $0x0,%eax
 8406411:	eb 05                	jmp    8406418 <_ZN10DB_LoadEtc13LoadTitleBookEP12SIG_LOAD_ETC+0x386>
 8406413:	b8 01 00 00 00       	mov    $0x1,%eax
 8406418:	81 c4 90 39 00 00    	add    $0x3990,%esp
 840641e:	5b                   	pop    %ebx
 840641f:	5f                   	pop    %edi
 8406420:	5d                   	pop    %ebp
 8406421:	c3                   	ret

```

```c
// DB_LoadEtc::LoadTitleBook @ 0x8406092

/* DB_LoadEtc::LoadTitleBook(SIG_LOAD_ETC*) */

undefined4 __thiscall DB_LoadEtc::LoadTitleBook(DB_LoadEtc *this,SIG_LOAD_ETC *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  byte bVar5;
  char local_3980 [14652];
  uint local_44 [4];
  cMyTrace local_34 [16];
  MySQL *local_24;
  char local_1d;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  
  bVar5 = 0;
  local_24 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  MySQL::set_query(local_24,
                   "seLect general_section, specific_section, despair, event from charac_titlebook where charac_no=%u"
                   ,*(undefined4 *)(param_1 + 4));
  local_1d = MySQL::exec(local_24,true);
  if (local_1d == '\x01') {
    iVar3 = MySQL::get_n_rows(local_24);
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else {
      cVar1 = MySQL::fetch(local_24);
      if (cVar1 == '\x01') {
        pcVar4 = local_3980;
        for (iVar3 = 0x504; iVar3 != 0; iVar3 = iVar3 + -1) {
          pcVar4[0] = '\0';
          pcVar4[1] = '\0';
          pcVar4[2] = '\0';
          pcVar4[3] = '\0';
          pcVar4 = pcVar4 + ((uint)bVar5 * -2 + 1) * 4;
        }
        cVar1 = MySQL::get_binary(local_24,0,local_3980,0x1410);
        if (cVar1 == '\x01') {
          local_1c = MySQL::get_binary_length(local_24,0);
          local_44[3] = 0x10ae;
          cVar1 = uncompress_zip((char *)(param_1 + 0x466a),local_44 + 3,local_3980,local_1c);
          if (cVar1 == '\x01') {
            memset(local_3980,0,0x393c);
            cVar1 = MySQL::get_binary(local_24,1,local_3980,0x393c);
            if (cVar1 == '\x01') {
              local_18 = MySQL::get_binary_length(local_24,1);
              local_44[2] = 0x2fa8;
              cVar1 = uncompress_zip((char *)(param_1 + 0x5718),local_44 + 2,local_3980,local_18);
              if (cVar1 == '\x01') {
                memset(local_3980,0,0x225c);
                cVar1 = MySQL::get_binary(local_24,2,local_3980,0x225c);
                if (cVar1 == '\x01') {
                  local_14 = MySQL::get_binary_length(local_24,2);
                  local_44[1] = 0x1c98;
                  cVar1 = uncompress_zip((char *)(param_1 + 0x86c0),local_44 + 1,local_3980,local_14
                                        );
                  if (cVar1 == '\x01') {
                    pcVar4 = local_3980;
                    for (iVar3 = 0x44d; iVar3 != 0; iVar3 = iVar3 + -1) {
                      pcVar4[0] = '\0';
                      pcVar4[1] = '\0';
                      pcVar4[2] = '\0';
                      pcVar4[3] = '\0';
                      pcVar4 = pcVar4 + ((uint)bVar5 * -2 + 1) * 4;
                    }
                    cVar1 = MySQL::get_binary(local_24,3,local_3980,0x1134);
                    if (cVar1 == '\x01') {
                      local_10 = MySQL::get_binary_length(local_24,3);
                      local_44[0] = 0xe4c;
                      cVar1 = uncompress_zip((char *)(param_1 + 0xa358),local_44,local_3980,local_10
                                            );
                      if (cVar1 == '\x01') {
                        uVar2 = 1;
                      }
                      else {
                        uVar2 = 0;
                      }
                    }
                    else {
                      uVar2 = 0;
                    }
                  }
                  else {
                    uVar2 = 0;
                  }
                }
                else {
                  uVar2 = 0;
                }
              }
              else {
                uVar2 = 0;
              }
            }
            else {
              uVar2 = 0;
            }
          }
          else {
            uVar2 = 0;
          }
        }
        else {
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 0;
      }
    }
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 4);
    cMyTrace::cMyTrace(local_34,"bool DB_LoadEtc::LoadTitleBook(SIG_LOAD_ETC*)",0x19c0,5);
    cMyTrace::operator()(local_34,"LoadTitleBook(), exec() ERROR charac_no=%u",uVar2);
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## LoadUsedGiftFatigueInfo

```asm
// === 08406810 DB_LoadEtc::LoadUsedGiftFatigueInfo  [0x08406810-0x8406a69] ===
 8406810:	55                   	push   %ebp
 8406811:	89 e5                	mov    %esp,%ebp
 8406813:	56                   	push   %esi
 8406814:	53                   	push   %ebx
 8406815:	83 ec 30             	sub    $0x30,%esp
 8406818:	8b 45 0c             	mov    0xc(%ebp),%eax
 840681b:	c7 80 b8 c9 00 00 00 	movl   $0x0,0xc9b8(%eax)
 8406822:	00 00 00 
 8406825:	e8 71 59 cc ff       	call   80cc19b <_Z14G_CDataManagerv>
 840682a:	89 04 24             	mov    %eax,(%esp)
 840682d:	e8 30 a3 d0 ff       	call   8110b62 <_ZN12CDataManager20get_event_script_mngEv>
 8406832:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8406835:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 8406839:	74 1a                	je     8406855 <_ZN10DB_LoadEtc23LoadUsedGiftFatigueInfoEP12SIG_LOAD_ETC+0x45>
 840683b:	c7 44 24 04 65 00 00 	movl   $0x65,0x4(%esp)
 8406842:	00 
 8406843:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8406846:	89 04 24             	mov    %eax,(%esp)
 8406849:	e8 e8 51 d0 ff       	call   810ba36 <_ZN13EventClassify15CEventScriptMng11is_eventingEi>
 840684e:	83 f0 01             	xor    $0x1,%eax
 8406851:	84 c0                	test   %al,%al
 8406853:	74 07                	je     840685c <_ZN10DB_LoadEtc23LoadUsedGiftFatigueInfoEP12SIG_LOAD_ETC+0x4c>
 8406855:	b8 01 00 00 00       	mov    $0x1,%eax
 840685a:	eb 05                	jmp    8406861 <_ZN10DB_LoadEtc23LoadUsedGiftFatigueInfoEP12SIG_LOAD_ETC+0x51>
 840685c:	b8 00 00 00 00       	mov    $0x0,%eax
 8406861:	84 c0                	test   %al,%al
 8406863:	74 0a                	je     840686f <_ZN10DB_LoadEtc23LoadUsedGiftFatigueInfoEP12SIG_LOAD_ETC+0x5f>
 8406865:	bb 01 00 00 00       	mov    $0x1,%ebx
 840686a:	e9 f1 01 00 00       	jmp    8406a60 <_ZN10DB_LoadEtc23LoadUsedGiftFatigueInfoEP12SIG_LOAD_ETC+0x250>
 840686f:	c7 44 24 04 65 00 00 	movl   $0x65,0x4(%esp)
 8406876:	00 
 8406877:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840687a:	89 04 24             	mov    %eax,(%esp)
 840687d:	e8 e8 50 d0 ff       	call   810b96a <_ZN13EventClassify15CEventScriptMng16get_event_entityEi>
 8406882:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8406885:	c6 45 eb 00          	movb   $0x0,-0x15(%ebp)
 8406889:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 840688d:	74 19                	je     84068a8 <_ZN10DB_LoadEtc23LoadUsedGiftFatigueInfoEP12SIG_LOAD_ETC+0x98>
 840688f:	8d 45 eb             	lea    -0x15(%ebp),%eax
 8406892:	89 44 24 04          	mov    %eax,0x4(%esp)
 8406896:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8406899:	89 04 24             	mov    %eax,(%esp)
 840689c:	e8 49 9f d0 ff       	call   81107ea <_ZNK13EventClassify20CUsedFatigueGiveItem16getIsCharacEventERb>
 84068a1:	83 f0 01             	xor    $0x1,%eax
 84068a4:	84 c0                	test   %al,%al
 84068a6:	74 07                	je     84068af <_ZN10DB_LoadEtc23LoadUsedGiftFatigueInfoEP12SIG_LOAD_ETC+0x9f>
 84068a8:	b8 01 00 00 00       	mov    $0x1,%eax
 84068ad:	eb 05                	jmp    84068b4 <_ZN10DB_LoadEtc23LoadUsedGiftFatigueInfoEP12SIG_LOAD_ETC+0xa4>
 84068af:	b8 00 00 00 00       	mov    $0x0,%eax
 84068b4:	84 c0                	test   %al,%al
 84068b6:	74 0a                	je     84068c2 <_ZN10DB_LoadEtc23LoadUsedGiftFatigueInfoEP12SIG_LOAD_ETC+0xb2>
 84068b8:	bb 01 00 00 00       	mov    $0x1,%ebx
 84068bd:	e9 9e 01 00 00       	jmp    8406a60 <_ZN10DB_LoadEtc23LoadUsedGiftFatigueInfoEP12SIG_LOAD_ETC+0x250>
 84068c2:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 84068c9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84068cc:	8b 00                	mov    (%eax),%eax
 84068ce:	83 c0 20             	add    $0x20,%eax
 84068d1:	8b 10                	mov    (%eax),%edx
 84068d3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84068d6:	89 04 24             	mov    %eax,(%esp)
 84068d9:	ff d2                	call   *%edx
 84068db:	89 44 24 04          	mov    %eax,0x4(%esp)
 84068df:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84068e2:	89 04 24             	mov    %eax,(%esp)
 84068e5:	e8 c6 10 30 00       	call   87079b0 <_ZNSsC1ERKSs>
 84068ea:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 84068ee:	83 f0 01             	xor    $0x1,%eax
 84068f1:	84 c0                	test   %al,%al
 84068f3:	74 5f                	je     8406954 <_ZN10DB_LoadEtc23LoadUsedGiftFatigueInfoEP12SIG_LOAD_ETC+0x144>
 84068f5:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 84068fa:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8406901:	00 
 8406902:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 8406909:	00 
 840690a:	89 04 24             	mov    %eax,(%esp)
 840690d:	e8 2c e9 fe ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8406912:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8406915:	8b 45 0c             	mov    0xc(%ebp),%eax
 8406918:	8b 00                	mov    (%eax),%eax
 840691a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8406921:	00 
 8406922:	89 04 24             	mov    %eax,(%esp)
 8406925:	e8 21 27 d0 ff       	call   810904b <_Z14NumberToStringji>
 840692a:	89 c3                	mov    %eax,%ebx
 840692c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 840692f:	89 04 24             	mov    %eax,(%esp)
 8406932:	e8 79 81 6d 00       	call   8adeab0 <_Z9toTStringRKSs>
 8406937:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 840693b:	89 44 24 08          	mov    %eax,0x8(%esp)
 840693f:	c7 44 24 04 dc 44 c4 	movl   $0x8c444dc,0x4(%esp)
 8406946:	08 
 8406947:	8b 45 f4             	mov    -0xc(%ebp),%eax
 840694a:	89 04 24             	mov    %eax,(%esp)
 840694d:	e8 6e d8 fe ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8406952:	eb 4c                	jmp    84069a0 <_ZN10DB_LoadEtc23LoadUsedGiftFatigueInfoEP12SIG_LOAD_ETC+0x190>
 8406954:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8406959:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8406960:	00 
 8406961:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8406968:	00 
 8406969:	89 04 24             	mov    %eax,(%esp)
 840696c:	e8 cd e8 fe ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8406971:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8406974:	8b 45 0c             	mov    0xc(%ebp),%eax
 8406977:	8b 58 04             	mov    0x4(%eax),%ebx
 840697a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 840697d:	89 04 24             	mov    %eax,(%esp)
 8406980:	e8 2b 81 6d 00       	call   8adeab0 <_Z9toTStringRKSs>
 8406985:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8406989:	89 44 24 08          	mov    %eax,0x8(%esp)
 840698d:	c7 44 24 04 0c 45 c4 	movl   $0x8c4450c,0x4(%esp)
 8406994:	08 
 8406995:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8406998:	89 04 24             	mov    %eax,(%esp)
 840699b:	e8 20 d8 fe ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84069a0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84069a7:	00 
 84069a8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84069ab:	89 04 24             	mov    %eax,(%esp)
 84069ae:	e8 73 d9 fe ff       	call   83f4326 <_ZN5MySQL4execEb>
 84069b3:	83 f0 01             	xor    $0x1,%eax
 84069b6:	84 c0                	test   %al,%al
 84069b8:	74 0a                	je     84069c4 <_ZN10DB_LoadEtc23LoadUsedGiftFatigueInfoEP12SIG_LOAD_ETC+0x1b4>
 84069ba:	bb 00 00 00 00       	mov    $0x0,%ebx
 84069bf:	e9 91 00 00 00       	jmp    8406a55 <_ZN10DB_LoadEtc23LoadUsedGiftFatigueInfoEP12SIG_LOAD_ETC+0x245>
 84069c4:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 84069cb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84069ce:	89 04 24             	mov    %eax,(%esp)
 84069d1:	e8 96 b9 cd ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 84069d6:	85 c0                	test   %eax,%eax
 84069d8:	0f 94 c0             	sete   %al
 84069db:	84 c0                	test   %al,%al
 84069dd:	74 07                	je     84069e6 <_ZN10DB_LoadEtc23LoadUsedGiftFatigueInfoEP12SIG_LOAD_ETC+0x1d6>
 84069df:	bb 01 00 00 00       	mov    $0x1,%ebx
 84069e4:	eb 6f                	jmp    8406a55 <_ZN10DB_LoadEtc23LoadUsedGiftFatigueInfoEP12SIG_LOAD_ETC+0x245>
 84069e6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84069e9:	89 04 24             	mov    %eax,(%esp)
 84069ec:	e8 cb da fe ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 84069f1:	83 f0 01             	xor    $0x1,%eax
 84069f4:	84 c0                	test   %al,%al
 84069f6:	74 07                	je     84069ff <_ZN10DB_LoadEtc23LoadUsedGiftFatigueInfoEP12SIG_LOAD_ETC+0x1ef>
 84069f8:	bb 00 00 00 00       	mov    $0x0,%ebx
 84069fd:	eb 56                	jmp    8406a55 <_ZN10DB_LoadEtc23LoadUsedGiftFatigueInfoEP12SIG_LOAD_ETC+0x245>
 84069ff:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8406a02:	89 44 24 08          	mov    %eax,0x8(%esp)
 8406a06:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8406a0d:	00 
 8406a0e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8406a11:	89 04 24             	mov    %eax,(%esp)
 8406a14:	e8 d9 b8 cd ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 8406a19:	83 f0 01             	xor    $0x1,%eax
 8406a1c:	84 c0                	test   %al,%al
 8406a1e:	74 07                	je     8406a27 <_ZN10DB_LoadEtc23LoadUsedGiftFatigueInfoEP12SIG_LOAD_ETC+0x217>
 8406a20:	bb 00 00 00 00       	mov    $0x0,%ebx
 8406a25:	eb 2e                	jmp    8406a55 <_ZN10DB_LoadEtc23LoadUsedGiftFatigueInfoEP12SIG_LOAD_ETC+0x245>
 8406a27:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8406a2a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8406a2d:	89 90 b8 c9 00 00    	mov    %edx,0xc9b8(%eax)
 8406a33:	bb 01 00 00 00       	mov    $0x1,%ebx
 8406a38:	eb 1b                	jmp    8406a55 <_ZN10DB_LoadEtc23LoadUsedGiftFatigueInfoEP12SIG_LOAD_ETC+0x245>
 8406a3a:	89 d3                	mov    %edx,%ebx
 8406a3c:	89 c6                	mov    %eax,%esi
 8406a3e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8406a41:	89 04 24             	mov    %eax,(%esp)
 8406a44:	e8 97 11 30 00       	call   8707be0 <_ZNSsD1Ev>
 8406a49:	89 f0                	mov    %esi,%eax
 8406a4b:	89 da                	mov    %ebx,%edx
 8406a4d:	89 04 24             	mov    %eax,(%esp)
 8406a50:	e8 fb cc 6d 00       	call   8ae3750 <_Unwind_Resume>
 8406a55:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8406a58:	89 04 24             	mov    %eax,(%esp)
 8406a5b:	e8 80 11 30 00       	call   8707be0 <_ZNSsD1Ev>
 8406a60:	89 d8                	mov    %ebx,%eax
 8406a62:	83 c4 30             	add    $0x30,%esp
 8406a65:	5b                   	pop    %ebx
 8406a66:	5e                   	pop    %esi
 8406a67:	5d                   	pop    %ebp
 8406a68:	c3                   	ret
 8406a69:	90                   	nop

```

```c
// DB_LoadEtc::LoadUsedGiftFatigueInfo @ 0x8406810

/* DB_LoadEtc::LoadUsedGiftFatigueInfo(SIG_LOAD_ETC*) */

undefined4 __thiscall DB_LoadEtc::LoadUsedGiftFatigueInfo(DB_LoadEtc *this,SIG_LOAD_ETC *param_1)

{
  bool bVar1;
  char cVar2;
  CDataManager *this_00;
  string *psVar3;
  TCHAR *pTVar4;
  int iVar5;
  undefined4 uVar6;
  bool *pbVar7;
  uint local_24;
  string local_20;
  bool local_19;
  CEventScriptMng *local_18;
  CUsedFatigueGiveItem *local_14;
  MySQL *local_10;
  
  *(undefined4 *)(param_1 + 0xc9b8) = 0;
  this_00 = (CDataManager *)G_CDataManager();
  local_18 = (CEventScriptMng *)CDataManager::get_event_script_mng(this_00);
  if ((local_18 == (CEventScriptMng *)0x0) ||
     (cVar2 = EventClassify::CEventScriptMng::is_eventing(local_18,0x65), cVar2 != '\x01')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    return 1;
  }
  pbVar7 = (bool *)0x65;
  local_14 = (CUsedFatigueGiveItem *)EventClassify::CEventScriptMng::get_event_entity((int)local_18)
  ;
  local_19 = false;
  if (local_14 != (CUsedFatigueGiveItem *)0x0) {
    pbVar7 = &local_19;
    cVar2 = EventClassify::CUsedFatigueGiveItem::getIsCharacEvent(local_14,pbVar7);
    if (cVar2 == '\x01') {
      bVar1 = false;
      goto LAB_084068b4;
    }
  }
  bVar1 = true;
LAB_084068b4:
  if (bVar1) {
    uVar6 = 1;
  }
  else {
    local_10 = (MySQL *)0x0;
    psVar3 = (string *)(**(code **)(*(int *)local_14 + 0x20))(local_14,pbVar7);
    std::string::string((string *)&local_20,psVar3);
    if (local_19 == true) {
      local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
      uVar6 = *(undefined4 *)(param_1 + 4);
      pTVar4 = toTString(&local_20);
      MySQL::set_query(local_10,"seLect fatigue_quantity from %s where charac_no = %u",pTVar4,uVar6)
      ;
    }
    else {
                    /* try { // try from 0840690d to 084069f0 has its CatchHandler @ 08406a3a */
      local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
      uVar6 = NumberToString(*(uint *)param_1,0);
      pTVar4 = toTString(&local_20);
      MySQL::set_query(local_10,"seLect fatigue_quantity from %s where m_id = %s",pTVar4,uVar6);
    }
    cVar2 = MySQL::exec(local_10,true);
    if (cVar2 == '\x01') {
      local_24 = 0;
      iVar5 = MySQL::get_n_rows(local_10);
      if (iVar5 == 0) {
        uVar6 = 1;
      }
      else {
        cVar2 = MySQL::fetch(local_10);
        if (cVar2 == '\x01') {
          cVar2 = MySQL::get_uint(local_10,0,&local_24);
          if (cVar2 == '\x01') {
            *(uint *)(param_1 + 0xc9b8) = local_24;
            uVar6 = 1;
          }
          else {
            uVar6 = 0;
          }
        }
        else {
          uVar6 = 0;
        }
      }
    }
    else {
      uVar6 = 0;
    }
    std::string::~string((string *)&local_20);
  }
  return uVar6;
}

```

---

## LoadVillageAttackInfo

```asm
// === 0843f038 DB_LoadEtc::LoadVillageAttackInfo  [0x0843f038-0x843f231] ===
 843f038:	55                   	push   %ebp
 843f039:	89 e5                	mov    %esp,%ebp
 843f03b:	83 ec 58             	sub    $0x58,%esp
 843f03e:	8b 45 0c             	mov    0xc(%ebp),%eax
 843f041:	8b 40 04             	mov    0x4(%eax),%eax
 843f044:	85 c0                	test   %eax,%eax
 843f046:	75 0a                	jne    843f052 <_ZN10DB_LoadEtc21LoadVillageAttackInfoEP12SIG_LOAD_ETC+0x1a>
 843f048:	b8 00 00 00 00       	mov    $0x0,%eax
 843f04d:	e9 dd 01 00 00       	jmp    843f22f <_ZN10DB_LoadEtc21LoadVillageAttackInfoEP12SIG_LOAD_ETC+0x1f7>
 843f052:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 843f059:	e8 40 cc c8 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 843f05e:	89 45 e0             	mov    %eax,-0x20(%ebp)
 843f061:	8d 45 e0             	lea    -0x20(%ebp),%eax
 843f064:	89 04 24             	mov    %eax,(%esp)
 843f067:	e8 c4 f2 c3 ff       	call   807e330 <localtime@plt>
 843f06c:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 843f06f:	e8 0d d1 c8 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 843f074:	8b 80 7c 03 00 00    	mov    0x37c(%eax),%eax
 843f07a:	89 45 ec             	mov    %eax,-0x14(%ebp)
 843f07d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 843f080:	8b 40 08             	mov    0x8(%eax),%eax
 843f083:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 843f086:	7d 20                	jge    843f0a8 <_ZN10DB_LoadEtc21LoadVillageAttackInfoEP12SIG_LOAD_ETC+0x70>
 843f088:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 843f08f:	8b 45 e0             	mov    -0x20(%ebp),%eax
 843f092:	2d 80 51 01 00       	sub    $0x15180,%eax
 843f097:	89 45 e0             	mov    %eax,-0x20(%ebp)
 843f09a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 843f09d:	89 04 24             	mov    %eax,(%esp)
 843f0a0:	e8 8b f2 c3 ff       	call   807e330 <localtime@plt>
 843f0a5:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 843f0a8:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 843f0ab:	89 04 24             	mov    %eax,(%esp)
 843f0ae:	e8 6d f7 c3 ff       	call   807e820 <mktime@plt>
 843f0b3:	89 45 e8             	mov    %eax,-0x18(%ebp)
 843f0b6:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 843f0bd:	00 
 843f0be:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 843f0c5:	00 
 843f0c6:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 843f0c9:	89 04 24             	mov    %eax,(%esp)
 843f0cc:	e8 ef eb c3 ff       	call   807dcc0 <memset@plt>
 843f0d1:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 843f0d4:	8b 40 0c             	mov    0xc(%eax),%eax
 843f0d7:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 843f0da:	8b 52 10             	mov    0x10(%edx),%edx
 843f0dd:	8d 4a 01             	lea    0x1(%edx),%ecx
 843f0e0:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 843f0e3:	8b 52 14             	mov    0x14(%edx),%edx
 843f0e6:	81 c2 6c 07 00 00    	add    $0x76c,%edx
 843f0ec:	89 44 24 10          	mov    %eax,0x10(%esp)
 843f0f0:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 843f0f4:	89 54 24 08          	mov    %edx,0x8(%esp)
 843f0f8:	c7 44 24 04 1a 58 c5 	movl   $0x8c5581a,0x4(%esp)
 843f0ff:	08 
 843f100:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 843f103:	89 04 24             	mov    %eax,(%esp)
 843f106:	e8 35 f3 c3 ff       	call   807e440 <sprintf@plt>
 843f10b:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 843f110:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 843f117:	00 
 843f118:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 843f11f:	00 
 843f120:	89 04 24             	mov    %eax,(%esp)
 843f123:	e8 16 61 fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 843f128:	89 45 f0             	mov    %eax,-0x10(%ebp)
 843f12b:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 843f12f:	75 0a                	jne    843f13b <_ZN10DB_LoadEtc21LoadVillageAttackInfoEP12SIG_LOAD_ETC+0x103>
 843f131:	b8 00 00 00 00       	mov    $0x0,%eax
 843f136:	e9 f4 00 00 00       	jmp    843f22f <_ZN10DB_LoadEtc21LoadVillageAttackInfoEP12SIG_LOAD_ETC+0x1f7>
 843f13b:	8b 45 0c             	mov    0xc(%ebp),%eax
 843f13e:	8b 40 04             	mov    0x4(%eax),%eax
 843f141:	89 44 24 0c          	mov    %eax,0xc(%esp)
 843f145:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 843f148:	89 44 24 08          	mov    %eax,0x8(%esp)
 843f14c:	c7 44 24 04 2c 58 c5 	movl   $0x8c5582c,0x4(%esp)
 843f153:	08 
 843f154:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843f157:	89 04 24             	mov    %eax,(%esp)
 843f15a:	e8 61 50 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 843f15f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843f166:	00 
 843f167:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843f16a:	89 04 24             	mov    %eax,(%esp)
 843f16d:	e8 b4 51 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 843f172:	83 f0 01             	xor    $0x1,%eax
 843f175:	84 c0                	test   %al,%al
 843f177:	74 0a                	je     843f183 <_ZN10DB_LoadEtc21LoadVillageAttackInfoEP12SIG_LOAD_ETC+0x14b>
 843f179:	b8 00 00 00 00       	mov    $0x0,%eax
 843f17e:	e9 ac 00 00 00       	jmp    843f22f <_ZN10DB_LoadEtc21LoadVillageAttackInfoEP12SIG_LOAD_ETC+0x1f7>
 843f183:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843f186:	89 04 24             	mov    %eax,(%esp)
 843f189:	e8 de 31 ca ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 843f18e:	85 c0                	test   %eax,%eax
 843f190:	0f 94 c0             	sete   %al
 843f193:	84 c0                	test   %al,%al
 843f195:	74 1b                	je     843f1b2 <_ZN10DB_LoadEtc21LoadVillageAttackInfoEP12SIG_LOAD_ETC+0x17a>
 843f197:	8b 45 0c             	mov    0xc(%ebp),%eax
 843f19a:	c6 80 ac c9 00 00 00 	movb   $0x0,0xc9ac(%eax)
 843f1a1:	8b 45 0c             	mov    0xc(%ebp),%eax
 843f1a4:	c6 80 ad c9 00 00 00 	movb   $0x0,0xc9ad(%eax)
 843f1ab:	b8 00 00 00 00       	mov    $0x0,%eax
 843f1b0:	eb 7d                	jmp    843f22f <_ZN10DB_LoadEtc21LoadVillageAttackInfoEP12SIG_LOAD_ETC+0x1f7>
 843f1b2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843f1b5:	89 04 24             	mov    %eax,(%esp)
 843f1b8:	e8 ff 52 fb ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 843f1bd:	0f b6 c0             	movzbl %al,%eax
 843f1c0:	89 45 f4             	mov    %eax,-0xc(%ebp)
 843f1c3:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 843f1c7:	75 07                	jne    843f1d0 <_ZN10DB_LoadEtc21LoadVillageAttackInfoEP12SIG_LOAD_ETC+0x198>
 843f1c9:	b8 00 00 00 00       	mov    $0x0,%eax
 843f1ce:	eb 5f                	jmp    843f22f <_ZN10DB_LoadEtc21LoadVillageAttackInfoEP12SIG_LOAD_ETC+0x1f7>
 843f1d0:	8b 45 0c             	mov    0xc(%ebp),%eax
 843f1d3:	05 ac c9 00 00       	add    $0xc9ac,%eax
 843f1d8:	89 44 24 08          	mov    %eax,0x8(%esp)
 843f1dc:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 843f1e3:	00 
 843f1e4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843f1e7:	89 04 24             	mov    %eax,(%esp)
 843f1ea:	e8 cb ec cb ff       	call   80fdeba <_ZN5MySQL9get_ubyteEiRh>
 843f1ef:	83 f0 01             	xor    $0x1,%eax
 843f1f2:	84 c0                	test   %al,%al
 843f1f4:	74 07                	je     843f1fd <_ZN10DB_LoadEtc21LoadVillageAttackInfoEP12SIG_LOAD_ETC+0x1c5>
 843f1f6:	b8 00 00 00 00       	mov    $0x0,%eax
 843f1fb:	eb 32                	jmp    843f22f <_ZN10DB_LoadEtc21LoadVillageAttackInfoEP12SIG_LOAD_ETC+0x1f7>
 843f1fd:	8b 45 0c             	mov    0xc(%ebp),%eax
 843f200:	05 ad c9 00 00       	add    $0xc9ad,%eax
 843f205:	89 44 24 08          	mov    %eax,0x8(%esp)
 843f209:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843f210:	00 
 843f211:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843f214:	89 04 24             	mov    %eax,(%esp)
 843f217:	e8 9e ec cb ff       	call   80fdeba <_ZN5MySQL9get_ubyteEiRh>
 843f21c:	83 f0 01             	xor    $0x1,%eax
 843f21f:	84 c0                	test   %al,%al
 843f221:	74 07                	je     843f22a <_ZN10DB_LoadEtc21LoadVillageAttackInfoEP12SIG_LOAD_ETC+0x1f2>
 843f223:	b8 00 00 00 00       	mov    $0x0,%eax
 843f228:	eb 05                	jmp    843f22f <_ZN10DB_LoadEtc21LoadVillageAttackInfoEP12SIG_LOAD_ETC+0x1f7>
 843f22a:	b8 01 00 00 00       	mov    $0x1,%eax
 843f22f:	c9                   	leave
 843f230:	c3                   	ret
 843f231:	90                   	nop

```

```c
// DB_LoadEtc::LoadVillageAttackInfo @ 0x843f038

/* DB_LoadEtc::LoadVillageAttackInfo(SIG_LOAD_ETC*) */

undefined4 __thiscall DB_LoadEtc::LoadVillageAttackInfo(DB_LoadEtc *this,SIG_LOAD_ETC *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char local_30 [12];
  int local_24;
  tm *local_20;
  time_t local_1c;
  int local_18;
  MySQL *local_14;
  uint local_10;
  
  if (*(int *)(param_1 + 4) == 0) {
    uVar2 = 0;
  }
  else {
    local_24 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    local_20 = localtime(&local_24);
    iVar3 = G_CEnvironment();
    local_18 = *(int *)(iVar3 + 0x37c);
    if (local_20->tm_hour < local_18) {
      local_20 = (tm *)0x0;
      local_24 = local_24 + -0x15180;
      local_20 = localtime(&local_24);
    }
    local_1c = mktime(local_20);
    memset(local_30,0,0xc);
    sprintf(local_30,"%04d-%02d-%02d",local_20->tm_year + 0x76c,local_20->tm_mon + 1,
            local_20->tm_mday);
    local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
    if (local_14 == (MySQL *)0x0) {
      uVar2 = 0;
    }
    else {
      MySQL::set_query(local_14,
                       "seLect attack_count, revenge_dungeon from village_attack_dungeon \t\t\t\t\t\t   where occ_date = \'%s\' and charac_no = %u"
                       ,local_30,*(undefined4 *)(param_1 + 4));
      cVar1 = MySQL::exec(local_14,true);
      if (cVar1 == '\x01') {
        iVar3 = MySQL::get_n_rows(local_14);
        if (iVar3 == 0) {
          param_1[0xc9ac] = (SIG_LOAD_ETC)0x0;
          param_1[0xc9ad] = (SIG_LOAD_ETC)0x0;
          uVar2 = 0;
        }
        else {
          local_10 = MySQL::fetch(local_14);
          local_10 = local_10 & 0xff;
          if (local_10 == 0) {
            uVar2 = 0;
          }
          else {
            cVar1 = MySQL::get_ubyte(local_14,0,(uchar *)(param_1 + 0xc9ac));
            if (cVar1 == '\x01') {
              cVar1 = MySQL::get_ubyte(local_14,1,(uchar *)(param_1 + 0xc9ad));
              if (cVar1 == '\x01') {
                uVar2 = 1;
              }
              else {
                uVar2 = 0;
              }
            }
            else {
              uVar2 = 0;
            }
          }
        }
      }
      else {
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}

```

---

## SendResult

```asm
// === 08408766 DB_LoadEtc::SendResult  [0x08408766-0x8408847] ===
 8408766:	55                   	push   %ebp
 8408767:	89 e5                	mov    %esp,%ebp
 8408769:	56                   	push   %esi
 840876a:	53                   	push   %ebx
 840876b:	83 ec 20             	sub    $0x20,%esp
 840876e:	a1 a4 bd 40 09       	mov    0x940bda4,%eax
 8408773:	c7 44 24 08 92 1f 00 	movl   $0x1f92,0x8(%esp)
 840877a:	00 
 840877b:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8408782:	08 
 8408783:	89 04 24             	mov    %eax,(%esp)
 8408786:	e8 d7 7a e8 ff       	call   8290262 <_ZN13BigStreamPool7AcquireEPKci>
 840878b:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8408792:	00 
 8408793:	89 44 24 04          	mov    %eax,0x4(%esp)
 8408797:	8d 45 f0             	lea    -0x10(%ebp),%eax
 840879a:	89 04 24             	mov    %eax,(%esp)
 840879d:	e8 84 04 cc ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 84087a2:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84087a5:	89 04 24             	mov    %eax,(%esp)
 84087a8:	e8 99 04 cc ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84087ad:	8b 55 0c             	mov    0xc(%ebp),%edx
 84087b0:	89 54 24 04          	mov    %edx,0x4(%esp)
 84087b4:	89 04 24             	mov    %eax,(%esp)
 84087b7:	e8 9a 04 cc ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84087bc:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84087bf:	89 04 24             	mov    %eax,(%esp)
 84087c2:	e8 7f 04 cc ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84087c7:	8b 55 10             	mov    0x10(%ebp),%edx
 84087ca:	89 54 24 04          	mov    %edx,0x4(%esp)
 84087ce:	89 04 24             	mov    %eax,(%esp)
 84087d1:	e8 80 04 cc ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84087d6:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84087d9:	89 04 24             	mov    %eax,(%esp)
 84087dc:	e8 6d 04 cc ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 84087e1:	c7 44 24 08 60 4b 01 	movl   $0x14b60,0x8(%esp)
 84087e8:	00 
 84087e9:	8b 55 14             	mov    0x14(%ebp),%edx
 84087ec:	89 54 24 04          	mov    %edx,0x4(%esp)
 84087f0:	89 04 24             	mov    %eax,(%esp)
 84087f3:	e8 5a 5e cd ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 84087f8:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84087fd:	8d 55 f0             	lea    -0x10(%ebp),%edx
 8408800:	89 54 24 08          	mov    %edx,0x8(%esp)
 8408804:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 840880b:	00 
 840880c:	89 04 24             	mov    %eax,(%esp)
 840880f:	e8 ca 87 16 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8408814:	bb 01 00 00 00       	mov    $0x1,%ebx
 8408819:	8d 45 f0             	lea    -0x10(%ebp),%eax
 840881c:	89 04 24             	mov    %eax,(%esp)
 840881f:	e8 ae 40 21 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8408824:	89 d8                	mov    %ebx,%eax
 8408826:	83 c4 20             	add    $0x20,%esp
 8408829:	5b                   	pop    %ebx
 840882a:	5e                   	pop    %esi
 840882b:	5d                   	pop    %ebp
 840882c:	c3                   	ret
 840882d:	89 d3                	mov    %edx,%ebx
 840882f:	89 c6                	mov    %eax,%esi
 8408831:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8408834:	89 04 24             	mov    %eax,(%esp)
 8408837:	e8 96 40 21 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 840883c:	89 f0                	mov    %esi,%eax
 840883e:	89 da                	mov    %ebx,%edx
 8408840:	89 04 24             	mov    %eax,(%esp)
 8408843:	e8 08 af 6d 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// DB_LoadEtc::SendResult @ 0x8408766

/* DB_LoadEtc::SendResult(int, int, SIG_LOAD_ETC*) */

undefined4 __thiscall
DB_LoadEtc::SendResult(DB_LoadEtc *this,int param_1,int param_2,SIG_LOAD_ETC *param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)BigStreamPool::Acquire(GlobalData::s_big_stream_pool,"DBThread.cpp",0x1f92);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 084087b7 to 08408813 has its CatchHandler @ 0840882d */
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_14);
  CStreamGuard::put_binary(pCVar2,param_3,0x14b60);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return 1;
}

```

---

## _LoadQuestShop

```asm
// === 08404b72 DB_LoadEtc::_LoadQuestShop  [0x08404b72-0x8405689] ===
 8404b72:	55                   	push   %ebp
 8404b73:	89 e5                	mov    %esp,%ebp
 8404b75:	56                   	push   %esi
 8404b76:	53                   	push   %ebx
 8404b77:	83 ec 50             	sub    $0x50,%esp
 8404b7a:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8404b7f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8404b86:	00 
 8404b87:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8404b8e:	00 
 8404b8f:	89 04 24             	mov    %eax,(%esp)
 8404b92:	e8 a7 06 ff ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8404b97:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8404b9a:	8b 45 08             	mov    0x8(%ebp),%eax
 8404b9d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8404ba1:	c7 44 24 04 e8 3b c4 	movl   $0x8c43be8,0x4(%esp)
 8404ba8:	08 
 8404ba9:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8404bac:	89 04 24             	mov    %eax,(%esp)
 8404baf:	e8 0c f6 fe ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8404bb4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8404bbb:	00 
 8404bbc:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8404bbf:	89 04 24             	mov    %eax,(%esp)
 8404bc2:	e8 5f f7 fe ff       	call   83f4326 <_ZN5MySQL4execEb>
 8404bc7:	88 45 eb             	mov    %al,-0x15(%ebp)
 8404bca:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 8404bce:	83 f0 01             	xor    $0x1,%eax
 8404bd1:	84 c0                	test   %al,%al
 8404bd3:	74 0a                	je     8404bdf <_ZN10DB_LoadEtc14_LoadQuestShopEjP22CHARAC_QUEST_SHOP_DATA+0x6d>
 8404bd5:	bb 00 00 00 00       	mov    $0x0,%ebx
 8404bda:	e9 a2 0a 00 00       	jmp    8405681 <_ZN10DB_LoadEtc14_LoadQuestShopEjP22CHARAC_QUEST_SHOP_DATA+0xb0f>
 8404bdf:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8404be2:	89 04 24             	mov    %eax,(%esp)
 8404be5:	e8 26 f7 fe ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 8404bea:	09 d0                	or     %edx,%eax
 8404bec:	85 c0                	test   %eax,%eax
 8404bee:	0f 94 c0             	sete   %al
 8404bf1:	84 c0                	test   %al,%al
 8404bf3:	74 0a                	je     8404bff <_ZN10DB_LoadEtc14_LoadQuestShopEjP22CHARAC_QUEST_SHOP_DATA+0x8d>
 8404bf5:	bb 01 00 00 00       	mov    $0x1,%ebx
 8404bfa:	e9 82 0a 00 00       	jmp    8405681 <_ZN10DB_LoadEtc14_LoadQuestShopEjP22CHARAC_QUEST_SHOP_DATA+0xb0f>
 8404bff:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8404c02:	89 04 24             	mov    %eax,(%esp)
 8404c05:	e8 b2 f8 fe ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 8404c0a:	88 45 eb             	mov    %al,-0x15(%ebp)
 8404c0d:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 8404c11:	83 f0 01             	xor    $0x1,%eax
 8404c14:	84 c0                	test   %al,%al
 8404c16:	74 0a                	je     8404c22 <_ZN10DB_LoadEtc14_LoadQuestShopEjP22CHARAC_QUEST_SHOP_DATA+0xb0>
 8404c18:	bb 00 00 00 00       	mov    $0x0,%ebx
 8404c1d:	e9 5f 0a 00 00       	jmp    8405681 <_ZN10DB_LoadEtc14_LoadQuestShopEjP22CHARAC_QUEST_SHOP_DATA+0xb0f>
 8404c22:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8404c29:	8b 45 0c             	mov    0xc(%ebp),%eax
 8404c2c:	8d 50 04             	lea    0x4(%eax),%edx
 8404c2f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8404c32:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8404c36:	89 54 24 08          	mov    %edx,0x8(%esp)
 8404c3a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8404c3e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8404c41:	89 04 24             	mov    %eax,(%esp)
 8404c44:	e8 a9 d6 cd ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 8404c49:	88 45 eb             	mov    %al,-0x15(%ebp)
 8404c4c:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 8404c50:	83 f0 01             	xor    $0x1,%eax
 8404c53:	84 c0                	test   %al,%al
 8404c55:	74 4e                	je     8404ca5 <_ZN10DB_LoadEtc14_LoadQuestShopEjP22CHARAC_QUEST_SHOP_DATA+0x133>
 8404c57:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8404c5e:	00 
 8404c5f:	c7 44 24 08 ea 17 00 	movl   $0x17ea,0x8(%esp)
 8404c66:	00 
 8404c67:	c7 44 24 04 c0 d5 c5 	movl   $0x8c5d5c0,0x4(%esp)
 8404c6e:	08 
 8404c6f:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8404c72:	89 04 24             	mov    %eax,(%esp)
 8404c75:	e8 9e aa 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8404c7a:	8b 45 08             	mov    0x8(%ebp),%eax
 8404c7d:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8404c81:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8404c84:	89 44 24 08          	mov    %eax,0x8(%esp)
 8404c88:	c7 44 24 04 d4 3d c4 	movl   $0x8c43dd4,0x4(%esp)
 8404c8f:	08 
 8404c90:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8404c93:	89 04 24             	mov    %eax,(%esp)
 8404c96:	e8 ed aa 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8404c9b:	bb 00 00 00 00       	mov    $0x0,%ebx
 8404ca0:	e9 dc 09 00 00       	jmp    8405681 <_ZN10DB_LoadEtc14_LoadQuestShopEjP22CHARAC_QUEST_SHOP_DATA+0xb0f>
 8404ca5:	8b 45 0c             	mov    0xc(%ebp),%eax
 8404ca8:	8d 50 08             	lea    0x8(%eax),%edx
 8404cab:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8404cae:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8404cb2:	89 54 24 08          	mov    %edx,0x8(%esp)
 8404cb6:	89 44 24 04          	mov    %eax,0x4(%esp)
 8404cba:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8404cbd:	89 04 24             	mov    %eax,(%esp)
 8404cc0:	e8 2d d6 cd ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 8404cc5:	88 45 eb             	mov    %al,-0x15(%ebp)
 8404cc8:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 8404ccc:	83 f0 01             	xor    $0x1,%eax
 8404ccf:	84 c0                	test   %al,%al
 8404cd1:	74 4e                	je     8404d21 <_ZN10DB_LoadEtc14_LoadQuestShopEjP22CHARAC_QUEST_SHOP_DATA+0x1af>
 8404cd3:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8404cda:	00 
 8404cdb:	c7 44 24 08 f1 17 00 	movl   $0x17f1,0x8(%esp)
 8404ce2:	00 
 8404ce3:	c7 44 24 04 c0 d5 c5 	movl   $0x8c5d5c0,0x4(%esp)
 8404cea:	08 
 8404ceb:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8404cee:	89 04 24             	mov    %eax,(%esp)
 8404cf1:	e8 22 aa 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8404cf6:	8b 45 08             	mov    0x8(%ebp),%eax
 8404cf9:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8404cfd:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8404d00:	89 44 24 08          	mov    %eax,0x8(%esp)
 8404d04:	c7 44 24 04 d4 3d c4 	movl   $0x8c43dd4,0x4(%esp)
 8404d0b:	08 
 8404d0c:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8404d0f:	89 04 24             	mov    %eax,(%esp)
 8404d12:	e8 71 aa 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8404d17:	bb 00 00 00 00       	mov    $0x0,%ebx
 8404d1c:	e9 60 09 00 00       	jmp    8405681 <_ZN10DB_LoadEtc14_LoadQuestShopEjP22CHARAC_QUEST_SHOP_DATA+0xb0f>
 8404d21:	8b 45 0c             	mov    0xc(%ebp),%eax
 8404d24:	8d 50 26             	lea    0x26(%eax),%edx
 8404d27:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8404d2a:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8404d2e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8404d32:	89 44 24 04          	mov    %eax,0x4(%esp)
 8404d36:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8404d39:	89 04 24             	mov    %eax,(%esp)
 8404d3c:	e8 4f 1c d1 ff       	call   8116990 <_ZN5MySQL10get_ushortEiRt>
 8404d41:	83 f0 01             	xor    $0x1,%eax
 8404d44:	84 c0                	test   %al,%al
 8404d46:	74 2c                	je     8404d74 <_ZN10DB_LoadEtc14_LoadQuestShopEjP22CHARAC_QUEST_SHOP_DATA+0x202>
 8404d48:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8404d4f:	e8 ac 0a 32 00       	call   8725800 <__cxa_allocate_exception>
 8404d54:	89 c2                	mov    %eax,%edx
 8404d56:	c7 02 f7 17 00 00    	movl   $0x17f7,(%edx)
 8404d5c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8404d63:	00 
 8404d64:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 8404d6b:	09 
 8404d6c:	89 04 24             	mov    %eax,(%esp)
 8404d6f:	e8 dc fe 31 00       	call   8724c50 <__cxa_throw>
 8404d74:	8b 45 0c             	mov    0xc(%ebp),%eax
 8404d77:	8d 50 6c             	lea    0x6c(%eax),%edx
 8404d7a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8404d7d:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8404d81:	89 54 24 08          	mov    %edx,0x8(%esp)
 8404d85:	89 44 24 04          	mov    %eax,0x4(%esp)
 8404d89:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8404d8c:	89 04 24             	mov    %eax,(%esp)
 8404d8f:	e8 fc 1b d1 ff       	call   8116990 <_ZN5MySQL10get_ushortEiRt>
 8404d94:	83 f0 01             	xor    $0x1,%eax
 8404d97:	84 c0                	test   %al,%al
 8404d99:	74 2c                	je     8404dc7 <_ZN10DB_LoadEtc14_LoadQuestShopEjP22CHARAC_QUEST_SHOP_DATA+0x255>
 8404d9b:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8404da2:	e8 59 0a 32 00       	call   8725800 <__cxa_allocate_exception>
 8404da7:	89 c2                	mov    %eax,%edx
 8404da9:	c7 02 f8 17 00 00    	movl   $0x17f8,(%edx)
 8404daf:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8404db6:	00 
 8404db7:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 8404dbe:	09 
 8404dbf:	89 04 24             	mov    %eax,(%esp)
 8404dc2:	e8 89 fe 31 00       	call   8724c50 <__cxa_throw>
 8404dc7:	8b 45 0c             	mov    0xc(%ebp),%eax
 8404dca:	8d 50 0c             	lea    0xc(%eax),%edx
 8404dcd:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8404dd0:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8404dd4:	89 54 24 08          	mov    %edx,0x8(%esp)
 8404dd8:	89 44 24 04          	mov    %eax,0x4(%esp)
 8404ddc:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8404ddf:	89 04 24             	mov    %eax,(%esp)
 8404de2:	e8 a9 1b d1 ff       	call   8116990 <_ZN5MySQL10get_ushortEiRt>
 8404de7:	83 f0 01             	xor    $0x1,%eax
 8404dea:	84 c0                	test   %al,%al
 8404dec:	74 2c                	je     8404e1a <_ZN10DB_LoadEtc14_LoadQuestShopEjP22CHARAC_QUEST_SHOP_DATA+0x2a8>
 8404dee:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8404df5:	e8 06 0a 32 00       	call   8725800 <__cxa_allocate_exception>
 8404dfa:	89 c2                	mov    %eax,%edx
 8404dfc:	c7 02 f9 17 00 00    	movl   $0x17f9,(%edx)
 8404e02:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8404e09:	00 
 8404e0a:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 8404e11:	09 
 8404e12:	89 04 24             	mov    %eax,(%esp)
 8404e15:	e8 36 fe 31 00       	call   8724c50 <__cxa_throw>
 8404e1a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8404e1d:	8d 50 12             	lea    0x12(%eax),%edx
 8404e20:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8404e23:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8404e27:	89 54 24 08          	mov    %edx,0x8(%esp)
 8404e2b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8404e2f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8404e32:	89 04 24             	mov    %eax,(%esp)
 8404e35:	e8 56 1b d1 ff       	call   8116990 <_ZN5MySQL10get_ushortEiRt>
 8404e3a:	83 f0 01             	xor    $0x1,%eax
 8404e3d:	84 c0                	test   %al,%al
 8404e3f:	74 2c                	je     8404e6d <_ZN10DB_LoadEtc14_LoadQuestShopEjP22CHARAC_QUEST_SHOP_DATA+0x2fb>
 8404e41:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8404e48:	e8 b3 09 32 00       	call   8725800 <__cxa_allocate_exception>
 8404e4d:	89 c2                	mov    %eax,%edx
 8404e4f:	c7 02 fa 17 00 00    	movl   $0x17fa,(%edx)
 8404e55:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8404e5c:	00 
 8404e5d:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 8404e64:	09 
 8404e65:	89 04 24             	mov    %eax,(%esp)
 8404e68:	e8 e3 fd 31 00       	call   8724c50 <__cxa_throw>
 8404e6d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8404e70:	8d 50 0e             	lea    0xe(%eax),%edx
 8404e73:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8404e76:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8404e7a:	89 54 24 08          	mov    %edx,0x8(%esp)
 8404e7e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8404e82:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8404e85:	89 04 24             	mov    %eax,(%esp)
 8404e88:	e8 03 1b d1 ff       	call   8116990 <_ZN5MySQL10get_ushortEiRt>
 8404e8d:	83 f0 01             	xor    $0x1,%eax
 8404e90:	84 c0                	test   %al,%al
 8404e92:	74 2c                	je     8404ec0 <_ZN10DB_LoadEtc14_LoadQuestShopEjP22CHARAC_QUEST_SHOP_DATA+0x34e>
 8404e94:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8404e9b:	e8 60 09 32 00       	call   8725800 <__cxa_allocate_exception>
 8404ea0:	89 c2                	mov    %eax,%edx
 8404ea2:	c7 02 fb 17 00 00    	movl   $0x17fb,(%edx)
 8404ea8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8404eaf:	00 
 8404eb0:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 8404eb7:	09 
 8404eb8:	89 04 24             	mov    %eax,(%esp)
 8404ebb:	e8 90 fd 31 00       	call   8724c50 <__cxa_throw>
 8404ec0:	8b 45 0c             	mov    0xc(%ebp),%eax
 8404ec3:	8d 50 10             	lea    0x10(%eax),%edx
 8404ec6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8404ec9:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8404ecd:	89 54 24 08          	mov    %edx,0x8(%esp)
 8404ed1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8404ed5:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8404ed8:	89 04 24             	mov    %eax,(%esp)
 8404edb:	e8 b0 1a d1 ff       	call   8116990 <_ZN5MySQL10get_ushortEiRt>
 8404ee0:	83 f0 01             	xor    $0x1,%eax
 8404ee3:	84 c0                	test   %al,%al
 8404ee5:	74 2c                	je     8404f13 <_ZN10DB_LoadEtc14_LoadQuestShopEjP22CHARAC_QUEST_SHOP_DATA+0x3a1>
 8404ee7:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8404eee:	e8 0d 09 32 00       	call   8725800 <__cxa_allocate_exception>
 8404ef3:	89 c2                	mov    %eax,%edx
 8404ef5:	c7 02 fc 17 00 00    	movl   $0x17fc,(%edx)
 8404efb:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8404f02:	00 
 8404f03:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 8404f0a:	09 
 8404f0b:	89 04 24             	mov    %eax,(%esp)
 8404f0e:	e8 3d fd 31 00       	call   8724c50 <__cxa_throw>
 8404f13:	8b 45 0c             	mov    0xc(%ebp),%eax
 8404f16:	8d 50 22             	lea    0x22(%eax),%edx
 8404f19:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8404f1c:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8404f20:	89 54 24 08          	mov    %edx,0x8(%esp)
 8404f24:	89 44 24 04          	mov    %eax,0x4(%esp)
 8404f28:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8404f2b:	89 04 24             	mov    %eax,(%esp)
 8404f2e:	e8 5d 1a d1 ff       	call   8116990 <_ZN5MySQL10get_ushortEiRt>
 8404f33:	83 f0 01             	xor    $0x1,%eax
 8404f36:	84 c0                	test   %al,%al
 8404f38:	74 2c                	je     8404f66 <_ZN10DB_LoadEtc14_LoadQuestShopEjP22CHARAC_QUEST_SHOP_DATA+0x3f4>
 8404f3a:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8404f41:	e8 ba 08 32 00       	call   8725800 <__cxa_allocate_exception>
 8404f46:	89 c2                	mov    %eax,%edx
 8404f48:	c7 02 fd 17 00 00    	movl   $0x17fd,(%edx)
 8404f4e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8404f55:	00 
 8404f56:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 8404f5d:	09 
 8404f5e:	89 04 24             	mov    %eax,(%esp)
 8404f61:	e8 ea fc 31 00       	call   8724c50 <__cxa_throw>
 8404f66:	8b 45 0c             	mov    0xc(%ebp),%eax
 8404f69:	8d 50 20             	lea    0x20(%eax),%edx
 8404f6c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8404f6f:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8404f73:	89 54 24 08          	mov    %edx,0x8(%esp)
 8404f77:	89 44 24 04          	mov    %eax,0x4(%esp)
 8404f7b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8404f7e:	89 04 24             	mov    %eax,(%esp)
 8404f81:	e8 0a 1a d1 ff       	call   8116990 <_ZN5MySQL10get_ushortEiRt>
 8404f86:	83 f0 01             	xor    $0x1,%eax
 8404f89:	84 c0                	test   %al,%al
 8404f8b:	74 2c                	je     8404fb9 <_ZN10DB_LoadEtc14_LoadQuestShopEjP22CHARAC_QUEST_SHOP_DATA+0x447>
 8404f8d:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8404f94:	e8 67 08 32 00       	call   8725800 <__cxa_allocate_exception>
 8404f99:	89 c2                	mov    %eax,%edx
 8404f9b:	c7 02 fe 17 00 00    	movl   $0x17fe,(%edx)
 8404fa1:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8404fa8:	00 
 8404fa9:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 8404fb0:	09 
 8404fb1:	89 04 24             	mov    %eax,(%esp)
 8404fb4:	e8 97 fc 31 00       	call   8724c50 <__cxa_throw>
 8404fb9:	8b 45 0c             	mov    0xc(%ebp),%eax
 8404fbc:	8d 50 28             	lea    0x28(%eax),%edx
 8404fbf:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8404fc2:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8404fc6:	89 54 24 08          	mov    %edx,0x8(%esp)
 8404fca:	89 44 24 04          	mov    %eax,0x4(%esp)
 8404fce:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8404fd1:	89 04 24             	mov    %eax,(%esp)
 8404fd4:	e8 b7 19 d1 ff       	call   8116990 <_ZN5MySQL10get_ushortEiRt>
 8404fd9:	83 f0 01             	xor    $0x1,%eax
 8404fdc:	84 c0                	test   %al,%al
 8404fde:	74 2c                	je     840500c <_ZN10DB_LoadEtc14_LoadQuestShopEjP22CHARAC_QUEST_SHOP_DATA+0x49a>
 8404fe0:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8404fe7:	e8 14 08 32 00       	call   8725800 <__cxa_allocate_exception>
 8404fec:	89 c2                	mov    %eax,%edx
 8404fee:	c7 02 ff 17 00 00    	movl   $0x17ff,(%edx)
 8404ff4:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8404ffb:	00 
 8404ffc:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 8405003:	09 
 8405004:	89 04 24             	mov    %eax,(%esp)
 8405007:	e8 44 fc 31 00       	call   8724c50 <__cxa_throw>
 840500c:	8b 45 0c             	mov    0xc(%ebp),%eax
 840500f:	8d 50 46             	lea    0x46(%eax),%edx
 8405012:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8405015:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8405019:	89 54 24 08          	mov    %edx,0x8(%esp)
 840501d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8405021:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8405024:	89 04 24             	mov    %eax,(%esp)
 8405027:	e8 64 19 d1 ff       	call   8116990 <_ZN5MySQL10get_ushortEiRt>
 840502c:	83 f0 01             	xor    $0x1,%eax
 840502f:	84 c0                	test   %al,%al
 8405031:	74 2c                	je     840505f <_ZN10DB_LoadEtc14_LoadQuestShopEjP22CHARAC_QUEST_SHOP_DATA+0x4ed>
 8405033:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 840503a:	e8 c1 07 32 00       	call   8725800 <__cxa_allocate_exception>
 840503f:	89 c2                	mov    %eax,%edx
 8405041:	c7 02 00 18 00 00    	movl   $0x1800,(%edx)
 8405047:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840504e:	00 
 840504f:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 8405056:	09 
 8405057:	89 04 24             	mov    %eax,(%esp)
 840505a:	e8 f1 fb 31 00       	call   8724c50 <__cxa_throw>
 840505f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8405062:	8d 50 3c             	lea    0x3c(%eax),%edx
 8405065:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8405068:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 840506c:	89 54 24 08          	mov    %edx,0x8(%esp)
 8405070:	89 44 24 04          	mov    %eax,0x4(%esp)
 8405074:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8405077:	89 04 24             	mov    %eax,(%esp)
 840507a:	e8 11 19 d1 ff       	call   8116990 <_ZN5MySQL10get_ushortEiRt>
 840507f:	83 f0 01             	xor    $0x1,%eax
 8405082:	84 c0                	test   %al,%al
 8405084:	74 2c                	je     84050b2 <_ZN10DB_LoadEtc14_LoadQuestShopEjP22CHARAC_QUEST_SHOP_DATA+0x540>
 8405086:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 840508d:	e8 6e 07 32 00       	call   8725800 <__cxa_allocate_exception>
 8405092:	89 c2                	mov    %eax,%edx
 8405094:	c7 02 01 18 00 00    	movl   $0x1801,(%edx)
 840509a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84050a1:	00 
 84050a2:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 84050a9:	09 
 84050aa:	89 04 24             	mov    %eax,(%esp)
 84050ad:	e8 9e fb 31 00       	call   8724c50 <__cxa_throw>
 84050b2:	8b 45 0c             	mov    0xc(%ebp),%eax
 84050b5:	8d 50 34             	lea    0x34(%eax),%edx
 84050b8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84050bb:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 84050bf:	89 54 24 08          	mov    %edx,0x8(%esp)
 84050c3:	89 44 24 04          	mov    %eax,0x4(%esp)
 84050c7:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84050ca:	89 04 24             	mov    %eax,(%esp)
 84050cd:	e8 be 18 d1 ff       	call   8116990 <_ZN5MySQL10get_ushortEiRt>
 84050d2:	83 f0 01             	xor    $0x1,%eax
 84050d5:	84 c0                	test   %al,%al
 84050d7:	74 2c                	je     8405105 <_ZN10DB_LoadEtc14_LoadQuestShopEjP22CHARAC_QUEST_SHOP_DATA+0x593>
 84050d9:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 84050e0:	e8 1b 07 32 00       	call   8725800 <__cxa_allocate_exception>
 84050e5:	89 c2                	mov    %eax,%edx
 84050e7:	c7 02 02 18 00 00    	movl   $0x1802,(%edx)
 84050ed:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84050f4:	00 
 84050f5:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 84050fc:	09 
 84050fd:	89 04 24             	mov    %eax,(%esp)
 8405100:	e8 4b fb 31 00       	call   8724c50 <__cxa_throw>
 8405105:	8b 45 0c             	mov    0xc(%ebp),%eax
 8405108:	8d 50 36             	lea    0x36(%eax),%edx
 840510b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840510e:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8405112:	89 54 24 08          	mov    %edx,0x8(%esp)
 8405116:	89 44 24 04          	mov    %eax,0x4(%esp)
 840511a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840511d:	89 04 24             	mov    %eax,(%esp)
 8405120:	e8 6b 18 d1 ff       	call   8116990 <_ZN5MySQL10get_ushortEiRt>
 8405125:	83 f0 01             	xor    $0x1,%eax
 8405128:	84 c0                	test   %al,%al
 840512a:	74 2c                	je     8405158 <_ZN10DB_LoadEtc14_LoadQuestShopEjP22CHARAC_QUEST_SHOP_DATA+0x5e6>
 840512c:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8405133:	e8 c8 06 32 00       	call   8725800 <__cxa_allocate_exception>
 8405138:	89 c2                	mov    %eax,%edx
 840513a:	c7 02 03 18 00 00    	movl   $0x1803,(%edx)
 8405140:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8405147:	00 
 8405148:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 840514f:	09 
 8405150:	89 04 24             	mov    %eax,(%esp)
 8405153:	e8 f8 fa 31 00       	call   8724c50 <__cxa_throw>
 8405158:	8b 45 0c             	mov    0xc(%ebp),%eax
 840515b:	8d 50 3a             	lea    0x3a(%eax),%edx
 840515e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8405161:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8405165:	89 54 24 08          	mov    %edx,0x8(%esp)
 8405169:	89 44 24 04          	mov    %eax,0x4(%esp)
 840516d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8405170:	89 04 24             	mov    %eax,(%esp)
 8405173:	e8 18 18 d1 ff       	call   8116990 <_ZN5MySQL10get_ushortEiRt>
 8405178:	83 f0 01             	xor    $0x1,%eax
 840517b:	84 c0                	test   %al,%al
 840517d:	74 2c                	je     84051ab <_ZN10DB_LoadEtc14_LoadQuestShopEjP22CHARAC_QUEST_SHOP_DATA+0x639>
 840517f:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8405186:	e8 75 06 32 00       	call   8725800 <__cxa_allocate_exception>
 840518b:	89 c2                	mov    %eax,%edx
 840518d:	c7 02 04 18 00 00    	movl   $0x1804,(%edx)
 8405193:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840519a:	00 
 840519b:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 84051a2:	09 
 84051a3:	89 04 24             	mov    %eax,(%esp)
 84051a6:	e8 a5 fa 31 00       	call   8724c50 <__cxa_throw>
 84051ab:	8b 45 0c             	mov    0xc(%ebp),%eax
 84051ae:	8d 50 38             	lea    0x38(%eax),%edx
 84051b1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84051b4:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 84051b8:	89 54 24 08          	mov    %edx,0x8(%esp)
 84051bc:	89 44 24 04          	mov    %eax,0x4(%esp)
 84051c0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84051c3:	89 04 24             	mov    %eax,(%esp)
 84051c6:	e8 c5 17 d1 ff       	call   8116990 <_ZN5MySQL10get_ushortEiRt>
 84051cb:	83 f0 01             	xor    $0x1,%eax
 84051ce:	84 c0                	test   %al,%al
 84051d0:	74 2c                	je     84051fe <_ZN10DB_LoadEtc14_LoadQuestShopEjP22CHARAC_QUEST_SHOP_DATA+0x68c>
 84051d2:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 84051d9:	e8 22 06 32 00       	call   8725800 <__cxa_allocate_exception>
 84051de:	89 c2                	mov    %eax,%edx
 84051e0:	c7 02 05 18 00 00    	movl   $0x1805,(%edx)
 84051e6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84051ed:	00 
 84051ee:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 84051f5:	09 
 84051f6:	89 04 24             	mov    %eax,(%esp)
 84051f9:	e8 52 fa 31 00       	call   8724c50 <__cxa_throw>
 84051fe:	8b 45 0c             	mov    0xc(%ebp),%eax
 8405201:	8d 50 68             	lea    0x68(%eax),%edx
 8405204:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8405207:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 840520b:	89 54 24 08          	mov    %edx,0x8(%esp)
 840520f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8405213:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8405216:	89 04 24             	mov    %eax,(%esp)
 8405219:	e8 72 17 d1 ff       	call   8116990 <_ZN5MySQL10get_ushortEiRt>
 840521e:	83 f0 01             	xor    $0x1,%eax
 8405221:	84 c0                	test   %al,%al
 8405223:	74 2c                	je     8405251 <_ZN10DB_LoadEtc14_LoadQuestShopEjP22CHARAC_QUEST_SHOP_DATA+0x6df>
 8405225:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 840522c:	e8 cf 05 32 00       	call   8725800 <__cxa_allocate_exception>
 8405231:	89 c2                	mov    %eax,%edx
 8405233:	c7 02 06 18 00 00    	movl   $0x1806,(%edx)
 8405239:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8405240:	00 
 8405241:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 8405248:	09 
 8405249:	89 04 24             	mov    %eax,(%esp)
 840524c:	e8 ff f9 31 00       	call   8724c50 <__cxa_throw>
 8405251:	8b 45 0c             	mov    0xc(%ebp),%eax
 8405254:	8d 50 60             	lea    0x60(%eax),%edx
 8405257:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840525a:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 840525e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8405262:	89 44 24 04          	mov    %eax,0x4(%esp)
 8405266:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8405269:	89 04 24             	mov    %eax,(%esp)
 840526c:	e8 1f 17 d1 ff       	call   8116990 <_ZN5MySQL10get_ushortEiRt>
 8405271:	83 f0 01             	xor    $0x1,%eax
 8405274:	84 c0                	test   %al,%al
 8405276:	74 2c                	je     84052a4 <_ZN10DB_LoadEtc14_LoadQuestShopEjP22CHARAC_QUEST_SHOP_DATA+0x732>
 8405278:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 840527f:	e8 7c 05 32 00       	call   8725800 <__cxa_allocate_exception>
 8405284:	89 c2                	mov    %eax,%edx
 8405286:	c7 02 07 18 00 00    	movl   $0x1807,(%edx)
 840528c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8405293:	00 
 8405294:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 840529b:	09 
 840529c:	89 04 24             	mov    %eax,(%esp)
 840529f:	e8 ac f9 31 00       	call   8724c50 <__cxa_throw>
 84052a4:	8b 45 0c             	mov    0xc(%ebp),%eax
 84052a7:	8d 50 62             	lea    0x62(%eax),%edx
 84052aa:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84052ad:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 84052b1:	89 54 24 08          	mov    %edx,0x8(%esp)
 84052b5:	89 44 24 04          	mov    %eax,0x4(%esp)
 84052b9:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84052bc:	89 04 24             	mov    %eax,(%esp)
 84052bf:	e8 cc 16 d1 ff       	call   8116990 <_ZN5MySQL10get_ushortEiRt>
 84052c4:	83 f0 01             	xor    $0x1,%eax
 84052c7:	84 c0                	test   %al,%al
 84052c9:	74 2c                	je     84052f7 <_ZN10DB_LoadEtc14_LoadQuestShopEjP22CHARAC_QUEST_SHOP_DATA+0x785>
 84052cb:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 84052d2:	e8 29 05 32 00       	call   8725800 <__cxa_allocate_exception>
 84052d7:	89 c2                	mov    %eax,%edx
 84052d9:	c7 02 08 18 00 00    	movl   $0x1808,(%edx)
 84052df:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84052e6:	00 
 84052e7:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 84052ee:	09 
 84052ef:	89 04 24             	mov    %eax,(%esp)
 84052f2:	e8 59 f9 31 00       	call   8724c50 <__cxa_throw>
 84052f7:	8b 45 0c             	mov    0xc(%ebp),%eax
 84052fa:	8d 50 66             	lea    0x66(%eax),%edx
 84052fd:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8405300:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8405304:	89 54 24 08          	mov    %edx,0x8(%esp)
 8405308:	89 44 24 04          	mov    %eax,0x4(%esp)
 840530c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840530f:	89 04 24             	mov    %eax,(%esp)
 8405312:	e8 79 16 d1 ff       	call   8116990 <_ZN5MySQL10get_ushortEiRt>
 8405317:	83 f0 01             	xor    $0x1,%eax
 840531a:	84 c0                	test   %al,%al
 840531c:	74 2c                	je     840534a <_ZN10DB_LoadEtc14_LoadQuestShopEjP22CHARAC_QUEST_SHOP_DATA+0x7d8>
 840531e:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8405325:	e8 d6 04 32 00       	call   8725800 <__cxa_allocate_exception>
 840532a:	89 c2                	mov    %eax,%edx
 840532c:	c7 02 09 18 00 00    	movl   $0x1809,(%edx)
 8405332:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8405339:	00 
 840533a:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 8405341:	09 
 8405342:	89 04 24             	mov    %eax,(%esp)
 8405345:	e8 06 f9 31 00       	call   8724c50 <__cxa_throw>
 840534a:	8b 45 0c             	mov    0xc(%ebp),%eax
 840534d:	8d 50 64             	lea    0x64(%eax),%edx
 8405350:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8405353:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8405357:	89 54 24 08          	mov    %edx,0x8(%esp)
 840535b:	89 44 24 04          	mov    %eax,0x4(%esp)
 840535f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8405362:	89 04 24             	mov    %eax,(%esp)
 8405365:	e8 26 16 d1 ff       	call   8116990 <_ZN5MySQL10get_ushortEiRt>
 840536a:	83 f0 01             	xor    $0x1,%eax
 840536d:	84 c0                	test   %al,%al
 840536f:	74 2c                	je     840539d <_ZN10DB_LoadEtc14_LoadQuestShopEjP22CHARAC_QUEST_SHOP_DATA+0x82b>
 8405371:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8405378:	e8 83 04 32 00       	call   8725800 <__cxa_allocate_exception>
 840537d:	89 c2                	mov    %eax,%edx
 840537f:	c7 02 0a 18 00 00    	movl   $0x180a,(%edx)
 8405385:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840538c:	00 
 840538d:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 8405394:	09 
 8405395:	89 04 24             	mov    %eax,(%esp)
 8405398:	e8 b3 f8 31 00       	call   8724c50 <__cxa_throw>
 840539d:	8b 45 0c             	mov    0xc(%ebp),%eax
 84053a0:	8d 50 2a             	lea    0x2a(%eax),%edx
 84053a3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84053a6:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 84053aa:	89 54 24 08          	mov    %edx,0x8(%esp)
 84053ae:	89 44 24 04          	mov    %eax,0x4(%esp)
 84053b2:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84053b5:	89 04 24             	mov    %eax,(%esp)
 84053b8:	e8 d3 15 d1 ff       	call   8116990 <_ZN5MySQL10get_ushortEiRt>
 84053bd:	83 f0 01             	xor    $0x1,%eax
 84053c0:	84 c0                	test   %al,%al
 84053c2:	74 2c                	je     84053f0 <_ZN10DB_LoadEtc14_LoadQuestShopEjP22CHARAC_QUEST_SHOP_DATA+0x87e>
 84053c4:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 84053cb:	e8 30 04 32 00       	call   8725800 <__cxa_allocate_exception>
 84053d0:	89 c2                	mov    %eax,%edx
 84053d2:	c7 02 0b 18 00 00    	movl   $0x180b,(%edx)
 84053d8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84053df:	00 
 84053e0:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 84053e7:	09 
 84053e8:	89 04 24             	mov    %eax,(%esp)
 84053eb:	e8 60 f8 31 00       	call   8724c50 <__cxa_throw>
 84053f0:	8b 45 0c             	mov    0xc(%ebp),%eax
 84053f3:	8d 50 2c             	lea    0x2c(%eax),%edx
 84053f6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84053f9:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 84053fd:	89 54 24 08          	mov    %edx,0x8(%esp)
 8405401:	89 44 24 04          	mov    %eax,0x4(%esp)
 8405405:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8405408:	89 04 24             	mov    %eax,(%esp)
 840540b:	e8 80 15 d1 ff       	call   8116990 <_ZN5MySQL10get_ushortEiRt>
 8405410:	83 f0 01             	xor    $0x1,%eax
 8405413:	84 c0                	test   %al,%al
 8405415:	74 2c                	je     8405443 <_ZN10DB_LoadEtc14_LoadQuestShopEjP22CHARAC_QUEST_SHOP_DATA+0x8d1>
 8405417:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 840541e:	e8 dd 03 32 00       	call   8725800 <__cxa_allocate_exception>
 8405423:	89 c2                	mov    %eax,%edx
 8405425:	c7 02 0c 18 00 00    	movl   $0x180c,(%edx)
 840542b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8405432:	00 
 8405433:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 840543a:	09 
 840543b:	89 04 24             	mov    %eax,(%esp)
 840543e:	e8 0d f8 31 00       	call   8724c50 <__cxa_throw>
 8405443:	8b 45 0c             	mov    0xc(%ebp),%eax
 8405446:	8d 50 4e             	lea    0x4e(%eax),%edx
 8405449:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840544c:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8405450:	89 54 24 08          	mov    %edx,0x8(%esp)
 8405454:	89 44 24 04          	mov    %eax,0x4(%esp)
 8405458:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840545b:	89 04 24             	mov    %eax,(%esp)
 840545e:	e8 2d 15 d1 ff       	call   8116990 <_ZN5MySQL10get_ushortEiRt>
 8405463:	83 f0 01             	xor    $0x1,%eax
 8405466:	84 c0                	test   %al,%al
 8405468:	74 2c                	je     8405496 <_ZN10DB_LoadEtc14_LoadQuestShopEjP22CHARAC_QUEST_SHOP_DATA+0x924>
 840546a:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8405471:	e8 8a 03 32 00       	call   8725800 <__cxa_allocate_exception>
 8405476:	89 c2                	mov    %eax,%edx
 8405478:	c7 02 0d 18 00 00    	movl   $0x180d,(%edx)
 840547e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8405485:	00 
 8405486:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 840548d:	09 
 840548e:	89 04 24             	mov    %eax,(%esp)
 8405491:	e8 ba f7 31 00       	call   8724c50 <__cxa_throw>
 8405496:	8b 45 0c             	mov    0xc(%ebp),%eax
 8405499:	8d 50 42             	lea    0x42(%eax),%edx
 840549c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840549f:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 84054a3:	89 54 24 08          	mov    %edx,0x8(%esp)
 84054a7:	89 44 24 04          	mov    %eax,0x4(%esp)
 84054ab:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84054ae:	89 04 24             	mov    %eax,(%esp)
 84054b1:	e8 da 14 d1 ff       	call   8116990 <_ZN5MySQL10get_ushortEiRt>
 84054b6:	83 f0 01             	xor    $0x1,%eax
 84054b9:	84 c0                	test   %al,%al
 84054bb:	74 2c                	je     84054e9 <_ZN10DB_LoadEtc14_LoadQuestShopEjP22CHARAC_QUEST_SHOP_DATA+0x977>
 84054bd:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 84054c4:	e8 37 03 32 00       	call   8725800 <__cxa_allocate_exception>
 84054c9:	89 c2                	mov    %eax,%edx
 84054cb:	c7 02 0e 18 00 00    	movl   $0x180e,(%edx)
 84054d1:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84054d8:	00 
 84054d9:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 84054e0:	09 
 84054e1:	89 04 24             	mov    %eax,(%esp)
 84054e4:	e8 67 f7 31 00       	call   8724c50 <__cxa_throw>
 84054e9:	8b 45 0c             	mov    0xc(%ebp),%eax
 84054ec:	8d 50 48             	lea    0x48(%eax),%edx
 84054ef:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84054f2:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 84054f6:	89 54 24 08          	mov    %edx,0x8(%esp)
 84054fa:	89 44 24 04          	mov    %eax,0x4(%esp)
 84054fe:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8405501:	89 04 24             	mov    %eax,(%esp)
 8405504:	e8 87 14 d1 ff       	call   8116990 <_ZN5MySQL10get_ushortEiRt>
 8405509:	83 f0 01             	xor    $0x1,%eax
 840550c:	84 c0                	test   %al,%al
 840550e:	74 2c                	je     840553c <_ZN10DB_LoadEtc14_LoadQuestShopEjP22CHARAC_QUEST_SHOP_DATA+0x9ca>
 8405510:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8405517:	e8 e4 02 32 00       	call   8725800 <__cxa_allocate_exception>
 840551c:	89 c2                	mov    %eax,%edx
 840551e:	c7 02 0f 18 00 00    	movl   $0x180f,(%edx)
 8405524:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840552b:	00 
 840552c:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 8405533:	09 
 8405534:	89 04 24             	mov    %eax,(%esp)
 8405537:	e8 14 f7 31 00       	call   8724c50 <__cxa_throw>
 840553c:	8b 45 0c             	mov    0xc(%ebp),%eax
 840553f:	8d 50 76             	lea    0x76(%eax),%edx
 8405542:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8405545:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8405549:	89 54 24 08          	mov    %edx,0x8(%esp)
 840554d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8405551:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8405554:	89 04 24             	mov    %eax,(%esp)
 8405557:	e8 34 14 d1 ff       	call   8116990 <_ZN5MySQL10get_ushortEiRt>
 840555c:	83 f0 01             	xor    $0x1,%eax
 840555f:	84 c0                	test   %al,%al
 8405561:	74 2c                	je     840558f <_ZN10DB_LoadEtc14_LoadQuestShopEjP22CHARAC_QUEST_SHOP_DATA+0xa1d>
 8405563:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 840556a:	e8 91 02 32 00       	call   8725800 <__cxa_allocate_exception>
 840556f:	89 c2                	mov    %eax,%edx
 8405571:	c7 02 11 18 00 00    	movl   $0x1811,(%edx)
 8405577:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840557e:	00 
 840557f:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 8405586:	09 
 8405587:	89 04 24             	mov    %eax,(%esp)
 840558a:	e8 c1 f6 31 00       	call   8724c50 <__cxa_throw>
 840558f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8405592:	8d 90 a6 00 00 00    	lea    0xa6(%eax),%edx
 8405598:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840559b:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 840559f:	89 54 24 08          	mov    %edx,0x8(%esp)
 84055a3:	89 44 24 04          	mov    %eax,0x4(%esp)
 84055a7:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84055aa:	89 04 24             	mov    %eax,(%esp)
 84055ad:	e8 40 cd cd ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 84055b2:	83 f0 01             	xor    $0x1,%eax
 84055b5:	84 c0                	test   %al,%al
 84055b7:	0f 84 bf 00 00 00    	je     840567c <_ZN10DB_LoadEtc14_LoadQuestShopEjP22CHARAC_QUEST_SHOP_DATA+0xb0a>
 84055bd:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 84055c4:	e8 37 02 32 00       	call   8725800 <__cxa_allocate_exception>
 84055c9:	89 c2                	mov    %eax,%edx
 84055cb:	c7 02 16 18 00 00    	movl   $0x1816,(%edx)
 84055d1:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84055d8:	00 
 84055d9:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 84055e0:	09 
 84055e1:	89 04 24             	mov    %eax,(%esp)
 84055e4:	e8 67 f6 31 00       	call   8724c50 <__cxa_throw>
 84055e9:	83 fa 01             	cmp    $0x1,%edx
 84055ec:	74 08                	je     84055f6 <_ZN10DB_LoadEtc14_LoadQuestShopEjP22CHARAC_QUEST_SHOP_DATA+0xa84>
 84055ee:	89 04 24             	mov    %eax,(%esp)
 84055f1:	e8 5a e1 6d 00       	call   8ae3750 <_Unwind_Resume>
 84055f6:	89 04 24             	mov    %eax,(%esp)
 84055f9:	e8 e2 06 32 00       	call   8725ce0 <__cxa_begin_catch>
 84055fe:	8b 00                	mov    (%eax),%eax
 8405600:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8405603:	8b 45 0c             	mov    0xc(%ebp),%eax
 8405606:	83 c0 0c             	add    $0xc,%eax
 8405609:	c7 44 24 08 9a 00 00 	movl   $0x9a,0x8(%esp)
 8405610:	00 
 8405611:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8405618:	00 
 8405619:	89 04 24             	mov    %eax,(%esp)
 840561c:	e8 9f 86 c7 ff       	call   807dcc0 <memset@plt>
 8405621:	8b 45 08             	mov    0x8(%ebp),%eax
 8405624:	89 44 24 18          	mov    %eax,0x18(%esp)
 8405628:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840562b:	89 44 24 14          	mov    %eax,0x14(%esp)
 840562f:	c7 44 24 10 0c 3e c4 	movl   $0x8c43e0c,0x10(%esp)
 8405636:	08 
 8405637:	c7 44 24 0c 1f 18 00 	movl   $0x181f,0xc(%esp)
 840563e:	00 
 840563f:	c7 44 24 08 c0 d5 c5 	movl   $0x8c5d5c0,0x8(%esp)
 8405646:	08 
 8405647:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 840564e:	08 
 840564f:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8405656:	e8 af e5 6c 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 840565b:	bb 00 00 00 00       	mov    $0x0,%ebx
 8405660:	e8 cb 05 32 00       	call   8725c30 <__cxa_end_catch>
 8405665:	eb 1a                	jmp    8405681 <_ZN10DB_LoadEtc14_LoadQuestShopEjP22CHARAC_QUEST_SHOP_DATA+0xb0f>
 8405667:	89 d3                	mov    %edx,%ebx
 8405669:	89 c6                	mov    %eax,%esi
 840566b:	e8 c0 05 32 00       	call   8725c30 <__cxa_end_catch>
 8405670:	89 f0                	mov    %esi,%eax
 8405672:	89 da                	mov    %ebx,%edx
 8405674:	89 04 24             	mov    %eax,(%esp)
 8405677:	e8 d4 e0 6d 00       	call   8ae3750 <_Unwind_Resume>
 840567c:	bb 01 00 00 00       	mov    $0x1,%ebx
 8405681:	89 d8                	mov    %ebx,%eax
 8405683:	83 c4 50             	add    $0x50,%esp
 8405686:	5b                   	pop    %ebx
 8405687:	5e                   	pop    %esi
 8405688:	5d                   	pop    %ebp
 8405689:	c3                   	ret

```

```c
// DB_LoadEtc::_LoadQuestShop @ 0x8404b72

/* DB_LoadEtc::_LoadQuestShop(unsigned int, CHARAC_QUEST_SHOP_DATA*) */

undefined4 DB_LoadEtc::_LoadQuestShop(uint param_1,CHARAC_QUEST_SHOP_DATA *param_2)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  longlong lVar5;
  cMyTrace local_3c [16];
  cMyTrace local_2c [19];
  char local_19;
  MySQL *local_18;
  int local_14;
  
  local_18 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  MySQL::set_query(local_18,
                   "seLect qp, init_count, max_hp, max_mp, psy_attack, psy_defense, mag_attack, mag_defence, move_speed, attack_speed, hp_regen, mp_regen, all_element_resist, fire_element_resist, water_element_resist, light_element_resist, dark_element_resist, all_element_attack,fire_element_attack, water_element_attack, light_element_attack, dark_element_attack, psy_critical, mag_critical, good_hit , evasion , hit_recovery , separate_psy_mag_attack , quest_piece from charac_quest_shop where charac_no=%u"
                   ,param_1);
  local_19 = MySQL::exec(local_18,true);
  if (local_19 == '\x01') {
    lVar5 = MySQL::getAffectedRowCount(local_18);
    if (lVar5 == 0) {
      uVar4 = 1;
    }
    else {
      local_19 = MySQL::fetch(local_18);
      if (local_19 == '\x01') {
        local_14 = 1;
        local_19 = MySQL::get_uint(local_18,0,(uint *)(param_2 + 4));
        iVar1 = local_14;
        if (local_19 == '\x01') {
          local_14 = local_14 + 1;
          local_19 = MySQL::get_uint(local_18,iVar1,(uint *)(param_2 + 8));
          iVar1 = local_14;
          if (local_19 == '\x01') {
            local_14 = local_14 + 1;
            cVar2 = MySQL::get_ushort(local_18,iVar1,(ushort *)(param_2 + 0x26));
            iVar1 = local_14;
            if (cVar2 != '\x01') {
              puVar3 = (undefined4 *)__cxa_allocate_exception(4);
              *puVar3 = 0x17f7;
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 08404d6f to 084055e8 has its CatchHandler @ 084055e9 */
              __cxa_throw(puVar3,&int::typeinfo,0);
            }
            local_14 = local_14 + 1;
            cVar2 = MySQL::get_ushort(local_18,iVar1,(ushort *)(param_2 + 0x6c));
            iVar1 = local_14;
            if (cVar2 != '\x01') {
              puVar3 = (undefined4 *)__cxa_allocate_exception(4);
              *puVar3 = 0x17f8;
                    /* WARNING: Subroutine does not return */
              __cxa_throw(puVar3,&int::typeinfo,0);
            }
            local_14 = local_14 + 1;
            cVar2 = MySQL::get_ushort(local_18,iVar1,(ushort *)(param_2 + 0xc));
            iVar1 = local_14;
            if (cVar2 != '\x01') {
              puVar3 = (undefined4 *)__cxa_allocate_exception(4);
              *puVar3 = 0x17f9;
                    /* WARNING: Subroutine does not return */
              __cxa_throw(puVar3,&int::typeinfo,0);
            }
            local_14 = local_14 + 1;
            cVar2 = MySQL::get_ushort(local_18,iVar1,(ushort *)(param_2 + 0x12));
            iVar1 = local_14;
            if (cVar2 != '\x01') {
              puVar3 = (undefined4 *)__cxa_allocate_exception(4);
              *puVar3 = 0x17fa;
                    /* WARNING: Subroutine does not return */
              __cxa_throw(puVar3,&int::typeinfo,0);
            }
            local_14 = local_14 + 1;
            cVar2 = MySQL::get_ushort(local_18,iVar1,(ushort *)(param_2 + 0xe));
            iVar1 = local_14;
            if (cVar2 != '\x01') {
              puVar3 = (undefined4 *)__cxa_allocate_exception(4);
              *puVar3 = 0x17fb;
                    /* WARNING: Subroutine does not return */
              __cxa_throw(puVar3,&int::typeinfo,0);
            }
            local_14 = local_14 + 1;
            cVar2 = MySQL::get_ushort(local_18,iVar1,(ushort *)(param_2 + 0x10));
            iVar1 = local_14;
            if (cVar2 != '\x01') {
              puVar3 = (undefined4 *)__cxa_allocate_exception(4);
              *puVar3 = 0x17fc;
                    /* WARNING: Subroutine does not return */
              __cxa_throw(puVar3,&int::typeinfo,0);
            }
            local_14 = local_14 + 1;
            cVar2 = MySQL::get_ushort(local_18,iVar1,(ushort *)(param_2 + 0x22));
            iVar1 = local_14;
            if (cVar2 != '\x01') {
              puVar3 = (undefined4 *)__cxa_allocate_exception(4);
              *puVar3 = 0x17fd;
                    /* WARNING: Subroutine does not return */
              __cxa_throw(puVar3,&int::typeinfo,0);
            }
            local_14 = local_14 + 1;
            cVar2 = MySQL::get_ushort(local_18,iVar1,(ushort *)(param_2 + 0x20));
            iVar1 = local_14;
            if (cVar2 != '\x01') {
              puVar3 = (undefined4 *)__cxa_allocate_exception(4);
              *puVar3 = 0x17fe;
                    /* WARNING: Subroutine does not return */
              __cxa_throw(puVar3,&int::typeinfo,0);
            }
            local_14 = local_14 + 1;
            cVar2 = MySQL::get_ushort(local_18,iVar1,(ushort *)(param_2 + 0x28));
            iVar1 = local_14;
            if (cVar2 != '\x01') {
              puVar3 = (undefined4 *)__cxa_allocate_exception(4);
              *puVar3 = 0x17ff;
                    /* WARNING: Subroutine does not return */
              __cxa_throw(puVar3,&int::typeinfo,0);
            }
            local_14 = local_14 + 1;
            cVar2 = MySQL::get_ushort(local_18,iVar1,(ushort *)(param_2 + 0x46));
            iVar1 = local_14;
            if (cVar2 != '\x01') {
              puVar3 = (undefined4 *)__cxa_allocate_exception(4);
              *puVar3 = 0x1800;
                    /* WARNING: Subroutine does not return */
              __cxa_throw(puVar3,&int::typeinfo,0);
            }
            local_14 = local_14 + 1;
            cVar2 = MySQL::get_ushort(local_18,iVar1,(ushort *)(param_2 + 0x3c));
            iVar1 = local_14;
            if (cVar2 != '\x01') {
              puVar3 = (undefined4 *)__cxa_allocate_exception(4);
              *puVar3 = 0x1801;
                    /* WARNING: Subroutine does not return */
              __cxa_throw(puVar3,&int::typeinfo,0);
            }
            local_14 = local_14 + 1;
            cVar2 = MySQL::get_ushort(local_18,iVar1,(ushort *)(param_2 + 0x34));
            iVar1 = local_14;
            if (cVar2 != '\x01') {
              puVar3 = (undefined4 *)__cxa_allocate_exception(4);
              *puVar3 = 0x1802;
                    /* WARNING: Subroutine does not return */
              __cxa_throw(puVar3,&int::typeinfo,0);
            }
            local_14 = local_14 + 1;
            cVar2 = MySQL::get_ushort(local_18,iVar1,(ushort *)(param_2 + 0x36));
            iVar1 = local_14;
            if (cVar2 != '\x01') {
              puVar3 = (undefined4 *)__cxa_allocate_exception(4);
              *puVar3 = 0x1803;
                    /* WARNING: Subroutine does not return */
              __cxa_throw(puVar3,&int::typeinfo,0);
            }
            local_14 = local_14 + 1;
            cVar2 = MySQL::get_ushort(local_18,iVar1,(ushort *)(param_2 + 0x3a));
            iVar1 = local_14;
            if (cVar2 != '\x01') {
              puVar3 = (undefined4 *)__cxa_allocate_exception(4);
              *puVar3 = 0x1804;
                    /* WARNING: Subroutine does not return */
              __cxa_throw(puVar3,&int::typeinfo,0);
            }
            local_14 = local_14 + 1;
            cVar2 = MySQL::get_ushort(local_18,iVar1,(ushort *)(param_2 + 0x38));
            iVar1 = local_14;
            if (cVar2 != '\x01') {
              puVar3 = (undefined4 *)__cxa_allocate_exception(4);
              *puVar3 = 0x1805;
                    /* WARNING: Subroutine does not return */
              __cxa_throw(puVar3,&int::typeinfo,0);
            }
            local_14 = local_14 + 1;
            cVar2 = MySQL::get_ushort(local_18,iVar1,(ushort *)(param_2 + 0x68));
            iVar1 = local_14;
            if (cVar2 != '\x01') {
              puVar3 = (undefined4 *)__cxa_allocate_exception(4);
              *puVar3 = 0x1806;
                    /* WARNING: Subroutine does not return */
              __cxa_throw(puVar3,&int::typeinfo,0);
            }
            local_14 = local_14 + 1;
            cVar2 = MySQL::get_ushort(local_18,iVar1,(ushort *)(param_2 + 0x60));
            iVar1 = local_14;
            if (cVar2 != '\x01') {
              puVar3 = (undefined4 *)__cxa_allocate_exception(4);
              *puVar3 = 0x1807;
                    /* WARNING: Subroutine does not return */
              __cxa_throw(puVar3,&int::typeinfo,0);
            }
            local_14 = local_14 + 1;
            cVar2 = MySQL::get_ushort(local_18,iVar1,(ushort *)(param_2 + 0x62));
            iVar1 = local_14;
            if (cVar2 != '\x01') {
              puVar3 = (undefined4 *)__cxa_allocate_exception(4);
              *puVar3 = 0x1808;
                    /* WARNING: Subroutine does not return */
              __cxa_throw(puVar3,&int::typeinfo,0);
            }
            local_14 = local_14 + 1;
            cVar2 = MySQL::get_ushort(local_18,iVar1,(ushort *)(param_2 + 0x66));
            iVar1 = local_14;
            if (cVar2 != '\x01') {
              puVar3 = (undefined4 *)__cxa_allocate_exception(4);
              *puVar3 = 0x1809;
                    /* WARNING: Subroutine does not return */
              __cxa_throw(puVar3,&int::typeinfo,0);
            }
            local_14 = local_14 + 1;
            cVar2 = MySQL::get_ushort(local_18,iVar1,(ushort *)(param_2 + 100));
            iVar1 = local_14;
            if (cVar2 != '\x01') {
              puVar3 = (undefined4 *)__cxa_allocate_exception(4);
              *puVar3 = 0x180a;
                    /* WARNING: Subroutine does not return */
              __cxa_throw(puVar3,&int::typeinfo,0);
            }
            local_14 = local_14 + 1;
            cVar2 = MySQL::get_ushort(local_18,iVar1,(ushort *)(param_2 + 0x2a));
            iVar1 = local_14;
            if (cVar2 != '\x01') {
              puVar3 = (undefined4 *)__cxa_allocate_exception(4);
              *puVar3 = 0x180b;
                    /* WARNING: Subroutine does not return */
              __cxa_throw(puVar3,&int::typeinfo,0);
            }
            local_14 = local_14 + 1;
            cVar2 = MySQL::get_ushort(local_18,iVar1,(ushort *)(param_2 + 0x2c));
            iVar1 = local_14;
            if (cVar2 != '\x01') {
              puVar3 = (undefined4 *)__cxa_allocate_exception(4);
              *puVar3 = 0x180c;
                    /* WARNING: Subroutine does not return */
              __cxa_throw(puVar3,&int::typeinfo,0);
            }
            local_14 = local_14 + 1;
            cVar2 = MySQL::get_ushort(local_18,iVar1,(ushort *)(param_2 + 0x4e));
            iVar1 = local_14;
            if (cVar2 != '\x01') {
              puVar3 = (undefined4 *)__cxa_allocate_exception(4);
              *puVar3 = 0x180d;
                    /* WARNING: Subroutine does not return */
              __cxa_throw(puVar3,&int::typeinfo,0);
            }
            local_14 = local_14 + 1;
            cVar2 = MySQL::get_ushort(local_18,iVar1,(ushort *)(param_2 + 0x42));
            iVar1 = local_14;
            if (cVar2 != '\x01') {
              puVar3 = (undefined4 *)__cxa_allocate_exception(4);
              *puVar3 = 0x180e;
                    /* WARNING: Subroutine does not return */
              __cxa_throw(puVar3,&int::typeinfo,0);
            }
            local_14 = local_14 + 1;
            cVar2 = MySQL::get_ushort(local_18,iVar1,(ushort *)(param_2 + 0x48));
            iVar1 = local_14;
            if (cVar2 != '\x01') {
              puVar3 = (undefined4 *)__cxa_allocate_exception(4);
              *puVar3 = 0x180f;
                    /* WARNING: Subroutine does not return */
              __cxa_throw(puVar3,&int::typeinfo,0);
            }
            local_14 = local_14 + 1;
            cVar2 = MySQL::get_ushort(local_18,iVar1,(ushort *)(param_2 + 0x76));
            iVar1 = local_14;
            if (cVar2 != '\x01') {
              puVar3 = (undefined4 *)__cxa_allocate_exception(4);
              *puVar3 = 0x1811;
                    /* WARNING: Subroutine does not return */
              __cxa_throw(puVar3,&int::typeinfo,0);
            }
            local_14 = local_14 + 1;
            cVar2 = MySQL::get_uint(local_18,iVar1,(uint *)(param_2 + 0xa6));
            if (cVar2 != '\x01') {
              puVar3 = (undefined4 *)__cxa_allocate_exception(4);
              *puVar3 = 0x1816;
                    /* WARNING: Subroutine does not return */
              __cxa_throw(puVar3,&int::typeinfo,0);
            }
            uVar4 = 1;
          }
          else {
            cMyTrace::cMyTrace(local_2c,
                               "static bool DB_LoadEtc::_LoadQuestShop(unsigned int, CHARAC_QUEST_SHOP_DATA*)"
                               ,0x17f1,5);
            cMyTrace::operator()
                      (local_2c,"DB_LoadEtc::LoadQuestShope, get(%d) ERROR charac_no=%u",local_14,
                       param_1);
            uVar4 = 0;
          }
        }
        else {
          cMyTrace::cMyTrace(local_3c,
                             "static bool DB_LoadEtc::_LoadQuestShop(unsigned int, CHARAC_QUEST_SHOP_DATA*)"
                             ,0x17ea,5);
          cMyTrace::operator()
                    (local_3c,"DB_LoadEtc::LoadQuestShope, get(%d) ERROR charac_no=%u",local_14,
                     param_1);
          uVar4 = 0;
        }
      }
      else {
        uVar4 = 0;
      }
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

```

---

## _loadNPCRelasionship

```asm
// === 08407482 DB_LoadEtc::_loadNPCRelasionship  [0x08407482-0x84075c3] ===
 8407482:	55                   	push   %ebp
 8407483:	89 e5                	mov    %esp,%ebp
 8407485:	83 ec 28             	sub    $0x28,%esp
 8407488:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 840748d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8407494:	00 
 8407495:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 840749c:	00 
 840749d:	89 04 24             	mov    %eax,(%esp)
 84074a0:	e8 99 dd fe ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 84074a5:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84074a8:	8b 45 0c             	mov    0xc(%ebp),%eax
 84074ab:	8b 40 04             	mov    0x4(%eax),%eax
 84074ae:	89 44 24 08          	mov    %eax,0x8(%esp)
 84074b2:	c7 44 24 04 dc 48 c4 	movl   $0x8c448dc,0x4(%esp)
 84074b9:	08 
 84074ba:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84074bd:	89 04 24             	mov    %eax,(%esp)
 84074c0:	e8 fb cc fe ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84074c5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84074cc:	00 
 84074cd:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84074d0:	89 04 24             	mov    %eax,(%esp)
 84074d3:	e8 4e ce fe ff       	call   83f4326 <_ZN5MySQL4execEb>
 84074d8:	83 f0 01             	xor    $0x1,%eax
 84074db:	84 c0                	test   %al,%al
 84074dd:	74 0a                	je     84074e9 <_ZN10DB_LoadEtc20_loadNPCRelasionshipEP12SIG_LOAD_ETC+0x67>
 84074df:	b8 80 1c 00 00       	mov    $0x1c80,%eax
 84074e4:	e9 d8 00 00 00       	jmp    84075c1 <_ZN10DB_LoadEtc20_loadNPCRelasionshipEP12SIG_LOAD_ETC+0x13f>
 84074e9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84074ec:	89 04 24             	mov    %eax,(%esp)
 84074ef:	e8 78 ae cd ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 84074f4:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84074f7:	83 7d f4 01          	cmpl   $0x1,-0xc(%ebp)
 84074fb:	74 0a                	je     8407507 <_ZN10DB_LoadEtc20_loadNPCRelasionshipEP12SIG_LOAD_ETC+0x85>
 84074fd:	b8 84 1c 00 00       	mov    $0x1c84,%eax
 8407502:	e9 ba 00 00 00       	jmp    84075c1 <_ZN10DB_LoadEtc20_loadNPCRelasionshipEP12SIG_LOAD_ETC+0x13f>
 8407507:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840750a:	89 04 24             	mov    %eax,(%esp)
 840750d:	e8 aa cf fe ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 8407512:	83 f0 01             	xor    $0x1,%eax
 8407515:	84 c0                	test   %al,%al
 8407517:	74 0a                	je     8407523 <_ZN10DB_LoadEtc20_loadNPCRelasionshipEP12SIG_LOAD_ETC+0xa1>
 8407519:	b8 87 1c 00 00       	mov    $0x1c87,%eax
 840751e:	e9 9e 00 00 00       	jmp    84075c1 <_ZN10DB_LoadEtc20_loadNPCRelasionshipEP12SIG_LOAD_ETC+0x13f>
 8407523:	8b 45 0c             	mov    0xc(%ebp),%eax
 8407526:	05 6c 3e 00 00       	add    $0x3e6c,%eax
 840752b:	89 44 24 08          	mov    %eax,0x8(%esp)
 840752f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8407536:	00 
 8407537:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840753a:	89 04 24             	mov    %eax,(%esp)
 840753d:	e8 b0 ad cd ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 8407542:	83 f0 01             	xor    $0x1,%eax
 8407545:	84 c0                	test   %al,%al
 8407547:	74 07                	je     8407550 <_ZN10DB_LoadEtc20_loadNPCRelasionshipEP12SIG_LOAD_ETC+0xce>
 8407549:	b8 8a 1c 00 00       	mov    $0x1c8a,%eax
 840754e:	eb 71                	jmp    84075c1 <_ZN10DB_LoadEtc20_loadNPCRelasionshipEP12SIG_LOAD_ETC+0x13f>
 8407550:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8407557:	00 
 8407558:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840755b:	89 04 24             	mov    %eax,(%esp)
 840755e:	e8 7b de d1 ff       	call   81253de <_ZN5MySQL17get_binary_lengthEi>
 8407563:	89 c1                	mov    %eax,%ecx
 8407565:	8b 45 0c             	mov    0xc(%ebp),%eax
 8407568:	8b 90 6c 3e 00 00    	mov    0x3e6c(%eax),%edx
 840756e:	89 d0                	mov    %edx,%eax
 8407570:	01 c0                	add    %eax,%eax
 8407572:	01 d0                	add    %edx,%eax
 8407574:	c1 e0 02             	shl    $0x2,%eax
 8407577:	39 c1                	cmp    %eax,%ecx
 8407579:	0f 95 c0             	setne  %al
 840757c:	84 c0                	test   %al,%al
 840757e:	74 07                	je     8407587 <_ZN10DB_LoadEtc20_loadNPCRelasionshipEP12SIG_LOAD_ETC+0x105>
 8407580:	b8 8d 1c 00 00       	mov    $0x1c8d,%eax
 8407585:	eb 3a                	jmp    84075c1 <_ZN10DB_LoadEtc20_loadNPCRelasionshipEP12SIG_LOAD_ETC+0x13f>
 8407587:	8b 45 0c             	mov    0xc(%ebp),%eax
 840758a:	05 70 3e 00 00       	add    $0x3e70,%eax
 840758f:	c7 44 24 0c 58 02 00 	movl   $0x258,0xc(%esp)
 8407596:	00 
 8407597:	89 44 24 08          	mov    %eax,0x8(%esp)
 840759b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84075a2:	00 
 84075a3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84075a6:	89 04 24             	mov    %eax,(%esp)
 84075a9:	e8 6c dd d1 ff       	call   812531a <_ZN5MySQL10get_binaryEiPvi>
 84075ae:	83 f0 01             	xor    $0x1,%eax
 84075b1:	84 c0                	test   %al,%al
 84075b3:	74 07                	je     84075bc <_ZN10DB_LoadEtc20_loadNPCRelasionshipEP12SIG_LOAD_ETC+0x13a>
 84075b5:	b8 90 1c 00 00       	mov    $0x1c90,%eax
 84075ba:	eb 05                	jmp    84075c1 <_ZN10DB_LoadEtc20_loadNPCRelasionshipEP12SIG_LOAD_ETC+0x13f>
 84075bc:	b8 00 00 00 00       	mov    $0x0,%eax
 84075c1:	c9                   	leave
 84075c2:	c3                   	ret
 84075c3:	90                   	nop

```

```c
// DB_LoadEtc::_loadNPCRelasionship @ 0x8407482

/* DB_LoadEtc::_loadNPCRelasionship(SIG_LOAD_ETC*) */

undefined4 __thiscall DB_LoadEtc::_loadNPCRelasionship(DB_LoadEtc *this,SIG_LOAD_ETC *param_1)

{
  char cVar1;
  MySQL *this_00;
  undefined4 uVar2;
  int iVar3;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  MySQL::set_query(this_00,"seLect npc_cnt,npc_data from charac_npc where charac_no=%d",
                   *(undefined4 *)(param_1 + 4));
  cVar1 = MySQL::exec(this_00,true);
  if (cVar1 == '\x01') {
    iVar3 = MySQL::get_n_rows(this_00);
    if (iVar3 == 1) {
      cVar1 = MySQL::fetch(this_00);
      if (cVar1 == '\x01') {
        cVar1 = MySQL::get_uint(this_00,0,(uint *)(param_1 + 0x3e6c));
        if (cVar1 == '\x01') {
          iVar3 = MySQL::get_binary_length(this_00,1);
          if (iVar3 == *(int *)(param_1 + 0x3e6c) * 0xc) {
            cVar1 = MySQL::get_binary(this_00,1,param_1 + 0x3e70,600);
            if (cVar1 == '\x01') {
              uVar2 = 0;
            }
            else {
              uVar2 = 0x1c90;
            }
          }
          else {
            uVar2 = 0x1c8d;
          }
        }
        else {
          uVar2 = 0x1c8a;
        }
      }
      else {
        uVar2 = 0x1c87;
      }
    }
    else {
      uVar2 = 0x1c84;
    }
  }
  else {
    uVar2 = 0x1c80;
  }
  return uVar2;
}

```

---

## dispatch

```asm
// === 08403bee DB_LoadEtc::dispatch  [0x08403bee-0x84040b3] ===
 8403bee:	55                   	push   %ebp
 8403bef:	89 e5                	mov    %esp,%ebp
 8403bf1:	56                   	push   %esi
 8403bf2:	53                   	push   %ebx
 8403bf3:	83 ec 40             	sub    $0x40,%esp
 8403bf6:	8b 45 08             	mov    0x8(%ebp),%eax
 8403bf9:	8b 55 14             	mov    0x14(%ebp),%edx
 8403bfc:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8403c00:	8b 55 10             	mov    0x10(%ebp),%edx
 8403c03:	89 54 24 08          	mov    %edx,0x8(%esp)
 8403c07:	8b 55 0c             	mov    0xc(%ebp),%edx
 8403c0a:	89 54 24 04          	mov    %edx,0x4(%esp)
 8403c0e:	89 04 24             	mov    %eax,(%esp)
 8403c11:	e8 66 83 ff ff       	call   83fbf7c <_ZN12DBDispatcher8dispatchEiiP6Stream>
 8403c16:	83 f0 01             	xor    $0x1,%eax
 8403c19:	84 c0                	test   %al,%al
 8403c1b:	74 0a                	je     8403c27 <_ZN10DB_LoadEtc8dispatchEiiP6Stream+0x39>
 8403c1d:	b8 00 00 00 00       	mov    $0x0,%eax
 8403c22:	e9 85 04 00 00       	jmp    84040ac <_ZN10DB_LoadEtc8dispatchEiiP6Stream+0x4be>
 8403c27:	8b 45 14             	mov    0x14(%ebp),%eax
 8403c2a:	89 04 24             	mov    %eax,(%esp)
 8403c2d:	e8 0a ca 04 00       	call   845063c <_ZN6Stream12GetOutBufferI12SIG_LOAD_ETCEEPT_v>
 8403c32:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8403c35:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8403c39:	75 0a                	jne    8403c45 <_ZN10DB_LoadEtc8dispatchEiiP6Stream+0x57>
 8403c3b:	b8 00 00 00 00       	mov    $0x0,%eax
 8403c40:	e9 67 04 00 00       	jmp    84040ac <_ZN10DB_LoadEtc8dispatchEiiP6Stream+0x4be>
 8403c45:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8403c48:	89 44 24 04          	mov    %eax,0x4(%esp)
 8403c4c:	8b 45 08             	mov    0x8(%ebp),%eax
 8403c4f:	89 04 24             	mov    %eax,(%esp)
 8403c52:	e8 6d 39 00 00       	call   84075c4 <_ZN10DB_LoadEtc13GetUserRecordEP12SIG_LOAD_ETC>
 8403c57:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8403c5a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8403c5e:	8b 45 08             	mov    0x8(%ebp),%eax
 8403c61:	89 04 24             	mov    %eax,(%esp)
 8403c64:	e8 59 41 00 00       	call   8407dc2 <_ZN10DB_LoadEtc10GetUserPvpEP12SIG_LOAD_ETC>
 8403c69:	85 c0                	test   %eax,%eax
 8403c6b:	74 6b                	je     8403cd8 <_ZN10DB_LoadEtc8dispatchEiiP6Stream+0xea>
 8403c6d:	83 f8 01             	cmp    $0x1,%eax
 8403c70:	74 0a                	je     8403c7c <_ZN10DB_LoadEtc8dispatchEiiP6Stream+0x8e>
 8403c72:	83 f8 ff             	cmp    $0xffffffff,%eax
 8403c75:	74 4f                	je     8403cc6 <_ZN10DB_LoadEtc8dispatchEiiP6Stream+0xd8>
 8403c77:	e9 99 00 00 00       	jmp    8403d15 <_ZN10DB_LoadEtc8dispatchEiiP6Stream+0x127>
 8403c7c:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8403c7f:	89 04 24             	mov    %eax,(%esp)
 8403c82:	e8 3b d0 ff ff       	call   8400cc2 <_ZN15DB_CreateCharacC1Ev>
 8403c87:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8403c8a:	8b 40 04             	mov    0x4(%eax),%eax
 8403c8d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8403c91:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8403c94:	89 04 24             	mov    %eax,(%esp)
 8403c97:	e8 50 ea ff ff       	call   84026ec <_ZN15DB_CreateCharac9CreatePvPEj>
 8403c9c:	eb 1b                	jmp    8403cb9 <_ZN10DB_LoadEtc8dispatchEiiP6Stream+0xcb>
 8403c9e:	89 d3                	mov    %edx,%ebx
 8403ca0:	89 c6                	mov    %eax,%esi
 8403ca2:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8403ca5:	89 04 24             	mov    %eax,(%esp)
 8403ca8:	e8 31 d0 ff ff       	call   8400cde <_ZN15DB_CreateCharacD1Ev>
 8403cad:	89 f0                	mov    %esi,%eax
 8403caf:	89 da                	mov    %ebx,%edx
 8403cb1:	89 04 24             	mov    %eax,(%esp)
 8403cb4:	e8 97 fa 6d 00       	call   8ae3750 <_Unwind_Resume>
 8403cb9:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8403cbc:	89 04 24             	mov    %eax,(%esp)
 8403cbf:	e8 1a d0 ff ff       	call   8400cde <_ZN15DB_CreateCharacD1Ev>
 8403cc4:	eb 4f                	jmp    8403d15 <_ZN10DB_LoadEtc8dispatchEiiP6Stream+0x127>
 8403cc6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8403cc9:	05 40 03 00 00       	add    $0x340,%eax
 8403cce:	89 04 24             	mov    %eax,(%esp)
 8403cd1:	e8 ea 20 1d 00       	call   85d5dc0 <_ZN13PvpResultType5ClearEv>
 8403cd6:	eb 3d                	jmp    8403d15 <_ZN10DB_LoadEtc8dispatchEiiP6Stream+0x127>
 8403cd8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8403cdb:	89 44 24 04          	mov    %eax,0x4(%esp)
 8403cdf:	8b 45 08             	mov    0x8(%ebp),%eax
 8403ce2:	89 04 24             	mov    %eax,(%esp)
 8403ce5:	e8 ca 40 00 00       	call   8407db4 <_ZN10DB_LoadEtc14GetUserPvpBaseEP12SIG_LOAD_ETC>
 8403cea:	83 f8 ff             	cmp    $0xffffffff,%eax
 8403ced:	74 07                	je     8403cf6 <_ZN10DB_LoadEtc8dispatchEiiP6Stream+0x108>
 8403cef:	83 f8 01             	cmp    $0x1,%eax
 8403cf2:	74 14                	je     8403d08 <_ZN10DB_LoadEtc8dispatchEiiP6Stream+0x11a>
 8403cf4:	eb 1f                	jmp    8403d15 <_ZN10DB_LoadEtc8dispatchEiiP6Stream+0x127>
 8403cf6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8403cf9:	05 40 03 00 00       	add    $0x340,%eax
 8403cfe:	89 04 24             	mov    %eax,(%esp)
 8403d01:	e8 ba 20 1d 00       	call   85d5dc0 <_ZN13PvpResultType5ClearEv>
 8403d06:	eb 0d                	jmp    8403d15 <_ZN10DB_LoadEtc8dispatchEiiP6Stream+0x127>
 8403d08:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8403d0b:	c7 80 50 03 00 00 ff 	movl   $0xffffffff,0x350(%eax)
 8403d12:	ff ff ff 
 8403d15:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8403d18:	89 44 24 04          	mov    %eax,0x4(%esp)
 8403d1c:	8b 45 08             	mov    0x8(%ebp),%eax
 8403d1f:	89 04 24             	mov    %eax,(%esp)
 8403d22:	e8 39 19 04 00       	call   8445660 <_ZN10DB_LoadEtc18LoadCharacItemStatEP12SIG_LOAD_ETC>
 8403d27:	83 f0 01             	xor    $0x1,%eax
 8403d2a:	84 c0                	test   %al,%al
 8403d2c:	74 36                	je     8403d64 <_ZN10DB_LoadEtc8dispatchEiiP6Stream+0x176>
 8403d2e:	c7 44 24 10 2c 37 c4 	movl   $0x8c4372c,0x10(%esp)
 8403d35:	08 
 8403d36:	c7 44 24 0c c6 14 00 	movl   $0x14c6,0xc(%esp)
 8403d3d:	00 
 8403d3e:	c7 44 24 08 e0 d6 c5 	movl   $0x8c5d6e0,0x8(%esp)
 8403d45:	08 
 8403d46:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8403d4d:	08 
 8403d4e:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8403d55:	e8 b0 fe 6c 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8403d5a:	b8 00 00 00 00       	mov    $0x0,%eax
 8403d5f:	e9 48 03 00 00       	jmp    84040ac <_ZN10DB_LoadEtc8dispatchEiiP6Stream+0x4be>
 8403d64:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8403d67:	89 44 24 04          	mov    %eax,0x4(%esp)
 8403d6b:	8b 45 08             	mov    0x8(%ebp),%eax
 8403d6e:	89 04 24             	mov    %eax,(%esp)
 8403d71:	e8 ea 1e 00 00       	call   8405c60 <_ZN10DB_LoadEtc14LoadLitmitItemEP12SIG_LOAD_ETC>
 8403d76:	83 f0 01             	xor    $0x1,%eax
 8403d79:	84 c0                	test   %al,%al
 8403d7b:	74 4a                	je     8403dc7 <_ZN10DB_LoadEtc8dispatchEiiP6Stream+0x1d9>
 8403d7d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8403d80:	8b 58 04             	mov    0x4(%eax),%ebx
 8403d83:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8403d8a:	00 
 8403d8b:	c7 44 24 08 db 14 00 	movl   $0x14db,0x8(%esp)
 8403d92:	00 
 8403d93:	c7 44 24 04 e0 d6 c5 	movl   $0x8c5d6e0,0x4(%esp)
 8403d9a:	08 
 8403d9b:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8403d9e:	89 04 24             	mov    %eax,(%esp)
 8403da1:	e8 72 b9 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8403da6:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8403daa:	c7 44 24 04 58 37 c4 	movl   $0x8c43758,0x4(%esp)
 8403db1:	08 
 8403db2:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8403db5:	89 04 24             	mov    %eax,(%esp)
 8403db8:	e8 cb b9 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8403dbd:	b8 00 00 00 00       	mov    $0x0,%eax
 8403dc2:	e9 e5 02 00 00       	jmp    84040ac <_ZN10DB_LoadEtc8dispatchEiiP6Stream+0x4be>
 8403dc7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8403dca:	89 44 24 04          	mov    %eax,0x4(%esp)
 8403dce:	8b 45 08             	mov    0x8(%ebp),%eax
 8403dd1:	89 04 24             	mov    %eax,(%esp)
 8403dd4:	e8 f9 37 00 00       	call   84075d2 <_ZN10DB_LoadEtc12GetUserSkillEP12SIG_LOAD_ETC>
 8403dd9:	83 f0 01             	xor    $0x1,%eax
 8403ddc:	84 c0                	test   %al,%al
 8403dde:	74 36                	je     8403e16 <_ZN10DB_LoadEtc8dispatchEiiP6Stream+0x228>
 8403de0:	c7 44 24 10 80 37 c4 	movl   $0x8c43780,0x10(%esp)
 8403de7:	08 
 8403de8:	c7 44 24 0c e3 14 00 	movl   $0x14e3,0xc(%esp)
 8403def:	00 
 8403df0:	c7 44 24 08 e0 d6 c5 	movl   $0x8c5d6e0,0x8(%esp)
 8403df7:	08 
 8403df8:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8403dff:	08 
 8403e00:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8403e07:	e8 fe fd 6c 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8403e0c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8403e0f:	c7 40 08 01 00 00 00 	movl   $0x1,0x8(%eax)
 8403e16:	a1 30 f7 41 09       	mov    0x941f730,%eax
 8403e1b:	c7 44 24 04 71 00 00 	movl   $0x71,0x4(%esp)
 8403e22:	00 
 8403e23:	89 04 24             	mov    %eax,(%esp)
 8403e26:	e8 6d 1b d1 ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 8403e2b:	8b 10                	mov    (%eax),%edx
 8403e2d:	83 c2 34             	add    $0x34,%edx
 8403e30:	8b 12                	mov    (%edx),%edx
 8403e32:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8403e39:	00 
 8403e3a:	89 04 24             	mov    %eax,(%esp)
 8403e3d:	ff d2                	call   *%edx
 8403e3f:	84 c0                	test   %al,%al
 8403e41:	74 12                	je     8403e55 <_ZN10DB_LoadEtc8dispatchEiiP6Stream+0x267>
 8403e43:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8403e46:	89 44 24 04          	mov    %eax,0x4(%esp)
 8403e4a:	8b 45 08             	mov    0x8(%ebp),%eax
 8403e4d:	89 04 24             	mov    %eax,(%esp)
 8403e50:	e8 41 34 00 00       	call   8407296 <_ZN10DB_LoadEtc22LoadConditionEventInfoEP12SIG_LOAD_ETC>
 8403e55:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8403e58:	89 44 24 04          	mov    %eax,0x4(%esp)
 8403e5c:	8b 45 08             	mov    0x8(%ebp),%eax
 8403e5f:	89 04 24             	mov    %eax,(%esp)
 8403e62:	e8 43 35 00 00       	call   84073aa <_ZN10DB_LoadEtc27LoadProperDungeonClearCountEP12SIG_LOAD_ETC>
 8403e67:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8403e6a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8403e6e:	8b 45 08             	mov    0x8(%ebp),%eax
 8403e71:	89 04 24             	mov    %eax,(%esp)
 8403e74:	e8 f1 2b 00 00       	call   8406a6a <_ZN10DB_LoadEtc14LoadRedeemItemEP12SIG_LOAD_ETC>
 8403e79:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8403e7c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8403e80:	8b 45 08             	mov    0x8(%ebp),%eax
 8403e83:	89 04 24             	mov    %eax,(%esp)
 8403e86:	e8 43 2e 00 00       	call   8406cce <_ZN10DB_LoadEtc18LoadPvPMissionListEP12SIG_LOAD_ETC>
 8403e8b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8403e8e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8403e92:	8b 45 08             	mov    0x8(%ebp),%eax
 8403e95:	89 04 24             	mov    %eax,(%esp)
 8403e98:	e8 4f 30 00 00       	call   8406eec <_ZN10DB_LoadEtc16LoadTODUserStateEP12SIG_LOAD_ETC>
 8403e9d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8403ea0:	89 44 24 04          	mov    %eax,0x4(%esp)
 8403ea4:	8b 45 08             	mov    0x8(%ebp),%eax
 8403ea7:	89 04 24             	mov    %eax,(%esp)
 8403eaa:	e8 89 b1 03 00       	call   843f038 <_ZN10DB_LoadEtc21LoadVillageAttackInfoEP12SIG_LOAD_ETC>
 8403eaf:	c7 44 24 08 91 01 00 	movl   $0x191,0x8(%esp)
 8403eb6:	00 
 8403eb7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8403eba:	89 44 24 04          	mov    %eax,0x4(%esp)
 8403ebe:	8b 45 08             	mov    0x8(%ebp),%eax
 8403ec1:	89 04 24             	mov    %eax,(%esp)
 8403ec4:	e8 a5 1d 00 00       	call   8405c6e <_ZN10DB_LoadEtc21LoadAccountFirstLoginEP12SIG_LOAD_ETCi>
 8403ec9:	c7 44 24 08 92 01 00 	movl   $0x192,0x8(%esp)
 8403ed0:	00 
 8403ed1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8403ed4:	89 44 24 04          	mov    %eax,0x4(%esp)
 8403ed8:	8b 45 08             	mov    0x8(%ebp),%eax
 8403edb:	89 04 24             	mov    %eax,(%esp)
 8403ede:	e8 8b 1d 00 00       	call   8405c6e <_ZN10DB_LoadEtc21LoadAccountFirstLoginEP12SIG_LOAD_ETCi>
 8403ee3:	c7 44 24 08 9c 01 00 	movl   $0x19c,0x8(%esp)
 8403eea:	00 
 8403eeb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8403eee:	89 44 24 04          	mov    %eax,0x4(%esp)
 8403ef2:	8b 45 08             	mov    0x8(%ebp),%eax
 8403ef5:	89 04 24             	mov    %eax,(%esp)
 8403ef8:	e8 0d 1f 00 00       	call   8405e0a <_ZN10DB_LoadEtc26LoadAccountFirstLoginDailyEP12SIG_LOAD_ETCi>
 8403efd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8403f00:	89 44 24 04          	mov    %eax,0x4(%esp)
 8403f04:	8b 45 08             	mov    0x8(%ebp),%eax
 8403f07:	89 04 24             	mov    %eax,(%esp)
 8403f0a:	e8 81 03 00 00       	call   8404290 <_ZN10DB_LoadEtc16LoadFairPvPScoreEP12SIG_LOAD_ETC>
 8403f0f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8403f12:	89 44 24 04          	mov    %eax,0x4(%esp)
 8403f16:	8b 45 08             	mov    0x8(%ebp),%eax
 8403f19:	89 04 24             	mov    %eax,(%esp)
 8403f1c:	e8 93 01 00 00       	call   84040b4 <_ZN10DB_LoadEtc19LoadItemMakingSkillEP12SIG_LOAD_ETC>
 8403f21:	83 f0 01             	xor    $0x1,%eax
 8403f24:	84 c0                	test   %al,%al
 8403f26:	74 36                	je     8403f5e <_ZN10DB_LoadEtc8dispatchEiiP6Stream+0x370>
 8403f28:	c7 44 24 10 a8 37 c4 	movl   $0x8c437a8,0x10(%esp)
 8403f2f:	08 
 8403f30:	c7 44 24 0c 66 15 00 	movl   $0x1566,0xc(%esp)
 8403f37:	00 
 8403f38:	c7 44 24 08 e0 d6 c5 	movl   $0x8c5d6e0,0x8(%esp)
 8403f3f:	08 
 8403f40:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8403f47:	08 
 8403f48:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8403f4f:	e8 b6 fc 6c 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8403f54:	b8 00 00 00 00       	mov    $0x0,%eax
 8403f59:	e9 4e 01 00 00       	jmp    84040ac <_ZN10DB_LoadEtc8dispatchEiiP6Stream+0x4be>
 8403f5e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8403f61:	89 44 24 04          	mov    %eax,0x4(%esp)
 8403f65:	8b 45 08             	mov    0x8(%ebp),%eax
 8403f68:	89 04 24             	mov    %eax,(%esp)
 8403f6b:	e8 f8 0a 00 00       	call   8404a68 <_ZN10DB_LoadEtc13LoadQuestShopEP12SIG_LOAD_ETC>
 8403f70:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8403f73:	89 44 24 04          	mov    %eax,0x4(%esp)
 8403f77:	8b 45 08             	mov    0x8(%ebp),%eax
 8403f7a:	89 04 24             	mov    %eax,(%esp)
 8403f7d:	e8 10 21 00 00       	call   8406092 <_ZN10DB_LoadEtc13LoadTitleBookEP12SIG_LOAD_ETC>
 8403f82:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8403f85:	89 44 24 04          	mov    %eax,0x4(%esp)
 8403f89:	8b 45 08             	mov    0x8(%ebp),%eax
 8403f8c:	89 04 24             	mov    %eax,(%esp)
 8403f8f:	e8 8e 24 00 00       	call   8406422 <_ZN10DB_LoadEtc15LoadAchievementEP12SIG_LOAD_ETC>
 8403f94:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8403f97:	89 44 24 04          	mov    %eax,0x4(%esp)
 8403f9b:	8b 45 08             	mov    0x8(%ebp),%eax
 8403f9e:	89 04 24             	mov    %eax,(%esp)
 8403fa1:	e8 5a 26 00 00       	call   8406600 <_ZN10DB_LoadEtc24LoadOnceGiveAvengerTitleEP12SIG_LOAD_ETC>
 8403fa6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8403fa9:	89 44 24 04          	mov    %eax,0x4(%esp)
 8403fad:	8b 45 08             	mov    0x8(%ebp),%eax
 8403fb0:	89 04 24             	mov    %eax,(%esp)
 8403fb3:	e8 d6 43 00 00       	call   840838e <_ZN10DB_LoadEtc20LoadAuraAvatarOptionEP12SIG_LOAD_ETC>
 8403fb8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8403fbb:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8403fbf:	8b 45 10             	mov    0x10(%ebp),%eax
 8403fc2:	89 44 24 08          	mov    %eax,0x8(%esp)
 8403fc6:	8b 45 0c             	mov    0xc(%ebp),%eax
 8403fc9:	89 44 24 04          	mov    %eax,0x4(%esp)
 8403fcd:	8b 45 08             	mov    0x8(%ebp),%eax
 8403fd0:	89 04 24             	mov    %eax,(%esp)
 8403fd3:	e8 08 45 00 00       	call   84084e0 <_ZN10DB_LoadEtc16LoadCharacOptionEiiP12SIG_LOAD_ETC>
 8403fd8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8403fdb:	89 44 24 04          	mov    %eax,0x4(%esp)
 8403fdf:	8b 45 08             	mov    0x8(%ebp),%eax
 8403fe2:	89 04 24             	mov    %eax,(%esp)
 8403fe5:	e8 b4 2d 04 00       	call   8446d9e <_ZN10DB_LoadEtc15LoadBoosterGageEP12SIG_LOAD_ETC>
 8403fea:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8403fed:	89 44 24 04          	mov    %eax,0x4(%esp)
 8403ff1:	8b 45 08             	mov    0x8(%ebp),%eax
 8403ff4:	89 04 24             	mov    %eax,(%esp)
 8403ff7:	e8 b2 26 00 00       	call   84066ae <_ZN10DB_LoadEtc22LoadPcRoomPlayTimeInfoEP12SIG_LOAD_ETC>
 8403ffc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8403fff:	89 44 24 04          	mov    %eax,0x4(%esp)
 8404003:	8b 45 08             	mov    0x8(%ebp),%eax
 8404006:	89 04 24             	mov    %eax,(%esp)
 8404009:	e8 02 28 00 00       	call   8406810 <_ZN10DB_LoadEtc23LoadUsedGiftFatigueInfoEP12SIG_LOAD_ETC>
 840400e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8404011:	8b 00                	mov    (%eax),%eax
 8404013:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8404016:	81 c2 99 4a 01 00    	add    $0x14a99,%edx
 840401c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8404020:	89 54 24 04          	mov    %edx,0x4(%esp)
 8404024:	8b 45 08             	mov    0x8(%ebp),%eax
 8404027:	89 04 24             	mov    %eax,(%esp)
 840402a:	e8 15 49 04 00       	call   8448944 <_ZN10DB_LoadEtc18LoadAttendanceInfoEP20SIG_ATTENDANCE_EVENTj>
 840402f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8404032:	89 44 24 04          	mov    %eax,0x4(%esp)
 8404036:	8b 45 08             	mov    0x8(%ebp),%eax
 8404039:	89 04 24             	mov    %eax,(%esp)
 840403c:	e8 71 63 04 00       	call   844a3b2 <_ZN10DB_LoadEtc18LoadComboSkillInfoEP12SIG_LOAD_ETC>
 8404041:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8404044:	89 44 24 04          	mov    %eax,0x4(%esp)
 8404048:	8b 45 08             	mov    0x8(%ebp),%eax
 840404b:	89 04 24             	mov    %eax,(%esp)
 840404e:	e8 b7 61 04 00       	call   844a20a <_ZN10DB_LoadEtc20LoadSeriaRoomAniDecoEP12SIG_LOAD_ETC>
 8404053:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8404056:	89 44 24 0c          	mov    %eax,0xc(%esp)
 840405a:	8b 45 10             	mov    0x10(%ebp),%eax
 840405d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8404061:	8b 45 0c             	mov    0xc(%ebp),%eax
 8404064:	89 44 24 04          	mov    %eax,0x4(%esp)
 8404068:	8b 45 08             	mov    0x8(%ebp),%eax
 840406b:	89 04 24             	mov    %eax,(%esp)
 840406e:	e8 f3 46 00 00       	call   8408766 <_ZN10DB_LoadEtc10SendResultEiiP12SIG_LOAD_ETC>
 8404073:	88 45 f3             	mov    %al,-0xd(%ebp)
 8404076:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 840407a:	83 f0 01             	xor    $0x1,%eax
 840407d:	84 c0                	test   %al,%al
 840407f:	74 07                	je     8404088 <_ZN10DB_LoadEtc8dispatchEiiP6Stream+0x49a>
 8404081:	b8 00 00 00 00       	mov    $0x0,%eax
 8404086:	eb 24                	jmp    84040ac <_ZN10DB_LoadEtc8dispatchEiiP6Stream+0x4be>
 8404088:	8b 45 f4             	mov    -0xc(%ebp),%eax
 840408b:	8b 50 04             	mov    0x4(%eax),%edx
 840408e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8404091:	8b 00                	mov    (%eax),%eax
 8404093:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840409a:	00 
 840409b:	89 54 24 04          	mov    %edx,0x4(%esp)
 840409f:	89 04 24             	mov    %eax,(%esp)
 84040a2:	e8 d4 5b ff ff       	call   83f9c7b <_ZN8WongWork11EventCommon19LoadCharacEventItemEjjj>
 84040a7:	b8 01 00 00 00       	mov    $0x1,%eax
 84040ac:	83 c4 40             	add    $0x40,%esp
 84040af:	5b                   	pop    %ebx
 84040b0:	5e                   	pop    %esi
 84040b1:	5d                   	pop    %ebp
 84040b2:	c3                   	ret
 84040b3:	90                   	nop

```

```c
// DB_LoadEtc::dispatch @ 0x8403bee

/* DB_LoadEtc::dispatch(int, int, Stream*) */

undefined4 __thiscall DB_LoadEtc::dispatch(DB_LoadEtc *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  DB_CreateCharac local_28 [4];
  cMyTrace local_24 [19];
  char local_11;
  SIG_LOAD_ETC *local_10;
  
  cVar1 = DBDispatcher::dispatch((int)this,param_1,(Stream *)param_2);
  if (cVar1 == '\x01') {
    local_10 = Stream::GetOutBuffer<SIG_LOAD_ETC>(param_3);
    if (local_10 == (SIG_LOAD_ETC *)0x0) {
      uVar2 = 0;
    }
    else {
      GetUserRecord((SIG_LOAD_ETC *)this);
      iVar3 = GetUserPvp(this,local_10);
      if (iVar3 == 0) {
        iVar3 = GetUserPvpBase((SIG_LOAD_ETC *)this);
        if (iVar3 == -1) {
          PvpResultType::Clear((PvpResultType *)(local_10 + 0x340));
        }
        else if (iVar3 == 1) {
          *(undefined4 *)(local_10 + 0x350) = 0xffffffff;
        }
      }
      else if (iVar3 == 1) {
        DB_CreateCharac::DB_CreateCharac(local_28);
                    /* try { // try from 08403c97 to 08403c9b has its CatchHandler @ 08403c9e */
        DB_CreateCharac::CreatePvP(local_28,*(uint *)(local_10 + 4));
        DB_CreateCharac::~DB_CreateCharac(local_28);
      }
      else if (iVar3 == -1) {
        PvpResultType::Clear((PvpResultType *)(local_10 + 0x340));
      }
      cVar1 = LoadCharacItemStat(this,local_10);
      if (cVar1 == '\x01') {
        cVar1 = LoadLitmitItem((SIG_LOAD_ETC *)this);
        if (cVar1 == '\x01') {
          cVar1 = GetUserSkill(this,local_10);
          if (cVar1 != '\x01') {
            LogManager::logFormat
                      (1,"DBThread.cpp","virtual bool DB_LoadEtc::dispatch(int, int, Stream*)",
                       0x14e3,"DB_LoadETC ERROR : GetUserSkill Fail");
            *(undefined4 *)(local_10 + 8) = 1;
          }
          piVar4 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x71);
          cVar1 = (**(code **)(*piVar4 + 0x34))(piVar4,0);
          if (cVar1 != '\0') {
            LoadConditionEventInfo(this,local_10);
          }
          LoadProperDungeonClearCount(this,local_10);
          LoadRedeemItem(this,local_10);
          LoadPvPMissionList(this,local_10);
          LoadTODUserState(this,local_10);
          LoadVillageAttackInfo(this,local_10);
          LoadAccountFirstLogin(this,local_10,0x191);
          LoadAccountFirstLogin(this,local_10,0x192);
          LoadAccountFirstLoginDaily(this,local_10,0x19c);
          LoadFairPvPScore(this,local_10);
          cVar1 = LoadItemMakingSkill(this,local_10);
          if (cVar1 == '\x01') {
            LoadQuestShop(this,local_10);
            LoadTitleBook(this,local_10);
            LoadAchievement(this,local_10);
            LoadOnceGiveAvengerTitle(this,local_10);
            LoadAuraAvatarOption(this,local_10);
            LoadCharacOption((int)this,param_1,(SIG_LOAD_ETC *)param_2);
            LoadBoosterGage(this,local_10);
            LoadPcRoomPlayTimeInfo(this,local_10);
            LoadUsedGiftFatigueInfo(this,local_10);
            LoadAttendanceInfo(this,(SIG_ATTENDANCE_EVENT *)(local_10 + 0x14a99),*(uint *)local_10);
            LoadComboSkillInfo(this,local_10);
            LoadSeriaRoomAniDeco(this,local_10);
            local_11 = SendResult(this,param_1,param_2,local_10);
            if (local_11 == '\x01') {
              WongWork::EventCommon::LoadCharacEventItem
                        (*(uint *)local_10,*(uint *)(local_10 + 4),0);
              uVar2 = 1;
            }
            else {
              uVar2 = 0;
            }
          }
          else {
            LogManager::logFormat
                      (1,"DBThread.cpp","virtual bool DB_LoadEtc::dispatch(int, int, Stream*)",
                       0x1566,"DB_LoadETC ERROR : LoadItemMakingSkill Fail");
            uVar2 = 0;
          }
        }
        else {
          uVar2 = *(undefined4 *)(local_10 + 4);
          cMyTrace::cMyTrace(local_24,"virtual bool DB_LoadEtc::dispatch(int, int, Stream*)",0x14db,
                             0);
          cMyTrace::operator()(local_24,"LoadLimitItem middle fetch <charac:%d>",uVar2);
          uVar2 = 0;
        }
      }
      else {
        LogManager::logFormat
                  (1,"DBThread.cpp","virtual bool DB_LoadEtc::dispatch(int, int, Stream*)",0x14c6,
                   "DB_LoadETC ERROR : LoadCharacItemStat Fail");
        uVar2 = 0;
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## getComboSkill

```asm
// === 0844a704 DB_LoadEtc::getComboSkill  [0x0844a704-0x844a8e9] ===
 844a704:	55                   	push   %ebp
 844a705:	89 e5                	mov    %esp,%ebp
 844a707:	83 ec 58             	sub    $0x58,%esp
 844a70a:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 844a70e:	74 06                	je     844a716 <_ZN10DB_LoadEtc13getComboSkillEP5MySQLjiP15comoboSkillData+0x12>
 844a710:	83 7d 18 00          	cmpl   $0x0,0x18(%ebp)
 844a714:	75 0a                	jne    844a720 <_ZN10DB_LoadEtc13getComboSkillEP5MySQLjiP15comoboSkillData+0x1c>
 844a716:	b8 00 00 00 00       	mov    $0x0,%eax
 844a71b:	e9 c7 01 00 00       	jmp    844a8e7 <_ZN10DB_LoadEtc13getComboSkillEP5MySQLjiP15comoboSkillData+0x1e3>
 844a720:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 844a727:	e9 94 01 00 00       	jmp    844a8c0 <_ZN10DB_LoadEtc13getComboSkillEP5MySQLjiP15comoboSkillData+0x1bc>
 844a72c:	8b 45 0c             	mov    0xc(%ebp),%eax
 844a72f:	89 04 24             	mov    %eax,(%esp)
 844a732:	e8 85 9d fa ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 844a737:	83 f0 01             	xor    $0x1,%eax
 844a73a:	84 c0                	test   %al,%al
 844a73c:	74 47                	je     844a785 <_ZN10DB_LoadEtc13getComboSkillEP5MySQLjiP15comoboSkillData+0x81>
 844a73e:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 844a745:	00 
 844a746:	c7 44 24 08 01 bb 00 	movl   $0xbb01,0x8(%esp)
 844a74d:	00 
 844a74e:	c7 44 24 04 c0 ad c5 	movl   $0x8c5adc0,0x4(%esp)
 844a755:	08 
 844a756:	8d 45 bc             	lea    -0x44(%ebp),%eax
 844a759:	89 04 24             	mov    %eax,(%esp)
 844a75c:	e8 b7 4f 10 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 844a761:	8b 45 10             	mov    0x10(%ebp),%eax
 844a764:	89 44 24 08          	mov    %eax,0x8(%esp)
 844a768:	c7 44 24 04 60 91 c5 	movl   $0x8c59160,0x4(%esp)
 844a76f:	08 
 844a770:	8d 45 bc             	lea    -0x44(%ebp),%eax
 844a773:	89 04 24             	mov    %eax,(%esp)
 844a776:	e8 0d 50 10 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 844a77b:	b8 00 00 00 00       	mov    $0x0,%eax
 844a780:	e9 62 01 00 00       	jmp    844a8e7 <_ZN10DB_LoadEtc13getComboSkillEP5MySQLjiP15comoboSkillData+0x1e3>
 844a785:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 844a78c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 844a78f:	01 c0                	add    %eax,%eax
 844a791:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 844a798:	89 d1                	mov    %edx,%ecx
 844a79a:	29 c1                	sub    %eax,%ecx
 844a79c:	89 c8                	mov    %ecx,%eax
 844a79e:	03 45 18             	add    0x18(%ebp),%eax
 844a7a1:	89 c2                	mov    %eax,%edx
 844a7a3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 844a7a6:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 844a7aa:	89 54 24 08          	mov    %edx,0x8(%esp)
 844a7ae:	89 44 24 04          	mov    %eax,0x4(%esp)
 844a7b2:	8b 45 0c             	mov    0xc(%ebp),%eax
 844a7b5:	89 04 24             	mov    %eax,(%esp)
 844a7b8:	e8 2f 36 cb ff       	call   80fddec <_ZN5MySQL9get_shortEiRs>
 844a7bd:	83 f0 01             	xor    $0x1,%eax
 844a7c0:	84 c0                	test   %al,%al
 844a7c2:	74 4e                	je     844a812 <_ZN10DB_LoadEtc13getComboSkillEP5MySQLjiP15comoboSkillData+0x10e>
 844a7c4:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 844a7cb:	00 
 844a7cc:	c7 44 24 08 0a bb 00 	movl   $0xbb0a,0x8(%esp)
 844a7d3:	00 
 844a7d4:	c7 44 24 04 c0 ad c5 	movl   $0x8c5adc0,0x4(%esp)
 844a7db:	08 
 844a7dc:	8d 45 cc             	lea    -0x34(%ebp),%eax
 844a7df:	89 04 24             	mov    %eax,(%esp)
 844a7e2:	e8 31 4f 10 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 844a7e7:	8b 45 10             	mov    0x10(%ebp),%eax
 844a7ea:	89 44 24 0c          	mov    %eax,0xc(%esp)
 844a7ee:	8b 45 f0             	mov    -0x10(%ebp),%eax
 844a7f1:	89 44 24 08          	mov    %eax,0x8(%esp)
 844a7f5:	c7 44 24 04 9c 91 c5 	movl   $0x8c5919c,0x4(%esp)
 844a7fc:	08 
 844a7fd:	8d 45 cc             	lea    -0x34(%ebp),%eax
 844a800:	89 04 24             	mov    %eax,(%esp)
 844a803:	e8 80 4f 10 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 844a808:	b8 00 00 00 00       	mov    $0x0,%eax
 844a80d:	e9 d5 00 00 00       	jmp    844a8e7 <_ZN10DB_LoadEtc13getComboSkillEP5MySQLjiP15comoboSkillData+0x1e3>
 844a812:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 844a819:	e9 8f 00 00 00       	jmp    844a8ad <_ZN10DB_LoadEtc13getComboSkillEP5MySQLjiP15comoboSkillData+0x1a9>
 844a81e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 844a821:	01 c0                	add    %eax,%eax
 844a823:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 844a82a:	89 d1                	mov    %edx,%ecx
 844a82c:	29 c1                	sub    %eax,%ecx
 844a82e:	89 c8                	mov    %ecx,%eax
 844a830:	03 45 18             	add    0x18(%ebp),%eax
 844a833:	8b 55 f4             	mov    -0xc(%ebp),%edx
 844a836:	01 d2                	add    %edx,%edx
 844a838:	01 d0                	add    %edx,%eax
 844a83a:	8d 50 02             	lea    0x2(%eax),%edx
 844a83d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 844a840:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 844a844:	89 54 24 08          	mov    %edx,0x8(%esp)
 844a848:	89 44 24 04          	mov    %eax,0x4(%esp)
 844a84c:	8b 45 0c             	mov    0xc(%ebp),%eax
 844a84f:	89 04 24             	mov    %eax,(%esp)
 844a852:	e8 95 35 cb ff       	call   80fddec <_ZN5MySQL9get_shortEiRs>
 844a857:	83 f0 01             	xor    $0x1,%eax
 844a85a:	84 c0                	test   %al,%al
 844a85c:	74 4b                	je     844a8a9 <_ZN10DB_LoadEtc13getComboSkillEP5MySQLjiP15comoboSkillData+0x1a5>
 844a85e:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 844a865:	00 
 844a866:	c7 44 24 08 14 bb 00 	movl   $0xbb14,0x8(%esp)
 844a86d:	00 
 844a86e:	c7 44 24 04 c0 ad c5 	movl   $0x8c5adc0,0x4(%esp)
 844a875:	08 
 844a876:	8d 45 dc             	lea    -0x24(%ebp),%eax
 844a879:	89 04 24             	mov    %eax,(%esp)
 844a87c:	e8 97 4e 10 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 844a881:	8b 45 10             	mov    0x10(%ebp),%eax
 844a884:	89 44 24 0c          	mov    %eax,0xc(%esp)
 844a888:	8b 45 f0             	mov    -0x10(%ebp),%eax
 844a88b:	89 44 24 08          	mov    %eax,0x8(%esp)
 844a88f:	c7 44 24 04 9c 91 c5 	movl   $0x8c5919c,0x4(%esp)
 844a896:	08 
 844a897:	8d 45 dc             	lea    -0x24(%ebp),%eax
 844a89a:	89 04 24             	mov    %eax,(%esp)
 844a89d:	e8 e6 4e 10 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 844a8a2:	b8 00 00 00 00       	mov    $0x0,%eax
 844a8a7:	eb 3e                	jmp    844a8e7 <_ZN10DB_LoadEtc13getComboSkillEP5MySQLjiP15comoboSkillData+0x1e3>
 844a8a9:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 844a8ad:	83 7d f4 05          	cmpl   $0x5,-0xc(%ebp)
 844a8b1:	0f 9e c0             	setle  %al
 844a8b4:	84 c0                	test   %al,%al
 844a8b6:	0f 85 62 ff ff ff    	jne    844a81e <_ZN10DB_LoadEtc13getComboSkillEP5MySQLjiP15comoboSkillData+0x11a>
 844a8bc:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 844a8c0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 844a8c3:	3b 45 14             	cmp    0x14(%ebp),%eax
 844a8c6:	7d 0d                	jge    844a8d5 <_ZN10DB_LoadEtc13getComboSkillEP5MySQLjiP15comoboSkillData+0x1d1>
 844a8c8:	83 7d ec 05          	cmpl   $0x5,-0x14(%ebp)
 844a8cc:	7f 07                	jg     844a8d5 <_ZN10DB_LoadEtc13getComboSkillEP5MySQLjiP15comoboSkillData+0x1d1>
 844a8ce:	b8 01 00 00 00       	mov    $0x1,%eax
 844a8d3:	eb 05                	jmp    844a8da <_ZN10DB_LoadEtc13getComboSkillEP5MySQLjiP15comoboSkillData+0x1d6>
 844a8d5:	b8 00 00 00 00       	mov    $0x0,%eax
 844a8da:	84 c0                	test   %al,%al
 844a8dc:	0f 85 4a fe ff ff    	jne    844a72c <_ZN10DB_LoadEtc13getComboSkillEP5MySQLjiP15comoboSkillData+0x28>
 844a8e2:	b8 01 00 00 00       	mov    $0x1,%eax
 844a8e7:	c9                   	leave
 844a8e8:	c3                   	ret
 844a8e9:	90                   	nop

```

```c
// DB_LoadEtc::getComboSkill @ 0x844a704

/* DB_LoadEtc::getComboSkill(MySQL*, unsigned int, int, comoboSkillData*) */

undefined4 __thiscall
DB_LoadEtc::getComboSkill
          (DB_LoadEtc *this,MySQL *param_1,uint param_2,int param_3,comoboSkillData *param_4)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  cMyTrace local_48 [16];
  cMyTrace local_38 [16];
  cMyTrace local_28 [16];
  int local_18;
  int local_14;
  int local_10;
  
  if ((param_1 != (MySQL *)0x0) && (param_4 != (comoboSkillData *)0x0)) {
    local_18 = 0;
    while( true ) {
      if ((local_18 < param_3) && (local_18 < 6)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (!bVar1) {
        return 1;
      }
      cVar3 = MySQL::fetch(param_1);
      if (cVar3 != '\x01') {
        cMyTrace::cMyTrace(local_48,
                           "bool DB_LoadEtc::getComboSkill(MySQL*, unsigned int, int, comoboSkillData*)"
                           ,0xbb01,5);
        cMyTrace::operator()
                  (local_48,"DB_LoadEtc::getComboSkill fetch, exec() ERROR charac_no=%u",param_2);
        return 0;
      }
      local_14 = 1;
      cVar3 = MySQL::get_short(param_1,0,(short *)(param_4 + local_18 * 0xe));
      if (cVar3 != '\x01') break;
      for (local_10 = 0; iVar2 = local_14, local_10 < 6; local_10 = local_10 + 1) {
        local_14 = local_14 + 1;
        cVar3 = MySQL::get_short(param_1,iVar2,
                                 (short *)(param_4 + local_10 * 2 + local_18 * 0xe + 2));
        if (cVar3 != '\x01') {
          cMyTrace::cMyTrace(local_28,
                             "bool DB_LoadEtc::getComboSkill(MySQL*, unsigned int, int, comoboSkillData*)"
                             ,0xbb14,5);
          cMyTrace::operator()
                    (local_28,"DB_LoadEtc::getComboSkill get(%d) ERROR charac_no=%u",local_14,
                     param_2);
          return 0;
        }
      }
      local_18 = local_18 + 1;
    }
    cMyTrace::cMyTrace(local_38,
                       "bool DB_LoadEtc::getComboSkill(MySQL*, unsigned int, int, comoboSkillData*)"
                       ,0xbb0a,5);
    cMyTrace::operator()
              (local_38,"DB_LoadEtc::getComboSkill get(%d) ERROR charac_no=%u",local_14,param_2);
  }
  return 0;
}

```

---

## ~DB_LoadEtc

```asm
// === 08403ba0 DB_LoadEtc::~DB_LoadEtc  [0x08403ba0-0x8403bcf] ===
 8403ba0:	55                   	push   %ebp
 8403ba1:	89 e5                	mov    %esp,%ebp
 8403ba3:	83 ec 18             	sub    $0x18,%esp
 8403ba6:	8b 45 08             	mov    0x8(%ebp),%eax
 8403ba9:	c7 00 00 fc c5 08    	movl   $0x8c5fc00,(%eax)
 8403baf:	8b 45 08             	mov    0x8(%ebp),%eax
 8403bb2:	89 04 24             	mov    %eax,(%esp)
 8403bb5:	e8 be e7 cd ff       	call   80e2378 <_ZN12DBDispatcherD1Ev>
 8403bba:	b8 00 00 00 00       	mov    $0x0,%eax
 8403bbf:	84 c0                	test   %al,%al
 8403bc1:	74 0b                	je     8403bce <_ZN10DB_LoadEtcD1Ev+0x2e>
 8403bc3:	8b 45 08             	mov    0x8(%ebp),%eax
 8403bc6:	89 04 24             	mov    %eax,(%esp)
 8403bc9:	e8 22 09 32 00       	call   87244f0 <_ZdlPv>
 8403bce:	c9                   	leave
 8403bcf:	c3                   	ret

```

```c
// DB_LoadEtc::~DB_LoadEtc @ 0x8403ba0

/* WARNING: Removing unreachable block (ram,0x08403bc3) */
/* DB_LoadEtc::~DB_LoadEtc() */

void __thiscall DB_LoadEtc::~DB_LoadEtc(DB_LoadEtc *this)

{
  *(undefined ***)this = &PTR_dispatch_08c5fc00;
  DBDispatcher::~DBDispatcher((DBDispatcher *)this);
  return;
}

```

---

## ~DB_LoadEtc_08403bd0

```asm
// === 08403bd0 DB_LoadEtc::~DB_LoadEtc  [0x08403bd0-0x8403bed] ===
 8403bd0:	55                   	push   %ebp
 8403bd1:	89 e5                	mov    %esp,%ebp
 8403bd3:	83 ec 18             	sub    $0x18,%esp
 8403bd6:	8b 45 08             	mov    0x8(%ebp),%eax
 8403bd9:	89 04 24             	mov    %eax,(%esp)
 8403bdc:	e8 bf ff ff ff       	call   8403ba0 <_ZN10DB_LoadEtcD1Ev>
 8403be1:	8b 45 08             	mov    0x8(%ebp),%eax
 8403be4:	89 04 24             	mov    %eax,(%esp)
 8403be7:	e8 04 09 32 00       	call   87244f0 <_ZdlPv>
 8403bec:	c9                   	leave
 8403bed:	c3                   	ret

```

```c
// DB_LoadEtc::~DB_LoadEtc @ 0x8403bd0

/* DB_LoadEtc::~DB_LoadEtc() */

void __thiscall DB_LoadEtc::~DB_LoadEtc(DB_LoadEtc *this)

{
  ~DB_LoadEtc(this);
  operator_delete(this);
  return;
}

```

