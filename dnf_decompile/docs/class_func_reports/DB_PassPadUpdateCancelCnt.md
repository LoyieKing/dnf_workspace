# DB_PassPadUpdateCancelCnt

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 08423fb6 DB_PassPadUpdateCancelCnt::dispatch  [0x08423fb6-0x8424039] ===
 8423fb6:	55                   	push   %ebp
 8423fb7:	89 e5                	mov    %esp,%ebp
 8423fb9:	83 ec 28             	sub    $0x28,%esp
 8423fbc:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8423fc1:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8423fc8:	00 
 8423fc9:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 8423fd0:	00 
 8423fd1:	89 04 24             	mov    %eax,(%esp)
 8423fd4:	e8 65 12 fd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8423fd9:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8423fdc:	8b 45 14             	mov    0x14(%ebp),%eax
 8423fdf:	89 04 24             	mov    %eax,(%esp)
 8423fe2:	e8 df dd 02 00       	call   8451dc6 <_ZN6Stream12GetOutBufferI33SIG_SECURITY_CARD_UPDATE_FAIL_CNTEEPT_v>
 8423fe7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8423fea:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8423fed:	8b 00                	mov    (%eax),%eax
 8423fef:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8423ff6:	00 
 8423ff7:	89 04 24             	mov    %eax,(%esp)
 8423ffa:	e8 4c 50 ce ff       	call   810904b <_Z14NumberToStringji>
 8423fff:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8424002:	8b 52 04             	mov    0x4(%edx),%edx
 8424005:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8424009:	89 54 24 08          	mov    %edx,0x8(%esp)
 842400d:	c7 44 24 04 2c db c4 	movl   $0x8c4db2c,0x4(%esp)
 8424014:	08 
 8424015:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8424018:	89 04 24             	mov    %eax,(%esp)
 842401b:	e8 a0 01 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8424020:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8424027:	00 
 8424028:	8b 45 f0             	mov    -0x10(%ebp),%eax
 842402b:	89 04 24             	mov    %eax,(%esp)
 842402e:	e8 f3 02 fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 8424033:	b8 01 00 00 00       	mov    $0x1,%eax
 8424038:	c9                   	leave
 8424039:	c3                   	ret

```

```c
// DB_PassPadUpdateCancelCnt::dispatch @ 0x8423fb6

/* DB_PassPadUpdateCancelCnt::dispatch(int, int, Stream*) */

undefined4 DB_PassPadUpdateCancelCnt::dispatch(int param_1,int param_2,Stream *param_3)

{
  MySQL *this;
  SIG_SECURITY_CARD_UPDATE_FAIL_CNT *pSVar1;
  undefined4 uVar2;
  Stream *in_stack_00000010;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  pSVar1 = Stream::GetOutBuffer<SIG_SECURITY_CARD_UPDATE_FAIL_CNT>(in_stack_00000010);
  uVar2 = NumberToString(*(uint *)pSVar1,0);
  MySQL::set_query(this,
                   "upDate member_mousepass set cancel_cnt=%d where m_id=%s and enable_flag = \'1\'"
                   ,*(undefined4 *)(pSVar1 + 4),uVar2);
  MySQL::exec(this,true);
  return 1;
}

