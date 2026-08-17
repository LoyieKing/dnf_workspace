# DB_SaveTitleBook

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 0840db00 DB_SaveTitleBook::dispatch  [0x0840db00-0x840dea9] ===
 840db00:	55                   	push   %ebp
 840db01:	89 e5                	mov    %esp,%ebp
 840db03:	57                   	push   %edi
 840db04:	56                   	push   %esi
 840db05:	53                   	push   %ebx
 840db06:	81 ec 3c 81 00 00    	sub    $0x813c,%esp
 840db0c:	8b 45 14             	mov    0x14(%ebp),%eax
 840db0f:	89 04 24             	mov    %eax,(%esp)
 840db12:	e8 b7 2d 04 00       	call   84508ce <_ZN6Stream12GetOutBufferI16stTitleBook_SaveEEPT_v>
 840db17:	89 45 e0             	mov    %eax,-0x20(%ebp)
 840db1a:	8d 9d 8c da ff ff    	lea    -0x2574(%ebp),%ebx
 840db20:	b8 00 00 00 00       	mov    $0x0,%eax
 840db25:	ba 04 05 00 00       	mov    $0x504,%edx
 840db2a:	89 df                	mov    %ebx,%edi
 840db2c:	89 d1                	mov    %edx,%ecx
 840db2e:	f3 ab                	rep stos %eax,%es:(%edi)
 840db30:	c7 45 dc 10 14 00 00 	movl   $0x1410,-0x24(%ebp)
 840db37:	8b 45 e0             	mov    -0x20(%ebp),%eax
 840db3a:	c7 44 24 0c ae 10 00 	movl   $0x10ae,0xc(%esp)
 840db41:	00 
 840db42:	89 44 24 08          	mov    %eax,0x8(%esp)
 840db46:	8d 45 dc             	lea    -0x24(%ebp),%eax
 840db49:	89 44 24 04          	mov    %eax,0x4(%esp)
 840db4d:	8d 85 8c da ff ff    	lea    -0x2574(%ebp),%eax
 840db53:	89 04 24             	mov    %eax,(%esp)
 840db56:	e8 c4 44 2a 00       	call   86b201f <_Z12compress_zipPcRjPKcj>
 840db5b:	83 f0 01             	xor    $0x1,%eax
 840db5e:	84 c0                	test   %al,%al
 840db60:	74 0a                	je     840db6c <_ZN16DB_SaveTitleBook8dispatchEiiP6Stream+0x6c>
 840db62:	b8 00 00 00 00       	mov    $0x0,%eax
 840db67:	e9 33 03 00 00       	jmp    840de9f <_ZN16DB_SaveTitleBook8dispatchEiiP6Stream+0x39f>
 840db6c:	8d 85 f4 7e ff ff    	lea    -0x810c(%ebp),%eax
 840db72:	ba 3c 39 00 00       	mov    $0x393c,%edx
 840db77:	89 54 24 08          	mov    %edx,0x8(%esp)
 840db7b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 840db82:	00 
 840db83:	89 04 24             	mov    %eax,(%esp)
 840db86:	e8 35 01 c7 ff       	call   807dcc0 <memset@plt>
 840db8b:	c7 45 d8 3c 39 00 00 	movl   $0x393c,-0x28(%ebp)
 840db92:	8b 45 e0             	mov    -0x20(%ebp),%eax
 840db95:	05 ae 10 00 00       	add    $0x10ae,%eax
 840db9a:	c7 44 24 0c a8 2f 00 	movl   $0x2fa8,0xc(%esp)
 840dba1:	00 
 840dba2:	89 44 24 08          	mov    %eax,0x8(%esp)
 840dba6:	8d 45 d8             	lea    -0x28(%ebp),%eax
 840dba9:	89 44 24 04          	mov    %eax,0x4(%esp)
 840dbad:	8d 85 f4 7e ff ff    	lea    -0x810c(%ebp),%eax
 840dbb3:	89 04 24             	mov    %eax,(%esp)
 840dbb6:	e8 64 44 2a 00       	call   86b201f <_Z12compress_zipPcRjPKcj>
 840dbbb:	83 f0 01             	xor    $0x1,%eax
 840dbbe:	84 c0                	test   %al,%al
 840dbc0:	74 0a                	je     840dbcc <_ZN16DB_SaveTitleBook8dispatchEiiP6Stream+0xcc>
 840dbc2:	b8 00 00 00 00       	mov    $0x0,%eax
 840dbc7:	e9 d3 02 00 00       	jmp    840de9f <_ZN16DB_SaveTitleBook8dispatchEiiP6Stream+0x39f>
 840dbcc:	8d 85 30 b8 ff ff    	lea    -0x47d0(%ebp),%eax
 840dbd2:	ba 5c 22 00 00       	mov    $0x225c,%edx
 840dbd7:	89 54 24 08          	mov    %edx,0x8(%esp)
 840dbdb:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 840dbe2:	00 
 840dbe3:	89 04 24             	mov    %eax,(%esp)
 840dbe6:	e8 d5 00 c7 ff       	call   807dcc0 <memset@plt>
 840dbeb:	c7 45 d4 5c 22 00 00 	movl   $0x225c,-0x2c(%ebp)
 840dbf2:	8b 45 e0             	mov    -0x20(%ebp),%eax
 840dbf5:	05 56 40 00 00       	add    $0x4056,%eax
 840dbfa:	c7 44 24 0c 98 1c 00 	movl   $0x1c98,0xc(%esp)
 840dc01:	00 
 840dc02:	89 44 24 08          	mov    %eax,0x8(%esp)
 840dc06:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 840dc09:	89 44 24 04          	mov    %eax,0x4(%esp)
 840dc0d:	8d 85 30 b8 ff ff    	lea    -0x47d0(%ebp),%eax
 840dc13:	89 04 24             	mov    %eax,(%esp)
 840dc16:	e8 04 44 2a 00       	call   86b201f <_Z12compress_zipPcRjPKcj>
 840dc1b:	83 f0 01             	xor    $0x1,%eax
 840dc1e:	84 c0                	test   %al,%al
 840dc20:	74 0a                	je     840dc2c <_ZN16DB_SaveTitleBook8dispatchEiiP6Stream+0x12c>
 840dc22:	b8 00 00 00 00       	mov    $0x0,%eax
 840dc27:	e9 73 02 00 00       	jmp    840de9f <_ZN16DB_SaveTitleBook8dispatchEiiP6Stream+0x39f>
 840dc2c:	8d 9d 9c ee ff ff    	lea    -0x1164(%ebp),%ebx
 840dc32:	b8 00 00 00 00       	mov    $0x0,%eax
 840dc37:	ba 4d 04 00 00       	mov    $0x44d,%edx
 840dc3c:	89 df                	mov    %ebx,%edi
 840dc3e:	89 d1                	mov    %edx,%ecx
 840dc40:	f3 ab                	rep stos %eax,%es:(%edi)
 840dc42:	c7 45 d0 34 11 00 00 	movl   $0x1134,-0x30(%ebp)
 840dc49:	8b 45 e0             	mov    -0x20(%ebp),%eax
 840dc4c:	05 ee 5c 00 00       	add    $0x5cee,%eax
 840dc51:	c7 44 24 0c 4c 0e 00 	movl   $0xe4c,0xc(%esp)
 840dc58:	00 
 840dc59:	89 44 24 08          	mov    %eax,0x8(%esp)
 840dc5d:	8d 45 d0             	lea    -0x30(%ebp),%eax
 840dc60:	89 44 24 04          	mov    %eax,0x4(%esp)
 840dc64:	8d 85 9c ee ff ff    	lea    -0x1164(%ebp),%eax
 840dc6a:	89 04 24             	mov    %eax,(%esp)
 840dc6d:	e8 ad 43 2a 00       	call   86b201f <_Z12compress_zipPcRjPKcj>
 840dc72:	83 f0 01             	xor    $0x1,%eax
 840dc75:	84 c0                	test   %al,%al
 840dc77:	74 0a                	je     840dc83 <_ZN16DB_SaveTitleBook8dispatchEiiP6Stream+0x183>
 840dc79:	b8 00 00 00 00       	mov    $0x0,%eax
 840dc7e:	e9 1c 02 00 00       	jmp    840de9f <_ZN16DB_SaveTitleBook8dispatchEiiP6Stream+0x39f>
 840dc83:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 840dc88:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840dc8f:	00 
 840dc90:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 840dc97:	00 
 840dc98:	89 04 24             	mov    %eax,(%esp)
 840dc9b:	e8 9e 75 fe ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 840dca0:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 840dca3:	8b 45 e0             	mov    -0x20(%ebp),%eax
 840dca6:	8b 80 3a 6b 00 00    	mov    0x6b3a(%eax),%eax
 840dcac:	89 85 e4 7e ff ff    	mov    %eax,-0x811c(%ebp)
 840dcb2:	8b 45 d0             	mov    -0x30(%ebp),%eax
 840dcb5:	89 44 24 0c          	mov    %eax,0xc(%esp)
 840dcb9:	8d 85 9c ee ff ff    	lea    -0x1164(%ebp),%eax
 840dcbf:	89 44 24 08          	mov    %eax,0x8(%esp)
 840dcc3:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 840dcca:	00 
 840dccb:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840dcce:	89 04 24             	mov    %eax,(%esp)
 840dcd1:	e8 54 68 fe ff       	call   83f452a <_ZN5MySQL11blob_to_strEiPvi>
 840dcd6:	89 c7                	mov    %eax,%edi
 840dcd8:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 840dcdb:	89 44 24 0c          	mov    %eax,0xc(%esp)
 840dcdf:	8d 85 30 b8 ff ff    	lea    -0x47d0(%ebp),%eax
 840dce5:	89 44 24 08          	mov    %eax,0x8(%esp)
 840dce9:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 840dcf0:	00 
 840dcf1:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840dcf4:	89 04 24             	mov    %eax,(%esp)
 840dcf7:	e8 2e 68 fe ff       	call   83f452a <_ZN5MySQL11blob_to_strEiPvi>
 840dcfc:	89 c6                	mov    %eax,%esi
 840dcfe:	8b 45 d8             	mov    -0x28(%ebp),%eax
 840dd01:	89 44 24 0c          	mov    %eax,0xc(%esp)
 840dd05:	8d 85 f4 7e ff ff    	lea    -0x810c(%ebp),%eax
 840dd0b:	89 44 24 08          	mov    %eax,0x8(%esp)
 840dd0f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 840dd16:	00 
 840dd17:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840dd1a:	89 04 24             	mov    %eax,(%esp)
 840dd1d:	e8 08 68 fe ff       	call   83f452a <_ZN5MySQL11blob_to_strEiPvi>
 840dd22:	89 c3                	mov    %eax,%ebx
 840dd24:	8b 45 dc             	mov    -0x24(%ebp),%eax
 840dd27:	89 44 24 0c          	mov    %eax,0xc(%esp)
 840dd2b:	8d 85 8c da ff ff    	lea    -0x2574(%ebp),%eax
 840dd31:	89 44 24 08          	mov    %eax,0x8(%esp)
 840dd35:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 840dd3c:	00 
 840dd3d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840dd40:	89 04 24             	mov    %eax,(%esp)
 840dd43:	e8 e2 67 fe ff       	call   83f452a <_ZN5MySQL11blob_to_strEiPvi>
 840dd48:	8b 95 e4 7e ff ff    	mov    -0x811c(%ebp),%edx
 840dd4e:	89 54 24 18          	mov    %edx,0x18(%esp)
 840dd52:	89 7c 24 14          	mov    %edi,0x14(%esp)
 840dd56:	89 74 24 10          	mov    %esi,0x10(%esp)
 840dd5a:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 840dd5e:	89 44 24 08          	mov    %eax,0x8(%esp)
 840dd62:	c7 44 24 04 78 6b c4 	movl   $0x8c46b78,0x4(%esp)
 840dd69:	08 
 840dd6a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840dd6d:	89 04 24             	mov    %eax,(%esp)
 840dd70:	e8 4b 64 fe ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 840dd75:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 840dd7c:	00 
 840dd7d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840dd80:	89 04 24             	mov    %eax,(%esp)
 840dd83:	e8 9e 65 fe ff       	call   83f4326 <_ZN5MySQL4execEb>
 840dd88:	83 f0 01             	xor    $0x1,%eax
 840dd8b:	84 c0                	test   %al,%al
 840dd8d:	74 0a                	je     840dd99 <_ZN16DB_SaveTitleBook8dispatchEiiP6Stream+0x299>
 840dd8f:	b8 00 00 00 00       	mov    $0x0,%eax
 840dd94:	e9 06 01 00 00       	jmp    840de9f <_ZN16DB_SaveTitleBook8dispatchEiiP6Stream+0x39f>
 840dd99:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840dd9c:	89 04 24             	mov    %eax,(%esp)
 840dd9f:	e8 6c 65 fe ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 840dda4:	09 d0                	or     %edx,%eax
 840dda6:	85 c0                	test   %eax,%eax
 840dda8:	0f 94 c0             	sete   %al
 840ddab:	84 c0                	test   %al,%al
 840ddad:	0f 84 e7 00 00 00    	je     840de9a <_ZN16DB_SaveTitleBook8dispatchEiiP6Stream+0x39a>
 840ddb3:	8b 45 d0             	mov    -0x30(%ebp),%eax
 840ddb6:	89 44 24 0c          	mov    %eax,0xc(%esp)
 840ddba:	8d 85 9c ee ff ff    	lea    -0x1164(%ebp),%eax
 840ddc0:	89 44 24 08          	mov    %eax,0x8(%esp)
 840ddc4:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 840ddcb:	00 
 840ddcc:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840ddcf:	89 04 24             	mov    %eax,(%esp)
 840ddd2:	e8 53 67 fe ff       	call   83f452a <_ZN5MySQL11blob_to_strEiPvi>
 840ddd7:	89 c7                	mov    %eax,%edi
 840ddd9:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 840dddc:	89 44 24 0c          	mov    %eax,0xc(%esp)
 840dde0:	8d 85 30 b8 ff ff    	lea    -0x47d0(%ebp),%eax
 840dde6:	89 44 24 08          	mov    %eax,0x8(%esp)
 840ddea:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 840ddf1:	00 
 840ddf2:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840ddf5:	89 04 24             	mov    %eax,(%esp)
 840ddf8:	e8 2d 67 fe ff       	call   83f452a <_ZN5MySQL11blob_to_strEiPvi>
 840ddfd:	89 c6                	mov    %eax,%esi
 840ddff:	8b 45 d8             	mov    -0x28(%ebp),%eax
 840de02:	89 44 24 0c          	mov    %eax,0xc(%esp)
 840de06:	8d 85 f4 7e ff ff    	lea    -0x810c(%ebp),%eax
 840de0c:	89 44 24 08          	mov    %eax,0x8(%esp)
 840de10:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 840de17:	00 
 840de18:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840de1b:	89 04 24             	mov    %eax,(%esp)
 840de1e:	e8 07 67 fe ff       	call   83f452a <_ZN5MySQL11blob_to_strEiPvi>
 840de23:	89 c3                	mov    %eax,%ebx
 840de25:	8b 45 dc             	mov    -0x24(%ebp),%eax
 840de28:	89 44 24 0c          	mov    %eax,0xc(%esp)
 840de2c:	8d 85 8c da ff ff    	lea    -0x2574(%ebp),%eax
 840de32:	89 44 24 08          	mov    %eax,0x8(%esp)
 840de36:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 840de3d:	00 
 840de3e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840de41:	89 04 24             	mov    %eax,(%esp)
 840de44:	e8 e1 66 fe ff       	call   83f452a <_ZN5MySQL11blob_to_strEiPvi>
 840de49:	8b 55 e0             	mov    -0x20(%ebp),%edx
 840de4c:	8b 92 3a 6b 00 00    	mov    0x6b3a(%edx),%edx
 840de52:	89 7c 24 18          	mov    %edi,0x18(%esp)
 840de56:	89 74 24 14          	mov    %esi,0x14(%esp)
 840de5a:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 840de5e:	89 44 24 0c          	mov    %eax,0xc(%esp)
 840de62:	89 54 24 08          	mov    %edx,0x8(%esp)
 840de66:	c7 44 24 04 f0 6b c4 	movl   $0x8c46bf0,0x4(%esp)
 840de6d:	08 
 840de6e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840de71:	89 04 24             	mov    %eax,(%esp)
 840de74:	e8 47 63 fe ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 840de79:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 840de80:	00 
 840de81:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840de84:	89 04 24             	mov    %eax,(%esp)
 840de87:	e8 9a 64 fe ff       	call   83f4326 <_ZN5MySQL4execEb>
 840de8c:	83 f0 01             	xor    $0x1,%eax
 840de8f:	84 c0                	test   %al,%al
 840de91:	74 07                	je     840de9a <_ZN16DB_SaveTitleBook8dispatchEiiP6Stream+0x39a>
 840de93:	b8 00 00 00 00       	mov    $0x0,%eax
 840de98:	eb 05                	jmp    840de9f <_ZN16DB_SaveTitleBook8dispatchEiiP6Stream+0x39f>
 840de9a:	b8 01 00 00 00       	mov    $0x1,%eax
 840de9f:	81 c4 3c 81 00 00    	add    $0x813c,%esp
 840dea5:	5b                   	pop    %ebx
 840dea6:	5e                   	pop    %esi
 840dea7:	5f                   	pop    %edi
 840dea8:	5d                   	pop    %ebp
 840dea9:	c3                   	ret

