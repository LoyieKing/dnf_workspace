# EpollHandler

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 7

---

## EpollHandler

```asm
// === 0857c084 EpollHandler::EpollHandler  [0x0857c084-0x857c0cb] ===
 857c084:	55                   	push   %ebp
 857c085:	89 e5                	mov    %esp,%ebp
 857c087:	56                   	push   %esi
 857c088:	53                   	push   %ebx
 857c089:	83 ec 10             	sub    $0x10,%esp
 857c08c:	8b 45 08             	mov    0x8(%ebp),%eax
 857c08f:	83 c0 14             	add    $0x14,%eax
 857c092:	89 04 24             	mov    %eax,(%esp)
 857c095:	e8 78 f3 b4 ff       	call   80cb412 <_ZN5MutexC1Ev>
 857c09a:	8b 45 08             	mov    0x8(%ebp),%eax
 857c09d:	89 04 24             	mov    %eax,(%esp)
 857c0a0:	e8 7d 00 00 00       	call   857c122 <_ZN12EpollHandler4initEv>
 857c0a5:	eb 1e                	jmp    857c0c5 <_ZN12EpollHandlerC1Ev+0x41>
 857c0a7:	89 d3                	mov    %edx,%ebx
 857c0a9:	89 c6                	mov    %eax,%esi
 857c0ab:	8b 45 08             	mov    0x8(%ebp),%eax
 857c0ae:	83 c0 14             	add    $0x14,%eax
 857c0b1:	89 04 24             	mov    %eax,(%esp)
 857c0b4:	e8 75 f3 b4 ff       	call   80cb42e <_ZN5MutexD1Ev>
 857c0b9:	89 f0                	mov    %esi,%eax
 857c0bb:	89 da                	mov    %ebx,%edx
 857c0bd:	89 04 24             	mov    %eax,(%esp)
 857c0c0:	e8 8b 76 56 00       	call   8ae3750 <_Unwind_Resume>
 857c0c5:	83 c4 10             	add    $0x10,%esp
 857c0c8:	5b                   	pop    %ebx
 857c0c9:	5e                   	pop    %esi
 857c0ca:	5d                   	pop    %ebp
 857c0cb:	c3                   	ret

```

```c
// EpollHandler::EpollHandler @ 0x857c084

/* EpollHandler::EpollHandler() */

void __thiscall EpollHandler::EpollHandler(EpollHandler *this)

{
  Mutex::Mutex((Mutex *)(this + 0x14));
                    /* try { // try from 0857c0a0 to 0857c0a4 has its CatchHandler @ 0857c0a7 */
  init(this);
  return;
}

```

---

## ResetEpoll

