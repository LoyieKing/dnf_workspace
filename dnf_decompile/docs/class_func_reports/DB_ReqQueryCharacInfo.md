# DB_ReqQueryCharacInfo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## _getGiftRecvCount

```asm
// === 08426f46 DB_ReqQueryCharacInfo::_getGiftRecvCount  [0x08426f46-0x8427111] ===
 8426f46:	55                   	push   %ebp
 8426f47:	89 e5                	mov    %esp,%ebp
 8426f49:	81 ec 98 00 00 00    	sub    $0x98,%esp
 8426f4f:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8426f54:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8426f5b:	00 
 8426f5c:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 8426f63:	00 
 8426f64:	89 04 24             	mov    %eax,(%esp)
 8426f67:	e8 d2 e2 fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8426f6c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8426f6f:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8426f76:	c7 45 ec ff ff ff ff 	movl   $0xffffffff,-0x14(%ebp)
 8426f7d:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 8426f84:	00 
 8426f85:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8426f8c:	00 
 8426f8d:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8426f90:	89 04 24             	mov    %eax,(%esp)
 8426f93:	e8 28 6d c5 ff       	call   807dcc0 <memset@plt>
 8426f98:	c7 44 24 08 0d 00 00 	movl   $0xd,0x8(%esp)
 8426f9f:	00 
 8426fa0:	c7 44 24 04 72 87 c4 	movl   $0x8c48772,0x4(%esp)
 8426fa7:	08 
 8426fa8:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8426fab:	89 04 24             	mov    %eax,(%esp)
 8426fae:	e8 ed 68 c5 ff       	call   807d8a0 <memcpy@plt>
 8426fb3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8426fba:	00 
 8426fbb:	8b 45 0c             	mov    0xc(%ebp),%eax
 8426fbe:	89 04 24             	mov    %eax,(%esp)
 8426fc1:	e8 85 20 ce ff       	call   810904b <_Z14NumberToStringji>
 8426fc6:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8426fca:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8426fcd:	89 44 24 08          	mov    %eax,0x8(%esp)
 8426fd1:	c7 44 24 04 2c ea c4 	movl   $0x8c4ea2c,0x4(%esp)
 8426fd8:	08 
 8426fd9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8426fdc:	89 04 24             	mov    %eax,(%esp)
 8426fdf:	e8 dc d1 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8426fe4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8426feb:	00 
 8426fec:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8426fef:	89 04 24             	mov    %eax,(%esp)
 8426ff2:	e8 2f d3 fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 8426ff7:	83 f0 01             	xor    $0x1,%eax
 8426ffa:	84 c0                	test   %al,%al
 8426ffc:	74 0a                	je     8427008 <_ZN21DB_ReqQueryCharacInfo17_getGiftRecvCountEj+0xc2>
 8426ffe:	b8 00 00 00 00       	mov    $0x0,%eax
 8427003:	e9 07 01 00 00       	jmp    842710f <_ZN21DB_ReqQueryCharacInfo17_getGiftRecvCountEj+0x1c9>
 8427008:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842700b:	89 04 24             	mov    %eax,(%esp)
 842700e:	e8 59 b3 cb ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8427013:	85 c0                	test   %eax,%eax
 8427015:	0f 95 c0             	setne  %al
 8427018:	84 c0                	test   %al,%al
 842701a:	0f 84 ec 00 00 00    	je     842710c <_ZN21DB_ReqQueryCharacInfo17_getGiftRecvCountEj+0x1c6>
 8427020:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8427023:	89 04 24             	mov    %eax,(%esp)
 8427026:	e8 91 d4 fc ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 842702b:	83 f0 01             	xor    $0x1,%eax
 842702e:	84 c0                	test   %al,%al
 8427030:	74 0a                	je     842703c <_ZN21DB_ReqQueryCharacInfo17_getGiftRecvCountEj+0xf6>
 8427032:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8427037:	e9 d3 00 00 00       	jmp    842710f <_ZN21DB_ReqQueryCharacInfo17_getGiftRecvCountEj+0x1c9>
 842703c:	8d 45 f0             	lea    -0x10(%ebp),%eax
 842703f:	89 44 24 08          	mov    %eax,0x8(%esp)
 8427043:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842704a:	00 
 842704b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842704e:	89 04 24             	mov    %eax,(%esp)
 8427051:	e8 d6 f8 ce ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8427056:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8427059:	89 44 24 08          	mov    %eax,0x8(%esp)
 842705d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8427064:	00 
 8427065:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8427068:	89 04 24             	mov    %eax,(%esp)
 842706b:	e8 bc f8 ce ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8427070:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8427073:	85 c0                	test   %eax,%eax
 8427075:	0f 84 91 00 00 00    	je     842710c <_ZN21DB_ReqQueryCharacInfo17_getGiftRecvCountEj+0x1c6>
 842707b:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8427082:	e8 17 4c ca ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8427087:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 842708a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 842708d:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8427090:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8427093:	89 44 24 04          	mov    %eax,0x4(%esp)
 8427097:	8d 45 d0             	lea    -0x30(%ebp),%eax
 842709a:	89 04 24             	mov    %eax,(%esp)
 842709d:	e8 be 72 c5 ff       	call   807e360 <localtime_r@plt>
 84270a2:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 84270a8:	89 44 24 04          	mov    %eax,0x4(%esp)
 84270ac:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84270af:	89 04 24             	mov    %eax,(%esp)
 84270b2:	e8 a9 72 c5 ff       	call   807e360 <localtime_r@plt>
 84270b7:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 84270ba:	8b 45 88             	mov    -0x78(%ebp),%eax
 84270bd:	39 c2                	cmp    %eax,%edx
 84270bf:	74 4b                	je     842710c <_ZN21DB_ReqQueryCharacInfo17_getGiftRecvCountEj+0x1c6>
 84270c1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84270c8:	00 
 84270c9:	8b 45 0c             	mov    0xc(%ebp),%eax
 84270cc:	89 04 24             	mov    %eax,(%esp)
 84270cf:	e8 77 1f ce ff       	call   810904b <_Z14NumberToStringji>
 84270d4:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84270d8:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84270db:	89 44 24 08          	mov    %eax,0x8(%esp)
 84270df:	c7 44 24 04 64 ea c4 	movl   $0x8c4ea64,0x4(%esp)
 84270e6:	08 
 84270e7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84270ea:	89 04 24             	mov    %eax,(%esp)
 84270ed:	e8 ce d0 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84270f2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84270f9:	00 
 84270fa:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84270fd:	89 04 24             	mov    %eax,(%esp)
 8427100:	e8 21 d2 fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 8427105:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 842710c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 842710f:	c9                   	leave
 8427110:	c3                   	ret
 8427111:	90                   	nop

```

