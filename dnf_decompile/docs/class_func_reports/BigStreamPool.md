# BigStreamPool

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## Acquire

```asm
// === 08290262 BigStreamPool::Acquire  [0x08290262-0x8290303] ===
 8290262:	55                   	push   %ebp
 8290263:	89 e5                	mov    %esp,%ebp
 8290265:	56                   	push   %esi
 8290266:	53                   	push   %ebx
 8290267:	83 ec 20             	sub    $0x20,%esp
 829026a:	8b 45 08             	mov    0x8(%ebp),%eax
 829026d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8290271:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8290274:	89 04 24             	mov    %eax,(%esp)
 8290277:	e8 d0 51 e7 ff       	call   810544c <_ZN5GuardI5MutexEC1EPS0_>
 829027c:	8b 45 08             	mov    0x8(%ebp),%eax
 829027f:	8b 40 18             	mov    0x18(%eax),%eax
 8290282:	89 04 24             	mov    %eax,(%esp)
 8290285:	e8 d6 d8 01 00       	call   82adb60 <_ZN11DynamicPoolI9BigStreamE7AcquireEv>
 829028a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 829028d:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8290291:	75 07                	jne    829029a <_ZN13BigStreamPool7AcquireEPKci+0x38>
 8290293:	bb 00 00 00 00       	mov    $0x0,%ebx
 8290298:	eb 56                	jmp    82902f0 <_ZN13BigStreamPool7AcquireEPKci+0x8e>
 829029a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 829029d:	8b 55 0c             	mov    0xc(%ebp),%edx
 82902a0:	89 50 18             	mov    %edx,0x18(%eax)
 82902a3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82902a6:	8b 55 10             	mov    0x10(%ebp),%edx
 82902a9:	89 50 1c             	mov    %edx,0x1c(%eax)
 82902ac:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82902af:	c7 40 20 02 00 00 00 	movl   $0x2,0x20(%eax)
 82902b6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82902bd:	00 
 82902be:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82902c1:	89 04 24             	mov    %eax,(%esp)
 82902c4:	e8 fb bb 38 00       	call   861bec4 <_ZN6Stream14set_big_streamEb>
 82902c9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82902cc:	c6 40 24 01          	movb   $0x1,0x24(%eax)
 82902d0:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 82902d3:	eb 1b                	jmp    82902f0 <_ZN13BigStreamPool7AcquireEPKci+0x8e>
 82902d5:	89 d3                	mov    %edx,%ebx
 82902d7:	89 c6                	mov    %eax,%esi
 82902d9:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82902dc:	89 04 24             	mov    %eax,(%esp)
 82902df:	e8 84 51 e7 ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 82902e4:	89 f0                	mov    %esi,%eax
 82902e6:	89 da                	mov    %ebx,%edx
 82902e8:	89 04 24             	mov    %eax,(%esp)
 82902eb:	e8 60 34 85 00       	call   8ae3750 <_Unwind_Resume>
 82902f0:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82902f3:	89 04 24             	mov    %eax,(%esp)
 82902f6:	e8 6d 51 e7 ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 82902fb:	89 d8                	mov    %ebx,%eax
 82902fd:	83 c4 20             	add    $0x20,%esp
 8290300:	5b                   	pop    %ebx
 8290301:	5e                   	pop    %esi
 8290302:	5d                   	pop    %ebp
 8290303:	c3                   	ret

```

```c
// BigStreamPool::Acquire @ 0x8290262

/* BigStreamPool::Acquire(char const*, int) */

Stream * __thiscall BigStreamPool::Acquire(BigStreamPool *this,char *param_1,int param_2)

{
  Stream *pSVar1;
  Guard<Mutex> local_14 [4];
  Stream *local_10;
  
  Guard<Mutex>::Guard(local_14,(Mutex *)this);
                    /* try { // try from 08290285 to 082902c8 has its CatchHandler @ 082902d5 */
  local_10 = (Stream *)DynamicPool<BigStream>::Acquire(*(DynamicPool<BigStream> **)(this + 0x18));
  if (local_10 == (Stream *)0x0) {
    pSVar1 = (Stream *)0x0;
  }
  else {
    *(char **)(local_10 + 0x18) = param_1;
    *(int *)(local_10 + 0x1c) = param_2;
    *(undefined4 *)(local_10 + 0x20) = 2;
    Stream::set_big_stream(local_10,true);
    local_10[0x24] = (Stream)0x1;
    pSVar1 = local_10;
  }
  Guard<Mutex>::~Guard(local_14);
  return pSVar1;
}

```

---

## BigStreamPool

