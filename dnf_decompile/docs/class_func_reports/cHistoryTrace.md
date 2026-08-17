# cHistoryTrace

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## operator

```asm
// === 0854f990 cHistoryTrace::operator  [0x0854f990-0x854fa01] ===
 854f990:	55                   	push   %ebp
 854f991:	89 e5                	mov    %esp,%ebp
 854f993:	56                   	push   %esi
 854f994:	53                   	push   %ebx
 854f995:	83 ec 20             	sub    $0x20,%esp
 854f998:	e8 4f e6 c2 ff       	call   817dfec <_ZN4CLog8instanceEv>
 854f99d:	05 a8 00 00 00       	add    $0xa8,%eax
 854f9a2:	89 44 24 04          	mov    %eax,0x4(%esp)
 854f9a6:	8d 45 f4             	lea    -0xc(%ebp),%eax
 854f9a9:	89 04 24             	mov    %eax,(%esp)
 854f9ac:	e8 9b 5a bb ff       	call   810544c <_ZN5GuardI5MutexEC1EPS0_>
 854f9b1:	8d 45 10             	lea    0x10(%ebp),%eax
 854f9b4:	89 45 f0             	mov    %eax,-0x10(%ebp)
 854f9b7:	8b 5d f0             	mov    -0x10(%ebp),%ebx
 854f9ba:	e8 2d e6 c2 ff       	call   817dfec <_ZN4CLog8instanceEv>
 854f9bf:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 854f9c3:	8b 55 0c             	mov    0xc(%ebp),%edx
 854f9c6:	89 54 24 04          	mov    %edx,0x4(%esp)
 854f9ca:	89 04 24             	mov    %eax,(%esp)
 854f9cd:	e8 10 f9 ff ff       	call   854f2e2 <_ZN4CLog10logHistoryEPKcPc>
 854f9d2:	eb 1b                	jmp    854f9ef <_ZN13cHistoryTraceclEPKcz+0x5f>
 854f9d4:	89 d3                	mov    %edx,%ebx
 854f9d6:	89 c6                	mov    %eax,%esi
 854f9d8:	8d 45 f4             	lea    -0xc(%ebp),%eax
 854f9db:	89 04 24             	mov    %eax,(%esp)
 854f9de:	e8 85 5a bb ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 854f9e3:	89 f0                	mov    %esi,%eax
 854f9e5:	89 da                	mov    %ebx,%edx
 854f9e7:	89 04 24             	mov    %eax,(%esp)
 854f9ea:	e8 61 3d 59 00       	call   8ae3750 <_Unwind_Resume>
 854f9ef:	8d 45 f4             	lea    -0xc(%ebp),%eax
 854f9f2:	89 04 24             	mov    %eax,(%esp)
 854f9f5:	e8 6e 5a bb ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 854f9fa:	83 c4 20             	add    $0x20,%esp
 854f9fd:	5b                   	pop    %ebx
 854f9fe:	5e                   	pop    %esi
 854f9ff:	5d                   	pop    %ebp
 854fa00:	c3                   	ret
 854fa01:	90                   	nop

```

```c
// cHistoryTrace::operator @ 0x854f990

/* cHistoryTrace::TEMPNAMEPLACEHOLDERVALUE(char const*, ...) */

void __thiscall cHistoryTrace::operator()(cHistoryTrace *this,char *param_1,...)

{
  int iVar1;
  CLog *this_00;
  Guard<Mutex> local_10 [4];
  
  iVar1 = CLog::instance();
  Guard<Mutex>::Guard(local_10,(Mutex *)(iVar1 + 0xa8));
  this_00 = (CLog *)CLog::instance();
                    /* try { // try from 0854f9cd to 0854f9d1 has its CatchHandler @ 0854f9d4 */
  CLog::logHistory(this_00,param_1,&stack0x0000000c);
  Guard<Mutex>::~Guard(local_10);
  return;
}

```

