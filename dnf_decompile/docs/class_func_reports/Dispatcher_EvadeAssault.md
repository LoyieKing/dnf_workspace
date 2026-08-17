# Dispatcher_EvadeAssault

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## check_error

```asm
// === 081ce582 Dispatcher_EvadeAssault::check_error  [0x081ce582-0x81ce5fd] ===
 81ce582:	55                   	push   %ebp
 81ce583:	89 e5                	mov    %esp,%ebp
 81ce585:	83 ec 18             	sub    $0x18,%esp
 81ce588:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81ce58c:	75 26                	jne    81ce5b4 <_ZN23Dispatcher_EvadeAssault11check_errorEP5CUserR8MSG_BASE+0x32>
 81ce58e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81ce595:	00 
 81ce596:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81ce59d:	00 
 81ce59e:	c7 44 24 04 40 44 bd 	movl   $0x8bd4440,0x4(%esp)
 81ce5a5:	08 
 81ce5a6:	c7 04 24 c2 27 00 00 	movl   $0x27c2,(%esp)
 81ce5ad:	e8 25 23 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81ce5b2:	eb 47                	jmp    81ce5fb <_ZN23Dispatcher_EvadeAssault11check_errorEP5CUserR8MSG_BASE+0x79>
 81ce5b4:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ce5b7:	89 04 24             	mov    %eax,(%esp)
 81ce5ba:	e8 cd bd f0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81ce5bf:	83 f8 03             	cmp    $0x3,%eax
 81ce5c2:	0f 95 c0             	setne  %al
 81ce5c5:	84 c0                	test   %al,%al
 81ce5c7:	74 2d                	je     81ce5f6 <_ZN23Dispatcher_EvadeAssault11check_errorEP5CUserR8MSG_BASE+0x74>
 81ce5c9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ce5cc:	89 04 24             	mov    %eax,(%esp)
 81ce5cf:	e8 9a bd f0 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81ce5d4:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81ce5d8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81ce5df:	00 
 81ce5e0:	c7 44 24 04 40 44 bd 	movl   $0x8bd4440,0x4(%esp)
 81ce5e7:	08 
 81ce5e8:	c7 04 24 c5 27 00 00 	movl   $0x27c5,(%esp)
 81ce5ef:	e8 e3 22 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81ce5f4:	eb 05                	jmp    81ce5fb <_ZN23Dispatcher_EvadeAssault11check_errorEP5CUserR8MSG_BASE+0x79>
 81ce5f6:	b8 00 00 00 00       	mov    $0x0,%eax
 81ce5fb:	c9                   	leave
 81ce5fc:	c3                   	ret
 81ce5fd:	90                   	nop

```

```c
// Dispatcher_EvadeAssault::check_error @ 0x81ce582

/* Dispatcher_EvadeAssault::check_error(CUser*, MSG_BASE&) */

undefined4 Dispatcher_EvadeAssault::check_error(CUser *param_1,MSG_BASE *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 == (MSG_BASE *)0x0) {
    uVar1 = LineFunc(0x27c2,"int Dispatcher_EvadeAssault::check_error(CUser*, MSG_BASE&)",0,0);
  }
  else {
    iVar2 = CUser::get_state((CUser *)param_2);
    if (iVar2 == 3) {
      uVar1 = 0;
    }
    else {
      uVar3 = CUser::get_acc_id((CUser *)param_2);
      uVar1 = LineFunc(0x27c5,"int Dispatcher_EvadeAssault::check_error(CUser*, MSG_BASE&)",0,uVar3)
      ;
    }
  }
  return uVar1;
}

```

---

## process