```c
// DB_ReqQueryCharacInfo::_getGiftRecvCount @ 0x8426f46

/* DB_ReqQueryCharacInfo::_getGiftRecvCount(unsigned int) */

int __thiscall DB_ReqQueryCharacInfo::_getGiftRecvCount(DB_ReqQueryCharacInfo *this,uint param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  tm local_8c;
  tm local_60;
  int local_34;
  time_t local_30;
  undefined1 local_2c [20];
  int local_18;
  int local_14;
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  local_14 = 0;
  local_18 = -1;
  memset(local_2c,0,0x14);
  memcpy(local_2c,"member_login",0xd);
  uVar2 = NumberToString(param_1,0);
  MySQL::set_query(local_10,"seLect last_gift_time,gift_cnt from %s where m_id=%s",local_2c,uVar2);
  cVar1 = MySQL::exec(local_10,true);
  if (cVar1 == '\x01') {
    iVar3 = MySQL::get_n_rows(local_10);
    if (iVar3 != 0) {
      cVar1 = MySQL::fetch(local_10);
      if (cVar1 == '\x01') {
        MySQL::get_int(local_10,0,&local_14);
        MySQL::get_int(local_10,1,&local_18);
        if (local_18 != 0) {
          local_30 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
          local_34 = local_14;
          localtime_r(&local_34,&local_60);
          localtime_r(&local_30,&local_8c);
          if (local_60.tm_mon != local_8c.tm_mon) {
            uVar2 = NumberToString(param_1,0);
            MySQL::set_query(local_10,
                             "upDate %s set last_gift_time=unix_timestamp(now()),gift_cnt=0 where m_id=%s"
                             ,local_2c,uVar2);
            MySQL::exec(local_10,true);
            local_18 = 0;
          }
        }
      }
      else {
        local_18 = -1;
      }
    }
  }
  else {
    local_18 = 0;
  }
  return local_18;
}

```

---

## _sendResult

