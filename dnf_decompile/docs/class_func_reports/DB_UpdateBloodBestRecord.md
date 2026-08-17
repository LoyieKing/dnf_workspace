# DB_UpdateBloodBestRecord

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 08431c74 DB_UpdateBloodBestRecord::dispatch  [0x08431c74-0x8431d8b] ===
 8431c74:	55                   	push   %ebp
 8431c75:	89 e5                	mov    %esp,%ebp
 8431c77:	53                   	push   %ebx
 8431c78:	83 ec 34             	sub    $0x34,%esp
 8431c7b:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8431c80:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8431c87:	00 
 8431c88:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8431c8f:	00 
 8431c90:	89 04 24             	mov    %eax,(%esp)
 8431c93:	e8 a6 35 fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8431c98:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8431c9b:	8b 45 14             	mov    0x14(%ebp),%eax
 8431c9e:	89 04 24             	mov    %eax,(%esp)
 8431ca1:	e8 e8 11 02 00       	call   8452e8e <_ZN6Stream12GetOutBufferI36SIG_UPDATE_BLOOD_DUNGEON_BEST_RECORDEEPT_v>
 8431ca6:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8431ca9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8431cac:	8b 58 0c             	mov    0xc(%eax),%ebx
 8431caf:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8431cb2:	8b 08                	mov    (%eax),%ecx
 8431cb4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8431cb7:	8b 50 04             	mov    0x4(%eax),%edx
 8431cba:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8431cbd:	8b 40 08             	mov    0x8(%eax),%eax
 8431cc0:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 8431cc4:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8431cc8:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8431ccc:	89 44 24 08          	mov    %eax,0x8(%esp)
 8431cd0:	c7 44 24 04 80 1e c5 	movl   $0x8c51e80,0x4(%esp)
 8431cd7:	08 
 8431cd8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8431cdb:	89 04 24             	mov    %eax,(%esp)
 8431cde:	e8 dd 24 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8431ce3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8431cea:	00 
 8431ceb:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8431cee:	89 04 24             	mov    %eax,(%esp)
 8431cf1:	e8 30 26 fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 8431cf6:	83 f0 01             	xor    $0x1,%eax
 8431cf9:	84 c0                	test   %al,%al
 8431cfb:	75 11                	jne    8431d0e <_ZN24DB_UpdateBloodBestRecord8dispatchEiiP6Stream+0x9a>
 8431cfd:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8431d00:	89 04 24             	mov    %eax,(%esp)
 8431d03:	e8 08 26 fc ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 8431d08:	09 d0                	or     %edx,%eax
 8431d0a:	85 c0                	test   %eax,%eax
 8431d0c:	75 07                	jne    8431d15 <_ZN24DB_UpdateBloodBestRecord8dispatchEiiP6Stream+0xa1>
 8431d0e:	b8 01 00 00 00       	mov    $0x1,%eax
 8431d13:	eb 05                	jmp    8431d1a <_ZN24DB_UpdateBloodBestRecord8dispatchEiiP6Stream+0xa6>
 8431d15:	b8 00 00 00 00       	mov    $0x0,%eax
 8431d1a:	84 c0                	test   %al,%al
 8431d1c:	74 62                	je     8431d80 <_ZN24DB_UpdateBloodBestRecord8dispatchEiiP6Stream+0x10c>
 8431d1e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8431d21:	8b 58 04             	mov    0x4(%eax),%ebx
 8431d24:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8431d27:	8b 48 08             	mov    0x8(%eax),%ecx
 8431d2a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8431d2d:	8b 50 0c             	mov    0xc(%eax),%edx
 8431d30:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8431d33:	8b 00                	mov    (%eax),%eax
 8431d35:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 8431d39:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8431d3d:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8431d41:	89 44 24 08          	mov    %eax,0x8(%esp)
 8431d45:	c7 44 24 04 e8 1e c5 	movl   $0x8c51ee8,0x4(%esp)
 8431d4c:	08 
 8431d4d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8431d50:	89 04 24             	mov    %eax,(%esp)
 8431d53:	e8 68 24 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8431d58:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8431d5f:	00 
 8431d60:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8431d63:	89 04 24             	mov    %eax,(%esp)
 8431d66:	e8 bb 25 fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 8431d6b:	83 f0 01             	xor    $0x1,%eax
 8431d6e:	84 c0                	test   %al,%al
 8431d70:	74 07                	je     8431d79 <_ZN24DB_UpdateBloodBestRecord8dispatchEiiP6Stream+0x105>
 8431d72:	b8 00 00 00 00       	mov    $0x0,%eax
 8431d77:	eb 0c                	jmp    8431d85 <_ZN24DB_UpdateBloodBestRecord8dispatchEiiP6Stream+0x111>
 8431d79:	b8 01 00 00 00       	mov    $0x1,%eax
 8431d7e:	eb 05                	jmp    8431d85 <_ZN24DB_UpdateBloodBestRecord8dispatchEiiP6Stream+0x111>
 8431d80:	b8 01 00 00 00       	mov    $0x1,%eax
 8431d85:	83 c4 34             	add    $0x34,%esp
 8431d88:	5b                   	pop    %ebx
 8431d89:	5d                   	pop    %ebp
 8431d8a:	c3                   	ret
 8431d8b:	90                   	nop

```

```c
// DB_UpdateBloodBestRecord::dispatch @ 0x8431c74

/* DB_UpdateBloodBestRecord::dispatch(int, int, Stream*) */

undefined4 DB_UpdateBloodBestRecord::dispatch(int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  MySQL *this;
  SIG_UPDATE_BLOOD_DUNGEON_BEST_RECORD *pSVar3;
  undefined4 uVar4;
  longlong lVar5;
  Stream *in_stack_00000010;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  pSVar3 = Stream::GetOutBuffer<SIG_UPDATE_BLOOD_DUNGEON_BEST_RECORD>(in_stack_00000010);
  MySQL::set_query(this,
                   "upDate charac_blood_best_record set best_round=%d, best_time=%u where charac_no=%u and dungeon_index=%d"
                   ,*(undefined4 *)(pSVar3 + 8),*(undefined4 *)(pSVar3 + 4),*(undefined4 *)pSVar3,
                   *(undefined4 *)(pSVar3 + 0xc));
  cVar2 = MySQL::exec(this,true);
  if (cVar2 == '\x01') {
    lVar5 = MySQL::getAffectedRowCount(this);
    if (lVar5 != 0) {
      bVar1 = false;
      goto LAB_08431d1a;
    }
  }
  bVar1 = true;
LAB_08431d1a:
  if (bVar1) {
    MySQL::set_query(this,
                     "inSert into charac_blood_best_record(charac_no,dungeon_index,best_round,best_time) values(%u,%d,%d,%u)"
                     ,*(undefined4 *)pSVar3,*(undefined4 *)(pSVar3 + 0xc),
                     *(undefined4 *)(pSVar3 + 8),*(undefined4 *)(pSVar3 + 4));
    cVar2 = MySQL::exec(this,true);
    if (cVar2 == '\x01') {
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}

```

