# DB_SaveGameOption_1

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 0842ff4e DB_SaveGameOption_1::dispatch  [0x0842ff4e-0x8430143] ===
 842ff4e:	55                   	push   %ebp
 842ff4f:	89 e5                	mov    %esp,%ebp
 842ff51:	57                   	push   %edi
 842ff52:	56                   	push   %esi
 842ff53:	53                   	push   %ebx
 842ff54:	81 ec 9c 00 00 00    	sub    $0x9c,%esp
 842ff5a:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 842ff5f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 842ff66:	00 
 842ff67:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 842ff6e:	00 
 842ff6f:	89 04 24             	mov    %eax,(%esp)
 842ff72:	e8 c7 52 fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 842ff77:	89 45 e0             	mov    %eax,-0x20(%ebp)
 842ff7a:	8b 45 14             	mov    0x14(%ebp),%eax
 842ff7d:	89 04 24             	mov    %eax,(%esp)
 842ff80:	e8 91 2c 02 00       	call   8452c16 <_ZN6Stream12GetOutBufferI22SIG_SAVE_GAME_OPTION_1EEPT_v>
 842ff85:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 842ff88:	8d 95 7a ff ff ff    	lea    -0x86(%ebp),%edx
 842ff8e:	bb 62 00 00 00       	mov    $0x62,%ebx
 842ff93:	b8 00 00 00 00       	mov    $0x0,%eax
 842ff98:	89 d1                	mov    %edx,%ecx
 842ff9a:	83 e1 02             	and    $0x2,%ecx
 842ff9d:	85 c9                	test   %ecx,%ecx
 842ff9f:	74 09                	je     842ffaa <_ZN19DB_SaveGameOption_18dispatchEiiP6Stream+0x5c>
 842ffa1:	66 89 02             	mov    %ax,(%edx)
 842ffa4:	83 c2 02             	add    $0x2,%edx
 842ffa7:	83 eb 02             	sub    $0x2,%ebx
 842ffaa:	89 d9                	mov    %ebx,%ecx
 842ffac:	c1 e9 02             	shr    $0x2,%ecx
 842ffaf:	89 d7                	mov    %edx,%edi
 842ffb1:	f3 ab                	rep stos %eax,%es:(%edi)
 842ffb3:	89 fa                	mov    %edi,%edx
 842ffb5:	89 d9                	mov    %ebx,%ecx
 842ffb7:	83 e1 02             	and    $0x2,%ecx
 842ffba:	85 c9                	test   %ecx,%ecx
 842ffbc:	74 06                	je     842ffc4 <_ZN19DB_SaveGameOption_18dispatchEiiP6Stream+0x76>
 842ffbe:	66 89 02             	mov    %ax,(%edx)
 842ffc1:	83 c2 02             	add    $0x2,%edx
 842ffc4:	89 d9                	mov    %ebx,%ecx
 842ffc6:	83 e1 01             	and    $0x1,%ecx
 842ffc9:	85 c9                	test   %ecx,%ecx
 842ffcb:	74 05                	je     842ffd2 <_ZN19DB_SaveGameOption_18dispatchEiiP6Stream+0x84>
 842ffcd:	88 02                	mov    %al,(%edx)
 842ffcf:	83 c2 01             	add    $0x1,%edx
 842ffd2:	c7 45 dc 62 00 00 00 	movl   $0x62,-0x24(%ebp)
 842ffd9:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 842ffdc:	83 c0 04             	add    $0x4,%eax
 842ffdf:	c7 44 24 0c 48 00 00 	movl   $0x48,0xc(%esp)
 842ffe6:	00 
 842ffe7:	89 44 24 08          	mov    %eax,0x8(%esp)
 842ffeb:	8d 45 dc             	lea    -0x24(%ebp),%eax
 842ffee:	89 44 24 04          	mov    %eax,0x4(%esp)
 842fff2:	8d 85 7a ff ff ff    	lea    -0x86(%ebp),%eax
 842fff8:	89 04 24             	mov    %eax,(%esp)
 842fffb:	e8 1f 20 28 00       	call   86b201f <_Z12compress_zipPcRjPKcj>
 8430000:	83 f0 01             	xor    $0x1,%eax
 8430003:	84 c0                	test   %al,%al
 8430005:	74 0a                	je     8430011 <_ZN19DB_SaveGameOption_18dispatchEiiP6Stream+0xc3>
 8430007:	b8 00 00 00 00       	mov    $0x0,%eax
 843000c:	e9 27 01 00 00       	jmp    8430138 <_ZN19DB_SaveGameOption_18dispatchEiiP6Stream+0x1ea>
 8430011:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8430014:	8b 00                	mov    (%eax),%eax
 8430016:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 843001d:	00 
 843001e:	89 04 24             	mov    %eax,(%esp)
 8430021:	e8 25 90 cd ff       	call   810904b <_Z14NumberToStringji>
 8430026:	89 c6                	mov    %eax,%esi
 8430028:	8b 45 dc             	mov    -0x24(%ebp),%eax
 843002b:	89 44 24 0c          	mov    %eax,0xc(%esp)
 843002f:	8d 85 7a ff ff ff    	lea    -0x86(%ebp),%eax
 8430035:	89 44 24 08          	mov    %eax,0x8(%esp)
 8430039:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8430040:	00 
 8430041:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8430044:	89 04 24             	mov    %eax,(%esp)
 8430047:	e8 de 44 fc ff       	call   83f452a <_ZN5MySQL11blob_to_strEiPvi>
 843004c:	89 c3                	mov    %eax,%ebx
 843004e:	e8 d2 bd fc ff       	call   83fbe25 <_Z22get_member_game_optionv>
 8430053:	89 74 24 10          	mov    %esi,0x10(%esp)
 8430057:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 843005b:	89 44 24 08          	mov    %eax,0x8(%esp)
 843005f:	c7 44 24 04 88 17 c5 	movl   $0x8c51788,0x4(%esp)
 8430066:	08 
 8430067:	8b 45 e0             	mov    -0x20(%ebp),%eax
 843006a:	89 04 24             	mov    %eax,(%esp)
 843006d:	e8 4e 41 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8430072:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8430079:	00 
 843007a:	8b 45 e0             	mov    -0x20(%ebp),%eax
 843007d:	89 04 24             	mov    %eax,(%esp)
 8430080:	e8 a1 42 fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 8430085:	83 f0 01             	xor    $0x1,%eax
 8430088:	84 c0                	test   %al,%al
 843008a:	75 11                	jne    843009d <_ZN19DB_SaveGameOption_18dispatchEiiP6Stream+0x14f>
 843008c:	8b 45 e0             	mov    -0x20(%ebp),%eax
 843008f:	89 04 24             	mov    %eax,(%esp)
 8430092:	e8 79 42 fc ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 8430097:	09 d0                	or     %edx,%eax
 8430099:	85 c0                	test   %eax,%eax
 843009b:	75 07                	jne    84300a4 <_ZN19DB_SaveGameOption_18dispatchEiiP6Stream+0x156>
 843009d:	b8 01 00 00 00       	mov    $0x1,%eax
 84300a2:	eb 05                	jmp    84300a9 <_ZN19DB_SaveGameOption_18dispatchEiiP6Stream+0x15b>
 84300a4:	b8 00 00 00 00       	mov    $0x0,%eax
 84300a9:	84 c0                	test   %al,%al
 84300ab:	0f 84 82 00 00 00    	je     8430133 <_ZN19DB_SaveGameOption_18dispatchEiiP6Stream+0x1e5>
 84300b1:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84300b4:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84300b8:	8d 85 7a ff ff ff    	lea    -0x86(%ebp),%eax
 84300be:	89 44 24 08          	mov    %eax,0x8(%esp)
 84300c2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84300c9:	00 
 84300ca:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84300cd:	89 04 24             	mov    %eax,(%esp)
 84300d0:	e8 55 44 fc ff       	call   83f452a <_ZN5MySQL11blob_to_strEiPvi>
 84300d5:	89 c6                	mov    %eax,%esi
 84300d7:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84300da:	8b 00                	mov    (%eax),%eax
 84300dc:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84300e3:	00 
 84300e4:	89 04 24             	mov    %eax,(%esp)
 84300e7:	e8 5f 8f cd ff       	call   810904b <_Z14NumberToStringji>
 84300ec:	89 c3                	mov    %eax,%ebx
 84300ee:	e8 32 bd fc ff       	call   83fbe25 <_Z22get_member_game_optionv>
 84300f3:	89 74 24 10          	mov    %esi,0x10(%esp)
 84300f7:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84300fb:	89 44 24 08          	mov    %eax,0x8(%esp)
 84300ff:	c7 44 24 04 b4 17 c5 	movl   $0x8c517b4,0x4(%esp)
 8430106:	08 
 8430107:	8b 45 e0             	mov    -0x20(%ebp),%eax
 843010a:	89 04 24             	mov    %eax,(%esp)
 843010d:	e8 ae 40 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8430112:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8430119:	00 
 843011a:	8b 45 e0             	mov    -0x20(%ebp),%eax
 843011d:	89 04 24             	mov    %eax,(%esp)
 8430120:	e8 01 42 fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 8430125:	83 f0 01             	xor    $0x1,%eax
 8430128:	84 c0                	test   %al,%al
 843012a:	74 07                	je     8430133 <_ZN19DB_SaveGameOption_18dispatchEiiP6Stream+0x1e5>
 843012c:	b8 00 00 00 00       	mov    $0x0,%eax
 8430131:	eb 05                	jmp    8430138 <_ZN19DB_SaveGameOption_18dispatchEiiP6Stream+0x1ea>
 8430133:	b8 01 00 00 00       	mov    $0x1,%eax
 8430138:	81 c4 9c 00 00 00    	add    $0x9c,%esp
 843013e:	5b                   	pop    %ebx
 843013f:	5e                   	pop    %esi
 8430140:	5f                   	pop    %edi
 8430141:	5d                   	pop    %ebp
 8430142:	c3                   	ret
 8430143:	90                   	nop

