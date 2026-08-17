# DB_InsertLevelDungeonPlay

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 0842cc98 DB_InsertLevelDungeonPlay::dispatch  [0x0842cc98-0x842cdf5] ===
 842cc98:	55                   	push   %ebp
 842cc99:	89 e5                	mov    %esp,%ebp
 842cc9b:	83 ec 48             	sub    $0x48,%esp
 842cc9e:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 842cca3:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 842ccaa:	00 
 842ccab:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 842ccb2:	00 
 842ccb3:	89 04 24             	mov    %eax,(%esp)
 842ccb6:	e8 83 85 fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 842ccbb:	89 45 f0             	mov    %eax,-0x10(%ebp)
 842ccbe:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 842ccc5:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 842cccc:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 842ccd3:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 842ccda:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842ccdd:	89 44 24 04          	mov    %eax,0x4(%esp)
 842cce1:	8b 45 14             	mov    0x14(%ebp),%eax
 842cce4:	89 04 24             	mov    %eax,(%esp)
 842cce7:	e8 d8 f8 1e 00       	call   861c5c4 <_ZN6StreamrsERi>
 842ccec:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 842ccf3:	e9 e6 00 00 00       	jmp    842cdde <_ZN25DB_InsertLevelDungeonPlay8dispatchEiiP6Stream+0x146>
 842ccf8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 842ccfb:	89 44 24 04          	mov    %eax,0x4(%esp)
 842ccff:	8b 45 14             	mov    0x14(%ebp),%eax
 842cd02:	89 04 24             	mov    %eax,(%esp)
 842cd05:	e8 ba f8 1e 00       	call   861c5c4 <_ZN6StreamrsERi>
 842cd0a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 842cd0d:	89 44 24 04          	mov    %eax,0x4(%esp)
 842cd11:	8b 45 14             	mov    0x14(%ebp),%eax
 842cd14:	89 04 24             	mov    %eax,(%esp)
 842cd17:	e8 a8 f8 1e 00       	call   861c5c4 <_ZN6StreamrsERi>
 842cd1c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 842cd1f:	89 44 24 04          	mov    %eax,0x4(%esp)
 842cd23:	8b 45 14             	mov    0x14(%ebp),%eax
 842cd26:	89 04 24             	mov    %eax,(%esp)
 842cd29:	e8 96 f8 1e 00       	call   861c5c4 <_ZN6StreamrsERi>
 842cd2e:	8b 4d e8             	mov    -0x18(%ebp),%ecx
 842cd31:	8b 55 e0             	mov    -0x20(%ebp),%edx
 842cd34:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 842cd37:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 842cd3b:	89 54 24 0c          	mov    %edx,0xc(%esp)
 842cd3f:	89 44 24 08          	mov    %eax,0x8(%esp)
 842cd43:	c7 44 24 04 70 05 c5 	movl   $0x8c50570,0x4(%esp)
 842cd4a:	08 
 842cd4b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 842cd4e:	89 04 24             	mov    %eax,(%esp)
 842cd51:	e8 6a 74 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 842cd56:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842cd5d:	00 
 842cd5e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 842cd61:	89 04 24             	mov    %eax,(%esp)
 842cd64:	e8 bd 75 fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 842cd69:	83 f0 01             	xor    $0x1,%eax
 842cd6c:	84 c0                	test   %al,%al
 842cd6e:	75 11                	jne    842cd81 <_ZN25DB_InsertLevelDungeonPlay8dispatchEiiP6Stream+0xe9>
 842cd70:	8b 45 f0             	mov    -0x10(%ebp),%eax
 842cd73:	89 04 24             	mov    %eax,(%esp)
 842cd76:	e8 95 75 fc ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 842cd7b:	09 d0                	or     %edx,%eax
 842cd7d:	85 c0                	test   %eax,%eax
 842cd7f:	75 07                	jne    842cd88 <_ZN25DB_InsertLevelDungeonPlay8dispatchEiiP6Stream+0xf0>
 842cd81:	b8 01 00 00 00       	mov    $0x1,%eax
 842cd86:	eb 05                	jmp    842cd8d <_ZN25DB_InsertLevelDungeonPlay8dispatchEiiP6Stream+0xf5>
 842cd88:	b8 00 00 00 00       	mov    $0x0,%eax
 842cd8d:	84 c0                	test   %al,%al
 842cd8f:	74 49                	je     842cdda <_ZN25DB_InsertLevelDungeonPlay8dispatchEiiP6Stream+0x142>
 842cd91:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 842cd94:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 842cd97:	8b 45 e8             	mov    -0x18(%ebp),%eax
 842cd9a:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 842cd9e:	89 54 24 0c          	mov    %edx,0xc(%esp)
 842cda2:	89 44 24 08          	mov    %eax,0x8(%esp)
 842cda6:	c7 44 24 04 08 06 c5 	movl   $0x8c50608,0x4(%esp)
 842cdad:	08 
 842cdae:	8b 45 f0             	mov    -0x10(%ebp),%eax
 842cdb1:	89 04 24             	mov    %eax,(%esp)
 842cdb4:	e8 07 74 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 842cdb9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842cdc0:	00 
 842cdc1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 842cdc4:	89 04 24             	mov    %eax,(%esp)
 842cdc7:	e8 5a 75 fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 842cdcc:	83 f0 01             	xor    $0x1,%eax
 842cdcf:	84 c0                	test   %al,%al
 842cdd1:	74 07                	je     842cdda <_ZN25DB_InsertLevelDungeonPlay8dispatchEiiP6Stream+0x142>
 842cdd3:	b8 00 00 00 00       	mov    $0x0,%eax
 842cdd8:	eb 1a                	jmp    842cdf4 <_ZN25DB_InsertLevelDungeonPlay8dispatchEiiP6Stream+0x15c>
 842cdda:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 842cdde:	8b 45 ec             	mov    -0x14(%ebp),%eax
 842cde1:	39 45 f4             	cmp    %eax,-0xc(%ebp)
 842cde4:	0f 9c c0             	setl   %al
 842cde7:	84 c0                	test   %al,%al
 842cde9:	0f 85 09 ff ff ff    	jne    842ccf8 <_ZN25DB_InsertLevelDungeonPlay8dispatchEiiP6Stream+0x60>
 842cdef:	b8 01 00 00 00       	mov    $0x1,%eax
 842cdf4:	c9                   	leave
 842cdf5:	c3                   	ret

