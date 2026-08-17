# DB_SaveMercenaryData

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 084458c6 DB_SaveMercenaryData::dispatch  [0x084458c6-0x8445aa5] ===
 84458c6:	55                   	push   %ebp
 84458c7:	89 e5                	mov    %esp,%ebp
 84458c9:	57                   	push   %edi
 84458ca:	56                   	push   %esi
 84458cb:	53                   	push   %ebx
 84458cc:	83 ec 3c             	sub    $0x3c,%esp
 84458cf:	8b 45 14             	mov    0x14(%ebp),%eax
 84458d2:	89 04 24             	mov    %eax,(%esp)
 84458d5:	e8 04 e9 00 00       	call   84541de <_ZN6Stream12GetOutBufferI21SIG_MERCENARY_DB_DATAEEPT_v>
 84458da:	89 45 dc             	mov    %eax,-0x24(%ebp)
 84458dd:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 84458e1:	75 0a                	jne    84458ed <_ZN20DB_SaveMercenaryData8dispatchEiiP6Stream+0x27>
 84458e3:	b8 00 00 00 00       	mov    $0x0,%eax
 84458e8:	e9 b0 01 00 00       	jmp    8445a9d <_ZN20DB_SaveMercenaryData8dispatchEiiP6Stream+0x1d7>
 84458ed:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84458f0:	8b 00                	mov    (%eax),%eax
 84458f2:	85 c0                	test   %eax,%eax
 84458f4:	7e 0a                	jle    8445900 <_ZN20DB_SaveMercenaryData8dispatchEiiP6Stream+0x3a>
 84458f6:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84458f9:	8b 00                	mov    (%eax),%eax
 84458fb:	83 f8 1e             	cmp    $0x1e,%eax
 84458fe:	7e 0a                	jle    844590a <_ZN20DB_SaveMercenaryData8dispatchEiiP6Stream+0x44>
 8445900:	b8 00 00 00 00       	mov    $0x0,%eax
 8445905:	e9 93 01 00 00       	jmp    8445a9d <_ZN20DB_SaveMercenaryData8dispatchEiiP6Stream+0x1d7>
 844590a:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 844590f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8445916:	00 
 8445917:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 844591e:	00 
 844591f:	89 04 24             	mov    %eax,(%esp)
 8445922:	e8 17 f9 fa ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8445927:	89 45 e0             	mov    %eax,-0x20(%ebp)
 844592a:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8445931:	e9 4f 01 00 00       	jmp    8445a85 <_ZN20DB_SaveMercenaryData8dispatchEiiP6Stream+0x1bf>
 8445936:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8445939:	8b 55 dc             	mov    -0x24(%ebp),%edx
 844593c:	6b c0 54             	imul   $0x54,%eax,%eax
 844593f:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8445942:	83 c0 04             	add    $0x4,%eax
 8445945:	8b 30                	mov    (%eax),%esi
 8445947:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 844594a:	8b 55 dc             	mov    -0x24(%ebp),%edx
 844594d:	6b c0 54             	imul   $0x54,%eax,%eax
 8445950:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8445953:	83 c0 30             	add    $0x30,%eax
 8445956:	0f b6 40 05          	movzbl 0x5(%eax),%eax
 844595a:	0f be d8             	movsbl %al,%ebx
 844595d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8445960:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8445963:	6b c0 54             	imul   $0x54,%eax,%eax
 8445966:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8445969:	83 c0 30             	add    $0x30,%eax
 844596c:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 8445970:	0f be c8             	movsbl %al,%ecx
 8445973:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8445976:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8445979:	6b c0 54             	imul   $0x54,%eax,%eax
 844597c:	8d 04 02             	lea    (%edx,%eax,1),%eax
 844597f:	83 c0 30             	add    $0x30,%eax
 8445982:	8b 10                	mov    (%eax),%edx
 8445984:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8445987:	8b 7d dc             	mov    -0x24(%ebp),%edi
 844598a:	6b c0 54             	imul   $0x54,%eax,%eax
 844598d:	8d 04 07             	lea    (%edi,%eax,1),%eax
 8445990:	83 c0 2c             	add    $0x2c,%eax
 8445993:	8b 00                	mov    (%eax),%eax
 8445995:	89 74 24 18          	mov    %esi,0x18(%esp)
 8445999:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 844599d:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 84459a1:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84459a5:	89 44 24 08          	mov    %eax,0x8(%esp)
 84459a9:	c7 44 24 04 d0 76 c5 	movl   $0x8c576d0,0x4(%esp)
 84459b0:	08 
 84459b1:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84459b4:	89 04 24             	mov    %eax,(%esp)
 84459b7:	e8 04 e8 fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84459bc:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84459c3:	00 
 84459c4:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84459c7:	89 04 24             	mov    %eax,(%esp)
 84459ca:	e8 57 e9 fa ff       	call   83f4326 <_ZN5MySQL4execEb>
 84459cf:	83 f0 01             	xor    $0x1,%eax
 84459d2:	84 c0                	test   %al,%al
 84459d4:	0f 84 a7 00 00 00    	je     8445a81 <_ZN20DB_SaveMercenaryData8dispatchEiiP6Stream+0x1bb>
 84459da:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84459dd:	8b 55 dc             	mov    -0x24(%ebp),%edx
 84459e0:	6b c0 54             	imul   $0x54,%eax,%eax
 84459e3:	8d 04 02             	lea    (%edx,%eax,1),%eax
 84459e6:	83 c0 04             	add    $0x4,%eax
 84459e9:	8b 30                	mov    (%eax),%esi
 84459eb:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84459ee:	8b 55 dc             	mov    -0x24(%ebp),%edx
 84459f1:	6b c0 54             	imul   $0x54,%eax,%eax
 84459f4:	8d 04 02             	lea    (%edx,%eax,1),%eax
 84459f7:	83 c0 30             	add    $0x30,%eax
 84459fa:	0f b6 40 05          	movzbl 0x5(%eax),%eax
 84459fe:	0f be d8             	movsbl %al,%ebx
 8445a01:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8445a04:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8445a07:	6b c0 54             	imul   $0x54,%eax,%eax
 8445a0a:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8445a0d:	83 c0 30             	add    $0x30,%eax
 8445a10:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 8445a14:	0f be c8             	movsbl %al,%ecx
 8445a17:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8445a1a:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8445a1d:	6b c0 54             	imul   $0x54,%eax,%eax
 8445a20:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8445a23:	83 c0 30             	add    $0x30,%eax
 8445a26:	8b 10                	mov    (%eax),%edx
 8445a28:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8445a2b:	8b 7d dc             	mov    -0x24(%ebp),%edi
 8445a2e:	6b c0 54             	imul   $0x54,%eax,%eax
 8445a31:	8d 04 07             	lea    (%edi,%eax,1),%eax
 8445a34:	83 c0 2c             	add    $0x2c,%eax
 8445a37:	8b 00                	mov    (%eax),%eax
 8445a39:	89 74 24 18          	mov    %esi,0x18(%esp)
 8445a3d:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 8445a41:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8445a45:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8445a49:	89 44 24 08          	mov    %eax,0x8(%esp)
 8445a4d:	c7 44 24 04 58 77 c5 	movl   $0x8c57758,0x4(%esp)
 8445a54:	08 
 8445a55:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8445a58:	89 04 24             	mov    %eax,(%esp)
 8445a5b:	e8 60 e7 fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8445a60:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8445a67:	00 
 8445a68:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8445a6b:	89 04 24             	mov    %eax,(%esp)
 8445a6e:	e8 b3 e8 fa ff       	call   83f4326 <_ZN5MySQL4execEb>
 8445a73:	83 f0 01             	xor    $0x1,%eax
 8445a76:	84 c0                	test   %al,%al
 8445a78:	74 07                	je     8445a81 <_ZN20DB_SaveMercenaryData8dispatchEiiP6Stream+0x1bb>
 8445a7a:	b8 00 00 00 00       	mov    $0x0,%eax
 8445a7f:	eb 1c                	jmp    8445a9d <_ZN20DB_SaveMercenaryData8dispatchEiiP6Stream+0x1d7>
 8445a81:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 8445a85:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8445a88:	8b 00                	mov    (%eax),%eax
 8445a8a:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 8445a8d:	0f 9f c0             	setg   %al
 8445a90:	84 c0                	test   %al,%al
 8445a92:	0f 85 9e fe ff ff    	jne    8445936 <_ZN20DB_SaveMercenaryData8dispatchEiiP6Stream+0x70>
 8445a98:	b8 01 00 00 00       	mov    $0x1,%eax
 8445a9d:	83 c4 3c             	add    $0x3c,%esp
 8445aa0:	5b                   	pop    %ebx
 8445aa1:	5e                   	pop    %esi
 8445aa2:	5f                   	pop    %edi
 8445aa3:	5d                   	pop    %ebp
 8445aa4:	c3                   	ret
 8445aa5:	90                   	nop

