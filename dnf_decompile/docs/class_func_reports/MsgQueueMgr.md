# MsgQueueMgr

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 7

---

## MsgQueueMgr

```asm
// === 08570e40 MsgQueueMgr::MsgQueueMgr  [0x08570e40-0x8570f41] ===
 8570e40:	55                   	push   %ebp
 8570e41:	89 e5                	mov    %esp,%ebp
 8570e43:	57                   	push   %edi
 8570e44:	56                   	push   %esi
 8570e45:	53                   	push   %ebx
 8570e46:	83 ec 5c             	sub    $0x5c,%esp
 8570e49:	8b 45 08             	mov    0x8(%ebp),%eax
 8570e4c:	89 c3                	mov    %eax,%ebx
 8570e4e:	be 05 00 00 00       	mov    $0x5,%esi
 8570e53:	eb 0e                	jmp    8570e63 <_ZN11MsgQueueMgrC1Ev+0x23>
 8570e55:	89 1c 24             	mov    %ebx,(%esp)
 8570e58:	e8 b5 a5 b5 ff       	call   80cb412 <_ZN5MutexC1Ev>
 8570e5d:	83 c3 18             	add    $0x18,%ebx
 8570e60:	83 ee 01             	sub    $0x1,%esi
 8570e63:	83 fe ff             	cmp    $0xffffffff,%esi
 8570e66:	0f 95 c0             	setne  %al
 8570e69:	84 c0                	test   %al,%al
 8570e6b:	75 e8                	jne    8570e55 <_ZN11MsgQueueMgrC1Ev+0x15>
 8570e6d:	8b 45 08             	mov    0x8(%ebp),%eax
 8570e70:	8d b0 90 00 00 00    	lea    0x90(%eax),%esi
 8570e76:	89 f7                	mov    %esi,%edi
 8570e78:	bb 05 00 00 00       	mov    $0x5,%ebx
 8570e7d:	eb 44                	jmp    8570ec3 <_ZN11MsgQueueMgrC1Ev+0x83>
 8570e7f:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8570e82:	89 04 24             	mov    %eax,(%esp)
 8570e85:	e8 3e 04 00 00       	call   85712c8 <_ZNSt5dequeIP6StreamSaIS1_EEC1Ev>
 8570e8a:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8570e8d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8570e91:	89 3c 24             	mov    %edi,(%esp)
 8570e94:	e8 d1 04 00 00       	call   857136a <_ZNSt5queueIP6StreamSt5dequeIS1_SaIS1_EEEC1EOS4_>
 8570e99:	eb 17                	jmp    8570eb2 <_ZN11MsgQueueMgrC1Ev+0x72>
 8570e9b:	89 d7                	mov    %edx,%edi
 8570e9d:	89 45 b0             	mov    %eax,-0x50(%ebp)
 8570ea0:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8570ea3:	89 04 24             	mov    %eax,(%esp)
 8570ea6:	e8 31 04 00 00       	call   85712dc <_ZNSt5dequeIP6StreamSaIS1_EED1Ev>
 8570eab:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8570eae:	89 fa                	mov    %edi,%edx
 8570eb0:	eb 1d                	jmp    8570ecf <_ZN11MsgQueueMgrC1Ev+0x8f>
 8570eb2:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8570eb5:	89 04 24             	mov    %eax,(%esp)
 8570eb8:	e8 1f 04 00 00       	call   85712dc <_ZNSt5dequeIP6StreamSaIS1_EED1Ev>
 8570ebd:	83 c7 28             	add    $0x28,%edi
 8570ec0:	83 eb 01             	sub    $0x1,%ebx
 8570ec3:	83 fb ff             	cmp    $0xffffffff,%ebx
 8570ec6:	0f 95 c0             	setne  %al
 8570ec9:	84 c0                	test   %al,%al
 8570ecb:	75 b2                	jne    8570e7f <_ZN11MsgQueueMgrC1Ev+0x3f>
 8570ecd:	eb 42                	jmp    8570f11 <_ZN11MsgQueueMgrC1Ev+0xd1>
 8570ecf:	89 d7                	mov    %edx,%edi
 8570ed1:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 8570ed4:	85 f6                	test   %esi,%esi
 8570ed6:	74 27                	je     8570eff <_ZN11MsgQueueMgrC1Ev+0xbf>
 8570ed8:	b8 05 00 00 00       	mov    $0x5,%eax
 8570edd:	29 d8                	sub    %ebx,%eax
 8570edf:	89 c2                	mov    %eax,%edx
 8570ee1:	89 d0                	mov    %edx,%eax
 8570ee3:	c1 e0 02             	shl    $0x2,%eax
 8570ee6:	01 d0                	add    %edx,%eax
 8570ee8:	c1 e0 03             	shl    $0x3,%eax
 8570eeb:	8d 1c 06             	lea    (%esi,%eax,1),%ebx
 8570eee:	39 f3                	cmp    %esi,%ebx
 8570ef0:	74 0d                	je     8570eff <_ZN11MsgQueueMgrC1Ev+0xbf>
 8570ef2:	83 eb 28             	sub    $0x28,%ebx
 8570ef5:	89 1c 24             	mov    %ebx,(%esp)
 8570ef8:	e8 b7 03 00 00       	call   85712b4 <_ZNSt5queueIP6StreamSt5dequeIS1_SaIS1_EEED1Ev>
 8570efd:	eb ef                	jmp    8570eee <_ZN11MsgQueueMgrC1Ev+0xae>
 8570eff:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8570f02:	89 fa                	mov    %edi,%edx
 8570f04:	89 d6                	mov    %edx,%esi
 8570f06:	89 c7                	mov    %eax,%edi
 8570f08:	8b 45 08             	mov    0x8(%ebp),%eax
 8570f0b:	85 c0                	test   %eax,%eax
 8570f0d:	74 27                	je     8570f36 <_ZN11MsgQueueMgrC1Ev+0xf6>
 8570f0f:	eb 08                	jmp    8570f19 <_ZN11MsgQueueMgrC1Ev+0xd9>
 8570f11:	83 c4 5c             	add    $0x5c,%esp
 8570f14:	5b                   	pop    %ebx
 8570f15:	5e                   	pop    %esi
 8570f16:	5f                   	pop    %edi
 8570f17:	5d                   	pop    %ebp
 8570f18:	c3                   	ret
 8570f19:	8b 45 08             	mov    0x8(%ebp),%eax
 8570f1c:	8d 98 90 00 00 00    	lea    0x90(%eax),%ebx
 8570f22:	8b 45 08             	mov    0x8(%ebp),%eax
 8570f25:	39 c3                	cmp    %eax,%ebx
 8570f27:	74 0d                	je     8570f36 <_ZN11MsgQueueMgrC1Ev+0xf6>
 8570f29:	83 eb 18             	sub    $0x18,%ebx
 8570f2c:	89 1c 24             	mov    %ebx,(%esp)
 8570f2f:	e8 fa a4 b5 ff       	call   80cb42e <_ZN5MutexD1Ev>
 8570f34:	eb ec                	jmp    8570f22 <_ZN11MsgQueueMgrC1Ev+0xe2>
 8570f36:	89 f8                	mov    %edi,%eax
 8570f38:	89 f2                	mov    %esi,%edx
 8570f3a:	89 04 24             	mov    %eax,(%esp)
 8570f3d:	e8 0e 28 57 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// MsgQueueMgr::MsgQueueMgr @ 0x8570e40

/* MsgQueueMgr::MsgQueueMgr() */

void __thiscall MsgQueueMgr::MsgQueueMgr(MsgQueueMgr *this)

{
  MsgQueueMgr *this_00;
  int iVar1;
  queue<Stream*,std::deque<Stream*,std::allocator<Stream*>>> *this_01;
  deque<Stream*,std::allocator<Stream*>> local_44 [52];
  
  this_00 = this;
  for (iVar1 = 5; iVar1 != -1; iVar1 = iVar1 + -1) {
    Mutex::Mutex((Mutex *)this_00);
    this_00 = this_00 + 0x18;
  }
  this_01 = (queue<Stream*,std::deque<Stream*,std::allocator<Stream*>>> *)(this + 0x90);
  for (iVar1 = 5; iVar1 != -1; iVar1 = iVar1 + -1) {
                    /* try { // try from 08570e85 to 08570e89 has its CatchHandler @ 08570ecf */
    std::deque<Stream*,std::allocator<Stream*>>::deque(local_44);
                    /* try { // try from 08570e94 to 08570e98 has its CatchHandler @ 08570e9b */
    std::queue<Stream*,std::deque<Stream*,std::allocator<Stream*>>>::queue
              (this_01,(deque *)local_44);
                    /* try { // try from 08570eb8 to 08570ebc has its CatchHandler @ 08570ecf */
    std::deque<Stream*,std::allocator<Stream*>>::~deque(local_44);
    this_01 = this_01 + 0x28;
  }
  return;
}

```

