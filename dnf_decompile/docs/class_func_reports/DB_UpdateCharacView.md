# DB_UpdateCharacView

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 08408848 DB_UpdateCharacView::dispatch  [0x08408848-0x8408a3b] ===
 8408848:	55                   	push   %ebp
 8408849:	89 e5                	mov    %esp,%ebp
 840884b:	57                   	push   %edi
 840884c:	53                   	push   %ebx
 840884d:	81 ec 30 19 00 00    	sub    $0x1930,%esp
 8408853:	8b 45 14             	mov    0x14(%ebp),%eax
 8408856:	89 04 24             	mov    %eax,(%esp)
 8408859:	e8 ec 7e 04 00       	call   845074a <_ZN6Stream12GetOutBufferI22SIG_UPDATE_CHARAC_VIEWEEPT_v>
 840885e:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8408861:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8408864:	0f b6 80 d4 14 00 00 	movzbl 0x14d4(%eax),%eax
 840886b:	0f b6 d0             	movzbl %al,%edx
 840886e:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8408873:	89 54 24 08          	mov    %edx,0x8(%esp)
 8408877:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 840887e:	00 
 840887f:	89 04 24             	mov    %eax,(%esp)
 8408882:	e8 b7 c9 fe ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8408887:	89 45 f4             	mov    %eax,-0xc(%ebp)
 840888a:	8d 95 e7 e6 ff ff    	lea    -0x1919(%ebp),%edx
 8408890:	bb 05 19 00 00       	mov    $0x1905,%ebx
 8408895:	b8 00 00 00 00       	mov    $0x0,%eax
 840889a:	89 d1                	mov    %edx,%ecx
 840889c:	83 e1 01             	and    $0x1,%ecx
 840889f:	85 c9                	test   %ecx,%ecx
 84088a1:	74 08                	je     84088ab <_ZN19DB_UpdateCharacView8dispatchEiiP6Stream+0x63>
 84088a3:	88 02                	mov    %al,(%edx)
 84088a5:	83 c2 01             	add    $0x1,%edx
 84088a8:	83 eb 01             	sub    $0x1,%ebx
 84088ab:	89 d1                	mov    %edx,%ecx
 84088ad:	83 e1 02             	and    $0x2,%ecx
 84088b0:	85 c9                	test   %ecx,%ecx
 84088b2:	74 09                	je     84088bd <_ZN19DB_UpdateCharacView8dispatchEiiP6Stream+0x75>
 84088b4:	66 89 02             	mov    %ax,(%edx)
 84088b7:	83 c2 02             	add    $0x2,%edx
 84088ba:	83 eb 02             	sub    $0x2,%ebx
 84088bd:	89 d9                	mov    %ebx,%ecx
 84088bf:	c1 e9 02             	shr    $0x2,%ecx
 84088c2:	89 d7                	mov    %edx,%edi
 84088c4:	f3 ab                	rep stos %eax,%es:(%edi)
 84088c6:	89 fa                	mov    %edi,%edx
 84088c8:	89 d9                	mov    %ebx,%ecx
 84088ca:	83 e1 02             	and    $0x2,%ecx
 84088cd:	85 c9                	test   %ecx,%ecx
 84088cf:	74 06                	je     84088d7 <_ZN19DB_UpdateCharacView8dispatchEiiP6Stream+0x8f>
 84088d1:	66 89 02             	mov    %ax,(%edx)
 84088d4:	83 c2 02             	add    $0x2,%edx
 84088d7:	89 d9                	mov    %ebx,%ecx
 84088d9:	83 e1 01             	and    $0x1,%ecx
 84088dc:	85 c9                	test   %ecx,%ecx
 84088de:	74 05                	je     84088e5 <_ZN19DB_UpdateCharacView8dispatchEiiP6Stream+0x9d>
 84088e0:	88 02                	mov    %al,(%edx)
 84088e2:	83 c2 01             	add    $0x1,%edx
 84088e5:	c7 45 ec 05 19 00 00 	movl   $0x1905,-0x14(%ebp)
 84088ec:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84088ef:	83 c0 04             	add    $0x4,%eax
 84088f2:	c7 44 24 0c d0 14 00 	movl   $0x14d0,0xc(%esp)
 84088f9:	00 
 84088fa:	89 44 24 08          	mov    %eax,0x8(%esp)
 84088fe:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8408901:	89 44 24 04          	mov    %eax,0x4(%esp)
 8408905:	8d 85 e7 e6 ff ff    	lea    -0x1919(%ebp),%eax
 840890b:	89 04 24             	mov    %eax,(%esp)
 840890e:	e8 0c 97 2a 00       	call   86b201f <_Z12compress_zipPcRjPKcj>
 8408913:	83 f0 01             	xor    $0x1,%eax
 8408916:	84 c0                	test   %al,%al
 8408918:	74 0a                	je     8408924 <_ZN19DB_UpdateCharacView8dispatchEiiP6Stream+0xdc>
 840891a:	b8 00 00 00 00       	mov    $0x0,%eax
 840891f:	e9 0d 01 00 00       	jmp    8408a31 <_ZN19DB_UpdateCharacView8dispatchEiiP6Stream+0x1e9>
 8408924:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8408927:	8b 00                	mov    (%eax),%eax
 8408929:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8408930:	00 
 8408931:	89 04 24             	mov    %eax,(%esp)
 8408934:	e8 12 07 d0 ff       	call   810904b <_Z14NumberToStringji>
 8408939:	89 c3                	mov    %eax,%ebx
 840893b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840893e:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8408942:	8d 85 e7 e6 ff ff    	lea    -0x1919(%ebp),%eax
 8408948:	89 44 24 08          	mov    %eax,0x8(%esp)
 840894c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8408953:	00 
 8408954:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8408957:	89 04 24             	mov    %eax,(%esp)
 840895a:	e8 cb bb fe ff       	call   83f452a <_ZN5MySQL11blob_to_strEiPvi>
 840895f:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8408963:	89 44 24 08          	mov    %eax,0x8(%esp)
 8408967:	c7 44 24 04 24 4f c4 	movl   $0x8c44f24,0x4(%esp)
 840896e:	08 
 840896f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8408972:	89 04 24             	mov    %eax,(%esp)
 8408975:	e8 46 b8 fe ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 840897a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8408981:	00 
 8408982:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8408985:	89 04 24             	mov    %eax,(%esp)
 8408988:	e8 99 b9 fe ff       	call   83f4326 <_ZN5MySQL4execEb>
 840898d:	83 f0 01             	xor    $0x1,%eax
 8408990:	84 c0                	test   %al,%al
 8408992:	75 11                	jne    84089a5 <_ZN19DB_UpdateCharacView8dispatchEiiP6Stream+0x15d>
 8408994:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8408997:	89 04 24             	mov    %eax,(%esp)
 840899a:	e8 71 b9 fe ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 840899f:	09 d0                	or     %edx,%eax
 84089a1:	85 c0                	test   %eax,%eax
 84089a3:	75 07                	jne    84089ac <_ZN19DB_UpdateCharacView8dispatchEiiP6Stream+0x164>
 84089a5:	b8 01 00 00 00       	mov    $0x1,%eax
 84089aa:	eb 05                	jmp    84089b1 <_ZN19DB_UpdateCharacView8dispatchEiiP6Stream+0x169>
 84089ac:	b8 00 00 00 00       	mov    $0x0,%eax
 84089b1:	84 c0                	test   %al,%al
 84089b3:	74 77                	je     8408a2c <_ZN19DB_UpdateCharacView8dispatchEiiP6Stream+0x1e4>
 84089b5:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84089b8:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84089bc:	8d 85 e7 e6 ff ff    	lea    -0x1919(%ebp),%eax
 84089c2:	89 44 24 08          	mov    %eax,0x8(%esp)
 84089c6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84089cd:	00 
 84089ce:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84089d1:	89 04 24             	mov    %eax,(%esp)
 84089d4:	e8 51 bb fe ff       	call   83f452a <_ZN5MySQL11blob_to_strEiPvi>
 84089d9:	89 c3                	mov    %eax,%ebx
 84089db:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84089de:	8b 00                	mov    (%eax),%eax
 84089e0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84089e7:	00 
 84089e8:	89 04 24             	mov    %eax,(%esp)
 84089eb:	e8 5b 06 d0 ff       	call   810904b <_Z14NumberToStringji>
 84089f0:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84089f4:	89 44 24 08          	mov    %eax,0x8(%esp)
 84089f8:	c7 44 24 04 54 4f c4 	movl   $0x8c44f54,0x4(%esp)
 84089ff:	08 
 8408a00:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8408a03:	89 04 24             	mov    %eax,(%esp)
 8408a06:	e8 b5 b7 fe ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8408a0b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8408a12:	00 
 8408a13:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8408a16:	89 04 24             	mov    %eax,(%esp)
 8408a19:	e8 08 b9 fe ff       	call   83f4326 <_ZN5MySQL4execEb>
 8408a1e:	83 f0 01             	xor    $0x1,%eax
 8408a21:	84 c0                	test   %al,%al
 8408a23:	74 07                	je     8408a2c <_ZN19DB_UpdateCharacView8dispatchEiiP6Stream+0x1e4>
 8408a25:	b8 00 00 00 00       	mov    $0x0,%eax
 8408a2a:	eb 05                	jmp    8408a31 <_ZN19DB_UpdateCharacView8dispatchEiiP6Stream+0x1e9>
 8408a2c:	b8 01 00 00 00       	mov    $0x1,%eax
 8408a31:	81 c4 30 19 00 00    	add    $0x1930,%esp
 8408a37:	5b                   	pop    %ebx
 8408a38:	5f                   	pop    %edi
 8408a39:	5d                   	pop    %ebp
 8408a3a:	c3                   	ret
 8408a3b:	90                   	nop