```asm
// === 08290150 BigStreamPool::BigStreamPool  [0x08290150-0x82901fb] ===
 8290150:	55                   	push   %ebp
 8290151:	89 e5                	mov    %esp,%ebp
 8290153:	57                   	push   %edi
 8290154:	56                   	push   %esi
 8290155:	53                   	push   %ebx
 8290156:	83 ec 2c             	sub    $0x2c,%esp
 8290159:	8b 45 08             	mov    0x8(%ebp),%eax
 829015c:	89 04 24             	mov    %eax,(%esp)
 829015f:	e8 ae b2 e3 ff       	call   80cb412 <_ZN5MutexC1Ev>
 8290164:	e8 18 c0 e3 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 8290169:	8b 80 a4 01 00 00    	mov    0x1a4(%eax),%eax
 829016f:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8290172:	c7 04 24 5c 00 00 00 	movl   $0x5c,(%esp)
 8290179:	e8 d2 42 49 00       	call   8724450 <_Znwj>
 829017e:	89 c3                	mov    %eax,%ebx
 8290180:	89 d8                	mov    %ebx,%eax
 8290182:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8290185:	89 54 24 04          	mov    %edx,0x4(%esp)
 8290189:	89 04 24             	mov    %eax,(%esp)
 829018c:	e8 9f d6 01 00       	call   82ad830 <_ZN11DynamicPoolI9BigStreamEC1Ei>
 8290191:	eb 12                	jmp    82901a5 <_ZN13BigStreamPoolC1Ev+0x55>
 8290193:	89 d6                	mov    %edx,%esi
 8290195:	89 c7                	mov    %eax,%edi
 8290197:	89 1c 24             	mov    %ebx,(%esp)
 829019a:	e8 51 43 49 00       	call   87244f0 <_ZdlPv>
 829019f:	89 f8                	mov    %edi,%eax
 82901a1:	89 f2                	mov    %esi,%edx
 82901a3:	eb 3c                	jmp    82901e1 <_ZN13BigStreamPoolC1Ev+0x91>
 82901a5:	89 da                	mov    %ebx,%edx
 82901a7:	8b 45 08             	mov    0x8(%ebp),%eax
 82901aa:	89 50 18             	mov    %edx,0x18(%eax)
 82901ad:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 82901b0:	0f b7 d0             	movzwl %ax,%edx
 82901b3:	8b 45 08             	mov    0x8(%ebp),%eax
 82901b6:	8b 40 18             	mov    0x18(%eax),%eax
 82901b9:	c7 44 24 08 64 00 00 	movl   $0x64,0x8(%esp)
 82901c0:	00 
 82901c1:	89 54 24 04          	mov    %edx,0x4(%esp)
 82901c5:	89 04 24             	mov    %eax,(%esp)
 82901c8:	e8 85 d7 01 00       	call   82ad952 <_ZN11DynamicPoolI9BigStreamE11SetPoolSizeEtt>
 82901cd:	8b 45 08             	mov    0x8(%ebp),%eax
 82901d0:	8b 40 18             	mov    0x18(%eax),%eax
 82901d3:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 82901d9:	83 c4 2c             	add    $0x2c,%esp
 82901dc:	5b                   	pop    %ebx
 82901dd:	5e                   	pop    %esi
 82901de:	5f                   	pop    %edi
 82901df:	5d                   	pop    %ebp
 82901e0:	c3                   	ret
 82901e1:	89 d3                	mov    %edx,%ebx
 82901e3:	89 c6                	mov    %eax,%esi
 82901e5:	8b 45 08             	mov    0x8(%ebp),%eax
 82901e8:	89 04 24             	mov    %eax,(%esp)
 82901eb:	e8 3e b2 e3 ff       	call   80cb42e <_ZN5MutexD1Ev>
 82901f0:	89 f0                	mov    %esi,%eax
 82901f2:	89 da                	mov    %ebx,%edx
 82901f4:	89 04 24             	mov    %eax,(%esp)
 82901f7:	e8 54 35 85 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// BigStreamPool::BigStreamPool @ 0x8290150

/* BigStreamPool::BigStreamPool() */

void __thiscall BigStreamPool::BigStreamPool(BigStreamPool *this)

{
  int iVar1;
  DynamicPool<BigStream> *this_00;
  
  Mutex::Mutex((Mutex *)this);
                    /* try { // try from 08290164 to 0829017d has its CatchHandler @ 082901e1 */
  iVar1 = G_CEnvironment();
  iVar1 = *(int *)(iVar1 + 0x1a4);
  this_00 = operator_new(0x5c);
                    /* try { // try from 0829018c to 08290190 has its CatchHandler @ 08290193 */
  DynamicPool<BigStream>::DynamicPool(this_00,iVar1);
  *(DynamicPool<BigStream> **)(this + 0x18) = this_00;
  DynamicPool<BigStream>::SetPoolSize(*(DynamicPool<BigStream> **)(this + 0x18),(ushort)iVar1,100);
  **(undefined4 **)(this + 0x18) = 0;
  return;
}

```

