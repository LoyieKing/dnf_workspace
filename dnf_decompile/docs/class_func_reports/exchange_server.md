# exchange_server

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 8

---

## AcquireCharacterMemory

```asm
// === 0848f220 exchange_server::AcquireCharacterMemory  [0x0848f220-0x848f23b] ===
 848f220:	55                   	push   %ebp
 848f221:	89 e5                	mov    %esp,%ebp
 848f223:	83 ec 18             	sub    $0x18,%esp
 848f226:	e8 46 1d 00 00       	call   8490f71 <_ZN15exchange_server28GetInstanceCacheCharacterMgrEv>
 848f22b:	8b 55 08             	mov    0x8(%ebp),%edx
 848f22e:	89 54 24 04          	mov    %edx,0x4(%esp)
 848f232:	89 04 24             	mov    %eax,(%esp)
 848f235:	e8 50 18 00 00       	call   8490a8a <_ZN15exchange_server18CCacheCharacterMgr16AcquireCharacterEi>
 848f23a:	c9                   	leave
 848f23b:	c3                   	ret

```

```c
// exchange_server::AcquireCharacterMemory @ 0x848f220

/* exchange_server::AcquireCharacterMemory(int) */

void exchange_server::AcquireCharacterMemory(int param_1)

{
  int iVar1;
  
  iVar1 = GetInstanceCacheCharacterMgr();
  CCacheCharacterMgr::AcquireCharacter(iVar1);
  return;
}

```

---

## BeginExchangeServerThread

```asm
// === 0848f2b8 exchange_server::BeginExchangeServerThread  [0x0848f2b8-0x848f2cc] ===
 848f2b8:	55                   	push   %ebp
 848f2b9:	89 e5                	mov    %esp,%ebp
 848f2bb:	83 ec 18             	sub    $0x18,%esp
 848f2be:	e8 ca 4b 00 00       	call   8493e8d <_ZN15exchange_server31GetInstanceExchangeServerThreadEv>
 848f2c3:	89 04 24             	mov    %eax,(%esp)
 848f2c6:	e8 bf 18 1a 00       	call   8630b8a <_ZN15ThreadInterface5beginEv>
 848f2cb:	c9                   	leave
 848f2cc:	c3                   	ret

```

```c
// exchange_server::BeginExchangeServerThread @ 0x848f2b8

/* exchange_server::BeginExchangeServerThread() */

void exchange_server::BeginExchangeServerThread(void)

{
  ThreadInterface *this;
  
  this = (ThreadInterface *)GetInstanceExchangeServerThread();
  ThreadInterface::begin(this);
  return;
}

```

---

## CacheCharacterMemory

```asm
// === 0848f258 exchange_server::CacheCharacterMemory  [0x0848f258-0x848f27a] ===
 848f258:	55                   	push   %ebp
 848f259:	89 e5                	mov    %esp,%ebp
 848f25b:	83 ec 18             	sub    $0x18,%esp
 848f25e:	e8 0e 1d 00 00       	call   8490f71 <_ZN15exchange_server28GetInstanceCacheCharacterMgrEv>
 848f263:	8b 55 0c             	mov    0xc(%ebp),%edx
 848f266:	89 54 24 08          	mov    %edx,0x8(%esp)
 848f26a:	8b 55 08             	mov    0x8(%ebp),%edx
 848f26d:	89 54 24 04          	mov    %edx,0x4(%esp)
 848f271:	89 04 24             	mov    %eax,(%esp)
 848f274:	e8 51 1b 00 00       	call   8490dca <_ZN15exchange_server18CCacheCharacterMgr14CacheCharacterEiP20CACHE_CHARACTER_TYPE>
 848f279:	c9                   	leave
 848f27a:	c3                   	ret

```

```c
// exchange_server::CacheCharacterMemory @ 0x848f258

/* exchange_server::CacheCharacterMemory(int, CACHE_CHARACTER_TYPE*) */

void exchange_server::CacheCharacterMemory(int param_1,CACHE_CHARACTER_TYPE *param_2)

{
  CCacheCharacterMgr *this;
  
  this = (CCacheCharacterMgr *)GetInstanceCacheCharacterMgr();
  CCacheCharacterMgr::CacheCharacter(this,param_1,param_2);
  return;
}

```

---

## FreeCharacterMemory

```asm
// === 0848f23c exchange_server::FreeCharacterMemory  [0x0848f23c-0x848f257] ===
 848f23c:	55                   	push   %ebp
 848f23d:	89 e5                	mov    %esp,%ebp
 848f23f:	83 ec 18             	sub    $0x18,%esp
 848f242:	e8 2a 1d 00 00       	call   8490f71 <_ZN15exchange_server28GetInstanceCacheCharacterMgrEv>
 848f247:	8b 55 08             	mov    0x8(%ebp),%edx
 848f24a:	89 54 24 04          	mov    %edx,0x4(%esp)
 848f24e:	89 04 24             	mov    %eax,(%esp)
 848f251:	e8 9e 19 00 00       	call   8490bf4 <_ZN15exchange_server18CCacheCharacterMgr13FreeCharacterEP20CACHE_CHARACTER_TYPE>
 848f256:	c9                   	leave
 848f257:	c3                   	ret

```