```asm
// === 08426e04 DB_ReqQueryCharacInfo::_sendResult  [0x08426e04-0x8426f45] ===
 8426e04:	55                   	push   %ebp
 8426e05:	89 e5                	mov    %esp,%ebp
 8426e07:	56                   	push   %esi
 8426e08:	53                   	push   %ebx
 8426e09:	83 ec 20             	sub    $0x20,%esp
 8426e0c:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8426e11:	c7 44 24 08 16 67 00 	movl   $0x6716,0x8(%esp)
 8426e18:	00 
 8426e19:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8426e20:	08 
 8426e21:	89 04 24             	mov    %eax,(%esp)
 8426e24:	e8 5d 8c e6 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8426e29:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8426e30:	00 
 8426e31:	89 44 24 04          	mov    %eax,0x4(%esp)
 8426e35:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8426e38:	89 04 24             	mov    %eax,(%esp)
 8426e3b:	e8 e6 1d ca ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8426e40:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8426e43:	89 04 24             	mov    %eax,(%esp)
 8426e46:	e8 fb 1d ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8426e4b:	c7 44 24 04 c4 00 00 	movl   $0xc4,0x4(%esp)
 8426e52:	00 
 8426e53:	89 04 24             	mov    %eax,(%esp)
 8426e56:	e8 fb 1d ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8426e5b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8426e5e:	89 04 24             	mov    %eax,(%esp)
 8426e61:	e8 e0 1d ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8426e66:	8b 55 10             	mov    0x10(%ebp),%edx
 8426e69:	89 54 24 04          	mov    %edx,0x4(%esp)
 8426e6d:	89 04 24             	mov    %eax,(%esp)
 8426e70:	e8 e1 1d ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8426e75:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8426e78:	89 04 24             	mov    %eax,(%esp)
 8426e7b:	e8 ce 1d ca ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8426e80:	89 04 24             	mov    %eax,(%esp)
 8426e83:	e8 a0 b2 02 00       	call   8452128 <_ZN12CStreamGuard11GetInBufferI21SIG_QUERY_CHARAC_INFOEEPT_v>
 8426e88:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8426e8b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8426e8e:	8b 55 0c             	mov    0xc(%ebp),%edx
 8426e91:	89 50 20             	mov    %edx,0x20(%eax)
 8426e94:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8426e98:	75 5b                	jne    8426ef5 <_ZN21DB_ReqQueryCharacInfo11_sendResultEiiPKciiiiii+0xf1>
 8426e9a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8426e9d:	c7 44 24 08 1d 00 00 	movl   $0x1d,0x8(%esp)
 8426ea4:	00 
 8426ea5:	8b 55 14             	mov    0x14(%ebp),%edx
 8426ea8:	89 54 24 04          	mov    %edx,0x4(%esp)
 8426eac:	89 04 24             	mov    %eax,(%esp)
 8426eaf:	e8 1c 6a c5 ff       	call   807d8d0 <strncpy@plt>
 8426eb4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8426eb7:	8b 55 18             	mov    0x18(%ebp),%edx
 8426eba:	89 50 24             	mov    %edx,0x24(%eax)
 8426ebd:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8426ec0:	89 c2                	mov    %eax,%edx
 8426ec2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8426ec5:	88 50 28             	mov    %dl,0x28(%eax)
 8426ec8:	8b 45 20             	mov    0x20(%ebp),%eax
 8426ecb:	89 c2                	mov    %eax,%edx
 8426ecd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8426ed0:	66 89 50 2a          	mov    %dx,0x2a(%eax)
 8426ed4:	8b 45 24             	mov    0x24(%ebp),%eax
 8426ed7:	89 c2                	mov    %eax,%edx
 8426ed9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8426edc:	88 50 2c             	mov    %dl,0x2c(%eax)
 8426edf:	8b 45 28             	mov    0x28(%ebp),%eax
 8426ee2:	89 c2                	mov    %eax,%edx
 8426ee4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8426ee7:	88 50 2d             	mov    %dl,0x2d(%eax)
 8426eea:	8b 45 2c             	mov    0x2c(%ebp),%eax
 8426eed:	89 c2                	mov    %eax,%edx
 8426eef:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8426ef2:	88 50 2e             	mov    %dl,0x2e(%eax)
 8426ef5:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8426efa:	8d 55 ec             	lea    -0x14(%ebp),%edx
 8426efd:	89 54 24 08          	mov    %edx,0x8(%esp)
 8426f01:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8426f08:	00 
 8426f09:	89 04 24             	mov    %eax,(%esp)
 8426f0c:	e8 cd a0 14 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8426f11:	bb 01 00 00 00       	mov    $0x1,%ebx
 8426f16:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8426f19:	89 04 24             	mov    %eax,(%esp)
 8426f1c:	e8 b1 59 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8426f21:	89 d8                	mov    %ebx,%eax
 8426f23:	83 c4 20             	add    $0x20,%esp
 8426f26:	5b                   	pop    %ebx
 8426f27:	5e                   	pop    %esi
 8426f28:	5d                   	pop    %ebp
 8426f29:	c3                   	ret
 8426f2a:	89 d3                	mov    %edx,%ebx
 8426f2c:	89 c6                	mov    %eax,%esi
 8426f2e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8426f31:	89 04 24             	mov    %eax,(%esp)
 8426f34:	e8 99 59 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8426f39:	89 f0                	mov    %esi,%eax
 8426f3b:	89 da                	mov    %ebx,%edx
 8426f3d:	89 04 24             	mov    %eax,(%esp)
 8426f40:	e8 0b c8 6b 00       	call   8ae3750 <_Unwind_Resume>
 8426f45:	90                   	nop

```

```c
// DB_ReqQueryCharacInfo::_sendResult @ 0x8426e04

/* DB_ReqQueryCharacInfo::_sendResult(int, int, char const*, int, int, int, int, int, int) */

undefined4 __thiscall
DB_ReqQueryCharacInfo::_sendResult
          (DB_ReqQueryCharacInfo *this,int param_1,int param_2,char *param_3,int param_4,int param_5
          ,int param_6,int param_7,int param_8,int param_9)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_QUERY_CHARAC_INFO *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x6716);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 08426e56 to 08426f10 has its CatchHandler @ 08426f2a */
  CStreamGuard::operator<<(pCVar2,0xc4);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,param_2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_QUERY_CHARAC_INFO>(pCVar2);
  *(int *)(local_10 + 0x20) = param_1;
  if (param_1 == 0) {
    strncpy((char *)local_10,param_3,0x1d);
    *(int *)(local_10 + 0x24) = param_4;
    local_10[0x28] = SUB41(param_5,0);
    *(short *)(local_10 + 0x2a) = (short)param_6;
    local_10[0x2c] = SUB41(param_7,0);
    local_10[0x2d] = SUB41(param_8,0);
    local_10[0x2e] = SUB41(param_9,0);
  }
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return 1;
}

```

