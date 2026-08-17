# DB_UpdateQueryCountDbLogdb

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 0841c61a DB_UpdateQueryCountDbLogdb::dispatch  [0x0841c61a-0x841c74d] ===
 841c61a:	55                   	push   %ebp
 841c61b:	89 e5                	mov    %esp,%ebp
 841c61d:	56                   	push   %esi
 841c61e:	53                   	push   %ebx
 841c61f:	83 ec 40             	sub    $0x40,%esp
 841c622:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 841c627:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 841c62e:	00 
 841c62f:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 841c636:	00 
 841c637:	89 04 24             	mov    %eax,(%esp)
 841c63a:	e8 ff 8b fd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 841c63f:	89 45 f0             	mov    %eax,-0x10(%ebp)
 841c642:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 841c649:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 841c650:	8d 45 ec             	lea    -0x14(%ebp),%eax
 841c653:	89 44 24 04          	mov    %eax,0x4(%esp)
 841c657:	8b 45 14             	mov    0x14(%ebp),%eax
 841c65a:	89 04 24             	mov    %eax,(%esp)
 841c65d:	e8 62 ff 1f 00       	call   861c5c4 <_ZN6StreamrsERi>
 841c662:	8d 45 e8             	lea    -0x18(%ebp),%eax
 841c665:	89 44 24 04          	mov    %eax,0x4(%esp)
 841c669:	8b 45 14             	mov    0x14(%ebp),%eax
 841c66c:	89 04 24             	mov    %eax,(%esp)
 841c66f:	e8 50 ff 1f 00       	call   861c5c4 <_ZN6StreamrsERi>
 841c674:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 841c67b:	e9 b0 00 00 00       	jmp    841c730 <_ZN26DB_UpdateQueryCountDbLogdb8dispatchEiiP6Stream+0x116>
 841c680:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 841c687:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 841c68e:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 841c695:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 841c698:	89 44 24 04          	mov    %eax,0x4(%esp)
 841c69c:	8b 45 14             	mov    0x14(%ebp),%eax
 841c69f:	89 04 24             	mov    %eax,(%esp)
 841c6a2:	e8 1d ff 1f 00       	call   861c5c4 <_ZN6StreamrsERi>
 841c6a7:	8d 45 e0             	lea    -0x20(%ebp),%eax
 841c6aa:	89 44 24 04          	mov    %eax,0x4(%esp)
 841c6ae:	8b 45 14             	mov    0x14(%ebp),%eax
 841c6b1:	89 04 24             	mov    %eax,(%esp)
 841c6b4:	e8 0b ff 1f 00       	call   861c5c4 <_ZN6StreamrsERi>
 841c6b9:	8d 45 dc             	lea    -0x24(%ebp),%eax
 841c6bc:	89 44 24 04          	mov    %eax,0x4(%esp)
 841c6c0:	8b 45 14             	mov    0x14(%ebp),%eax
 841c6c3:	89 04 24             	mov    %eax,(%esp)
 841c6c6:	e8 f9 fe 1f 00       	call   861c5c4 <_ZN6StreamrsERi>
 841c6cb:	e8 b1 fa ca ff       	call   80cc181 <_Z14G_CEnvironmentv>
 841c6d0:	89 04 24             	mov    %eax,(%esp)
 841c6d3:	e8 f2 e3 d2 ff       	call   814aaca <_ZN12CEnvironment14get_channel_noEv>
 841c6d8:	8b 75 dc             	mov    -0x24(%ebp),%esi
 841c6db:	8b 5d e0             	mov    -0x20(%ebp),%ebx
 841c6de:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 841c6e1:	8b 55 ec             	mov    -0x14(%ebp),%edx
 841c6e4:	89 44 24 18          	mov    %eax,0x18(%esp)
 841c6e8:	89 74 24 14          	mov    %esi,0x14(%esp)
 841c6ec:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 841c6f0:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 841c6f4:	89 54 24 08          	mov    %edx,0x8(%esp)
 841c6f8:	c7 44 24 04 38 ba c4 	movl   $0x8c4ba38,0x4(%esp)
 841c6ff:	08 
 841c700:	8b 45 f0             	mov    -0x10(%ebp),%eax
 841c703:	89 04 24             	mov    %eax,(%esp)
 841c706:	e8 b5 7a fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 841c70b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 841c712:	00 
 841c713:	8b 45 f0             	mov    -0x10(%ebp),%eax
 841c716:	89 04 24             	mov    %eax,(%esp)
 841c719:	e8 08 7c fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 841c71e:	83 f0 01             	xor    $0x1,%eax
 841c721:	84 c0                	test   %al,%al
 841c723:	74 07                	je     841c72c <_ZN26DB_UpdateQueryCountDbLogdb8dispatchEiiP6Stream+0x112>
 841c725:	b8 00 00 00 00       	mov    $0x0,%eax
 841c72a:	eb 1a                	jmp    841c746 <_ZN26DB_UpdateQueryCountDbLogdb8dispatchEiiP6Stream+0x12c>
 841c72c:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 841c730:	8b 45 e8             	mov    -0x18(%ebp),%eax
 841c733:	39 45 f4             	cmp    %eax,-0xc(%ebp)
 841c736:	0f 9c c0             	setl   %al
 841c739:	84 c0                	test   %al,%al
 841c73b:	0f 85 3f ff ff ff    	jne    841c680 <_ZN26DB_UpdateQueryCountDbLogdb8dispatchEiiP6Stream+0x66>
 841c741:	b8 01 00 00 00       	mov    $0x1,%eax
 841c746:	83 c4 40             	add    $0x40,%esp
 841c749:	5b                   	pop    %ebx
 841c74a:	5e                   	pop    %esi
 841c74b:	5d                   	pop    %ebp
 841c74c:	c3                   	ret
 841c74d:	90                   	nop

```

```c
// DB_UpdateQueryCountDbLogdb::dispatch @ 0x841c61a

/* DB_UpdateQueryCountDbLogdb::dispatch(int, int, Stream*) */

undefined4 DB_UpdateQueryCountDbLogdb::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  CEnvironment *this;
  undefined4 uVar2;
  Stream *in_stack_00000010;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  MySQL *local_14;
  int local_10;
  
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  local_18 = 0;
  local_1c = 0;
  Stream::operator>>(in_stack_00000010,&local_18);
  Stream::operator>>(in_stack_00000010,&local_1c);
  local_10 = 0;
  while( true ) {
    if (local_1c <= local_10) {
      return 1;
    }
    local_20 = 0;
    local_24 = 0;
    local_28 = 0;
    Stream::operator>>(in_stack_00000010,&local_20);
    Stream::operator>>(in_stack_00000010,&local_24);
    Stream::operator>>(in_stack_00000010,&local_28);
    this = (CEnvironment *)G_CEnvironment();
    uVar2 = CEnvironment::get_channel_no(this);
    MySQL::set_query(local_14,
                     "inSert into log_query_stat(occ_time,q_id,total,response_time,gc_no) values(from_unixtime(%d),%d,%d,%d,%d)"
                     ,local_18,local_20,local_24,local_28,uVar2);
    cVar1 = MySQL::exec(local_14,true);
    if (cVar1 != '\x01') break;
    local_10 = local_10 + 1;
  }
  return 0;
}

```

