# DB_UpdateDetailChannel

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 0841bcee DB_UpdateDetailChannel::dispatch  [0x0841bcee-0x841be4f] ===
 841bcee:	55                   	push   %ebp
 841bcef:	89 e5                	mov    %esp,%ebp
 841bcf1:	57                   	push   %edi
 841bcf2:	56                   	push   %esi
 841bcf3:	53                   	push   %ebx
 841bcf4:	83 ec 5c             	sub    $0x5c,%esp
 841bcf7:	8b 45 14             	mov    0x14(%ebp),%eax
 841bcfa:	89 04 24             	mov    %eax,(%esp)
 841bcfd:	e8 9e 55 03 00       	call   84512a0 <_ZN6Stream12GetOutBufferI25SIG_UPDATE_DETAIL_CHANNELEEPT_v>
 841bd02:	89 45 d8             	mov    %eax,-0x28(%ebp)
 841bd05:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 841bd0c:	e8 8d ff ca ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 841bd11:	89 45 dc             	mov    %eax,-0x24(%ebp)
 841bd14:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 841bd17:	ba c5 b3 a2 91       	mov    $0x91a2b3c5,%edx
 841bd1c:	89 c8                	mov    %ecx,%eax
 841bd1e:	f7 ea                	imul   %edx
 841bd20:	8d 04 0a             	lea    (%edx,%ecx,1),%eax
 841bd23:	89 c2                	mov    %eax,%edx
 841bd25:	c1 fa 0a             	sar    $0xa,%edx
 841bd28:	89 c8                	mov    %ecx,%eax
 841bd2a:	c1 f8 1f             	sar    $0x1f,%eax
 841bd2d:	89 d3                	mov    %edx,%ebx
 841bd2f:	29 c3                	sub    %eax,%ebx
 841bd31:	89 d8                	mov    %ebx,%eax
 841bd33:	69 c0 08 07 00 00    	imul   $0x708,%eax,%eax
 841bd39:	89 ca                	mov    %ecx,%edx
 841bd3b:	29 c2                	sub    %eax,%edx
 841bd3d:	89 d0                	mov    %edx,%eax
 841bd3f:	89 45 e0             	mov    %eax,-0x20(%ebp)
 841bd42:	81 7d e0 83 03 00 00 	cmpl   $0x383,-0x20(%ebp)
 841bd49:	7f 08                	jg     841bd53 <_ZN22DB_UpdateDetailChannel8dispatchEiiP6Stream+0x65>
 841bd4b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 841bd4e:	29 45 dc             	sub    %eax,-0x24(%ebp)
 841bd51:	eb 0b                	jmp    841bd5e <_ZN22DB_UpdateDetailChannel8dispatchEiiP6Stream+0x70>
 841bd53:	b8 08 07 00 00       	mov    $0x708,%eax
 841bd58:	2b 45 e0             	sub    -0x20(%ebp),%eax
 841bd5b:	01 45 dc             	add    %eax,-0x24(%ebp)
 841bd5e:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 841bd63:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 841bd6a:	00 
 841bd6b:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 841bd72:	00 
 841bd73:	89 04 24             	mov    %eax,(%esp)
 841bd76:	e8 c3 94 fd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 841bd7b:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 841bd7e:	8b 45 d8             	mov    -0x28(%ebp),%eax
 841bd81:	8b 58 0c             	mov    0xc(%eax),%ebx
 841bd84:	8b 45 d8             	mov    -0x28(%ebp),%eax
 841bd87:	8b 48 08             	mov    0x8(%eax),%ecx
 841bd8a:	8b 45 d8             	mov    -0x28(%ebp),%eax
 841bd8d:	8b 50 04             	mov    0x4(%eax),%edx
 841bd90:	8b 45 d8             	mov    -0x28(%ebp),%eax
 841bd93:	8b 00                	mov    (%eax),%eax
 841bd95:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 841bd99:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 841bd9d:	89 54 24 10          	mov    %edx,0x10(%esp)
 841bda1:	89 44 24 0c          	mov    %eax,0xc(%esp)
 841bda5:	8b 45 dc             	mov    -0x24(%ebp),%eax
 841bda8:	89 44 24 08          	mov    %eax,0x8(%esp)
 841bdac:	c7 44 24 04 5c b7 c4 	movl   $0x8c4b75c,0x4(%esp)
 841bdb3:	08 
 841bdb4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 841bdb7:	89 04 24             	mov    %eax,(%esp)
 841bdba:	e8 01 84 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 841bdbf:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 841bdc6:	00 
 841bdc7:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 841bdca:	89 04 24             	mov    %eax,(%esp)
 841bdcd:	e8 54 85 fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 841bdd2:	83 f0 01             	xor    $0x1,%eax
 841bdd5:	84 c0                	test   %al,%al
 841bdd7:	74 07                	je     841bde0 <_ZN22DB_UpdateDetailChannel8dispatchEiiP6Stream+0xf2>
 841bdd9:	b8 00 00 00 00       	mov    $0x0,%eax
 841bdde:	eb 68                	jmp    841be48 <_ZN22DB_UpdateDetailChannel8dispatchEiiP6Stream+0x15a>
 841bde0:	8b 45 d8             	mov    -0x28(%ebp),%eax
 841bde3:	8b 40 0c             	mov    0xc(%eax),%eax
 841bde6:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 841bde9:	8b 45 d8             	mov    -0x28(%ebp),%eax
 841bdec:	8b 78 08             	mov    0x8(%eax),%edi
 841bdef:	8b 45 d8             	mov    -0x28(%ebp),%eax
 841bdf2:	8b 70 04             	mov    0x4(%eax),%esi
 841bdf5:	8b 45 d8             	mov    -0x28(%ebp),%eax
 841bdf8:	8b 18                	mov    (%eax),%ebx
 841bdfa:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 841be01:	00 
 841be02:	c7 44 24 08 28 4f 00 	movl   $0x4f28,0x8(%esp)
 841be09:	00 
 841be0a:	c7 44 24 04 a0 ca c5 	movl   $0x8c5caa0,0x4(%esp)
 841be11:	08 
 841be12:	8d 45 c8             	lea    -0x38(%ebp),%eax
 841be15:	89 04 24             	mov    %eax,(%esp)
 841be18:	e8 fb 38 13 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 841be1d:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 841be20:	89 44 24 14          	mov    %eax,0x14(%esp)
 841be24:	89 7c 24 10          	mov    %edi,0x10(%esp)
 841be28:	89 74 24 0c          	mov    %esi,0xc(%esp)
 841be2c:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 841be30:	c7 44 24 04 e0 b7 c4 	movl   $0x8c4b7e0,0x4(%esp)
 841be37:	08 
 841be38:	8d 45 c8             	lea    -0x38(%ebp),%eax
 841be3b:	89 04 24             	mov    %eax,(%esp)
 841be3e:	e8 45 39 13 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 841be43:	b8 01 00 00 00       	mov    $0x1,%eax
 841be48:	83 c4 5c             	add    $0x5c,%esp
 841be4b:	5b                   	pop    %ebx
 841be4c:	5e                   	pop    %esi
 841be4d:	5f                   	pop    %edi
 841be4e:	5d                   	pop    %ebp
 841be4f:	c3                   	ret

