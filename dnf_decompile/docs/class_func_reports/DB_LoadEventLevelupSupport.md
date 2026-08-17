# DB_LoadEventLevelupSupport

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 0844cd38 DB_LoadEventLevelupSupport::dispatch  [0x0844cd38-0x844d0a5] ===
 844cd38:	55                   	push   %ebp
 844cd39:	89 e5                	mov    %esp,%ebp
 844cd3b:	56                   	push   %esi
 844cd3c:	53                   	push   %ebx
 844cd3d:	83 ec 60             	sub    $0x60,%esp
 844cd40:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
 844cd47:	8d 45 c0             	lea    -0x40(%ebp),%eax
 844cd4a:	89 44 24 04          	mov    %eax,0x4(%esp)
 844cd4e:	8b 45 14             	mov    0x14(%ebp),%eax
 844cd51:	89 04 24             	mov    %eax,(%esp)
 844cd54:	e8 6b f8 1c 00       	call   861c5c4 <_ZN6StreamrsERi>
 844cd59:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 844cd5e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 844cd65:	00 
 844cd66:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 844cd6d:	00 
 844cd6e:	89 04 24             	mov    %eax,(%esp)
 844cd71:	e8 c8 84 fa ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 844cd76:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 844cd79:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 844cd7d:	75 48                	jne    844cdc7 <_ZN26DB_LoadEventLevelupSupport8dispatchEiiP6Stream+0x8f>
 844cd7f:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 844cd86:	00 
 844cd87:	c7 44 24 08 6d c2 00 	movl   $0xc26d,0x8(%esp)
 844cd8e:	00 
 844cd8f:	c7 44 24 04 80 a9 c5 	movl   $0x8c5a980,0x4(%esp)
 844cd96:	08 
 844cd97:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 844cd9a:	89 04 24             	mov    %eax,(%esp)
 844cd9d:	e8 76 29 10 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 844cda2:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 844cda9:	00 
 844cdaa:	c7 44 24 04 58 6e c5 	movl   $0x8c56e58,0x4(%esp)
 844cdb1:	08 
 844cdb2:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 844cdb5:	89 04 24             	mov    %eax,(%esp)
 844cdb8:	e8 cb 29 10 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 844cdbd:	bb 00 00 00 00       	mov    $0x0,%ebx
 844cdc2:	e9 d5 02 00 00       	jmp    844d09c <_ZN26DB_LoadEventLevelupSupport8dispatchEiiP6Stream+0x364>
 844cdc7:	8b 45 c0             	mov    -0x40(%ebp),%eax
 844cdca:	89 44 24 08          	mov    %eax,0x8(%esp)
 844cdce:	c7 44 24 04 00 9c c5 	movl   $0x8c59c00,0x4(%esp)
 844cdd5:	08 
 844cdd6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 844cdd9:	89 04 24             	mov    %eax,(%esp)
 844cddc:	e8 df 73 fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 844cde1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 844cde8:	00 
 844cde9:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 844cdec:	89 04 24             	mov    %eax,(%esp)
 844cdef:	e8 32 75 fa ff       	call   83f4326 <_ZN5MySQL4execEb>
 844cdf4:	83 f0 01             	xor    $0x1,%eax
 844cdf7:	84 c0                	test   %al,%al
 844cdf9:	74 2c                	je     844ce27 <_ZN26DB_LoadEventLevelupSupport8dispatchEiiP6Stream+0xef>
 844cdfb:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 844ce02:	e8 f9 89 2d 00       	call   8725800 <__cxa_allocate_exception>
 844ce07:	89 c2                	mov    %eax,%edx
 844ce09:	c7 02 77 c2 00 00    	movl   $0xc277,(%edx)
 844ce0f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 844ce16:	00 
 844ce17:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 844ce1e:	09 
 844ce1f:	89 04 24             	mov    %eax,(%esp)
 844ce22:	e8 29 7e 2d 00       	call   8724c50 <__cxa_throw>
 844ce27:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 844ce2c:	c7 44 24 08 79 c2 00 	movl   $0xc279,0x8(%esp)
 844ce33:	00 
 844ce34:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 844ce3b:	08 
 844ce3c:	89 04 24             	mov    %eax,(%esp)
 844ce3f:	e8 42 2c e4 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 844ce44:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 844ce4b:	00 
 844ce4c:	89 44 24 04          	mov    %eax,0x4(%esp)
 844ce50:	8d 45 b8             	lea    -0x48(%ebp),%eax
 844ce53:	89 04 24             	mov    %eax,(%esp)
 844ce56:	e8 cb bd c7 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 844ce5b:	8d 45 b8             	lea    -0x48(%ebp),%eax
 844ce5e:	89 04 24             	mov    %eax,(%esp)
 844ce61:	e8 e0 bd c7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 844ce66:	c7 44 24 04 50 03 00 	movl   $0x350,0x4(%esp)
 844ce6d:	00 
 844ce6e:	89 04 24             	mov    %eax,(%esp)
 844ce71:	e8 e0 bd c7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 844ce76:	8d 45 b8             	lea    -0x48(%ebp),%eax
 844ce79:	89 04 24             	mov    %eax,(%esp)
 844ce7c:	e8 c5 bd c7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 844ce81:	8b 55 10             	mov    0x10(%ebp),%edx
 844ce84:	89 54 24 04          	mov    %edx,0x4(%esp)
 844ce88:	89 04 24             	mov    %eax,(%esp)
 844ce8b:	e8 c6 bd c7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 844ce90:	8d 45 b8             	lea    -0x48(%ebp),%eax
 844ce93:	89 04 24             	mov    %eax,(%esp)
 844ce96:	e8 b3 bd c7 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 844ce9b:	89 04 24             	mov    %eax,(%esp)
 844ce9e:	e8 8d 7b 00 00       	call   8454a30 <_ZN12CStreamGuard11GetInBufferI29SIG_EVENT_LEVEUP_SUPPORT_INFOEEPT_v>
 844cea3:	89 45 e8             	mov    %eax,-0x18(%ebp)
 844cea6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 844cea9:	89 04 24             	mov    %eax,(%esp)
 844ceac:	e8 bb 54 c9 ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 844ceb1:	89 45 ec             	mov    %eax,-0x14(%ebp)
 844ceb4:	8b 45 e8             	mov    -0x18(%ebp),%eax
 844ceb7:	8b 55 ec             	mov    -0x14(%ebp),%edx
 844ceba:	89 10                	mov    %edx,(%eax)
 844cebc:	66 c7 45 b6 00 00    	movw   $0x0,-0x4a(%ebp)
 844cec2:	66 c7 45 b4 00 00    	movw   $0x0,-0x4c(%ebp)
 844cec8:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 844cecf:	e9 fa 00 00 00       	jmp    844cfce <_ZN26DB_LoadEventLevelupSupport8dispatchEiiP6Stream+0x296>
 844ced4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 844ced7:	89 04 24             	mov    %eax,(%esp)
 844ceda:	e8 dd 75 fa ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 844cedf:	83 f0 01             	xor    $0x1,%eax
 844cee2:	84 c0                	test   %al,%al
 844cee4:	74 2c                	je     844cf12 <_ZN26DB_LoadEventLevelupSupport8dispatchEiiP6Stream+0x1da>
 844cee6:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 844ceed:	e8 0e 89 2d 00       	call   8725800 <__cxa_allocate_exception>
 844cef2:	89 c2                	mov    %eax,%edx
 844cef4:	c7 02 8c c2 00 00    	movl   $0xc28c,(%edx)
 844cefa:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 844cf01:	00 
 844cf02:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 844cf09:	09 
 844cf0a:	89 04 24             	mov    %eax,(%esp)
 844cf0d:	e8 3e 7d 2d 00       	call   8724c50 <__cxa_throw>
 844cf12:	8d 45 b6             	lea    -0x4a(%ebp),%eax
 844cf15:	89 44 24 08          	mov    %eax,0x8(%esp)
 844cf19:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 844cf20:	00 
 844cf21:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 844cf24:	89 04 24             	mov    %eax,(%esp)
 844cf27:	e8 64 9a cc ff       	call   8116990 <_ZN5MySQL10get_ushortEiRt>
 844cf2c:	83 f0 01             	xor    $0x1,%eax
 844cf2f:	84 c0                	test   %al,%al
 844cf31:	74 2c                	je     844cf5f <_ZN26DB_LoadEventLevelupSupport8dispatchEiiP6Stream+0x227>
 844cf33:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 844cf3a:	e8 c1 88 2d 00       	call   8725800 <__cxa_allocate_exception>
 844cf3f:	89 c2                	mov    %eax,%edx
 844cf41:	c7 02 8d c2 00 00    	movl   $0xc28d,(%edx)
 844cf47:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 844cf4e:	00 
 844cf4f:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 844cf56:	09 
 844cf57:	89 04 24             	mov    %eax,(%esp)
 844cf5a:	e8 f1 7c 2d 00       	call   8724c50 <__cxa_throw>
 844cf5f:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 844cf62:	89 44 24 08          	mov    %eax,0x8(%esp)
 844cf66:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 844cf6d:	00 
 844cf6e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 844cf71:	89 04 24             	mov    %eax,(%esp)
 844cf74:	e8 17 9a cc ff       	call   8116990 <_ZN5MySQL10get_ushortEiRt>
 844cf79:	83 f0 01             	xor    $0x1,%eax
 844cf7c:	84 c0                	test   %al,%al
 844cf7e:	74 2c                	je     844cfac <_ZN26DB_LoadEventLevelupSupport8dispatchEiiP6Stream+0x274>
 844cf80:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 844cf87:	e8 74 88 2d 00       	call   8725800 <__cxa_allocate_exception>
 844cf8c:	89 c2                	mov    %eax,%edx
 844cf8e:	c7 02 8e c2 00 00    	movl   $0xc28e,(%edx)
 844cf94:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 844cf9b:	00 
 844cf9c:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 844cfa3:	09 
 844cfa4:	89 04 24             	mov    %eax,(%esp)
 844cfa7:	e8 a4 7c 2d 00       	call   8724c50 <__cxa_throw>
 844cfac:	8b 55 f0             	mov    -0x10(%ebp),%edx
 844cfaf:	0f b7 4d b6          	movzwl -0x4a(%ebp),%ecx
 844cfb3:	8b 45 e8             	mov    -0x18(%ebp),%eax
 844cfb6:	66 89 4c 90 04       	mov    %cx,0x4(%eax,%edx,4)
 844cfbb:	8b 55 f0             	mov    -0x10(%ebp),%edx
 844cfbe:	0f b7 4d b4          	movzwl -0x4c(%ebp),%ecx
 844cfc2:	8b 45 e8             	mov    -0x18(%ebp),%eax
 844cfc5:	66 89 4c 90 06       	mov    %cx,0x6(%eax,%edx,4)
 844cfca:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 844cfce:	8b 45 f0             	mov    -0x10(%ebp),%eax
 844cfd1:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 844cfd4:	0f 9c c0             	setl   %al
 844cfd7:	84 c0                	test   %al,%al
 844cfd9:	0f 85 f5 fe ff ff    	jne    844ced4 <_ZN26DB_LoadEventLevelupSupport8dispatchEiiP6Stream+0x19c>
 844cfdf:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 844cfe4:	8d 55 b8             	lea    -0x48(%ebp),%edx
 844cfe7:	89 54 24 08          	mov    %edx,0x8(%esp)
 844cfeb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 844cff2:	00 
 844cff3:	89 04 24             	mov    %eax,(%esp)
 844cff6:	e8 e3 3f 12 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 844cffb:	eb 15                	jmp    844d012 <_ZN26DB_LoadEventLevelupSupport8dispatchEiiP6Stream+0x2da>
 844cffd:	89 d3                	mov    %edx,%ebx
 844cfff:	89 c6                	mov    %eax,%esi
 844d001:	8d 45 b8             	lea    -0x48(%ebp),%eax
 844d004:	89 04 24             	mov    %eax,(%esp)
 844d007:	e8 c6 f8 1c 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 844d00c:	89 f0                	mov    %esi,%eax
 844d00e:	89 da                	mov    %ebx,%edx
 844d010:	eb 0d                	jmp    844d01f <_ZN26DB_LoadEventLevelupSupport8dispatchEiiP6Stream+0x2e7>
 844d012:	8d 45 b8             	lea    -0x48(%ebp),%eax
 844d015:	89 04 24             	mov    %eax,(%esp)
 844d018:	e8 b5 f8 1c 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 844d01d:	eb 78                	jmp    844d097 <_ZN26DB_LoadEventLevelupSupport8dispatchEiiP6Stream+0x35f>
 844d01f:	83 fa 01             	cmp    $0x1,%edx
 844d022:	74 08                	je     844d02c <_ZN26DB_LoadEventLevelupSupport8dispatchEiiP6Stream+0x2f4>
 844d024:	89 04 24             	mov    %eax,(%esp)
 844d027:	e8 24 67 69 00       	call   8ae3750 <_Unwind_Resume>
 844d02c:	89 04 24             	mov    %eax,(%esp)
 844d02f:	e8 ac 8c 2d 00       	call   8725ce0 <__cxa_begin_catch>
 844d034:	8b 00                	mov    (%eax),%eax
 844d036:	89 45 f4             	mov    %eax,-0xc(%ebp)
 844d039:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 844d040:	00 
 844d041:	c7 44 24 08 97 c2 00 	movl   $0xc297,0x8(%esp)
 844d048:	00 
 844d049:	c7 44 24 04 80 a9 c5 	movl   $0x8c5a980,0x4(%esp)
 844d050:	08 
 844d051:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 844d054:	89 04 24             	mov    %eax,(%esp)
 844d057:	e8 bc 26 10 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 844d05c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 844d05f:	89 44 24 08          	mov    %eax,0x8(%esp)
 844d063:	c7 44 24 04 44 9c c5 	movl   $0x8c59c44,0x4(%esp)
 844d06a:	08 
 844d06b:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 844d06e:	89 04 24             	mov    %eax,(%esp)
 844d071:	e8 12 27 10 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 844d076:	bb 00 00 00 00       	mov    $0x0,%ebx
 844d07b:	e8 b0 8b 2d 00       	call   8725c30 <__cxa_end_catch>
 844d080:	eb 1a                	jmp    844d09c <_ZN26DB_LoadEventLevelupSupport8dispatchEiiP6Stream+0x364>
 844d082:	89 d3                	mov    %edx,%ebx
 844d084:	89 c6                	mov    %eax,%esi
 844d086:	e8 a5 8b 2d 00       	call   8725c30 <__cxa_end_catch>
 844d08b:	89 f0                	mov    %esi,%eax
 844d08d:	89 da                	mov    %ebx,%edx
 844d08f:	89 04 24             	mov    %eax,(%esp)
 844d092:	e8 b9 66 69 00       	call   8ae3750 <_Unwind_Resume>
 844d097:	bb 01 00 00 00       	mov    $0x1,%ebx
 844d09c:	89 d8                	mov    %ebx,%eax
 844d09e:	83 c4 60             	add    $0x60,%esp
 844d0a1:	5b                   	pop    %ebx
 844d0a2:	5e                   	pop    %esi
 844d0a3:	5d                   	pop    %ebp
 844d0a4:	c3                   	ret
 844d0a5:	90                   	nop