---

## Free

```asm
// === 08290304 BigStreamPool::Free  [0x08290304-0x82903df] ===
 8290304:	55                   	push   %ebp
 8290305:	89 e5                	mov    %esp,%ebp
 8290307:	56                   	push   %esi
 8290308:	53                   	push   %ebx
 8290309:	83 ec 30             	sub    $0x30,%esp
 829030c:	8b 45 0c             	mov    0xc(%ebp),%eax
 829030f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8290312:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8290316:	75 0a                	jne    8290322 <_ZN13BigStreamPool4FreeEP6Stream+0x1e>
 8290318:	bb 00 00 00 00       	mov    $0x0,%ebx
 829031d:	e9 b5 00 00 00       	jmp    82903d7 <_ZN13BigStreamPool4FreeEP6Stream+0xd3>
 8290322:	8b 45 08             	mov    0x8(%ebp),%eax
 8290325:	89 44 24 04          	mov    %eax,0x4(%esp)
 8290329:	8d 45 f0             	lea    -0x10(%ebp),%eax
 829032c:	89 04 24             	mov    %eax,(%esp)
 829032f:	e8 18 51 e7 ff       	call   810544c <_ZN5GuardI5MutexEC1EPS0_>
 8290334:	8b 45 08             	mov    0x8(%ebp),%eax
 8290337:	8b 40 18             	mov    0x18(%eax),%eax
 829033a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 829033d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8290341:	89 04 24             	mov    %eax,(%esp)
 8290344:	e8 5b da 01 00       	call   82adda4 <_ZN11DynamicPoolI9BigStreamE10IsValidPtrEPS0_>
 8290349:	83 f0 01             	xor    $0x1,%eax
 829034c:	84 c0                	test   %al,%al
 829034e:	74 3a                	je     829038a <_ZN13BigStreamPool4FreeEP6Stream+0x86>
 8290350:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8290353:	89 44 24 14          	mov    %eax,0x14(%esp)
 8290357:	c7 44 24 10 e8 62 c1 	movl   $0x8c162e8,0x10(%esp)
 829035e:	08 
 829035f:	c7 44 24 0c fc 02 00 	movl   $0x2fc,0xc(%esp)
 8290366:	00 
 8290367:	c7 44 24 08 c0 b8 c1 	movl   $0x8c1b8c0,0x8(%esp)
 829036e:	08 
 829036f:	c7 44 24 04 88 62 c1 	movl   $0x8c16288,0x4(%esp)
 8290376:	08 
 8290377:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 829037e:	e8 87 38 84 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8290383:	bb 00 00 00 00       	mov    $0x0,%ebx
 8290388:	eb 42                	jmp    82903cc <_ZN13BigStreamPool4FreeEP6Stream+0xc8>
 829038a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 829038d:	89 04 24             	mov    %eax,(%esp)
 8290390:	e8 f5 ba 38 00       	call   861be8a <_ZN6Stream5resetEv>
 8290395:	8b 45 08             	mov    0x8(%ebp),%eax
 8290398:	8b 40 18             	mov    0x18(%eax),%eax
 829039b:	8b 55 f4             	mov    -0xc(%ebp),%edx
 829039e:	89 54 24 04          	mov    %edx,0x4(%esp)
 82903a2:	89 04 24             	mov    %eax,(%esp)
 82903a5:	e8 62 da 01 00       	call   82ade0c <_ZN11DynamicPoolI9BigStreamE4FreeEPS0_>
 82903aa:	bb 01 00 00 00       	mov    $0x1,%ebx
 82903af:	eb 1b                	jmp    82903cc <_ZN13BigStreamPool4FreeEP6Stream+0xc8>
 82903b1:	89 d3                	mov    %edx,%ebx
 82903b3:	89 c6                	mov    %eax,%esi
 82903b5:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82903b8:	89 04 24             	mov    %eax,(%esp)
 82903bb:	e8 a8 50 e7 ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 82903c0:	89 f0                	mov    %esi,%eax
 82903c2:	89 da                	mov    %ebx,%edx
 82903c4:	89 04 24             	mov    %eax,(%esp)
 82903c7:	e8 84 33 85 00       	call   8ae3750 <_Unwind_Resume>
 82903cc:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82903cf:	89 04 24             	mov    %eax,(%esp)
 82903d2:	e8 91 50 e7 ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 82903d7:	89 d8                	mov    %ebx,%eax
 82903d9:	83 c4 30             	add    $0x30,%esp
 82903dc:	5b                   	pop    %ebx
 82903dd:	5e                   	pop    %esi
 82903de:	5d                   	pop    %ebp
 82903df:	c3                   	ret

```