```

```c
// DB_SaveGameOption_1::dispatch @ 0x842ff4e

/* WARNING: Removing unreachable block (ram,0x0842ffcd) */
/* DB_SaveGameOption_1::dispatch(int, int, Stream*) */

undefined4 DB_SaveGameOption_1::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  uint uVar6;
  bool bVar7;
  byte bVar8;
  longlong lVar9;
  Stream *in_stack_00000010;
  char local_8a [98];
  uint local_28;
  MySQL *local_24;
  SIG_SAVE_GAME_OPTION_1 *local_20;
  
  bVar8 = 0;
  local_24 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  local_20 = Stream::GetOutBuffer<SIG_SAVE_GAME_OPTION_1>(in_stack_00000010);
  pcVar5 = local_8a;
  uVar6 = 0x62;
  bVar7 = ((uint)pcVar5 & 2) != 0;
  if (bVar7) {
    local_8a[0] = '\0';
    local_8a[1] = '\0';
    pcVar5 = local_8a + 2;
    uVar6 = 0x60;
  }
  for (uVar6 = uVar6 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5[2] = '\0';
    pcVar5[3] = '\0';
    pcVar5 = pcVar5 + ((uint)bVar8 * -2 + 1) * 4;
  }
  if (!bVar7) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
  }
  local_28 = 0x62;
  cVar1 = compress_zip(local_8a,&local_28,(char *)(local_20 + 4),0x48);
  if (cVar1 == '\x01') {
    uVar2 = NumberToString(*(uint *)local_20,0);
    uVar3 = MySQL::blob_to_str(local_24,0,local_8a,local_28);
    uVar4 = get_member_game_option();
    MySQL::set_query(local_24,"upDate %s set option_1=\'%s\' where m_id=%s",uVar4,uVar3,uVar2);
    cVar1 = MySQL::exec(local_24,true);
    if ((cVar1 == '\x01') && (lVar9 = MySQL::getAffectedRowCount(local_24), lVar9 != 0)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (bVar7) {
      uVar2 = MySQL::blob_to_str(local_24,0,local_8a,local_28);
      uVar3 = NumberToString(*(uint *)local_20,0);
      uVar4 = get_member_game_option();
      MySQL::set_query(local_24,"inSert into %s(m_id, option_1) values(%s,\'%s\')",uVar4,uVar3,uVar2
                      );
      cVar1 = MySQL::exec(local_24,true);
      if (cVar1 != '\x01') {
        return 0;
      }
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

