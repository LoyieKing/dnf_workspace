# DB_SavePrivateStore

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 0841bf02 DB_SavePrivateStore::dispatch  [0x0841bf02-0x841c08b] ===
 841bf02:	55                   	push   %ebp
 841bf03:	89 e5                	mov    %esp,%ebp
 841bf05:	56                   	push   %esi
 841bf06:	53                   	push   %ebx
 841bf07:	83 ec 40             	sub    $0x40,%esp
 841bf0a:	8b 45 14             	mov    0x14(%ebp),%eax
 841bf0d:	89 04 24             	mov    %eax,(%esp)
 841bf10:	e8 33 54 03 00       	call   8451348 <_ZN6Stream12GetOutBufferIN13private_store17SIG_PRIVATE_STOREEEEPT_v>
 841bf15:	89 45 f0             	mov    %eax,-0x10(%ebp)
 841bf18:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 841bf1d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 841bf24:	00 
 841bf25:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 841bf2c:	00 
 841bf2d:	89 04 24             	mov    %eax,(%esp)
 841bf30:	e8 09 93 fd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 841bf35:	89 45 f4             	mov    %eax,-0xc(%ebp)
 841bf38:	8b 45 f0             	mov    -0x10(%ebp),%eax
 841bf3b:	8b 30                	mov    (%eax),%esi
 841bf3d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 841bf40:	8b 80 30 04 00 00    	mov    0x430(%eax),%eax
 841bf46:	89 c3                	mov    %eax,%ebx
 841bf48:	8b 45 f0             	mov    -0x10(%ebp),%eax
 841bf4b:	83 c0 08             	add    $0x8,%eax
 841bf4e:	c7 44 24 0c 28 04 00 	movl   $0x428,0xc(%esp)
 841bf55:	00 
 841bf56:	89 44 24 08          	mov    %eax,0x8(%esp)
 841bf5a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 841bf61:	00 
 841bf62:	8b 45 f4             	mov    -0xc(%ebp),%eax
 841bf65:	89 04 24             	mov    %eax,(%esp)
 841bf68:	e8 bd 85 fd ff       	call   83f452a <_ZN5MySQL11blob_to_strEiPvi>
 841bf6d:	89 74 24 10          	mov    %esi,0x10(%esp)
 841bf71:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 841bf75:	89 44 24 08          	mov    %eax,0x8(%esp)
 841bf79:	c7 44 24 04 68 b8 c4 	movl   $0x8c4b868,0x4(%esp)
 841bf80:	08 
 841bf81:	8b 45 f4             	mov    -0xc(%ebp),%eax
 841bf84:	89 04 24             	mov    %eax,(%esp)
 841bf87:	e8 34 82 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 841bf8c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 841bf93:	00 
 841bf94:	8b 45 f4             	mov    -0xc(%ebp),%eax
 841bf97:	89 04 24             	mov    %eax,(%esp)
 841bf9a:	e8 87 83 fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 841bf9f:	83 f0 01             	xor    $0x1,%eax
 841bfa2:	84 c0                	test   %al,%al
 841bfa4:	75 11                	jne    841bfb7 <_ZN19DB_SavePrivateStore8dispatchEiiP6Stream+0xb5>
 841bfa6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 841bfa9:	89 04 24             	mov    %eax,(%esp)
 841bfac:	e8 5f 83 fd ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 841bfb1:	09 d0                	or     %edx,%eax
 841bfb3:	85 c0                	test   %eax,%eax
 841bfb5:	75 07                	jne    841bfbe <_ZN19DB_SavePrivateStore8dispatchEiiP6Stream+0xbc>
 841bfb7:	b8 01 00 00 00       	mov    $0x1,%eax
 841bfbc:	eb 05                	jmp    841bfc3 <_ZN19DB_SavePrivateStore8dispatchEiiP6Stream+0xc1>
 841bfbe:	b8 00 00 00 00       	mov    $0x0,%eax
 841bfc3:	84 c0                	test   %al,%al
 841bfc5:	0f 84 b4 00 00 00    	je     841c07f <_ZN19DB_SavePrivateStore8dispatchEiiP6Stream+0x17d>
 841bfcb:	8b 45 f0             	mov    -0x10(%ebp),%eax
 841bfce:	8b 80 30 04 00 00    	mov    0x430(%eax),%eax
 841bfd4:	89 c3                	mov    %eax,%ebx
 841bfd6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 841bfd9:	83 c0 08             	add    $0x8,%eax
 841bfdc:	c7 44 24 0c 28 04 00 	movl   $0x428,0xc(%esp)
 841bfe3:	00 
 841bfe4:	89 44 24 08          	mov    %eax,0x8(%esp)
 841bfe8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 841bfef:	00 
 841bff0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 841bff3:	89 04 24             	mov    %eax,(%esp)
 841bff6:	e8 2f 85 fd ff       	call   83f452a <_ZN5MySQL11blob_to_strEiPvi>
 841bffb:	8b 55 f0             	mov    -0x10(%ebp),%edx
 841bffe:	8b 12                	mov    (%edx),%edx
 841c000:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 841c004:	89 44 24 0c          	mov    %eax,0xc(%esp)
 841c008:	89 54 24 08          	mov    %edx,0x8(%esp)
 841c00c:	c7 44 24 04 ac b8 c4 	movl   $0x8c4b8ac,0x4(%esp)
 841c013:	08 
 841c014:	8b 45 f4             	mov    -0xc(%ebp),%eax
 841c017:	89 04 24             	mov    %eax,(%esp)
 841c01a:	e8 a1 81 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 841c01f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 841c026:	00 
 841c027:	8b 45 f4             	mov    -0xc(%ebp),%eax
 841c02a:	89 04 24             	mov    %eax,(%esp)
 841c02d:	e8 f4 82 fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 841c032:	83 f0 01             	xor    $0x1,%eax
 841c035:	84 c0                	test   %al,%al
 841c037:	74 46                	je     841c07f <_ZN19DB_SavePrivateStore8dispatchEiiP6Stream+0x17d>
 841c039:	8b 45 f0             	mov    -0x10(%ebp),%eax
 841c03c:	8b 18                	mov    (%eax),%ebx
 841c03e:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 841c045:	00 
 841c046:	c7 44 24 08 6d 4f 00 	movl   $0x4f6d,0x8(%esp)
 841c04d:	00 
 841c04e:	c7 44 24 04 40 ca c5 	movl   $0x8c5ca40,0x4(%esp)
 841c055:	08 
 841c056:	8d 45 e0             	lea    -0x20(%ebp),%eax
 841c059:	89 04 24             	mov    %eax,(%esp)
 841c05c:	e8 b7 36 13 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 841c061:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 841c065:	c7 44 24 04 f1 b8 c4 	movl   $0x8c4b8f1,0x4(%esp)
 841c06c:	08 
 841c06d:	8d 45 e0             	lea    -0x20(%ebp),%eax
 841c070:	89 04 24             	mov    %eax,(%esp)
 841c073:	e8 10 37 13 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 841c078:	b8 00 00 00 00       	mov    $0x0,%eax
 841c07d:	eb 05                	jmp    841c084 <_ZN19DB_SavePrivateStore8dispatchEiiP6Stream+0x182>
 841c07f:	b8 01 00 00 00       	mov    $0x1,%eax
 841c084:	83 c4 40             	add    $0x40,%esp
 841c087:	5b                   	pop    %ebx
 841c088:	5e                   	pop    %esi
 841c089:	5d                   	pop    %ebp
 841c08a:	c3                   	ret
 841c08b:	90                   	nop

