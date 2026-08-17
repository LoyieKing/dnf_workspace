# DB_WriteGeoReject

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 0844bb70 DB_WriteGeoReject::dispatch  [0x0844bb70-0x844bc37] ===
 844bb70:	55                   	push   %ebp
 844bb71:	89 e5                	mov    %esp,%ebp
 844bb73:	83 ec 28             	sub    $0x28,%esp
 844bb76:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 844bb7b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 844bb82:	00 
 844bb83:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 844bb8a:	00 
 844bb8b:	89 04 24             	mov    %eax,(%esp)
 844bb8e:	e8 ab 96 fa ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 844bb93:	89 45 f0             	mov    %eax,-0x10(%ebp)
 844bb96:	8b 45 14             	mov    0x14(%ebp),%eax
 844bb99:	89 04 24             	mov    %eax,(%esp)
 844bb9c:	e8 6b 8c 00 00       	call   845480c <_ZN6Stream12GetOutBufferI19SIG_SAVE_GEO_REJECTEEPT_v>
 844bba1:	89 45 f4             	mov    %eax,-0xc(%ebp)
 844bba4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 844bba7:	89 44 24 08          	mov    %eax,0x8(%esp)
 844bbab:	c7 44 24 04 20 97 c5 	movl   $0x8c59720,0x4(%esp)
 844bbb2:	08 
 844bbb3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 844bbb6:	89 04 24             	mov    %eax,(%esp)
 844bbb9:	e8 02 86 fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 844bbbe:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 844bbc5:	00 
 844bbc6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 844bbc9:	89 04 24             	mov    %eax,(%esp)
 844bbcc:	e8 55 87 fa ff       	call   83f4326 <_ZN5MySQL4execEb>
 844bbd1:	83 f0 01             	xor    $0x1,%eax
 844bbd4:	84 c0                	test   %al,%al
 844bbd6:	75 11                	jne    844bbe9 <_ZN17DB_WriteGeoReject8dispatchEiiP6Stream+0x79>
 844bbd8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 844bbdb:	89 04 24             	mov    %eax,(%esp)
 844bbde:	e8 2d 87 fa ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 844bbe3:	09 d0                	or     %edx,%eax
 844bbe5:	85 c0                	test   %eax,%eax
 844bbe7:	75 07                	jne    844bbf0 <_ZN17DB_WriteGeoReject8dispatchEiiP6Stream+0x80>
 844bbe9:	b8 01 00 00 00       	mov    $0x1,%eax
 844bbee:	eb 05                	jmp    844bbf5 <_ZN17DB_WriteGeoReject8dispatchEiiP6Stream+0x85>
 844bbf0:	b8 00 00 00 00       	mov    $0x0,%eax
 844bbf5:	84 c0                	test   %al,%al
 844bbf7:	74 37                	je     844bc30 <_ZN17DB_WriteGeoReject8dispatchEiiP6Stream+0xc0>
 844bbf9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 844bbfc:	8d 50 10             	lea    0x10(%eax),%edx
 844bbff:	8b 45 f4             	mov    -0xc(%ebp),%eax
 844bc02:	89 54 24 0c          	mov    %edx,0xc(%esp)
 844bc06:	89 44 24 08          	mov    %eax,0x8(%esp)
 844bc0a:	c7 44 24 04 7c 97 c5 	movl   $0x8c5977c,0x4(%esp)
 844bc11:	08 
 844bc12:	8b 45 f0             	mov    -0x10(%ebp),%eax
 844bc15:	89 04 24             	mov    %eax,(%esp)
 844bc18:	e8 a3 85 fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 844bc1d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 844bc24:	00 
 844bc25:	8b 45 f0             	mov    -0x10(%ebp),%eax
 844bc28:	89 04 24             	mov    %eax,(%esp)
 844bc2b:	e8 f6 86 fa ff       	call   83f4326 <_ZN5MySQL4execEb>
 844bc30:	b8 01 00 00 00       	mov    $0x1,%eax
 844bc35:	c9                   	leave
 844bc36:	c3                   	ret
 844bc37:	90                   	nop

```

```c
// DB_WriteGeoReject::dispatch @ 0x844bb70

/* DB_WriteGeoReject::dispatch(int, int, Stream*) */

undefined4 DB_WriteGeoReject::dispatch(int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  MySQL *this;
  SIG_SAVE_GEO_REJECT *pSVar3;
  longlong lVar4;
  Stream *in_stack_00000010;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  pSVar3 = Stream::GetOutBuffer<SIG_SAVE_GEO_REJECT>(in_stack_00000010);
  MySQL::set_query(this,
                   "upDate geo_reject set rej_ip_count = rej_ip_count + 1, rej_src = \'g\' where rej_ip = \'%s\'"
                   ,pSVar3);
  cVar2 = MySQL::exec(this,true);
  if (cVar2 == '\x01') {
    lVar4 = MySQL::getAffectedRowCount(this);
    if (lVar4 != 0) {
      bVar1 = false;
      goto LAB_0844bbf5;
    }
  }
  bVar1 = true;
LAB_0844bbf5:
  if (bVar1) {
    MySQL::set_query(this,
                     "inSert into geo_reject(rej_ip, rej_c_code, rej_ip_count, rej_src) values(\'%s\', \'%s\', 1, \'g\')"
                     ,pSVar3,pSVar3 + 0x10);
    MySQL::exec(this,true);
  }
  return 1;
}

```