```c
// exchange_server::FreeCharacterMemory @ 0x848f23c

/* exchange_server::FreeCharacterMemory(CACHE_CHARACTER_TYPE*) */

void exchange_server::FreeCharacterMemory(CACHE_CHARACTER_TYPE *param_1)

{
  CCacheCharacterMgr *this;
  
  this = (CCacheCharacterMgr *)GetInstanceCacheCharacterMgr();
  CCacheCharacterMgr::FreeCharacter(this,param_1);
  return;
}

```

---

## GetServerChannelNo

```asm
// === 0848f27b exchange_server::GetServerChannelNo  [0x0848f27b-0x848f28d] ===
 848f27b:	55                   	push   %ebp
 848f27c:	89 e5                	mov    %esp,%ebp
 848f27e:	83 ec 08             	sub    $0x8,%esp
 848f281:	e8 fb ce c3 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 848f286:	8b 80 b0 01 00 00    	mov    0x1b0(%eax),%eax
 848f28c:	c9                   	leave
 848f28d:	c3                   	ret

```

```c
// exchange_server::GetServerChannelNo @ 0x848f27b

/* exchange_server::GetServerChannelNo() */

undefined4 exchange_server::GetServerChannelNo(void)

{
  int iVar1;
  
  iVar1 = G_CEnvironment();
  return *(undefined4 *)(iVar1 + 0x1b0);
}

```

---

## GetServerIP

```asm
// === 0848f28e exchange_server::GetServerIP  [0x0848f28e-0x848f2a2] ===
 848f28e:	55                   	push   %ebp
 848f28f:	89 e5                	mov    %esp,%ebp
 848f291:	83 ec 18             	sub    $0x18,%esp
 848f294:	e8 e8 ce c3 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 848f299:	89 04 24             	mov    %eax,(%esp)
 848f29c:	e8 d3 7b e1 ff       	call   82a6e74 <_ZN12CEnvironment22get_exchange_server_ipEv>
 848f2a1:	c9                   	leave
 848f2a2:	c3                   	ret

```

```c
// exchange_server::GetServerIP @ 0x848f28e

/* exchange_server::GetServerIP() */

void exchange_server::GetServerIP(void)

{
  CEnvironment *this;
  
  this = (CEnvironment *)G_CEnvironment();
  CEnvironment::get_exchange_server_ip(this);
  return;
}

```

---

## GetServerPORT

```asm
// === 0848f2a3 exchange_server::GetServerPORT  [0x0848f2a3-0x848f2b7] ===
 848f2a3:	55                   	push   %ebp
 848f2a4:	89 e5                	mov    %esp,%ebp
 848f2a6:	83 ec 18             	sub    $0x18,%esp
 848f2a9:	e8 d3 ce c3 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 848f2ae:	89 04 24             	mov    %eax,(%esp)
 848f2b1:	e8 b0 7b e1 ff       	call   82a6e66 <_ZN12CEnvironment24get_exchange_server_portEv>
 848f2b6:	c9                   	leave
 848f2b7:	c3                   	ret

```

```c
// exchange_server::GetServerPORT @ 0x848f2a3

/* exchange_server::GetServerPORT() */

void exchange_server::GetServerPORT(void)

{
  CEnvironment *this;
  
  this = (CEnvironment *)G_CEnvironment();
  CEnvironment::get_exchange_server_port(this);
  return;
}

```

---

## getExchangeServerThreadID

```asm
// === 0848f2cd exchange_server::getExchangeServerThreadID  [0x0848f2cd-0x848f2e1] ===
 848f2cd:	55                   	push   %ebp
 848f2ce:	89 e5                	mov    %esp,%ebp
 848f2d0:	83 ec 18             	sub    $0x18,%esp
 848f2d3:	e8 b5 4b 00 00       	call   8493e8d <_ZN15exchange_server31GetInstanceExchangeServerThreadEv>
 848f2d8:	89 04 24             	mov    %eax,(%esp)
 848f2db:	e8 38 4f e1 ff       	call   82a4218 <_ZN15ThreadInterface11getThreadIDEv>
 848f2e0:	c9                   	leave
 848f2e1:	c3                   	ret

```

```c
// exchange_server::getExchangeServerThreadID @ 0x848f2cd

/* exchange_server::getExchangeServerThreadID() */

void exchange_server::getExchangeServerThreadID(void)

{
  ThreadInterface *this;
  
  this = (ThreadInterface *)GetInstanceExchangeServerThread();
  ThreadInterface::getThreadID(this);
  return;
}

```

