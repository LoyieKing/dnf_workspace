# DB_SaveClientHackLog

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## _getTodaysHackCount

```asm
// === 08421d50 DB_SaveClientHackLog::_getTodaysHackCount  [0x08421d50-0x8421e39] ===
 8421d50:	55                   	push   %ebp
 8421d51:	89 e5                	mov    %esp,%ebp
 8421d53:	53                   	push   %ebx
 8421d54:	83 ec 34             	sub    $0x34,%esp
 8421d57:	8b 45 14             	mov    0x14(%ebp),%eax
 8421d5a:	66 89 45 e4          	mov    %ax,-0x1c(%ebp)
 8421d5e:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8421d65:	0f b7 5d e4          	movzwl -0x1c(%ebp),%ebx
 8421d69:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8421d70:	00 
 8421d71:	8b 45 10             	mov    0x10(%ebp),%eax
 8421d74:	89 04 24             	mov    %eax,(%esp)
 8421d77:	e8 cf 72 ce ff       	call   810904b <_Z14NumberToStringji>
 8421d7c:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8421d80:	89 44 24 08          	mov    %eax,0x8(%esp)
 8421d84:	c7 44 24 04 90 d0 c4 	movl   $0x8c4d090,0x4(%esp)
 8421d8b:	08 
 8421d8c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8421d8f:	89 04 24             	mov    %eax,(%esp)
 8421d92:	e8 29 24 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8421d97:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8421d9e:	00 
 8421d9f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8421da2:	89 04 24             	mov    %eax,(%esp)
 8421da5:	e8 7c 25 fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 8421daa:	83 f0 01             	xor    $0x1,%eax
 8421dad:	84 c0                	test   %al,%al
 8421daf:	75 10                	jne    8421dc1 <_ZN20DB_SaveClientHackLog19_getTodaysHackCountEP5MySQLjt+0x71>
 8421db1:	8b 45 0c             	mov    0xc(%ebp),%eax
 8421db4:	89 04 24             	mov    %eax,(%esp)
 8421db7:	e8 b0 05 cc ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8421dbc:	83 f8 01             	cmp    $0x1,%eax
 8421dbf:	74 07                	je     8421dc8 <_ZN20DB_SaveClientHackLog19_getTodaysHackCountEP5MySQLjt+0x78>
 8421dc1:	b8 01 00 00 00       	mov    $0x1,%eax
 8421dc6:	eb 05                	jmp    8421dcd <_ZN20DB_SaveClientHackLog19_getTodaysHackCountEP5MySQLjt+0x7d>
 8421dc8:	b8 00 00 00 00       	mov    $0x0,%eax
 8421dcd:	84 c0                	test   %al,%al
 8421dcf:	74 07                	je     8421dd8 <_ZN20DB_SaveClientHackLog19_getTodaysHackCountEP5MySQLjt+0x88>
 8421dd1:	b8 00 00 00 00       	mov    $0x0,%eax
 8421dd6:	eb 5b                	jmp    8421e33 <_ZN20DB_SaveClientHackLog19_getTodaysHackCountEP5MySQLjt+0xe3>
 8421dd8:	8b 45 0c             	mov    0xc(%ebp),%eax
 8421ddb:	89 04 24             	mov    %eax,(%esp)
 8421dde:	e8 d9 26 fd ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 8421de3:	83 f0 01             	xor    $0x1,%eax
 8421de6:	84 c0                	test   %al,%al
 8421de8:	74 07                	je     8421df1 <_ZN20DB_SaveClientHackLog19_getTodaysHackCountEP5MySQLjt+0xa1>
 8421dea:	b8 00 00 00 00       	mov    $0x0,%eax
 8421def:	eb 42                	jmp    8421e33 <_ZN20DB_SaveClientHackLog19_getTodaysHackCountEP5MySQLjt+0xe3>
 8421df1:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8421df4:	89 44 24 08          	mov    %eax,0x8(%esp)
 8421df8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8421dff:	00 
 8421e00:	8b 45 0c             	mov    0xc(%ebp),%eax
 8421e03:	89 04 24             	mov    %eax,(%esp)
 8421e06:	e8 21 4b cf ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8421e0b:	83 f0 01             	xor    $0x1,%eax
 8421e0e:	84 c0                	test   %al,%al
 8421e10:	75 07                	jne    8421e19 <_ZN20DB_SaveClientHackLog19_getTodaysHackCountEP5MySQLjt+0xc9>
 8421e12:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8421e15:	85 c0                	test   %eax,%eax
 8421e17:	75 07                	jne    8421e20 <_ZN20DB_SaveClientHackLog19_getTodaysHackCountEP5MySQLjt+0xd0>
 8421e19:	b8 01 00 00 00       	mov    $0x1,%eax
 8421e1e:	eb 05                	jmp    8421e25 <_ZN20DB_SaveClientHackLog19_getTodaysHackCountEP5MySQLjt+0xd5>
 8421e20:	b8 00 00 00 00       	mov    $0x0,%eax
 8421e25:	84 c0                	test   %al,%al
 8421e27:	74 07                	je     8421e30 <_ZN20DB_SaveClientHackLog19_getTodaysHackCountEP5MySQLjt+0xe0>
 8421e29:	b8 00 00 00 00       	mov    $0x0,%eax
 8421e2e:	eb 03                	jmp    8421e33 <_ZN20DB_SaveClientHackLog19_getTodaysHackCountEP5MySQLjt+0xe3>
 8421e30:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8421e33:	83 c4 34             	add    $0x34,%esp
 8421e36:	5b                   	pop    %ebx
 8421e37:	5d                   	pop    %ebp
 8421e38:	c3                   	ret
 8421e39:	90                   	nop

```

