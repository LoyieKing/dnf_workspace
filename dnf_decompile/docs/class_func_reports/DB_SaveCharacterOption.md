# DB_SaveCharacterOption

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 08430144 DB_SaveCharacterOption::dispatch  [0x08430144-0x843024f] ===
 8430144:	55                   	push   %ebp
 8430145:	89 e5                	mov    %esp,%ebp
 8430147:	83 ec 28             	sub    $0x28,%esp
 843014a:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 843014f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8430156:	00 
 8430157:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 843015e:	00 
 843015f:	89 04 24             	mov    %eax,(%esp)
 8430162:	e8 d7 50 fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8430167:	89 45 e8             	mov    %eax,-0x18(%ebp)
 843016a:	8b 45 14             	mov    0x14(%ebp),%eax
 843016d:	89 04 24             	mov    %eax,(%esp)
 8430170:	e8 f5 2a 02 00       	call   8452c6a <_ZN6Stream12GetOutBufferI20SIG_CHARACTER_OPTIONEEPT_v>
 8430175:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8430178:	c7 45 f0 00 02 00 00 	movl   $0x200,-0x10(%ebp)
 843017f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8430182:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8430185:	83 c2 04             	add    $0x4,%edx
 8430188:	89 44 24 0c          	mov    %eax,0xc(%esp)
 843018c:	89 54 24 08          	mov    %edx,0x8(%esp)
 8430190:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8430197:	00 
 8430198:	8b 45 e8             	mov    -0x18(%ebp),%eax
 843019b:	89 04 24             	mov    %eax,(%esp)
 843019e:	e8 87 43 fc ff       	call   83f452a <_ZN5MySQL11blob_to_strEiPvi>
 84301a3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84301a6:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84301a9:	8b 00                	mov    (%eax),%eax
 84301ab:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84301af:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84301b2:	89 44 24 08          	mov    %eax,0x8(%esp)
 84301b6:	c7 44 24 04 e4 17 c5 	movl   $0x8c517e4,0x4(%esp)
 84301bd:	08 
 84301be:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84301c1:	89 04 24             	mov    %eax,(%esp)
 84301c4:	e8 f7 3f fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84301c9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84301d0:	00 
 84301d1:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84301d4:	89 04 24             	mov    %eax,(%esp)
 84301d7:	e8 4a 41 fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 84301dc:	83 f0 01             	xor    $0x1,%eax
 84301df:	84 c0                	test   %al,%al
 84301e1:	75 11                	jne    84301f4 <_ZN22DB_SaveCharacterOption8dispatchEiiP6Stream+0xb0>
 84301e3:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84301e6:	89 04 24             	mov    %eax,(%esp)
 84301e9:	e8 22 41 fc ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 84301ee:	09 d0                	or     %edx,%eax
 84301f0:	85 c0                	test   %eax,%eax
 84301f2:	75 07                	jne    84301fb <_ZN22DB_SaveCharacterOption8dispatchEiiP6Stream+0xb7>
 84301f4:	b8 01 00 00 00       	mov    $0x1,%eax
 84301f9:	eb 05                	jmp    8430200 <_ZN22DB_SaveCharacterOption8dispatchEiiP6Stream+0xbc>
 84301fb:	b8 00 00 00 00       	mov    $0x0,%eax
 8430200:	84 c0                	test   %al,%al
 8430202:	74 44                	je     8430248 <_ZN22DB_SaveCharacterOption8dispatchEiiP6Stream+0x104>
 8430204:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8430207:	8b 00                	mov    (%eax),%eax
 8430209:	8b 55 f4             	mov    -0xc(%ebp),%edx
 843020c:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8430210:	89 44 24 08          	mov    %eax,0x8(%esp)
 8430214:	c7 44 24 04 20 18 c5 	movl   $0x8c51820,0x4(%esp)
 843021b:	08 
 843021c:	8b 45 e8             	mov    -0x18(%ebp),%eax
 843021f:	89 04 24             	mov    %eax,(%esp)
 8430222:	e8 99 3f fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8430227:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843022e:	00 
 843022f:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8430232:	89 04 24             	mov    %eax,(%esp)
 8430235:	e8 ec 40 fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 843023a:	83 f0 01             	xor    $0x1,%eax
 843023d:	84 c0                	test   %al,%al
 843023f:	74 07                	je     8430248 <_ZN22DB_SaveCharacterOption8dispatchEiiP6Stream+0x104>
 8430241:	b8 00 00 00 00       	mov    $0x0,%eax
 8430246:	eb 05                	jmp    843024d <_ZN22DB_SaveCharacterOption8dispatchEiiP6Stream+0x109>
 8430248:	b8 01 00 00 00       	mov    $0x1,%eax
 843024d:	c9                   	leave
 843024e:	c3                   	ret
 843024f:	90                   	nop

```

```c
// DB_SaveCharacterOption::dispatch @ 0x8430144

/* DB_SaveCharacterOption::dispatch(int, int, Stream*) */

undefined4 DB_SaveCharacterOption::dispatch(int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  MySQL *this;
  SIG_CHARACTER_OPTION *pSVar3;
  undefined4 uVar4;
  longlong lVar5;
  Stream *in_stack_00000010;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  pSVar3 = Stream::GetOutBuffer<SIG_CHARACTER_OPTION>(in_stack_00000010);
  uVar4 = MySQL::blob_to_str(this,0,pSVar3 + 4,0x200);
  MySQL::set_query(this,"upDate charac_option set options = \'%s\' where charac_no= %u",uVar4,
                   *(undefined4 *)pSVar3);
  cVar2 = MySQL::exec(this,true);
  if ((cVar2 == '\x01') && (lVar5 = MySQL::getAffectedRowCount(this), lVar5 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    MySQL::set_query(this,"inSert into charac_option(charac_no, options) values(%u,\'%s\')",
                     *(undefined4 *)pSVar3,uVar4);
    cVar2 = MySQL::exec(this,true);
    if (cVar2 != '\x01') {
      return 0;
    }
  }
  return 1;
}

```