```

```c
// DB_SavePrivateStore::dispatch @ 0x841bf02

/* DB_SavePrivateStore::dispatch(int, int, Stream*) */

undefined4 DB_SavePrivateStore::dispatch(int param_1,int param_2,Stream *param_3)

{
  undefined4 uVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  Stream *in_stack_00000010;
  cMyTrace local_24 [16];
  SIG_PRIVATE_STORE *local_14;
  MySQL *local_10;
  
  local_14 = Stream::GetOutBuffer<private_store::SIG_PRIVATE_STORE>(in_stack_00000010);
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  uVar1 = *(undefined4 *)local_14;
  uVar5 = *(undefined4 *)(local_14 + 0x430);
  uVar4 = MySQL::blob_to_str(local_10,0,local_14 + 8,0x428);
  MySQL::set_query(local_10,"upDate store set store = \'%s\', use_doll = \'%d\' where charac_no =%d"
                   ,uVar4,uVar5,uVar1);
  cVar3 = MySQL::exec(local_10,true);
  if ((cVar3 == '\x01') && (lVar6 = MySQL::getAffectedRowCount(local_10), lVar6 != 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    uVar1 = *(undefined4 *)(local_14 + 0x430);
    uVar5 = MySQL::blob_to_str(local_10,0,local_14 + 8,0x428);
    MySQL::set_query(local_10,
                     "inSert into store(charac_no, store, use_doll) values(%d, \'%s\', \'%d\')",
                     *(undefined4 *)local_14,uVar5,uVar1);
    cVar3 = MySQL::exec(local_10,true);
    if (cVar3 != '\x01') {
      uVar1 = *(undefined4 *)local_14;
      cMyTrace::cMyTrace(local_24,"virtual bool DB_SavePrivateStore::dispatch(int, int, Stream*)",
                         0x4f6d,5);
      cMyTrace::operator()(local_24,"inSert store failed at %d",uVar1);
      return 0;
    }
  }
  return 1;
}

```