```

```c
// DB_UpdateCharacView::dispatch @ 0x8408848

/* DB_UpdateCharacView::dispatch(int, int, Stream*) */

undefined4 DB_UpdateCharacView::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  bool bVar7;
  byte bVar8;
  longlong lVar9;
  Stream *in_stack_00000010;
  char local_191d;
  char local_191c [6404];
  uint local_18;
  SIG_UPDATE_CHARAC_VIEW *local_14;
  MySQL *local_10;
  
  bVar8 = 0;
  local_14 = Stream::GetOutBuffer<SIG_UPDATE_CHARAC_VIEW>(in_stack_00000010);
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,local_14[0x14d4]);
  pcVar5 = &local_191d;
  uVar6 = 0x1905;
  bVar7 = ((uint)pcVar5 & 1) != 0;
  if (bVar7) {
    local_191d = '\0';
    pcVar5 = local_191c;
    uVar6 = 0x1904;
  }
  if (((uint)pcVar5 & 2) != 0) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5 = pcVar5 + 2;
    uVar6 = uVar6 - 2;
  }
  for (uVar4 = uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5[2] = '\0';
    pcVar5[3] = '\0';
    pcVar5 = pcVar5 + ((uint)bVar8 * -2 + 1) * 4;
  }
  if ((uVar6 & 2) != 0) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5 = pcVar5 + 2;
  }
  if (!bVar7) {
    *pcVar5 = '\0';
  }
  local_18 = 0x1905;
  cVar1 = compress_zip(&local_191d,&local_18,(char *)(local_14 + 4),0x14d0);
  if (cVar1 == '\x01') {
    uVar2 = NumberToString(*(uint *)local_14,0);
    uVar3 = MySQL::blob_to_str(local_10,0,&local_191d,local_18);
    MySQL::set_query(local_10,"upDate charac_view set info=\'%s\' where m_id=%s",uVar3,uVar2);
    cVar1 = MySQL::exec(local_10,true);
    if ((cVar1 == '\x01') && (lVar9 = MySQL::getAffectedRowCount(local_10), lVar9 != 0)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (bVar7) {
      uVar2 = MySQL::blob_to_str(local_10,0,&local_191d,local_18);
      uVar3 = NumberToString(*(uint *)local_14,0);
      MySQL::set_query(local_10,"inSert into charac_view(m_id,info) values(%s,\'%s\')",uVar3,uVar2);
      cVar1 = MySQL::exec(local_10,true);
      if (cVar1 != '\x01') {
        return 0;
      }
    }
    return 1;
  }
  return 0;
}

```

