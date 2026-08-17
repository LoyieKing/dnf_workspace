# DB_SaveExpandEquipslot

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## _SaveCharacStat

```asm
// === 0843febe DB_SaveExpandEquipslot::_SaveCharacStat  [0x0843febe-0x843ff47] ===
 843febe:	55                   	push   %ebp
 843febf:	89 e5                	mov    %esp,%ebp
 843fec1:	83 ec 38             	sub    $0x38,%esp
 843fec4:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 843fec9:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 843fed0:	00 
 843fed1:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 843fed8:	00 
 843fed9:	89 04 24             	mov    %eax,(%esp)
 843fedc:	e8 5d 53 fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 843fee1:	89 45 f4             	mov    %eax,-0xc(%ebp)
 843fee4:	8b 45 10             	mov    0x10(%ebp),%eax
 843fee7:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 843feeb:	0f be d0             	movsbl %al,%edx
 843feee:	8b 45 10             	mov    0x10(%ebp),%eax
 843fef1:	0f b6 00             	movzbl (%eax),%eax
 843fef4:	0f be c0             	movsbl %al,%eax
 843fef7:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 843fefa:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 843fefe:	89 54 24 0c          	mov    %edx,0xc(%esp)
 843ff02:	89 44 24 08          	mov    %eax,0x8(%esp)
 843ff06:	c7 44 24 04 f4 5c c5 	movl   $0x8c55cf4,0x4(%esp)
 843ff0d:	08 
 843ff0e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843ff11:	89 04 24             	mov    %eax,(%esp)
 843ff14:	e8 a7 42 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 843ff19:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843ff20:	00 
 843ff21:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843ff24:	89 04 24             	mov    %eax,(%esp)
 843ff27:	e8 fa 43 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 843ff2c:	88 45 f3             	mov    %al,-0xd(%ebp)
 843ff2f:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 843ff33:	83 f0 01             	xor    $0x1,%eax
 843ff36:	84 c0                	test   %al,%al
 843ff38:	74 07                	je     843ff41 <_ZN22DB_SaveExpandEquipslot15_SaveCharacStatEjP27SIG_SAVE_EXPAND_CHARAC_STAT+0x83>
 843ff3a:	b8 00 00 00 00       	mov    $0x0,%eax
 843ff3f:	eb 05                	jmp    843ff46 <_ZN22DB_SaveExpandEquipslot15_SaveCharacStatEjP27SIG_SAVE_EXPAND_CHARAC_STAT+0x88>
 843ff41:	b8 01 00 00 00       	mov    $0x1,%eax
 843ff46:	c9                   	leave
 843ff47:	c3                   	ret

```

```c
// DB_SaveExpandEquipslot::_SaveCharacStat @ 0x843febe

/* DB_SaveExpandEquipslot::_SaveCharacStat(unsigned int, SIG_SAVE_EXPAND_CHARAC_STAT*) */

bool __thiscall
DB_SaveExpandEquipslot::_SaveCharacStat
          (DB_SaveExpandEquipslot *this,uint param_1,SIG_SAVE_EXPAND_CHARAC_STAT *param_2)

{
  char cVar1;
  MySQL *this_00;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  MySQL::set_query(this_00,
                   "upDate charac_stat set channel_equipslot_switch=%d, expand_equipslot_switch=%d where charac_no = %u"
                   ,(int)(char)*param_2,(int)(char)param_2[1],param_1);
  cVar1 = MySQL::exec(this_00,true);
  return cVar1 == '\x01';
}

```

---

## _SaveExpandEquipslot

