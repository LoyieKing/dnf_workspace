# DB_UpdateNPCRelationship

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 08435e1e DB_UpdateNPCRelationship::dispatch  [0x08435e1e-0x8435ecb] ===
 8435e1e:	55                   	push   %ebp
 8435e1f:	89 e5                	mov    %esp,%ebp
 8435e21:	53                   	push   %ebx
 8435e22:	83 ec 34             	sub    $0x34,%esp
 8435e25:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8435e2a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8435e31:	00 
 8435e32:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8435e39:	00 
 8435e3a:	89 04 24             	mov    %eax,(%esp)
 8435e3d:	e8 fc f3 fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8435e42:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8435e45:	8b 45 14             	mov    0x14(%ebp),%eax
 8435e48:	89 04 24             	mov    %eax,(%esp)
 8435e4b:	e8 cc d3 01 00       	call   845321c <_ZN6Stream12GetOutBufferI27SIG_UPDATE_NPC_RELATIONSHIPEEPT_v>
 8435e50:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8435e53:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8435e56:	8b 18                	mov    (%eax),%ebx
 8435e58:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8435e5b:	8b 50 04             	mov    0x4(%eax),%edx
 8435e5e:	89 d0                	mov    %edx,%eax
 8435e60:	01 c0                	add    %eax,%eax
 8435e62:	01 d0                	add    %edx,%eax
 8435e64:	c1 e0 02             	shl    $0x2,%eax
 8435e67:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8435e6a:	83 c2 08             	add    $0x8,%edx
 8435e6d:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8435e71:	89 54 24 08          	mov    %edx,0x8(%esp)
 8435e75:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8435e7c:	00 
 8435e7d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8435e80:	89 04 24             	mov    %eax,(%esp)
 8435e83:	e8 a2 e6 fb ff       	call   83f452a <_ZN5MySQL11blob_to_strEiPvi>
 8435e88:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8435e8b:	8b 52 04             	mov    0x4(%edx),%edx
 8435e8e:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8435e92:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8435e96:	89 54 24 08          	mov    %edx,0x8(%esp)
 8435e9a:	c7 44 24 04 b8 34 c5 	movl   $0x8c534b8,0x4(%esp)
 8435ea1:	08 
 8435ea2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8435ea5:	89 04 24             	mov    %eax,(%esp)
 8435ea8:	e8 13 e3 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8435ead:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8435eb4:	00 
 8435eb5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8435eb8:	89 04 24             	mov    %eax,(%esp)
 8435ebb:	e8 66 e4 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 8435ec0:	b8 01 00 00 00       	mov    $0x1,%eax
 8435ec5:	83 c4 34             	add    $0x34,%esp
 8435ec8:	5b                   	pop    %ebx
 8435ec9:	5d                   	pop    %ebp
 8435eca:	c3                   	ret
 8435ecb:	90                   	nop

```

```c
// DB_UpdateNPCRelationship::dispatch @ 0x8435e1e

/* DB_UpdateNPCRelationship::dispatch(int, int, Stream*) */

undefined4 DB_UpdateNPCRelationship::dispatch(int param_1,int param_2,Stream *param_3)

{
  undefined4 uVar1;
  MySQL *this;
  SIG_UPDATE_NPC_RELATIONSHIP *pSVar2;
  undefined4 uVar3;
  Stream *in_stack_00000010;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  pSVar2 = Stream::GetOutBuffer<SIG_UPDATE_NPC_RELATIONSHIP>(in_stack_00000010);
  uVar1 = *(undefined4 *)pSVar2;
  uVar3 = MySQL::blob_to_str(this,0,pSVar2 + 8,*(int *)(pSVar2 + 4) * 0xc);
  MySQL::set_query(this,"upDate charac_npc set npc_cnt=%d,npc_data=\'%s\' where charac_no=%d",
                   *(undefined4 *)(pSVar2 + 4),uVar3,uVar1);
  MySQL::exec(this,true);
  return 1;
}

```

