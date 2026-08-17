# DB_UpdateInventoryCapacity

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 08444bea DB_UpdateInventoryCapacity::dispatch  [0x08444bea-0x8444d11] ===
 8444bea:	55                   	push   %ebp
 8444beb:	89 e5                	mov    %esp,%ebp
 8444bed:	56                   	push   %esi
 8444bee:	53                   	push   %ebx
 8444bef:	83 ec 30             	sub    $0x30,%esp
 8444bf2:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8444bf9:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8444bfc:	89 44 24 04          	mov    %eax,0x4(%esp)
 8444c00:	8b 45 14             	mov    0x14(%ebp),%eax
 8444c03:	89 04 24             	mov    %eax,(%esp)
 8444c06:	e8 b9 79 1d 00       	call   861c5c4 <_ZN6StreamrsERi>
 8444c0b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8444c0e:	89 c2                	mov    %eax,%edx
 8444c10:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8444c15:	89 54 24 08          	mov    %edx,0x8(%esp)
 8444c19:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8444c20:	00 
 8444c21:	89 04 24             	mov    %eax,(%esp)
 8444c24:	e8 15 06 fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8444c29:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8444c2c:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 8444c33:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 8444c3a:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8444c3d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8444c41:	8b 45 14             	mov    0x14(%ebp),%eax
 8444c44:	89 04 24             	mov    %eax,(%esp)
 8444c47:	e8 4a 7b 1d 00       	call   861c796 <_ZN6StreamrsERj>
 8444c4c:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8444c4f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8444c53:	8b 45 14             	mov    0x14(%ebp),%eax
 8444c56:	89 04 24             	mov    %eax,(%esp)
 8444c59:	e8 66 79 1d 00       	call   861c5c4 <_ZN6StreamrsERi>
 8444c5e:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8444c61:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8444c64:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8444c68:	89 44 24 08          	mov    %eax,0x8(%esp)
 8444c6c:	c7 44 24 04 9c 72 c5 	movl   $0x8c5729c,0x4(%esp)
 8444c73:	08 
 8444c74:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8444c77:	89 04 24             	mov    %eax,(%esp)
 8444c7a:	e8 41 f5 fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8444c7f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8444c86:	00 
 8444c87:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8444c8a:	89 04 24             	mov    %eax,(%esp)
 8444c8d:	e8 94 f6 fa ff       	call   83f4326 <_ZN5MySQL4execEb>
 8444c92:	83 f0 01             	xor    $0x1,%eax
 8444c95:	84 c0                	test   %al,%al
 8444c97:	75 11                	jne    8444caa <_ZN26DB_UpdateInventoryCapacity8dispatchEiiP6Stream+0xc0>
 8444c99:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8444c9c:	89 04 24             	mov    %eax,(%esp)
 8444c9f:	e8 6c f6 fa ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 8444ca4:	09 d0                	or     %edx,%eax
 8444ca6:	85 c0                	test   %eax,%eax
 8444ca8:	75 07                	jne    8444cb1 <_ZN26DB_UpdateInventoryCapacity8dispatchEiiP6Stream+0xc7>
 8444caa:	b8 01 00 00 00       	mov    $0x1,%eax
 8444caf:	eb 05                	jmp    8444cb6 <_ZN26DB_UpdateInventoryCapacity8dispatchEiiP6Stream+0xcc>
 8444cb1:	b8 00 00 00 00       	mov    $0x0,%eax
 8444cb6:	84 c0                	test   %al,%al
 8444cb8:	74 4b                	je     8444d05 <_ZN26DB_UpdateInventoryCapacity8dispatchEiiP6Stream+0x11b>
 8444cba:	8b 75 dc             	mov    -0x24(%ebp),%esi
 8444cbd:	8b 5d d8             	mov    -0x28(%ebp),%ebx
 8444cc0:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8444cc7:	00 
 8444cc8:	c7 44 24 08 c8 ab 00 	movl   $0xabc8,0x8(%esp)
 8444ccf:	00 
 8444cd0:	c7 44 24 04 40 b4 c5 	movl   $0x8c5b440,0x4(%esp)
 8444cd7:	08 
 8444cd8:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8444cdb:	89 04 24             	mov    %eax,(%esp)
 8444cde:	e8 35 aa 10 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8444ce3:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8444ce7:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8444ceb:	c7 44 24 04 9c 72 c5 	movl   $0x8c5729c,0x4(%esp)
 8444cf2:	08 
 8444cf3:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8444cf6:	89 04 24             	mov    %eax,(%esp)
 8444cf9:	e8 8a aa 10 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8444cfe:	b8 00 00 00 00       	mov    $0x0,%eax
 8444d03:	eb 05                	jmp    8444d0a <_ZN26DB_UpdateInventoryCapacity8dispatchEiiP6Stream+0x120>
 8444d05:	b8 01 00 00 00       	mov    $0x1,%eax
 8444d0a:	83 c4 30             	add    $0x30,%esp
 8444d0d:	5b                   	pop    %ebx
 8444d0e:	5e                   	pop    %esi
 8444d0f:	5d                   	pop    %ebp
 8444d10:	c3                   	ret
 8444d11:	90                   	nop

```

```c
// DB_UpdateInventoryCapacity::dispatch @ 0x8444bea

/* DB_UpdateInventoryCapacity::dispatch(int, int, Stream*) */

