# DB_UpdateExpertJobStatistic

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 08436964 DB_UpdateExpertJobStatistic::dispatch  [0x08436964-0x8436ad3] ===
 8436964:	55                   	push   %ebp
 8436965:	89 e5                	mov    %esp,%ebp
 8436967:	83 ec 48             	sub    $0x48,%esp
 843696a:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 843696f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8436976:	00 
 8436977:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 843697e:	00 
 843697f:	89 04 24             	mov    %eax,(%esp)
 8436982:	e8 b7 e8 fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8436987:	89 45 f0             	mov    %eax,-0x10(%ebp)
 843698a:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8436991:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8436994:	89 44 24 04          	mov    %eax,0x4(%esp)
 8436998:	8b 45 14             	mov    0x14(%ebp),%eax
 843699b:	89 04 24             	mov    %eax,(%esp)
 843699e:	e8 f3 5d 1e 00       	call   861c796 <_ZN6StreamrsERj>
 84369a3:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84369a6:	85 c0                	test   %eax,%eax
 84369a8:	75 0a                	jne    84369b4 <_ZN27DB_UpdateExpertJobStatistic8dispatchEiiP6Stream+0x50>
 84369aa:	b8 01 00 00 00       	mov    $0x1,%eax
 84369af:	e9 1d 01 00 00       	jmp    8436ad1 <_ZN27DB_UpdateExpertJobStatistic8dispatchEiiP6Stream+0x16d>
 84369b4:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 84369bb:	e9 f8 00 00 00       	jmp    8436ab8 <_ZN27DB_UpdateExpertJobStatistic8dispatchEiiP6Stream+0x154>
 84369c0:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 84369c7:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 84369ce:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 84369d5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84369d8:	89 44 24 04          	mov    %eax,0x4(%esp)
 84369dc:	8b 45 14             	mov    0x14(%ebp),%eax
 84369df:	89 04 24             	mov    %eax,(%esp)
 84369e2:	e8 dd 5b 1e 00       	call   861c5c4 <_ZN6StreamrsERi>
 84369e7:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84369ea:	89 44 24 04          	mov    %eax,0x4(%esp)
 84369ee:	8b 45 14             	mov    0x14(%ebp),%eax
 84369f1:	89 04 24             	mov    %eax,(%esp)
 84369f4:	e8 cf 5d 1e 00       	call   861c7c8 <_ZN6StreamrsERm>
 84369f9:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84369fc:	89 44 24 04          	mov    %eax,0x4(%esp)
 8436a00:	8b 45 14             	mov    0x14(%ebp),%eax
 8436a03:	89 04 24             	mov    %eax,(%esp)
 8436a06:	e8 8b 5d 1e 00       	call   861c796 <_ZN6StreamrsERj>
 8436a0b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8436a0e:	85 c0                	test   %eax,%eax
 8436a10:	0f 84 b5 00 00 00    	je     8436acb <_ZN27DB_UpdateExpertJobStatistic8dispatchEiiP6Stream+0x167>
 8436a16:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 8436a19:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8436a1c:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8436a1f:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8436a23:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8436a27:	89 44 24 08          	mov    %eax,0x8(%esp)
 8436a2b:	c7 44 24 04 dc 36 c5 	movl   $0x8c536dc,0x4(%esp)
 8436a32:	08 
 8436a33:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8436a36:	89 04 24             	mov    %eax,(%esp)
 8436a39:	e8 82 d7 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8436a3e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8436a45:	00 
 8436a46:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8436a49:	89 04 24             	mov    %eax,(%esp)
 8436a4c:	e8 d5 d8 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 8436a51:	83 f0 01             	xor    $0x1,%eax
 8436a54:	84 c0                	test   %al,%al
 8436a56:	75 11                	jne    8436a69 <_ZN27DB_UpdateExpertJobStatistic8dispatchEiiP6Stream+0x105>
 8436a58:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8436a5b:	89 04 24             	mov    %eax,(%esp)
 8436a5e:	e8 ad d8 fb ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 8436a63:	09 d0                	or     %edx,%eax
 8436a65:	85 c0                	test   %eax,%eax
 8436a67:	75 07                	jne    8436a70 <_ZN27DB_UpdateExpertJobStatistic8dispatchEiiP6Stream+0x10c>
 8436a69:	b8 01 00 00 00       	mov    $0x1,%eax
 8436a6e:	eb 05                	jmp    8436a75 <_ZN27DB_UpdateExpertJobStatistic8dispatchEiiP6Stream+0x111>
 8436a70:	b8 00 00 00 00       	mov    $0x0,%eax
 8436a75:	84 c0                	test   %al,%al
 8436a77:	74 3b                	je     8436ab4 <_ZN27DB_UpdateExpertJobStatistic8dispatchEiiP6Stream+0x150>
 8436a79:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 8436a7c:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8436a7f:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8436a82:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8436a86:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8436a8a:	89 44 24 08          	mov    %eax,0x8(%esp)
 8436a8e:	c7 44 24 04 54 37 c5 	movl   $0x8c53754,0x4(%esp)
 8436a95:	08 
 8436a96:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8436a99:	89 04 24             	mov    %eax,(%esp)
 8436a9c:	e8 1f d7 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8436aa1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8436aa8:	00 
 8436aa9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8436aac:	89 04 24             	mov    %eax,(%esp)
 8436aaf:	e8 72 d8 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 8436ab4:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8436ab8:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8436abb:	39 45 f4             	cmp    %eax,-0xc(%ebp)
 8436abe:	0f 92 c0             	setb   %al
 8436ac1:	84 c0                	test   %al,%al
 8436ac3:	0f 85 f7 fe ff ff    	jne    84369c0 <_ZN27DB_UpdateExpertJobStatistic8dispatchEiiP6Stream+0x5c>
 8436ac9:	eb 01                	jmp    8436acc <_ZN27DB_UpdateExpertJobStatistic8dispatchEiiP6Stream+0x168>
 8436acb:	90                   	nop
 8436acc:	b8 01 00 00 00       	mov    $0x1,%eax
 8436ad1:	c9                   	leave
 8436ad2:	c3                   	ret
 8436ad3:	90                   	nop

