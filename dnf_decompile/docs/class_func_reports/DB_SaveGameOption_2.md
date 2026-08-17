# DB_SaveGameOption_2

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 0842fd42 DB_SaveGameOption_2::dispatch  [0x0842fd42-0x842ff4d] ===
 842fd42:	55                   	push   %ebp
 842fd43:	89 e5                	mov    %esp,%ebp
 842fd45:	57                   	push   %edi
 842fd46:	56                   	push   %esi
 842fd47:	53                   	push   %ebx
 842fd48:	81 ec 2c 01 00 00    	sub    $0x12c,%esp
 842fd4e:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 842fd53:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 842fd5a:	00 
 842fd5b:	c7 44 24 04 0b 00 00 	movl   $0xb,0x4(%esp)
 842fd62:	00 
 842fd63:	89 04 24             	mov    %eax,(%esp)
 842fd66:	e8 d3 54 fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 842fd6b:	89 45 e0             	mov    %eax,-0x20(%ebp)
 842fd6e:	8b 45 14             	mov    0x14(%ebp),%eax
 842fd71:	89 04 24             	mov    %eax,(%esp)
 842fd74:	e8 49 2e 02 00       	call   8452bc2 <_ZN6Stream12GetOutBufferI29SIG_LOAD_CHARAC_HOTKEY_OPTIONEEPT_v>
 842fd79:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 842fd7c:	8d 95 ef fe ff ff    	lea    -0x111(%ebp),%edx
 842fd82:	bb ed 00 00 00       	mov    $0xed,%ebx
 842fd87:	b8 00 00 00 00       	mov    $0x0,%eax
 842fd8c:	89 d1                	mov    %edx,%ecx
 842fd8e:	83 e1 01             	and    $0x1,%ecx
 842fd91:	85 c9                	test   %ecx,%ecx
 842fd93:	74 08                	je     842fd9d <_ZN19DB_SaveGameOption_28dispatchEiiP6Stream+0x5b>
 842fd95:	88 02                	mov    %al,(%edx)
 842fd97:	83 c2 01             	add    $0x1,%edx
 842fd9a:	83 eb 01             	sub    $0x1,%ebx
 842fd9d:	89 d1                	mov    %edx,%ecx
 842fd9f:	83 e1 02             	and    $0x2,%ecx
 842fda2:	85 c9                	test   %ecx,%ecx
 842fda4:	74 09                	je     842fdaf <_ZN19DB_SaveGameOption_28dispatchEiiP6Stream+0x6d>
 842fda6:	66 89 02             	mov    %ax,(%edx)
 842fda9:	83 c2 02             	add    $0x2,%edx
 842fdac:	83 eb 02             	sub    $0x2,%ebx
 842fdaf:	89 d9                	mov    %ebx,%ecx
 842fdb1:	c1 e9 02             	shr    $0x2,%ecx
 842fdb4:	89 d7                	mov    %edx,%edi
 842fdb6:	f3 ab                	rep stos %eax,%es:(%edi)
 842fdb8:	89 fa                	mov    %edi,%edx
 842fdba:	89 d9                	mov    %ebx,%ecx
 842fdbc:	83 e1 02             	and    $0x2,%ecx
 842fdbf:	85 c9                	test   %ecx,%ecx
 842fdc1:	74 06                	je     842fdc9 <_ZN19DB_SaveGameOption_28dispatchEiiP6Stream+0x87>
 842fdc3:	66 89 02             	mov    %ax,(%edx)
 842fdc6:	83 c2 02             	add    $0x2,%edx
 842fdc9:	89 d9                	mov    %ebx,%ecx
 842fdcb:	83 e1 01             	and    $0x1,%ecx
 842fdce:	85 c9                	test   %ecx,%ecx
 842fdd0:	74 05                	je     842fdd7 <_ZN19DB_SaveGameOption_28dispatchEiiP6Stream+0x95>
 842fdd2:	88 02                	mov    %al,(%edx)
 842fdd4:	83 c2 01             	add    $0x1,%edx
 842fdd7:	c7 45 dc ed 00 00 00 	movl   $0xed,-0x24(%ebp)
 842fdde:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 842fde1:	83 c0 05             	add    $0x5,%eax
 842fde4:	c7 44 24 0c bc 00 00 	movl   $0xbc,0xc(%esp)
 842fdeb:	00 
 842fdec:	89 44 24 08          	mov    %eax,0x8(%esp)
 842fdf0:	8d 45 dc             	lea    -0x24(%ebp),%eax
 842fdf3:	89 44 24 04          	mov    %eax,0x4(%esp)
 842fdf7:	8d 85 ef fe ff ff    	lea    -0x111(%ebp),%eax
 842fdfd:	89 04 24             	mov    %eax,(%esp)
 842fe00:	e8 1a 22 28 00       	call   86b201f <_Z12compress_zipPcRjPKcj>
 842fe05:	83 f0 01             	xor    $0x1,%eax
 842fe08:	84 c0                	test   %al,%al
 842fe0a:	74 0a                	je     842fe16 <_ZN19DB_SaveGameOption_28dispatchEiiP6Stream+0xd4>
 842fe0c:	b8 00 00 00 00       	mov    $0x0,%eax
 842fe11:	e9 2d 01 00 00       	jmp    842ff43 <_ZN19DB_SaveGameOption_28dispatchEiiP6Stream+0x201>
 842fe16:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 842fe19:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 842fe1d:	0f b6 f0             	movzbl %al,%esi
 842fe20:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 842fe23:	8b 00                	mov    (%eax),%eax
 842fe25:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842fe2c:	00 
 842fe2d:	89 04 24             	mov    %eax,(%esp)
 842fe30:	e8 16 92 cd ff       	call   810904b <_Z14NumberToStringji>
 842fe35:	89 c3                	mov    %eax,%ebx
 842fe37:	8b 45 dc             	mov    -0x24(%ebp),%eax
 842fe3a:	89 44 24 0c          	mov    %eax,0xc(%esp)
 842fe3e:	8d 85 ef fe ff ff    	lea    -0x111(%ebp),%eax
 842fe44:	89 44 24 08          	mov    %eax,0x8(%esp)
 842fe48:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842fe4f:	00 
 842fe50:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842fe53:	89 04 24             	mov    %eax,(%esp)
 842fe56:	e8 cf 46 fc ff       	call   83f452a <_ZN5MySQL11blob_to_strEiPvi>
 842fe5b:	89 74 24 10          	mov    %esi,0x10(%esp)
 842fe5f:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 842fe63:	89 44 24 08          	mov    %eax,0x8(%esp)
 842fe67:	c7 44 24 04 ec 16 c5 	movl   $0x8c516ec,0x4(%esp)
 842fe6e:	08 
 842fe6f:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842fe72:	89 04 24             	mov    %eax,(%esp)
 842fe75:	e8 46 43 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 842fe7a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842fe81:	00 
 842fe82:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842fe85:	89 04 24             	mov    %eax,(%esp)
 842fe88:	e8 99 44 fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 842fe8d:	83 f0 01             	xor    $0x1,%eax
 842fe90:	84 c0                	test   %al,%al
 842fe92:	75 11                	jne    842fea5 <_ZN19DB_SaveGameOption_28dispatchEiiP6Stream+0x163>
 842fe94:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842fe97:	89 04 24             	mov    %eax,(%esp)
 842fe9a:	e8 71 44 fc ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 842fe9f:	09 d0                	or     %edx,%eax
 842fea1:	85 c0                	test   %eax,%eax
 842fea3:	75 07                	jne    842feac <_ZN19DB_SaveGameOption_28dispatchEiiP6Stream+0x16a>
 842fea5:	b8 01 00 00 00       	mov    $0x1,%eax
 842feaa:	eb 05                	jmp    842feb1 <_ZN19DB_SaveGameOption_28dispatchEiiP6Stream+0x16f>
 842feac:	b8 00 00 00 00       	mov    $0x0,%eax
 842feb1:	84 c0                	test   %al,%al
 842feb3:	0f 84 85 00 00 00    	je     842ff3e <_ZN19DB_SaveGameOption_28dispatchEiiP6Stream+0x1fc>
 842feb9:	8b 45 dc             	mov    -0x24(%ebp),%eax
 842febc:	89 44 24 0c          	mov    %eax,0xc(%esp)
 842fec0:	8d 85 ef fe ff ff    	lea    -0x111(%ebp),%eax
 842fec6:	89 44 24 08          	mov    %eax,0x8(%esp)
 842feca:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842fed1:	00 
 842fed2:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842fed5:	89 04 24             	mov    %eax,(%esp)
 842fed8:	e8 4d 46 fc ff       	call   83f452a <_ZN5MySQL11blob_to_strEiPvi>
 842fedd:	89 c3                	mov    %eax,%ebx
 842fedf:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 842fee2:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 842fee6:	0f b6 f0             	movzbl %al,%esi
 842fee9:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 842feec:	8b 00                	mov    (%eax),%eax
 842feee:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842fef5:	00 
 842fef6:	89 04 24             	mov    %eax,(%esp)
 842fef9:	e8 4d 91 cd ff       	call   810904b <_Z14NumberToStringji>
 842fefe:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 842ff02:	89 74 24 0c          	mov    %esi,0xc(%esp)
 842ff06:	89 44 24 08          	mov    %eax,0x8(%esp)
 842ff0a:	c7 44 24 04 38 17 c5 	movl   $0x8c51738,0x4(%esp)
 842ff11:	08 
 842ff12:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842ff15:	89 04 24             	mov    %eax,(%esp)
 842ff18:	e8 a3 42 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 842ff1d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842ff24:	00 
 842ff25:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842ff28:	89 04 24             	mov    %eax,(%esp)
 842ff2b:	e8 f6 43 fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 842ff30:	83 f0 01             	xor    $0x1,%eax
 842ff33:	84 c0                	test   %al,%al
 842ff35:	74 07                	je     842ff3e <_ZN19DB_SaveGameOption_28dispatchEiiP6Stream+0x1fc>
 842ff37:	b8 00 00 00 00       	mov    $0x0,%eax
 842ff3c:	eb 05                	jmp    842ff43 <_ZN19DB_SaveGameOption_28dispatchEiiP6Stream+0x201>
 842ff3e:	b8 01 00 00 00       	mov    $0x1,%eax
 842ff43:	81 c4 2c 01 00 00    	add    $0x12c,%esp
 842ff49:	5b                   	pop    %ebx
 842ff4a:	5e                   	pop    %esi
 842ff4b:	5f                   	pop    %edi
 842ff4c:	5d                   	pop    %ebp
 842ff4d:	c3                   	ret

