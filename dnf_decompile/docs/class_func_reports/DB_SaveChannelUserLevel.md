# DB_SaveChannelUserLevel

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 0841be50 DB_SaveChannelUserLevel::dispatch  [0x0841be50-0x841bf01] ===
 841be50:	55                   	push   %ebp
 841be51:	89 e5                	mov    %esp,%ebp
 841be53:	83 ec 38             	sub    $0x38,%esp
 841be56:	8b 45 14             	mov    0x14(%ebp),%eax
 841be59:	89 04 24             	mov    %eax,(%esp)
 841be5c:	e8 93 54 03 00       	call   84512f4 <_ZN6Stream12GetOutBufferI24SIG_UPDATE_STATISTIC4LEVEEPT_v>
 841be61:	89 45 ec             	mov    %eax,-0x14(%ebp)
 841be64:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 841be69:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 841be70:	00 
 841be71:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 841be78:	00 
 841be79:	89 04 24             	mov    %eax,(%esp)
 841be7c:	e8 bd 93 fd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 841be81:	89 45 f0             	mov    %eax,-0x10(%ebp)
 841be84:	c7 45 f4 01 00 00 00 	movl   $0x1,-0xc(%ebp)
 841be8b:	eb 63                	jmp    841bef0 <_ZN23DB_SaveChannelUserLevel8dispatchEiiP6Stream+0xa0>
 841be8d:	8b 55 f4             	mov    -0xc(%ebp),%edx
 841be90:	8b 45 ec             	mov    -0x14(%ebp),%eax
 841be93:	8b 4c 90 04          	mov    0x4(%eax,%edx,4),%ecx
 841be97:	8b 45 ec             	mov    -0x14(%ebp),%eax
 841be9a:	8b 10                	mov    (%eax),%edx
 841be9c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 841be9f:	8b 80 20 01 00 00    	mov    0x120(%eax),%eax
 841bea5:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 841bea9:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 841beac:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 841beb0:	89 54 24 0c          	mov    %edx,0xc(%esp)
 841beb4:	89 44 24 08          	mov    %eax,0x8(%esp)
 841beb8:	c7 44 24 04 00 b8 c4 	movl   $0x8c4b800,0x4(%esp)
 841bebf:	08 
 841bec0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 841bec3:	89 04 24             	mov    %eax,(%esp)
 841bec6:	e8 f5 82 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 841becb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 841bed2:	00 
 841bed3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 841bed6:	89 04 24             	mov    %eax,(%esp)
 841bed9:	e8 48 84 fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 841bede:	83 f0 01             	xor    $0x1,%eax
 841bee1:	84 c0                	test   %al,%al
 841bee3:	74 07                	je     841beec <_ZN23DB_SaveChannelUserLevel8dispatchEiiP6Stream+0x9c>
 841bee5:	b8 00 00 00 00       	mov    $0x0,%eax
 841beea:	eb 14                	jmp    841bf00 <_ZN23DB_SaveChannelUserLevel8dispatchEiiP6Stream+0xb0>
 841beec:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 841bef0:	83 7d f4 46          	cmpl   $0x46,-0xc(%ebp)
 841bef4:	0f 9e c0             	setle  %al
 841bef7:	84 c0                	test   %al,%al
 841bef9:	75 92                	jne    841be8d <_ZN23DB_SaveChannelUserLevel8dispatchEiiP6Stream+0x3d>
 841befb:	b8 01 00 00 00       	mov    $0x1,%eax
 841bf00:	c9                   	leave
 841bf01:	c3                   	ret

```

```c
// DB_SaveChannelUserLevel::dispatch @ 0x841be50

/* DB_SaveChannelUserLevel::dispatch(int, int, Stream*) */

undefined4 DB_SaveChannelUserLevel::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  SIG_UPDATE_STATISTIC4LEV *pSVar2;
  MySQL *this;
  Stream *in_stack_00000010;
  int local_10;
  
  pSVar2 = Stream::GetOutBuffer<SIG_UPDATE_STATISTIC4LEV>(in_stack_00000010);
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  local_10 = 1;
  while( true ) {
    if (0x46 < local_10) {
      return 1;
    }
    MySQL::set_query(this,
                     "inSert into channel_lev_status(occ_time,channel_no,lev,occ_count) values(from_unixtime(%d),%d,%d,%d)"
                     ,*(undefined4 *)(pSVar2 + 0x120),*(undefined4 *)pSVar2,local_10,
                     *(undefined4 *)(pSVar2 + local_10 * 4 + 4));
    cVar1 = MySQL::exec(this,true);
    if (cVar1 != '\x01') break;
    local_10 = local_10 + 1;
  }
  return 0;
}

```

