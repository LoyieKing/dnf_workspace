# DB_UpdateItemCountValue

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 0843eb6e DB_UpdateItemCountValue::dispatch  [0x0843eb6e-0x843eca3] ===
 843eb6e:	55                   	push   %ebp
 843eb6f:	89 e5                	mov    %esp,%ebp
 843eb71:	56                   	push   %esi
 843eb72:	53                   	push   %ebx
 843eb73:	83 ec 30             	sub    $0x30,%esp
 843eb76:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 843eb7b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 843eb82:	00 
 843eb83:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 843eb8a:	00 
 843eb8b:	89 04 24             	mov    %eax,(%esp)
 843eb8e:	e8 ab 66 fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 843eb93:	89 45 f4             	mov    %eax,-0xc(%ebp)
 843eb96:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 843eb9d:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 843eba4:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843eba7:	89 44 24 04          	mov    %eax,0x4(%esp)
 843ebab:	8b 45 14             	mov    0x14(%ebp),%eax
 843ebae:	89 04 24             	mov    %eax,(%esp)
 843ebb1:	e8 e0 db 1d 00       	call   861c796 <_ZN6StreamrsERj>
 843ebb6:	8d 45 ec             	lea    -0x14(%ebp),%eax
 843ebb9:	89 44 24 04          	mov    %eax,0x4(%esp)
 843ebbd:	8b 45 14             	mov    0x14(%ebp),%eax
 843ebc0:	89 04 24             	mov    %eax,(%esp)
 843ebc3:	e8 ce db 1d 00       	call   861c796 <_ZN6StreamrsERj>
 843ebc8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843ebcb:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 843ebd2:	00 
 843ebd3:	89 04 24             	mov    %eax,(%esp)
 843ebd6:	e8 70 a4 cc ff       	call   810904b <_Z14NumberToStringji>
 843ebdb:	89 c3                	mov    %eax,%ebx
 843ebdd:	8b 75 ec             	mov    -0x14(%ebp),%esi
 843ebe0:	e8 22 d2 fb ff       	call   83fbe07 <_Z25get_item_count_table_namev>
 843ebe5:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 843ebe9:	89 74 24 0c          	mov    %esi,0xc(%esp)
 843ebed:	89 44 24 08          	mov    %eax,0x8(%esp)
 843ebf1:	c7 44 24 04 b8 57 c5 	movl   $0x8c557b8,0x4(%esp)
 843ebf8:	08 
 843ebf9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843ebfc:	89 04 24             	mov    %eax,(%esp)
 843ebff:	e8 bc 55 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 843ec04:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843ec0b:	00 
 843ec0c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843ec0f:	89 04 24             	mov    %eax,(%esp)
 843ec12:	e8 0f 57 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 843ec17:	83 f0 01             	xor    $0x1,%eax
 843ec1a:	84 c0                	test   %al,%al
 843ec1c:	74 07                	je     843ec25 <_ZN23DB_UpdateItemCountValue8dispatchEiiP6Stream+0xb7>
 843ec1e:	b8 00 00 00 00       	mov    $0x0,%eax
 843ec23:	eb 78                	jmp    843ec9d <_ZN23DB_UpdateItemCountValue8dispatchEiiP6Stream+0x12f>
 843ec25:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843ec28:	89 04 24             	mov    %eax,(%esp)
 843ec2b:	e8 e0 56 fb ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 843ec30:	09 d0                	or     %edx,%eax
 843ec32:	85 c0                	test   %eax,%eax
 843ec34:	0f 94 c0             	sete   %al
 843ec37:	84 c0                	test   %al,%al
 843ec39:	74 5d                	je     843ec98 <_ZN23DB_UpdateItemCountValue8dispatchEiiP6Stream+0x12a>
 843ec3b:	8b 75 ec             	mov    -0x14(%ebp),%esi
 843ec3e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843ec41:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 843ec48:	00 
 843ec49:	89 04 24             	mov    %eax,(%esp)
 843ec4c:	e8 fa a3 cc ff       	call   810904b <_Z14NumberToStringji>
 843ec51:	89 c3                	mov    %eax,%ebx
 843ec53:	e8 af d1 fb ff       	call   83fbe07 <_Z25get_item_count_table_namev>
 843ec58:	89 74 24 10          	mov    %esi,0x10(%esp)
 843ec5c:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 843ec60:	89 44 24 08          	mov    %eax,0x8(%esp)
 843ec64:	c7 44 24 04 ec 57 c5 	movl   $0x8c557ec,0x4(%esp)
 843ec6b:	08 
 843ec6c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843ec6f:	89 04 24             	mov    %eax,(%esp)
 843ec72:	e8 49 55 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 843ec77:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843ec7e:	00 
 843ec7f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843ec82:	89 04 24             	mov    %eax,(%esp)
 843ec85:	e8 9c 56 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 843ec8a:	83 f0 01             	xor    $0x1,%eax
 843ec8d:	84 c0                	test   %al,%al
 843ec8f:	74 07                	je     843ec98 <_ZN23DB_UpdateItemCountValue8dispatchEiiP6Stream+0x12a>
 843ec91:	b8 00 00 00 00       	mov    $0x0,%eax
 843ec96:	eb 05                	jmp    843ec9d <_ZN23DB_UpdateItemCountValue8dispatchEiiP6Stream+0x12f>
 843ec98:	b8 01 00 00 00       	mov    $0x1,%eax
 843ec9d:	83 c4 30             	add    $0x30,%esp
 843eca0:	5b                   	pop    %ebx
 843eca1:	5e                   	pop    %esi
 843eca2:	5d                   	pop    %ebp
 843eca3:	c3                   	ret