```

```c
// DB_SaveMercenaryData::dispatch @ 0x84458c6

/* DB_SaveMercenaryData::dispatch(int, int, Stream*) */

undefined4 DB_SaveMercenaryData::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  SIG_MERCENARY_DB_DATA *pSVar2;
  undefined4 uVar3;
  MySQL *this;
  Stream *in_stack_00000010;
  int local_20;
  
  pSVar2 = Stream::GetOutBuffer<SIG_MERCENARY_DB_DATA>(in_stack_00000010);
  if (pSVar2 == (SIG_MERCENARY_DB_DATA *)0x0) {
    uVar3 = 0;
  }
  else if ((*(int *)pSVar2 < 1) || (0x1e < *(int *)pSVar2)) {
    uVar3 = 0;
  }
  else {
    this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
    for (local_20 = 0; local_20 < *(int *)pSVar2; local_20 = local_20 + 1) {
      MySQL::set_query(this,
                       "upDate charac_link_bonus set mercenary_start_time=%d,mercenary_finish_time=%d,mercenary_area=%d,mercenary_period=%d where charac_no=%u"
                       ,*(undefined4 *)(pSVar2 + local_20 * 0x54 + 0x2c),
                       *(undefined4 *)(pSVar2 + local_20 * 0x54 + 0x30),
                       (int)(char)pSVar2[local_20 * 0x54 + 0x34],
                       (int)(char)pSVar2[local_20 * 0x54 + 0x35],
                       *(undefined4 *)(pSVar2 + local_20 * 0x54 + 4));
      cVar1 = MySQL::exec(this,true);
      if (cVar1 != '\x01') {
        MySQL::set_query(this,
                         "inSert into charac_info(mercenary_start_time,mercenary_finish_time,mercenary_area,mercenary_period) values(%d,%d,%d,%d) where charac_no=%u"
                         ,*(undefined4 *)(pSVar2 + local_20 * 0x54 + 0x2c),
                         *(undefined4 *)(pSVar2 + local_20 * 0x54 + 0x30),
                         (int)(char)pSVar2[local_20 * 0x54 + 0x34],
                         (int)(char)pSVar2[local_20 * 0x54 + 0x35],
                         *(undefined4 *)(pSVar2 + local_20 * 0x54 + 4));
        cVar1 = MySQL::exec(this,true);
        if (cVar1 != '\x01') {
          return 0;
        }
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}

```