---

## empty

```asm
// === 08571170 MsgQueueMgr::empty  [0x08571170-0x85711e3] ===
 8571170:	55                   	push   %ebp
 8571171:	89 e5                	mov    %esp,%ebp
 8571173:	56                   	push   %esi
 8571174:	53                   	push   %ebx
 8571175:	83 ec 20             	sub    $0x20,%esp
 8571178:	8b 55 0c             	mov    0xc(%ebp),%edx
 857117b:	89 d0                	mov    %edx,%eax
 857117d:	01 c0                	add    %eax,%eax
 857117f:	01 d0                	add    %edx,%eax
 8571181:	c1 e0 03             	shl    $0x3,%eax
 8571184:	03 45 08             	add    0x8(%ebp),%eax
 8571187:	89 44 24 04          	mov    %eax,0x4(%esp)
 857118b:	8d 45 f4             	lea    -0xc(%ebp),%eax
 857118e:	89 04 24             	mov    %eax,(%esp)
 8571191:	e8 b6 42 b9 ff       	call   810544c <_ZN5GuardI5MutexEC1EPS0_>
 8571196:	8b 55 0c             	mov    0xc(%ebp),%edx
 8571199:	89 d0                	mov    %edx,%eax
 857119b:	c1 e0 02             	shl    $0x2,%eax
 857119e:	01 d0                	add    %edx,%eax
 85711a0:	c1 e0 03             	shl    $0x3,%eax
 85711a3:	05 90 00 00 00       	add    $0x90,%eax
 85711a8:	03 45 08             	add    0x8(%ebp),%eax
 85711ab:	89 04 24             	mov    %eax,(%esp)
 85711ae:	e8 f3 01 00 00       	call   85713a6 <_ZNKSt5queueIP6StreamSt5dequeIS1_SaIS1_EEE5emptyEv>
 85711b3:	89 c3                	mov    %eax,%ebx
 85711b5:	8d 45 f4             	lea    -0xc(%ebp),%eax
 85711b8:	89 04 24             	mov    %eax,(%esp)
 85711bb:	e8 a8 42 b9 ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 85711c0:	89 d8                	mov    %ebx,%eax
 85711c2:	83 c4 20             	add    $0x20,%esp
 85711c5:	5b                   	pop    %ebx
 85711c6:	5e                   	pop    %esi
 85711c7:	5d                   	pop    %ebp
 85711c8:	c3                   	ret
 85711c9:	89 d3                	mov    %edx,%ebx
 85711cb:	89 c6                	mov    %eax,%esi
 85711cd:	8d 45 f4             	lea    -0xc(%ebp),%eax
 85711d0:	89 04 24             	mov    %eax,(%esp)
 85711d3:	e8 90 42 b9 ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 85711d8:	89 f0                	mov    %esi,%eax
 85711da:	89 da                	mov    %ebx,%edx
 85711dc:	89 04 24             	mov    %eax,(%esp)
 85711df:	e8 6c 25 57 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// MsgQueueMgr::empty @ 0x8571170

/* MsgQueueMgr::empty(MsgQueueMgr::QUEUE_IDX) */

undefined4 __thiscall MsgQueueMgr::empty(MsgQueueMgr *this,int param_2)

{
  undefined4 uVar1;
  Guard<Mutex> local_10 [4];
  
  Guard<Mutex>::Guard(local_10,(Mutex *)(this + param_2 * 0x18));
                    /* try { // try from 085711ae to 085711b2 has its CatchHandler @ 085711c9 */
  uVar1 = std::queue<Stream*,std::deque<Stream*,std::allocator<Stream*>>>::empty
                    ((queue<Stream*,std::deque<Stream*,std::allocator<Stream*>>> *)
                     (this + param_2 * 0x28 + 0x90));
  Guard<Mutex>::~Guard(local_10);
  return uVar1;
}

```

