# DB_SaveRedeemItemList

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 0840e074 DB_SaveRedeemItemList::dispatch  [0x0840e074-0x840e235] ===
 840e074:	55                   	push   %ebp
 840e075:	89 e5                	mov    %esp,%ebp
 840e077:	57                   	push   %edi
 840e078:	53                   	push   %ebx
 840e079:	81 ec f0 06 00 00    	sub    $0x6f0,%esp
 840e07f:	8b 45 14             	mov    0x14(%ebp),%eax
 840e082:	89 04 24             	mov    %eax,(%esp)
 840e085:	e8 ec 28 04 00       	call   8450976 <_ZN6Stream12GetOutBufferI25SIG_REDEEMINFO_LIST_TO_DBEEPT_v>
 840e08a:	89 45 f0             	mov    %eax,-0x10(%ebp)
 840e08d:	8d 95 25 f9 ff ff    	lea    -0x6db(%ebp),%edx
 840e093:	bb c7 06 00 00       	mov    $0x6c7,%ebx
 840e098:	b8 00 00 00 00       	mov    $0x0,%eax
 840e09d:	89 d1                	mov    %edx,%ecx
 840e09f:	83 e1 01             	and    $0x1,%ecx
 840e0a2:	85 c9                	test   %ecx,%ecx
 840e0a4:	74 08                	je     840e0ae <_ZN21DB_SaveRedeemItemList8dispatchEiiP6Stream+0x3a>
 840e0a6:	88 02                	mov    %al,(%edx)
 840e0a8:	83 c2 01             	add    $0x1,%edx
 840e0ab:	83 eb 01             	sub    $0x1,%ebx
 840e0ae:	89 d1                	mov    %edx,%ecx
 840e0b0:	83 e1 02             	and    $0x2,%ecx
 840e0b3:	85 c9                	test   %ecx,%ecx
 840e0b5:	74 09                	je     840e0c0 <_ZN21DB_SaveRedeemItemList8dispatchEiiP6Stream+0x4c>
 840e0b7:	66 89 02             	mov    %ax,(%edx)
 840e0ba:	83 c2 02             	add    $0x2,%edx
 840e0bd:	83 eb 02             	sub    $0x2,%ebx
 840e0c0:	89 d9                	mov    %ebx,%ecx
 840e0c2:	c1 e9 02             	shr    $0x2,%ecx
 840e0c5:	89 d7                	mov    %edx,%edi
 840e0c7:	f3 ab                	rep stos %eax,%es:(%edi)
 840e0c9:	89 fa                	mov    %edi,%edx
 840e0cb:	89 d9                	mov    %ebx,%ecx
 840e0cd:	83 e1 02             	and    $0x2,%ecx
 840e0d0:	85 c9                	test   %ecx,%ecx
 840e0d2:	74 06                	je     840e0da <_ZN21DB_SaveRedeemItemList8dispatchEiiP6Stream+0x66>
 840e0d4:	66 89 02             	mov    %ax,(%edx)
 840e0d7:	83 c2 02             	add    $0x2,%edx
 840e0da:	89 d9                	mov    %ebx,%ecx
 840e0dc:	83 e1 01             	and    $0x1,%ecx
 840e0df:	85 c9                	test   %ecx,%ecx
 840e0e1:	74 05                	je     840e0e8 <_ZN21DB_SaveRedeemItemList8dispatchEiiP6Stream+0x74>
 840e0e3:	88 02                	mov    %al,(%edx)
 840e0e5:	83 c2 01             	add    $0x1,%edx
 840e0e8:	c7 45 ec c7 06 00 00 	movl   $0x6c7,-0x14(%ebp)
 840e0ef:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840e0f2:	c7 44 24 0c 9c 05 00 	movl   $0x59c,0xc(%esp)
 840e0f9:	00 
 840e0fa:	89 44 24 08          	mov    %eax,0x8(%esp)
 840e0fe:	8d 45 ec             	lea    -0x14(%ebp),%eax
 840e101:	89 44 24 04          	mov    %eax,0x4(%esp)
 840e105:	8d 85 25 f9 ff ff    	lea    -0x6db(%ebp),%eax
 840e10b:	89 04 24             	mov    %eax,(%esp)
 840e10e:	e8 0c 3f 2a 00       	call   86b201f <_Z12compress_zipPcRjPKcj>
 840e113:	83 f0 01             	xor    $0x1,%eax
 840e116:	84 c0                	test   %al,%al
 840e118:	74 0a                	je     840e124 <_ZN21DB_SaveRedeemItemList8dispatchEiiP6Stream+0xb0>
 840e11a:	b8 00 00 00 00       	mov    $0x0,%eax
 840e11f:	e9 08 01 00 00       	jmp    840e22c <_ZN21DB_SaveRedeemItemList8dispatchEiiP6Stream+0x1b8>
 840e124:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 840e129:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840e130:	00 
 840e131:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 840e138:	00 
 840e139:	89 04 24             	mov    %eax,(%esp)
 840e13c:	e8 fd 70 fe ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 840e141:	89 45 f4             	mov    %eax,-0xc(%ebp)
 840e144:	8b 45 f0             	mov    -0x10(%ebp),%eax
 840e147:	8b 18                	mov    (%eax),%ebx
 840e149:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840e14c:	89 44 24 0c          	mov    %eax,0xc(%esp)
 840e150:	8d 85 25 f9 ff ff    	lea    -0x6db(%ebp),%eax
 840e156:	89 44 24 08          	mov    %eax,0x8(%esp)
 840e15a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 840e161:	00 
 840e162:	8b 45 f4             	mov    -0xc(%ebp),%eax
 840e165:	89 04 24             	mov    %eax,(%esp)
 840e168:	e8 bd 63 fe ff       	call   83f452a <_ZN5MySQL11blob_to_strEiPvi>
 840e16d:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 840e171:	89 44 24 08          	mov    %eax,0x8(%esp)
 840e175:	c7 44 24 04 2c 6d c4 	movl   $0x8c46d2c,0x4(%esp)
 840e17c:	08 
 840e17d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 840e180:	89 04 24             	mov    %eax,(%esp)
 840e183:	e8 38 60 fe ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 840e188:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 840e18f:	00 
 840e190:	8b 45 f4             	mov    -0xc(%ebp),%eax
 840e193:	89 04 24             	mov    %eax,(%esp)
 840e196:	e8 8b 61 fe ff       	call   83f4326 <_ZN5MySQL4execEb>
 840e19b:	83 f0 01             	xor    $0x1,%eax
 840e19e:	84 c0                	test   %al,%al
 840e1a0:	74 0a                	je     840e1ac <_ZN21DB_SaveRedeemItemList8dispatchEiiP6Stream+0x138>
 840e1a2:	b8 00 00 00 00       	mov    $0x0,%eax
 840e1a7:	e9 80 00 00 00       	jmp    840e22c <_ZN21DB_SaveRedeemItemList8dispatchEiiP6Stream+0x1b8>
 840e1ac:	8b 45 f4             	mov    -0xc(%ebp),%eax
 840e1af:	89 04 24             	mov    %eax,(%esp)
 840e1b2:	e8 59 61 fe ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 840e1b7:	09 d0                	or     %edx,%eax
 840e1b9:	85 c0                	test   %eax,%eax
 840e1bb:	0f 94 c0             	sete   %al
 840e1be:	84 c0                	test   %al,%al
 840e1c0:	74 65                	je     840e227 <_ZN21DB_SaveRedeemItemList8dispatchEiiP6Stream+0x1b3>
 840e1c2:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840e1c5:	89 44 24 0c          	mov    %eax,0xc(%esp)
 840e1c9:	8d 85 25 f9 ff ff    	lea    -0x6db(%ebp),%eax
 840e1cf:	89 44 24 08          	mov    %eax,0x8(%esp)
 840e1d3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 840e1da:	00 
 840e1db:	8b 45 f4             	mov    -0xc(%ebp),%eax
 840e1de:	89 04 24             	mov    %eax,(%esp)
 840e1e1:	e8 44 63 fe ff       	call   83f452a <_ZN5MySQL11blob_to_strEiPvi>
 840e1e6:	8b 55 f0             	mov    -0x10(%ebp),%edx
 840e1e9:	8b 12                	mov    (%edx),%edx
 840e1eb:	89 44 24 0c          	mov    %eax,0xc(%esp)
 840e1ef:	89 54 24 08          	mov    %edx,0x8(%esp)
 840e1f3:	c7 44 24 04 70 6d c4 	movl   $0x8c46d70,0x4(%esp)
 840e1fa:	08 
 840e1fb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 840e1fe:	89 04 24             	mov    %eax,(%esp)
 840e201:	e8 ba 5f fe ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 840e206:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 840e20d:	00 
 840e20e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 840e211:	89 04 24             	mov    %eax,(%esp)
 840e214:	e8 0d 61 fe ff       	call   83f4326 <_ZN5MySQL4execEb>
 840e219:	83 f0 01             	xor    $0x1,%eax
 840e21c:	84 c0                	test   %al,%al
 840e21e:	74 07                	je     840e227 <_ZN21DB_SaveRedeemItemList8dispatchEiiP6Stream+0x1b3>
 840e220:	b8 00 00 00 00       	mov    $0x0,%eax
 840e225:	eb 05                	jmp    840e22c <_ZN21DB_SaveRedeemItemList8dispatchEiiP6Stream+0x1b8>
 840e227:	b8 01 00 00 00       	mov    $0x1,%eax
 840e22c:	81 c4 f0 06 00 00    	add    $0x6f0,%esp
 840e232:	5b                   	pop    %ebx
 840e233:	5f                   	pop    %edi
 840e234:	5d                   	pop    %ebp
 840e235:	c3                   	ret

