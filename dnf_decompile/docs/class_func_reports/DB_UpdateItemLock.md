# DB_UpdateItemLock

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 0843993a DB_UpdateItemLock::dispatch  [0x0843993a-0x8439ab9] ===
 843993a:	55                   	push   %ebp
 843993b:	89 e5                	mov    %esp,%ebp
 843993d:	57                   	push   %edi
 843993e:	53                   	push   %ebx
 843993f:	81 ec f0 03 00 00    	sub    $0x3f0,%esp
 8439945:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 843994a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8439951:	00 
 8439952:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8439959:	00 
 843995a:	89 04 24             	mov    %eax,(%esp)
 843995d:	e8 dc b8 fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8439962:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8439965:	8b 45 14             	mov    0x14(%ebp),%eax
 8439968:	89 04 24             	mov    %eax,(%esp)
 843996b:	e8 f8 9d 01 00       	call   8453768 <_ZN6Stream12GetOutBufferI20SIG_ITEM_LOCK_UPDATEEEPT_v>
 8439970:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8439973:	8d 9d 20 fc ff ff    	lea    -0x3e0(%ebp),%ebx
 8439979:	b8 00 00 00 00       	mov    $0x0,%eax
 843997e:	ba f3 00 00 00       	mov    $0xf3,%edx
 8439983:	89 df                	mov    %ebx,%edi
 8439985:	89 d1                	mov    %edx,%ecx
 8439987:	f3 ab                	rep stos %eax,%es:(%edi)
 8439989:	c7 45 ec cc 03 00 00 	movl   $0x3cc,-0x14(%ebp)
 8439990:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8439993:	83 c0 04             	add    $0x4,%eax
 8439996:	c7 44 24 0c 20 03 00 	movl   $0x320,0xc(%esp)
 843999d:	00 
 843999e:	89 44 24 08          	mov    %eax,0x8(%esp)
 84399a2:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84399a5:	89 44 24 04          	mov    %eax,0x4(%esp)
 84399a9:	8d 85 20 fc ff ff    	lea    -0x3e0(%ebp),%eax
 84399af:	89 04 24             	mov    %eax,(%esp)
 84399b2:	e8 68 86 27 00       	call   86b201f <_Z12compress_zipPcRjPKcj>
 84399b7:	83 f0 01             	xor    $0x1,%eax
 84399ba:	84 c0                	test   %al,%al
 84399bc:	74 0a                	je     84399c8 <_ZN17DB_UpdateItemLock8dispatchEiiP6Stream+0x8e>
 84399be:	b8 00 00 00 00       	mov    $0x0,%eax
 84399c3:	e9 e8 00 00 00       	jmp    8439ab0 <_ZN17DB_UpdateItemLock8dispatchEiiP6Stream+0x176>
 84399c8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84399cb:	8b 18                	mov    (%eax),%ebx
 84399cd:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84399d0:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84399d4:	8d 85 20 fc ff ff    	lea    -0x3e0(%ebp),%eax
 84399da:	89 44 24 08          	mov    %eax,0x8(%esp)
 84399de:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84399e5:	00 
 84399e6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84399e9:	89 04 24             	mov    %eax,(%esp)
 84399ec:	e8 39 ab fb ff       	call   83f452a <_ZN5MySQL11blob_to_strEiPvi>
 84399f1:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84399f5:	89 44 24 08          	mov    %eax,0x8(%esp)
 84399f9:	c7 44 24 04 3c 48 c5 	movl   $0x8c5483c,0x4(%esp)
 8439a00:	08 
 8439a01:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8439a04:	89 04 24             	mov    %eax,(%esp)
 8439a07:	e8 b4 a7 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8439a0c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8439a13:	00 
 8439a14:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8439a17:	89 04 24             	mov    %eax,(%esp)
 8439a1a:	e8 07 a9 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 8439a1f:	83 f0 01             	xor    $0x1,%eax
 8439a22:	84 c0                	test   %al,%al
 8439a24:	74 0a                	je     8439a30 <_ZN17DB_UpdateItemLock8dispatchEiiP6Stream+0xf6>
 8439a26:	b8 00 00 00 00       	mov    $0x0,%eax
 8439a2b:	e9 80 00 00 00       	jmp    8439ab0 <_ZN17DB_UpdateItemLock8dispatchEiiP6Stream+0x176>
 8439a30:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8439a33:	89 04 24             	mov    %eax,(%esp)
 8439a36:	e8 d5 a8 fb ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 8439a3b:	09 d0                	or     %edx,%eax
 8439a3d:	85 c0                	test   %eax,%eax
 8439a3f:	0f 94 c0             	sete   %al
 8439a42:	84 c0                	test   %al,%al
 8439a44:	74 65                	je     8439aab <_ZN17DB_UpdateItemLock8dispatchEiiP6Stream+0x171>
 8439a46:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8439a49:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8439a4d:	8d 85 20 fc ff ff    	lea    -0x3e0(%ebp),%eax
 8439a53:	89 44 24 08          	mov    %eax,0x8(%esp)
 8439a57:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8439a5e:	00 
 8439a5f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8439a62:	89 04 24             	mov    %eax,(%esp)
 8439a65:	e8 c0 aa fb ff       	call   83f452a <_ZN5MySQL11blob_to_strEiPvi>
 8439a6a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8439a6d:	8b 12                	mov    (%edx),%edx
 8439a6f:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8439a73:	89 54 24 08          	mov    %edx,0x8(%esp)
 8439a77:	c7 44 24 04 84 48 c5 	movl   $0x8c54884,0x4(%esp)
 8439a7e:	08 
 8439a7f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8439a82:	89 04 24             	mov    %eax,(%esp)
 8439a85:	e8 36 a7 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8439a8a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8439a91:	00 
 8439a92:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8439a95:	89 04 24             	mov    %eax,(%esp)
 8439a98:	e8 89 a8 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 8439a9d:	83 f0 01             	xor    $0x1,%eax
 8439aa0:	84 c0                	test   %al,%al
 8439aa2:	74 07                	je     8439aab <_ZN17DB_UpdateItemLock8dispatchEiiP6Stream+0x171>
 8439aa4:	b8 00 00 00 00       	mov    $0x0,%eax
 8439aa9:	eb 05                	jmp    8439ab0 <_ZN17DB_UpdateItemLock8dispatchEiiP6Stream+0x176>
 8439aab:	b8 01 00 00 00       	mov    $0x1,%eax
 8439ab0:	81 c4 f0 03 00 00    	add    $0x3f0,%esp
 8439ab6:	5b                   	pop    %ebx
 8439ab7:	5f                   	pop    %edi
 8439ab8:	5d                   	pop    %ebp
 8439ab9:	c3                   	ret

