# DB_UpdateQuest

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## DB_UpdateQuest

```asm
// === 08418b74 DB_UpdateQuest::DB_UpdateQuest  [0x08418b74-0x8418b8f] ===
 8418b74:	55                   	push   %ebp
 8418b75:	89 e5                	mov    %esp,%ebp
 8418b77:	83 ec 18             	sub    $0x18,%esp
 8418b7a:	8b 45 08             	mov    0x8(%ebp),%eax
 8418b7d:	89 04 24             	mov    %eax,(%esp)
 8418b80:	e8 21 4c 03 00       	call   844d7a6 <_ZN12DBDispatcherC1Ev>
 8418b85:	8b 45 08             	mov    0x8(%ebp),%eax
 8418b88:	c7 00 90 f9 c5 08    	movl   $0x8c5f990,(%eax)
 8418b8e:	c9                   	leave
 8418b8f:	c3                   	ret

```

```c
// DB_UpdateQuest::DB_UpdateQuest @ 0x8418b74

/* DB_UpdateQuest::DB_UpdateQuest() */

void __thiscall DB_UpdateQuest::DB_UpdateQuest(DB_UpdateQuest *this)

{
  DBDispatcher::DBDispatcher((DBDispatcher *)this);
  *(undefined ***)this = &PTR_dispatch_08c5f990;
  return;
}

```

---

## _updateQuests