```

```c
// DB_SaveRedeemItemList::dispatch @ 0x840e074

/* DB_SaveRedeemItemList::dispatch(int, int, Stream*) */

undefined4 DB_SaveRedeemItemList::dispatch(int param_1,int param_2,Stream *param_3)

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
  char local_6df;
  char local_6de [1734];
  uint local_18;
  SIG_REDEEMINFO_LIST_TO_DB *local_14;
  MySQL *local_10;
  
  bVar8 = 0;
  local_14 = Stream::GetOutBuffer<SIG_REDEEMINFO_LIST_TO_DB>(in_stack_00000010);
  pcVar5 = &local_6df;
  uVar6 = 0x6c7;
  bVar7 = ((uint)pcVar5 & 1) != 0;
  if (bVar7) {
    local_6df = '\0';
    pcVar5 = local_6de;
    uVar6 = 0x6c6;
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
  local_18 = 0x6c7;
  cVar1 = compress_zip(&local_6df,&local_18,(char *)local_14,0x59c);
  if (cVar1 == '\x01') {
    local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
    uVar2 = *(undefined4 *)local_14;
    uVar3 = MySQL::blob_to_str(local_10,0,&local_6df,local_18);
    MySQL::set_query(local_10,"upDate charac_inven_expand set redeem_info=\'%s\' where charac_no=%u"
                     ,uVar3,uVar2);
    cVar1 = MySQL::exec(local_10,true);
    if (cVar1 == '\x01') {
      lVar9 = MySQL::getAffectedRowCount(local_10);
      if (lVar9 == 0) {
        uVar2 = MySQL::blob_to_str(local_10,0,&local_6df,local_18);
        MySQL::set_query(local_10,
                         "inSert into charac_inven_expand(charac_no, redeem_info) values(%u, \'%s\')"
                         ,*(undefined4 *)local_14,uVar2);
        cVar1 = MySQL::exec(local_10,true);
        if (cVar1 != '\x01') {
          return 0;
        }
      }
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

