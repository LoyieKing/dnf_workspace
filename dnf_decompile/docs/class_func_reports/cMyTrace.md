# cMyTrace

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## cMyTrace

```asm
// === 0854f718 cMyTrace::cMyTrace  [0x0854f718-0x854f745] ===
 854f718:	55                   	push   %ebp
 854f719:	89 e5                	mov    %esp,%ebp
 854f71b:	8b 45 08             	mov    0x8(%ebp),%eax
 854f71e:	c6 40 0c 01          	movb   $0x1,0xc(%eax)
 854f722:	8b 45 08             	mov    0x8(%ebp),%eax
 854f725:	c6 40 0d 00          	movb   $0x0,0xd(%eax)
 854f729:	8b 45 08             	mov    0x8(%ebp),%eax
 854f72c:	8b 55 0c             	mov    0xc(%ebp),%edx
 854f72f:	89 10                	mov    %edx,(%eax)
 854f731:	8b 45 08             	mov    0x8(%ebp),%eax
 854f734:	8b 55 10             	mov    0x10(%ebp),%edx
 854f737:	89 50 04             	mov    %edx,0x4(%eax)
 854f73a:	8b 45 08             	mov    0x8(%ebp),%eax
 854f73d:	8b 55 14             	mov    0x14(%ebp),%edx
 854f740:	89 50 08             	mov    %edx,0x8(%eax)
 854f743:	5d                   	pop    %ebp
 854f744:	c3                   	ret
 854f745:	90                   	nop

```

```c
// cMyTrace::cMyTrace @ 0x854f718

/* cMyTrace::cMyTrace(char const*, int, int) */

void __thiscall cMyTrace::cMyTrace(cMyTrace *this,char *param_1,int param_2,int param_3)

{
  this[0xc] = (cMyTrace)0x1;
  this[0xd] = (cMyTrace)0x0;
  *(char **)this = param_1;
  *(int *)(this + 4) = param_2;
  *(int *)(this + 8) = param_3;
  return;
}

```

---

## cMyTrace_0854f746

```asm
// === 0854f746 cMyTrace::cMyTrace  [0x0854f746-0x854f787] ===
 854f746:	55                   	push   %ebp
 854f747:	89 e5                	mov    %esp,%ebp
 854f749:	83 ec 08             	sub    $0x8,%esp
 854f74c:	8b 55 18             	mov    0x18(%ebp),%edx
 854f74f:	8b 45 1c             	mov    0x1c(%ebp),%eax
 854f752:	88 55 fc             	mov    %dl,-0x4(%ebp)
 854f755:	88 45 f8             	mov    %al,-0x8(%ebp)
 854f758:	8b 45 08             	mov    0x8(%ebp),%eax
 854f75b:	8b 55 0c             	mov    0xc(%ebp),%edx
 854f75e:	89 10                	mov    %edx,(%eax)
 854f760:	8b 45 08             	mov    0x8(%ebp),%eax
 854f763:	8b 55 10             	mov    0x10(%ebp),%edx
 854f766:	89 50 04             	mov    %edx,0x4(%eax)
 854f769:	8b 45 08             	mov    0x8(%ebp),%eax
 854f76c:	8b 55 14             	mov    0x14(%ebp),%edx
 854f76f:	89 50 08             	mov    %edx,0x8(%eax)
 854f772:	8b 45 08             	mov    0x8(%ebp),%eax
 854f775:	0f b6 55 f8          	movzbl -0x8(%ebp),%edx
 854f779:	88 50 0c             	mov    %dl,0xc(%eax)
 854f77c:	8b 45 08             	mov    0x8(%ebp),%eax
 854f77f:	0f b6 55 fc          	movzbl -0x4(%ebp),%edx
 854f783:	88 50 0d             	mov    %dl,0xd(%eax)
 854f786:	c9                   	leave
 854f787:	c3                   	ret

```

```c
// cMyTrace::cMyTrace @ 0x854f746

/* cMyTrace::cMyTrace(char const*, int, int, bool, bool) */

void __thiscall
cMyTrace::cMyTrace(cMyTrace *this,char *param_1,int param_2,int param_3,bool param_4,bool param_5)

{
  *(char **)this = param_1;
  *(int *)(this + 4) = param_2;
  *(int *)(this + 8) = param_3;
  this[0xc] = (cMyTrace)param_5;
  this[0xd] = (cMyTrace)param_4;
  return;
}

```

---

## operator