```asm
// === 08418c1c DB_UpdateQuest::_updateQuests  [0x08418c1c-0x8419571] ===
 8418c1c:	55                   	push   %ebp
 8418c1d:	89 e5                	mov    %esp,%ebp
 8418c1f:	57                   	push   %edi
 8418c20:	56                   	push   %esi
 8418c21:	53                   	push   %ebx
 8418c22:	81 ec dc 8e 00 00    	sub    $0x8edc,%esp
 8418c28:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8418c2d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8418c34:	00 
 8418c35:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8418c3c:	00 
 8418c3d:	89 04 24             	mov    %eax,(%esp)
 8418c40:	e8 f9 c5 fd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8418c45:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8418c48:	c7 45 e0 30 75 00 00 	movl   $0x7530,-0x20(%ebp)
 8418c4f:	8d 85 2c 73 ff ff    	lea    -0x8cd4(%ebp),%eax
 8418c55:	ba ac 8c 00 00       	mov    $0x8cac,%edx
 8418c5a:	89 54 24 08          	mov    %edx,0x8(%esp)
 8418c5e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8418c65:	00 
 8418c66:	89 04 24             	mov    %eax,(%esp)
 8418c69:	e8 52 50 c6 ff       	call   807dcc0 <memset@plt>
 8418c6e:	c7 45 d8 ac 8c 00 00 	movl   $0x8cac,-0x28(%ebp)
 8418c75:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8418c78:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8418c7b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8418c7e:	05 a4 00 00 00       	add    $0xa4,%eax
 8418c83:	c7 44 24 0c 30 75 00 	movl   $0x7530,0xc(%esp)
 8418c8a:	00 
 8418c8b:	89 44 24 08          	mov    %eax,0x8(%esp)
 8418c8f:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8418c92:	89 44 24 04          	mov    %eax,0x4(%esp)
 8418c96:	8d 85 2c 73 ff ff    	lea    -0x8cd4(%ebp),%eax
 8418c9c:	89 04 24             	mov    %eax,(%esp)
 8418c9f:	e8 7b 93 29 00       	call   86b201f <_Z12compress_zipPcRjPKcj>
 8418ca4:	83 f0 01             	xor    $0x1,%eax
 8418ca7:	84 c0                	test   %al,%al
 8418ca9:	74 3f                	je     8418cea <_ZN14DB_UpdateQuest13_updateQuestsEP16SIG_UPDATE_QUEST+0xce>
 8418cab:	8b 45 0c             	mov    0xc(%ebp),%eax
 8418cae:	8b 00                	mov    (%eax),%eax
 8418cb0:	89 44 24 14          	mov    %eax,0x14(%esp)
 8418cb4:	c7 44 24 10 8c a1 c4 	movl   $0x8c4a18c,0x10(%esp)
 8418cbb:	08 
 8418cbc:	c7 44 24 0c 5e 4a 00 	movl   $0x4a5e,0xc(%esp)
 8418cc3:	00 
 8418cc4:	c7 44 24 08 a0 cc c5 	movl   $0x8c5cca0,0x8(%esp)
 8418ccb:	08 
 8418ccc:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8418cd3:	08 
 8418cd4:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8418cdb:	e8 2a af 6b 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8418ce0:	b8 00 00 00 00       	mov    $0x0,%eax
 8418ce5:	e9 7d 08 00 00       	jmp    8419567 <_ZN14DB_UpdateQuest13_updateQuestsEP16SIG_UPDATE_QUEST+0x94b>
 8418cea:	8b 45 0c             	mov    0xc(%ebp),%eax
 8418ced:	0f b6 80 d4 75 00 00 	movzbl 0x75d4(%eax),%eax
 8418cf4:	84 c0                	test   %al,%al
 8418cf6:	0f 84 36 04 00 00    	je     8419132 <_ZN14DB_UpdateQuest13_updateQuestsEP16SIG_UPDATE_QUEST+0x516>
 8418cfc:	8b 45 0c             	mov    0xc(%ebp),%eax
 8418cff:	8b 00                	mov    (%eax),%eax
 8418d01:	89 85 f4 71 ff ff    	mov    %eax,-0x8e0c(%ebp)
 8418d07:	8b 45 0c             	mov    0xc(%ebp),%eax
 8418d0a:	05 d9 75 00 00       	add    $0x75d9,%eax
 8418d0f:	c7 44 24 0c 28 00 00 	movl   $0x28,0xc(%esp)
 8418d16:	00 
 8418d17:	89 44 24 08          	mov    %eax,0x8(%esp)
 8418d1b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8418d22:	00 
 8418d23:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8418d26:	89 04 24             	mov    %eax,(%esp)
 8418d29:	e8 fc b7 fd ff       	call   83f452a <_ZN5MySQL11blob_to_strEiPvi>
 8418d2e:	89 85 f8 71 ff ff    	mov    %eax,-0x8e08(%ebp)
 8418d34:	8b 45 0c             	mov    0xc(%ebp),%eax
 8418d37:	8b 80 d5 75 00 00    	mov    0x75d5(%eax),%eax
 8418d3d:	89 85 fc 71 ff ff    	mov    %eax,-0x8e04(%ebp)
 8418d43:	8b 45 0c             	mov    0xc(%ebp),%eax
 8418d46:	8b 80 a0 00 00 00    	mov    0xa0(%eax),%eax
 8418d4c:	89 85 00 72 ff ff    	mov    %eax,-0x8e00(%ebp)
 8418d52:	8b 45 0c             	mov    0xc(%ebp),%eax
 8418d55:	8b 40 50             	mov    0x50(%eax),%eax
 8418d58:	89 85 04 72 ff ff    	mov    %eax,-0x8dfc(%ebp)
 8418d5e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8418d61:	8b 80 9c 00 00 00    	mov    0x9c(%eax),%eax
 8418d67:	89 85 08 72 ff ff    	mov    %eax,-0x8df8(%ebp)
 8418d6d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8418d70:	8b 40 4c             	mov    0x4c(%eax),%eax
 8418d73:	89 85 0c 72 ff ff    	mov    %eax,-0x8df4(%ebp)
 8418d79:	8b 45 0c             	mov    0xc(%ebp),%eax
 8418d7c:	8b 80 98 00 00 00    	mov    0x98(%eax),%eax
 8418d82:	89 85 10 72 ff ff    	mov    %eax,-0x8df0(%ebp)
 8418d88:	8b 45 0c             	mov    0xc(%ebp),%eax
 8418d8b:	8b 40 48             	mov    0x48(%eax),%eax
 8418d8e:	89 85 14 72 ff ff    	mov    %eax,-0x8dec(%ebp)
 8418d94:	8b 45 0c             	mov    0xc(%ebp),%eax
 8418d97:	8b 80 94 00 00 00    	mov    0x94(%eax),%eax
 8418d9d:	89 85 18 72 ff ff    	mov    %eax,-0x8de8(%ebp)
 8418da3:	8b 45 0c             	mov    0xc(%ebp),%eax
 8418da6:	8b 40 44             	mov    0x44(%eax),%eax
 8418da9:	89 85 1c 72 ff ff    	mov    %eax,-0x8de4(%ebp)
 8418daf:	8b 45 0c             	mov    0xc(%ebp),%eax
 8418db2:	8b 80 90 00 00 00    	mov    0x90(%eax),%eax
 8418db8:	89 85 20 72 ff ff    	mov    %eax,-0x8de0(%ebp)
 8418dbe:	8b 45 0c             	mov    0xc(%ebp),%eax
 8418dc1:	8b 40 40             	mov    0x40(%eax),%eax
 8418dc4:	89 85 24 72 ff ff    	mov    %eax,-0x8ddc(%ebp)
 8418dca:	8b 45 0c             	mov    0xc(%ebp),%eax
 8418dcd:	8b 80 8c 00 00 00    	mov    0x8c(%eax),%eax
 8418dd3:	89 85 28 72 ff ff    	mov    %eax,-0x8dd8(%ebp)
 8418dd9:	8b 45 0c             	mov    0xc(%ebp),%eax
 8418ddc:	8b 40 3c             	mov    0x3c(%eax),%eax
 8418ddf:	89 85 2c 72 ff ff    	mov    %eax,-0x8dd4(%ebp)
 8418de5:	8b 45 0c             	mov    0xc(%ebp),%eax
 8418de8:	8b 80 88 00 00 00    	mov    0x88(%eax),%eax
 8418dee:	89 85 30 72 ff ff    	mov    %eax,-0x8dd0(%ebp)
 8418df4:	8b 45 0c             	mov    0xc(%ebp),%eax
 8418df7:	8b 40 38             	mov    0x38(%eax),%eax
 8418dfa:	89 85 34 72 ff ff    	mov    %eax,-0x8dcc(%ebp)
 8418e00:	8b 45 0c             	mov    0xc(%ebp),%eax
 8418e03:	8b 80 84 00 00 00    	mov    0x84(%eax),%eax
 8418e09:	89 85 38 72 ff ff    	mov    %eax,-0x8dc8(%ebp)
 8418e0f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8418e12:	8b 40 34             	mov    0x34(%eax),%eax
 8418e15:	89 85 3c 72 ff ff    	mov    %eax,-0x8dc4(%ebp)
 8418e1b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8418e1e:	8b 80 80 00 00 00    	mov    0x80(%eax),%eax
 8418e24:	89 85 40 72 ff ff    	mov    %eax,-0x8dc0(%ebp)
 8418e2a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8418e2d:	8b 40 30             	mov    0x30(%eax),%eax
 8418e30:	89 85 44 72 ff ff    	mov    %eax,-0x8dbc(%ebp)
 8418e36:	8b 45 0c             	mov    0xc(%ebp),%eax
 8418e39:	8b 40 7c             	mov    0x7c(%eax),%eax
 8418e3c:	89 85 48 72 ff ff    	mov    %eax,-0x8db8(%ebp)
 8418e42:	8b 45 0c             	mov    0xc(%ebp),%eax
 8418e45:	8b 40 2c             	mov    0x2c(%eax),%eax
 8418e48:	89 85 4c 72 ff ff    	mov    %eax,-0x8db4(%ebp)
 8418e4e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8418e51:	8b 40 78             	mov    0x78(%eax),%eax
 8418e54:	89 85 50 72 ff ff    	mov    %eax,-0x8db0(%ebp)
 8418e5a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8418e5d:	8b 40 28             	mov    0x28(%eax),%eax
 8418e60:	89 85 54 72 ff ff    	mov    %eax,-0x8dac(%ebp)
 8418e66:	8b 45 0c             	mov    0xc(%ebp),%eax
 8418e69:	8b 40 74             	mov    0x74(%eax),%eax
 8418e6c:	89 85 58 72 ff ff    	mov    %eax,-0x8da8(%ebp)
 8418e72:	8b 45 0c             	mov    0xc(%ebp),%eax
 8418e75:	8b 40 24             	mov    0x24(%eax),%eax
 8418e78:	89 85 5c 72 ff ff    	mov    %eax,-0x8da4(%ebp)
 8418e7e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8418e81:	8b 40 70             	mov    0x70(%eax),%eax
 8418e84:	89 85 60 72 ff ff    	mov    %eax,-0x8da0(%ebp)
 8418e8a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8418e8d:	8b 40 20             	mov    0x20(%eax),%eax
 8418e90:	89 85 64 72 ff ff    	mov    %eax,-0x8d9c(%ebp)
 8418e96:	8b 45 0c             	mov    0xc(%ebp),%eax
 8418e99:	8b 40 6c             	mov    0x6c(%eax),%eax
 8418e9c:	89 85 68 72 ff ff    	mov    %eax,-0x8d98(%ebp)
 8418ea2:	8b 45 0c             	mov    0xc(%ebp),%eax
 8418ea5:	8b 40 1c             	mov    0x1c(%eax),%eax
 8418ea8:	89 85 6c 72 ff ff    	mov    %eax,-0x8d94(%ebp)
 8418eae:	8b 45 0c             	mov    0xc(%ebp),%eax
 8418eb1:	8b 40 68             	mov    0x68(%eax),%eax
 8418eb4:	89 85 70 72 ff ff    	mov    %eax,-0x8d90(%ebp)
 8418eba:	8b 45 0c             	mov    0xc(%ebp),%eax
 8418ebd:	8b 40 18             	mov    0x18(%eax),%eax
 8418ec0:	89 85 74 72 ff ff    	mov    %eax,-0x8d8c(%ebp)
 8418ec6:	8b 45 0c             	mov    0xc(%ebp),%eax
 8418ec9:	8b 40 64             	mov    0x64(%eax),%eax
 8418ecc:	89 85 78 72 ff ff    	mov    %eax,-0x8d88(%ebp)
 8418ed2:	8b 45 0c             	mov    0xc(%ebp),%eax
 8418ed5:	8b 40 14             	mov    0x14(%eax),%eax
 8418ed8:	89 85 7c 72 ff ff    	mov    %eax,-0x8d84(%ebp)
 8418ede:	8b 45 0c             	mov    0xc(%ebp),%eax
 8418ee1:	8b 40 60             	mov    0x60(%eax),%eax
 8418ee4:	89 85 80 72 ff ff    	mov    %eax,-0x8d80(%ebp)
 8418eea:	8b 45 0c             	mov    0xc(%ebp),%eax
 8418eed:	8b 40 10             	mov    0x10(%eax),%eax
 8418ef0:	89 85 84 72 ff ff    	mov    %eax,-0x8d7c(%ebp)
 8418ef6:	8b 45 0c             	mov    0xc(%ebp),%eax
 8418ef9:	8b 40 5c             	mov    0x5c(%eax),%eax
 8418efc:	89 85 88 72 ff ff    	mov    %eax,-0x8d78(%ebp)
 8418f02:	8b 45 0c             	mov    0xc(%ebp),%eax
 8418f05:	8b 40 0c             	mov    0xc(%eax),%eax
 8418f08:	89 85 8c 72 ff ff    	mov    %eax,-0x8d74(%ebp)
 8418f0e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8418f11:	8b 40 58             	mov    0x58(%eax),%eax
 8418f14:	89 85 90 72 ff ff    	mov    %eax,-0x8d70(%ebp)
 8418f1a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8418f1d:	8b 78 08             	mov    0x8(%eax),%edi
 8418f20:	8b 45 0c             	mov    0xc(%ebp),%eax
 8418f23:	8b 70 54             	mov    0x54(%eax),%esi
 8418f26:	8b 45 0c             	mov    0xc(%ebp),%eax
 8418f29:	8b 58 04             	mov    0x4(%eax),%ebx
 8418f2c:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8418f2f:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8418f33:	8d 85 2c 73 ff ff    	lea    -0x8cd4(%ebp),%eax
 8418f39:	89 44 24 08          	mov    %eax,0x8(%esp)
 8418f3d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8418f44:	00 
 8418f45:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8418f48:	89 04 24             	mov    %eax,(%esp)
 8418f4b:	e8 da b5 fd ff       	call   83f452a <_ZN5MySQL11blob_to_strEiPvi>
 8418f50:	8b 95 f4 71 ff ff    	mov    -0x8e0c(%ebp),%edx
 8418f56:	89 94 24 b4 00 00 00 	mov    %edx,0xb4(%esp)
 8418f5d:	8b 95 f8 71 ff ff    	mov    -0x8e08(%ebp),%edx
 8418f63:	89 94 24 b0 00 00 00 	mov    %edx,0xb0(%esp)
 8418f6a:	8b 95 fc 71 ff ff    	mov    -0x8e04(%ebp),%edx
 8418f70:	89 94 24 ac 00 00 00 	mov    %edx,0xac(%esp)
 8418f77:	8b 95 00 72 ff ff    	mov    -0x8e00(%ebp),%edx
 8418f7d:	89 94 24 a8 00 00 00 	mov    %edx,0xa8(%esp)
 8418f84:	8b 95 04 72 ff ff    	mov    -0x8dfc(%ebp),%edx
 8418f8a:	89 94 24 a4 00 00 00 	mov    %edx,0xa4(%esp)
 8418f91:	8b 95 08 72 ff ff    	mov    -0x8df8(%ebp),%edx
 8418f97:	89 94 24 a0 00 00 00 	mov    %edx,0xa0(%esp)
 8418f9e:	8b 95 0c 72 ff ff    	mov    -0x8df4(%ebp),%edx
 8418fa4:	89 94 24 9c 00 00 00 	mov    %edx,0x9c(%esp)
 8418fab:	8b 95 10 72 ff ff    	mov    -0x8df0(%ebp),%edx
 8418fb1:	89 94 24 98 00 00 00 	mov    %edx,0x98(%esp)
 8418fb8:	8b 95 14 72 ff ff    	mov    -0x8dec(%ebp),%edx
 8418fbe:	89 94 24 94 00 00 00 	mov    %edx,0x94(%esp)
 8418fc5:	8b 95 18 72 ff ff    	mov    -0x8de8(%ebp),%edx
 8418fcb:	89 94 24 90 00 00 00 	mov    %edx,0x90(%esp)
 8418fd2:	8b 95 1c 72 ff ff    	mov    -0x8de4(%ebp),%edx
 8418fd8:	89 94 24 8c 00 00 00 	mov    %edx,0x8c(%esp)
 8418fdf:	8b 95 20 72 ff ff    	mov    -0x8de0(%ebp),%edx
 8418fe5:	89 94 24 88 00 00 00 	mov    %edx,0x88(%esp)
 8418fec:	8b 95 24 72 ff ff    	mov    -0x8ddc(%ebp),%edx
 8418ff2:	89 94 24 84 00 00 00 	mov    %edx,0x84(%esp)
 8418ff9:	8b 95 28 72 ff ff    	mov    -0x8dd8(%ebp),%edx
 8418fff:	89 94 24 80 00 00 00 	mov    %edx,0x80(%esp)
 8419006:	8b 95 2c 72 ff ff    	mov    -0x8dd4(%ebp),%edx
 841900c:	89 54 24 7c          	mov    %edx,0x7c(%esp)
 8419010:	8b 95 30 72 ff ff    	mov    -0x8dd0(%ebp),%edx
 8419016:	89 54 24 78          	mov    %edx,0x78(%esp)
 841901a:	8b 95 34 72 ff ff    	mov    -0x8dcc(%ebp),%edx
 8419020:	89 54 24 74          	mov    %edx,0x74(%esp)
 8419024:	8b 95 38 72 ff ff    	mov    -0x8dc8(%ebp),%edx
 841902a:	89 54 24 70          	mov    %edx,0x70(%esp)
 841902e:	8b 95 3c 72 ff ff    	mov    -0x8dc4(%ebp),%edx
 8419034:	89 54 24 6c          	mov    %edx,0x6c(%esp)
 8419038:	8b 95 40 72 ff ff    	mov    -0x8dc0(%ebp),%edx
 841903e:	89 54 24 68          	mov    %edx,0x68(%esp)
 8419042:	8b 95 44 72 ff ff    	mov    -0x8dbc(%ebp),%edx
 8419048:	89 54 24 64          	mov    %edx,0x64(%esp)
 841904c:	8b 95 48 72 ff ff    	mov    -0x8db8(%ebp),%edx
 8419052:	89 54 24 60          	mov    %edx,0x60(%esp)
 8419056:	8b 95 4c 72 ff ff    	mov    -0x8db4(%ebp),%edx
 841905c:	89 54 24 5c          	mov    %edx,0x5c(%esp)
 8419060:	8b 95 50 72 ff ff    	mov    -0x8db0(%ebp),%edx
 8419066:	89 54 24 58          	mov    %edx,0x58(%esp)
 841906a:	8b 95 54 72 ff ff    	mov    -0x8dac(%ebp),%edx
 8419070:	89 54 24 54          	mov    %edx,0x54(%esp)
 8419074:	8b 95 58 72 ff ff    	mov    -0x8da8(%ebp),%edx
 841907a:	89 54 24 50          	mov    %edx,0x50(%esp)
 841907e:	8b 95 5c 72 ff ff    	mov    -0x8da4(%ebp),%edx
 8419084:	89 54 24 4c          	mov    %edx,0x4c(%esp)
 8419088:	8b 95 60 72 ff ff    	mov    -0x8da0(%ebp),%edx
 841908e:	89 54 24 48          	mov    %edx,0x48(%esp)
 8419092:	8b 95 64 72 ff ff    	mov    -0x8d9c(%ebp),%edx
 8419098:	89 54 24 44          	mov    %edx,0x44(%esp)
 841909c:	8b 95 68 72 ff ff    	mov    -0x8d98(%ebp),%edx
 84190a2:	89 54 24 40          	mov    %edx,0x40(%esp)
 84190a6:	8b 95 6c 72 ff ff    	mov    -0x8d94(%ebp),%edx
 84190ac:	89 54 24 3c          	mov    %edx,0x3c(%esp)
 84190b0:	8b 95 70 72 ff ff    	mov    -0x8d90(%ebp),%edx
 84190b6:	89 54 24 38          	mov    %edx,0x38(%esp)
 84190ba:	8b 95 74 72 ff ff    	mov    -0x8d8c(%ebp),%edx
 84190c0:	89 54 24 34          	mov    %edx,0x34(%esp)
 84190c4:	8b 95 78 72 ff ff    	mov    -0x8d88(%ebp),%edx
 84190ca:	89 54 24 30          	mov    %edx,0x30(%esp)
 84190ce:	8b 95 7c 72 ff ff    	mov    -0x8d84(%ebp),%edx
 84190d4:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 84190d8:	8b 95 80 72 ff ff    	mov    -0x8d80(%ebp),%edx
 84190de:	89 54 24 28          	mov    %edx,0x28(%esp)
 84190e2:	8b 95 84 72 ff ff    	mov    -0x8d7c(%ebp),%edx
 84190e8:	89 54 24 24          	mov    %edx,0x24(%esp)
 84190ec:	8b 95 88 72 ff ff    	mov    -0x8d78(%ebp),%edx
 84190f2:	89 54 24 20          	mov    %edx,0x20(%esp)
 84190f6:	8b 95 8c 72 ff ff    	mov    -0x8d74(%ebp),%edx
 84190fc:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 8419100:	8b 95 90 72 ff ff    	mov    -0x8d70(%ebp),%edx
 8419106:	89 54 24 18          	mov    %edx,0x18(%esp)
 841910a:	89 7c 24 14          	mov    %edi,0x14(%esp)
 841910e:	89 74 24 10          	mov    %esi,0x10(%esp)
 8419112:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8419116:	89 44 24 08          	mov    %eax,0x8(%esp)
 841911a:	c7 44 24 04 c4 a1 c4 	movl   $0x8c4a1c4,0x4(%esp)
 8419121:	08 
 8419122:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8419125:	89 04 24             	mov    %eax,(%esp)
 8419128:	e8 93 b0 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 841912d:	e9 ee 03 00 00       	jmp    8419520 <_ZN14DB_UpdateQuest13_updateQuestsEP16SIG_UPDATE_QUEST+0x904>
 8419132:	8b 45 0c             	mov    0xc(%ebp),%eax
 8419135:	8b 00                	mov    (%eax),%eax
 8419137:	89 85 94 72 ff ff    	mov    %eax,-0x8d6c(%ebp)
 841913d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8419140:	05 d9 75 00 00       	add    $0x75d9,%eax
 8419145:	c7 44 24 0c 28 00 00 	movl   $0x28,0xc(%esp)
 841914c:	00 
 841914d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8419151:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8419158:	00 
 8419159:	8b 45 dc             	mov    -0x24(%ebp),%eax
 841915c:	89 04 24             	mov    %eax,(%esp)
 841915f:	e8 c6 b3 fd ff       	call   83f452a <_ZN5MySQL11blob_to_strEiPvi>
 8419164:	89 85 98 72 ff ff    	mov    %eax,-0x8d68(%ebp)
 841916a:	8b 45 0c             	mov    0xc(%ebp),%eax
 841916d:	8b 80 d5 75 00 00    	mov    0x75d5(%eax),%eax
 8419173:	89 85 9c 72 ff ff    	mov    %eax,-0x8d64(%ebp)
 8419179:	8b 45 0c             	mov    0xc(%ebp),%eax
 841917c:	8b 80 a0 00 00 00    	mov    0xa0(%eax),%eax
 8419182:	89 85 a0 72 ff ff    	mov    %eax,-0x8d60(%ebp)
 8419188:	8b 45 0c             	mov    0xc(%ebp),%eax
 841918b:	8b 40 50             	mov    0x50(%eax),%eax
 841918e:	89 85 a4 72 ff ff    	mov    %eax,-0x8d5c(%ebp)
 8419194:	8b 45 0c             	mov    0xc(%ebp),%eax
 8419197:	8b 80 9c 00 00 00    	mov    0x9c(%eax),%eax
 841919d:	89 85 a8 72 ff ff    	mov    %eax,-0x8d58(%ebp)
 84191a3:	8b 45 0c             	mov    0xc(%ebp),%eax
 84191a6:	8b 40 4c             	mov    0x4c(%eax),%eax
 84191a9:	89 85 ac 72 ff ff    	mov    %eax,-0x8d54(%ebp)
 84191af:	8b 45 0c             	mov    0xc(%ebp),%eax
 84191b2:	8b 80 98 00 00 00    	mov    0x98(%eax),%eax
 84191b8:	89 85 b0 72 ff ff    	mov    %eax,-0x8d50(%ebp)
 84191be:	8b 45 0c             	mov    0xc(%ebp),%eax
 84191c1:	8b 40 48             	mov    0x48(%eax),%eax
 84191c4:	89 85 b4 72 ff ff    	mov    %eax,-0x8d4c(%ebp)
 84191ca:	8b 45 0c             	mov    0xc(%ebp),%eax
 84191cd:	8b 80 94 00 00 00    	mov    0x94(%eax),%eax
 84191d3:	89 85 b8 72 ff ff    	mov    %eax,-0x8d48(%ebp)
 84191d9:	8b 45 0c             	mov    0xc(%ebp),%eax
 84191dc:	8b 40 44             	mov    0x44(%eax),%eax
 84191df:	89 85 bc 72 ff ff    	mov    %eax,-0x8d44(%ebp)
 84191e5:	8b 45 0c             	mov    0xc(%ebp),%eax
 84191e8:	8b 80 90 00 00 00    	mov    0x90(%eax),%eax
 84191ee:	89 85 c0 72 ff ff    	mov    %eax,-0x8d40(%ebp)
 84191f4:	8b 45 0c             	mov    0xc(%ebp),%eax
 84191f7:	8b 40 40             	mov    0x40(%eax),%eax
 84191fa:	89 85 c4 72 ff ff    	mov    %eax,-0x8d3c(%ebp)
 8419200:	8b 45 0c             	mov    0xc(%ebp),%eax
 8419203:	8b 80 8c 00 00 00    	mov    0x8c(%eax),%eax
 8419209:	89 85 c8 72 ff ff    	mov    %eax,-0x8d38(%ebp)
 841920f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8419212:	8b 40 3c             	mov    0x3c(%eax),%eax
 8419215:	89 85 cc 72 ff ff    	mov    %eax,-0x8d34(%ebp)
 841921b:	8b 45 0c             	mov    0xc(%ebp),%eax
 841921e:	8b 80 88 00 00 00    	mov    0x88(%eax),%eax
 8419224:	89 85 d0 72 ff ff    	mov    %eax,-0x8d30(%ebp)
 841922a:	8b 45 0c             	mov    0xc(%ebp),%eax
 841922d:	8b 40 38             	mov    0x38(%eax),%eax
 8419230:	89 85 d4 72 ff ff    	mov    %eax,-0x8d2c(%ebp)
 8419236:	8b 45 0c             	mov    0xc(%ebp),%eax
 8419239:	8b 80 84 00 00 00    	mov    0x84(%eax),%eax
 841923f:	89 85 d8 72 ff ff    	mov    %eax,-0x8d28(%ebp)
 8419245:	8b 45 0c             	mov    0xc(%ebp),%eax
 8419248:	8b 40 34             	mov    0x34(%eax),%eax
 841924b:	89 85 dc 72 ff ff    	mov    %eax,-0x8d24(%ebp)
 8419251:	8b 45 0c             	mov    0xc(%ebp),%eax
 8419254:	8b 80 80 00 00 00    	mov    0x80(%eax),%eax
 841925a:	89 85 e0 72 ff ff    	mov    %eax,-0x8d20(%ebp)
 8419260:	8b 45 0c             	mov    0xc(%ebp),%eax
 8419263:	8b 40 30             	mov    0x30(%eax),%eax
 8419266:	89 85 e4 72 ff ff    	mov    %eax,-0x8d1c(%ebp)
 841926c:	8b 45 0c             	mov    0xc(%ebp),%eax
 841926f:	8b 40 7c             	mov    0x7c(%eax),%eax
 8419272:	89 85 e8 72 ff ff    	mov    %eax,-0x8d18(%ebp)
 8419278:	8b 45 0c             	mov    0xc(%ebp),%eax
 841927b:	8b 40 2c             	mov    0x2c(%eax),%eax
 841927e:	89 85 ec 72 ff ff    	mov    %eax,-0x8d14(%ebp)
 8419284:	8b 45 0c             	mov    0xc(%ebp),%eax
 8419287:	8b 40 78             	mov    0x78(%eax),%eax
 841928a:	89 85 f0 72 ff ff    	mov    %eax,-0x8d10(%ebp)
 8419290:	8b 45 0c             	mov    0xc(%ebp),%eax
 8419293:	8b 40 28             	mov    0x28(%eax),%eax
 8419296:	89 85 f4 72 ff ff    	mov    %eax,-0x8d0c(%ebp)
 841929c:	8b 45 0c             	mov    0xc(%ebp),%eax
 841929f:	8b 40 74             	mov    0x74(%eax),%eax
 84192a2:	89 85 f8 72 ff ff    	mov    %eax,-0x8d08(%ebp)
 84192a8:	8b 45 0c             	mov    0xc(%ebp),%eax
 84192ab:	8b 40 24             	mov    0x24(%eax),%eax
 84192ae:	89 85 fc 72 ff ff    	mov    %eax,-0x8d04(%ebp)
 84192b4:	8b 45 0c             	mov    0xc(%ebp),%eax
 84192b7:	8b 40 70             	mov    0x70(%eax),%eax
 84192ba:	89 85 00 73 ff ff    	mov    %eax,-0x8d00(%ebp)
 84192c0:	8b 45 0c             	mov    0xc(%ebp),%eax
 84192c3:	8b 40 20             	mov    0x20(%eax),%eax
 84192c6:	89 85 04 73 ff ff    	mov    %eax,-0x8cfc(%ebp)
 84192cc:	8b 45 0c             	mov    0xc(%ebp),%eax
 84192cf:	8b 40 6c             	mov    0x6c(%eax),%eax
 84192d2:	89 85 08 73 ff ff    	mov    %eax,-0x8cf8(%ebp)
 84192d8:	8b 45 0c             	mov    0xc(%ebp),%eax
 84192db:	8b 40 1c             	mov    0x1c(%eax),%eax
 84192de:	89 85 0c 73 ff ff    	mov    %eax,-0x8cf4(%ebp)
 84192e4:	8b 45 0c             	mov    0xc(%ebp),%eax
 84192e7:	8b 40 68             	mov    0x68(%eax),%eax
 84192ea:	89 85 10 73 ff ff    	mov    %eax,-0x8cf0(%ebp)
 84192f0:	8b 45 0c             	mov    0xc(%ebp),%eax
 84192f3:	8b 40 18             	mov    0x18(%eax),%eax
 84192f6:	89 85 14 73 ff ff    	mov    %eax,-0x8cec(%ebp)
 84192fc:	8b 45 0c             	mov    0xc(%ebp),%eax
 84192ff:	8b 40 64             	mov    0x64(%eax),%eax
 8419302:	89 85 18 73 ff ff    	mov    %eax,-0x8ce8(%ebp)
 8419308:	8b 45 0c             	mov    0xc(%ebp),%eax
 841930b:	8b 40 14             	mov    0x14(%eax),%eax
 841930e:	89 85 1c 73 ff ff    	mov    %eax,-0x8ce4(%ebp)
 8419314:	8b 45 0c             	mov    0xc(%ebp),%eax
 8419317:	8b 40 60             	mov    0x60(%eax),%eax
 841931a:	89 85 20 73 ff ff    	mov    %eax,-0x8ce0(%ebp)
 8419320:	8b 45 0c             	mov    0xc(%ebp),%eax
 8419323:	8b 40 10             	mov    0x10(%eax),%eax
 8419326:	89 85 24 73 ff ff    	mov    %eax,-0x8cdc(%ebp)
 841932c:	8b 45 0c             	mov    0xc(%ebp),%eax
 841932f:	8b 78 5c             	mov    0x5c(%eax),%edi
 8419332:	8b 45 0c             	mov    0xc(%ebp),%eax
 8419335:	8b 70 0c             	mov    0xc(%eax),%esi
 8419338:	8b 45 0c             	mov    0xc(%ebp),%eax
 841933b:	8b 58 58             	mov    0x58(%eax),%ebx
 841933e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8419341:	8b 48 08             	mov    0x8(%eax),%ecx
 8419344:	8b 45 0c             	mov    0xc(%ebp),%eax
 8419347:	8b 50 54             	mov    0x54(%eax),%edx
 841934a:	8b 45 0c             	mov    0xc(%ebp),%eax
 841934d:	8b 40 04             	mov    0x4(%eax),%eax
 8419350:	89 85 e4 71 ff ff    	mov    %eax,-0x8e1c(%ebp)
 8419356:	8b 85 94 72 ff ff    	mov    -0x8d6c(%ebp),%eax
 841935c:	89 84 24 b0 00 00 00 	mov    %eax,0xb0(%esp)
 8419363:	8b 85 98 72 ff ff    	mov    -0x8d68(%ebp),%eax
 8419369:	89 84 24 ac 00 00 00 	mov    %eax,0xac(%esp)
 8419370:	8b 85 9c 72 ff ff    	mov    -0x8d64(%ebp),%eax
 8419376:	89 84 24 a8 00 00 00 	mov    %eax,0xa8(%esp)
 841937d:	8b 85 a0 72 ff ff    	mov    -0x8d60(%ebp),%eax
 8419383:	89 84 24 a4 00 00 00 	mov    %eax,0xa4(%esp)
 841938a:	8b 85 a4 72 ff ff    	mov    -0x8d5c(%ebp),%eax
 8419390:	89 84 24 a0 00 00 00 	mov    %eax,0xa0(%esp)
 8419397:	8b 85 a8 72 ff ff    	mov    -0x8d58(%ebp),%eax
 841939d:	89 84 24 9c 00 00 00 	mov    %eax,0x9c(%esp)
 84193a4:	8b 85 ac 72 ff ff    	mov    -0x8d54(%ebp),%eax
 84193aa:	89 84 24 98 00 00 00 	mov    %eax,0x98(%esp)
 84193b1:	8b 85 b0 72 ff ff    	mov    -0x8d50(%ebp),%eax
 84193b7:	89 84 24 94 00 00 00 	mov    %eax,0x94(%esp)
 84193be:	8b 85 b4 72 ff ff    	mov    -0x8d4c(%ebp),%eax
 84193c4:	89 84 24 90 00 00 00 	mov    %eax,0x90(%esp)
 84193cb:	8b 85 b8 72 ff ff    	mov    -0x8d48(%ebp),%eax
 84193d1:	89 84 24 8c 00 00 00 	mov    %eax,0x8c(%esp)
 84193d8:	8b 85 bc 72 ff ff    	mov    -0x8d44(%ebp),%eax
 84193de:	89 84 24 88 00 00 00 	mov    %eax,0x88(%esp)
 84193e5:	8b 85 c0 72 ff ff    	mov    -0x8d40(%ebp),%eax
 84193eb:	89 84 24 84 00 00 00 	mov    %eax,0x84(%esp)
 84193f2:	8b 85 c4 72 ff ff    	mov    -0x8d3c(%ebp),%eax
 84193f8:	89 84 24 80 00 00 00 	mov    %eax,0x80(%esp)
 84193ff:	8b 85 c8 72 ff ff    	mov    -0x8d38(%ebp),%eax
 8419405:	89 44 24 7c          	mov    %eax,0x7c(%esp)
 8419409:	8b 85 cc 72 ff ff    	mov    -0x8d34(%ebp),%eax
 841940f:	89 44 24 78          	mov    %eax,0x78(%esp)
 8419413:	8b 85 d0 72 ff ff    	mov    -0x8d30(%ebp),%eax
 8419419:	89 44 24 74          	mov    %eax,0x74(%esp)
 841941d:	8b 85 d4 72 ff ff    	mov    -0x8d2c(%ebp),%eax
 8419423:	89 44 24 70          	mov    %eax,0x70(%esp)
 8419427:	8b 85 d8 72 ff ff    	mov    -0x8d28(%ebp),%eax
 841942d:	89 44 24 6c          	mov    %eax,0x6c(%esp)
 8419431:	8b 85 dc 72 ff ff    	mov    -0x8d24(%ebp),%eax
 8419437:	89 44 24 68          	mov    %eax,0x68(%esp)
 841943b:	8b 85 e0 72 ff ff    	mov    -0x8d20(%ebp),%eax
 8419441:	89 44 24 64          	mov    %eax,0x64(%esp)
 8419445:	8b 85 e4 72 ff ff    	mov    -0x8d1c(%ebp),%eax
 841944b:	89 44 24 60          	mov    %eax,0x60(%esp)
 841944f:	8b 85 e8 72 ff ff    	mov    -0x8d18(%ebp),%eax
 8419455:	89 44 24 5c          	mov    %eax,0x5c(%esp)
 8419459:	8b 85 ec 72 ff ff    	mov    -0x8d14(%ebp),%eax
 841945f:	89 44 24 58          	mov    %eax,0x58(%esp)
 8419463:	8b 85 f0 72 ff ff    	mov    -0x8d10(%ebp),%eax
 8419469:	89 44 24 54          	mov    %eax,0x54(%esp)
 841946d:	8b 85 f4 72 ff ff    	mov    -0x8d0c(%ebp),%eax
 8419473:	89 44 24 50          	mov    %eax,0x50(%esp)
 8419477:	8b 85 f8 72 ff ff    	mov    -0x8d08(%ebp),%eax
 841947d:	89 44 24 4c          	mov    %eax,0x4c(%esp)
 8419481:	8b 85 fc 72 ff ff    	mov    -0x8d04(%ebp),%eax
 8419487:	89 44 24 48          	mov    %eax,0x48(%esp)
 841948b:	8b 85 00 73 ff ff    	mov    -0x8d00(%ebp),%eax
 8419491:	89 44 24 44          	mov    %eax,0x44(%esp)
 8419495:	8b 85 04 73 ff ff    	mov    -0x8cfc(%ebp),%eax
 841949b:	89 44 24 40          	mov    %eax,0x40(%esp)
 841949f:	8b 85 08 73 ff ff    	mov    -0x8cf8(%ebp),%eax
 84194a5:	89 44 24 3c          	mov    %eax,0x3c(%esp)
 84194a9:	8b 85 0c 73 ff ff    	mov    -0x8cf4(%ebp),%eax
 84194af:	89 44 24 38          	mov    %eax,0x38(%esp)
 84194b3:	8b 85 10 73 ff ff    	mov    -0x8cf0(%ebp),%eax
 84194b9:	89 44 24 34          	mov    %eax,0x34(%esp)
 84194bd:	8b 85 14 73 ff ff    	mov    -0x8cec(%ebp),%eax
 84194c3:	89 44 24 30          	mov    %eax,0x30(%esp)
 84194c7:	8b 85 18 73 ff ff    	mov    -0x8ce8(%ebp),%eax
 84194cd:	89 44 24 2c          	mov    %eax,0x2c(%esp)
 84194d1:	8b 85 1c 73 ff ff    	mov    -0x8ce4(%ebp),%eax
 84194d7:	89 44 24 28          	mov    %eax,0x28(%esp)
 84194db:	8b 85 20 73 ff ff    	mov    -0x8ce0(%ebp),%eax
 84194e1:	89 44 24 24          	mov    %eax,0x24(%esp)
 84194e5:	8b 85 24 73 ff ff    	mov    -0x8cdc(%ebp),%eax
 84194eb:	89 44 24 20          	mov    %eax,0x20(%esp)
 84194ef:	89 7c 24 1c          	mov    %edi,0x1c(%esp)
 84194f3:	89 74 24 18          	mov    %esi,0x18(%esp)
 84194f7:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 84194fb:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 84194ff:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8419503:	8b 95 e4 71 ff ff    	mov    -0x8e1c(%ebp),%edx
 8419509:	89 54 24 08          	mov    %edx,0x8(%esp)
 841950d:	c7 44 24 04 98 a4 c4 	movl   $0x8c4a498,0x4(%esp)
 8419514:	08 
 8419515:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8419518:	89 04 24             	mov    %eax,(%esp)
 841951b:	e8 a0 ac fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8419520:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8419527:	00 
 8419528:	8b 45 dc             	mov    -0x24(%ebp),%eax
 841952b:	89 04 24             	mov    %eax,(%esp)
 841952e:	e8 f3 ad fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 8419533:	83 f0 01             	xor    $0x1,%eax
 8419536:	84 c0                	test   %al,%al
 8419538:	75 11                	jne    841954b <_ZN14DB_UpdateQuest13_updateQuestsEP16SIG_UPDATE_QUEST+0x92f>
 841953a:	8b 45 dc             	mov    -0x24(%ebp),%eax
 841953d:	89 04 24             	mov    %eax,(%esp)
 8419540:	e8 cb ad fd ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 8419545:	09 d0                	or     %edx,%eax
 8419547:	85 c0                	test   %eax,%eax
 8419549:	75 07                	jne    8419552 <_ZN14DB_UpdateQuest13_updateQuestsEP16SIG_UPDATE_QUEST+0x936>
 841954b:	b8 01 00 00 00       	mov    $0x1,%eax
 8419550:	eb 05                	jmp    8419557 <_ZN14DB_UpdateQuest13_updateQuestsEP16SIG_UPDATE_QUEST+0x93b>
 8419552:	b8 00 00 00 00       	mov    $0x0,%eax
 8419557:	84 c0                	test   %al,%al
 8419559:	74 07                	je     8419562 <_ZN14DB_UpdateQuest13_updateQuestsEP16SIG_UPDATE_QUEST+0x946>
 841955b:	b8 00 00 00 00       	mov    $0x0,%eax
 8419560:	eb 05                	jmp    8419567 <_ZN14DB_UpdateQuest13_updateQuestsEP16SIG_UPDATE_QUEST+0x94b>
 8419562:	b8 01 00 00 00       	mov    $0x1,%eax
 8419567:	81 c4 dc 8e 00 00    	add    $0x8edc,%esp
 841956d:	5b                   	pop    %ebx
 841956e:	5e                   	pop    %esi
 841956f:	5f                   	pop    %edi
 8419570:	5d                   	pop    %ebp
 8419571:	c3                   	ret

```

