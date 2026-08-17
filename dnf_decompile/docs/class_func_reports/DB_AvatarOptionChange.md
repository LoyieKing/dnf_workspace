# DB_AvatarOptionChange

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 0844687e DB_AvatarOptionChange::dispatch  [0x0844687e-0x8446943] ===
 844687e:	55                   	push   %ebp
 844687f:	89 e5                	mov    %esp,%ebp
 8446881:	83 ec 48             	sub    $0x48,%esp
 8446884:	8b 45 14             	mov    0x14(%ebp),%eax
 8446887:	89 04 24             	mov    %eax,(%esp)
 844688a:	e8 8d da 00 00       	call   845431c <_ZN6Stream12GetOutBufferI24SIG_AVATAR_OPTION_CHANGEEEPT_v>
 844688f:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8446892:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8446897:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 844689e:	00 
 844689f:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 84468a6:	00 
 84468a7:	89 04 24             	mov    %eax,(%esp)
 84468aa:	e8 8f e9 fa ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 84468af:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84468b2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84468b5:	8b 48 08             	mov    0x8(%eax),%ecx
 84468b8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84468bb:	8b 10                	mov    (%eax),%edx
 84468bd:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84468c0:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 84468c4:	0f b6 c0             	movzbl %al,%eax
 84468c7:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 84468cb:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84468cf:	89 44 24 08          	mov    %eax,0x8(%esp)
 84468d3:	c7 44 24 04 c8 7b c5 	movl   $0x8c57bc8,0x4(%esp)
 84468da:	08 
 84468db:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84468de:	89 04 24             	mov    %eax,(%esp)
 84468e1:	e8 da d8 fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84468e6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84468ed:	00 
 84468ee:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84468f1:	89 04 24             	mov    %eax,(%esp)
 84468f4:	e8 2d da fa ff       	call   83f4326 <_ZN5MySQL4execEb>
 84468f9:	83 f0 01             	xor    $0x1,%eax
 84468fc:	84 c0                	test   %al,%al
 84468fe:	74 3d                	je     844693d <_ZN21DB_AvatarOptionChange8dispatchEiiP6Stream+0xbf>
 8446900:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8446907:	00 
 8446908:	c7 44 24 08 5c ae 00 	movl   $0xae5c,0x8(%esp)
 844690f:	00 
 8446910:	c7 44 24 04 60 b3 c5 	movl   $0x8c5b360,0x4(%esp)
 8446917:	08 
 8446918:	8d 45 e0             	lea    -0x20(%ebp),%eax
 844691b:	89 04 24             	mov    %eax,(%esp)
 844691e:	e8 f5 8d 10 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8446923:	c7 44 24 04 0c 7c c5 	movl   $0x8c57c0c,0x4(%esp)
 844692a:	08 
 844692b:	8d 45 e0             	lea    -0x20(%ebp),%eax
 844692e:	89 04 24             	mov    %eax,(%esp)
 8446931:	e8 52 8e 10 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8446936:	b8 00 00 00 00       	mov    $0x0,%eax
 844693b:	eb 05                	jmp    8446942 <_ZN21DB_AvatarOptionChange8dispatchEiiP6Stream+0xc4>
 844693d:	b8 01 00 00 00       	mov    $0x1,%eax
 8446942:	c9                   	leave
 8446943:	c3                   	ret

```

```c
// DB_AvatarOptionChange::dispatch @ 0x844687e

/* DB_AvatarOptionChange::dispatch(int, int, Stream*) */

bool DB_AvatarOptionChange::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  Stream *in_stack_00000010;
  cMyTrace local_24 [16];
  SIG_AVATAR_OPTION_CHANGE *local_14;
  MySQL *local_10;
  
  local_14 = Stream::GetOutBuffer<SIG_AVATAR_OPTION_CHANGE>(in_stack_00000010);
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  MySQL::set_query(local_10,"upDate user_items set ability_no=%d where ui_id=%d and charac_no=%d",
                   (uint)(byte)local_14[4],*(undefined4 *)local_14,*(undefined4 *)(local_14 + 8));
  cVar1 = MySQL::exec(local_10,true);
  if (cVar1 != '\x01') {
    cMyTrace::cMyTrace(local_24,"virtual bool DB_AvatarOptionChange::dispatch(int, int, Stream*)",
                       0xae5c,5);
    cMyTrace::operator()(local_24,"AVATAR_OPTION_CHAGE::DB_UPDATE_FAIL");
  }
  return cVar1 == '\x01';
}

```

