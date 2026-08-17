# DB_SaveInformNotice

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 08446fcc DB_SaveInformNotice::dispatch  [0x08446fcc-0x844710d] ===
 8446fcc:	55                   	push   %ebp
 8446fcd:	89 e5                	mov    %esp,%ebp
 8446fcf:	57                   	push   %edi
 8446fd0:	53                   	push   %ebx
 8446fd1:	81 ec 20 01 00 00    	sub    $0x120,%esp
 8446fd7:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8446fdc:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8446fe3:	00 
 8446fe4:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 8446feb:	00 
 8446fec:	89 04 24             	mov    %eax,(%esp)
 8446fef:	e8 4a e2 fa ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8446ff4:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8446ff7:	8b 45 14             	mov    0x14(%ebp),%eax
 8446ffa:	89 04 24             	mov    %eax,(%esp)
 8446ffd:	e8 6a d4 00 00       	call   845446c <_ZN6Stream12GetOutBufferI20InformNoticeFlagDataEEPT_v>
 8447002:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8447005:	8d 9d f0 fe ff ff    	lea    -0x110(%ebp),%ebx
 844700b:	b8 00 00 00 00       	mov    $0x0,%eax
 8447010:	ba 40 00 00 00       	mov    $0x40,%edx
 8447015:	89 df                	mov    %ebx,%edi
 8447017:	89 d1                	mov    %edx,%ecx
 8447019:	f3 ab                	rep stos %eax,%es:(%edi)
 844701b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 844701e:	83 c0 04             	add    $0x4,%eax
 8447021:	89 44 24 08          	mov    %eax,0x8(%esp)
 8447025:	8d 85 f0 fe ff ff    	lea    -0x110(%ebp),%eax
 844702b:	89 44 24 04          	mov    %eax,0x4(%esp)
 844702f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8447032:	89 04 24             	mov    %eax,(%esp)
 8447035:	e8 70 d8 fa ff       	call   83f48aa <_ZN5MySQL13escape_stringEPcPKc>
 844703a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 844703d:	8b 00                	mov    (%eax),%eax
 844703f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8447046:	00 
 8447047:	89 04 24             	mov    %eax,(%esp)
 844704a:	e8 fc 1f cc ff       	call   810904b <_Z14NumberToStringji>
 844704f:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8447053:	8d 85 f0 fe ff ff    	lea    -0x110(%ebp),%eax
 8447059:	89 44 24 08          	mov    %eax,0x8(%esp)
 844705d:	c7 44 24 04 8c 7f c5 	movl   $0x8c57f8c,0x4(%esp)
 8447064:	08 
 8447065:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8447068:	89 04 24             	mov    %eax,(%esp)
 844706b:	e8 50 d1 fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8447070:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8447077:	00 
 8447078:	8b 45 f0             	mov    -0x10(%ebp),%eax
 844707b:	89 04 24             	mov    %eax,(%esp)
 844707e:	e8 a3 d2 fa ff       	call   83f4326 <_ZN5MySQL4execEb>
 8447083:	83 f0 01             	xor    $0x1,%eax
 8447086:	84 c0                	test   %al,%al
 8447088:	74 07                	je     8447091 <_ZN19DB_SaveInformNotice8dispatchEiiP6Stream+0xc5>
 844708a:	b8 00 00 00 00       	mov    $0x0,%eax
 844708f:	eb 72                	jmp    8447103 <_ZN19DB_SaveInformNotice8dispatchEiiP6Stream+0x137>
 8447091:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8447094:	89 04 24             	mov    %eax,(%esp)
 8447097:	e8 74 d2 fa ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 844709c:	09 d0                	or     %edx,%eax
 844709e:	85 c0                	test   %eax,%eax
 84470a0:	0f 94 c0             	sete   %al
 84470a3:	84 c0                	test   %al,%al
 84470a5:	74 57                	je     84470fe <_ZN19DB_SaveInformNotice8dispatchEiiP6Stream+0x132>
 84470a7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84470aa:	8b 00                	mov    (%eax),%eax
 84470ac:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84470b3:	00 
 84470b4:	89 04 24             	mov    %eax,(%esp)
 84470b7:	e8 8f 1f cc ff       	call   810904b <_Z14NumberToStringji>
 84470bc:	8d 95 f0 fe ff ff    	lea    -0x110(%ebp),%edx
 84470c2:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84470c6:	89 44 24 08          	mov    %eax,0x8(%esp)
 84470ca:	c7 44 24 04 cc 7f c5 	movl   $0x8c57fcc,0x4(%esp)
 84470d1:	08 
 84470d2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84470d5:	89 04 24             	mov    %eax,(%esp)
 84470d8:	e8 e3 d0 fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84470dd:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84470e4:	00 
 84470e5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84470e8:	89 04 24             	mov    %eax,(%esp)
 84470eb:	e8 36 d2 fa ff       	call   83f4326 <_ZN5MySQL4execEb>
 84470f0:	83 f0 01             	xor    $0x1,%eax
 84470f3:	84 c0                	test   %al,%al
 84470f5:	74 07                	je     84470fe <_ZN19DB_SaveInformNotice8dispatchEiiP6Stream+0x132>
 84470f7:	b8 00 00 00 00       	mov    $0x0,%eax
 84470fc:	eb 05                	jmp    8447103 <_ZN19DB_SaveInformNotice8dispatchEiiP6Stream+0x137>
 84470fe:	b8 01 00 00 00       	mov    $0x1,%eax
 8447103:	81 c4 20 01 00 00    	add    $0x120,%esp
 8447109:	5b                   	pop    %ebx
 844710a:	5f                   	pop    %edi
 844710b:	5d                   	pop    %ebp
 844710c:	c3                   	ret
 844710d:	90                   	nop

```

```c
// DB_SaveInformNotice::dispatch @ 0x8446fcc

/* DB_SaveInformNotice::dispatch(int, int, Stream*) */

undefined4 DB_SaveInformNotice::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  byte bVar5;
  longlong lVar6;
  Stream *in_stack_00000010;
  char local_114 [256];
  MySQL *local_14;
  InformNoticeFlagData *local_10;
  
  bVar5 = 0;
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  local_10 = Stream::GetOutBuffer<InformNoticeFlagData>(in_stack_00000010);
  pcVar4 = local_114;
  for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4 = pcVar4 + ((uint)bVar5 * -2 + 1) * 4;
  }
  MySQL::escape_string(local_14,local_114,(char *)(local_10 + 4));
  uVar2 = NumberToString(*(uint *)local_10,0);
  MySQL::set_query(local_14,"upDate login_common set inform_notice = \'%s\' where m_id = %s",
                   local_114,uVar2);
  cVar1 = MySQL::exec(local_14,true);
  if (cVar1 == '\x01') {
    lVar6 = MySQL::getAffectedRowCount(local_14);
    if (lVar6 == 0) {
      uVar2 = NumberToString(*(uint *)local_10,0);
      MySQL::set_query(local_14,"inSert into login_common(m_id, inform_notice) values(%s, \'%s\')",
                       uVar2,local_114);
      cVar1 = MySQL::exec(local_14,true);
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