```asm
// === 0857c258 EpollHandler::ResetEpoll  [0x0857c258-0x857c2e3] ===
 857c258:	55                   	push   %ebp
 857c259:	89 e5                	mov    %esp,%ebp
 857c25b:	53                   	push   %ebx
 857c25c:	83 ec 24             	sub    $0x24,%esp
 857c25f:	8b 45 08             	mov    0x8(%ebp),%eax
 857c262:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 857c269:	00 
 857c26a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 857c271:	00 
 857c272:	89 04 24             	mov    %eax,(%esp)
 857c275:	e8 46 1a b0 ff       	call   807dcc0 <memset@plt>
 857c27a:	8b 45 08             	mov    0x8(%ebp),%eax
 857c27d:	c7 00 01 00 00 00    	movl   $0x1,(%eax)
 857c283:	8b 45 08             	mov    0x8(%ebp),%eax
 857c286:	83 c0 14             	add    $0x14,%eax
 857c289:	89 44 24 04          	mov    %eax,0x4(%esp)
 857c28d:	8d 45 f4             	lea    -0xc(%ebp),%eax
 857c290:	89 04 24             	mov    %eax,(%esp)
 857c293:	e8 b4 91 b8 ff       	call   810544c <_ZN5GuardI5MutexEC1EPS0_>
 857c298:	8b 55 08             	mov    0x8(%ebp),%edx
 857c29b:	8b 45 08             	mov    0x8(%ebp),%eax
 857c29e:	8b 40 10             	mov    0x10(%eax),%eax
 857c2a1:	89 54 24 0c          	mov    %edx,0xc(%esp)
 857c2a5:	8b 55 0c             	mov    0xc(%ebp),%edx
 857c2a8:	89 54 24 08          	mov    %edx,0x8(%esp)
 857c2ac:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 857c2b3:	00 
 857c2b4:	89 04 24             	mov    %eax,(%esp)
 857c2b7:	e8 e4 14 b0 ff       	call   807d7a0 <epoll_ctl@plt>
 857c2bc:	c1 e8 1f             	shr    $0x1f,%eax
 857c2bf:	84 c0                	test   %al,%al
 857c2c1:	74 09                	je     857c2cc <_ZN12EpollHandler10ResetEpollEi+0x74>
 857c2c3:	e8 a8 1a b0 ff       	call   807dd70 <__errno_location@plt>
 857c2c8:	8b 18                	mov    (%eax),%ebx
 857c2ca:	eb 05                	jmp    857c2d1 <_ZN12EpollHandler10ResetEpollEi+0x79>
 857c2cc:	bb 00 00 00 00       	mov    $0x0,%ebx
 857c2d1:	8d 45 f4             	lea    -0xc(%ebp),%eax
 857c2d4:	89 04 24             	mov    %eax,(%esp)
 857c2d7:	e8 8c 91 b8 ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 857c2dc:	89 d8                	mov    %ebx,%eax
 857c2de:	83 c4 24             	add    $0x24,%esp
 857c2e1:	5b                   	pop    %ebx
 857c2e2:	5d                   	pop    %ebp
 857c2e3:	c3                   	ret

```

```c
// EpollHandler::ResetEpoll @ 0x857c258

/* EpollHandler::ResetEpoll(int) */

int __thiscall EpollHandler::ResetEpoll(EpollHandler *this,int param_1)

{
  int iVar1;
  int *piVar2;
  Guard<Mutex> local_10 [8];
  
  memset(this,0,0xc);
  *(undefined4 *)this = 1;
  Guard<Mutex>::Guard(local_10,(Mutex *)(this + 0x14));
  iVar1 = epoll_ctl(*(int *)(this + 0x10),2,param_1,(epoll_event *)this);
  if (iVar1 < 0) {
    piVar2 = __errno_location();
    iVar1 = *piVar2;
  }
  else {
    iVar1 = 0;
  }
  Guard<Mutex>::~Guard(local_10);
  return iVar1;
}

```

---

## SetEpoll