```

---

## makeRequest

```asm
// === 0842403a DB_PassPadUpdateCancelCnt::makeRequest  [0x0842403a-0x842413b] ===
 842403a:	55                   	push   %ebp
 842403b:	89 e5                	mov    %esp,%ebp
 842403d:	56                   	push   %esi
 842403e:	53                   	push   %ebx
 842403f:	83 ec 20             	sub    $0x20,%esp
 8424042:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8424047:	c7 44 24 08 5e 5f 00 	movl   $0x5f5e,0x8(%esp)
 842404e:	00 
 842404f:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8424056:	08 
 8424057:	89 04 24             	mov    %eax,(%esp)
 842405a:	e8 27 ba e6 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 842405f:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8424066:	00 
 8424067:	89 44 24 04          	mov    %eax,0x4(%esp)
 842406b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842406e:	89 04 24             	mov    %eax,(%esp)
 8424071:	e8 b0 4b ca ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8424076:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8424079:	89 04 24             	mov    %eax,(%esp)
 842407c:	e8 c5 4b ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8424081:	c7 44 24 04 a5 00 00 	movl   $0xa5,0x4(%esp)
 8424088:	00 
 8424089:	89 04 24             	mov    %eax,(%esp)
 842408c:	e8 c5 4b ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8424091:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8424094:	89 04 24             	mov    %eax,(%esp)
 8424097:	e8 aa 4b ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 842409c:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84240a3:	ff 
 84240a4:	89 04 24             	mov    %eax,(%esp)
 84240a7:	e8 aa 4b ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84240ac:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84240af:	89 04 24             	mov    %eax,(%esp)
 84240b2:	e8 97 4b ca ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 84240b7:	89 04 24             	mov    %eax,(%esp)
 84240ba:	e8 5b dd 02 00       	call   8451e1a <_ZN12CStreamGuard11GetInBufferI33SIG_SECURITY_CARD_UPDATE_FAIL_CNTEEPT_v>
 84240bf:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84240c2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84240c5:	8b 55 08             	mov    0x8(%ebp),%edx
 84240c8:	89 10                	mov    %edx,(%eax)
 84240ca:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84240cd:	8b 55 0c             	mov    0xc(%ebp),%edx
 84240d0:	89 50 04             	mov    %edx,0x4(%eax)
 84240d3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84240d6:	8d 50 08             	lea    0x8(%eax),%edx
 84240d9:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 84240e0:	00 
 84240e1:	8b 45 10             	mov    0x10(%ebp),%eax
 84240e4:	89 44 24 04          	mov    %eax,0x4(%esp)
 84240e8:	89 14 24             	mov    %edx,(%esp)
 84240eb:	e8 e0 97 c5 ff       	call   807d8d0 <strncpy@plt>
 84240f0:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84240f5:	8d 55 ec             	lea    -0x14(%ebp),%edx
 84240f8:	89 54 24 08          	mov    %edx,0x8(%esp)
 84240fc:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8424103:	00 
 8424104:	89 04 24             	mov    %eax,(%esp)
 8424107:	e8 d2 ce 14 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 842410c:	eb 1b                	jmp    8424129 <_ZN25DB_PassPadUpdateCancelCnt11makeRequestEjjPc+0xef>
 842410e:	89 d3                	mov    %edx,%ebx
 8424110:	89 c6                	mov    %eax,%esi
 8424112:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8424115:	89 04 24             	mov    %eax,(%esp)
 8424118:	e8 b5 87 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 842411d:	89 f0                	mov    %esi,%eax
 842411f:	89 da                	mov    %ebx,%edx
 8424121:	89 04 24             	mov    %eax,(%esp)
 8424124:	e8 27 f6 6b 00       	call   8ae3750 <_Unwind_Resume>
 8424129:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842412c:	89 04 24             	mov    %eax,(%esp)
 842412f:	e8 9e 87 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8424134:	83 c4 20             	add    $0x20,%esp
 8424137:	5b                   	pop    %ebx
 8424138:	5e                   	pop    %esi
 8424139:	5d                   	pop    %ebp
 842413a:	c3                   	ret
 842413b:	90                   	nop

```

```c
// DB_PassPadUpdateCancelCnt::makeRequest @ 0x842403a

/* DB_PassPadUpdateCancelCnt::makeRequest(unsigned int, unsigned int, char*) */

void DB_PassPadUpdateCancelCnt::makeRequest(uint param_1,uint param_2,char *param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_SECURITY_CARD_UPDATE_FAIL_CNT *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x5f5e);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0842408c to 0842410b has its CatchHandler @ 0842410e */
  CStreamGuard::operator<<(pCVar2,0xa5);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_SECURITY_CARD_UPDATE_FAIL_CNT>(pCVar2);
  *(uint *)local_10 = param_1;
  *(uint *)(local_10 + 4) = param_2;
  strncpy((char *)(local_10 + 8),param_3,0x10);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}

```

