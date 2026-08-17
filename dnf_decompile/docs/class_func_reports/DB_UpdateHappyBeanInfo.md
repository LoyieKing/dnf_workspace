# DB_UpdateHappyBeanInfo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 084258ee DB_UpdateHappyBeanInfo::dispatch  [0x084258ee-0x8425a01] ===
 84258ee:	55                   	push   %ebp
 84258ef:	89 e5                	mov    %esp,%ebp
 84258f1:	83 ec 48             	sub    $0x48,%esp
 84258f4:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 84258f9:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8425900:	00 
 8425901:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8425908:	00 
 8425909:	89 04 24             	mov    %eax,(%esp)
 842590c:	e8 2d f9 fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8425911:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8425914:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 842591b:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8425922:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8425925:	89 44 24 04          	mov    %eax,0x4(%esp)
 8425929:	8b 45 14             	mov    0x14(%ebp),%eax
 842592c:	89 04 24             	mov    %eax,(%esp)
 842592f:	e8 62 6e 1f 00       	call   861c796 <_ZN6StreamrsERj>
 8425934:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8425937:	89 44 24 04          	mov    %eax,0x4(%esp)
 842593b:	8b 45 14             	mov    0x14(%ebp),%eax
 842593e:	89 04 24             	mov    %eax,(%esp)
 8425941:	e8 50 6e 1f 00       	call   861c796 <_ZN6StreamrsERj>
 8425946:	8d 45 cf             	lea    -0x31(%ebp),%eax
 8425949:	89 44 24 04          	mov    %eax,0x4(%esp)
 842594d:	8b 45 14             	mov    0x14(%ebp),%eax
 8425950:	89 04 24             	mov    %eax,(%esp)
 8425953:	e8 50 6d 1f 00       	call   861c6a8 <_ZN6StreamrsEPc>
 8425958:	8b 45 f0             	mov    -0x10(%ebp),%eax
 842595b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8425962:	00 
 8425963:	89 04 24             	mov    %eax,(%esp)
 8425966:	e8 e0 36 ce ff       	call   810904b <_Z14NumberToStringji>
 842596b:	89 44 24 08          	mov    %eax,0x8(%esp)
 842596f:	c7 44 24 04 b4 e7 c4 	movl   $0x8c4e7b4,0x4(%esp)
 8425976:	08 
 8425977:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842597a:	89 04 24             	mov    %eax,(%esp)
 842597d:	e8 3e e8 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8425982:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8425989:	00 
 842598a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842598d:	89 04 24             	mov    %eax,(%esp)
 8425990:	e8 91 e9 fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 8425995:	83 f0 01             	xor    $0x1,%eax
 8425998:	84 c0                	test   %al,%al
 842599a:	75 11                	jne    84259ad <_ZN22DB_UpdateHappyBeanInfo8dispatchEiiP6Stream+0xbf>
 842599c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842599f:	89 04 24             	mov    %eax,(%esp)
 84259a2:	e8 69 e9 fc ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 84259a7:	09 d0                	or     %edx,%eax
 84259a9:	85 c0                	test   %eax,%eax
 84259ab:	75 07                	jne    84259b4 <_ZN22DB_UpdateHappyBeanInfo8dispatchEiiP6Stream+0xc6>
 84259ad:	b8 01 00 00 00       	mov    $0x1,%eax
 84259b2:	eb 05                	jmp    84259b9 <_ZN22DB_UpdateHappyBeanInfo8dispatchEiiP6Stream+0xcb>
 84259b4:	b8 00 00 00 00       	mov    $0x0,%eax
 84259b9:	84 c0                	test   %al,%al
 84259bb:	74 3d                	je     84259fa <_ZN22DB_UpdateHappyBeanInfo8dispatchEiiP6Stream+0x10c>
 84259bd:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84259c0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84259c7:	00 
 84259c8:	89 04 24             	mov    %eax,(%esp)
 84259cb:	e8 7b 36 ce ff       	call   810904b <_Z14NumberToStringji>
 84259d0:	89 44 24 08          	mov    %eax,0x8(%esp)
 84259d4:	c7 44 24 04 00 e8 c4 	movl   $0x8c4e800,0x4(%esp)
 84259db:	08 
 84259dc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84259df:	89 04 24             	mov    %eax,(%esp)
 84259e2:	e8 d9 e7 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84259e7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84259ee:	00 
 84259ef:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84259f2:	89 04 24             	mov    %eax,(%esp)
 84259f5:	e8 2c e9 fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 84259fa:	b8 01 00 00 00       	mov    $0x1,%eax
 84259ff:	c9                   	leave
 8425a00:	c3                   	ret
 8425a01:	90                   	nop

```

```c
// DB_UpdateHappyBeanInfo::dispatch @ 0x84258ee

/* DB_UpdateHappyBeanInfo::dispatch(int, int, Stream*) */

undefined4 DB_UpdateHappyBeanInfo::dispatch(int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  Stream *in_stack_00000010;
  char local_35 [29];
  uint local_18;
  uint local_14;
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  local_14 = 0;
  local_18 = 0;
  Stream::operator>>(in_stack_00000010,&local_14);
  Stream::operator>>(in_stack_00000010,&local_18);
  Stream::operator>>(in_stack_00000010,local_35);
  uVar3 = NumberToString(local_14,0);
  MySQL::set_query(local_10,
                   "upDate event_happybean_log set cnt=cnt+1 where occ_date=now() and m_id=%s",uVar3
                  );
  cVar2 = MySQL::exec(local_10,true);
  if (cVar2 == '\x01') {
    lVar4 = MySQL::getAffectedRowCount(local_10);
    if (lVar4 != 0) {
      bVar1 = false;
      goto LAB_084259b9;
    }
  }
  bVar1 = true;
LAB_084259b9:
  if (bVar1) {
    uVar3 = NumberToString(local_14,0);
    MySQL::set_query(local_10,
                     "inSert into event_happybean_log(occ_date,m_id,cnt) values(now(),%s,1)",uVar3);
    MySQL::exec(local_10,true);
  }
  return 1;
}