---

## dispatch

```asm
// === 0842688c DB_ReqQueryCharacInfo::dispatch  [0x0842688c-0x8426d17] ===
 842688c:	55                   	push   %ebp
 842688d:	89 e5                	mov    %esp,%ebp
 842688f:	57                   	push   %edi
 8426890:	56                   	push   %esi
 8426891:	53                   	push   %ebx
 8426892:	81 ec dc 00 00 00    	sub    $0xdc,%esp
 8426898:	8b 45 08             	mov    0x8(%ebp),%eax
 842689b:	8b 55 14             	mov    0x14(%ebp),%edx
 842689e:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84268a2:	8b 55 10             	mov    0x10(%ebp),%edx
 84268a5:	89 54 24 08          	mov    %edx,0x8(%esp)
 84268a9:	8b 55 0c             	mov    0xc(%ebp),%edx
 84268ac:	89 54 24 04          	mov    %edx,0x4(%esp)
 84268b0:	89 04 24             	mov    %eax,(%esp)
 84268b3:	e8 c4 56 fd ff       	call   83fbf7c <_ZN12DBDispatcher8dispatchEiiP6Stream>
 84268b8:	83 f0 01             	xor    $0x1,%eax
 84268bb:	84 c0                	test   %al,%al
 84268bd:	74 0a                	je     84268c9 <_ZN21DB_ReqQueryCharacInfo8dispatchEiiP6Stream+0x3d>
 84268bf:	b8 00 00 00 00       	mov    $0x0,%eax
 84268c4:	e9 44 04 00 00       	jmp    8426d0d <_ZN21DB_ReqQueryCharacInfo8dispatchEiiP6Stream+0x481>
 84268c9:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 84268ce:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84268d5:	00 
 84268d6:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84268dd:	00 
 84268de:	89 04 24             	mov    %eax,(%esp)
 84268e1:	e8 58 e9 fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 84268e6:	89 45 dc             	mov    %eax,-0x24(%ebp)
 84268e9:	8b 45 14             	mov    0x14(%ebp),%eax
 84268ec:	89 04 24             	mov    %eax,(%esp)
 84268ef:	e8 e0 b7 02 00       	call   84520d4 <_ZN6Stream12GetOutBufferI21SIG_QUERY_CHARAC_INFOEEPT_v>
 84268f4:	89 45 e0             	mov    %eax,-0x20(%ebp)
 84268f7:	8d 9d 70 ff ff ff    	lea    -0x90(%ebp),%ebx
 84268fd:	b8 00 00 00 00       	mov    $0x0,%eax
 8426902:	ba 0f 00 00 00       	mov    $0xf,%edx
 8426907:	89 df                	mov    %ebx,%edi
 8426909:	89 d1                	mov    %edx,%ecx
 842690b:	f3 ab                	rep stos %eax,%es:(%edi)
 842690d:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8426910:	89 44 24 08          	mov    %eax,0x8(%esp)
 8426914:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 842691a:	89 44 24 04          	mov    %eax,0x4(%esp)
 842691e:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8426921:	89 04 24             	mov    %eax,(%esp)
 8426924:	e8 81 df fc ff       	call   83f48aa <_ZN5MySQL13escape_stringEPcPKc>
 8426929:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 842692f:	89 44 24 08          	mov    %eax,0x8(%esp)
 8426933:	c7 44 24 04 cc e9 c4 	movl   $0x8c4e9cc,0x4(%esp)
 842693a:	08 
 842693b:	8b 45 dc             	mov    -0x24(%ebp),%eax
 842693e:	89 04 24             	mov    %eax,(%esp)
 8426941:	e8 7a d8 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8426946:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842694d:	00 
 842694e:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8426951:	89 04 24             	mov    %eax,(%esp)
 8426954:	e8 cd d9 fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 8426959:	83 f0 01             	xor    $0x1,%eax
 842695c:	84 c0                	test   %al,%al
 842695e:	74 57                	je     84269b7 <_ZN21DB_ReqQueryCharacInfo8dispatchEiiP6Stream+0x12b>
 8426960:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 8426967:	00 
 8426968:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 842696f:	00 
 8426970:	c7 44 24 1c 00 00 00 	movl   $0x0,0x1c(%esp)
 8426977:	00 
 8426978:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 842697f:	00 
 8426980:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8426987:	00 
 8426988:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 842698f:	00 
 8426990:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8426997:	00 
 8426998:	8b 45 10             	mov    0x10(%ebp),%eax
 842699b:	89 44 24 08          	mov    %eax,0x8(%esp)
 842699f:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84269a6:	00 
 84269a7:	8b 45 08             	mov    0x8(%ebp),%eax
 84269aa:	89 04 24             	mov    %eax,(%esp)
 84269ad:	e8 52 04 00 00       	call   8426e04 <_ZN21DB_ReqQueryCharacInfo11_sendResultEiiPKciiiiii>
 84269b2:	e9 56 03 00 00       	jmp    8426d0d <_ZN21DB_ReqQueryCharacInfo8dispatchEiiP6Stream+0x481>
 84269b7:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84269ba:	89 04 24             	mov    %eax,(%esp)
 84269bd:	e8 aa b9 cb ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 84269c2:	85 c0                	test   %eax,%eax
 84269c4:	0f 94 c0             	sete   %al
 84269c7:	84 c0                	test   %al,%al
 84269c9:	74 57                	je     8426a22 <_ZN21DB_ReqQueryCharacInfo8dispatchEiiP6Stream+0x196>
 84269cb:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 84269d2:	00 
 84269d3:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 84269da:	00 
 84269db:	c7 44 24 1c 00 00 00 	movl   $0x0,0x1c(%esp)
 84269e2:	00 
 84269e3:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 84269ea:	00 
 84269eb:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 84269f2:	00 
 84269f3:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 84269fa:	00 
 84269fb:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8426a02:	00 
 8426a03:	8b 45 10             	mov    0x10(%ebp),%eax
 8426a06:	89 44 24 08          	mov    %eax,0x8(%esp)
 8426a0a:	c7 44 24 04 15 00 00 	movl   $0x15,0x4(%esp)
 8426a11:	00 
 8426a12:	8b 45 08             	mov    0x8(%ebp),%eax
 8426a15:	89 04 24             	mov    %eax,(%esp)
 8426a18:	e8 e7 03 00 00       	call   8426e04 <_ZN21DB_ReqQueryCharacInfo11_sendResultEiiPKciiiiii>
 8426a1d:	e9 eb 02 00 00       	jmp    8426d0d <_ZN21DB_ReqQueryCharacInfo8dispatchEiiP6Stream+0x481>
 8426a22:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8426a25:	89 04 24             	mov    %eax,(%esp)
 8426a28:	e8 3f b9 cb ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8426a2d:	85 c0                	test   %eax,%eax
 8426a2f:	0f 95 c0             	setne  %al
 8426a32:	84 c0                	test   %al,%al
 8426a34:	0f 84 7c 02 00 00    	je     8426cb6 <_ZN21DB_ReqQueryCharacInfo8dispatchEiiP6Stream+0x42a>
 8426a3a:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 8426a41:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8426a44:	89 04 24             	mov    %eax,(%esp)
 8426a47:	e8 70 da fc ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 8426a4c:	83 f0 01             	xor    $0x1,%eax
 8426a4f:	84 c0                	test   %al,%al
 8426a51:	75 21                	jne    8426a74 <_ZN21DB_ReqQueryCharacInfo8dispatchEiiP6Stream+0x1e8>
 8426a53:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8426a56:	89 44 24 08          	mov    %eax,0x8(%esp)
 8426a5a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8426a61:	00 
 8426a62:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8426a65:	89 04 24             	mov    %eax,(%esp)
 8426a68:	e8 bf fe ce ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8426a6d:	83 f0 01             	xor    $0x1,%eax
 8426a70:	84 c0                	test   %al,%al
 8426a72:	74 07                	je     8426a7b <_ZN21DB_ReqQueryCharacInfo8dispatchEiiP6Stream+0x1ef>
 8426a74:	b8 01 00 00 00       	mov    $0x1,%eax
 8426a79:	eb 05                	jmp    8426a80 <_ZN21DB_ReqQueryCharacInfo8dispatchEiiP6Stream+0x1f4>
 8426a7b:	b8 00 00 00 00       	mov    $0x0,%eax
 8426a80:	84 c0                	test   %al,%al
 8426a82:	74 57                	je     8426adb <_ZN21DB_ReqQueryCharacInfo8dispatchEiiP6Stream+0x24f>
 8426a84:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 8426a8b:	00 
 8426a8c:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 8426a93:	00 
 8426a94:	c7 44 24 1c 00 00 00 	movl   $0x0,0x1c(%esp)
 8426a9b:	00 
 8426a9c:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 8426aa3:	00 
 8426aa4:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8426aab:	00 
 8426aac:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 8426ab3:	00 
 8426ab4:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8426abb:	00 
 8426abc:	8b 45 10             	mov    0x10(%ebp),%eax
 8426abf:	89 44 24 08          	mov    %eax,0x8(%esp)
 8426ac3:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8426aca:	00 
 8426acb:	8b 45 08             	mov    0x8(%ebp),%eax
 8426ace:	89 04 24             	mov    %eax,(%esp)
 8426ad1:	e8 2e 03 00 00       	call   8426e04 <_ZN21DB_ReqQueryCharacInfo11_sendResultEiiPKciiiiii>
 8426ad6:	e9 32 02 00 00       	jmp    8426d0d <_ZN21DB_ReqQueryCharacInfo8dispatchEiiP6Stream+0x481>
 8426adb:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8426ade:	85 c0                	test   %eax,%eax
 8426ae0:	74 57                	je     8426b39 <_ZN21DB_ReqQueryCharacInfo8dispatchEiiP6Stream+0x2ad>
 8426ae2:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 8426ae9:	00 
 8426aea:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 8426af1:	00 
 8426af2:	c7 44 24 1c 00 00 00 	movl   $0x0,0x1c(%esp)
 8426af9:	00 
 8426afa:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 8426b01:	00 
 8426b02:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8426b09:	00 
 8426b0a:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 8426b11:	00 
 8426b12:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8426b19:	00 
 8426b1a:	8b 45 10             	mov    0x10(%ebp),%eax
 8426b1d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8426b21:	c7 44 24 04 15 00 00 	movl   $0x15,0x4(%esp)
 8426b28:	00 
 8426b29:	8b 45 08             	mov    0x8(%ebp),%eax
 8426b2c:	89 04 24             	mov    %eax,(%esp)
 8426b2f:	e8 d0 02 00 00       	call   8426e04 <_ZN21DB_ReqQueryCharacInfo11_sendResultEiiPKciiiiii>
 8426b34:	e9 d4 01 00 00       	jmp    8426d0d <_ZN21DB_ReqQueryCharacInfo8dispatchEiiP6Stream+0x481>
 8426b39:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 8426b40:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 8426b47:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 8426b4e:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 8426b55:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8426b5c:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 8426b63:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
 8426b6a:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8426b6d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8426b71:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8426b78:	00 
 8426b79:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8426b7c:	89 04 24             	mov    %eax,(%esp)
 8426b7f:	e8 2a b7 cb ff       	call   80e22ae <_ZN5MySQL7get_intEiRj>
 8426b84:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8426b87:	89 44 24 08          	mov    %eax,0x8(%esp)
 8426b8b:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8426b92:	00 
 8426b93:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8426b96:	89 04 24             	mov    %eax,(%esp)
 8426b99:	e8 8e fd ce ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8426b9e:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8426ba1:	89 44 24 08          	mov    %eax,0x8(%esp)
 8426ba5:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8426bac:	00 
 8426bad:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8426bb0:	89 04 24             	mov    %eax,(%esp)
 8426bb3:	e8 74 fd ce ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8426bb8:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8426bbb:	89 44 24 08          	mov    %eax,0x8(%esp)
 8426bbf:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8426bc6:	00 
 8426bc7:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8426bca:	89 04 24             	mov    %eax,(%esp)
 8426bcd:	e8 5a fd ce ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8426bd2:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8426bd5:	89 44 24 08          	mov    %eax,0x8(%esp)
 8426bd9:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 8426be0:	00 
 8426be1:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8426be4:	89 04 24             	mov    %eax,(%esp)
 8426be7:	e8 40 fd ce ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8426bec:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8426bef:	89 44 24 08          	mov    %eax,0x8(%esp)
 8426bf3:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 8426bfa:	00 
 8426bfb:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8426bfe:	89 04 24             	mov    %eax,(%esp)
 8426c01:	e8 26 fd ce ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8426c06:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 8426c0d:	00 
 8426c0e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8426c15:	00 
 8426c16:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8426c19:	89 04 24             	mov    %eax,(%esp)
 8426c1c:	e8 9f 70 c5 ff       	call   807dcc0 <memset@plt>
 8426c21:	c7 44 24 08 0d 00 00 	movl   $0xd,0x8(%esp)
 8426c28:	00 
 8426c29:	c7 44 24 04 72 87 c4 	movl   $0x8c48772,0x4(%esp)
 8426c30:	08 
 8426c31:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8426c34:	89 04 24             	mov    %eax,(%esp)
 8426c37:	e8 64 6c c5 ff       	call   807d8a0 <memcpy@plt>
 8426c3c:	8b 45 c0             	mov    -0x40(%ebp),%eax
 8426c3f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8426c43:	8b 45 08             	mov    0x8(%ebp),%eax
 8426c46:	89 04 24             	mov    %eax,(%esp)
 8426c49:	e8 f8 02 00 00       	call   8426f46 <_ZN21DB_ReqQueryCharacInfo17_getGiftRecvCountEj>
 8426c4e:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8426c51:	8b 7d c4             	mov    -0x3c(%ebp),%edi
 8426c54:	8b 75 cc             	mov    -0x34(%ebp),%esi
 8426c57:	8b 5d d0             	mov    -0x30(%ebp),%ebx
 8426c5a:	8b 4d d4             	mov    -0x2c(%ebp),%ecx
 8426c5d:	8b 55 c8             	mov    -0x38(%ebp),%edx
 8426c60:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8426c63:	89 85 54 ff ff ff    	mov    %eax,-0xac(%ebp)
 8426c69:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8426c6c:	89 85 64 ff ff ff    	mov    %eax,-0x9c(%ebp)
 8426c72:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 8426c78:	89 44 24 24          	mov    %eax,0x24(%esp)
 8426c7c:	89 7c 24 20          	mov    %edi,0x20(%esp)
 8426c80:	89 74 24 1c          	mov    %esi,0x1c(%esp)
 8426c84:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 8426c88:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 8426c8c:	89 54 24 10          	mov    %edx,0x10(%esp)
 8426c90:	8b 8d 54 ff ff ff    	mov    -0xac(%ebp),%ecx
 8426c96:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8426c9a:	8b 45 10             	mov    0x10(%ebp),%eax
 8426c9d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8426ca1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8426ca8:	00 
 8426ca9:	8b 45 08             	mov    0x8(%ebp),%eax
 8426cac:	89 04 24             	mov    %eax,(%esp)
 8426caf:	e8 50 01 00 00       	call   8426e04 <_ZN21DB_ReqQueryCharacInfo11_sendResultEiiPKciiiiii>
 8426cb4:	eb 52                	jmp    8426d08 <_ZN21DB_ReqQueryCharacInfo8dispatchEiiP6Stream+0x47c>
 8426cb6:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 8426cbd:	00 
 8426cbe:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 8426cc5:	00 
 8426cc6:	c7 44 24 1c 00 00 00 	movl   $0x0,0x1c(%esp)
 8426ccd:	00 
 8426cce:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 8426cd5:	00 
 8426cd6:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8426cdd:	00 
 8426cde:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 8426ce5:	00 
 8426ce6:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8426ced:	00 
 8426cee:	8b 45 10             	mov    0x10(%ebp),%eax
 8426cf1:	89 44 24 08          	mov    %eax,0x8(%esp)
 8426cf5:	c7 44 24 04 15 00 00 	movl   $0x15,0x4(%esp)
 8426cfc:	00 
 8426cfd:	8b 45 08             	mov    0x8(%ebp),%eax
 8426d00:	89 04 24             	mov    %eax,(%esp)
 8426d03:	e8 fc 00 00 00       	call   8426e04 <_ZN21DB_ReqQueryCharacInfo11_sendResultEiiPKciiiiii>
 8426d08:	b8 01 00 00 00       	mov    $0x1,%eax
 8426d0d:	81 c4 dc 00 00 00    	add    $0xdc,%esp
 8426d13:	5b                   	pop    %ebx
 8426d14:	5e                   	pop    %esi
 8426d15:	5f                   	pop    %edi
 8426d16:	5d                   	pop    %ebp
 8426d17:	c3                   	ret

```

