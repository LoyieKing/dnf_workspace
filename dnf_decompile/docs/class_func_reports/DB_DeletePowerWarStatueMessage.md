# DB_DeletePowerWarStatueMessage

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 08437d4e DB_DeletePowerWarStatueMessage::dispatch  [0x08437d4e-0x8437df3] ===
 8437d4e:	55                   	push   %ebp
 8437d4f:	89 e5                	mov    %esp,%ebp
 8437d51:	83 ec 38             	sub    $0x38,%esp
 8437d54:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8437d59:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8437d60:	00 
 8437d61:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 8437d68:	00 
 8437d69:	89 04 24             	mov    %eax,(%esp)
 8437d6c:	e8 cd d4 fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8437d71:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8437d74:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8437d7b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8437d7e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8437d82:	8b 45 14             	mov    0x14(%ebp),%eax
 8437d85:	89 04 24             	mov    %eax,(%esp)
 8437d88:	e8 37 48 1e 00       	call   861c5c4 <_ZN6StreamrsERi>
 8437d8d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8437d90:	89 44 24 08          	mov    %eax,0x8(%esp)
 8437d94:	c7 44 24 04 f0 3f c5 	movl   $0x8c53ff0,0x4(%esp)
 8437d9b:	08 
 8437d9c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8437d9f:	89 04 24             	mov    %eax,(%esp)
 8437da2:	e8 19 c4 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8437da7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8437dae:	00 
 8437daf:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8437db2:	89 04 24             	mov    %eax,(%esp)
 8437db5:	e8 6c c5 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 8437dba:	83 f0 01             	xor    $0x1,%eax
 8437dbd:	84 c0                	test   %al,%al
 8437dbf:	74 2c                	je     8437ded <_ZN30DB_DeletePowerWarStatueMessage8dispatchEiiP6Stream+0x9f>
 8437dc1:	c7 44 24 10 48 40 c5 	movl   $0x8c54048,0x10(%esp)
 8437dc8:	08 
 8437dc9:	c7 44 24 0c 3d 85 00 	movl   $0x853d,0xc(%esp)
 8437dd0:	00 
 8437dd1:	c7 44 24 08 e0 bc c5 	movl   $0x8c5bce0,0x8(%esp)
 8437dd8:	08 
 8437dd9:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8437de0:	08 
 8437de1:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8437de8:	e8 1d be 69 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8437ded:	b8 01 00 00 00       	mov    $0x1,%eax
 8437df2:	c9                   	leave
 8437df3:	c3                   	ret

```

```c
// DB_DeletePowerWarStatueMessage::dispatch @ 0x8437d4e

/* DB_DeletePowerWarStatueMessage::dispatch(int, int, Stream*) */

undefined4 DB_DeletePowerWarStatueMessage::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  Stream *in_stack_00000010;
  int local_14;
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  local_14 = 0;
  Stream::operator>>(in_stack_00000010,&local_14);
  MySQL::set_query(local_10,
                   "deLete from event_server_message where server_info = %d and message_index in (1, 2, 3)"
                   ,local_14);
  cVar1 = MySQL::exec(local_10,true);
  if (cVar1 != '\x01') {
    LogManager::logFormat
              (1,"DBThread.cpp",
               "virtual bool DB_DeletePowerWarStatueMessage::dispatch(int, int, Stream*)",0x853d,
               "deLete_power_war_statue_message Query Error");
  }
  return 1;
}

```