```c
// DB_SaveClientHackLog::_getTodaysHackCount @ 0x8421d50

/* DB_SaveClientHackLog::_getTodaysHackCount(MySQL*, unsigned int, unsigned short) */

int __thiscall
DB_SaveClientHackLog::_getTodaysHackCount
          (DB_SaveClientHackLog *this,MySQL *param_1,uint param_2,ushort param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int local_10 [2];
  
  local_10[0] = 0;
  uVar3 = NumberToString(param_2,0);
  MySQL::set_query(param_1,
                   "seLect cnt from dnf_hack_log where m_id=%s and hack_type=%d and occ_date=CAST(DATE_FORMAT(now(), \'%%Y-%%m-%%d\') AS CHAR)"
                   ,uVar3,(uint)param_3);
  cVar2 = MySQL::exec(param_1,true);
  if ((cVar2 == '\x01') && (iVar4 = MySQL::get_n_rows(param_1), iVar4 == 1)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    local_10[0] = 0;
  }
  else {
    cVar2 = MySQL::fetch(param_1);
    if (cVar2 == '\x01') {
      cVar2 = MySQL::get_int(param_1,0,local_10);
      if ((cVar2 == '\x01') && (local_10[0] != 0)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        local_10[0] = 0;
      }
    }
    else {
      local_10[0] = 0;
    }
  }
  return local_10[0];
}

```

---

## _sendHackTypeResult