---

## get

```asm
// === 085710ae MsgQueueMgr::get  [0x085710ae-0x857116f] ===
 85710ae:	55                   	push   %ebp
 85710af:	89 e5                	mov    %esp,%ebp
 85710b1:	56                   	push   %esi
 85710b2:	53                   	push   %ebx
 85710b3:	83 ec 20             	sub    $0x20,%esp
 85710b6:	8b 55 0c             	mov    0xc(%ebp),%edx
 85710b9:	89 d0                	mov    %edx,%eax
 85710bb:	01 c0                	add    %eax,%eax
 85710bd:	01 d0                	add    %edx,%eax
 85710bf:	c1 e0 03             	shl    $0x3,%eax
 85710c2:	03 45 08             	add    0x8(%ebp),%eax
 85710c5:	89 44 24 04          	mov    %eax,0x4(%esp)
 85710c9:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85710cc:	89 04 24             	mov    %eax,(%esp)
 85710cf:	e8 78 43 b9 ff       	call   810544c <_ZN5GuardI5MutexEC1EPS0_>
 85710d4:	8b 55 0c             	mov    0xc(%ebp),%edx
 85710d7:	89 d0                	mov    %edx,%eax
 85710d9:	c1 e0 02             	shl    $0x2,%eax
 85710dc:	01 d0                	add    %edx,%eax
 85710de:	c1 e0 03             	shl    $0x3,%eax
 85710e1:	05 90 00 00 00       	add    $0x90,%eax
 85710e6:	03 45 08             	add    0x8(%ebp),%eax
 85710e9:	89 04 24             	mov    %eax,(%esp)
 85710ec:	e8 b5 02 00 00       	call   85713a6 <_ZNKSt5queueIP6StreamSt5dequeIS1_SaIS1_EEE5emptyEv>
 85710f1:	84 c0                	test   %al,%al
 85710f3:	74 07                	je     85710fc <_ZN11MsgQueueMgr3getENS_9QUEUE_IDXE+0x4e>
 85710f5:	bb 00 00 00 00       	mov    $0x0,%ebx
 85710fa:	eb 5f                	jmp    857115b <_ZN11MsgQueueMgr3getENS_9QUEUE_IDXE+0xad>
 85710fc:	8b 55 0c             	mov    0xc(%ebp),%edx
 85710ff:	89 d0                	mov    %edx,%eax
 8571101:	c1 e0 02             	shl    $0x2,%eax
 8571104:	01 d0                	add    %edx,%eax
 8571106:	c1 e0 03             	shl    $0x3,%eax
 8571109:	05 90 00 00 00       	add    $0x90,%eax
 857110e:	03 45 08             	add    0x8(%ebp),%eax
 8571111:	89 04 24             	mov    %eax,(%esp)
 8571114:	e8 a1 02 00 00       	call   85713ba <_ZNSt5queueIP6StreamSt5dequeIS1_SaIS1_EEE5frontEv>
 8571119:	8b 00                	mov    (%eax),%eax
 857111b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 857111e:	8b 55 0c             	mov    0xc(%ebp),%edx
 8571121:	89 d0                	mov    %edx,%eax
 8571123:	c1 e0 02             	shl    $0x2,%eax
 8571126:	01 d0                	add    %edx,%eax
 8571128:	c1 e0 03             	shl    $0x3,%eax
 857112b:	05 90 00 00 00       	add    $0x90,%eax
 8571130:	03 45 08             	add    0x8(%ebp),%eax
 8571133:	89 04 24             	mov    %eax,(%esp)
 8571136:	e8 93 02 00 00       	call   85713ce <_ZNSt5queueIP6StreamSt5dequeIS1_SaIS1_EEE3popEv>
 857113b:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 857113e:	eb 1b                	jmp    857115b <_ZN11MsgQueueMgr3getENS_9QUEUE_IDXE+0xad>
 8571140:	89 d3                	mov    %edx,%ebx
 8571142:	89 c6                	mov    %eax,%esi
 8571144:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8571147:	89 04 24             	mov    %eax,(%esp)
 857114a:	e8 19 43 b9 ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 857114f:	89 f0                	mov    %esi,%eax
 8571151:	89 da                	mov    %ebx,%edx
 8571153:	89 04 24             	mov    %eax,(%esp)
 8571156:	e8 f5 25 57 00       	call   8ae3750 <_Unwind_Resume>
 857115b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 857115e:	89 04 24             	mov    %eax,(%esp)
 8571161:	e8 02 43 b9 ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 8571166:	89 d8                	mov    %ebx,%eax
 8571168:	83 c4 20             	add    $0x20,%esp
 857116b:	5b                   	pop    %ebx
 857116c:	5e                   	pop    %esi
 857116d:	5d                   	pop    %ebp
 857116e:	c3                   	ret
 857116f:	90                   	nop

```