```

```c
// DB_UpdateExpertJobStatistic::dispatch @ 0x8436964

/* DB_UpdateExpertJobStatistic::dispatch(int, int, Stream*) */

undefined4 DB_UpdateExpertJobStatistic::dispatch(int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  Stream *in_stack_00000010;
  uint local_24;
  ulong local_20;
  int local_1c;
  uint local_18;
  MySQL *local_14;
  uint local_10;
  
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  local_18 = 0;
  Stream::operator>>(in_stack_00000010,&local_18);
  if (local_18 != 0) {
    for (local_10 = 0; local_10 < local_18; local_10 = local_10 + 1) {
      local_1c = 0;
      local_20 = 0;
      local_24 = 0;
      Stream::operator>>(in_stack_00000010,&local_1c);
      Stream::operator>>(in_stack_00000010,&local_20);
      Stream::operator>>(in_stack_00000010,&local_24);
      if (local_20 == 0) {
        return 1;
      }
      MySQL::set_query(local_14,
                       "upDate expert_job_product_cnt set item_cnt=item_cnt+%d where expert_job_type=%d and occ_date=curdate() and item_id=%d"
                       ,local_24,local_1c,local_20);
      cVar2 = MySQL::exec(local_14,true);
      if ((cVar2 == '\x01') && (lVar3 = MySQL::getAffectedRowCount(local_14), lVar3 != 0)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        MySQL::set_query(local_14,
                         "inSert into expert_job_product_cnt(expert_job_type,occ_date,item_id,item_cnt) values(%d,curdate(),%d,%d)"
                         ,local_1c,local_20,local_24);
        MySQL::exec(local_14,true);
      }
    }
  }
  return 1;
}

```