```asm
// === 0843ff48 DB_SaveExpandEquipslot::_SaveExpandEquipslot  [0x0843ff48-0x84400b7] ===
 843ff48:	55                   	push   %ebp
 843ff49:	89 e5                	mov    %esp,%ebp
 843ff4b:	57                   	push   %edi
 843ff4c:	53                   	push   %ebx
 843ff4d:	81 ec 80 0a 00 00    	sub    $0xa80,%esp
 843ff53:	8d 9d 94 f5 ff ff    	lea    -0xa6c(%ebp),%ebx
 843ff59:	b8 00 00 00 00       	mov    $0x0,%eax
 843ff5e:	ba 97 02 00 00       	mov    $0x297,%edx
 843ff63:	89 df                	mov    %ebx,%edi
 843ff65:	89 d1                	mov    %edx,%ecx
 843ff67:	f3 ab                	rep stos %eax,%es:(%edi)
 843ff69:	c7 45 f0 5c 0a 00 00 	movl   $0xa5c,-0x10(%ebp)
 843ff70:	8b 45 0c             	mov    0xc(%ebp),%eax
 843ff73:	c7 44 24 0c 98 08 00 	movl   $0x898,0xc(%esp)
 843ff7a:	00 
 843ff7b:	89 44 24 08          	mov    %eax,0x8(%esp)
 843ff7f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843ff82:	89 44 24 04          	mov    %eax,0x4(%esp)
 843ff86:	8d 85 94 f5 ff ff    	lea    -0xa6c(%ebp),%eax
 843ff8c:	89 04 24             	mov    %eax,(%esp)
 843ff8f:	e8 8b 20 27 00       	call   86b201f <_Z12compress_zipPcRjPKcj>
 843ff94:	83 f0 01             	xor    $0x1,%eax
 843ff97:	84 c0                	test   %al,%al
 843ff99:	74 0a                	je     843ffa5 <_ZN22DB_SaveExpandEquipslot20_SaveExpandEquipslotEP25SIG_SAVE_EXPAND_EQUIPSLOT+0x5d>
 843ff9b:	b8 00 00 00 00       	mov    $0x0,%eax
 843ffa0:	e9 08 01 00 00       	jmp    84400ad <_ZN22DB_SaveExpandEquipslot20_SaveExpandEquipslotEP25SIG_SAVE_EXPAND_EQUIPSLOT+0x165>
 843ffa5:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 843ffaa:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 843ffb1:	00 
 843ffb2:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 843ffb9:	00 
 843ffba:	89 04 24             	mov    %eax,(%esp)
 843ffbd:	e8 7c 52 fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 843ffc2:	89 45 f4             	mov    %eax,-0xc(%ebp)
 843ffc5:	8b 45 0c             	mov    0xc(%ebp),%eax
 843ffc8:	8b 18                	mov    (%eax),%ebx
 843ffca:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843ffcd:	89 44 24 0c          	mov    %eax,0xc(%esp)
 843ffd1:	8d 85 94 f5 ff ff    	lea    -0xa6c(%ebp),%eax
 843ffd7:	89 44 24 08          	mov    %eax,0x8(%esp)
 843ffdb:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 843ffe2:	00 
 843ffe3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843ffe6:	89 04 24             	mov    %eax,(%esp)
 843ffe9:	e8 3c 45 fb ff       	call   83f452a <_ZN5MySQL11blob_to_strEiPvi>
 843ffee:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 843fff2:	89 44 24 08          	mov    %eax,0x8(%esp)
 843fff6:	c7 44 24 04 58 5d c5 	movl   $0x8c55d58,0x4(%esp)
 843fffd:	08 
 843fffe:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8440001:	89 04 24             	mov    %eax,(%esp)
 8440004:	e8 b7 41 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8440009:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8440010:	00 
 8440011:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8440014:	89 04 24             	mov    %eax,(%esp)
 8440017:	e8 0a 43 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 844001c:	83 f0 01             	xor    $0x1,%eax
 844001f:	84 c0                	test   %al,%al
 8440021:	74 0a                	je     844002d <_ZN22DB_SaveExpandEquipslot20_SaveExpandEquipslotEP25SIG_SAVE_EXPAND_EQUIPSLOT+0xe5>
 8440023:	b8 00 00 00 00       	mov    $0x0,%eax
 8440028:	e9 80 00 00 00       	jmp    84400ad <_ZN22DB_SaveExpandEquipslot20_SaveExpandEquipslotEP25SIG_SAVE_EXPAND_EQUIPSLOT+0x165>
 844002d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8440030:	89 04 24             	mov    %eax,(%esp)
 8440033:	e8 d8 42 fb ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 8440038:	09 d0                	or     %edx,%eax
 844003a:	85 c0                	test   %eax,%eax
 844003c:	0f 94 c0             	sete   %al
 844003f:	84 c0                	test   %al,%al
 8440041:	74 65                	je     84400a8 <_ZN22DB_SaveExpandEquipslot20_SaveExpandEquipslotEP25SIG_SAVE_EXPAND_EQUIPSLOT+0x160>
 8440043:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8440046:	89 44 24 0c          	mov    %eax,0xc(%esp)
 844004a:	8d 85 94 f5 ff ff    	lea    -0xa6c(%ebp),%eax
 8440050:	89 44 24 08          	mov    %eax,0x8(%esp)
 8440054:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 844005b:	00 
 844005c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 844005f:	89 04 24             	mov    %eax,(%esp)
 8440062:	e8 c3 44 fb ff       	call   83f452a <_ZN5MySQL11blob_to_strEiPvi>
 8440067:	8b 55 0c             	mov    0xc(%ebp),%edx
 844006a:	8b 12                	mov    (%edx),%edx
 844006c:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8440070:	89 54 24 08          	mov    %edx,0x8(%esp)
 8440074:	c7 44 24 04 a0 5d c5 	movl   $0x8c55da0,0x4(%esp)
 844007b:	08 
 844007c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 844007f:	89 04 24             	mov    %eax,(%esp)
 8440082:	e8 39 41 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8440087:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 844008e:	00 
 844008f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8440092:	89 04 24             	mov    %eax,(%esp)
 8440095:	e8 8c 42 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 844009a:	83 f0 01             	xor    $0x1,%eax
 844009d:	84 c0                	test   %al,%al
 844009f:	74 07                	je     84400a8 <_ZN22DB_SaveExpandEquipslot20_SaveExpandEquipslotEP25SIG_SAVE_EXPAND_EQUIPSLOT+0x160>
 84400a1:	b8 00 00 00 00       	mov    $0x0,%eax
 84400a6:	eb 05                	jmp    84400ad <_ZN22DB_SaveExpandEquipslot20_SaveExpandEquipslotEP25SIG_SAVE_EXPAND_EQUIPSLOT+0x165>
 84400a8:	b8 01 00 00 00       	mov    $0x1,%eax
 84400ad:	81 c4 80 0a 00 00    	add    $0xa80,%esp
 84400b3:	5b                   	pop    %ebx
 84400b4:	5f                   	pop    %edi
 84400b5:	5d                   	pop    %ebp
 84400b6:	c3                   	ret
 84400b7:	90                   	nop

```