```

```c
// DB_UpdateDetailChannel::dispatch @ 0x841bcee

/* DB_UpdateDetailChannel::dispatch(int, int, Stream*) */

bool DB_UpdateDetailChannel::dispatch(int param_1,int param_2,Stream *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  Stream *in_stack_00000010;
  cMyTrace local_3c [16];
  SIG_UPDATE_DETAIL_CHANNEL *local_2c;
  int local_28;
  int local_24;
  MySQL *local_20;
  
  local_2c = Stream::GetOutBuffer<SIG_UPDATE_DETAIL_CHANNEL>(in_stack_00000010);
  local_28 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  local_24 = local_28 % 0x708;
  if (local_24 < 900) {
    iVar6 = -local_24;
  }
  else {
    iVar6 = 0x708 - local_24;
  }
  local_28 = local_28 + iVar6;
  local_20 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  MySQL::set_query(local_20,
                   "inSert into concurrent_user_status(occ_time,player_status,dungeon_index,channel_no,occ_count) values(from_unixtime(%d),%d,%d,%d,%d)"
                   ,local_28,*(undefined4 *)local_2c,*(undefined4 *)(local_2c + 4),
                   *(undefined4 *)(local_2c + 8),*(undefined4 *)(local_2c + 0xc));
  cVar5 = MySQL::exec(local_20,true);
  if (cVar5 == '\x01') {
    uVar1 = *(undefined4 *)(local_2c + 0xc);
    uVar2 = *(undefined4 *)(local_2c + 8);
    uVar3 = *(undefined4 *)(local_2c + 4);
    uVar4 = *(undefined4 *)local_2c;
    cMyTrace::cMyTrace(local_3c,"virtual bool DB_UpdateDetailChannel::dispatch(int, int, Stream*)",
                       0x4f28,0);
    cMyTrace::operator()(local_3c,"content concurrent %d,%d,%d,%d\n",uVar4,uVar3,uVar2,uVar1);
  }
  return cVar5 == '\x01';
}

```

