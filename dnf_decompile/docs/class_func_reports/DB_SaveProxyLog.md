# DB_SaveProxyLog

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 08422742 DB_SaveProxyLog::dispatch  [0x08422742-0x84227f5] ===
 8422742:	55                   	push   %ebp
 8422743:	89 e5                	mov    %esp,%ebp
 8422745:	57                   	push   %edi
 8422746:	56                   	push   %esi
 8422747:	53                   	push   %ebx
 8422748:	83 ec 3c             	sub    $0x3c,%esp
 842274b:	8b 45 14             	mov    0x14(%ebp),%eax
 842274e:	89 04 24             	mov    %eax,(%esp)
 8422751:	e8 5e f5 02 00       	call   8451cb4 <_ZN6Stream12GetOutBufferI18SIG_SAVE_PROXY_LOGEEPT_v>
 8422756:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8422759:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 842275e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8422765:	00 
 8422766:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 842276d:	00 
 842276e:	89 04 24             	mov    %eax,(%esp)
 8422771:	e8 c8 2a fd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8422776:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8422779:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842277c:	0f b6 40 2c          	movzbl 0x2c(%eax),%eax
 8422780:	0f b6 d8             	movzbl %al,%ebx
 8422783:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8422786:	8d 78 18             	lea    0x18(%eax),%edi
 8422789:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842278c:	8d 70 04             	lea    0x4(%eax),%esi
 842278f:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8422792:	8b 00                	mov    (%eax),%eax
 8422794:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842279b:	00 
 842279c:	89 04 24             	mov    %eax,(%esp)
 842279f:	e8 a7 68 ce ff       	call   810904b <_Z14NumberToStringji>
 84227a4:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 84227a8:	89 7c 24 10          	mov    %edi,0x10(%esp)
 84227ac:	89 74 24 0c          	mov    %esi,0xc(%esp)
 84227b0:	89 44 24 08          	mov    %eax,0x8(%esp)
 84227b4:	c7 44 24 04 6c d3 c4 	movl   $0x8c4d36c,0x4(%esp)
 84227bb:	08 
 84227bc:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84227bf:	89 04 24             	mov    %eax,(%esp)
 84227c2:	e8 f9 19 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84227c7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84227ce:	00 
 84227cf:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84227d2:	89 04 24             	mov    %eax,(%esp)
 84227d5:	e8 4c 1b fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 84227da:	83 f0 01             	xor    $0x1,%eax
 84227dd:	84 c0                	test   %al,%al
 84227df:	74 07                	je     84227e8 <_ZN15DB_SaveProxyLog8dispatchEiiP6Stream+0xa6>
 84227e1:	b8 00 00 00 00       	mov    $0x0,%eax
 84227e6:	eb 05                	jmp    84227ed <_ZN15DB_SaveProxyLog8dispatchEiiP6Stream+0xab>
 84227e8:	b8 01 00 00 00       	mov    $0x1,%eax
 84227ed:	83 c4 3c             	add    $0x3c,%esp
 84227f0:	5b                   	pop    %ebx
 84227f1:	5e                   	pop    %esi
 84227f2:	5f                   	pop    %edi
 84227f3:	5d                   	pop    %ebp
 84227f4:	c3                   	ret
 84227f5:	90                   	nop

```

```c
// DB_SaveProxyLog::dispatch @ 0x8422742

/* DB_SaveProxyLog::dispatch(int, int, Stream*) */

bool DB_SaveProxyLog::dispatch(int param_1,int param_2,Stream *param_3)

{
  SIG_SAVE_PROXY_LOG SVar1;
  char cVar2;
  SIG_SAVE_PROXY_LOG *pSVar3;
  MySQL *this;
  undefined4 uVar4;
  Stream *in_stack_00000010;
  
  pSVar3 = Stream::GetOutBuffer<SIG_SAVE_PROXY_LOG>(in_stack_00000010);
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  SVar1 = pSVar3[0x2c];
  uVar4 = NumberToString(*(uint *)pSVar3,0);
  MySQL::set_query(this,"inSert into dnf_proxy_log values(now(),%s,\'%s\',\'%s\',%d)",uVar4,
                   pSVar3 + 4,pSVar3 + 0x18,(uint)(byte)SVar1);
  cVar2 = MySQL::exec(this,true);
  return cVar2 == '\x01';
}

```

