# DB_SaveSameMIDOtherCharLoginHack

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 08422680 DB_SaveSameMIDOtherCharLoginHack::dispatch  [0x08422680-0x8422741] ===
 8422680:	55                   	push   %ebp
 8422681:	89 e5                	mov    %esp,%ebp
 8422683:	57                   	push   %edi
 8422684:	56                   	push   %esi
 8422685:	53                   	push   %ebx
 8422686:	83 ec 3c             	sub    $0x3c,%esp
 8422689:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 842268e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8422695:	00 
 8422696:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 842269d:	00 
 842269e:	89 04 24             	mov    %eax,(%esp)
 84226a1:	e8 98 2b fd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 84226a6:	89 45 e0             	mov    %eax,-0x20(%ebp)
 84226a9:	8b 45 14             	mov    0x14(%ebp),%eax
 84226ac:	89 04 24             	mov    %eax,(%esp)
 84226af:	e8 ac f5 02 00       	call   8451c60 <_ZN6Stream12GetOutBufferI39SIG_SAVE_SAME_MID_OTHER_CHAR_LOGIN_HACKEEPT_v>
 84226b4:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84226b7:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84226ba:	8d 78 0c             	lea    0xc(%eax),%edi
 84226bd:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84226c0:	8b 70 08             	mov    0x8(%eax),%esi
 84226c3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84226c6:	8b 40 04             	mov    0x4(%eax),%eax
 84226c9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84226d0:	00 
 84226d1:	89 04 24             	mov    %eax,(%esp)
 84226d4:	e8 72 69 ce ff       	call   810904b <_Z14NumberToStringji>
 84226d9:	89 c3                	mov    %eax,%ebx
 84226db:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84226de:	8b 00                	mov    (%eax),%eax
 84226e0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84226e7:	00 
 84226e8:	89 04 24             	mov    %eax,(%esp)
 84226eb:	e8 5b 69 ce ff       	call   810904b <_Z14NumberToStringji>
 84226f0:	89 7c 24 14          	mov    %edi,0x14(%esp)
 84226f4:	89 74 24 10          	mov    %esi,0x10(%esp)
 84226f8:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84226fc:	89 44 24 08          	mov    %eax,0x8(%esp)
 8422700:	c7 44 24 04 34 d3 c4 	movl   $0x8c4d334,0x4(%esp)
 8422707:	08 
 8422708:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842270b:	89 04 24             	mov    %eax,(%esp)
 842270e:	e8 ad 1a fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8422713:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842271a:	00 
 842271b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842271e:	89 04 24             	mov    %eax,(%esp)
 8422721:	e8 00 1c fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 8422726:	83 f0 01             	xor    $0x1,%eax
 8422729:	84 c0                	test   %al,%al
 842272b:	74 07                	je     8422734 <_ZN32DB_SaveSameMIDOtherCharLoginHack8dispatchEiiP6Stream+0xb4>
 842272d:	b8 00 00 00 00       	mov    $0x0,%eax
 8422732:	eb 05                	jmp    8422739 <_ZN32DB_SaveSameMIDOtherCharLoginHack8dispatchEiiP6Stream+0xb9>
 8422734:	b8 01 00 00 00       	mov    $0x1,%eax
 8422739:	83 c4 3c             	add    $0x3c,%esp
 842273c:	5b                   	pop    %ebx
 842273d:	5e                   	pop    %esi
 842273e:	5f                   	pop    %edi
 842273f:	5d                   	pop    %ebp
 8422740:	c3                   	ret
 8422741:	90                   	nop

```

```c
// DB_SaveSameMIDOtherCharLoginHack::dispatch @ 0x8422680

/* DB_SaveSameMIDOtherCharLoginHack::dispatch(int, int, Stream*) */

bool DB_SaveSameMIDOtherCharLoginHack::dispatch(int param_1,int param_2,Stream *param_3)

{
  undefined4 uVar1;
  char cVar2;
  MySQL *this;
  SIG_SAVE_SAME_MID_OTHER_CHAR_LOGIN_HACK *pSVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  Stream *in_stack_00000010;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  pSVar3 = Stream::GetOutBuffer<SIG_SAVE_SAME_MID_OTHER_CHAR_LOGIN_HACK>(in_stack_00000010);
  uVar1 = *(undefined4 *)(pSVar3 + 8);
  uVar4 = NumberToString(*(uint *)(pSVar3 + 4),1);
  uVar5 = NumberToString(*(uint *)pSVar3,0);
  MySQL::set_query(this,"inSert into login_view_log values(now(),%s,%s,%d,\'%s\')",uVar5,uVar4,uVar1
                   ,pSVar3 + 0xc);
  cVar2 = MySQL::exec(this,true);
  return cVar2 == '\x01';
}

```