```

```c
// DB_UpdateItemCountValue::dispatch @ 0x843eb6e

/* DB_UpdateItemCountValue::dispatch(int, int, Stream*) */

undefined4 DB_UpdateItemCountValue::dispatch(int param_1,int param_2,Stream *param_3)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  Stream *in_stack_00000010;
  uint local_18;
  uint local_14;
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  local_14 = 0;
  local_18 = 0;
  Stream::operator>>(in_stack_00000010,&local_14);
  Stream::operator>>(in_stack_00000010,&local_18);
  uVar3 = NumberToString(local_14,0);
  uVar1 = local_18;
  uVar4 = get_item_count_table_name();
  MySQL::set_query(local_10,"upDate %s set item_cnt=item_cnt+%d where m_id=%s",uVar4,uVar1,uVar3);
  cVar2 = MySQL::exec(local_10,true);
  if (cVar2 == '\x01') {
    lVar5 = MySQL::getAffectedRowCount(local_10);
    uVar1 = local_18;
    if (lVar5 == 0) {
      uVar3 = NumberToString(local_14,0);
      uVar4 = get_item_count_table_name();
      MySQL::set_query(local_10,"inSert into %s(m_id, item_cnt) values(%s, %d)",uVar4,uVar3,uVar1);
      cVar2 = MySQL::exec(local_10,true);
      if (cVar2 != '\x01') {
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

---

## makeRequest

```asm
// === 0843eca4 DB_UpdateItemCountValue::makeRequest  [0x0843eca4-0x843ed95] ===
 843eca4:	55                   	push   %ebp
 843eca5:	89 e5                	mov    %esp,%ebp
 843eca7:	56                   	push   %esi
 843eca8:	53                   	push   %ebx
 843eca9:	83 ec 20             	sub    $0x20,%esp
 843ecac:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 843ecb1:	c7 44 24 08 0e 96 00 	movl   $0x960e,0x8(%esp)
 843ecb8:	00 
 843ecb9:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 843ecc0:	08 
 843ecc1:	89 04 24             	mov    %eax,(%esp)
 843ecc4:	e8 bd 0d e5 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 843ecc9:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 843ecd0:	00 
 843ecd1:	89 44 24 04          	mov    %eax,0x4(%esp)
 843ecd5:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843ecd8:	89 04 24             	mov    %eax,(%esp)
 843ecdb:	e8 46 9f c8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 843ece0:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843ece3:	89 04 24             	mov    %eax,(%esp)
 843ece6:	e8 5b 9f c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843eceb:	c7 44 24 04 40 02 00 	movl   $0x240,0x4(%esp)
 843ecf2:	00 
 843ecf3:	89 04 24             	mov    %eax,(%esp)
 843ecf6:	e8 5b 9f c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843ecfb:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843ecfe:	89 04 24             	mov    %eax,(%esp)
 843ed01:	e8 40 9f c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843ed06:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 843ed0d:	ff 
 843ed0e:	89 04 24             	mov    %eax,(%esp)
 843ed11:	e8 40 9f c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843ed16:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843ed19:	89 04 24             	mov    %eax,(%esp)
 843ed1c:	e8 25 9f c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843ed21:	8b 55 08             	mov    0x8(%ebp),%edx
 843ed24:	89 54 24 04          	mov    %edx,0x4(%esp)
 843ed28:	89 04 24             	mov    %eax,(%esp)
 843ed2b:	e8 62 35 ca ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 843ed30:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843ed33:	89 04 24             	mov    %eax,(%esp)
 843ed36:	e8 0b 9f c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843ed3b:	8b 55 0c             	mov    0xc(%ebp),%edx
 843ed3e:	89 54 24 04          	mov    %edx,0x4(%esp)
 843ed42:	89 04 24             	mov    %eax,(%esp)
 843ed45:	e8 48 35 ca ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 843ed4a:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 843ed4f:	8d 55 f0             	lea    -0x10(%ebp),%edx
 843ed52:	89 54 24 08          	mov    %edx,0x8(%esp)
 843ed56:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 843ed5d:	00 
 843ed5e:	89 04 24             	mov    %eax,(%esp)
 843ed61:	e8 78 22 13 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 843ed66:	eb 1b                	jmp    843ed83 <_ZN23DB_UpdateItemCountValue11makeRequestEjj+0xdf>
 843ed68:	89 d3                	mov    %edx,%ebx
 843ed6a:	89 c6                	mov    %eax,%esi
 843ed6c:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843ed6f:	89 04 24             	mov    %eax,(%esp)
 843ed72:	e8 5b db 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 843ed77:	89 f0                	mov    %esi,%eax
 843ed79:	89 da                	mov    %ebx,%edx
 843ed7b:	89 04 24             	mov    %eax,(%esp)
 843ed7e:	e8 cd 49 6a 00       	call   8ae3750 <_Unwind_Resume>
 843ed83:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843ed86:	89 04 24             	mov    %eax,(%esp)
 843ed89:	e8 44 db 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 843ed8e:	83 c4 20             	add    $0x20,%esp
 843ed91:	5b                   	pop    %ebx
 843ed92:	5e                   	pop    %esi
 843ed93:	5d                   	pop    %ebp
 843ed94:	c3                   	ret
 843ed95:	90                   	nop

```

```c
// DB_UpdateItemCountValue::makeRequest @ 0x843eca4

/* DB_UpdateItemCountValue::makeRequest(unsigned int, unsigned int) */

void DB_UpdateItemCountValue::makeRequest(uint param_1,uint param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x960e);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0843ecf6 to 0843ed65 has its CatchHandler @ 0843ed68 */
  CStreamGuard::operator<<(pCVar2,0x240);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}

```