```

```c
// DB_LoadEventLevelupSupport::dispatch @ 0x844cd38

/* DB_LoadEventLevelupSupport::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_LoadEventLevelupSupport::dispatch
          (DB_LoadEventLevelupSupport *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  undefined4 uVar5;
  ushort local_50;
  ushort local_4e;
  CStreamGuard local_4c [8];
  int local_44;
  cMyTrace local_40 [32];
  MySQL *local_20;
  SIG_EVENT_LEVEUP_SUPPORT_INFO *local_1c;
  int local_18;
  int local_14;
  
  local_44 = 0;
  Stream::operator>>(param_3,&local_44);
  local_20 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  if (local_20 == (MySQL *)0x0) {
    cMyTrace::cMyTrace(local_40,
                       "virtual bool DB_LoadEventLevelupSupport::dispatch(int, int, Stream*)",0xc26d
                       ,5);
    cMyTrace::operator()(local_40,"[ERROR] Database Handle is NULL [index:%d]",2);
    uVar5 = 0;
  }
  else {
    MySQL::set_query(local_20,"seLect level, state from event_levelup_support where charac_no=%d",
                     local_44);
                    /* try { // try from 0844cdef to 0844ce43 has its CatchHandler @ 0844d01f */
    cVar1 = MySQL::exec(local_20,true);
    if (cVar1 != '\x01') {
      puVar2 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar2 = 0xc277;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar2,&int::typeinfo,0);
    }
    pSVar3 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xc279);
    CStreamGuard::CStreamGuard(local_4c,pSVar3,true);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_4c);
                    /* try { // try from 0844ce71 to 0844cffa has its CatchHandler @ 0844cffd */
    CStreamGuard::operator<<(pCVar4,0x350);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_4c);
    CStreamGuard::operator<<(pCVar4,param_2);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator->(local_4c);
    local_1c = CStreamGuard::GetInBuffer<SIG_EVENT_LEVEUP_SUPPORT_INFO>(pCVar4);
    local_18 = MySQL::get_n_rows(local_20);
    *(int *)local_1c = local_18;
    local_4e = 0;
    local_50 = 0;
    for (local_14 = 0; local_14 < local_18; local_14 = local_14 + 1) {
      cVar1 = MySQL::fetch(local_20);
      if (cVar1 != '\x01') {
        puVar2 = (undefined4 *)__cxa_allocate_exception(4);
        *puVar2 = 0xc28c;
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar2,&int::typeinfo,0);
      }
      cVar1 = MySQL::get_ushort(local_20,0,&local_4e);
      if (cVar1 != '\x01') {
        puVar2 = (undefined4 *)__cxa_allocate_exception(4);
        *puVar2 = 0xc28d;
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar2,&int::typeinfo,0);
      }
      cVar1 = MySQL::get_ushort(local_20,1,&local_50);
      if (cVar1 != '\x01') {
        puVar2 = (undefined4 *)__cxa_allocate_exception(4);
        *puVar2 = 0xc28e;
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar2,&int::typeinfo,0);
      }
      *(ushort *)(local_1c + local_14 * 4 + 4) = local_4e;
      *(ushort *)(local_1c + local_14 * 4 + 6) = local_50;
    }
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_4c);
                    /* try { // try from 0844d018 to 0844d01c has its CatchHandler @ 0844d01f */
    CStreamGuard::~CStreamGuard(local_4c);
    uVar5 = 1;
  }
  return uVar5;
}

