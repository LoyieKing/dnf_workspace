# __cxxabiv1____pbase_type_info

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## __do_catch

```asm
// === 0872f470 __cxxabiv1::__pbase_type_info::__do_catch  [0x0872f470-0x872f54f] ===
 872f470:	55                   	push   %ebp
 872f471:	89 e5                	mov    %esp,%ebp
 872f473:	83 ec 38             	sub    $0x38,%esp
 872f476:	89 75 f8             	mov    %esi,-0x8(%ebp)
 872f479:	8b 75 08             	mov    0x8(%ebp),%esi
 872f47c:	89 7d fc             	mov    %edi,-0x4(%ebp)
 872f47f:	8b 7d 0c             	mov    0xc(%ebp),%edi
 872f482:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 872f485:	e8 6e 39 ff ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 872f48a:	81 c3 0e d7 c3 00    	add    $0xc3d70e,%ebx
 872f490:	8b 46 04             	mov    0x4(%esi),%eax
 872f493:	8b 57 04             	mov    0x4(%edi),%edx
 872f496:	39 d0                	cmp    %edx,%eax
 872f498:	74 15                	je     872f4af <_ZNK10__cxxabiv117__pbase_type_info10__do_catchEPKSt9type_infoPPvj+0x3f>
 872f49a:	80 38 2a             	cmpb   $0x2a,(%eax)
 872f49d:	74 29                	je     872f4c8 <_ZNK10__cxxabiv117__pbase_type_info10__do_catchEPKSt9type_infoPPvj+0x58>
 872f49f:	89 54 24 04          	mov    %edx,0x4(%esp)
 872f4a3:	89 04 24             	mov    %eax,(%esp)
 872f4a6:	e8 35 f0 94 ff       	call   807e4e0 <strcmp@plt>
 872f4ab:	85 c0                	test   %eax,%eax
 872f4ad:	75 19                	jne    872f4c8 <_ZNK10__cxxabiv117__pbase_type_info10__do_catchEPKSt9type_infoPPvj+0x58>
 872f4af:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 872f4b2:	b8 01 00 00 00       	mov    $0x1,%eax
 872f4b7:	8b 75 f8             	mov    -0x8(%ebp),%esi
 872f4ba:	8b 7d fc             	mov    -0x4(%ebp),%edi
 872f4bd:	89 ec                	mov    %ebp,%esp
 872f4bf:	5d                   	pop    %ebp
 872f4c0:	c3                   	ret
 872f4c1:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 872f4c8:	8b 16                	mov    (%esi),%edx
 872f4ca:	8b 0f                	mov    (%edi),%ecx
 872f4cc:	8b 42 fc             	mov    -0x4(%edx),%eax
 872f4cf:	8b 49 fc             	mov    -0x4(%ecx),%ecx
 872f4d2:	8b 40 04             	mov    0x4(%eax),%eax
 872f4d5:	8b 49 04             	mov    0x4(%ecx),%ecx
 872f4d8:	39 c8                	cmp    %ecx,%eax
 872f4da:	74 1b                	je     872f4f7 <_ZNK10__cxxabiv117__pbase_type_info10__do_catchEPKSt9type_infoPPvj+0x87>
 872f4dc:	80 38 2a             	cmpb   $0x2a,(%eax)
 872f4df:	74 57                	je     872f538 <_ZNK10__cxxabiv117__pbase_type_info10__do_catchEPKSt9type_infoPPvj+0xc8>
 872f4e1:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 872f4e5:	89 04 24             	mov    %eax,(%esp)
 872f4e8:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 872f4eb:	e8 f0 ef 94 ff       	call   807e4e0 <strcmp@plt>
 872f4f0:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 872f4f3:	85 c0                	test   %eax,%eax
 872f4f5:	75 41                	jne    872f538 <_ZNK10__cxxabiv117__pbase_type_info10__do_catchEPKSt9type_infoPPvj+0xc8>
 872f4f7:	f6 45 14 01          	testb  $0x1,0x14(%ebp)
 872f4fb:	74 3b                	je     872f538 <_ZNK10__cxxabiv117__pbase_type_info10__do_catchEPKSt9type_infoPPvj+0xc8>
 872f4fd:	8b 46 08             	mov    0x8(%esi),%eax
 872f500:	89 c1                	mov    %eax,%ecx
 872f502:	f7 d1                	not    %ecx
 872f504:	85 4f 08             	test   %ecx,0x8(%edi)
 872f507:	75 2f                	jne    872f538 <_ZNK10__cxxabiv117__pbase_type_info10__do_catchEPKSt9type_infoPPvj+0xc8>
 872f509:	a8 01                	test   $0x1,%al
 872f50b:	75 04                	jne    872f511 <_ZNK10__cxxabiv117__pbase_type_info10__do_catchEPKSt9type_infoPPvj+0xa1>
 872f50d:	83 65 14 fe          	andl   $0xfffffffe,0x14(%ebp)
 872f511:	8b 45 14             	mov    0x14(%ebp),%eax
 872f514:	89 7c 24 04          	mov    %edi,0x4(%esp)
 872f518:	89 34 24             	mov    %esi,(%esp)
 872f51b:	89 44 24 0c          	mov    %eax,0xc(%esp)
 872f51f:	8b 45 10             	mov    0x10(%ebp),%eax
 872f522:	89 44 24 08          	mov    %eax,0x8(%esp)
 872f526:	ff 52 18             	call   *0x18(%edx)
 872f529:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 872f52c:	8b 75 f8             	mov    -0x8(%ebp),%esi
 872f52f:	8b 7d fc             	mov    -0x4(%ebp),%edi
 872f532:	89 ec                	mov    %ebp,%esp
 872f534:	5d                   	pop    %ebp
 872f535:	c3                   	ret
 872f536:	66 90                	xchg   %ax,%ax
 872f538:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 872f53b:	31 c0                	xor    %eax,%eax
 872f53d:	8b 75 f8             	mov    -0x8(%ebp),%esi
 872f540:	8b 7d fc             	mov    -0x4(%ebp),%edi
 872f543:	89 ec                	mov    %ebp,%esp
 872f545:	5d                   	pop    %ebp
 872f546:	c3                   	ret
 872f547:	90                   	nop
 872f548:	90                   	nop
 872f549:	90                   	nop
 872f54a:	90                   	nop
 872f54b:	90                   	nop
 872f54c:	90                   	nop
 872f54d:	90                   	nop
 872f54e:	90                   	nop
 872f54f:	90                   	nop

```