```asm
// === 0857c1c6 EpollHandler::SetEpoll  [0x0857c1c6-0x857c257] ===
 857c1c6:	55                   	push   %ebp
 857c1c7:	89 e5                	mov    %esp,%ebp
 857c1c9:	53                   	push   %ebx
 857c1ca:	83 ec 34             	sub    $0x34,%esp
 857c1cd:	8b 45 14             	mov    0x14(%ebp),%eax
 857c1d0:	88 45 e4             	mov    %al,-0x1c(%ebp)
 857c1d3:	80 7d e4 00          	cmpb   $0x0,-0x1c(%ebp)
 857c1d7:	74 0b                	je     857c1e4 <_ZN12EpollHandler8SetEpollEPvib+0x1e>
 857c1d9:	8b 45 08             	mov    0x8(%ebp),%eax
 857c1dc:	c7 00 1d 00 00 80    	movl   $0x8000001d,(%eax)
 857c1e2:	eb 09                	jmp    857c1ed <_ZN12EpollHandler8SetEpollEPvib+0x27>
 857c1e4:	8b 45 08             	mov    0x8(%ebp),%eax
 857c1e7:	c7 00 1d 00 00 00    	movl   $0x1d,(%eax)
 857c1ed:	8b 45 08             	mov    0x8(%ebp),%eax
 857c1f0:	8b 55 0c             	mov    0xc(%ebp),%edx
 857c1f3:	89 50 04             	mov    %edx,0x4(%eax)
 857c1f6:	8b 45 08             	mov    0x8(%ebp),%eax
 857c1f9:	83 c0 14             	add    $0x14,%eax
 857c1fc:	89 44 24 04          	mov    %eax,0x4(%esp)
 857c200:	8d 45 f4             	lea    -0xc(%ebp),%eax
 857c203:	89 04 24             	mov    %eax,(%esp)
 857c206:	e8 41 92 b8 ff       	call   810544c <_ZN5GuardI5MutexEC1EPS0_>
 857c20b:	8b 55 08             	mov    0x8(%ebp),%edx
 857c20e:	8b 45 08             	mov    0x8(%ebp),%eax
 857c211:	8b 40 10             	mov    0x10(%eax),%eax
 857c214:	89 54 24 0c          	mov    %edx,0xc(%esp)
 857c218:	8b 55 10             	mov    0x10(%ebp),%edx
 857c21b:	89 54 24 08          	mov    %edx,0x8(%esp)
 857c21f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 857c226:	00 
 857c227:	89 04 24             	mov    %eax,(%esp)
 857c22a:	e8 71 15 b0 ff       	call   807d7a0 <epoll_ctl@plt>
 857c22f:	c1 e8 1f             	shr    $0x1f,%eax
 857c232:	84 c0                	test   %al,%al
 857c234:	74 09                	je     857c23f <_ZN12EpollHandler8SetEpollEPvib+0x79>
 857c236:	e8 35 1b b0 ff       	call   807dd70 <__errno_location@plt>
 857c23b:	8b 18                	mov    (%eax),%ebx
 857c23d:	eb 05                	jmp    857c244 <_ZN12EpollHandler8SetEpollEPvib+0x7e>
 857c23f:	bb 00 00 00 00       	mov    $0x0,%ebx
 857c244:	8d 45 f4             	lea    -0xc(%ebp),%eax
 857c247:	89 04 24             	mov    %eax,(%esp)
 857c24a:	e8 19 92 b8 ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 857c24f:	89 d8                	mov    %ebx,%eax
 857c251:	83 c4 34             	add    $0x34,%esp
 857c254:	5b                   	pop    %ebx
 857c255:	5d                   	pop    %ebp
 857c256:	c3                   	ret
 857c257:	90                   	nop

```

```c
// EpollHandler::SetEpoll @ 0x857c1c6

/* EpollHandler::SetEpoll(void*, int, bool) */

int __thiscall EpollHandler::SetEpoll(EpollHandler *this,void *param_1,int param_2,bool param_3)

{
  int iVar1;
  int *piVar2;
  Guard<Mutex> local_10 [8];
  
  if (param_3) {
    *(undefined4 *)this = 0x8000001d;
  }
  else {
    *(undefined4 *)this = 0x1d;
  }
  *(void **)(this + 4) = param_1;
  Guard<Mutex>::Guard(local_10,(Mutex *)(this + 0x14));
  iVar1 = epoll_ctl(*(int *)(this + 0x10),1,param_2,(epoll_event *)this);
  if (iVar1 < 0) {
    piVar2 = __errno_location();
    iVar1 = *piVar2;
  }
  else {
    iVar1 = 0;
  }
  Guard<Mutex>::~Guard(local_10);
  return iVar1;
}

```

---

## destroy