```c
// DB_SaveExpandEquipslot::_SaveExpandEquipslot @ 0x843ff48

/* DB_SaveExpandEquipslot::_SaveExpandEquipslot(SIG_SAVE_EXPAND_EQUIPSLOT*) */

undefined4 __thiscall
DB_SaveExpandEquipslot::_SaveExpandEquipslot
          (DB_SaveExpandEquipslot *this,SIG_SAVE_EXPAND_EQUIPSLOT *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  longlong lVar6;
  char local_a70 [2652];
  uint local_14;
  MySQL *local_10;
  
  pcVar5 = local_a70;
  for (iVar4 = 0x297; iVar4 != 0; iVar4 = iVar4 + -1) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5[2] = '\0';
    pcVar5[3] = '\0';
    pcVar5 = pcVar5 + 4;
  }
  local_14 = 0xa5c;
  cVar1 = compress_zip(local_a70,&local_14,(char *)param_1,0x898);
  if (cVar1 == '\x01') {
    local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
    uVar2 = *(undefined4 *)param_1;
    uVar3 = MySQL::blob_to_str(local_10,0,local_a70,local_14);
    MySQL::set_query(local_10,
                     "upDate charac_inven_expand set expand_equipslot=\'%s\' where charac_no=%u",
                     uVar3,uVar2);
    cVar1 = MySQL::exec(local_10,true);
    if (cVar1 == '\x01') {
      lVar6 = MySQL::getAffectedRowCount(local_10);
      if (lVar6 == 0) {
        uVar2 = MySQL::blob_to_str(local_10,0,local_a70,local_14);
        MySQL::set_query(local_10,
                         "inSert into charac_inven_expand(charac_no, expand_equipslot) values(%u, \'%s\')"
                         ,*(undefined4 *)param_1,uVar2);
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

---

## dispatch

```asm
// === 0840da96 DB_SaveExpandEquipslot::dispatch  [0x0840da96-0x840daff] ===
 840da96:	55                   	push   %ebp
 840da97:	89 e5                	mov    %esp,%ebp
 840da99:	83 ec 28             	sub    $0x28,%esp
 840da9c:	8b 45 14             	mov    0x14(%ebp),%eax
 840da9f:	89 04 24             	mov    %eax,(%esp)
 840daa2:	e8 d3 2d 04 00       	call   845087a <_ZN6Stream12GetOutBufferI22SIG_SAVE_EXPAND_CHARACEEPT_v>
 840daa7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 840daaa:	8b 45 f4             	mov    -0xc(%ebp),%eax
 840daad:	89 44 24 04          	mov    %eax,0x4(%esp)
 840dab1:	8b 45 08             	mov    0x8(%ebp),%eax
 840dab4:	89 04 24             	mov    %eax,(%esp)
 840dab7:	e8 8c 24 03 00       	call   843ff48 <_ZN22DB_SaveExpandEquipslot20_SaveExpandEquipslotEP25SIG_SAVE_EXPAND_EQUIPSLOT>
 840dabc:	83 f0 01             	xor    $0x1,%eax
 840dabf:	84 c0                	test   %al,%al
 840dac1:	74 07                	je     840daca <_ZN22DB_SaveExpandEquipslot8dispatchEiiP6Stream+0x34>
 840dac3:	b8 00 00 00 00       	mov    $0x0,%eax
 840dac8:	eb 34                	jmp    840dafe <_ZN22DB_SaveExpandEquipslot8dispatchEiiP6Stream+0x68>
 840daca:	8b 45 f4             	mov    -0xc(%ebp),%eax
 840dacd:	8d 90 98 08 00 00    	lea    0x898(%eax),%edx
 840dad3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 840dad6:	8b 00                	mov    (%eax),%eax
 840dad8:	89 54 24 08          	mov    %edx,0x8(%esp)
 840dadc:	89 44 24 04          	mov    %eax,0x4(%esp)
 840dae0:	8b 45 08             	mov    0x8(%ebp),%eax
 840dae3:	89 04 24             	mov    %eax,(%esp)
 840dae6:	e8 d3 23 03 00       	call   843febe <_ZN22DB_SaveExpandEquipslot15_SaveCharacStatEjP27SIG_SAVE_EXPAND_CHARAC_STAT>
 840daeb:	83 f0 01             	xor    $0x1,%eax
 840daee:	84 c0                	test   %al,%al
 840daf0:	74 07                	je     840daf9 <_ZN22DB_SaveExpandEquipslot8dispatchEiiP6Stream+0x63>
 840daf2:	b8 00 00 00 00       	mov    $0x0,%eax
 840daf7:	eb 05                	jmp    840dafe <_ZN22DB_SaveExpandEquipslot8dispatchEiiP6Stream+0x68>
 840daf9:	b8 01 00 00 00       	mov    $0x1,%eax
 840dafe:	c9                   	leave
 840daff:	c3                   	ret

```

```c
// DB_SaveExpandEquipslot::dispatch @ 0x840da96

/* DB_SaveExpandEquipslot::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_SaveExpandEquipslot::dispatch
          (DB_SaveExpandEquipslot *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  SIG_SAVE_EXPAND_CHARAC *pSVar2;
  undefined4 uVar3;
  
  pSVar2 = Stream::GetOutBuffer<SIG_SAVE_EXPAND_CHARAC>(param_3);
  cVar1 = _SaveExpandEquipslot(this,(SIG_SAVE_EXPAND_EQUIPSLOT *)pSVar2);
  if (cVar1 == '\x01') {
    cVar1 = _SaveCharacStat(this,*(uint *)pSVar2,(SIG_SAVE_EXPAND_CHARAC_STAT *)(pSVar2 + 0x898));
    if (cVar1 == '\x01') {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

```