```c
// MsgQueueMgr::get @ 0x85710ae

/* MsgQueueMgr::get(MsgQueueMgr::QUEUE_IDX) */

undefined4 __thiscall MsgQueueMgr::get(MsgQueueMgr *this,int param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  Guard<Mutex> local_14 [4];
  undefined4 local_10;
  
  Guard<Mutex>::Guard(local_14,(Mutex *)(this + param_2 * 0x18));
                    /* try { // try from 085710ec to 0857113a has its CatchHandler @ 08571140 */
  cVar1 = std::queue<Stream*,std::deque<Stream*,std::allocator<Stream*>>>::empty
                    ((queue<Stream*,std::deque<Stream*,std::allocator<Stream*>>> *)
                     (this + param_2 * 0x28 + 0x90));
  if (cVar1 == '\0') {
    puVar2 = (undefined4 *)std::queue<Stream*,std::deque<Stream*,std::allocator<Stream*>>>::front();
    local_10 = *puVar2;
    std::queue<Stream*,std::deque<Stream*,std::allocator<Stream*>>>::pop
              ((queue<Stream*,std::deque<Stream*,std::allocator<Stream*>>> *)
               (this + param_2 * 0x28 + 0x90));
    uVar3 = local_10;
  }
  else {
    uVar3 = 0;
  }
  Guard<Mutex>::~Guard(local_14);
  return uVar3;
}

```