```asm
// === 0857c0f8 EpollHandler::destroy  [0x0857c0f8-0x857c121] ===
 857c0f8:	55                   	push   %ebp
 857c0f9:	89 e5                	mov    %esp,%ebp
 857c0fb:	83 ec 18             	sub    $0x18,%esp
 857c0fe:	8b 45 08             	mov    0x8(%ebp),%eax
 857c101:	8b 40 0c             	mov    0xc(%eax),%eax
 857c104:	85 c0                	test   %eax,%eax
 857c106:	74 0e                	je     857c116 <_ZN12EpollHandler7destroyEv+0x1e>
 857c108:	8b 45 08             	mov    0x8(%ebp),%eax
 857c10b:	8b 40 0c             	mov    0xc(%eax),%eax
 857c10e:	89 04 24             	mov    %eax,(%esp)
 857c111:	e8 9a 8a 1a 00       	call   8724bb0 <_ZdaPv>
 857c116:	8b 45 08             	mov    0x8(%ebp),%eax
 857c119:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 857c120:	c9                   	leave
 857c121:	c3                   	ret

```

```c
// EpollHandler::destroy @ 0x857c0f8

/* EpollHandler::destroy() */

void __thiscall EpollHandler::destroy(EpollHandler *this)

{
  if (*(int *)(this + 0xc) != 0) {
    operator_delete__(*(void **)(this + 0xc));
  }
  *(undefined4 *)(this + 0xc) = 0;
  return;
}

```

---

## init

```asm
// === 0857c122 EpollHandler::init  [0x0857c122-0x857c1bf] ===
 857c122:	55                   	push   %ebp
 857c123:	89 e5                	mov    %esp,%ebp
 857c125:	83 ec 18             	sub    $0x18,%esp
 857c128:	c7 04 24 58 02 00 00 	movl   $0x258,(%esp)
 857c12f:	e8 fc 19 b0 ff       	call   807db30 <epoll_create@plt>
 857c134:	8b 55 08             	mov    0x8(%ebp),%edx
 857c137:	89 42 10             	mov    %eax,0x10(%edx)
 857c13a:	8b 45 08             	mov    0x8(%ebp),%eax
 857c13d:	8b 40 10             	mov    0x10(%eax),%eax
 857c140:	85 c0                	test   %eax,%eax
 857c142:	79 2b                	jns    857c16f <_ZN12EpollHandler4initEv+0x4d>
 857c144:	c7 44 24 04 c0 6f ca 	movl   $0x8ca6fc0,0x4(%esp)
 857c14b:	08 
 857c14c:	c7 04 24 60 b4 48 09 	movl   $0x948b460,(%esp)
 857c153:	e8 a8 11 18 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 857c158:	c7 44 24 04 b0 d7 6f 	movl   $0x86fd7b0,0x4(%esp)
 857c15f:	08 
 857c160:	89 04 24             	mov    %eax,(%esp)
 857c163:	e8 f8 f6 17 00       	call   86fb860 <_ZNSolsEPFRSoS_E>
 857c168:	b8 00 00 00 00       	mov    $0x0,%eax
 857c16d:	eb 4e                	jmp    857c1bd <_ZN12EpollHandler4initEv+0x9b>
 857c16f:	c7 04 24 20 1c 00 00 	movl   $0x1c20,(%esp)
 857c176:	e8 45 6c 1a 00       	call   8722dc0 <_Znaj>
 857c17b:	89 c2                	mov    %eax,%edx
 857c17d:	8b 45 08             	mov    0x8(%ebp),%eax
 857c180:	89 50 0c             	mov    %edx,0xc(%eax)
 857c183:	8b 45 08             	mov    0x8(%ebp),%eax
 857c186:	8b 40 0c             	mov    0xc(%eax),%eax
 857c189:	85 c0                	test   %eax,%eax
 857c18b:	75 2b                	jne    857c1b8 <_ZN12EpollHandler4initEv+0x96>
 857c18d:	c7 44 24 04 e8 6f ca 	movl   $0x8ca6fe8,0x4(%esp)
 857c194:	08 
 857c195:	c7 04 24 60 b4 48 09 	movl   $0x948b460,(%esp)
 857c19c:	e8 5f 11 18 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 857c1a1:	c7 44 24 04 b0 d7 6f 	movl   $0x86fd7b0,0x4(%esp)
 857c1a8:	08 
 857c1a9:	89 04 24             	mov    %eax,(%esp)
 857c1ac:	e8 af f6 17 00       	call   86fb860 <_ZNSolsEPFRSoS_E>
 857c1b1:	b8 00 00 00 00       	mov    $0x0,%eax
 857c1b6:	eb 05                	jmp    857c1bd <_ZN12EpollHandler4initEv+0x9b>
 857c1b8:	b8 01 00 00 00       	mov    $0x1,%eax
 857c1bd:	c9                   	leave
 857c1be:	c3                   	ret
 857c1bf:	90                   	nop

```

