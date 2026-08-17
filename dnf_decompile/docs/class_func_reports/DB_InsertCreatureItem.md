# DB_InsertCreatureItem

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 0841f8d4 DB_InsertCreatureItem::dispatch  [0x0841f8d4-0x841fa27] ===
 841f8d4:	55                   	push   %ebp
 841f8d5:	89 e5                	mov    %esp,%ebp
 841f8d7:	57                   	push   %edi
 841f8d8:	56                   	push   %esi
 841f8d9:	53                   	push   %ebx
 841f8da:	83 ec 3c             	sub    $0x3c,%esp
 841f8dd:	8b 45 14             	mov    0x14(%ebp),%eax
 841f8e0:	89 04 24             	mov    %eax,(%esp)
 841f8e3:	e8 6a 21 03 00       	call   8451a52 <_ZN6Stream12GetOutBufferI17SIG_CREATURE_ITEMEEPT_v>
 841f8e8:	89 45 dc             	mov    %eax,-0x24(%ebp)
 841f8eb:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 841f8f0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 841f8f7:	00 
 841f8f8:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 841f8ff:	00 
 841f900:	89 04 24             	mov    %eax,(%esp)
 841f903:	e8 36 59 fd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 841f908:	89 45 e0             	mov    %eax,-0x20(%ebp)
 841f90b:	8b 45 dc             	mov    -0x24(%ebp),%eax
 841f90e:	89 44 24 04          	mov    %eax,0x4(%esp)
 841f912:	8b 45 e0             	mov    -0x20(%ebp),%eax
 841f915:	89 04 24             	mov    %eax,(%esp)
 841f918:	e8 0b 01 00 00       	call   841fa28 <_ZN21DB_InsertCreatureItem18insertCreatureItemEP5MySQLPK17SIG_CREATURE_ITEM>
 841f91d:	83 f0 01             	xor    $0x1,%eax
 841f920:	84 c0                	test   %al,%al
 841f922:	74 0a                	je     841f92e <_ZN21DB_InsertCreatureItem8dispatchEiiP6Stream+0x5a>
 841f924:	bb 00 00 00 00       	mov    $0x0,%ebx
 841f929:	e9 f0 00 00 00       	jmp    841fa1e <_ZN21DB_InsertCreatureItem8dispatchEiiP6Stream+0x14a>
 841f92e:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 841f933:	c7 44 24 08 c8 55 00 	movl   $0x55c8,0x8(%esp)
 841f93a:	00 
 841f93b:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 841f942:	08 
 841f943:	89 04 24             	mov    %eax,(%esp)
 841f946:	e8 3b 01 e7 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 841f94b:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 841f952:	00 
 841f953:	89 44 24 04          	mov    %eax,0x4(%esp)
 841f957:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 841f95a:	89 04 24             	mov    %eax,(%esp)
 841f95d:	e8 c4 92 ca ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 841f962:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 841f965:	89 04 24             	mov    %eax,(%esp)
 841f968:	e8 d9 92 ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 841f96d:	c7 44 24 04 88 00 00 	movl   $0x88,0x4(%esp)
 841f974:	00 
 841f975:	89 04 24             	mov    %eax,(%esp)
 841f978:	e8 d9 92 ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 841f97d:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 841f980:	89 04 24             	mov    %eax,(%esp)
 841f983:	e8 be 92 ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 841f988:	8b 55 10             	mov    0x10(%ebp),%edx
 841f98b:	89 54 24 04          	mov    %edx,0x4(%esp)
 841f98f:	89 04 24             	mov    %eax,(%esp)
 841f992:	e8 bf 92 ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 841f997:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 841f99a:	89 04 24             	mov    %eax,(%esp)
 841f99d:	e8 ac 92 ca ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 841f9a2:	89 04 24             	mov    %eax,(%esp)
 841f9a5:	e8 34 41 f2 ff       	call   8343ade <_ZN12CStreamGuard11GetInBufferI17SIG_CREATURE_ITEMEEPT_v>
 841f9aa:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 841f9ad:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 841f9b0:	8b 45 dc             	mov    -0x24(%ebp),%eax
 841f9b3:	89 c3                	mov    %eax,%ebx
 841f9b5:	b8 1d 00 00 00       	mov    $0x1d,%eax
 841f9ba:	89 d7                	mov    %edx,%edi
 841f9bc:	89 de                	mov    %ebx,%esi
 841f9be:	89 c1                	mov    %eax,%ecx
 841f9c0:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
 841f9c2:	8b 45 e0             	mov    -0x20(%ebp),%eax
 841f9c5:	89 04 24             	mov    %eax,(%esp)
 841f9c8:	e8 07 a1 fd ff       	call   83f9ad4 <_ZN8WongWork8DBCommon11GetIdentityEP5MySQL>
 841f9cd:	89 c2                	mov    %eax,%edx
 841f9cf:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 841f9d2:	89 50 30             	mov    %edx,0x30(%eax)
 841f9d5:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 841f9da:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 841f9dd:	89 54 24 08          	mov    %edx,0x8(%esp)
 841f9e1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 841f9e8:	00 
 841f9e9:	89 04 24             	mov    %eax,(%esp)
 841f9ec:	e8 ed 15 15 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 841f9f1:	bb 01 00 00 00       	mov    $0x1,%ebx
 841f9f6:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 841f9f9:	89 04 24             	mov    %eax,(%esp)
 841f9fc:	e8 d1 ce 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 841fa01:	eb 1b                	jmp    841fa1e <_ZN21DB_InsertCreatureItem8dispatchEiiP6Stream+0x14a>
 841fa03:	89 d3                	mov    %edx,%ebx
 841fa05:	89 c6                	mov    %eax,%esi
 841fa07:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 841fa0a:	89 04 24             	mov    %eax,(%esp)
 841fa0d:	e8 c0 ce 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 841fa12:	89 f0                	mov    %esi,%eax
 841fa14:	89 da                	mov    %ebx,%edx
 841fa16:	89 04 24             	mov    %eax,(%esp)
 841fa19:	e8 32 3d 6c 00       	call   8ae3750 <_Unwind_Resume>
 841fa1e:	89 d8                	mov    %ebx,%eax
 841fa20:	83 c4 3c             	add    $0x3c,%esp
 841fa23:	5b                   	pop    %ebx
 841fa24:	5e                   	pop    %esi
 841fa25:	5f                   	pop    %edi
 841fa26:	5d                   	pop    %ebp
 841fa27:	c3                   	ret