```asm
// === 08422152 DB_SaveClientHackLog::_sendHackTypeResult  [0x08422152-0x8422241] ===
 8422152:	55                   	push   %ebp
 8422153:	89 e5                	mov    %esp,%ebp
 8422155:	56                   	push   %esi
 8422156:	53                   	push   %ebx
 8422157:	83 ec 20             	sub    $0x20,%esp
 842215a:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 842215f:	c7 44 24 08 6c 5a 00 	movl   $0x5a6c,0x8(%esp)
 8422166:	00 
 8422167:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 842216e:	08 
 842216f:	89 04 24             	mov    %eax,(%esp)
 8422172:	e8 0f d9 e6 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8422177:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 842217e:	00 
 842217f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8422183:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8422186:	89 04 24             	mov    %eax,(%esp)
 8422189:	e8 98 6a ca ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 842218e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8422191:	89 04 24             	mov    %eax,(%esp)
 8422194:	e8 ad 6a ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8422199:	c7 44 24 04 9a 00 00 	movl   $0x9a,0x4(%esp)
 84221a0:	00 
 84221a1:	89 04 24             	mov    %eax,(%esp)
 84221a4:	e8 ad 6a ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84221a9:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84221ac:	89 04 24             	mov    %eax,(%esp)
 84221af:	e8 92 6a ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84221b4:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84221bb:	ff 
 84221bc:	89 04 24             	mov    %eax,(%esp)
 84221bf:	e8 92 6a ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84221c4:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84221c7:	89 04 24             	mov    %eax,(%esp)
 84221ca:	e8 7f 6a ca ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 84221cf:	89 04 24             	mov    %eax,(%esp)
 84221d2:	e8 6d 7c cd ff       	call   80f9e44 <_ZN12CStreamGuard11GetInBufferI24SIG_SAVE_CLIENT_HACK_LOGEEPT_v>
 84221d7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84221da:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84221dd:	8b 55 0c             	mov    0xc(%ebp),%edx
 84221e0:	89 10                	mov    %edx,(%eax)
 84221e2:	8b 45 10             	mov    0x10(%ebp),%eax
 84221e5:	89 c2                	mov    %eax,%edx
 84221e7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84221ea:	66 89 50 08          	mov    %dx,0x8(%eax)
 84221ee:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84221f1:	8b 55 14             	mov    0x14(%ebp),%edx
 84221f4:	89 50 0e             	mov    %edx,0xe(%eax)
 84221f7:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84221fc:	8d 55 ec             	lea    -0x14(%ebp),%edx
 84221ff:	89 54 24 08          	mov    %edx,0x8(%esp)
 8422203:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842220a:	00 
 842220b:	89 04 24             	mov    %eax,(%esp)
 842220e:	e8 cb ed 14 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8422213:	eb 1b                	jmp    8422230 <_ZN20DB_SaveClientHackLog19_sendHackTypeResultEjii+0xde>
 8422215:	89 d3                	mov    %edx,%ebx
 8422217:	89 c6                	mov    %eax,%esi
 8422219:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842221c:	89 04 24             	mov    %eax,(%esp)
 842221f:	e8 ae a6 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8422224:	89 f0                	mov    %esi,%eax
 8422226:	89 da                	mov    %ebx,%edx
 8422228:	89 04 24             	mov    %eax,(%esp)
 842222b:	e8 20 15 6c 00       	call   8ae3750 <_Unwind_Resume>
 8422230:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8422233:	89 04 24             	mov    %eax,(%esp)
 8422236:	e8 97 a6 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 842223b:	83 c4 20             	add    $0x20,%esp
 842223e:	5b                   	pop    %ebx
 842223f:	5e                   	pop    %esi
 8422240:	5d                   	pop    %ebp
 8422241:	c3                   	ret

```

```c
// DB_SaveClientHackLog::_sendHackTypeResult @ 0x8422152

/* DB_SaveClientHackLog::_sendHackTypeResult(unsigned int, int, int) */

void __thiscall
DB_SaveClientHackLog::_sendHackTypeResult
          (DB_SaveClientHackLog *this,uint param_1,int param_2,int param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_SAVE_CLIENT_HACK_LOG *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x5a6c);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 084221a4 to 08422212 has its CatchHandler @ 08422215 */
  CStreamGuard::operator<<(pCVar2,0x9a);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_SAVE_CLIENT_HACK_LOG>(pCVar2);
  *(uint *)local_10 = param_1;
  *(short *)(local_10 + 8) = (short)param_2;
  *(int *)(local_10 + 0xe) = param_3;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}

```

---

## _sendResult