```

```c
// DB_SaveTitleBook::dispatch @ 0x840db00

/* DB_SaveTitleBook::dispatch(int, int, Stream*) */

undefined4 DB_SaveTitleBook::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  byte bVar9;
  longlong lVar10;
  Stream *in_stack_00000010;
  char local_8110 [14652];
  char local_47d4 [8796];
  char local_2578 [5136];
  char local_1168 [4404];
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  stTitleBook_Save *local_24;
  MySQL *local_20;
  
  bVar9 = 0;
  local_24 = Stream::GetOutBuffer<stTitleBook_Save>(in_stack_00000010);
  pcVar8 = local_2578;
  for (iVar7 = 0x504; iVar7 != 0; iVar7 = iVar7 + -1) {
    pcVar8[0] = '\0';
    pcVar8[1] = '\0';
    pcVar8[2] = '\0';
    pcVar8[3] = '\0';
    pcVar8 = pcVar8 + ((uint)bVar9 * -2 + 1) * 4;
  }
  local_28 = 0x1410;
  cVar1 = compress_zip(local_2578,&local_28,(char *)local_24,0x10ae);
  if (cVar1 == '\x01') {
    memset(local_8110,0,0x393c);
    local_2c = 0x393c;
    cVar1 = compress_zip(local_8110,&local_2c,(char *)(local_24 + 0x10ae),0x2fa8);
    if (cVar1 == '\x01') {
      memset(local_47d4,0,0x225c);
      local_30 = 0x225c;
      cVar1 = compress_zip(local_47d4,&local_30,(char *)(local_24 + 0x4056),0x1c98);
      if (cVar1 == '\x01') {
        pcVar8 = local_1168;
        for (iVar7 = 0x44d; iVar7 != 0; iVar7 = iVar7 + -1) {
          pcVar8[0] = '\0';
          pcVar8[1] = '\0';
          pcVar8[2] = '\0';
          pcVar8[3] = '\0';
          pcVar8 = pcVar8 + ((uint)bVar9 * -2 + 1) * 4;
        }
        local_34 = 0x1134;
        cVar1 = compress_zip(local_1168,&local_34,(char *)(local_24 + 0x5cee),0xe4c);
        if (cVar1 == '\x01') {
          local_20 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
          uVar2 = *(undefined4 *)(local_24 + 0x6b3a);
          uVar3 = MySQL::blob_to_str(local_20,3,local_1168,local_34);
          uVar4 = MySQL::blob_to_str(local_20,2,local_47d4,local_30);
          uVar5 = MySQL::blob_to_str(local_20,1,local_8110,local_2c);
          uVar6 = MySQL::blob_to_str(local_20,0,local_2578,local_28);
          MySQL::set_query(local_20,
                           "upDate charac_titlebook set general_section=\'%s\', specific_section=\'%s\', despair=\'%s\', event=\'%s\' where charac_no=%u"
                           ,uVar6,uVar5,uVar4,uVar3,uVar2);
          cVar1 = MySQL::exec(local_20,true);
          if (cVar1 == '\x01') {
            lVar10 = MySQL::getAffectedRowCount(local_20);
            if (lVar10 == 0) {
              uVar2 = MySQL::blob_to_str(local_20,3,local_1168,local_34);
              uVar3 = MySQL::blob_to_str(local_20,2,local_47d4,local_30);
              uVar4 = MySQL::blob_to_str(local_20,1,local_8110,local_2c);
              uVar5 = MySQL::blob_to_str(local_20,0,local_2578,local_28);
              MySQL::set_query(local_20,
                               "inSert into charac_titlebook(charac_no, general_section, specific_section, despair, event) values(%u, \'%s\',\'%s\',\'%s\',\'%s\')"
                               ,*(undefined4 *)(local_24 + 0x6b3a),uVar5,uVar4,uVar3,uVar2);
              cVar1 = MySQL::exec(local_20,true);
              if (cVar1 != '\x01') {
                return 0;
              }
            }
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
  return uVar2;
}

```