```asm
// === 0854f788 cMyTrace::operator  [0x0854f788-0x854f98f] ===
 854f788:	55                   	push   %ebp
 854f789:	89 e5                	mov    %esp,%ebp
 854f78b:	56                   	push   %esi
 854f78c:	53                   	push   %ebx
 854f78d:	81 ec 20 10 00 00    	sub    $0x1020,%esp
 854f793:	c7 44 24 08 00 10 00 	movl   $0x1000,0x8(%esp)
 854f79a:	00 
 854f79b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 854f7a2:	00 
 854f7a3:	8d 85 ec ef ff ff    	lea    -0x1014(%ebp),%eax
 854f7a9:	89 04 24             	mov    %eax,(%esp)
 854f7ac:	e8 0f e5 b2 ff       	call   807dcc0 <memset@plt>
 854f7b1:	8b 45 08             	mov    0x8(%ebp),%eax
 854f7b4:	8b 40 08             	mov    0x8(%eax),%eax
 854f7b7:	83 f8 08             	cmp    $0x8,%eax
 854f7ba:	74 34                	je     854f7f0 <_ZN8cMyTraceclEPKcz+0x68>
 854f7bc:	8b 45 08             	mov    0x8(%ebp),%eax
 854f7bf:	8b 40 08             	mov    0x8(%eax),%eax
 854f7c2:	83 f8 09             	cmp    $0x9,%eax
 854f7c5:	74 29                	je     854f7f0 <_ZN8cMyTraceclEPKcz+0x68>
 854f7c7:	8b 45 08             	mov    0x8(%ebp),%eax
 854f7ca:	8b 50 04             	mov    0x4(%eax),%edx
 854f7cd:	8b 45 08             	mov    0x8(%ebp),%eax
 854f7d0:	8b 00                	mov    (%eax),%eax
 854f7d2:	89 54 24 0c          	mov    %edx,0xc(%esp)
 854f7d6:	89 44 24 08          	mov    %eax,0x8(%esp)
 854f7da:	c7 44 24 04 e9 ed c9 	movl   $0x8c9ede9,0x4(%esp)
 854f7e1:	08 
 854f7e2:	8d 85 ec ef ff ff    	lea    -0x1014(%ebp),%eax
 854f7e8:	89 04 24             	mov    %eax,(%esp)
 854f7eb:	e8 50 ec b2 ff       	call   807e440 <sprintf@plt>
 854f7f0:	8d 45 10             	lea    0x10(%ebp),%eax
 854f7f3:	89 45 f0             	mov    %eax,-0x10(%ebp)
 854f7f6:	8d 85 ec ef ff ff    	lea    -0x1014(%ebp),%eax
 854f7fc:	89 04 24             	mov    %eax,(%esp)
 854f7ff:	e8 ac eb b2 ff       	call   807e3b0 <strlen@plt>
 854f804:	89 45 f4             	mov    %eax,-0xc(%ebp)
 854f807:	8b 55 f0             	mov    -0x10(%ebp),%edx
 854f80a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 854f80d:	b9 ff 0f 00 00       	mov    $0xfff,%ecx
 854f812:	29 c1                	sub    %eax,%ecx
 854f814:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 854f817:	8d 85 ec ef ff ff    	lea    -0x1014(%ebp),%eax
 854f81d:	01 d8                	add    %ebx,%eax
 854f81f:	89 54 24 0c          	mov    %edx,0xc(%esp)
 854f823:	8b 55 0c             	mov    0xc(%ebp),%edx
 854f826:	89 54 24 08          	mov    %edx,0x8(%esp)
 854f82a:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 854f82e:	89 04 24             	mov    %eax,(%esp)
 854f831:	e8 ba ed b2 ff       	call   807e5f0 <vsnprintf@plt>
 854f836:	e8 b1 e7 c2 ff       	call   817dfec <_ZN4CLog8instanceEv>
 854f83b:	89 c1                	mov    %eax,%ecx
 854f83d:	8b 45 08             	mov    0x8(%ebp),%eax
 854f840:	8b 50 08             	mov    0x8(%eax),%edx
 854f843:	89 d0                	mov    %edx,%eax
 854f845:	01 c0                	add    %eax,%eax
 854f847:	01 d0                	add    %edx,%eax
 854f849:	c1 e0 03             	shl    $0x3,%eax
 854f84c:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 854f84f:	89 44 24 04          	mov    %eax,0x4(%esp)
 854f853:	8d 45 ec             	lea    -0x14(%ebp),%eax
 854f856:	89 04 24             	mov    %eax,(%esp)
 854f859:	e8 ee 5b bb ff       	call   810544c <_ZN5GuardI5MutexEC1EPS0_>
 854f85e:	8b 45 08             	mov    0x8(%ebp),%eax
 854f861:	8b 40 08             	mov    0x8(%eax),%eax
 854f864:	83 f8 09             	cmp    $0x9,%eax
 854f867:	0f 87 f2 00 00 00    	ja     854f95f <_ZN8cMyTraceclEPKcz+0x1d7>
 854f86d:	8b 04 85 f4 ed c9 08 	mov    0x8c9edf4(,%eax,4),%eax
 854f874:	ff e0                	jmp    *%eax
 854f876:	e8 71 e7 c2 ff       	call   817dfec <_ZN4CLog8instanceEv>
 854f87b:	8d 95 ec ef ff ff    	lea    -0x1014(%ebp),%edx
 854f881:	89 54 24 04          	mov    %edx,0x4(%esp)
 854f885:	89 04 24             	mov    %eax,(%esp)
 854f888:	e8 d5 f8 ff ff       	call   854f162 <_ZN4CLog9logNoticeEPKcz>
 854f88d:	e9 cd 00 00 00       	jmp    854f95f <_ZN8cMyTraceclEPKcz+0x1d7>
 854f892:	e8 55 e7 c2 ff       	call   817dfec <_ZN4CLog8instanceEv>
 854f897:	8d 95 ec ef ff ff    	lea    -0x1014(%ebp),%edx
 854f89d:	89 54 24 04          	mov    %edx,0x4(%esp)
 854f8a1:	89 04 24             	mov    %eax,(%esp)
 854f8a4:	e8 19 f9 ff ff       	call   854f1c2 <_ZN4CLog8logErrorEPKcz>
 854f8a9:	e9 b1 00 00 00       	jmp    854f95f <_ZN8cMyTraceclEPKcz+0x1d7>
 854f8ae:	e8 39 e7 c2 ff       	call   817dfec <_ZN4CLog8instanceEv>
 854f8b3:	8d 95 ec ef ff ff    	lea    -0x1014(%ebp),%edx
 854f8b9:	89 54 24 04          	mov    %edx,0x4(%esp)
 854f8bd:	89 04 24             	mov    %eax,(%esp)
 854f8c0:	e8 45 fb ff ff       	call   854f40a <_ZN4CLog8logDebugEPKcz>
 854f8c5:	e9 95 00 00 00       	jmp    854f95f <_ZN8cMyTraceclEPKcz+0x1d7>
 854f8ca:	e8 1d e7 c2 ff       	call   817dfec <_ZN4CLog8instanceEv>
 854f8cf:	8d 95 ec ef ff ff    	lea    -0x1014(%ebp),%edx
 854f8d5:	89 54 24 04          	mov    %edx,0x4(%esp)
 854f8d9:	89 04 24             	mov    %eax,(%esp)
 854f8dc:	e8 33 fb ff ff       	call   854f414 <_ZN4CLog10logConsoleEPKcz>
 854f8e1:	eb 7c                	jmp    854f95f <_ZN8cMyTraceclEPKcz+0x1d7>
 854f8e3:	e8 04 e7 c2 ff       	call   817dfec <_ZN4CLog8instanceEv>
 854f8e8:	8d 95 ec ef ff ff    	lea    -0x1014(%ebp),%edx
 854f8ee:	89 54 24 04          	mov    %edx,0x4(%esp)
 854f8f2:	89 04 24             	mov    %eax,(%esp)
 854f8f5:	e8 88 f9 ff ff       	call   854f282 <_ZN4CLog8logMoneyEPKcz>
 854f8fa:	eb 63                	jmp    854f95f <_ZN8cMyTraceclEPKcz+0x1d7>
 854f8fc:	e8 eb e6 c2 ff       	call   817dfec <_ZN4CLog8instanceEv>
 854f901:	8d 95 ec ef ff ff    	lea    -0x1014(%ebp),%edx
 854f907:	89 54 24 04          	mov    %edx,0x4(%esp)
 854f90b:	89 04 24             	mov    %eax,(%esp)
 854f90e:	e8 0f f9 ff ff       	call   854f222 <_ZN4CLog11logCriticalEPKcz>
 854f913:	eb 4a                	jmp    854f95f <_ZN8cMyTraceclEPKcz+0x1d7>
 854f915:	e8 d2 e6 c2 ff       	call   817dfec <_ZN4CLog8instanceEv>
 854f91a:	8d 95 ec ef ff ff    	lea    -0x1014(%ebp),%edx
 854f920:	89 54 24 04          	mov    %edx,0x4(%esp)
 854f924:	89 04 24             	mov    %eax,(%esp)
 854f927:	e8 94 fb ff ff       	call   854f4c0 <_ZN4CLog11logSnapShotEPKcz>
 854f92c:	8b 45 08             	mov    0x8(%ebp),%eax
 854f92f:	0f b6 40 0c          	movzbl 0xc(%eax),%eax
 854f933:	0f b6 f0             	movzbl %al,%esi
 854f936:	8b 45 08             	mov    0x8(%ebp),%eax
 854f939:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 854f93d:	0f b6 d8             	movzbl %al,%ebx
 854f940:	e8 a7 e6 c2 ff       	call   817dfec <_ZN4CLog8instanceEv>
 854f945:	8d 95 ec ef ff ff    	lea    -0x1014(%ebp),%edx
 854f94b:	89 54 24 0c          	mov    %edx,0xc(%esp)
 854f94f:	89 74 24 08          	mov    %esi,0x8(%esp)
 854f953:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 854f957:	89 04 24             	mov    %eax,(%esp)
 854f95a:	e8 c1 fb ff ff       	call   854f520 <_ZN4CLog7logInitEbbPKcz>
 854f95f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 854f962:	89 04 24             	mov    %eax,(%esp)
 854f965:	e8 fe 5a bb ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 854f96a:	81 c4 20 10 00 00    	add    $0x1020,%esp
 854f970:	5b                   	pop    %ebx
 854f971:	5e                   	pop    %esi
 854f972:	5d                   	pop    %ebp
 854f973:	c3                   	ret
 854f974:	89 d3                	mov    %edx,%ebx
 854f976:	89 c6                	mov    %eax,%esi
 854f978:	8d 45 ec             	lea    -0x14(%ebp),%eax
 854f97b:	89 04 24             	mov    %eax,(%esp)
 854f97e:	e8 e5 5a bb ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 854f983:	89 f0                	mov    %esi,%eax
 854f985:	89 da                	mov    %ebx,%edx
 854f987:	89 04 24             	mov    %eax,(%esp)
 854f98a:	e8 c1 3d 59 00       	call   8ae3750 <_Unwind_Resume>
 854f98f:	90                   	nop

```