```asm
// === 08421e3a DB_SaveClientHackLog::_sendResult  [0x08421e3a-0x8421f15] ===
 8421e3a:	55                   	push   %ebp
 8421e3b:	89 e5                	mov    %esp,%ebp
 8421e3d:	56                   	push   %esi
 8421e3e:	53                   	push   %ebx
 8421e3f:	83 ec 20             	sub    $0x20,%esp
 8421e42:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8421e47:	c7 44 24 08 14 5a 00 	movl   $0x5a14,0x8(%esp)
 8421e4e:	00 
 8421e4f:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8421e56:	08 
 8421e57:	89 04 24             	mov    %eax,(%esp)
 8421e5a:	e8 27 dc e6 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8421e5f:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8421e66:	00 
 8421e67:	89 44 24 04          	mov    %eax,0x4(%esp)
 8421e6b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8421e6e:	89 04 24             	mov    %eax,(%esp)
 8421e71:	e8 b0 6d ca ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8421e76:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8421e79:	89 04 24             	mov    %eax,(%esp)
 8421e7c:	e8 c5 6d ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8421e81:	c7 44 24 04 9a 00 00 	movl   $0x9a,0x4(%esp)
 8421e88:	00 
 8421e89:	89 04 24             	mov    %eax,(%esp)
 8421e8c:	e8 c5 6d ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8421e91:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8421e94:	89 04 24             	mov    %eax,(%esp)
 8421e97:	e8 aa 6d ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8421e9c:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8421ea3:	ff 
 8421ea4:	89 04 24             	mov    %eax,(%esp)
 8421ea7:	e8 aa 6d ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8421eac:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8421eaf:	89 04 24             	mov    %eax,(%esp)
 8421eb2:	e8 97 6d ca ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8421eb7:	89 04 24             	mov    %eax,(%esp)
 8421eba:	e8 85 7f cd ff       	call   80f9e44 <_ZN12CStreamGuard11GetInBufferI24SIG_SAVE_CLIENT_HACK_LOGEEPT_v>
 8421ebf:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8421ec2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8421ec5:	8b 55 0c             	mov    0xc(%ebp),%edx
 8421ec8:	89 10                	mov    %edx,(%eax)
 8421eca:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8421ecf:	8d 55 ec             	lea    -0x14(%ebp),%edx
 8421ed2:	89 54 24 08          	mov    %edx,0x8(%esp)
 8421ed6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8421edd:	00 
 8421ede:	89 04 24             	mov    %eax,(%esp)
 8421ee1:	e8 f8 f0 14 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8421ee6:	eb 1b                	jmp    8421f03 <_ZN20DB_SaveClientHackLog11_sendResultEj+0xc9>
 8421ee8:	89 d3                	mov    %edx,%ebx
 8421eea:	89 c6                	mov    %eax,%esi
 8421eec:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8421eef:	89 04 24             	mov    %eax,(%esp)
 8421ef2:	e8 db a9 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8421ef7:	89 f0                	mov    %esi,%eax
 8421ef9:	89 da                	mov    %ebx,%edx
 8421efb:	89 04 24             	mov    %eax,(%esp)
 8421efe:	e8 4d 18 6c 00       	call   8ae3750 <_Unwind_Resume>
 8421f03:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8421f06:	89 04 24             	mov    %eax,(%esp)
 8421f09:	e8 c4 a9 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8421f0e:	83 c4 20             	add    $0x20,%esp
 8421f11:	5b                   	pop    %ebx
 8421f12:	5e                   	pop    %esi
 8421f13:	5d                   	pop    %ebp
 8421f14:	c3                   	ret
 8421f15:	90                   	nop

```

```c
// DB_SaveClientHackLog::_sendResult @ 0x8421e3a

/* DB_SaveClientHackLog::_sendResult(unsigned int) */

void __thiscall DB_SaveClientHackLog::_sendResult(DB_SaveClientHackLog *this,uint param_1)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_SAVE_CLIENT_HACK_LOG *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x5a14);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 08421e8c to 08421ee5 has its CatchHandler @ 08421ee8 */
  CStreamGuard::operator<<(pCVar2,0x9a);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_SAVE_CLIENT_HACK_LOG>(pCVar2);
  *(uint *)local_10 = param_1;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}

```

---

## dispatch

