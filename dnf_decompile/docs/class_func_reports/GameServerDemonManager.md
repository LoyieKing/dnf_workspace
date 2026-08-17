# GameServerDemonManager

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## Notice10MinShutDownMessage

```asm
// === 080f623a GameServerDemonManager::Notice10MinShutDownMessage  [0x080f623a-0x80f627f] ===
 80f623a:	55                   	push   %ebp
 80f623b:	89 e5                	mov    %esp,%ebp
 80f623d:	83 ec 28             	sub    $0x28,%esp
 80f6240:	e8 37 02 00 00       	call   80f647c <_Z12G_TimerQueuev>
 80f6245:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 80f624c:	00 
 80f624d:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 80f6254:	00 
 80f6255:	c7 44 24 10 3c 00 00 	movl   $0x3c,0x10(%esp)
 80f625c:	00 
 80f625d:	c7 44 24 0c a2 00 00 	movl   $0xa2,0xc(%esp)
 80f6264:	00 
 80f6265:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 80f626c:	00 
 80f626d:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 80f6274:	00 
 80f6275:	89 04 24             	mov    %eax,(%esp)
 80f6278:	e8 99 ab 53 00       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 80f627d:	c9                   	leave
 80f627e:	c3                   	ret
 80f627f:	90                   	nop

```

```c
// GameServerDemonManager::Notice10MinShutDownMessage @ 0x80f623a

/* GameServerDemonManager::Notice10MinShutDownMessage() */

void GameServerDemonManager::Notice10MinShutDownMessage(void)

{
  TimerQueue *pTVar1;
  
  pTVar1 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar1,2,0,0xa2,0x3c,0,0);
  return;
}

```

---

## SetNoticeMessage

```asm
// === 080f6280 GameServerDemonManager::SetNoticeMessage  [0x080f6280-0x80f62d2] ===
 80f6280:	55                   	push   %ebp
 80f6281:	89 e5                	mov    %esp,%ebp
 80f6283:	83 ec 28             	sub    $0x28,%esp
 80f6286:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f6289:	88 45 f4             	mov    %al,-0xc(%ebp)
 80f628c:	8b 45 08             	mov    0x8(%ebp),%eax
 80f628f:	0f b6 55 f4          	movzbl -0xc(%ebp),%edx
 80f6293:	88 50 01             	mov    %dl,0x1(%eax)
 80f6296:	8b 45 08             	mov    0x8(%ebp),%eax
 80f6299:	83 c0 02             	add    $0x2,%eax
 80f629c:	c7 44 24 08 ff 00 00 	movl   $0xff,0x8(%esp)
 80f62a3:	00 
 80f62a4:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80f62ab:	00 
 80f62ac:	89 04 24             	mov    %eax,(%esp)
 80f62af:	e8 0c 7a f8 ff       	call   807dcc0 <memset@plt>
 80f62b4:	0f b6 45 f4          	movzbl -0xc(%ebp),%eax
 80f62b8:	8b 55 08             	mov    0x8(%ebp),%edx
 80f62bb:	83 c2 02             	add    $0x2,%edx
 80f62be:	89 44 24 08          	mov    %eax,0x8(%esp)
 80f62c2:	8b 45 10             	mov    0x10(%ebp),%eax
 80f62c5:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f62c9:	89 14 24             	mov    %edx,(%esp)
 80f62cc:	e8 cf 75 f8 ff       	call   807d8a0 <memcpy@plt>
 80f62d1:	c9                   	leave
 80f62d2:	c3                   	ret

```

```c
// GameServerDemonManager::SetNoticeMessage @ 0x80f6280

/* GameServerDemonManager::SetNoticeMessage(unsigned char, char*) */

void __thiscall
GameServerDemonManager::SetNoticeMessage(GameServerDemonManager *this,uchar param_1,char *param_2)

{
  this[1] = (GameServerDemonManager)param_1;
  memset(this + 2,0,0xff);
  memcpy(this + 2,param_2,(uint)param_1);
  return;
}

```

---

## SetUserProhibitFlag

```asm
// === 080f6222 GameServerDemonManager::SetUserProhibitFlag  [0x080f6222-0x80f6239] ===
 80f6222:	55                   	push   %ebp
 80f6223:	89 e5                	mov    %esp,%ebp
 80f6225:	83 ec 04             	sub    $0x4,%esp
 80f6228:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f622b:	88 45 fc             	mov    %al,-0x4(%ebp)
 80f622e:	8b 45 08             	mov    0x8(%ebp),%eax
 80f6231:	0f b6 55 fc          	movzbl -0x4(%ebp),%edx
 80f6235:	88 10                	mov    %dl,(%eax)
 80f6237:	c9                   	leave
 80f6238:	c3                   	ret
 80f6239:	90                   	nop

```

```c
// GameServerDemonManager::SetUserProhibitFlag @ 0x80f6222

/* GameServerDemonManager::SetUserProhibitFlag(bool) */

void __thiscall
GameServerDemonManager::SetUserProhibitFlag(GameServerDemonManager *this,bool param_1)

{
  *this = (GameServerDemonManager)param_1;
  return;
}

```

---

## ~GameServerDemonManager

```asm
// === 080f621c GameServerDemonManager::~GameServerDemonManager  [0x080f621c-0x80f6221] ===
 80f621c:	55                   	push   %ebp
 80f621d:	89 e5                	mov    %esp,%ebp
 80f621f:	5d                   	pop    %ebp
 80f6220:	c3                   	ret
 80f6221:	90                   	nop

```

```c
// GameServerDemonManager::~GameServerDemonManager @ 0x80f621c

/* GameServerDemonManager::~GameServerDemonManager() */

void __thiscall GameServerDemonManager::~GameServerDemonManager(GameServerDemonManager *this)

{
  return;
}

```