```

---

## makeRequest

```asm
// === 08425a02 DB_UpdateHappyBeanInfo::makeRequest  [0x08425a02-0x8425b0b] ===
 8425a02:	55                   	push   %ebp
 8425a03:	89 e5                	mov    %esp,%ebp
 8425a05:	56                   	push   %esi
 8425a06:	53                   	push   %ebx
 8425a07:	83 ec 20             	sub    $0x20,%esp
 8425a0a:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8425a0f:	c7 44 24 08 a3 63 00 	movl   $0x63a3,0x8(%esp)
 8425a16:	00 
 8425a17:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8425a1e:	08 
 8425a1f:	89 04 24             	mov    %eax,(%esp)
 8425a22:	e8 5f a0 e6 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8425a27:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8425a2e:	00 
 8425a2f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8425a33:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8425a36:	89 04 24             	mov    %eax,(%esp)
 8425a39:	e8 e8 31 ca ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8425a3e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8425a41:	89 04 24             	mov    %eax,(%esp)
 8425a44:	e8 fd 31 ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8425a49:	c7 44 24 04 bb 00 00 	movl   $0xbb,0x4(%esp)
 8425a50:	00 
 8425a51:	89 04 24             	mov    %eax,(%esp)
 8425a54:	e8 fd 31 ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8425a59:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8425a5c:	89 04 24             	mov    %eax,(%esp)
 8425a5f:	e8 e2 31 ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8425a64:	8b 55 08             	mov    0x8(%ebp),%edx
 8425a67:	89 54 24 04          	mov    %edx,0x4(%esp)
 8425a6b:	89 04 24             	mov    %eax,(%esp)
 8425a6e:	e8 1f c8 cb ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 8425a73:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8425a76:	89 04 24             	mov    %eax,(%esp)
 8425a79:	e8 c8 31 ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8425a7e:	8b 55 0c             	mov    0xc(%ebp),%edx
 8425a81:	89 54 24 04          	mov    %edx,0x4(%esp)
 8425a85:	89 04 24             	mov    %eax,(%esp)
 8425a88:	e8 05 c8 cb ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 8425a8d:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8425a90:	89 04 24             	mov    %eax,(%esp)
 8425a93:	e8 ae 31 ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8425a98:	8b 55 10             	mov    0x10(%ebp),%edx
 8425a9b:	89 54 24 04          	mov    %edx,0x4(%esp)
 8425a9f:	89 04 24             	mov    %eax,(%esp)
 8425aa2:	e8 eb c7 cb ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 8425aa7:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8425aaa:	89 04 24             	mov    %eax,(%esp)
 8425aad:	e8 94 31 ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8425ab2:	8b 55 14             	mov    0x14(%ebp),%edx
 8425ab5:	89 54 24 04          	mov    %edx,0x4(%esp)
 8425ab9:	89 04 24             	mov    %eax,(%esp)
 8425abc:	e8 c9 52 e0 ff       	call   822ad8a <_ZN12CStreamGuardlsEPc>
 8425ac1:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8425ac6:	8d 55 f0             	lea    -0x10(%ebp),%edx
 8425ac9:	89 54 24 08          	mov    %edx,0x8(%esp)
 8425acd:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8425ad4:	00 
 8425ad5:	89 04 24             	mov    %eax,(%esp)
 8425ad8:	e8 01 b5 14 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8425add:	eb 1b                	jmp    8425afa <_ZN22DB_UpdateHappyBeanInfo11makeRequestEjjjPKc+0xf8>
 8425adf:	89 d3                	mov    %edx,%ebx
 8425ae1:	89 c6                	mov    %eax,%esi
 8425ae3:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8425ae6:	89 04 24             	mov    %eax,(%esp)
 8425ae9:	e8 e4 6d 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8425aee:	89 f0                	mov    %esi,%eax
 8425af0:	89 da                	mov    %ebx,%edx
 8425af2:	89 04 24             	mov    %eax,(%esp)
 8425af5:	e8 56 dc 6b 00       	call   8ae3750 <_Unwind_Resume>
 8425afa:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8425afd:	89 04 24             	mov    %eax,(%esp)
 8425b00:	e8 cd 6d 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8425b05:	83 c4 20             	add    $0x20,%esp
 8425b08:	5b                   	pop    %ebx
 8425b09:	5e                   	pop    %esi
 8425b0a:	5d                   	pop    %ebp
 8425b0b:	c3                   	ret

```

```c
// DB_UpdateHappyBeanInfo::makeRequest @ 0x8425a02

/* DB_UpdateHappyBeanInfo::makeRequest(unsigned int, unsigned int, unsigned int, char const*) */

void DB_UpdateHappyBeanInfo::makeRequest(uint param_1,uint param_2,uint param_3,char *param_4)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x63a3);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 08425a54 to 08425adc has its CatchHandler @ 08425adf */
  CStreamGuard::operator<<(pCVar2,0xbb);
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

