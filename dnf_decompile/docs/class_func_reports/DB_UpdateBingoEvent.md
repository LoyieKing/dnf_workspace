# DB_UpdateBingoEvent

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 08448eb8 DB_UpdateBingoEvent::dispatch  [0x08448eb8-0x8449031] ===
 8448eb8:	55                   	push   %ebp
 8448eb9:	89 e5                	mov    %esp,%ebp
 8448ebb:	56                   	push   %esi
 8448ebc:	53                   	push   %ebx
 8448ebd:	83 ec 40             	sub    $0x40,%esp
 8448ec0:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8448ec5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8448ecc:	00 
 8448ecd:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 8448ed4:	00 
 8448ed5:	89 04 24             	mov    %eax,(%esp)
 8448ed8:	e8 61 c3 fa ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8448edd:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8448ee0:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8448ee7:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 8448eee:	c6 45 e7 00          	movb   $0x0,-0x19(%ebp)
 8448ef2:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8448ef5:	89 44 24 04          	mov    %eax,0x4(%esp)
 8448ef9:	8b 45 14             	mov    0x14(%ebp),%eax
 8448efc:	89 04 24             	mov    %eax,(%esp)
 8448eff:	e8 92 38 1d 00       	call   861c796 <_ZN6StreamrsERj>
 8448f04:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8448f07:	89 44 24 04          	mov    %eax,0x4(%esp)
 8448f0b:	8b 45 14             	mov    0x14(%ebp),%eax
 8448f0e:	89 04 24             	mov    %eax,(%esp)
 8448f11:	e8 ae 36 1d 00       	call   861c5c4 <_ZN6StreamrsERi>
 8448f16:	8d 45 e7             	lea    -0x19(%ebp),%eax
 8448f19:	89 44 24 04          	mov    %eax,0x4(%esp)
 8448f1d:	8b 45 14             	mov    0x14(%ebp),%eax
 8448f20:	89 04 24             	mov    %eax,(%esp)
 8448f23:	e8 c8 35 1d 00       	call   861c4f0 <_ZN6StreamrsERc>
 8448f28:	e8 54 32 c8 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 8448f2d:	8b 98 7c 03 00 00    	mov    0x37c(%eax),%ebx
 8448f33:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8448f3a:	e8 5f 2d c8 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8448f3f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8448f43:	89 04 24             	mov    %eax,(%esp)
 8448f46:	e8 df 01 cc ff       	call   810912a <_Z23GetCurrentResetBaseTimeli>
 8448f4b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8448f4e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8448f51:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8448f58:	00 
 8448f59:	89 04 24             	mov    %eax,(%esp)
 8448f5c:	e8 ea 00 cc ff       	call   810904b <_Z14NumberToStringji>
 8448f61:	0f b6 55 e7          	movzbl -0x19(%ebp),%edx
 8448f65:	0f be ca             	movsbl %dl,%ecx
 8448f68:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8448f6b:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8448f6e:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 8448f72:	89 44 24 10          	mov    %eax,0x10(%esp)
 8448f76:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8448f7a:	89 54 24 08          	mov    %edx,0x8(%esp)
 8448f7e:	c7 44 24 04 40 8a c5 	movl   $0x8c58a40,0x4(%esp)
 8448f85:	08 
 8448f86:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8448f89:	89 04 24             	mov    %eax,(%esp)
 8448f8c:	e8 2f b2 fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8448f91:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8448f98:	00 
 8448f99:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8448f9c:	89 04 24             	mov    %eax,(%esp)
 8448f9f:	e8 82 b3 fa ff       	call   83f4326 <_ZN5MySQL4execEb>
 8448fa4:	83 f0 01             	xor    $0x1,%eax
 8448fa7:	84 c0                	test   %al,%al
 8448fa9:	74 07                	je     8448fb2 <_ZN19DB_UpdateBingoEvent8dispatchEiiP6Stream+0xfa>
 8448fab:	b8 00 00 00 00       	mov    $0x0,%eax
 8448fb0:	eb 78                	jmp    844902a <_ZN19DB_UpdateBingoEvent8dispatchEiiP6Stream+0x172>
 8448fb2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8448fb5:	89 04 24             	mov    %eax,(%esp)
 8448fb8:	e8 53 b3 fa ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 8448fbd:	09 d0                	or     %edx,%eax
 8448fbf:	85 c0                	test   %eax,%eax
 8448fc1:	0f 94 c0             	sete   %al
 8448fc4:	84 c0                	test   %al,%al
 8448fc6:	74 5d                	je     8449025 <_ZN19DB_UpdateBingoEvent8dispatchEiiP6Stream+0x16d>
 8448fc8:	0f b6 45 e7          	movzbl -0x19(%ebp),%eax
 8448fcc:	0f be f0             	movsbl %al,%esi
 8448fcf:	8b 5d e8             	mov    -0x18(%ebp),%ebx
 8448fd2:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8448fd5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8448fdc:	00 
 8448fdd:	89 04 24             	mov    %eax,(%esp)
 8448fe0:	e8 66 00 cc ff       	call   810904b <_Z14NumberToStringji>
 8448fe5:	89 74 24 10          	mov    %esi,0x10(%esp)
 8448fe9:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8448fed:	89 44 24 08          	mov    %eax,0x8(%esp)
 8448ff1:	c7 44 24 04 a4 8a c5 	movl   $0x8c58aa4,0x4(%esp)
 8448ff8:	08 
 8448ff9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8448ffc:	89 04 24             	mov    %eax,(%esp)
 8448fff:	e8 bc b1 fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8449004:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 844900b:	00 
 844900c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 844900f:	89 04 24             	mov    %eax,(%esp)
 8449012:	e8 0f b3 fa ff       	call   83f4326 <_ZN5MySQL4execEb>
 8449017:	83 f0 01             	xor    $0x1,%eax
 844901a:	84 c0                	test   %al,%al
 844901c:	74 07                	je     8449025 <_ZN19DB_UpdateBingoEvent8dispatchEiiP6Stream+0x16d>
 844901e:	b8 00 00 00 00       	mov    $0x0,%eax
 8449023:	eb 05                	jmp    844902a <_ZN19DB_UpdateBingoEvent8dispatchEiiP6Stream+0x172>
 8449025:	b8 01 00 00 00       	mov    $0x1,%eax
 844902a:	83 c4 40             	add    $0x40,%esp
 844902d:	5b                   	pop    %ebx
 844902e:	5e                   	pop    %esi
 844902f:	5d                   	pop    %ebp
 8449030:	c3                   	ret
 8449031:	90                   	nop