```c
// DB_UpdateQuest::_updateQuests @ 0x8418c1c

/* DB_UpdateQuest::_updateQuests(SIG_UPDATE_QUEST*) */

bool __thiscall DB_UpdateQuest::_updateQuests(DB_UpdateQuest *this,SIG_UPDATE_QUEST *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  bool bVar42;
  char cVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  longlong lVar47;
  char local_8cd8 [36012];
  uint local_2c;
  MySQL *local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  local_28 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  local_24 = 30000;
  memset(local_8cd8,0,0x8cac);
  local_2c = 0x8cac;
  local_20 = 0x8cac;
  cVar43 = compress_zip(local_8cd8,&local_2c,(char *)(param_1 + 0xa4),30000);
  if (cVar43 == '\x01') {
    if (param_1[0x75d4] == (SIG_UPDATE_QUEST)0x0) {
      uVar1 = *(undefined4 *)param_1;
      uVar46 = MySQL::blob_to_str(local_28,1,param_1 + 0x75d9,0x28);
      MySQL::set_query(local_28,
                       "upDate new_charac_quest set play_1=%d, play_1_trigger=%d, play_2=%d, play_2_trigger=%d, play_3=%d, play_3_trigger=%d, play_4=%d, play_4_trigger=%d, play_5=%d, play_5_trigger=%d,play_6=%d, play_6_trigger=%d, play_7=%d, play_7_trigger=%d, play_8=%d, play_8_trigger=%d, play_9=%d, play_9_trigger=%d, play_10=%d, play_10_trigger=%d, play_11=%d, play_11_trigger=%d, play_12=%d, play_12_trigger=%d, play_13=%d, play_13_trigger=%d, play_14=%d, play_14_trigger=%d, play_15=%d, play_15_trigger=%d,play_16=%d, play_16_trigger=%d, play_17=%d, play_17_trigger=%d, play_18=%d, play_18_trigger=%d, play_19=%d, play_19_trigger=%d, play_20=%d, play_20_trigger=%d,urgentQuestIndex=%d,quest_notify=\'%s\' where charac_no=%u"
                       ,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x54),
                       *(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x58),
                       *(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x5c),
                       *(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x60),
                       *(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 100),
                       *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x68),
                       *(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x6c),
                       *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x70),
                       *(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x74),
                       *(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x78),
                       *(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x7c),
                       *(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x80),
                       *(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x84),
                       *(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x88),
                       *(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x8c),
                       *(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x90),
                       *(undefined4 *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x94),
                       *(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x98),
                       *(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x9c),
                       *(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0xa0),
                       *(undefined4 *)(param_1 + 0x75d5),uVar46,uVar1);
    }
    else {
      uVar1 = *(undefined4 *)param_1;
      uVar44 = MySQL::blob_to_str(local_28,1,param_1 + 0x75d9,0x28);
      uVar46 = *(undefined4 *)(param_1 + 0x75d5);
      uVar2 = *(undefined4 *)(param_1 + 0xa0);
      uVar3 = *(undefined4 *)(param_1 + 0x50);
      uVar4 = *(undefined4 *)(param_1 + 0x9c);
      uVar5 = *(undefined4 *)(param_1 + 0x4c);
      uVar6 = *(undefined4 *)(param_1 + 0x98);
      uVar7 = *(undefined4 *)(param_1 + 0x48);
      uVar8 = *(undefined4 *)(param_1 + 0x94);
      uVar9 = *(undefined4 *)(param_1 + 0x44);
      uVar10 = *(undefined4 *)(param_1 + 0x90);
      uVar11 = *(undefined4 *)(param_1 + 0x40);
      uVar12 = *(undefined4 *)(param_1 + 0x8c);
      uVar13 = *(undefined4 *)(param_1 + 0x3c);
      uVar14 = *(undefined4 *)(param_1 + 0x88);
      uVar15 = *(undefined4 *)(param_1 + 0x38);
      uVar16 = *(undefined4 *)(param_1 + 0x84);
      uVar17 = *(undefined4 *)(param_1 + 0x34);
      uVar18 = *(undefined4 *)(param_1 + 0x80);
      uVar19 = *(undefined4 *)(param_1 + 0x30);
      uVar20 = *(undefined4 *)(param_1 + 0x7c);
      uVar21 = *(undefined4 *)(param_1 + 0x2c);
      uVar22 = *(undefined4 *)(param_1 + 0x78);
      uVar23 = *(undefined4 *)(param_1 + 0x28);
      uVar24 = *(undefined4 *)(param_1 + 0x74);
      uVar25 = *(undefined4 *)(param_1 + 0x24);
      uVar26 = *(undefined4 *)(param_1 + 0x70);
      uVar27 = *(undefined4 *)(param_1 + 0x20);
      uVar28 = *(undefined4 *)(param_1 + 0x6c);
      uVar29 = *(undefined4 *)(param_1 + 0x1c);
      uVar30 = *(undefined4 *)(param_1 + 0x68);
      uVar31 = *(undefined4 *)(param_1 + 0x18);
      uVar32 = *(undefined4 *)(param_1 + 100);
      uVar33 = *(undefined4 *)(param_1 + 0x14);
      uVar34 = *(undefined4 *)(param_1 + 0x60);
      uVar35 = *(undefined4 *)(param_1 + 0x10);
      uVar36 = *(undefined4 *)(param_1 + 0x5c);
      uVar37 = *(undefined4 *)(param_1 + 0xc);
      uVar38 = *(undefined4 *)(param_1 + 0x58);
      uVar39 = *(undefined4 *)(param_1 + 8);
      uVar40 = *(undefined4 *)(param_1 + 0x54);
      uVar41 = *(undefined4 *)(param_1 + 4);
      uVar45 = MySQL::blob_to_str(local_28,0,local_8cd8,local_2c);
      MySQL::set_query(local_28,
                       "upDate new_charac_quest set clear_quest=\'%s\', play_1=%d, play_1_trigger=%d, play_2=%d, play_2_trigger=%d, play_3=%d, play_3_trigger=%d, play_4=%d, play_4_trigger=%d, play_5=%d, play_5_trigger=%d,play_6=%d, play_6_trigger=%d, play_7=%d, play_7_trigger=%d, play_8=%d, play_8_trigger=%d, play_9=%d, play_9_trigger=%d, play_10=%d, play_10_trigger=%d, play_11=%d, play_11_trigger=%d, play_12=%d, play_12_trigger=%d, play_13=%d, play_13_trigger=%d, play_14=%d, play_14_trigger=%d, play_15=%d, play_15_trigger=%d,play_16=%d, play_16_trigger=%d, play_17=%d, play_17_trigger=%d, play_18=%d, play_18_trigger=%d, play_19=%d, play_19_trigger=%d, play_20=%d, play_20_trigger=%d,urgentQuestIndex=%d,quest_notify=\'%s\' where charac_no=%u"
                       ,uVar45,uVar41,uVar40,uVar39,uVar38,uVar37,uVar36,uVar35,uVar34,uVar33,uVar32
                       ,uVar31,uVar30,uVar29,uVar28,uVar27,uVar26,uVar25,uVar24,uVar23,uVar22,uVar21
                       ,uVar20,uVar19,uVar18,uVar17,uVar16,uVar15,uVar14,uVar13,uVar12,uVar11,uVar10
                       ,uVar9,uVar8,uVar7,uVar6,uVar5,uVar4,uVar3,uVar2,uVar46,uVar44,uVar1);
    }
    cVar43 = MySQL::exec(local_28,true);
    if ((cVar43 == '\x01') && (lVar47 = MySQL::getAffectedRowCount(local_28), lVar47 != 0)) {
      bVar42 = false;
    }
    else {
      bVar42 = true;
    }
    return !bVar42;
  }
  LogManager::logFormat
            (1,"DBThread.cpp","bool DB_UpdateQuest::_updateQuests(SIG_UPDATE_QUEST*)",0x4a5e,
             "3RD_EXPEND : DB_UpdateQuest::DB ERROR!! charac_no(%u)",*(undefined4 *)param_1);
  return false;
}

```