```

---

## makeRequest

```asm
// === 0844d0a6 DB_LoadEventLevelupSupport::makeRequest  [0x0844d0a6-0x844d17b] ===
 844d0a6:	55                   	push   %ebp
 844d0a7:	89 e5                	mov    %esp,%ebp
 844d0a9:	56                   	push   %esi
 844d0aa:	53                   	push   %ebx
 844d0ab:	83 ec 20             	sub    $0x20,%esp
 844d0ae:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 844d0b3:	c7 44 24 08 a0 c2 00 	movl   $0xc2a0,0x8(%esp)
 844d0ba:	00 
 844d0bb:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 844d0c2:	08 
 844d0c3:	89 04 24             	mov    %eax,(%esp)
 844d0c6:	e8 bb 29 e4 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 844d0cb:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 844d0d2:	00 
 844d0d3:	89 44 24 04          	mov    %eax,0x4(%esp)
 844d0d7:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844d0da:	89 04 24             	mov    %eax,(%esp)
 844d0dd:	e8 44 bb c7 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 844d0e2:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844d0e5:	89 04 24             	mov    %eax,(%esp)
 844d0e8:	e8 59 bb c7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 844d0ed:	c7 44 24 04 50 03 00 	movl   $0x350,0x4(%esp)
 844d0f4:	00 
 844d0f5:	89 04 24             	mov    %eax,(%esp)
 844d0f8:	e8 59 bb c7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 844d0fd:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844d100:	89 04 24             	mov    %eax,(%esp)
 844d103:	e8 3e bb c7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 844d108:	8b 55 08             	mov    0x8(%ebp),%edx
 844d10b:	89 54 24 04          	mov    %edx,0x4(%esp)
 844d10f:	89 04 24             	mov    %eax,(%esp)
 844d112:	e8 3f bb c7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 844d117:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844d11a:	89 04 24             	mov    %eax,(%esp)
 844d11d:	e8 24 bb c7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 844d122:	8b 55 0c             	mov    0xc(%ebp),%edx
 844d125:	89 54 24 04          	mov    %edx,0x4(%esp)
 844d129:	89 04 24             	mov    %eax,(%esp)
 844d12c:	e8 25 bb c7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 844d131:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 844d136:	8d 55 f0             	lea    -0x10(%ebp),%edx
 844d139:	89 54 24 08          	mov    %edx,0x8(%esp)
 844d13d:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 844d144:	00 
 844d145:	89 04 24             	mov    %eax,(%esp)
 844d148:	e8 91 3e 12 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 844d14d:	eb 1b                	jmp    844d16a <_ZN26DB_LoadEventLevelupSupport11makeRequestEii+0xc4>
 844d14f:	89 d3                	mov    %edx,%ebx
 844d151:	89 c6                	mov    %eax,%esi
 844d153:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844d156:	89 04 24             	mov    %eax,(%esp)
 844d159:	e8 74 f7 1c 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 844d15e:	89 f0                	mov    %esi,%eax
 844d160:	89 da                	mov    %ebx,%edx
 844d162:	89 04 24             	mov    %eax,(%esp)
 844d165:	e8 e6 65 69 00       	call   8ae3750 <_Unwind_Resume>
 844d16a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844d16d:	89 04 24             	mov    %eax,(%esp)
 844d170:	e8 5d f7 1c 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 844d175:	83 c4 20             	add    $0x20,%esp
 844d178:	5b                   	pop    %ebx
 844d179:	5e                   	pop    %esi
 844d17a:	5d                   	pop    %ebp
 844d17b:	c3                   	ret

```

```c
// DB_LoadEventLevelupSupport::makeRequest @ 0x844d0a6

/* DB_LoadEventLevelupSupport::makeRequest(int, int) */

void DB_LoadEventLevelupSupport::makeRequest(int param_1,int param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xc2a0);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0844d0f8 to 0844d14c has its CatchHandler @ 0844d14f */
  CStreamGuard::operator<<(pCVar2,0x350);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}

```