---

## put

```asm
// === 08570fde MsgQueueMgr::put  [0x08570fde-0x8571007] ===
 8570fde:	55                   	push   %ebp
 8570fdf:	89 e5                	mov    %esp,%ebp
 8570fe1:	83 ec 18             	sub    $0x18,%esp
 8570fe4:	8b 45 10             	mov    0x10(%ebp),%eax
 8570fe7:	89 04 24             	mov    %eax,(%esp)
 8570fea:	e8 0b 00 b9 ff       	call   8100ffa <_ZN12CStreamGuard3GetEv>
 8570fef:	89 44 24 08          	mov    %eax,0x8(%esp)
 8570ff3:	8b 45 0c             	mov    0xc(%ebp),%eax
 8570ff6:	89 44 24 04          	mov    %eax,0x4(%esp)
 8570ffa:	8b 45 08             	mov    0x8(%ebp),%eax
 8570ffd:	89 04 24             	mov    %eax,(%esp)
 8571000:	e8 03 00 00 00       	call   8571008 <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXEP6Stream>
 8571005:	c9                   	leave
 8571006:	c3                   	ret
 8571007:	90                   	nop

```

```c
// MsgQueueMgr::put @ 0x8570fde

/* MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&) */

void __thiscall MsgQueueMgr::put(MsgQueueMgr *this,undefined4 param_2,CStreamGuard *param_3)

{
  undefined4 uVar1;
  
  uVar1 = CStreamGuard::Get(param_3);
  put(this,param_2,uVar1);
  return;
}

```

---

## put_08571008