```c
// EpollHandler::init @ 0x857c122

/* EpollHandler::init() */

undefined4 __thiscall EpollHandler::init(EpollHandler *this)

{
  int iVar1;
  ostream *poVar2;
  undefined4 uVar3;
  void *pvVar4;
  
  iVar1 = epoll_create(600);
  *(int *)(this + 0x10) = iVar1;
  if (*(int *)(this + 0x10) < 0) {
    poVar2 = std::operator<<((ostream *)&std::cerr,"[Epoll::init] Can\'t init epoll create");
    std::ostream::operator<<(poVar2,std::endl<char,std::char_traits<char>>);
    uVar3 = 0;
  }
  else {
    pvVar4 = operator_new__(0x1c20);
    *(void **)(this + 0xc) = pvVar4;
    if (*(int *)(this + 0xc) == 0) {
      poVar2 = std::operator<<((ostream *)&std::cerr,"[Epoll::init] Can\'t alloc event memory");
      std::ostream::operator<<(poVar2,std::endl<char,std::char_traits<char>>);
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  return uVar3;
}

```

---

## release

```asm
// === 0857c1c0 EpollHandler::release  [0x0857c1c0-0x857c1c5] ===
 857c1c0:	55                   	push   %ebp
 857c1c1:	89 e5                	mov    %esp,%ebp
 857c1c3:	5d                   	pop    %ebp
 857c1c4:	c3                   	ret
 857c1c5:	90                   	nop

```

```c
// EpollHandler::release @ 0x857c1c0

/* EpollHandler::release() */

void EpollHandler::release(void)

{
  return;
}

```

---

## ~EpollHandler

```asm
// === 0857c0cc EpollHandler::~EpollHandler  [0x0857c0cc-0x857c0f7] ===
 857c0cc:	55                   	push   %ebp
 857c0cd:	89 e5                	mov    %esp,%ebp
 857c0cf:	83 ec 18             	sub    $0x18,%esp
 857c0d2:	8b 45 08             	mov    0x8(%ebp),%eax
 857c0d5:	89 04 24             	mov    %eax,(%esp)
 857c0d8:	e8 1b 00 00 00       	call   857c0f8 <_ZN12EpollHandler7destroyEv>
 857c0dd:	8b 45 08             	mov    0x8(%ebp),%eax
 857c0e0:	89 04 24             	mov    %eax,(%esp)
 857c0e3:	e8 d8 00 00 00       	call   857c1c0 <_ZN12EpollHandler7releaseEv>
 857c0e8:	8b 45 08             	mov    0x8(%ebp),%eax
 857c0eb:	83 c0 14             	add    $0x14,%eax
 857c0ee:	89 04 24             	mov    %eax,(%esp)
 857c0f1:	e8 38 f3 b4 ff       	call   80cb42e <_ZN5MutexD1Ev>
 857c0f6:	c9                   	leave
 857c0f7:	c3                   	ret

```

```c
// EpollHandler::~EpollHandler @ 0x857c0cc

/* EpollHandler::~EpollHandler() */

void __thiscall EpollHandler::~EpollHandler(EpollHandler *this)

{
  destroy(this);
  release();
  Mutex::~Mutex((Mutex *)(this + 0x14));
  return;
}

```

