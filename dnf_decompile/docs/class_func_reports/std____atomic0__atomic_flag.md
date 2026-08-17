# std____atomic0__atomic_flag

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## clear

```asm
// === 086d9330 std::__atomic0::atomic_flag::clear  [0x086d9330-0x86d938f] ===
 86d9330:	55                   	push   %ebp
 86d9331:	89 e5                	mov    %esp,%ebp
 86d9333:	83 ec 18             	sub    $0x18,%esp
 86d9336:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 86d9339:	89 75 fc             	mov    %esi,-0x4(%ebp)
 86d933c:	8b 75 08             	mov    0x8(%ebp),%esi
 86d933f:	e8 ec fe ff ff       	call   86d9230 <_ZN12_GLOBAL__N_116get_atomic_mutexEv>
 86d9344:	89 c3                	mov    %eax,%ebx
 86d9346:	b8 60 e5 07 08       	mov    $0x807e560,%eax
 86d934b:	85 c0                	test   %eax,%eax
 86d934d:	74 20                	je     86d936f <_ZNVSt9__atomic011atomic_flag5clearESt12memory_order+0x3f>
 86d934f:	89 1c 24             	mov    %ebx,(%esp)
 86d9352:	e8 99 4e 9a ff       	call   807e1f0 <pthread_mutex_lock@plt>
 86d9357:	85 c0                	test   %eax,%eax
 86d9359:	75 21                	jne    86d937c <_ZNVSt9__atomic011atomic_flag5clearESt12memory_order+0x4c>
 86d935b:	c6 06 00             	movb   $0x0,(%esi)
 86d935e:	8b 75 fc             	mov    -0x4(%ebp),%esi
 86d9361:	89 5d 08             	mov    %ebx,0x8(%ebp)
 86d9364:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 86d9367:	89 ec                	mov    %ebp,%esp
 86d9369:	5d                   	pop    %ebp
 86d936a:	e9 71 4b 9a ff       	jmp    807dee0 <pthread_mutex_unlock@plt>
 86d936f:	c6 06 00             	movb   $0x0,(%esi)
 86d9372:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 86d9375:	8b 75 fc             	mov    -0x4(%ebp),%esi
 86d9378:	89 ec                	mov    %ebp,%esp
 86d937a:	5d                   	pop    %ebp
 86d937b:	c3                   	ret
 86d937c:	89 04 24             	mov    %eax,(%esp)
 86d937f:	e8 2c 03 00 00       	call   86d96b0 <_ZSt20__throw_system_errori>
 86d9384:	90                   	nop
 86d9385:	90                   	nop
 86d9386:	90                   	nop
 86d9387:	90                   	nop
 86d9388:	90                   	nop
 86d9389:	90                   	nop
 86d938a:	90                   	nop
 86d938b:	90                   	nop
 86d938c:	90                   	nop
 86d938d:	90                   	nop
 86d938e:	90                   	nop
 86d938f:	90                   	nop

```

```c
// std::__atomic0::atomic_flag::clear @ 0x86d9330

/* WARNING: Removing unreachable block (ram,0x086d936f) */
/* std::__atomic0::atomic_flag::clear(std::memory_order) volatile */

void std::__atomic0::atomic_flag::clear(undefined1 *param_1)

{
  pthread_mutex_t *__mutex;
  int iVar1;
  
  __mutex = (pthread_mutex_t *)::(anonymous_namespace)::get_atomic_mutex();
  iVar1 = pthread_mutex_lock(__mutex);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    __throw_system_error(iVar1);
  }
  *param_1 = 0;
  pthread_mutex_unlock(__mutex);
  return;
}

```

---

## test_and_set

```asm
// === 086d92d0 std::__atomic0::atomic_flag::test_and_set  [0x086d92d0-0x86d932f] ===
 86d92d0:	55                   	push   %ebp
 86d92d1:	89 e5                	mov    %esp,%ebp
 86d92d3:	83 ec 28             	sub    $0x28,%esp
 86d92d6:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 86d92d9:	8b 5d 08             	mov    0x8(%ebp),%ebx
 86d92dc:	89 75 f8             	mov    %esi,-0x8(%ebp)
 86d92df:	89 7d fc             	mov    %edi,-0x4(%ebp)
 86d92e2:	e8 49 ff ff ff       	call   86d9230 <_ZN12_GLOBAL__N_116get_atomic_mutexEv>
 86d92e7:	89 c6                	mov    %eax,%esi
 86d92e9:	b8 60 e5 07 08       	mov    $0x807e560,%eax
 86d92ee:	85 c0                	test   %eax,%eax
 86d92f0:	74 29                	je     86d931b <_ZNVSt9__atomic011atomic_flag12test_and_setESt12memory_order+0x4b>
 86d92f2:	89 34 24             	mov    %esi,(%esp)
 86d92f5:	e8 f6 4e 9a ff       	call   807e1f0 <pthread_mutex_lock@plt>
 86d92fa:	85 c0                	test   %eax,%eax
 86d92fc:	75 25                	jne    86d9323 <_ZNVSt9__atomic011atomic_flag12test_and_setESt12memory_order+0x53>
 86d92fe:	0f b6 3b             	movzbl (%ebx),%edi
 86d9301:	c6 03 01             	movb   $0x1,(%ebx)
 86d9304:	89 34 24             	mov    %esi,(%esp)
 86d9307:	e8 d4 4b 9a ff       	call   807dee0 <pthread_mutex_unlock@plt>
 86d930c:	89 f8                	mov    %edi,%eax
 86d930e:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 86d9311:	8b 75 f8             	mov    -0x8(%ebp),%esi
 86d9314:	8b 7d fc             	mov    -0x4(%ebp),%edi
 86d9317:	89 ec                	mov    %ebp,%esp
 86d9319:	5d                   	pop    %ebp
 86d931a:	c3                   	ret
 86d931b:	0f b6 3b             	movzbl (%ebx),%edi
 86d931e:	c6 03 01             	movb   $0x1,(%ebx)
 86d9321:	eb e9                	jmp    86d930c <_ZNVSt9__atomic011atomic_flag12test_and_setESt12memory_order+0x3c>
 86d9323:	89 04 24             	mov    %eax,(%esp)
 86d9326:	e8 85 03 00 00       	call   86d96b0 <_ZSt20__throw_system_errori>
 86d932b:	90                   	nop
 86d932c:	90                   	nop
 86d932d:	90                   	nop
 86d932e:	90                   	nop
 86d932f:	90                   	nop

```

```c
// std::__atomic0::atomic_flag::test_and_set @ 0x86d92d0

/* WARNING: Removing unreachable block (ram,0x086d931b) */
/* std::__atomic0::atomic_flag::test_and_set(std::memory_order) volatile */

undefined1 std::__atomic0::atomic_flag::test_and_set(undefined1 *param_1)

{
  undefined1 uVar1;
  pthread_mutex_t *__mutex;
  int iVar2;
  
  __mutex = (pthread_mutex_t *)::(anonymous_namespace)::get_atomic_mutex();
  iVar2 = pthread_mutex_lock(__mutex);
  if (iVar2 == 0) {
    uVar1 = *param_1;
    *param_1 = 1;
    pthread_mutex_unlock(__mutex);
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __throw_system_error(iVar2);
}

```