```asm
// === 08421f16 DB_SaveClientHackLog::dispatch  [0x08421f16-0x8422151] ===
 8421f16:	55                   	push   %ebp
 8421f17:	89 e5                	mov    %esp,%ebp
 8421f19:	57                   	push   %edi
 8421f1a:	56                   	push   %esi
 8421f1b:	53                   	push   %ebx
 8421f1c:	83 ec 4c             	sub    $0x4c,%esp
 8421f1f:	8b 45 14             	mov    0x14(%ebp),%eax
 8421f22:	89 04 24             	mov    %eax,(%esp)
 8421f25:	e8 78 fc 02 00       	call   8451ba2 <_ZN6Stream12GetOutBufferI24SIG_SAVE_CLIENT_HACK_LOGEEPT_v>
 8421f2a:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8421f2d:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8421f32:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8421f39:	00 
 8421f3a:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8421f41:	00 
 8421f42:	89 04 24             	mov    %eax,(%esp)
 8421f45:	e8 f4 32 fd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8421f4a:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8421f4d:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8421f50:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 8421f54:	0f b7 f0             	movzwl %ax,%esi
 8421f57:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8421f5a:	8b 00                	mov    (%eax),%eax
 8421f5c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8421f63:	00 
 8421f64:	89 04 24             	mov    %eax,(%esp)
 8421f67:	e8 df 70 ce ff       	call   810904b <_Z14NumberToStringji>
 8421f6c:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8421f6f:	8b 5a 0a             	mov    0xa(%edx),%ebx
 8421f72:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8421f75:	8b 4a 0e             	mov    0xe(%edx),%ecx
 8421f78:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8421f7b:	8b 52 04             	mov    0x4(%edx),%edx
 8421f7e:	89 74 24 18          	mov    %esi,0x18(%esp)
 8421f82:	89 44 24 14          	mov    %eax,0x14(%esp)
 8421f86:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8421f8a:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8421f8e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8421f92:	c7 44 24 04 0c d1 c4 	movl   $0x8c4d10c,0x4(%esp)
 8421f99:	08 
 8421f9a:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8421f9d:	89 04 24             	mov    %eax,(%esp)
 8421fa0:	e8 1b 22 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8421fa5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8421fac:	00 
 8421fad:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8421fb0:	89 04 24             	mov    %eax,(%esp)
 8421fb3:	e8 6e 23 fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 8421fb8:	83 f0 01             	xor    $0x1,%eax
 8421fbb:	84 c0                	test   %al,%al
 8421fbd:	75 11                	jne    8421fd0 <_ZN20DB_SaveClientHackLog8dispatchEiiP6Stream+0xba>
 8421fbf:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8421fc2:	89 04 24             	mov    %eax,(%esp)
 8421fc5:	e8 46 23 fd ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 8421fca:	09 d0                	or     %edx,%eax
 8421fcc:	85 c0                	test   %eax,%eax
 8421fce:	75 07                	jne    8421fd7 <_ZN20DB_SaveClientHackLog8dispatchEiiP6Stream+0xc1>
 8421fd0:	b8 01 00 00 00       	mov    $0x1,%eax
 8421fd5:	eb 05                	jmp    8421fdc <_ZN20DB_SaveClientHackLog8dispatchEiiP6Stream+0xc6>
 8421fd7:	b8 00 00 00 00       	mov    $0x0,%eax
 8421fdc:	84 c0                	test   %al,%al
 8421fde:	74 76                	je     8422056 <_ZN20DB_SaveClientHackLog8dispatchEiiP6Stream+0x140>
 8421fe0:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8421fe3:	8b 40 0e             	mov    0xe(%eax),%eax
 8421fe6:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8421fe9:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8421fec:	8b 78 0a             	mov    0xa(%eax),%edi
 8421fef:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8421ff2:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 8421ff6:	0f b7 f0             	movzwl %ax,%esi
 8421ff9:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8421ffc:	8b 58 04             	mov    0x4(%eax),%ebx
 8421fff:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8422002:	8b 00                	mov    (%eax),%eax
 8422004:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842200b:	00 
 842200c:	89 04 24             	mov    %eax,(%esp)
 842200f:	e8 37 70 ce ff       	call   810904b <_Z14NumberToStringji>
 8422014:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 8422017:	89 54 24 18          	mov    %edx,0x18(%esp)
 842201b:	89 7c 24 14          	mov    %edi,0x14(%esp)
 842201f:	89 74 24 10          	mov    %esi,0x10(%esp)
 8422023:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8422027:	89 44 24 08          	mov    %eax,0x8(%esp)
 842202b:	c7 44 24 04 b0 d1 c4 	movl   $0x8c4d1b0,0x4(%esp)
 8422032:	08 
 8422033:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8422036:	89 04 24             	mov    %eax,(%esp)
 8422039:	e8 82 21 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 842203e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8422045:	00 
 8422046:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8422049:	89 04 24             	mov    %eax,(%esp)
 842204c:	e8 d5 22 fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 8422051:	e9 ef 00 00 00       	jmp    8422145 <_ZN20DB_SaveClientHackLog8dispatchEiiP6Stream+0x22f>
 8422056:	c7 45 e4 ff ff ff ff 	movl   $0xffffffff,-0x1c(%ebp)
 842205d:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8422060:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 8422064:	0f b7 c0             	movzwl %ax,%eax
 8422067:	3d f7 01 00 00       	cmp    $0x1f7,%eax
 842206c:	74 1e                	je     842208c <_ZN20DB_SaveClientHackLog8dispatchEiiP6Stream+0x176>
 842206e:	3d f7 01 00 00       	cmp    $0x1f7,%eax
 8422073:	7f 09                	jg     842207e <_ZN20DB_SaveClientHackLog8dispatchEiiP6Stream+0x168>
 8422075:	3d 93 01 00 00       	cmp    $0x193,%eax
 842207a:	74 10                	je     842208c <_ZN20DB_SaveClientHackLog8dispatchEiiP6Stream+0x176>
 842207c:	eb 5d                	jmp    84220db <_ZN20DB_SaveClientHackLog8dispatchEiiP6Stream+0x1c5>
 842207e:	3d 26 03 00 00       	cmp    $0x326,%eax
 8422083:	74 07                	je     842208c <_ZN20DB_SaveClientHackLog8dispatchEiiP6Stream+0x176>
 8422085:	3d ba 03 00 00       	cmp    $0x3ba,%eax
 842208a:	75 4f                	jne    84220db <_ZN20DB_SaveClientHackLog8dispatchEiiP6Stream+0x1c5>
 842208c:	8b 45 dc             	mov    -0x24(%ebp),%eax
 842208f:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 8422093:	0f b7 d0             	movzwl %ax,%edx
 8422096:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8422099:	8b 00                	mov    (%eax),%eax
 842209b:	89 54 24 0c          	mov    %edx,0xc(%esp)
 842209f:	89 44 24 08          	mov    %eax,0x8(%esp)
 84220a3:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84220a6:	89 44 24 04          	mov    %eax,0x4(%esp)
 84220aa:	8b 45 08             	mov    0x8(%ebp),%eax
 84220ad:	89 04 24             	mov    %eax,(%esp)
 84220b0:	e8 9b fc ff ff       	call   8421d50 <_ZN20DB_SaveClientHackLog19_getTodaysHackCountEP5MySQLjt>
 84220b5:	8b 55 dc             	mov    -0x24(%ebp),%edx
 84220b8:	0f b7 52 08          	movzwl 0x8(%edx),%edx
 84220bc:	0f b7 ca             	movzwl %dx,%ecx
 84220bf:	8b 55 dc             	mov    -0x24(%ebp),%edx
 84220c2:	8b 12                	mov    (%edx),%edx
 84220c4:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84220c8:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 84220cc:	89 54 24 04          	mov    %edx,0x4(%esp)
 84220d0:	8b 45 08             	mov    0x8(%ebp),%eax
 84220d3:	89 04 24             	mov    %eax,(%esp)
 84220d6:	e8 77 00 00 00       	call   8422152 <_ZN20DB_SaveClientHackLog19_sendHackTypeResultEjii>
 84220db:	83 7d e4 ff          	cmpl   $0xffffffff,-0x1c(%ebp)
 84220df:	74 64                	je     8422145 <_ZN20DB_SaveClientHackLog8dispatchEiiP6Stream+0x22f>
 84220e1:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84220e4:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 84220e8:	0f b7 d0             	movzwl %ax,%edx
 84220eb:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84220ee:	8b 00                	mov    (%eax),%eax
 84220f0:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84220f4:	89 44 24 08          	mov    %eax,0x8(%esp)
 84220f8:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84220fb:	89 44 24 04          	mov    %eax,0x4(%esp)
 84220ff:	8b 45 08             	mov    0x8(%ebp),%eax
 8422102:	89 04 24             	mov    %eax,(%esp)
 8422105:	e8 46 fc ff ff       	call   8421d50 <_ZN20DB_SaveClientHackLog19_getTodaysHackCountEP5MySQLjt>
 842210a:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 842210d:	0f 9d c0             	setge  %al
 8422110:	84 c0                	test   %al,%al
 8422112:	74 31                	je     8422145 <_ZN20DB_SaveClientHackLog8dispatchEiiP6Stream+0x22f>
 8422114:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8422117:	8b 00                	mov    (%eax),%eax
 8422119:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8422120:	00 
 8422121:	c7 44 24 04 a8 00 00 	movl   $0xa8,0x4(%esp)
 8422128:	00 
 8422129:	89 04 24             	mov    %eax,(%esp)
 842212c:	e8 63 33 00 00       	call   8425494 <_ZN24DB_ReqSaveHackUserPunish11makeRequestEjjPKc>
 8422131:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8422134:	8b 00                	mov    (%eax),%eax
 8422136:	89 44 24 04          	mov    %eax,0x4(%esp)
 842213a:	8b 45 08             	mov    0x8(%ebp),%eax
 842213d:	89 04 24             	mov    %eax,(%esp)
 8422140:	e8 f5 fc ff ff       	call   8421e3a <_ZN20DB_SaveClientHackLog11_sendResultEj>
 8422145:	b8 01 00 00 00       	mov    $0x1,%eax
 842214a:	83 c4 4c             	add    $0x4c,%esp
 842214d:	5b                   	pop    %ebx
 842214e:	5e                   	pop    %esi
 842214f:	5f                   	pop    %edi
 8422150:	5d                   	pop    %ebp
 8422151:	c3                   	ret

```