---

## dispatch

```asm
// === 08418bde DB_UpdateQuest::dispatch  [0x08418bde-0x8418c1b] ===
 8418bde:	55                   	push   %ebp
 8418bdf:	89 e5                	mov    %esp,%ebp
 8418be1:	83 ec 28             	sub    $0x28,%esp
 8418be4:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
 8418be8:	8b 45 14             	mov    0x14(%ebp),%eax
 8418beb:	89 04 24             	mov    %eax,(%esp)
 8418bee:	e8 d9 82 03 00       	call   8450ecc <_ZN6Stream12GetOutBufferI16SIG_UPDATE_QUESTEEPT_v>
 8418bf3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8418bf6:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8418bfa:	75 07                	jne    8418c03 <_ZN14DB_UpdateQuest8dispatchEiiP6Stream+0x25>
 8418bfc:	b8 00 00 00 00       	mov    $0x0,%eax
 8418c01:	eb 16                	jmp    8418c19 <_ZN14DB_UpdateQuest8dispatchEiiP6Stream+0x3b>
 8418c03:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8418c06:	89 44 24 04          	mov    %eax,0x4(%esp)
 8418c0a:	8b 45 08             	mov    0x8(%ebp),%eax
 8418c0d:	89 04 24             	mov    %eax,(%esp)
 8418c10:	e8 07 00 00 00       	call   8418c1c <_ZN14DB_UpdateQuest13_updateQuestsEP16SIG_UPDATE_QUEST>
 8418c15:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 8418c19:	c9                   	leave
 8418c1a:	c3                   	ret
 8418c1b:	90                   	nop

```