```asm
// === 08571008 MsgQueueMgr::put  [0x08571008-0x85710ad] ===
 8571008:	55                   	push   %ebp
 8571009:	89 e5                	mov    %esp,%ebp
 857100b:	56                   	push   %esi
 857100c:	53                   	push   %ebx
 857100d:	83 ec 20             	sub    $0x20,%esp
 8571010:	8b 45 10             	mov    0x10(%ebp),%eax
 8571013:	85 c0                	test   %eax,%eax
 8571015:	75 0a                	jne    8571021 <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXEP6Stream+0x19>
 8571017:	bb 00 00 00 00       	mov    $0x0,%ebx
 857101c:	e9 84 00 00 00       	jmp    85710a5 <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXEP6Stream+0x9d>
 8571021:	8b 45 10             	mov    0x10(%ebp),%eax
 8571024:	89 04 24             	mov    %eax,(%esp)
 8571027:	e8 84 b8 0a 00       	call   861c8b0 <_ZN6Stream10get_bufferEv>
 857102c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 857102f:	8b 45 10             	mov    0x10(%ebp),%eax
 8571032:	c6 40 24 00          	movb   $0x0,0x24(%eax)
 8571036:	8b 55 0c             	mov    0xc(%ebp),%edx
 8571039:	89 d0                	mov    %edx,%eax
 857103b:	01 c0                	add    %eax,%eax
 857103d:	01 d0                	add    %edx,%eax
 857103f:	c1 e0 03             	shl    $0x3,%eax
 8571042:	03 45 08             	add    0x8(%ebp),%eax
 8571045:	89 44 24 04          	mov    %eax,0x4(%esp)
 8571049:	8d 45 f0             	lea    -0x10(%ebp),%eax
 857104c:	89 04 24             	mov    %eax,(%esp)
 857104f:	e8 f8 43 b9 ff       	call   810544c <_ZN5GuardI5MutexEC1EPS0_>
 8571054:	8b 55 0c             	mov    0xc(%ebp),%edx
 8571057:	89 d0                	mov    %edx,%eax
 8571059:	c1 e0 02             	shl    $0x2,%eax
 857105c:	01 d0                	add    %edx,%eax
 857105e:	c1 e0 03             	shl    $0x3,%eax
 8571061:	05 90 00 00 00       	add    $0x90,%eax
 8571066:	03 45 08             	add    0x8(%ebp),%eax
 8571069:	8d 55 10             	lea    0x10(%ebp),%edx
 857106c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8571070:	89 04 24             	mov    %eax,(%esp)
 8571073:	e8 14 03 00 00       	call   857138c <_ZNSt5queueIP6StreamSt5dequeIS1_SaIS1_EEE4pushERKS1_>
 8571078:	bb 01 00 00 00       	mov    $0x1,%ebx
 857107d:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8571080:	89 04 24             	mov    %eax,(%esp)
 8571083:	e8 e0 43 b9 ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 8571088:	eb 1b                	jmp    85710a5 <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXEP6Stream+0x9d>
 857108a:	89 d3                	mov    %edx,%ebx
 857108c:	89 c6                	mov    %eax,%esi
 857108e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8571091:	89 04 24             	mov    %eax,(%esp)
 8571094:	e8 cf 43 b9 ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 8571099:	89 f0                	mov    %esi,%eax
 857109b:	89 da                	mov    %ebx,%edx
 857109d:	89 04 24             	mov    %eax,(%esp)
 85710a0:	e8 ab 26 57 00       	call   8ae3750 <_Unwind_Resume>
 85710a5:	89 d8                	mov    %ebx,%eax
 85710a7:	83 c4 20             	add    $0x20,%esp
 85710aa:	5b                   	pop    %ebx
 85710ab:	5e                   	pop    %esi
 85710ac:	5d                   	pop    %ebp
 85710ad:	c3                   	ret

```

```c
// MsgQueueMgr::put @ 0x8571008

/* MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, Stream*) */

bool __thiscall MsgQueueMgr::put(MsgQueueMgr *this,int param_2,Stream *param_3)

{
  bool bVar1;
  Guard<Mutex> local_14 [4];
  undefined4 local_10;
  
  bVar1 = param_3 != (Stream *)0x0;
  if (bVar1) {
    local_10 = Stream::get_buffer(param_3);
    param_3[0x24] = (Stream)0x0;
    Guard<Mutex>::Guard(local_14,(Mutex *)(this + param_2 * 0x18));
                    /* try { // try from 08571073 to 08571077 has its CatchHandler @ 0857108a */
    std::queue<Stream*,std::deque<Stream*,std::allocator<Stream*>>>::push
              ((queue<Stream*,std::deque<Stream*,std::allocator<Stream*>>> *)
               (this + param_2 * 0x28 + 0x90),&param_3);
    Guard<Mutex>::~Guard(local_14);
  }
  return bVar1;
}

```

---

## remain