```

```c
// DB_SaveGameOption_2::dispatch @ 0x842fd42

/* DB_SaveGameOption_2::dispatch(int, int, Stream*) */

undefined4 DB_SaveGameOption_2::dispatch(int param_1,int param_2,Stream *param_3)

{
  SIG_LOAD_CHARAC_HOTKEY_OPTION SVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  bool bVar8;
  byte bVar9;
  longlong lVar10;
  Stream *in_stack_00000010;
  char local_115;
  char local_114 [236];
  uint local_28;
  MySQL *local_24;
  SIG_LOAD_CHARAC_HOTKEY_OPTION *local_20;
  
  bVar9 = 0;
  local_24 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,0xb,0);
  local_20 = Stream::GetOutBuffer<SIG_LOAD_CHARAC_HOTKEY_OPTION>(in_stack_00000010);
  pcVar6 = &local_115;
  uVar7 = 0xed;
  bVar8 = ((uint)pcVar6 & 1) != 0;
  if (bVar8) {
    local_115 = '\0';
    pcVar6 = local_114;
    uVar7 = 0xec;
  }
  if (((uint)pcVar6 & 2) != 0) {
    pcVar6[0] = '\0';
    pcVar6[1] = '\0';
    pcVar6 = pcVar6 + 2;
    uVar7 = uVar7 - 2;
  }
  for (uVar5 = uVar7 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    pcVar6[0] = '\0';
    pcVar6[1] = '\0';
    pcVar6[2] = '\0';
    pcVar6[3] = '\0';
    pcVar6 = pcVar6 + ((uint)bVar9 * -2 + 1) * 4;
  }
  if ((uVar7 & 2) != 0) {
    pcVar6[0] = '\0';
    pcVar6[1] = '\0';
    pcVar6 = pcVar6 + 2;
  }
  if (!bVar8) {
    *pcVar6 = '\0';
  }
  local_28 = 0xed;
  cVar2 = compress_zip(&local_115,&local_28,(char *)(local_20 + 5),0xbc);
  if (cVar2 == '\x01') {
    SVar1 = local_20[4];
    uVar3 = NumberToString(*(uint *)local_20,0);
    uVar4 = MySQL::blob_to_str(local_24,0,&local_115,local_28);
    MySQL::set_query(local_24,
                     "upDate member_key_option set key_option=\'%s\' where m_id=%s and key_type=%d",
                     uVar4,uVar3,(uint)(byte)SVar1);
    cVar2 = MySQL::exec(local_24,true);
    if ((cVar2 == '\x01') && (lVar10 = MySQL::getAffectedRowCount(local_24), lVar10 != 0)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if (bVar8) {
      uVar3 = MySQL::blob_to_str(local_24,0,&local_115,local_28);
      SVar1 = local_20[4];
      uVar4 = NumberToString(*(uint *)local_20,0);
      MySQL::set_query(local_24,
                       "inSert into member_key_option(m_id, key_type, key_option) values(%s,%d,\'%s\')"
                       ,uVar4,(uint)(byte)SVar1,uVar3);
      cVar2 = MySQL::exec(local_24,true);
      if (cVar2 != '\x01') {
        return 0;
      }
    }
    return 1;
  }
  return 0;
}

```