```c
// DB_UpdateQuest::dispatch @ 0x8418bde

/* DB_UpdateQuest::dispatch(int, int, Stream*) */

undefined1 __thiscall
DB_UpdateQuest::dispatch(DB_UpdateQuest *this,int param_1,int param_2,Stream *param_3)

{
  SIG_UPDATE_QUEST *pSVar1;
  
  pSVar1 = Stream::GetOutBuffer<SIG_UPDATE_QUEST>(param_3);
  if (pSVar1 != (SIG_UPDATE_QUEST *)0x0) {
    _updateQuests(this,pSVar1);
  }
  return 0;
}

```

---

## ~DB_UpdateQuest

```asm
// === 08418b90 DB_UpdateQuest::~DB_UpdateQuest  [0x08418b90-0x8418bbf] ===
 8418b90:	55                   	push   %ebp
 8418b91:	89 e5                	mov    %esp,%ebp
 8418b93:	83 ec 18             	sub    $0x18,%esp
 8418b96:	8b 45 08             	mov    0x8(%ebp),%eax
 8418b99:	c7 00 90 f9 c5 08    	movl   $0x8c5f990,(%eax)
 8418b9f:	8b 45 08             	mov    0x8(%ebp),%eax
 8418ba2:	89 04 24             	mov    %eax,(%esp)
 8418ba5:	e8 ce 97 cc ff       	call   80e2378 <_ZN12DBDispatcherD1Ev>
 8418baa:	b8 00 00 00 00       	mov    $0x0,%eax
 8418baf:	84 c0                	test   %al,%al
 8418bb1:	74 0b                	je     8418bbe <_ZN14DB_UpdateQuestD1Ev+0x2e>
 8418bb3:	8b 45 08             	mov    0x8(%ebp),%eax
 8418bb6:	89 04 24             	mov    %eax,(%esp)
 8418bb9:	e8 32 b9 30 00       	call   87244f0 <_ZdlPv>
 8418bbe:	c9                   	leave
 8418bbf:	c3                   	ret

```