```asm
// === 081ce4f8 Dispatcher_EvadeAssault::process  [0x081ce4f8-0x81ce581] ===
 81ce4f8:	55                   	push   %ebp
 81ce4f9:	89 e5                	mov    %esp,%ebp
 81ce4fb:	83 ec 28             	sub    $0x28,%esp
 81ce4fe:	8b 45 10             	mov    0x10(%ebp),%eax
 81ce501:	89 44 24 08          	mov    %eax,0x8(%esp)
 81ce505:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ce508:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ce50c:	8b 45 08             	mov    0x8(%ebp),%eax
 81ce50f:	89 04 24             	mov    %eax,(%esp)
 81ce512:	e8 6b 00 00 00       	call   81ce582 <_ZN23Dispatcher_EvadeAssault11check_errorEP5CUserR8MSG_BASE>
 81ce517:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81ce51a:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81ce51e:	7e 05                	jle    81ce525 <_ZN23Dispatcher_EvadeAssault7processEP5CUserR8MSG_BASER9ParamBase+0x2d>
 81ce520:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ce523:	eb 5a                	jmp    81ce57f <_ZN23Dispatcher_EvadeAssault7processEP5CUserR8MSG_BASER9ParamBase+0x87>
 81ce525:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81ce529:	79 07                	jns    81ce532 <_ZN23Dispatcher_EvadeAssault7processEP5CUserR8MSG_BASER9ParamBase+0x3a>
 81ce52b:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81ce530:	eb 4d                	jmp    81ce57f <_ZN23Dispatcher_EvadeAssault7processEP5CUserR8MSG_BASER9ParamBase+0x87>
 81ce532:	e8 69 6b 06 00       	call   82350a0 <_ZN11pvp_assault21GetInstanceAssaultMgrEv>
 81ce537:	8b 55 0c             	mov    0xc(%ebp),%edx
 81ce53a:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ce53e:	89 04 24             	mov    %eax,(%esp)
 81ce541:	e8 b0 16 12 00       	call   82efbf6 <_ZN11pvp_assault11CAssaultMgr19OnEvadeAssaultPlaceEP5CUser>
 81ce546:	83 f0 01             	xor    $0x1,%eax
 81ce549:	84 c0                	test   %al,%al
 81ce54b:	74 2d                	je     81ce57a <_ZN23Dispatcher_EvadeAssault7processEP5CUserR8MSG_BASER9ParamBase+0x82>
 81ce54d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ce550:	89 04 24             	mov    %eax,(%esp)
 81ce553:	e8 16 be f0 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81ce558:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81ce55c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81ce563:	00 
 81ce564:	c7 44 24 04 80 44 bd 	movl   $0x8bd4480,0x4(%esp)
 81ce56b:	08 
 81ce56c:	c7 04 24 b8 27 00 00 	movl   $0x27b8,(%esp)
 81ce573:	e8 5f 23 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81ce578:	eb 05                	jmp    81ce57f <_ZN23Dispatcher_EvadeAssault7processEP5CUserR8MSG_BASER9ParamBase+0x87>
 81ce57a:	b8 00 00 00 00       	mov    $0x0,%eax
 81ce57f:	c9                   	leave
 81ce580:	c3                   	ret
 81ce581:	90                   	nop

```

```c
// Dispatcher_EvadeAssault::process @ 0x81ce4f8

/* Dispatcher_EvadeAssault::process(CUser*, MSG_BASE&, ParamBase&) */

int Dispatcher_EvadeAssault::process(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  char cVar1;
  int iVar2;
  CAssaultMgr *this;
  uint uVar3;
  
  iVar2 = check_error(param_1,param_2);
  if (iVar2 < 1) {
    if (iVar2 < 0) {
      iVar2 = -1;
    }
    else {
      this = (CAssaultMgr *)pvp_assault::GetInstanceAssaultMgr();
      cVar1 = pvp_assault::CAssaultMgr::OnEvadeAssaultPlace(this,(CUser *)param_2);
      if (cVar1 == '\x01') {
        iVar2 = 0;
      }
      else {
        uVar3 = CUser::get_acc_id((CUser *)param_2);
        iVar2 = LineFunc(0x27b8,
                         "virtual int Dispatcher_EvadeAssault::process(CUser*, MSG_BASE&, ParamBase&)"
                         ,0,uVar3);
      }
    }
  }
  return iVar2;
}

```

---

## read

```asm
// === 081ce4ee Dispatcher_EvadeAssault::read  [0x081ce4ee-0x81ce4f7] ===
 81ce4ee:	55                   	push   %ebp
 81ce4ef:	89 e5                	mov    %esp,%ebp
 81ce4f1:	b8 00 00 00 00       	mov    $0x0,%eax
 81ce4f6:	5d                   	pop    %ebp
 81ce4f7:	c3                   	ret

```

```c
// Dispatcher_EvadeAssault::read @ 0x81ce4ee

/* Dispatcher_EvadeAssault::read(PacketBuf&, MSG_BASE&) */

undefined4 Dispatcher_EvadeAssault::read(PacketBuf *param_1,MSG_BASE *param_2)

{
  return 0;
}

```