```c
// cMyTrace::operator @ 0x854f788

/* cMyTrace::TEMPNAMEPLACEHOLDERVALUE(char const*, ...) */

void __thiscall cMyTrace::operator()(cMyTrace *this,char *param_1,...)

{
  cMyTrace cVar1;
  cMyTrace cVar2;
  int iVar3;
  char *pcVar4;
  CLog *pCVar5;
  char local_1018 [4096];
  Guard<Mutex> local_18 [4];
  undefined1 *local_14;
  size_t local_10;
  
  memset(local_1018,0,0x1000);
  if ((*(int *)(this + 8) != 8) && (*(int *)(this + 8) != 9)) {
    sprintf(local_1018,"%s(%d): ",*(undefined4 *)this,*(undefined4 *)(this + 4));
  }
  local_14 = &stack0x0000000c;
  local_10 = strlen(local_1018);
  vsnprintf(local_1018 + local_10,0xfff - local_10,param_1,local_14);
  iVar3 = CLog::instance();
  Guard<Mutex>::Guard(local_18,(Mutex *)(iVar3 + *(int *)(this + 8) * 0x18));
  switch(*(undefined4 *)(this + 8)) {
  case 0:
    pCVar5 = (CLog *)CLog::instance();
                    /* try { // try from 0854f888 to 0854f95e has its CatchHandler @ 0854f974 */
    CLog::logNotice(pCVar5,local_1018);
    break;
  case 1:
    pCVar5 = (CLog *)CLog::instance();
    CLog::logError(pCVar5,local_1018);
    break;
  case 2:
    pcVar4 = (char *)CLog::instance();
    CLog::logDebug(pcVar4,local_1018);
    break;
  case 3:
    pCVar5 = (CLog *)CLog::instance();
    CLog::logConsole(pCVar5,local_1018);
    break;
  case 4:
    pCVar5 = (CLog *)CLog::instance();
    CLog::logMoney(pCVar5,local_1018);
    break;
  case 5:
    pCVar5 = (CLog *)CLog::instance();
    CLog::logCritical(pCVar5,local_1018);
    break;
  case 8:
    pCVar5 = (CLog *)CLog::instance();
    CLog::logSnapShot(pCVar5,local_1018);
  case 9:
    cVar1 = this[0xc];
    cVar2 = this[0xd];
    pCVar5 = (CLog *)CLog::instance();
    CLog::logInit(pCVar5,(bool)cVar2,(bool)cVar1,local_1018);
  }
  Guard<Mutex>::~Guard(local_18);
  return;
}

```