```c
// DB_UpdateQuest::~DB_UpdateQuest @ 0x8418b90

/* WARNING: Removing unreachable block (ram,0x08418bb3) */
/* DB_UpdateQuest::~DB_UpdateQuest() */

void __thiscall DB_UpdateQuest::~DB_UpdateQuest(DB_UpdateQuest *this)

{
  *(undefined ***)this = &PTR_dispatch_08c5f990;
  DBDispatcher::~DBDispatcher((DBDispatcher *)this);
  return;
}

```

---

## ~DB_UpdateQuest_08418bc0

```asm
// === 08418bc0 DB_UpdateQuest::~DB_UpdateQuest  [0x08418bc0-0x8418bdd] ===
 8418bc0:	55                   	push   %ebp
 8418bc1:	89 e5                	mov    %esp,%ebp
 8418bc3:	83 ec 18             	sub    $0x18,%esp
 8418bc6:	8b 45 08             	mov    0x8(%ebp),%eax
 8418bc9:	89 04 24             	mov    %eax,(%esp)
 8418bcc:	e8 bf ff ff ff       	call   8418b90 <_ZN14DB_UpdateQuestD1Ev>
 8418bd1:	8b 45 08             	mov    0x8(%ebp),%eax
 8418bd4:	89 04 24             	mov    %eax,(%esp)
 8418bd7:	e8 14 b9 30 00       	call   87244f0 <_ZdlPv>
 8418bdc:	c9                   	leave
 8418bdd:	c3                   	ret

```

```c
// DB_UpdateQuest::~DB_UpdateQuest @ 0x8418bc0

/* DB_UpdateQuest::~DB_UpdateQuest() */

void __thiscall DB_UpdateQuest::~DB_UpdateQuest(DB_UpdateQuest *this)

{
  ~DB_UpdateQuest(this);
  operator_delete(this);
  return;
}

```