```asm
// === 085711e4 MsgQueueMgr::remain  [0x085711e4-0x8571257] ===
 85711e4:	55                   	push   %ebp
 85711e5:	89 e5                	mov    %esp,%ebp
 85711e7:	56                   	push   %esi
 85711e8:	53                   	push   %ebx
 85711e9:	83 ec 20             	sub    $0x20,%esp
 85711ec:	8b 55 0c             	mov    0xc(%ebp),%edx
 85711ef:	89 d0                	mov    %edx,%eax
 85711f1:	01 c0                	add    %eax,%eax
 85711f3:	01 d0                	add    %edx,%eax
 85711f5:	c1 e0 03             	shl    $0x3,%eax
 85711f8:	03 45 08             	add    0x8(%ebp),%eax
 85711fb:	89 44 24 04          	mov    %eax,0x4(%esp)
 85711ff:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8571202:	89 04 24             	mov    %eax,(%esp)
 8571205:	e8 42 42 b9 ff       	call   810544c <_ZN5GuardI5MutexEC1EPS0_>
 857120a:	8b 55 0c             	mov    0xc(%ebp),%edx
 857120d:	89 d0                	mov    %edx,%eax
 857120f:	c1 e0 02             	shl    $0x2,%eax
 8571212:	01 d0                	add    %edx,%eax
 8571214:	c1 e0 03             	shl    $0x3,%eax
 8571217:	05 90 00 00 00       	add    $0x90,%eax
 857121c:	03 45 08             	add    0x8(%ebp),%eax
 857121f:	89 04 24             	mov    %eax,(%esp)
 8571222:	e8 bb 01 00 00       	call   85713e2 <_ZNKSt5queueIP6StreamSt5dequeIS1_SaIS1_EEE4sizeEv>
 8571227:	89 c3                	mov    %eax,%ebx
 8571229:	8d 45 f4             	lea    -0xc(%ebp),%eax
 857122c:	89 04 24             	mov    %eax,(%esp)
 857122f:	e8 34 42 b9 ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 8571234:	89 d8                	mov    %ebx,%eax
 8571236:	83 c4 20             	add    $0x20,%esp
 8571239:	5b                   	pop    %ebx
 857123a:	5e                   	pop    %esi
 857123b:	5d                   	pop    %ebp
 857123c:	c3                   	ret
 857123d:	89 d3                	mov    %edx,%ebx
 857123f:	89 c6                	mov    %eax,%esi
 8571241:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8571244:	89 04 24             	mov    %eax,(%esp)
 8571247:	e8 1c 42 b9 ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 857124c:	89 f0                	mov    %esi,%eax
 857124e:	89 da                	mov    %ebx,%edx
 8571250:	89 04 24             	mov    %eax,(%esp)
 8571253:	e8 f8 24 57 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// MsgQueueMgr::remain @ 0x85711e4

/* MsgQueueMgr::remain(MsgQueueMgr::QUEUE_IDX) */

undefined4 __thiscall MsgQueueMgr::remain(MsgQueueMgr *this,int param_2)

{
  undefined4 uVar1;
  Guard<Mutex> local_10 [4];
  
  Guard<Mutex>::Guard(local_10,(Mutex *)(this + param_2 * 0x18));
                    /* try { // try from 08571222 to 08571226 has its CatchHandler @ 0857123d */
  uVar1 = std::queue<Stream*,std::deque<Stream*,std::allocator<Stream*>>>::size
                    ((queue<Stream*,std::deque<Stream*,std::allocator<Stream*>>> *)
                     (this + param_2 * 0x28 + 0x90));
  Guard<Mutex>::~Guard(local_10);
  return uVar1;
}

```

---

## ~MsgQueueMgr

