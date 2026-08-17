# DB_UpdateBoosterGageData

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 08446eec DB_UpdateBoosterGageData::dispatch  [0x08446eec-0x8446fcb] ===
 8446eec:	55                   	push   %ebp
 8446eed:	89 e5                	mov    %esp,%ebp
 8446eef:	83 ec 28             	sub    $0x28,%esp
 8446ef2:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8446ef7:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8446efe:	00 
 8446eff:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8446f06:	00 
 8446f07:	89 04 24             	mov    %eax,(%esp)
 8446f0a:	e8 2f e3 fa ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8446f0f:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8446f12:	8b 45 14             	mov    0x14(%ebp),%eax
 8446f15:	89 04 24             	mov    %eax,(%esp)
 8446f18:	e8 fb d4 00 00       	call   8454418 <_ZN6Stream12GetOutBufferI21SIG_BOOSTER_GAGE_DATAEEPT_v>
 8446f1d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8446f20:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8446f23:	8b 10                	mov    (%eax),%edx
 8446f25:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8446f28:	8b 40 04             	mov    0x4(%eax),%eax
 8446f2b:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8446f2f:	89 44 24 08          	mov    %eax,0x8(%esp)
 8446f33:	c7 44 24 04 18 7f c5 	movl   $0x8c57f18,0x4(%esp)
 8446f3a:	08 
 8446f3b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8446f3e:	89 04 24             	mov    %eax,(%esp)
 8446f41:	e8 7a d2 fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8446f46:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8446f4d:	00 
 8446f4e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8446f51:	89 04 24             	mov    %eax,(%esp)
 8446f54:	e8 cd d3 fa ff       	call   83f4326 <_ZN5MySQL4execEb>
 8446f59:	83 f0 01             	xor    $0x1,%eax
 8446f5c:	84 c0                	test   %al,%al
 8446f5e:	74 07                	je     8446f67 <_ZN24DB_UpdateBoosterGageData8dispatchEiiP6Stream+0x7b>
 8446f60:	b8 00 00 00 00       	mov    $0x0,%eax
 8446f65:	eb 62                	jmp    8446fc9 <_ZN24DB_UpdateBoosterGageData8dispatchEiiP6Stream+0xdd>
 8446f67:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8446f6a:	89 04 24             	mov    %eax,(%esp)
 8446f6d:	e8 9e d3 fa ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 8446f72:	09 d0                	or     %edx,%eax
 8446f74:	85 c0                	test   %eax,%eax
 8446f76:	0f 94 c0             	sete   %al
 8446f79:	84 c0                	test   %al,%al
 8446f7b:	74 47                	je     8446fc4 <_ZN24DB_UpdateBoosterGageData8dispatchEiiP6Stream+0xd8>
 8446f7d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8446f80:	8b 50 04             	mov    0x4(%eax),%edx
 8446f83:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8446f86:	8b 00                	mov    (%eax),%eax
 8446f88:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8446f8c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8446f90:	c7 44 24 04 50 7f c5 	movl   $0x8c57f50,0x4(%esp)
 8446f97:	08 
 8446f98:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8446f9b:	89 04 24             	mov    %eax,(%esp)
 8446f9e:	e8 1d d2 fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8446fa3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8446faa:	00 
 8446fab:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8446fae:	89 04 24             	mov    %eax,(%esp)
 8446fb1:	e8 70 d3 fa ff       	call   83f4326 <_ZN5MySQL4execEb>
 8446fb6:	83 f0 01             	xor    $0x1,%eax
 8446fb9:	84 c0                	test   %al,%al
 8446fbb:	74 07                	je     8446fc4 <_ZN24DB_UpdateBoosterGageData8dispatchEiiP6Stream+0xd8>
 8446fbd:	b8 00 00 00 00       	mov    $0x0,%eax
 8446fc2:	eb 05                	jmp    8446fc9 <_ZN24DB_UpdateBoosterGageData8dispatchEiiP6Stream+0xdd>
 8446fc4:	b8 01 00 00 00       	mov    $0x1,%eax
 8446fc9:	c9                   	leave
 8446fca:	c3                   	ret
 8446fcb:	90                   	nop

```

```c
// DB_UpdateBoosterGageData::dispatch @ 0x8446eec

/* DB_UpdateBoosterGageData::dispatch(int, int, Stream*) */

undefined4 DB_UpdateBoosterGageData::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  MySQL *this;
  SIG_BOOSTER_GAGE_DATA *pSVar2;
  undefined4 uVar3;
  longlong lVar4;
  Stream *in_stack_00000010;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  pSVar2 = Stream::GetOutBuffer<SIG_BOOSTER_GAGE_DATA>(in_stack_00000010);
  MySQL::set_query(this,"upDate member_booster_gage set gage=%u where m_id=%u",
                   *(undefined4 *)(pSVar2 + 4),*(undefined4 *)pSVar2);
  cVar1 = MySQL::exec(this,true);
  if (cVar1 == '\x01') {
    lVar4 = MySQL::getAffectedRowCount(this);
    if (lVar4 == 0) {
      MySQL::set_query(this,"inSert into member_booster_gage(m_id, gage) values(%u, %u)",
                       *(undefined4 *)pSVar2,*(undefined4 *)(pSVar2 + 4));
      cVar1 = MySQL::exec(this,true);
      if (cVar1 != '\x01') {
        return 0;
      }
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

```