```c
// BigStreamPool::Free @ 0x8290304

/* BigStreamPool::Free(Stream*) */

bool __thiscall BigStreamPool::Free(BigStreamPool *this,Stream *param_1)

{
  char cVar1;
  bool bVar2;
  Guard<Mutex> local_14 [4];
  Stream *local_10;
  
  local_10 = param_1;
  if (param_1 == (Stream *)0x0) {
    bVar2 = false;
  }
  else {
    Guard<Mutex>::Guard(local_14,(Mutex *)this);
                    /* try { // try from 08290344 to 082903a9 has its CatchHandler @ 082903b1 */
    cVar1 = DynamicPool<BigStream>::IsValidPtr
                      (*(DynamicPool<BigStream> **)(this + 0x18),(BigStream *)local_10);
    bVar2 = cVar1 == '\x01';
    if (bVar2) {
      Stream::reset(local_10);
      DynamicPool<BigStream>::Free(*(DynamicPool<BigStream> **)(this + 0x18),(BigStream *)local_10);
    }
    else {
      LogManager::logFormat
                (1,"App.cpp","bool BigStreamPool::Free(Stream*)",0x2fc,
                 "[BigStreamPool::Free] invalid ptr : %p",local_10);
    }
    Guard<Mutex>::~Guard(local_14);
  }
  return bVar2;
}

```

---

## Remain

```asm
// === 082903f6 BigStreamPool::Remain  [0x082903f6-0x829044f] ===
 82903f6:	55                   	push   %ebp
 82903f7:	89 e5                	mov    %esp,%ebp
 82903f9:	56                   	push   %esi
 82903fa:	53                   	push   %ebx
 82903fb:	83 ec 20             	sub    $0x20,%esp
 82903fe:	8b 45 08             	mov    0x8(%ebp),%eax
 8290401:	89 44 24 04          	mov    %eax,0x4(%esp)
 8290405:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8290408:	89 04 24             	mov    %eax,(%esp)
 829040b:	e8 3c 50 e7 ff       	call   810544c <_ZN5GuardI5MutexEC1EPS0_>
 8290410:	8b 45 08             	mov    0x8(%ebp),%eax
 8290413:	8b 40 18             	mov    0x18(%eax),%eax
 8290416:	89 04 24             	mov    %eax,(%esp)
 8290419:	e8 0a db 01 00       	call   82adf28 <_ZN11DynamicPoolI9BigStreamE6RemainEv>
 829041e:	89 c3                	mov    %eax,%ebx
 8290420:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8290423:	89 04 24             	mov    %eax,(%esp)
 8290426:	e8 3d 50 e7 ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 829042b:	89 d8                	mov    %ebx,%eax
 829042d:	83 c4 20             	add    $0x20,%esp
 8290430:	5b                   	pop    %ebx
 8290431:	5e                   	pop    %esi
 8290432:	5d                   	pop    %ebp
 8290433:	c3                   	ret
 8290434:	89 d3                	mov    %edx,%ebx
 8290436:	89 c6                	mov    %eax,%esi
 8290438:	8d 45 f4             	lea    -0xc(%ebp),%eax
 829043b:	89 04 24             	mov    %eax,(%esp)
 829043e:	e8 25 50 e7 ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 8290443:	89 f0                	mov    %esi,%eax
 8290445:	89 da                	mov    %ebx,%edx
 8290447:	89 04 24             	mov    %eax,(%esp)
 829044a:	e8 01 33 85 00       	call   8ae3750 <_Unwind_Resume>
 829044f:	90                   	nop

```

```c
// BigStreamPool::Remain @ 0x82903f6

/* BigStreamPool::Remain() */

undefined4 __thiscall BigStreamPool::Remain(BigStreamPool *this)

{
  undefined4 uVar1;
  Guard<Mutex> local_10 [4];
  
  Guard<Mutex>::Guard(local_10,(Mutex *)this);
                    /* try { // try from 08290419 to 0829041d has its CatchHandler @ 08290434 */
  uVar1 = DynamicPool<BigStream>::Remain(*(DynamicPool<BigStream> **)(this + 0x18));
  Guard<Mutex>::~Guard(local_10);
  return uVar1;
}

```

---

## Size