```

```c
// DB_InsertLevelDungeonPlay::dispatch @ 0x842cc98

/* DB_InsertLevelDungeonPlay::dispatch(int, int, Stream*) */

undefined4 DB_InsertLevelDungeonPlay::dispatch(int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  Stream *in_stack_00000010;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  MySQL *local_14;
  int local_10;
  
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  Stream::operator>>(in_stack_00000010,&local_18);
  local_10 = 0;
  do {
    if (local_18 <= local_10) {
      return 1;
    }
    Stream::operator>>(in_stack_00000010,&local_1c);
    Stream::operator>>(in_stack_00000010,&local_20);
    Stream::operator>>(in_stack_00000010,&local_24);
    MySQL::set_query(local_14,
                     "upDate log_level_dungeon_play_count set total_charac_count=total_charac_count+%d,total_dungeon_play_count=total_dungeon_play_count+%d where level=%d"
                     ,local_20,local_24,local_1c);
    cVar2 = MySQL::exec(local_14,true);
    if ((cVar2 == '\x01') && (lVar3 = MySQL::getAffectedRowCount(local_14), lVar3 != 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      MySQL::set_query(local_14,
                       "inSert into log_level_dungeon_play_count (level,total_charac_count,total_dungeon_play_count) values(%d,%d,%d)"
                       ,local_1c,local_20,local_24);
      cVar2 = MySQL::exec(local_14,true);
      if (cVar2 != '\x01') {
        return 0;
      }
    }
    local_10 = local_10 + 1;
  } while( true );
}

```