```

```c
// DB_UpdateItemLock::dispatch @ 0x843993a

/* DB_UpdateItemLock::dispatch(int, int, Stream*) */

undefined4 DB_UpdateItemLock::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  byte bVar6;
  longlong lVar7;
  Stream *in_stack_00000010;
  char local_3e4 [972];
  uint local_18;
  MySQL *local_14;
  SIG_ITEM_LOCK_UPDATE *local_10;
  
  bVar6 = 0;
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  local_10 = Stream::GetOutBuffer<SIG_ITEM_LOCK_UPDATE>(in_stack_00000010);
  pcVar5 = local_3e4;
  for (iVar4 = 0xf3; iVar4 != 0; iVar4 = iVar4 + -1) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5[2] = '\0';
    pcVar5[3] = '\0';
    pcVar5 = pcVar5 + ((uint)bVar6 * -2 + 1) * 4;
  }
  local_18 = 0x3cc;
  cVar1 = compress_zip(local_3e4,&local_18,(char *)(local_10 + 4),800);
  if (cVar1 == '\x01') {
    uVar2 = *(undefined4 *)local_10;
    uVar3 = MySQL::blob_to_str(local_14,0,local_3e4,local_18);
    MySQL::set_query(local_14,
                     "upDate charac_item_lock_info set item_lock_info=\'%s\' where charac_no=%u",
                     uVar3,uVar2);
    cVar1 = MySQL::exec(local_14,true);
    if (cVar1 == '\x01') {
      lVar7 = MySQL::getAffectedRowCount(local_14);
      if (lVar7 == 0) {
        uVar2 = MySQL::blob_to_str(local_14,0,local_3e4,local_18);
        MySQL::set_query(local_14,
                         "inSert into charac_item_lock_info(charac_no, item_lock_info) values(%u, \'%s\')"
                         ,*(undefined4 *)local_10,uVar2);
        cVar1 = MySQL::exec(local_14,true);
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
  return uVar2;
}

```