```asm
// === 08570f42 MsgQueueMgr::~MsgQueueMgr  [0x08570f42-0x8570fdd] ===
 8570f42:	55                   	push   %ebp
 8570f43:	89 e5                	mov    %esp,%ebp
 8570f45:	57                   	push   %edi
 8570f46:	56                   	push   %esi
 8570f47:	53                   	push   %ebx
 8570f48:	83 ec 1c             	sub    $0x1c,%esp
 8570f4b:	8b 45 08             	mov    0x8(%ebp),%eax
 8570f4e:	05 90 00 00 00       	add    $0x90,%eax
 8570f53:	85 c0                	test   %eax,%eax
 8570f55:	74 5b                	je     8570fb2 <_ZN11MsgQueueMgrD1Ev+0x70>
 8570f57:	8b 45 08             	mov    0x8(%ebp),%eax
 8570f5a:	05 90 00 00 00       	add    $0x90,%eax
 8570f5f:	8d 98 f0 00 00 00    	lea    0xf0(%eax),%ebx
 8570f65:	8b 45 08             	mov    0x8(%ebp),%eax
 8570f68:	05 90 00 00 00       	add    $0x90,%eax
 8570f6d:	39 c3                	cmp    %eax,%ebx
 8570f6f:	74 41                	je     8570fb2 <_ZN11MsgQueueMgrD1Ev+0x70>
 8570f71:	83 eb 28             	sub    $0x28,%ebx
 8570f74:	89 1c 24             	mov    %ebx,(%esp)
 8570f77:	e8 38 03 00 00       	call   85712b4 <_ZNSt5queueIP6StreamSt5dequeIS1_SaIS1_EEED1Ev>
 8570f7c:	eb e7                	jmp    8570f65 <_ZN11MsgQueueMgrD1Ev+0x23>
 8570f7e:	89 d6                	mov    %edx,%esi
 8570f80:	89 c7                	mov    %eax,%edi
 8570f82:	8b 45 08             	mov    0x8(%ebp),%eax
 8570f85:	85 c0                	test   %eax,%eax
 8570f87:	74 1d                	je     8570fa6 <_ZN11MsgQueueMgrD1Ev+0x64>
 8570f89:	8b 45 08             	mov    0x8(%ebp),%eax
 8570f8c:	8d 98 90 00 00 00    	lea    0x90(%eax),%ebx
 8570f92:	8b 45 08             	mov    0x8(%ebp),%eax
 8570f95:	39 c3                	cmp    %eax,%ebx
 8570f97:	74 0d                	je     8570fa6 <_ZN11MsgQueueMgrD1Ev+0x64>
 8570f99:	83 eb 18             	sub    $0x18,%ebx
 8570f9c:	89 1c 24             	mov    %ebx,(%esp)
 8570f9f:	e8 8a a4 b5 ff       	call   80cb42e <_ZN5MutexD1Ev>
 8570fa4:	eb ec                	jmp    8570f92 <_ZN11MsgQueueMgrD1Ev+0x50>
 8570fa6:	89 f8                	mov    %edi,%eax
 8570fa8:	89 f2                	mov    %esi,%edx
 8570faa:	89 04 24             	mov    %eax,(%esp)
 8570fad:	e8 9e 27 57 00       	call   8ae3750 <_Unwind_Resume>
 8570fb2:	8b 45 08             	mov    0x8(%ebp),%eax
 8570fb5:	85 c0                	test   %eax,%eax
 8570fb7:	74 1d                	je     8570fd6 <_ZN11MsgQueueMgrD1Ev+0x94>
 8570fb9:	8b 45 08             	mov    0x8(%ebp),%eax
 8570fbc:	8d 98 90 00 00 00    	lea    0x90(%eax),%ebx
 8570fc2:	8b 45 08             	mov    0x8(%ebp),%eax
 8570fc5:	39 c3                	cmp    %eax,%ebx
 8570fc7:	74 0d                	je     8570fd6 <_ZN11MsgQueueMgrD1Ev+0x94>
 8570fc9:	83 eb 18             	sub    $0x18,%ebx
 8570fcc:	89 1c 24             	mov    %ebx,(%esp)
 8570fcf:	e8 5a a4 b5 ff       	call   80cb42e <_ZN5MutexD1Ev>
 8570fd4:	eb ec                	jmp    8570fc2 <_ZN11MsgQueueMgrD1Ev+0x80>
 8570fd6:	83 c4 1c             	add    $0x1c,%esp
 8570fd9:	5b                   	pop    %ebx
 8570fda:	5e                   	pop    %esi
 8570fdb:	5f                   	pop    %edi
 8570fdc:	5d                   	pop    %ebp
 8570fdd:	c3                   	ret

```

```c
// MsgQueueMgr::~MsgQueueMgr @ 0x8570f42

/* MsgQueueMgr::~MsgQueueMgr() */

void __thiscall MsgQueueMgr::~MsgQueueMgr(MsgQueueMgr *this)

{
  queue<Stream*,std::deque<Stream*,std::allocator<Stream*>>> *this_00;
  Mutex *this_01;
  
  if (this != (MsgQueueMgr *)0xffffff70) {
    this_00 = (queue<Stream*,std::deque<Stream*,std::allocator<Stream*>>> *)(this + 0x180);
    while (this_00 != (queue<Stream*,std::deque<Stream*,std::allocator<Stream*>>> *)(this + 0x90)) {
      this_00 = this_00 + -0x28;
                    /* try { // try from 08570f77 to 08570f7b has its CatchHandler @ 08570f7e */
      std::queue<Stream*,std::deque<Stream*,std::allocator<Stream*>>>::~queue(this_00);
    }
  }
  if (this != (MsgQueueMgr *)0x0) {
    this_01 = (Mutex *)(this + 0x90);
    while (this_01 != (Mutex *)this) {
      this_01 = this_01 + -0x18;
      Mutex::~Mutex(this_01);
    }
  }
  return;
}

```

