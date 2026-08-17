# DB_UpdateCreatureItemList

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 0841fd12 DB_UpdateCreatureItemList::dispatch  [0x0841fd12-0x841fe0b] ===
 841fd12:	55                   	push   %ebp
 841fd13:	89 e5                	mov    %esp,%ebp
 841fd15:	56                   	push   %esi
 841fd16:	53                   	push   %ebx
 841fd17:	83 ec 30             	sub    $0x30,%esp
 841fd1a:	8b 45 14             	mov    0x14(%ebp),%eax
 841fd1d:	89 04 24             	mov    %eax,(%esp)
 841fd20:	e8 81 1d 03 00       	call   8451aa6 <_ZN6Stream12GetOutBufferI22SIG_CREATURE_ITEM_LISTEEPT_v>
 841fd25:	89 45 ec             	mov    %eax,-0x14(%ebp)
 841fd28:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 841fd2d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 841fd34:	00 
 841fd35:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 841fd3c:	00 
 841fd3d:	89 04 24             	mov    %eax,(%esp)
 841fd40:	e8 f9 54 fd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 841fd45:	89 45 f0             	mov    %eax,-0x10(%ebp)
 841fd48:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 841fd4f:	e9 98 00 00 00       	jmp    841fdec <_ZN25DB_UpdateCreatureItemList8dispatchEiiP6Stream+0xda>
 841fd54:	8b 45 f4             	mov    -0xc(%ebp),%eax
 841fd57:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 841fd5a:	c1 e0 03             	shl    $0x3,%eax
 841fd5d:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 841fd64:	29 c2                	sub    %eax,%edx
 841fd66:	8d 04 11             	lea    (%ecx,%edx,1),%eax
 841fd69:	05 a4 21 00 00       	add    $0x21a4,%eax
 841fd6e:	8b 18                	mov    (%eax),%ebx
 841fd70:	8b 45 f4             	mov    -0xc(%ebp),%eax
 841fd73:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 841fd76:	c1 e0 03             	shl    $0x3,%eax
 841fd79:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 841fd80:	29 c2                	sub    %eax,%edx
 841fd82:	8d 04 11             	lea    (%ecx,%edx,1),%eax
 841fd85:	05 b8 21 00 00       	add    $0x21b8,%eax
 841fd8a:	8b 08                	mov    (%eax),%ecx
 841fd8c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 841fd8f:	8b 75 ec             	mov    -0x14(%ebp),%esi
 841fd92:	c1 e0 03             	shl    $0x3,%eax
 841fd95:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 841fd9c:	29 c2                	sub    %eax,%edx
 841fd9e:	8d 04 16             	lea    (%esi,%edx,1),%eax
 841fda1:	05 c0 21 00 00       	add    $0x21c0,%eax
 841fda6:	8b 00                	mov    (%eax),%eax
 841fda8:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 841fdac:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 841fdb0:	89 44 24 08          	mov    %eax,0x8(%esp)
 841fdb4:	c7 44 24 04 d0 c5 c4 	movl   $0x8c4c5d0,0x4(%esp)
 841fdbb:	08 
 841fdbc:	8b 45 f0             	mov    -0x10(%ebp),%eax
 841fdbf:	89 04 24             	mov    %eax,(%esp)
 841fdc2:	e8 f9 43 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 841fdc7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 841fdce:	00 
 841fdcf:	8b 45 f0             	mov    -0x10(%ebp),%eax
 841fdd2:	89 04 24             	mov    %eax,(%esp)
 841fdd5:	e8 4c 45 fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 841fdda:	83 f0 01             	xor    $0x1,%eax
 841fddd:	84 c0                	test   %al,%al
 841fddf:	74 07                	je     841fde8 <_ZN25DB_UpdateCreatureItemList8dispatchEiiP6Stream+0xd6>
 841fde1:	b8 00 00 00 00       	mov    $0x0,%eax
 841fde6:	eb 1c                	jmp    841fe04 <_ZN25DB_UpdateCreatureItemList8dispatchEiiP6Stream+0xf2>
 841fde8:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 841fdec:	8b 45 ec             	mov    -0x14(%ebp),%eax
 841fdef:	8b 00                	mov    (%eax),%eax
 841fdf1:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 841fdf4:	0f 9f c0             	setg   %al
 841fdf7:	84 c0                	test   %al,%al
 841fdf9:	0f 85 55 ff ff ff    	jne    841fd54 <_ZN25DB_UpdateCreatureItemList8dispatchEiiP6Stream+0x42>
 841fdff:	b8 01 00 00 00       	mov    $0x1,%eax
 841fe04:	83 c4 30             	add    $0x30,%esp
 841fe07:	5b                   	pop    %ebx
 841fe08:	5e                   	pop    %esi
 841fe09:	5d                   	pop    %ebp
 841fe0a:	c3                   	ret
 841fe0b:	90                   	nop

```

```c
// DB_UpdateCreatureItemList::dispatch @ 0x841fd12

/* DB_UpdateCreatureItemList::dispatch(int, int, Stream*) */

undefined4 DB_UpdateCreatureItemList::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  SIG_CREATURE_ITEM_LIST *pSVar2;
  MySQL *this;
  Stream *in_stack_00000010;
  int local_10;
  
  pSVar2 = Stream::GetOutBuffer<SIG_CREATURE_ITEM_LIST>(in_stack_00000010);
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  local_10 = 0;
  while( true ) {
    if (*(int *)pSVar2 <= local_10) {
      return 1;
    }
    MySQL::set_query(this,"upDate creature_items set exp=%d,stomach=%d where ui_id=%d",
                     *(undefined4 *)(pSVar2 + local_10 * 0x38 + 0x21c0),
                     *(undefined4 *)(pSVar2 + local_10 * 0x38 + 0x21b8),
                     *(undefined4 *)(pSVar2 + local_10 * 0x38 + 0x21a4));
    cVar1 = MySQL::exec(this,true);
    if (cVar1 != '\x01') break;
    local_10 = local_10 + 1;
  }
  return 0;
}

```