```c
// DB_ReqQueryCharacInfo::dispatch @ 0x842688c

/* DB_ReqQueryCharacInfo::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_ReqQueryCharacInfo::dispatch(DB_ReqQueryCharacInfo *this,int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  byte bVar6;
  Stream *pSVar7;
  char local_94 [60];
  undefined1 local_58 [20];
  uint local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  MySQL *local_28;
  SIG_QUERY_CHARAC_INFO *local_24;
  int local_20;
  
  bVar6 = 0;
  pSVar7 = param_3;
  cVar2 = DBDispatcher::dispatch((int)this,param_1,(Stream *)param_2);
  if (cVar2 != '\x01') {
    return 0;
  }
  local_28 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0,pSVar7);
  local_24 = Stream::GetOutBuffer<SIG_QUERY_CHARAC_INFO>(param_3);
  pcVar5 = local_94;
  for (iVar4 = 0xf; iVar4 != 0; iVar4 = iVar4 + -1) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5[2] = '\0';
    pcVar5[3] = '\0';
    pcVar5 = pcVar5 + ((uint)bVar6 * -2 + 1) * 4;
  }
  MySQL::escape_string(local_28,local_94,(char *)local_24);
  MySQL::set_query(local_28,
                   "seLect delete_flag,m_id,charac_no,job,lev,grow_type,sex from charac_info where charac_name=\'%s\'"
                   ,local_94);
  cVar2 = MySQL::exec(local_28,true);
  if (cVar2 == '\x01') {
    iVar4 = MySQL::get_n_rows(local_28);
    if (iVar4 == 0) {
      uVar3 = _sendResult(this,0x15,param_2,(char *)0x0,0,0,0,0,0,0);
      return uVar3;
    }
    iVar4 = MySQL::get_n_rows(local_28);
    if (iVar4 == 0) {
      _sendResult(this,0x15,param_2,(char *)0x0,0,0,0,0,0,0);
    }
    else {
      local_2c = 0;
      cVar2 = MySQL::fetch(local_28);
      if ((cVar2 == '\x01') && (cVar2 = MySQL::get_int(local_28,0,&local_2c), cVar2 == '\x01')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        uVar3 = _sendResult(this,2,param_2,(char *)0x0,0,0,0,0,0,0);
        return uVar3;
      }
      if (local_2c != 0) {
        uVar3 = _sendResult(this,0x15,param_2,(char *)0x0,0,0,0,0,0,0);
        return uVar3;
      }
      local_30 = 0;
      local_34 = 0;
      local_38 = 0;
      local_3c = 0;
      local_20 = 0;
      local_40 = 0;
      local_44 = 0;
      MySQL::get_int(local_28,1,&local_44);
      MySQL::get_int(local_28,2,&local_3c);
      MySQL::get_int(local_28,3,&local_30);
      MySQL::get_int(local_28,4,&local_34);
      MySQL::get_int(local_28,5,&local_38);
      MySQL::get_int(local_28,6,&local_40);
      memset(local_58,0,0x14);
      memcpy(local_58,"member_login",0xd);
      local_20 = _getGiftRecvCount(this,local_44);
      _sendResult(this,0,param_2,(char *)local_24,local_3c,local_30,local_34,local_38,local_40,
                  local_20);
    }
    return 1;
  }
  uVar3 = _sendResult(this,2,param_2,(char *)0x0,0,0,0,0,0,0);
  return uVar3;
}

```

