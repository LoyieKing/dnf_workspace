# DB_SaveMileage

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 08443c62 DB_SaveMileage::dispatch  [0x08443c62-0x8443d2b] ===
 8443c62:	55                   	push   %ebp
 8443c63:	89 e5                	mov    %esp,%ebp
 8443c65:	83 ec 38             	sub    $0x38,%esp
 8443c68:	8b 45 14             	mov    0x14(%ebp),%eax
 8443c6b:	89 04 24             	mov    %eax,(%esp)
 8443c6e:	e8 e9 02 01 00       	call   8453f5c <_ZN6Stream12GetOutBufferI18SIG_MILEAGE_STRUCTEEPT_v>
 8443c73:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8443c76:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8443c7a:	75 0a                	jne    8443c86 <_ZN14DB_SaveMileage8dispatchEiiP6Stream+0x24>
 8443c7c:	b8 00 00 00 00       	mov    $0x0,%eax
 8443c81:	e9 a4 00 00 00       	jmp    8443d2a <_ZN14DB_SaveMileage8dispatchEiiP6Stream+0xc8>
 8443c86:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8443c8b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8443c92:	00 
 8443c93:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8443c9a:	00 
 8443c9b:	89 04 24             	mov    %eax,(%esp)
 8443c9e:	e8 9b 15 fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8443ca3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8443ca6:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8443caa:	75 45                	jne    8443cf1 <_ZN14DB_SaveMileage8dispatchEiiP6Stream+0x8f>
 8443cac:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8443cb3:	00 
 8443cb4:	c7 44 24 08 9a a7 00 	movl   $0xa79a,0x8(%esp)
 8443cbb:	00 
 8443cbc:	c7 44 24 04 40 b5 c5 	movl   $0x8c5b540,0x4(%esp)
 8443cc3:	08 
 8443cc4:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8443cc7:	89 04 24             	mov    %eax,(%esp)
 8443cca:	e8 49 ba 10 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8443ccf:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8443cd6:	00 
 8443cd7:	c7 44 24 04 58 6e c5 	movl   $0x8c56e58,0x4(%esp)
 8443cde:	08 
 8443cdf:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8443ce2:	89 04 24             	mov    %eax,(%esp)
 8443ce5:	e8 9e ba 10 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8443cea:	b8 00 00 00 00       	mov    $0x0,%eax
 8443cef:	eb 39                	jmp    8443d2a <_ZN14DB_SaveMileage8dispatchEiiP6Stream+0xc8>
 8443cf1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8443cf4:	8b 10                	mov    (%eax),%edx
 8443cf6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8443cf9:	8b 40 08             	mov    0x8(%eax),%eax
 8443cfc:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8443d00:	89 44 24 08          	mov    %eax,0x8(%esp)
 8443d04:	c7 44 24 04 84 6e c5 	movl   $0x8c56e84,0x4(%esp)
 8443d0b:	08 
 8443d0c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8443d0f:	89 04 24             	mov    %eax,(%esp)
 8443d12:	e8 a9 04 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8443d17:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8443d1e:	00 
 8443d1f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8443d22:	89 04 24             	mov    %eax,(%esp)
 8443d25:	e8 fc 05 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 8443d2a:	c9                   	leave
 8443d2b:	c3                   	ret

```

```c
// DB_SaveMileage::dispatch @ 0x8443c62

/* DB_SaveMileage::dispatch(int, int, Stream*) */

undefined4 DB_SaveMileage::dispatch(int param_1,int param_2,Stream *param_3)

{
  undefined4 uVar1;
  Stream *in_stack_00000010;
  cMyTrace local_24 [16];
  SIG_MILEAGE_STRUCT *local_14;
  MySQL *local_10;
  
  local_14 = Stream::GetOutBuffer<SIG_MILEAGE_STRUCT>(in_stack_00000010);
  if (local_14 == (SIG_MILEAGE_STRUCT *)0x0) {
    uVar1 = 0;
  }
  else {
    local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
    if (local_10 == (MySQL *)0x0) {
      cMyTrace::cMyTrace(local_24,"virtual bool DB_SaveMileage::dispatch(int, int, Stream*)",0xa79a,
                         5);
      cMyTrace::operator()(local_24,"[ERROR] Database Handle is NULL [index:%d]",1);
      uVar1 = 0;
    }
    else {
      MySQL::set_query(local_10,"upDate member_miles set miles = %d where m_id = %u",
                       *(undefined4 *)(local_14 + 8),*(undefined4 *)local_14);
      uVar1 = MySQL::exec(local_10,true);
    }
  }
  return uVar1;
}

```