```

```c
// DB_InsertCreatureItem::dispatch @ 0x841f8d4

/* DB_InsertCreatureItem::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_InsertCreatureItem::dispatch(DB_InsertCreatureItem *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  int iVar4;
  undefined4 uVar5;
  SIG_CREATURE_ITEM *pSVar6;
  SIG_CREATURE_ITEM *pSVar7;
  byte bVar8;
  CStreamGuard local_30 [8];
  SIG_CREATURE_ITEM *local_28;
  MySQL *local_24;
  SIG_CREATURE_ITEM *local_20;
  
  bVar8 = 0;
  local_28 = Stream::GetOutBuffer<SIG_CREATURE_ITEM>(param_3);
  local_24 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  cVar1 = insertCreatureItem(local_24,local_28);
  if (cVar1 == '\x01') {
    pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x55c8);
    CStreamGuard::CStreamGuard(local_30,pSVar2,true);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_30);
                    /* try { // try from 0841f978 to 0841f9f0 has its CatchHandler @ 0841fa03 */
    CStreamGuard::operator<<(pCVar3,0x88);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_30);
    CStreamGuard::operator<<(pCVar3,param_2);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_30);
    local_20 = CStreamGuard::GetInBuffer<SIG_CREATURE_ITEM>(pCVar3);
    pSVar6 = local_28;
    pSVar7 = local_20;
    for (iVar4 = 0x1d; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pSVar7 = *(undefined4 *)pSVar6;
      pSVar6 = pSVar6 + (uint)bVar8 * -8 + 4;
      pSVar7 = pSVar7 + (uint)bVar8 * -8 + 4;
    }
    uVar5 = WongWork::DBCommon::GetIdentity(local_24);
    *(undefined4 *)(local_20 + 0x30) = uVar5;
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_30);
    uVar5 = 1;
    CStreamGuard::~CStreamGuard(local_30);
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}

