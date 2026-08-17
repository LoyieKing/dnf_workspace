# DB_SaveBestClearTime

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 08447cc4 DB_SaveBestClearTime::dispatch  [0x08447cc4-0x8447ea5] ===
 8447cc4:	55                   	push   %ebp
 8447cc5:	89 e5                	mov    %esp,%ebp
 8447cc7:	83 ec 38             	sub    $0x38,%esp
 8447cca:	8b 45 14             	mov    0x14(%ebp),%eax
 8447ccd:	89 04 24             	mov    %eax,(%esp)
 8447cd0:	e8 fd c8 00 00       	call   84545d2 <_ZN6Stream12GetOutBufferI19SIG_BEST_CLEAR_TIMEEEPT_v>
 8447cd5:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8447cd8:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 8447cdc:	75 0a                	jne    8447ce8 <_ZN20DB_SaveBestClearTime8dispatchEiiP6Stream+0x24>
 8447cde:	b8 00 00 00 00       	mov    $0x0,%eax
 8447ce3:	e9 bc 01 00 00       	jmp    8447ea4 <_ZN20DB_SaveBestClearTime8dispatchEiiP6Stream+0x1e0>
 8447ce8:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8447ced:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8447cf4:	00 
 8447cf5:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8447cfc:	00 
 8447cfd:	89 04 24             	mov    %eax,(%esp)
 8447d00:	e8 39 d5 fa ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8447d05:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8447d08:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
 8447d0c:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 8447d13:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8447d16:	83 c0 08             	add    $0x8,%eax
 8447d19:	8d 55 e8             	lea    -0x18(%ebp),%edx
 8447d1c:	89 54 24 10          	mov    %edx,0x10(%esp)
 8447d20:	c7 44 24 0c c0 5d 00 	movl   $0x5dc0,0xc(%esp)
 8447d27:	00 
 8447d28:	89 44 24 08          	mov    %eax,0x8(%esp)
 8447d2c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8447d33:	00 
 8447d34:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8447d37:	89 04 24             	mov    %eax,(%esp)
 8447d3a:	e8 c7 3f fb ff       	call   83fbd06 <_Z24put_compressed_blob_dataP5MySQLiPciPS1_>
 8447d3f:	88 45 f7             	mov    %al,-0x9(%ebp)
 8447d42:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 8447d46:	83 f0 01             	xor    $0x1,%eax
 8447d49:	84 c0                	test   %al,%al
 8447d4b:	74 47                	je     8447d94 <_ZN20DB_SaveBestClearTime8dispatchEiiP6Stream+0xd0>
 8447d4d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8447d50:	8b 00                	mov    (%eax),%eax
 8447d52:	89 44 24 18          	mov    %eax,0x18(%esp)
 8447d56:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8447d5d:	00 
 8447d5e:	c7 44 24 10 30 85 c5 	movl   $0x8c58530,0x10(%esp)
 8447d65:	08 
 8447d66:	c7 44 24 0c 8d b2 00 	movl   $0xb28d,0xc(%esp)
 8447d6d:	00 
 8447d6e:	c7 44 24 08 80 b0 c5 	movl   $0x8c5b080,0x8(%esp)
 8447d75:	08 
 8447d76:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8447d7d:	08 
 8447d7e:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8447d85:	e8 80 be 68 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8447d8a:	b8 00 00 00 00       	mov    $0x0,%eax
 8447d8f:	e9 10 01 00 00       	jmp    8447ea4 <_ZN20DB_SaveBestClearTime8dispatchEiiP6Stream+0x1e0>
 8447d94:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8447d97:	8b 10                	mov    (%eax),%edx
 8447d99:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8447d9c:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8447da0:	89 44 24 08          	mov    %eax,0x8(%esp)
 8447da4:	c7 44 24 04 74 85 c5 	movl   $0x8c58574,0x4(%esp)
 8447dab:	08 
 8447dac:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8447daf:	89 04 24             	mov    %eax,(%esp)
 8447db2:	e8 09 c4 fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8447db7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8447dbe:	00 
 8447dbf:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8447dc2:	89 04 24             	mov    %eax,(%esp)
 8447dc5:	e8 5c c5 fa ff       	call   83f4326 <_ZN5MySQL4execEb>
 8447dca:	83 f0 01             	xor    $0x1,%eax
 8447dcd:	84 c0                	test   %al,%al
 8447dcf:	74 3f                	je     8447e10 <_ZN20DB_SaveBestClearTime8dispatchEiiP6Stream+0x14c>
 8447dd1:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8447dd4:	8b 00                	mov    (%eax),%eax
 8447dd6:	89 44 24 14          	mov    %eax,0x14(%esp)
 8447dda:	c7 44 24 10 b8 85 c5 	movl   $0x8c585b8,0x10(%esp)
 8447de1:	08 
 8447de2:	c7 44 24 0c 99 b2 00 	movl   $0xb299,0xc(%esp)
 8447de9:	00 
 8447dea:	c7 44 24 08 80 b0 c5 	movl   $0x8c5b080,0x8(%esp)
 8447df1:	08 
 8447df2:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8447df9:	08 
 8447dfa:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8447e01:	e8 04 be 68 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8447e06:	b8 00 00 00 00       	mov    $0x0,%eax
 8447e0b:	e9 94 00 00 00       	jmp    8447ea4 <_ZN20DB_SaveBestClearTime8dispatchEiiP6Stream+0x1e0>
 8447e10:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8447e13:	89 04 24             	mov    %eax,(%esp)
 8447e16:	e8 f5 c4 fa ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 8447e1b:	09 d0                	or     %edx,%eax
 8447e1d:	85 c0                	test   %eax,%eax
 8447e1f:	0f 94 c0             	sete   %al
 8447e22:	84 c0                	test   %al,%al
 8447e24:	74 79                	je     8447e9f <_ZN20DB_SaveBestClearTime8dispatchEiiP6Stream+0x1db>
 8447e26:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8447e29:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8447e2c:	8b 00                	mov    (%eax),%eax
 8447e2e:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8447e32:	89 44 24 08          	mov    %eax,0x8(%esp)
 8447e36:	c7 44 24 04 f0 85 c5 	movl   $0x8c585f0,0x4(%esp)
 8447e3d:	08 
 8447e3e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8447e41:	89 04 24             	mov    %eax,(%esp)
 8447e44:	e8 77 c3 fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8447e49:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8447e50:	00 
 8447e51:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8447e54:	89 04 24             	mov    %eax,(%esp)
 8447e57:	e8 ca c4 fa ff       	call   83f4326 <_ZN5MySQL4execEb>
 8447e5c:	83 f0 01             	xor    $0x1,%eax
 8447e5f:	84 c0                	test   %al,%al
 8447e61:	74 3c                	je     8447e9f <_ZN20DB_SaveBestClearTime8dispatchEiiP6Stream+0x1db>
 8447e63:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8447e66:	8b 00                	mov    (%eax),%eax
 8447e68:	89 44 24 14          	mov    %eax,0x14(%esp)
 8447e6c:	c7 44 24 10 38 86 c5 	movl   $0x8c58638,0x10(%esp)
 8447e73:	08 
 8447e74:	c7 44 24 0c a6 b2 00 	movl   $0xb2a6,0xc(%esp)
 8447e7b:	00 
 8447e7c:	c7 44 24 08 80 b0 c5 	movl   $0x8c5b080,0x8(%esp)
 8447e83:	08 
 8447e84:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8447e8b:	08 
 8447e8c:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8447e93:	e8 72 bd 68 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8447e98:	b8 00 00 00 00       	mov    $0x0,%eax
 8447e9d:	eb 05                	jmp    8447ea4 <_ZN20DB_SaveBestClearTime8dispatchEiiP6Stream+0x1e0>
 8447e9f:	b8 01 00 00 00       	mov    $0x1,%eax
 8447ea4:	c9                   	leave
 8447ea5:	c3                   	ret