```c
// __cxxabiv1::__pbase_type_info::__do_catch @ 0x872f470

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __cxxabiv1::__pbase_type_info::__do_catch(std::type_info const*, void**, unsigned int) const */

undefined4 __thiscall
__cxxabiv1::__pbase_type_info::__do_catch
          (__pbase_type_info *this,type_info *param_1,void **param_2,uint param_3)

{
  char *pcVar1;
  char *__s2;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  pcVar1 = *(char **)(this + 4);
  if (pcVar1 == *(char **)(param_1 + 4)) {
    return 1;
  }
  if ((*pcVar1 != '*') && (iVar2 = strcmp(pcVar1,*(char **)(param_1 + 4)), iVar2 == 0)) {
    return 1;
  }
  iVar2 = *(int *)this;
  pcVar1 = *(char **)(*(int *)(iVar2 + -4) + 4);
  __s2 = *(char **)(*(int *)(*(int *)param_1 + -4) + 4);
  if (pcVar1 != __s2) {
    if (*pcVar1 == '*') {
      return 0;
    }
    iVar3 = strcmp(pcVar1,__s2);
    if (iVar3 != 0) {
      return 0;
    }
  }
  if (((param_3 & 1) != 0) && ((*(uint *)(param_1 + 8) & ~*(uint *)(this + 8)) == 0)) {
    if ((*(uint *)(this + 8) & 1) == 0) {
      param_3 = param_3 & 0xfffffffe;
    }
    uVar4 = (**(code **)(iVar2 + 0x18))(this,param_1,param_2,param_3);
    return uVar4;
  }
  return 0;
}

```