```

---

## insertCreatureItem

```asm
// === 0841fa28 DB_InsertCreatureItem::insertCreatureItem  [0x0841fa28-0x841fd11] ===
 841fa28:	55                   	push   %ebp
 841fa29:	89 e5                	mov    %esp,%ebp
 841fa2b:	57                   	push   %edi
 841fa2c:	56                   	push   %esi
 841fa2d:	53                   	push   %ebx
 841fa2e:	81 ec fc 00 00 00    	sub    $0xfc,%esp
 841fa34:	8b 45 0c             	mov    0xc(%ebp),%eax
 841fa37:	8b 40 68             	mov    0x68(%eax),%eax
 841fa3a:	85 c0                	test   %eax,%eax
 841fa3c:	0f 85 89 00 00 00    	jne    841facb <_ZN21DB_InsertCreatureItem18insertCreatureItemEP5MySQLPK17SIG_CREATURE_ITEM+0xa3>
 841fa42:	8b 45 0c             	mov    0xc(%ebp),%eax
 841fa45:	8b 40 48             	mov    0x48(%eax),%eax
 841fa48:	89 44 24 0c          	mov    %eax,0xc(%esp)
 841fa4c:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 841fa53:	00 
 841fa54:	c7 44 24 04 88 c4 c4 	movl   $0x8c4c488,0x4(%esp)
 841fa5b:	08 
 841fa5c:	8b 45 08             	mov    0x8(%ebp),%eax
 841fa5f:	89 04 24             	mov    %eax,(%esp)
 841fa62:	e8 59 47 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 841fa67:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 841fa6e:	00 
 841fa6f:	8b 45 08             	mov    0x8(%ebp),%eax
 841fa72:	89 04 24             	mov    %eax,(%esp)
 841fa75:	e8 ac 48 fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 841fa7a:	83 f0 01             	xor    $0x1,%eax
 841fa7d:	84 c0                	test   %al,%al
 841fa7f:	74 4a                	je     841facb <_ZN21DB_InsertCreatureItem18insertCreatureItemEP5MySQLPK17SIG_CREATURE_ITEM+0xa3>
 841fa81:	8b 45 0c             	mov    0xc(%ebp),%eax
 841fa84:	8b 58 48             	mov    0x48(%eax),%ebx
 841fa87:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 841fa8e:	00 
 841fa8f:	c7 44 24 08 dd 55 00 	movl   $0x55dd,0x8(%esp)
 841fa96:	00 
 841fa97:	c7 44 24 04 40 c8 c5 	movl   $0x8c5c840,0x4(%esp)
 841fa9e:	08 
 841fa9f:	8d 45 cc             	lea    -0x34(%ebp),%eax
 841faa2:	89 04 24             	mov    %eax,(%esp)
 841faa5:	e8 6e fc 12 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 841faaa:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 841faae:	c7 44 24 04 c4 c4 c4 	movl   $0x8c4c4c4,0x4(%esp)
 841fab5:	08 
 841fab6:	8d 45 cc             	lea    -0x34(%ebp),%eax
 841fab9:	89 04 24             	mov    %eax,(%esp)
 841fabc:	e8 c7 fc 12 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 841fac1:	b8 00 00 00 00       	mov    $0x0,%eax
 841fac6:	e9 3c 02 00 00       	jmp    841fd07 <_ZN21DB_InsertCreatureItem18insertCreatureItemEP5MySQLPK17SIG_CREATURE_ITEM+0x2df>
 841facb:	c7 45 8c 27 39 39 39 	movl   $0x39393927,-0x74(%ebp)
 841fad2:	c7 45 90 39 2d 31 32 	movl   $0x32312d39,-0x70(%ebp)
 841fad9:	c7 45 94 2d 33 31 20 	movl   $0x2031332d,-0x6c(%ebp)
 841fae0:	c7 45 98 32 33 3a 35 	movl   $0x353a3332,-0x68(%ebp)
 841fae7:	c7 45 9c 39 3a 35 39 	movl   $0x39353a39,-0x64(%ebp)
 841faee:	c7 45 a0 27 00 00 00 	movl   $0x27,-0x60(%ebp)
 841faf5:	8d 5d a4             	lea    -0x5c(%ebp),%ebx
 841faf8:	b8 00 00 00 00       	mov    $0x0,%eax
 841fafd:	ba 0a 00 00 00       	mov    $0xa,%edx
 841fb02:	89 df                	mov    %ebx,%edi
 841fb04:	89 d1                	mov    %edx,%ecx
 841fb06:	f3 ab                	rep stos %eax,%es:(%edi)
 841fb08:	e8 f5 cc 16 00       	call   858c802 <_ZN6OS_API15GetDateTimeTickEv>
 841fb0d:	89 45 dc             	mov    %eax,-0x24(%ebp)
 841fb10:	8b 45 0c             	mov    0xc(%ebp),%eax
 841fb13:	8b 40 54             	mov    0x54(%eax),%eax
 841fb16:	89 45 e0             	mov    %eax,-0x20(%ebp)
 841fb19:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 841fb1d:	74 3e                	je     841fb5d <_ZN21DB_InsertCreatureItem18insertCreatureItemEP5MySQLPK17SIG_CREATURE_ITEM+0x135>
 841fb1f:	c7 44 24 08 40 00 00 	movl   $0x40,0x8(%esp)
 841fb26:	00 
 841fb27:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 841fb2e:	00 
 841fb2f:	8d 45 8c             	lea    -0x74(%ebp),%eax
 841fb32:	89 04 24             	mov    %eax,(%esp)
 841fb35:	e8 86 e1 c5 ff       	call   807dcc0 <memset@plt>
 841fb3a:	8b 45 e0             	mov    -0x20(%ebp),%eax
 841fb3d:	69 c0 80 51 01 00    	imul   $0x15180,%eax,%eax
 841fb43:	03 45 dc             	add    -0x24(%ebp),%eax
 841fb46:	89 44 24 08          	mov    %eax,0x8(%esp)
 841fb4a:	c7 44 24 04 ff c4 c4 	movl   $0x8c4c4ff,0x4(%esp)
 841fb51:	08 
 841fb52:	8d 45 8c             	lea    -0x74(%ebp),%eax
 841fb55:	89 04 24             	mov    %eax,(%esp)
 841fb58:	e8 e3 e8 c5 ff       	call   807e440 <sprintf@plt>
 841fb5d:	c7 85 4c ff ff ff 27 	movl   $0x39393927,-0xb4(%ebp)
 841fb64:	39 39 39 
 841fb67:	c7 85 50 ff ff ff 39 	movl   $0x32312d39,-0xb0(%ebp)
 841fb6e:	2d 31 32 
 841fb71:	c7 85 54 ff ff ff 2d 	movl   $0x2031332d,-0xac(%ebp)
 841fb78:	33 31 20 
 841fb7b:	c7 85 58 ff ff ff 32 	movl   $0x353a3332,-0xa8(%ebp)
 841fb82:	33 3a 35 
 841fb85:	c7 85 5c ff ff ff 39 	movl   $0x39353a39,-0xa4(%ebp)
 841fb8c:	3a 35 39 
 841fb8f:	c7 85 60 ff ff ff 27 	movl   $0x27,-0xa0(%ebp)
 841fb96:	00 00 00 
 841fb99:	8d 9d 64 ff ff ff    	lea    -0x9c(%ebp),%ebx
 841fb9f:	b8 00 00 00 00       	mov    $0x0,%eax
 841fba4:	ba 0a 00 00 00       	mov    $0xa,%edx
 841fba9:	89 df                	mov    %ebx,%edi
 841fbab:	89 d1                	mov    %edx,%ecx
 841fbad:	f3 ab                	rep stos %eax,%es:(%edi)
 841fbaf:	8b 45 0c             	mov    0xc(%ebp),%eax
 841fbb2:	8b 40 58             	mov    0x58(%eax),%eax
 841fbb5:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 841fbb8:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 841fbbc:	74 3b                	je     841fbf9 <_ZN21DB_InsertCreatureItem18insertCreatureItemEP5MySQLPK17SIG_CREATURE_ITEM+0x1d1>
 841fbbe:	c7 44 24 08 40 00 00 	movl   $0x40,0x8(%esp)
 841fbc5:	00 
 841fbc6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 841fbcd:	00 
 841fbce:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 841fbd4:	89 04 24             	mov    %eax,(%esp)
 841fbd7:	e8 e4 e0 c5 ff       	call   807dcc0 <memset@plt>
 841fbdc:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 841fbdf:	89 44 24 08          	mov    %eax,0x8(%esp)
 841fbe3:	c7 44 24 04 ff c4 c4 	movl   $0x8c4c4ff,0x4(%esp)
 841fbea:	08 
 841fbeb:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 841fbf1:	89 04 24             	mov    %eax,(%esp)
 841fbf4:	e8 47 e8 c5 ff       	call   807e440 <sprintf@plt>
 841fbf9:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 841fbfd:	75 3b                	jne    841fc3a <_ZN21DB_InsertCreatureItem18insertCreatureItemEP5MySQLPK17SIG_CREATURE_ITEM+0x212>
 841fbff:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 841fc03:	74 35                	je     841fc3a <_ZN21DB_InsertCreatureItem18insertCreatureItemEP5MySQLPK17SIG_CREATURE_ITEM+0x212>
 841fc05:	c7 44 24 08 40 00 00 	movl   $0x40,0x8(%esp)
 841fc0c:	00 
 841fc0d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 841fc14:	00 
 841fc15:	8d 45 8c             	lea    -0x74(%ebp),%eax
 841fc18:	89 04 24             	mov    %eax,(%esp)
 841fc1b:	e8 a0 e0 c5 ff       	call   807dcc0 <memset@plt>
 841fc20:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 841fc23:	89 44 24 08          	mov    %eax,0x8(%esp)
 841fc27:	c7 44 24 04 ff c4 c4 	movl   $0x8c4c4ff,0x4(%esp)
 841fc2e:	08 
 841fc2f:	8d 45 8c             	lea    -0x74(%ebp),%eax
 841fc32:	89 04 24             	mov    %eax,(%esp)
 841fc35:	e8 06 e8 c5 ff       	call   807e440 <sprintf@plt>
 841fc3a:	8b 45 0c             	mov    0xc(%ebp),%eax
 841fc3d:	0f b6 40 50          	movzbl 0x50(%eax),%eax
 841fc41:	0f be d8             	movsbl %al,%ebx
 841fc44:	8b 45 0c             	mov    0xc(%ebp),%eax
 841fc47:	0f b6 40 53          	movzbl 0x53(%eax),%eax
 841fc4b:	0f be f8             	movsbl %al,%edi
 841fc4e:	8b 45 0c             	mov    0xc(%ebp),%eax
 841fc51:	0f b7 40 14          	movzwl 0x14(%eax),%eax
 841fc55:	0f b7 c0             	movzwl %ax,%eax
 841fc58:	89 85 38 ff ff ff    	mov    %eax,-0xc8(%ebp)
 841fc5e:	8b 45 0c             	mov    0xc(%ebp),%eax
 841fc61:	8b 40 4c             	mov    0x4c(%eax),%eax
 841fc64:	89 85 3c ff ff ff    	mov    %eax,-0xc4(%ebp)
 841fc6a:	8b 45 0c             	mov    0xc(%ebp),%eax
 841fc6d:	8b 40 44             	mov    0x44(%eax),%eax
 841fc70:	89 85 40 ff ff ff    	mov    %eax,-0xc0(%ebp)
 841fc76:	8b 45 0c             	mov    0xc(%ebp),%eax
 841fc79:	83 c0 34             	add    $0x34,%eax
 841fc7c:	89 85 44 ff ff ff    	mov    %eax,-0xbc(%ebp)
 841fc82:	8b 45 0c             	mov    0xc(%ebp),%eax
 841fc85:	8b 70 08             	mov    0x8(%eax),%esi
 841fc88:	8b 45 0c             	mov    0xc(%ebp),%eax
 841fc8b:	8b 48 2c             	mov    0x2c(%eax),%ecx
 841fc8e:	8b 45 0c             	mov    0xc(%ebp),%eax
 841fc91:	8b 50 48             	mov    0x48(%eax),%edx
 841fc94:	89 5c 24 30          	mov    %ebx,0x30(%esp)
 841fc98:	89 7c 24 2c          	mov    %edi,0x2c(%esp)
 841fc9c:	8b 85 38 ff ff ff    	mov    -0xc8(%ebp),%eax
 841fca2:	89 44 24 28          	mov    %eax,0x28(%esp)
 841fca6:	8b bd 3c ff ff ff    	mov    -0xc4(%ebp),%edi
 841fcac:	89 7c 24 24          	mov    %edi,0x24(%esp)
 841fcb0:	8b 85 40 ff ff ff    	mov    -0xc0(%ebp),%eax
 841fcb6:	89 44 24 20          	mov    %eax,0x20(%esp)
 841fcba:	8b bd 44 ff ff ff    	mov    -0xbc(%ebp),%edi
 841fcc0:	89 7c 24 1c          	mov    %edi,0x1c(%esp)
 841fcc4:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 841fcca:	89 44 24 18          	mov    %eax,0x18(%esp)
 841fcce:	8d 45 8c             	lea    -0x74(%ebp),%eax
 841fcd1:	89 44 24 14          	mov    %eax,0x14(%esp)
 841fcd5:	89 74 24 10          	mov    %esi,0x10(%esp)
 841fcd9:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 841fcdd:	89 54 24 08          	mov    %edx,0x8(%esp)
 841fce1:	c7 44 24 04 14 c5 c4 	movl   $0x8c4c514,0x4(%esp)
 841fce8:	08 
 841fce9:	8b 45 08             	mov    0x8(%ebp),%eax
 841fcec:	89 04 24             	mov    %eax,(%esp)
 841fcef:	e8 cc 44 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 841fcf4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 841fcfb:	00 
 841fcfc:	8b 45 08             	mov    0x8(%ebp),%eax
 841fcff:	89 04 24             	mov    %eax,(%esp)
 841fd02:	e8 1f 46 fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 841fd07:	81 c4 fc 00 00 00    	add    $0xfc,%esp
 841fd0d:	5b                   	pop    %ebx
 841fd0e:	5e                   	pop    %esi
 841fd0f:	5f                   	pop    %edi
 841fd10:	5d                   	pop    %ebp
 841fd11:	c3                   	ret

