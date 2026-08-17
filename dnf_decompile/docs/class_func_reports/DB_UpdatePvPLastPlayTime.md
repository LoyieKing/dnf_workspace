# DB_UpdatePvPLastPlayTime

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 084317b2 DB_UpdatePvPLastPlayTime::dispatch  [0x084317b2-0x84318c3] ===
 84317b2:	55                   	push   %ebp
 84317b3:	89 e5                	mov    %esp,%ebp
 84317b5:	56                   	push   %esi
 84317b6:	53                   	push   %ebx
 84317b7:	83 ec 20             	sub    $0x20,%esp
 84317ba:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 84317bf:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84317c6:	00 
 84317c7:	c7 44 24 04 10 00 00 	movl   $0x10,0x4(%esp)
 84317ce:	00 
 84317cf:	89 04 24             	mov    %eax,(%esp)
 84317d2:	e8 67 3a fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 84317d7:	89 45 e8             	mov    %eax,-0x18(%ebp)
 84317da:	8b 45 14             	mov    0x14(%ebp),%eax
 84317dd:	89 04 24             	mov    %eax,(%esp)
 84317e0:	e8 3f 16 02 00       	call   8452e24 <_ZN6Stream12GetOutBufferI16Packet_PvPResultEEPT_v>
 84317e5:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84317e8:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 84317ef:	e9 ab 00 00 00       	jmp    843189f <_ZN24DB_UpdatePvPLastPlayTime8dispatchEiiP6Stream+0xed>
 84317f4:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 84317fb:	e9 8c 00 00 00       	jmp    843188c <_ZN24DB_UpdatePvPLastPlayTime8dispatchEiiP6Stream+0xda>
 8431800:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8431803:	8b 5d f0             	mov    -0x10(%ebp),%ebx
 8431806:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 8431809:	01 c0                	add    %eax,%eax
 843180b:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 8431812:	29 c2                	sub    %eax,%edx
 8431814:	8d 04 1a             	lea    (%edx,%ebx,1),%eax
 8431817:	83 c0 08             	add    $0x8,%eax
 843181a:	8b 5c 81 08          	mov    0x8(%ecx,%eax,4),%ebx
 843181e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8431821:	8b 75 f0             	mov    -0x10(%ebp),%esi
 8431824:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 8431827:	01 c0                	add    %eax,%eax
 8431829:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 8431830:	29 c2                	sub    %eax,%edx
 8431832:	8d 04 32             	lea    (%edx,%esi,1),%eax
 8431835:	83 c0 0c             	add    $0xc,%eax
 8431838:	8b 44 81 08          	mov    0x8(%ecx,%eax,4),%eax
 843183c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8431843:	00 
 8431844:	89 04 24             	mov    %eax,(%esp)
 8431847:	e8 ff 77 cd ff       	call   810904b <_Z14NumberToStringji>
 843184c:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8431850:	89 44 24 08          	mov    %eax,0x8(%esp)
 8431854:	c7 44 24 04 98 1d c5 	movl   $0x8c51d98,0x4(%esp)
 843185b:	08 
 843185c:	8b 45 e8             	mov    -0x18(%ebp),%eax
 843185f:	89 04 24             	mov    %eax,(%esp)
 8431862:	e8 59 29 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8431867:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843186e:	00 
 843186f:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8431872:	89 04 24             	mov    %eax,(%esp)
 8431875:	e8 ac 2a fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 843187a:	83 f0 01             	xor    $0x1,%eax
 843187d:	84 c0                	test   %al,%al
 843187f:	74 07                	je     8431888 <_ZN24DB_UpdatePvPLastPlayTime8dispatchEiiP6Stream+0xd6>
 8431881:	b8 00 00 00 00       	mov    $0x0,%eax
 8431886:	eb 34                	jmp    84318bc <_ZN24DB_UpdatePvPLastPlayTime8dispatchEiiP6Stream+0x10a>
 8431888:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 843188c:	83 7d f4 01          	cmpl   $0x1,-0xc(%ebp)
 8431890:	0f 9e c0             	setle  %al
 8431893:	84 c0                	test   %al,%al
 8431895:	0f 85 65 ff ff ff    	jne    8431800 <_ZN24DB_UpdatePvPLastPlayTime8dispatchEiiP6Stream+0x4e>
 843189b:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 843189f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84318a2:	0f b6 40 0f          	movzbl 0xf(%eax),%eax
 84318a6:	0f b6 c0             	movzbl %al,%eax
 84318a9:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 84318ac:	0f 9f c0             	setg   %al
 84318af:	84 c0                	test   %al,%al
 84318b1:	0f 85 3d ff ff ff    	jne    84317f4 <_ZN24DB_UpdatePvPLastPlayTime8dispatchEiiP6Stream+0x42>
 84318b7:	b8 01 00 00 00       	mov    $0x1,%eax
 84318bc:	83 c4 20             	add    $0x20,%esp
 84318bf:	5b                   	pop    %ebx
 84318c0:	5e                   	pop    %esi
 84318c1:	5d                   	pop    %ebp
 84318c2:	c3                   	ret
 84318c3:	90                   	nop

```

```c
// DB_UpdatePvPLastPlayTime::dispatch @ 0x84317b2

/* DB_UpdatePvPLastPlayTime::dispatch(int, int, Stream*) */

undefined4 DB_UpdatePvPLastPlayTime::dispatch(int param_1,int param_2,Stream *param_3)

{
  undefined4 uVar1;
  char cVar2;
  MySQL *this;
  Packet_PvPResult *pPVar3;
  undefined4 uVar4;
  Stream *in_stack_00000010;
  int local_14;
  int local_10;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,0x10,0);
  pPVar3 = Stream::GetOutBuffer<Packet_PvPResult>(in_stack_00000010);
  local_14 = 0;
  do {
    if ((int)(uint)(byte)pPVar3[0xf] <= local_14) {
      return 1;
    }
    for (local_10 = 0; local_10 < 2; local_10 = local_10 + 1) {
      uVar1 = *(undefined4 *)(pPVar3 + (local_10 * 0xe + local_14 + 8) * 4 + 8);
      uVar4 = NumberToString(*(uint *)(pPVar3 + (local_10 * 0xe + local_14 + 0xc) * 4 + 8),0);
      MySQL::set_query(this,
                       "upDate school_member set last_play_time=NOW()  where m_id=%s and school_id=%d"
                       ,uVar4,uVar1);
      cVar2 = MySQL::exec(this,true);
      if (cVar2 != '\x01') {
        return 0;
      }
    }
    local_14 = local_14 + 1;
  } while( true );
}

```