```

```c
// DB_UpdateBingoEvent::dispatch @ 0x8448eb8

/* DB_UpdateBingoEvent::dispatch(int, int, Stream*) */

undefined4 DB_UpdateBingoEvent::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  Stream *in_stack_00000010;
  char local_1d;
  int local_1c;
  uint local_18;
  MySQL *local_14;
  undefined4 local_10;
  
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  local_18 = 0;
  local_1c = 0;
  local_1d = '\0';
  Stream::operator>>(in_stack_00000010,&local_18);
  Stream::operator>>(in_stack_00000010,&local_1c);
  Stream::operator>>(in_stack_00000010,&local_1d);
  iVar2 = G_CEnvironment();
  iVar2 = *(int *)(iVar2 + 0x37c);
  lVar3 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  local_10 = GetCurrentResetBaseTime(lVar3,iVar2);
  uVar4 = NumberToString(local_18,0);
  uVar5 = local_10;
  MySQL::set_query(local_14,
                   "upDate event_1208_bingo set board = %d,reward=%d where m_id = %s and occ_date > from_unixtime(%u)"
                   ,local_1c,(int)local_1d,uVar4,local_10);
  cVar1 = MySQL::exec(local_14,true);
  if (cVar1 == '\x01') {
    lVar7 = MySQL::getAffectedRowCount(local_14);
    iVar2 = local_1c;
    if (lVar7 == 0) {
      iVar6 = (int)local_1d;
      uVar4 = NumberToString(local_18,0);
      MySQL::set_query(local_14,
                       "inSert into event_1208_bingo(m_id,occ_date,board,reward) values(%s,now(),%d,%d)"
                       ,uVar4,iVar2,iVar6,uVar5);
      cVar1 = MySQL::exec(local_14,true);
      if (cVar1 != '\x01') {
        return 0;
      }
    }
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}