```

```c
// DB_InsertCreatureItem::insertCreatureItem @ 0x841fa28

/* DB_InsertCreatureItem::insertCreatureItem(MySQL*, SIG_CREATURE_ITEM const*) */

undefined4 DB_InsertCreatureItem::insertCreatureItem(MySQL *param_1,SIG_CREATURE_ITEM *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  byte bVar5;
  char local_b8 [24];
  undefined4 local_a0 [10];
  char local_78 [24];
  undefined4 local_60 [10];
  cMyTrace local_38 [16];
  int local_28;
  int local_24;
  int local_20;
  
  bVar5 = 0;
  if (*(int *)(param_2 + 0x68) == 0) {
    MySQL::set_query(param_1,"upDate inventory set creature_flag=%d where charac_no=%d",1,
                     *(undefined4 *)(param_2 + 0x48));
    cVar1 = MySQL::exec(param_1,true);
    if (cVar1 != '\x01') {
      uVar2 = *(undefined4 *)(param_2 + 0x48);
      cMyTrace::cMyTrace(local_38,
                         "static bool DB_InsertCreatureItem::insertCreatureItem(MySQL*, const SIG_CREATURE_ITEM*)"
                         ,0x55dd,5);
      cMyTrace::operator()
                (local_38,"DB_InsertCreatureItem::dispatch, exec() ERROR charac_no=%u",uVar2);
      return 0;
    }
  }
  builtin_strncpy(local_78,"\'9999-12-31 23:59:59\'",0x16);
  local_78[0x16] = '\0';
  local_78[0x17] = '\0';
  puVar4 = local_60;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  local_28 = OS_API::GetDateTimeTick();
  local_24 = *(int *)(param_2 + 0x54);
  if (local_24 != 0) {
    memset(local_78,0,0x40);
    sprintf(local_78,"from_unixtime(\'%d\')",local_24 * 0x15180 + local_28);
  }
  builtin_strncpy(local_b8,"\'9999-12-31 23:59:59\'",0x16);
  local_b8[0x16] = '\0';
  local_b8[0x17] = '\0';
  puVar4 = local_a0;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  local_20 = *(int *)(param_2 + 0x58);
  if (local_20 != 0) {
    memset(local_b8,0,0x40);
    sprintf(local_b8,"from_unixtime(\'%d\')",local_20);
  }
  if ((local_24 == 0) && (local_20 != 0)) {
    memset(local_78,0,0x40);
    sprintf(local_78,"from_unixtime(\'%d\')",local_20);
  }
  MySQL::set_query(param_1,
                   "inSert into creature_items(charac_no,slot,it_id,expire_date,delete_date,reg_date,name,stomach,exp,endurance,no_charge,stat,creature_type)values(%d,%d,%d,%s,%s,NOW(),\'%s\',%d,%d,%d,0,%d,%d)"
                   ,*(undefined4 *)(param_2 + 0x48),*(undefined4 *)(param_2 + 0x2c),
                   *(undefined4 *)(param_2 + 8),local_78,local_b8,param_2 + 0x34,
                   *(undefined4 *)(param_2 + 0x44),*(undefined4 *)(param_2 + 0x4c),
                   (uint)*(ushort *)(param_2 + 0x14),(int)(char)param_2[0x53],
                   (int)(char)param_2[0x50]);
  uVar2 = MySQL::exec(param_1,true);
  return uVar2;
}

```

