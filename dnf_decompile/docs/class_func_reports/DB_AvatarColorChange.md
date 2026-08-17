# DB_AvatarColorChange

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 08446944 DB_AvatarColorChange::dispatch  [0x08446944-0x8446a1d] ===
 8446944:	55                   	push   %ebp
 8446945:	89 e5                	mov    %esp,%ebp
 8446947:	53                   	push   %ebx
 8446948:	83 ec 44             	sub    $0x44,%esp
 844694b:	8b 45 14             	mov    0x14(%ebp),%eax
 844694e:	89 04 24             	mov    %eax,(%esp)
 8446951:	e8 1a da 00 00       	call   8454370 <_ZN6Stream12GetOutBufferI23SIG_AVATAR_COLOR_CHANGEEEPT_v>
 8446956:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8446959:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 844695e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8446965:	00 
 8446966:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 844696d:	00 
 844696e:	89 04 24             	mov    %eax,(%esp)
 8446971:	e8 c8 e8 fa ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8446976:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8446979:	8b 45 f0             	mov    -0x10(%ebp),%eax
 844697c:	8b 18                	mov    (%eax),%ebx
 844697e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8446981:	8b 48 04             	mov    0x4(%eax),%ecx
 8446984:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8446987:	0f b7 40 0a          	movzwl 0xa(%eax),%eax
 844698b:	0f b7 d0             	movzwl %ax,%edx
 844698e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8446991:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 8446995:	0f b7 c0             	movzwl %ax,%eax
 8446998:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 844699c:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 84469a0:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84469a4:	89 44 24 08          	mov    %eax,0x8(%esp)
 84469a8:	c7 44 24 04 30 7c c5 	movl   $0x8c57c30,0x4(%esp)
 84469af:	08 
 84469b0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84469b3:	89 04 24             	mov    %eax,(%esp)
 84469b6:	e8 05 d8 fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84469bb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84469c2:	00 
 84469c3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84469c6:	89 04 24             	mov    %eax,(%esp)
 84469c9:	e8 58 d9 fa ff       	call   83f4326 <_ZN5MySQL4execEb>
 84469ce:	83 f0 01             	xor    $0x1,%eax
 84469d1:	84 c0                	test   %al,%al
 84469d3:	74 3d                	je     8446a12 <_ZN20DB_AvatarColorChange8dispatchEiiP6Stream+0xce>
 84469d5:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 84469dc:	00 
 84469dd:	c7 44 24 08 70 ae 00 	movl   $0xae70,0x8(%esp)
 84469e4:	00 
 84469e5:	c7 44 24 04 20 b3 c5 	movl   $0x8c5b320,0x4(%esp)
 84469ec:	08 
 84469ed:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84469f0:	89 04 24             	mov    %eax,(%esp)
 84469f3:	e8 20 8d 10 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84469f8:	c7 44 24 04 7c 7c c5 	movl   $0x8c57c7c,0x4(%esp)
 84469ff:	08 
 8446a00:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8446a03:	89 04 24             	mov    %eax,(%esp)
 8446a06:	e8 7d 8d 10 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8446a0b:	b8 00 00 00 00       	mov    $0x0,%eax
 8446a10:	eb 05                	jmp    8446a17 <_ZN20DB_AvatarColorChange8dispatchEiiP6Stream+0xd3>
 8446a12:	b8 01 00 00 00       	mov    $0x1,%eax
 8446a17:	83 c4 44             	add    $0x44,%esp
 8446a1a:	5b                   	pop    %ebx
 8446a1b:	5d                   	pop    %ebp
 8446a1c:	c3                   	ret
 8446a1d:	90                   	nop

```

```c
// DB_AvatarColorChange::dispatch @ 0x8446944

/* DB_AvatarColorChange::dispatch(int, int, Stream*) */

bool DB_AvatarColorChange::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  Stream *in_stack_00000010;
  cMyTrace local_24 [16];
  SIG_AVATAR_COLOR_CHANGE *local_14;
  MySQL *local_10;
  
  local_14 = Stream::GetOutBuffer<SIG_AVATAR_COLOR_CHANGE>(in_stack_00000010);
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  MySQL::set_query(local_10,
                   "upDate user_items set color1=%d, color2=%d where ui_id=%d and charac_no=%d",
                   (uint)*(ushort *)(local_14 + 8),(uint)*(ushort *)(local_14 + 10),
                   *(undefined4 *)(local_14 + 4),*(undefined4 *)local_14);
  cVar1 = MySQL::exec(local_10,true);
  if (cVar1 != '\x01') {
    cMyTrace::cMyTrace(local_24,"virtual bool DB_AvatarColorChange::dispatch(int, int, Stream*)",
                       0xae70,5);
    cMyTrace::operator()(local_24,"AVATAR_COLOR_CHANGE::DB_UPDATE_FAIL");
  }
  return cVar1 == '\x01';
}

```