---

## makeRequest

```asm
// === 08426d18 DB_ReqQueryCharacInfo::makeRequest  [0x08426d18-0x8426e03] ===
 8426d18:	55                   	push   %ebp
 8426d19:	89 e5                	mov    %esp,%ebp
 8426d1b:	56                   	push   %esi
 8426d1c:	53                   	push   %ebx
 8426d1d:	83 ec 20             	sub    $0x20,%esp
 8426d20:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8426d25:	c7 44 24 08 eb 66 00 	movl   $0x66eb,0x8(%esp)
 8426d2c:	00 
 8426d2d:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8426d34:	08 
 8426d35:	89 04 24             	mov    %eax,(%esp)
 8426d38:	e8 49 8d e6 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8426d3d:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8426d44:	00 
 8426d45:	89 44 24 04          	mov    %eax,0x4(%esp)
 8426d49:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8426d4c:	89 04 24             	mov    %eax,(%esp)
 8426d4f:	e8 d2 1e ca ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8426d54:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8426d57:	89 04 24             	mov    %eax,(%esp)
 8426d5a:	e8 e7 1e ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8426d5f:	c7 44 24 04 c4 00 00 	movl   $0xc4,0x4(%esp)
 8426d66:	00 
 8426d67:	89 04 24             	mov    %eax,(%esp)
 8426d6a:	e8 e7 1e ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8426d6f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8426d72:	89 04 24             	mov    %eax,(%esp)
 8426d75:	e8 cc 1e ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8426d7a:	8b 55 08             	mov    0x8(%ebp),%edx
 8426d7d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8426d81:	89 04 24             	mov    %eax,(%esp)
 8426d84:	e8 cd 1e ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8426d89:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8426d8c:	89 04 24             	mov    %eax,(%esp)
 8426d8f:	e8 ba 1e ca ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8426d94:	89 04 24             	mov    %eax,(%esp)
 8426d97:	e8 8c b3 02 00       	call   8452128 <_ZN12CStreamGuard11GetInBufferI21SIG_QUERY_CHARAC_INFOEEPT_v>
 8426d9c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8426d9f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8426da2:	c7 44 24 08 1d 00 00 	movl   $0x1d,0x8(%esp)
 8426da9:	00 
 8426daa:	8b 55 0c             	mov    0xc(%ebp),%edx
 8426dad:	89 54 24 04          	mov    %edx,0x4(%esp)
 8426db1:	89 04 24             	mov    %eax,(%esp)
 8426db4:	e8 17 6b c5 ff       	call   807d8d0 <strncpy@plt>
 8426db9:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8426dbe:	8d 55 ec             	lea    -0x14(%ebp),%edx
 8426dc1:	89 54 24 08          	mov    %edx,0x8(%esp)
 8426dc5:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8426dcc:	00 
 8426dcd:	89 04 24             	mov    %eax,(%esp)
 8426dd0:	e8 09 a2 14 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8426dd5:	eb 1b                	jmp    8426df2 <_ZN21DB_ReqQueryCharacInfo11makeRequestEiPKc+0xda>
 8426dd7:	89 d3                	mov    %edx,%ebx
 8426dd9:	89 c6                	mov    %eax,%esi
 8426ddb:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8426dde:	89 04 24             	mov    %eax,(%esp)
 8426de1:	e8 ec 5a 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8426de6:	89 f0                	mov    %esi,%eax
 8426de8:	89 da                	mov    %ebx,%edx
 8426dea:	89 04 24             	mov    %eax,(%esp)
 8426ded:	e8 5e c9 6b 00       	call   8ae3750 <_Unwind_Resume>
 8426df2:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8426df5:	89 04 24             	mov    %eax,(%esp)
 8426df8:	e8 d5 5a 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8426dfd:	83 c4 20             	add    $0x20,%esp
 8426e00:	5b                   	pop    %ebx
 8426e01:	5e                   	pop    %esi
 8426e02:	5d                   	pop    %ebp
 8426e03:	c3                   	ret

```

```c
// DB_ReqQueryCharacInfo::makeRequest @ 0x8426d18

/* DB_ReqQueryCharacInfo::makeRequest(int, char const*) */

void DB_ReqQueryCharacInfo::makeRequest(int param_1,char *param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_QUERY_CHARAC_INFO *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x66eb);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 08426d6a to 08426dd4 has its CatchHandler @ 08426dd7 */
  CStreamGuard::operator<<(pCVar2,0xc4);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_QUERY_CHARAC_INFO>(pCVar2);
  strncpy((char *)local_10,param_2,0x1d);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}

```