```

---

## makeRequest

```asm
// === 08449032 DB_UpdateBingoEvent::makeRequest  [0x08449032-0x8449143] ===
 8449032:	55                   	push   %ebp
 8449033:	89 e5                	mov    %esp,%ebp
 8449035:	56                   	push   %esi
 8449036:	53                   	push   %ebx
 8449037:	83 ec 30             	sub    $0x30,%esp
 844903a:	8b 45 14             	mov    0x14(%ebp),%eax
 844903d:	88 45 e4             	mov    %al,-0x1c(%ebp)
 8449040:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8449045:	c7 44 24 08 5e b7 00 	movl   $0xb75e,0x8(%esp)
 844904c:	00 
 844904d:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8449054:	08 
 8449055:	89 04 24             	mov    %eax,(%esp)
 8449058:	e8 29 6a e4 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 844905d:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8449064:	00 
 8449065:	89 44 24 04          	mov    %eax,0x4(%esp)
 8449069:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844906c:	89 04 24             	mov    %eax,(%esp)
 844906f:	e8 b2 fb c7 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8449074:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8449077:	89 04 24             	mov    %eax,(%esp)
 844907a:	e8 c7 fb c7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 844907f:	c7 44 24 04 1f 03 00 	movl   $0x31f,0x4(%esp)
 8449086:	00 
 8449087:	89 04 24             	mov    %eax,(%esp)
 844908a:	e8 c7 fb c7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 844908f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8449092:	89 04 24             	mov    %eax,(%esp)
 8449095:	e8 ac fb c7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 844909a:	8b 55 08             	mov    0x8(%ebp),%edx
 844909d:	89 54 24 04          	mov    %edx,0x4(%esp)
 84490a1:	89 04 24             	mov    %eax,(%esp)
 84490a4:	e8 ad fb c7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84490a9:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84490ac:	89 04 24             	mov    %eax,(%esp)
 84490af:	e8 92 fb c7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84490b4:	8b 55 0c             	mov    0xc(%ebp),%edx
 84490b7:	89 54 24 04          	mov    %edx,0x4(%esp)
 84490bb:	89 04 24             	mov    %eax,(%esp)
 84490be:	e8 cf 91 c9 ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 84490c3:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84490c6:	89 04 24             	mov    %eax,(%esp)
 84490c9:	e8 78 fb c7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84490ce:	8b 55 10             	mov    0x10(%ebp),%edx
 84490d1:	89 54 24 04          	mov    %edx,0x4(%esp)
 84490d5:	89 04 24             	mov    %eax,(%esp)
 84490d8:	e8 79 fb c7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84490dd:	0f b6 5d e4          	movzbl -0x1c(%ebp),%ebx
 84490e1:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84490e4:	89 04 24             	mov    %eax,(%esp)
 84490e7:	e8 5a fb c7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84490ec:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84490f0:	89 04 24             	mov    %eax,(%esp)
 84490f3:	e8 0c 7f cb ff       	call   8101004 <_ZN12CStreamGuardlsEc>
 84490f8:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84490fd:	8d 55 f0             	lea    -0x10(%ebp),%edx
 8449100:	89 54 24 08          	mov    %edx,0x8(%esp)
 8449104:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 844910b:	00 
 844910c:	89 04 24             	mov    %eax,(%esp)
 844910f:	e8 ca 7e 12 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8449114:	eb 1b                	jmp    8449131 <_ZN19DB_UpdateBingoEvent11makeRequestEijib+0xff>
 8449116:	89 d3                	mov    %edx,%ebx
 8449118:	89 c6                	mov    %eax,%esi
 844911a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844911d:	89 04 24             	mov    %eax,(%esp)
 8449120:	e8 ad 37 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8449125:	89 f0                	mov    %esi,%eax
 8449127:	89 da                	mov    %ebx,%edx
 8449129:	89 04 24             	mov    %eax,(%esp)
 844912c:	e8 1f a6 69 00       	call   8ae3750 <_Unwind_Resume>
 8449131:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8449134:	89 04 24             	mov    %eax,(%esp)
 8449137:	e8 96 37 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 844913c:	83 c4 30             	add    $0x30,%esp
 844913f:	5b                   	pop    %ebx
 8449140:	5e                   	pop    %esi
 8449141:	5d                   	pop    %ebp
 8449142:	c3                   	ret
 8449143:	90                   	nop

```

```c
// DB_UpdateBingoEvent::makeRequest @ 0x8449032

/* DB_UpdateBingoEvent::makeRequest(int, unsigned int, int, bool) */

void DB_UpdateBingoEvent::makeRequest(int param_1,uint param_2,int param_3,bool param_4)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xb75e);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0844908a to 08449113 has its CatchHandler @ 08449116 */
  CStreamGuard::operator<<(pCVar2,799);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_3);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_4);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}

```