bool DB_UpdateInventoryCapacity::dispatch(int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  longlong lVar5;
  Stream *in_stack_00000010;
  int local_2c;
  uint local_28;
  int local_24;
  cMyTrace local_20 [16];
  MySQL *local_10;
  
  local_24 = 0;
  Stream::operator>>(in_stack_00000010,&local_24);
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,local_24);
  local_28 = 0;
  local_2c = 0;
  Stream::operator>>(in_stack_00000010,&local_28);
  Stream::operator>>(in_stack_00000010,&local_2c);
  MySQL::set_query(local_10,"upDate inventory set inventory_capacity=%d where charac_no=%u",local_2c
                   ,local_28);
  cVar4 = MySQL::exec(local_10,true);
  if ((cVar4 == '\x01') && (lVar5 = MySQL::getAffectedRowCount(local_10), lVar5 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  uVar3 = local_28;
  iVar2 = local_2c;
  if (bVar1) {
    cMyTrace::cMyTrace(local_20,
                       "virtual bool DB_UpdateInventoryCapacity::dispatch(int, int, Stream*)",0xabc8
                       ,5);
    cMyTrace::operator()
              (local_20,"upDate inventory set inventory_capacity=%d where charac_no=%u",iVar2,uVar3)
    ;
  }
  return !bVar1;
}

```

---

## makeRequest

```asm
// === 08444d12 DB_UpdateInventoryCapacity::makeRequest  [0x08444d12-0x8444e1d] ===
 8444d12:	55                   	push   %ebp
 8444d13:	89 e5                	mov    %esp,%ebp
 8444d15:	56                   	push   %esi
 8444d16:	53                   	push   %ebx
 8444d17:	83 ec 20             	sub    $0x20,%esp
 8444d1a:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8444d1f:	c7 44 24 08 d0 ab 00 	movl   $0xabd0,0x8(%esp)
 8444d26:	00 
 8444d27:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8444d2e:	08 
 8444d2f:	89 04 24             	mov    %eax,(%esp)
 8444d32:	e8 4f ad e4 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8444d37:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8444d3e:	00 
 8444d3f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8444d43:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8444d46:	89 04 24             	mov    %eax,(%esp)
 8444d49:	e8 d8 3e c8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8444d4e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8444d51:	89 04 24             	mov    %eax,(%esp)
 8444d54:	e8 ed 3e c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8444d59:	c7 44 24 04 ae 02 00 	movl   $0x2ae,0x4(%esp)
 8444d60:	00 
 8444d61:	89 04 24             	mov    %eax,(%esp)
 8444d64:	e8 ed 3e c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8444d69:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8444d6c:	89 04 24             	mov    %eax,(%esp)
 8444d6f:	e8 d2 3e c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8444d74:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8444d7b:	ff 
 8444d7c:	89 04 24             	mov    %eax,(%esp)
 8444d7f:	e8 d2 3e c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8444d84:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8444d87:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8444d8a:	89 04 24             	mov    %eax,(%esp)
 8444d8d:	e8 b4 3e c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8444d92:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8444d96:	89 04 24             	mov    %eax,(%esp)
 8444d99:	e8 b8 3e c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8444d9e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8444da1:	89 04 24             	mov    %eax,(%esp)
 8444da4:	e8 9d 3e c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8444da9:	8b 55 10             	mov    0x10(%ebp),%edx
 8444dac:	89 54 24 04          	mov    %edx,0x4(%esp)
 8444db0:	89 04 24             	mov    %eax,(%esp)
 8444db3:	e8 da d4 c9 ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 8444db8:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8444dbb:	89 04 24             	mov    %eax,(%esp)
 8444dbe:	e8 83 3e c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8444dc3:	8b 55 14             	mov    0x14(%ebp),%edx
 8444dc6:	89 54 24 04          	mov    %edx,0x4(%esp)
 8444dca:	89 04 24             	mov    %eax,(%esp)
 8444dcd:	e8 84 3e c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8444dd2:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8444dd7:	8d 55 f0             	lea    -0x10(%ebp),%edx
 8444dda:	89 54 24 08          	mov    %edx,0x8(%esp)
 8444dde:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8444de5:	00 
 8444de6:	89 04 24             	mov    %eax,(%esp)
 8444de9:	e8 f0 c1 12 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8444dee:	eb 1b                	jmp    8444e0b <_ZN26DB_UpdateInventoryCapacity11makeRequestE17ENUM_SERVER_GROUPiji+0xf9>
 8444df0:	89 d3                	mov    %edx,%ebx
 8444df2:	89 c6                	mov    %eax,%esi
 8444df4:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8444df7:	89 04 24             	mov    %eax,(%esp)
 8444dfa:	e8 d3 7a 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8444dff:	89 f0                	mov    %esi,%eax
 8444e01:	89 da                	mov    %ebx,%edx
 8444e03:	89 04 24             	mov    %eax,(%esp)
 8444e06:	e8 45 e9 69 00       	call   8ae3750 <_Unwind_Resume>
 8444e0b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8444e0e:	89 04 24             	mov    %eax,(%esp)
 8444e11:	e8 bc 7a 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8444e16:	83 c4 20             	add    $0x20,%esp
 8444e19:	5b                   	pop    %ebx
 8444e1a:	5e                   	pop    %esi
 8444e1b:	5d                   	pop    %ebp
 8444e1c:	c3                   	ret
 8444e1d:	90                   	nop

```

```c
// DB_UpdateInventoryCapacity::makeRequest @ 0x8444d12

/* DB_UpdateInventoryCapacity::makeRequest(ENUM_SERVER_GROUP, int, unsigned int, int) */

void DB_UpdateInventoryCapacity::makeRequest
               (int param_1,undefined4 param_2,uint param_3,int param_4)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xabd0);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 08444d64 to 08444ded has its CatchHandler @ 08444df0 */
  CStreamGuard::operator<<(pCVar2,0x2ae);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_3);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_4);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}

```