```asm
// === 082903e0 BigStreamPool::Size  [0x082903e0-0x82903f5] ===
 82903e0:	55                   	push   %ebp
 82903e1:	89 e5                	mov    %esp,%ebp
 82903e3:	83 ec 18             	sub    $0x18,%esp
 82903e6:	8b 45 08             	mov    0x8(%ebp),%eax
 82903e9:	8b 40 18             	mov    0x18(%eax),%eax
 82903ec:	89 04 24             	mov    %eax,(%esp)
 82903ef:	e8 28 db 01 00       	call   82adf1c <_ZN11DynamicPoolI9BigStreamE4SizeEv>
 82903f4:	c9                   	leave
 82903f5:	c3                   	ret

```

```c
// BigStreamPool::Size @ 0x82903e0

/* BigStreamPool::Size() */

void __thiscall BigStreamPool::Size(BigStreamPool *this)

{
  DynamicPool<BigStream>::Size(*(DynamicPool<BigStream> **)(this + 0x18));
  return;
}

```

---

## ~BigStreamPool

```asm
// === 082901fc BigStreamPool::~BigStreamPool  [0x082901fc-0x8290261] ===
 82901fc:	55                   	push   %ebp
 82901fd:	89 e5                	mov    %esp,%ebp
 82901ff:	56                   	push   %esi
 8290200:	53                   	push   %ebx
 8290201:	83 ec 10             	sub    $0x10,%esp
 8290204:	8b 45 08             	mov    0x8(%ebp),%eax
 8290207:	8b 40 18             	mov    0x18(%eax),%eax
 829020a:	85 c0                	test   %eax,%eax
 829020c:	74 41                	je     829024f <_ZN13BigStreamPoolD1Ev+0x53>
 829020e:	8b 45 08             	mov    0x8(%ebp),%eax
 8290211:	8b 58 18             	mov    0x18(%eax),%ebx
 8290214:	85 db                	test   %ebx,%ebx
 8290216:	74 10                	je     8290228 <_ZN13BigStreamPoolD1Ev+0x2c>
 8290218:	89 1c 24             	mov    %ebx,(%esp)
 829021b:	e8 fa d7 01 00       	call   82ada1a <_ZN11DynamicPoolI9BigStreamED1Ev>
 8290220:	89 1c 24             	mov    %ebx,(%esp)
 8290223:	e8 c8 42 49 00       	call   87244f0 <_ZdlPv>
 8290228:	8b 45 08             	mov    0x8(%ebp),%eax
 829022b:	c7 40 18 00 00 00 00 	movl   $0x0,0x18(%eax)
 8290232:	eb 1b                	jmp    829024f <_ZN13BigStreamPoolD1Ev+0x53>
 8290234:	89 d3                	mov    %edx,%ebx
 8290236:	89 c6                	mov    %eax,%esi
 8290238:	8b 45 08             	mov    0x8(%ebp),%eax
 829023b:	89 04 24             	mov    %eax,(%esp)
 829023e:	e8 eb b1 e3 ff       	call   80cb42e <_ZN5MutexD1Ev>
 8290243:	89 f0                	mov    %esi,%eax
 8290245:	89 da                	mov    %ebx,%edx
 8290247:	89 04 24             	mov    %eax,(%esp)
 829024a:	e8 01 35 85 00       	call   8ae3750 <_Unwind_Resume>
 829024f:	8b 45 08             	mov    0x8(%ebp),%eax
 8290252:	89 04 24             	mov    %eax,(%esp)
 8290255:	e8 d4 b1 e3 ff       	call   80cb42e <_ZN5MutexD1Ev>
 829025a:	83 c4 10             	add    $0x10,%esp
 829025d:	5b                   	pop    %ebx
 829025e:	5e                   	pop    %esi
 829025f:	5d                   	pop    %ebp
 8290260:	c3                   	ret
 8290261:	90                   	nop

```

```c
// BigStreamPool::~BigStreamPool @ 0x82901fc

/* BigStreamPool::~BigStreamPool() */

void __thiscall BigStreamPool::~BigStreamPool(BigStreamPool *this)

{
  DynamicPool<BigStream> *this_00;
  
  if (*(int *)(this + 0x18) != 0) {
    this_00 = *(DynamicPool<BigStream> **)(this + 0x18);
    if (this_00 != (DynamicPool<BigStream> *)0x0) {
                    /* try { // try from 0829021b to 0829021f has its CatchHandler @ 08290234 */
      DynamicPool<BigStream>::~DynamicPool(this_00);
      operator_delete(this_00);
    }
    *(undefined4 *)(this + 0x18) = 0;
  }
  Mutex::~Mutex((Mutex *)this);
  return;
}

```