```c
// DB_SaveClientHackLog::dispatch @ 0x8421f16

/* WARNING: Removing unreachable block (ram,0x084220e1) */
/* WARNING: Removing unreachable block (ram,0x08422114) */
/* DB_SaveClientHackLog::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_SaveClientHackLog::dispatch(DB_SaveClientHackLog *this,int param_1,int param_2,Stream *param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  char cVar5;
  SIG_SAVE_CLIENT_HACK_LOG *pSVar6;
  MySQL *this_00;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  longlong lVar10;
  
  pSVar6 = Stream::GetOutBuffer<SIG_SAVE_CLIENT_HACK_LOG>(param_3);
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  uVar1 = *(ushort *)(pSVar6 + 8);
  uVar7 = NumberToString(*(uint *)pSVar6,0);
  MySQL::set_query(this_00,
                   "upDate dnf_hack_log set charac_no=%d,last_time=now(),cnt=cnt+%d,etc=%d where m_id=%s and hack_type=%d and occ_date=CAST(DATE_FORMAT(now(), \'%%Y-%%m-%%d\') AS CHAR)"
                   ,*(undefined4 *)(pSVar6 + 4),*(undefined4 *)(pSVar6 + 0xe),
                   *(undefined4 *)(pSVar6 + 10),uVar7,(uint)uVar1);
  cVar5 = MySQL::exec(this_00,true);
  if ((cVar5 == '\x01') && (lVar10 = MySQL::getAffectedRowCount(this_00), lVar10 != 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (!bVar4) {
    uVar1 = *(ushort *)(pSVar6 + 8);
    if (uVar1 != 0x1f7) {
      if (uVar1 < 0x1f8) {
        if (uVar1 != 0x193) {
          return 1;
        }
      }
      else if ((uVar1 != 0x326) && (uVar1 != 0x3ba)) {
        return 1;
      }
    }
    iVar9 = _getTodaysHackCount(this,this_00,*(uint *)pSVar6,*(ushort *)(pSVar6 + 8));
    _sendHackTypeResult(this,*(uint *)pSVar6,(uint)*(ushort *)(pSVar6 + 8),iVar9);
    return 1;
  }
  uVar7 = *(undefined4 *)(pSVar6 + 0xe);
  uVar2 = *(undefined4 *)(pSVar6 + 10);
  uVar1 = *(ushort *)(pSVar6 + 8);
  uVar3 = *(undefined4 *)(pSVar6 + 4);
  uVar8 = NumberToString(*(uint *)pSVar6,0);
  MySQL::set_query(this_00,
                   "inSert into dnf_hack_log(m_id,charac_no,hack_type,occ_date,last_time,etc,cnt) values(%s,%d,%d,cast(now() as date),now(),%d,%d)"
                   ,uVar8,uVar3,(uint)uVar1,uVar2,uVar7);
  MySQL::exec(this_00,true);
  return 1;
}

```