---

## ~__pbase_type_info

```asm
// === 0872f550 __cxxabiv1::__pbase_type_info::~__pbase_type_info  [0x0872f550-0x872f57f] ===
 872f550:	55                   	push   %ebp
 872f551:	89 e5                	mov    %esp,%ebp
 872f553:	53                   	push   %ebx
 872f554:	e8 9f 38 ff ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 872f559:	81 c3 3f d6 c3 00    	add    $0xc3d63f,%ebx
 872f55f:	83 ec 14             	sub    $0x14,%esp
 872f562:	8b 45 08             	mov    0x8(%ebp),%eax
 872f565:	8b 93 10 fb ff ff    	mov    -0x4f0(%ebx),%edx
 872f56b:	83 c2 08             	add    $0x8,%edx
 872f56e:	89 10                	mov    %edx,(%eax)
 872f570:	89 04 24             	mov    %eax,(%esp)
 872f573:	e8 88 51 ff ff       	call   8724700 <_ZNSt9type_infoD1Ev>
 872f578:	83 c4 14             	add    $0x14,%esp
 872f57b:	5b                   	pop    %ebx
 872f57c:	5d                   	pop    %ebp
 872f57d:	c3                   	ret
 872f57e:	90                   	nop
 872f57f:	90                   	nop

```

```c
// __cxxabiv1::__pbase_type_info::~__pbase_type_info @ 0x872f550

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __cxxabiv1::__pbase_type_info::~__pbase_type_info() */

void __thiscall __cxxabiv1::__pbase_type_info::~__pbase_type_info(__pbase_type_info *this)

{
  *(undefined **)this = PTR_vtable_0936c6a8 + 8;
  std::type_info::~type_info((type_info *)this);
  return;
}

```

---

## ~__pbase_type_info_0872f580

```asm
// === 0872f580 __cxxabiv1::__pbase_type_info::~__pbase_type_info  [0x0872f580-0x872f5bf] ===
 872f580:	55                   	push   %ebp
 872f581:	89 e5                	mov    %esp,%ebp
 872f583:	83 ec 18             	sub    $0x18,%esp
 872f586:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 872f589:	e8 6a 38 ff ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 872f58e:	81 c3 0a d6 c3 00    	add    $0xc3d60a,%ebx
 872f594:	89 75 fc             	mov    %esi,-0x4(%ebp)
 872f597:	8b 75 08             	mov    0x8(%ebp),%esi
 872f59a:	89 34 24             	mov    %esi,(%esp)
 872f59d:	e8 ae ff ff ff       	call   872f550 <_ZN10__cxxabiv117__pbase_type_infoD1Ev>
 872f5a2:	89 34 24             	mov    %esi,(%esp)
 872f5a5:	e8 46 4f ff ff       	call   87244f0 <_ZdlPv>
 872f5aa:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 872f5ad:	8b 75 fc             	mov    -0x4(%ebp),%esi
 872f5b0:	89 ec                	mov    %ebp,%esp
 872f5b2:	5d                   	pop    %ebp
 872f5b3:	c3                   	ret
 872f5b4:	90                   	nop
 872f5b5:	90                   	nop
 872f5b6:	90                   	nop
 872f5b7:	90                   	nop
 872f5b8:	90                   	nop
 872f5b9:	90                   	nop
 872f5ba:	90                   	nop
 872f5bb:	90                   	nop
 872f5bc:	90                   	nop
 872f5bd:	90                   	nop
 872f5be:	90                   	nop
 872f5bf:	90                   	nop

```

```c
// __cxxabiv1::__pbase_type_info::~__pbase_type_info @ 0x872f580

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __cxxabiv1::__pbase_type_info::~__pbase_type_info() */

void __thiscall __cxxabiv1::__pbase_type_info::~__pbase_type_info(__pbase_type_info *this)

{
  ~__pbase_type_info(this);
  operator_delete(this);
  return;
}

```

