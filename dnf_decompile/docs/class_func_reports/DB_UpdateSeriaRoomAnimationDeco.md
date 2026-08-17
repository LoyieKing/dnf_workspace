# DB_UpdateSeriaRoomAnimationDeco

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 0844adc0 DB_UpdateSeriaRoomAnimationDeco::dispatch  [0x0844adc0-0x844af73] ===
 844adc0:	55                   	push   %ebp
 844adc1:	89 e5                	mov    %esp,%ebp
 844adc3:	57                   	push   %edi
 844adc4:	56                   	push   %esi
 844adc5:	53                   	push   %ebx
 844adc6:	83 ec 5c             	sub    $0x5c,%esp
 844adc9:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 844adce:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 844add5:	00 
 844add6:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 844addd:	00 
 844adde:	89 04 24             	mov    %eax,(%esp)
 844ade1:	e8 58 a4 fa ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 844ade6:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 844ade9:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 844adf0:	66 c7 45 de 00 00    	movw   $0x0,-0x22(%ebp)
 844adf6:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 844adfd:	66 c7 45 d6 00 00    	movw   $0x0,-0x2a(%ebp)
 844ae03:	66 c7 45 d4 00 00    	movw   $0x0,-0x2c(%ebp)
 844ae09:	8d 45 e0             	lea    -0x20(%ebp),%eax
 844ae0c:	89 44 24 04          	mov    %eax,0x4(%esp)
 844ae10:	8b 45 14             	mov    0x14(%ebp),%eax
 844ae13:	89 04 24             	mov    %eax,(%esp)
 844ae16:	e8 7b 19 1d 00       	call   861c796 <_ZN6StreamrsERj>
 844ae1b:	8d 45 de             	lea    -0x22(%ebp),%eax
 844ae1e:	89 44 24 04          	mov    %eax,0x4(%esp)
 844ae22:	8b 45 14             	mov    0x14(%ebp),%eax
 844ae25:	89 04 24             	mov    %eax,(%esp)
 844ae28:	e8 25 17 1d 00       	call   861c552 <_ZN6StreamrsERs>
 844ae2d:	8d 45 d8             	lea    -0x28(%ebp),%eax
 844ae30:	89 44 24 04          	mov    %eax,0x4(%esp)
 844ae34:	8b 45 14             	mov    0x14(%ebp),%eax
 844ae37:	89 04 24             	mov    %eax,(%esp)
 844ae3a:	e8 85 17 1d 00       	call   861c5c4 <_ZN6StreamrsERi>
 844ae3f:	8d 45 d6             	lea    -0x2a(%ebp),%eax
 844ae42:	89 44 24 04          	mov    %eax,0x4(%esp)
 844ae46:	8b 45 14             	mov    0x14(%ebp),%eax
 844ae49:	89 04 24             	mov    %eax,(%esp)
 844ae4c:	e8 01 17 1d 00       	call   861c552 <_ZN6StreamrsERs>
 844ae51:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 844ae54:	89 44 24 04          	mov    %eax,0x4(%esp)
 844ae58:	8b 45 14             	mov    0x14(%ebp),%eax
 844ae5b:	89 04 24             	mov    %eax,(%esp)
 844ae5e:	e8 ef 16 1d 00       	call   861c552 <_ZN6StreamrsERs>
 844ae63:	8b 75 d8             	mov    -0x28(%ebp),%esi
 844ae66:	0f b7 45 de          	movzwl -0x22(%ebp),%eax
 844ae6a:	0f bf d8             	movswl %ax,%ebx
 844ae6d:	8b 45 e0             	mov    -0x20(%ebp),%eax
 844ae70:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 844ae77:	00 
 844ae78:	89 04 24             	mov    %eax,(%esp)
 844ae7b:	e8 cb e1 cb ff       	call   810904b <_Z14NumberToStringji>
 844ae80:	0f b7 55 d4          	movzwl -0x2c(%ebp),%edx
 844ae84:	0f bf ca             	movswl %dx,%ecx
 844ae87:	0f b7 55 d6          	movzwl -0x2a(%ebp),%edx
 844ae8b:	0f bf d2             	movswl %dx,%edx
 844ae8e:	89 74 24 18          	mov    %esi,0x18(%esp)
 844ae92:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 844ae96:	89 44 24 10          	mov    %eax,0x10(%esp)
 844ae9a:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 844ae9e:	89 54 24 08          	mov    %edx,0x8(%esp)
 844aea2:	c7 44 24 04 54 93 c5 	movl   $0x8c59354,0x4(%esp)
 844aea9:	08 
 844aeaa:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 844aead:	89 04 24             	mov    %eax,(%esp)
 844aeb0:	e8 0b 93 fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 844aeb5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 844aebc:	00 
 844aebd:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 844aec0:	89 04 24             	mov    %eax,(%esp)
 844aec3:	e8 5e 94 fa ff       	call   83f4326 <_ZN5MySQL4execEb>
 844aec8:	83 f0 01             	xor    $0x1,%eax
 844aecb:	84 c0                	test   %al,%al
 844aecd:	74 0a                	je     844aed9 <_ZN31DB_UpdateSeriaRoomAnimationDeco8dispatchEiiP6Stream+0x119>
 844aecf:	b8 00 00 00 00       	mov    $0x0,%eax
 844aed4:	e9 92 00 00 00       	jmp    844af6b <_ZN31DB_UpdateSeriaRoomAnimationDeco8dispatchEiiP6Stream+0x1ab>
 844aed9:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 844aedc:	89 04 24             	mov    %eax,(%esp)
 844aedf:	e8 2c 94 fa ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 844aee4:	09 d0                	or     %edx,%eax
 844aee6:	85 c0                	test   %eax,%eax
 844aee8:	0f 94 c0             	sete   %al
 844aeeb:	84 c0                	test   %al,%al
 844aeed:	74 77                	je     844af66 <_ZN31DB_UpdateSeriaRoomAnimationDeco8dispatchEiiP6Stream+0x1a6>
 844aeef:	0f b7 45 d4          	movzwl -0x2c(%ebp),%eax
 844aef3:	98                   	cwtl
 844aef4:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 844aef7:	0f b7 45 d6          	movzwl -0x2a(%ebp),%eax
 844aefb:	0f bf f8             	movswl %ax,%edi
 844aefe:	8b 75 d8             	mov    -0x28(%ebp),%esi
 844af01:	0f b7 45 de          	movzwl -0x22(%ebp),%eax
 844af05:	0f bf d8             	movswl %ax,%ebx
 844af08:	8b 45 e0             	mov    -0x20(%ebp),%eax
 844af0b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 844af12:	00 
 844af13:	89 04 24             	mov    %eax,(%esp)
 844af16:	e8 30 e1 cb ff       	call   810904b <_Z14NumberToStringji>
 844af1b:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 844af1e:	89 54 24 18          	mov    %edx,0x18(%esp)
 844af22:	89 7c 24 14          	mov    %edi,0x14(%esp)
 844af26:	89 74 24 10          	mov    %esi,0x10(%esp)
 844af2a:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 844af2e:	89 44 24 08          	mov    %eax,0x8(%esp)
 844af32:	c7 44 24 04 d4 93 c5 	movl   $0x8c593d4,0x4(%esp)
 844af39:	08 
 844af3a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 844af3d:	89 04 24             	mov    %eax,(%esp)
 844af40:	e8 7b 92 fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 844af45:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 844af4c:	00 
 844af4d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 844af50:	89 04 24             	mov    %eax,(%esp)
 844af53:	e8 ce 93 fa ff       	call   83f4326 <_ZN5MySQL4execEb>
 844af58:	83 f0 01             	xor    $0x1,%eax
 844af5b:	84 c0                	test   %al,%al
 844af5d:	74 07                	je     844af66 <_ZN31DB_UpdateSeriaRoomAnimationDeco8dispatchEiiP6Stream+0x1a6>
 844af5f:	b8 00 00 00 00       	mov    $0x0,%eax
 844af64:	eb 05                	jmp    844af6b <_ZN31DB_UpdateSeriaRoomAnimationDeco8dispatchEiiP6Stream+0x1ab>
 844af66:	b8 01 00 00 00       	mov    $0x1,%eax
 844af6b:	83 c4 5c             	add    $0x5c,%esp
 844af6e:	5b                   	pop    %ebx
 844af6f:	5e                   	pop    %esi
 844af70:	5f                   	pop    %edi
 844af71:	5d                   	pop    %ebp
 844af72:	c3                   	ret
 844af73:	90                   	nop