```

```c
// DB_SaveBestClearTime::dispatch @ 0x8447cc4

/* DB_SaveBestClearTime::dispatch(int, int, Stream*) */

undefined4 DB_SaveBestClearTime::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  Stream *in_stack_00000010;
  char *local_1c;
  SIG_BEST_CLEAR_TIME *local_18;
  MySQL *local_14;
  char local_d;
  
  local_18 = Stream::GetOutBuffer<SIG_BEST_CLEAR_TIME>(in_stack_00000010);
  if (local_18 == (SIG_BEST_CLEAR_TIME *)0x0) {
    uVar2 = 0;
  }
  else {
    local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
    local_d = 0;
    local_1c = (char *)0x0;
    local_d = put_compressed_blob_data(local_14,0,(char *)(local_18 + 8),24000,&local_1c);
    if (local_d == '\x01') {
      MySQL::set_query(local_14,
                       "upDate charac_option set best_clear_time = \'%s\' where charac_no=%u",
                       local_1c,*(undefined4 *)local_18);
      cVar1 = MySQL::exec(local_14,true);
      if (cVar1 == '\x01') {
        lVar3 = MySQL::getAffectedRowCount(local_14);
        if (lVar3 == 0) {
          MySQL::set_query(local_14,
                           "inSert into charac_option(charac_no, best_clear_time) values(%u, \'%s\')"
                           ,*(undefined4 *)local_18,local_1c);
          cVar1 = MySQL::exec(local_14,true);
          if (cVar1 != '\x01') {
            LogManager::logFormat
                      (1,"DBThread.cpp",
                       "virtual bool DB_SaveBestClearTime::dispatch(int, int, Stream*)",0xb2a6,
                       "DB_SaveBestClearTime->inSert Query ERROR charac_no=%u",
                       *(undefined4 *)local_18);
            return 0;
          }
        }
        uVar2 = 1;
      }
      else {
        LogManager::logFormat
                  (1,"DBThread.cpp","virtual bool DB_SaveBestClearTime::dispatch(int, int, Stream*)"
                   ,0xb299,"DB_SaveBestClearTime->upDate Query ERROR charac_no=%u",
                   *(undefined4 *)local_18);
        uVar2 = 0;
      }
    }
    else {
      LogManager::logFormat
                (1,"DBThread.cpp","virtual bool DB_SaveBestClearTime::dispatch(int, int, Stream*)",
                 0xb28d,"DB_SaveBestClearTime::dispatch compress_zip(%u) ERROR charac_no=%u",0,
                 *(undefined4 *)local_18);
      uVar2 = 0;
    }
  }
  return uVar2;
}

```