```

```c
// DB_UpdateSeriaRoomAnimationDeco::dispatch @ 0x844adc0

/* DB_UpdateSeriaRoomAnimationDeco::dispatch(int, int, Stream*) */

undefined4 DB_UpdateSeriaRoomAnimationDeco::dispatch(int param_1,int param_2,Stream *param_3)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  Stream *in_stack_00000010;
  short local_30;
  short local_2e;
  int local_2c;
  short local_26;
  uint local_24;
  MySQL *local_20;
  
  local_20 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  local_24 = 0;
  local_26 = 0;
  local_2c = 0;
  local_2e = 0;
  local_30 = 0;
  Stream::operator>>(in_stack_00000010,&local_24);
  Stream::operator>>(in_stack_00000010,&local_26);
  Stream::operator>>(in_stack_00000010,&local_2c);
  Stream::operator>>(in_stack_00000010,&local_2e);
  Stream::operator>>(in_stack_00000010,&local_30);
  iVar1 = local_2c;
  iVar4 = (int)local_26;
  uVar3 = NumberToString(local_24,0);
  MySQL::set_query(local_20,
                   "upDate event_1208_seriaroom_anideco set receive_flow = %d, deco_flow = %d where m_id = %s and server_id = %d and charac_no = %d"
                   ,(int)local_2e,(int)local_30,uVar3,iVar4,iVar1);
  cVar2 = MySQL::exec(local_20,true);
  if (cVar2 == '\x01') {
    lVar7 = MySQL::getAffectedRowCount(local_20);
    iVar1 = local_2c;
    if (lVar7 == 0) {
      iVar4 = (int)local_30;
      iVar6 = (int)local_2e;
      iVar5 = (int)local_26;
      uVar3 = NumberToString(local_24,0);
      MySQL::set_query(local_20,
                       "inSert into event_1208_seriaroom_anideco(m_id ,server_id, charac_no, receive_flow, deco_flow, occ_date) values(%s, %d, %d, %d, %d, now())"
                       ,uVar3,iVar5,iVar1,iVar6,iVar4);
      cVar2 = MySQL::exec(local_20,true);
      if (cVar2 != '\x01') {
        return 0;
      }
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## makeRequest

```asm
// === 0844af74 DB_UpdateSeriaRoomAnimationDeco::makeRequest  [0x0844af74-0x844b0cb] ===
 844af74:	55                   	push   %ebp
 844af75:	89 e5                	mov    %esp,%ebp
 844af77:	56                   	push   %esi
 844af78:	53                   	push   %ebx
 844af79:	83 ec 30             	sub    $0x30,%esp
 844af7c:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 844af7f:	8b 55 14             	mov    0x14(%ebp),%edx
 844af82:	8b 45 18             	mov    0x18(%ebp),%eax
 844af85:	66 89 4d e4          	mov    %cx,-0x1c(%ebp)
 844af89:	66 89 55 e0          	mov    %dx,-0x20(%ebp)
 844af8d:	66 89 45 dc          	mov    %ax,-0x24(%ebp)
 844af91:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 844af96:	c7 44 24 08 98 bb 00 	movl   $0xbb98,0x8(%esp)
 844af9d:	00 
 844af9e:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 844afa5:	08 
 844afa6:	89 04 24             	mov    %eax,(%esp)
 844afa9:	e8 d8 4a e4 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 844afae:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 844afb5:	00 
 844afb6:	89 44 24 04          	mov    %eax,0x4(%esp)
 844afba:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844afbd:	89 04 24             	mov    %eax,(%esp)
 844afc0:	e8 61 dc c7 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 844afc5:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844afc8:	89 04 24             	mov    %eax,(%esp)
 844afcb:	e8 76 dc c7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 844afd0:	c7 44 24 04 1e 03 00 	movl   $0x31e,0x4(%esp)
 844afd7:	00 
 844afd8:	89 04 24             	mov    %eax,(%esp)
 844afdb:	e8 76 dc c7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 844afe0:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844afe3:	89 04 24             	mov    %eax,(%esp)
 844afe6:	e8 5b dc c7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 844afeb:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 844aff2:	ff 
 844aff3:	89 04 24             	mov    %eax,(%esp)
 844aff6:	e8 5b dc c7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 844affb:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844affe:	89 04 24             	mov    %eax,(%esp)
 844b001:	e8 40 dc c7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 844b006:	8b 55 08             	mov    0x8(%ebp),%edx
 844b009:	89 54 24 04          	mov    %edx,0x4(%esp)
 844b00d:	89 04 24             	mov    %eax,(%esp)
 844b010:	e8 7d 72 c9 ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 844b015:	0f bf 5d e4          	movswl -0x1c(%ebp),%ebx
 844b019:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844b01c:	89 04 24             	mov    %eax,(%esp)
 844b01f:	e8 22 dc c7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 844b024:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 844b028:	89 04 24             	mov    %eax,(%esp)
 844b02b:	e8 36 fd dd ff       	call   822ad66 <_ZN12CStreamGuardlsEs>
 844b030:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844b033:	89 04 24             	mov    %eax,(%esp)
 844b036:	e8 0b dc c7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 844b03b:	8b 55 10             	mov    0x10(%ebp),%edx
 844b03e:	89 54 24 04          	mov    %edx,0x4(%esp)
 844b042:	89 04 24             	mov    %eax,(%esp)
 844b045:	e8 0c dc c7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 844b04a:	0f bf 5d e0          	movswl -0x20(%ebp),%ebx
 844b04e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844b051:	89 04 24             	mov    %eax,(%esp)
 844b054:	e8 ed db c7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 844b059:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 844b05d:	89 04 24             	mov    %eax,(%esp)
 844b060:	e8 01 fd dd ff       	call   822ad66 <_ZN12CStreamGuardlsEs>
 844b065:	0f bf 5d dc          	movswl -0x24(%ebp),%ebx
 844b069:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844b06c:	89 04 24             	mov    %eax,(%esp)
 844b06f:	e8 d2 db c7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 844b074:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 844b078:	89 04 24             	mov    %eax,(%esp)
 844b07b:	e8 e6 fc dd ff       	call   822ad66 <_ZN12CStreamGuardlsEs>
 844b080:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 844b085:	8d 55 f0             	lea    -0x10(%ebp),%edx
 844b088:	89 54 24 08          	mov    %edx,0x8(%esp)
 844b08c:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 844b093:	00 
 844b094:	89 04 24             	mov    %eax,(%esp)
 844b097:	e8 42 5f 12 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 844b09c:	eb 1b                	jmp    844b0b9 <_ZN31DB_UpdateSeriaRoomAnimationDeco11makeRequestEjsiss+0x145>
 844b09e:	89 d3                	mov    %edx,%ebx
 844b0a0:	89 c6                	mov    %eax,%esi
 844b0a2:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844b0a5:	89 04 24             	mov    %eax,(%esp)
 844b0a8:	e8 25 18 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 844b0ad:	89 f0                	mov    %esi,%eax
 844b0af:	89 da                	mov    %ebx,%edx
 844b0b1:	89 04 24             	mov    %eax,(%esp)
 844b0b4:	e8 97 86 69 00       	call   8ae3750 <_Unwind_Resume>
 844b0b9:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844b0bc:	89 04 24             	mov    %eax,(%esp)
 844b0bf:	e8 0e 18 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 844b0c4:	83 c4 30             	add    $0x30,%esp
 844b0c7:	5b                   	pop    %ebx
 844b0c8:	5e                   	pop    %esi
 844b0c9:	5d                   	pop    %ebp
 844b0ca:	c3                   	ret
 844b0cb:	90                   	nop

```

```c
// DB_UpdateSeriaRoomAnimationDeco::makeRequest @ 0x844af74

/* DB_UpdateSeriaRoomAnimationDeco::makeRequest(unsigned int, short, int, short, short) */

void DB_UpdateSeriaRoomAnimationDeco::makeRequest
               (uint param_1,short param_2,int param_3,short param_4,short param_5)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xbb98);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0844afdb to 0844b09b has its CatchHandler @ 0844b09e */
  CStreamGuard::operator<<(pCVar2,0x31e);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_3);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_4);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_5);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}

```

