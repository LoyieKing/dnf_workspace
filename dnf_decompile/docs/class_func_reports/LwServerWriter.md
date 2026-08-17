# LwServerWriter

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## LwServerWriter

```asm
// === 0854e2ae LwServerWriter::LwServerWriter  [0x0854e2ae-0x854e2d3] ===
 854e2ae:	55                   	push   %ebp
 854e2af:	89 e5                	mov    %esp,%ebp
 854e2b1:	83 ec 18             	sub    $0x18,%esp
 854e2b4:	8b 45 08             	mov    0x8(%ebp),%eax
 854e2b7:	89 04 24             	mov    %eax,(%esp)
 854e2ba:	e8 d1 56 58 00       	call   8ad3990 <_ZN9LogWriterC1Ev>
 854e2bf:	8b 45 08             	mov    0x8(%ebp),%eax
 854e2c2:	c7 00 c0 f3 c9 08    	movl   $0x8c9f3c0,(%eax)
 854e2c8:	8b 45 08             	mov    0x8(%ebp),%eax
 854e2cb:	8b 55 0c             	mov    0xc(%ebp),%edx
 854e2ce:	89 50 04             	mov    %edx,0x4(%eax)
 854e2d1:	c9                   	leave
 854e2d2:	c3                   	ret
 854e2d3:	90                   	nop

```

```c
// LwServerWriter::LwServerWriter @ 0x854e2ae

/* LwServerWriter::LwServerWriter(ENUM_LOG_TYPE) */

void __thiscall LwServerWriter::LwServerWriter(LwServerWriter *this,undefined4 param_2)

{
  LogWriter::LogWriter((LogWriter *)this);
  *(undefined ***)this = &PTR__LwServerWriter_08c9f3c0;
  *(undefined4 *)(this + 4) = param_2;
  return;
}

```

---

## log

```asm
// === 0854e2d4 LwServerWriter::log  [0x0854e2d4-0x854e3da] ===
 854e2d4:	55                   	push   %ebp
 854e2d5:	89 e5                	mov    %esp,%ebp
 854e2d7:	56                   	push   %esi
 854e2d8:	53                   	push   %ebx
 854e2d9:	81 ec 30 10 00 00    	sub    $0x1030,%esp
 854e2df:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 854e2e3:	74 35                	je     854e31a <_ZN14LwServerWriter3logEPKcS1_iS1_+0x46>
 854e2e5:	8b 45 18             	mov    0x18(%ebp),%eax
 854e2e8:	89 44 24 14          	mov    %eax,0x14(%esp)
 854e2ec:	8b 45 14             	mov    0x14(%ebp),%eax
 854e2ef:	89 44 24 10          	mov    %eax,0x10(%esp)
 854e2f3:	8b 45 10             	mov    0x10(%ebp),%eax
 854e2f6:	89 44 24 0c          	mov    %eax,0xc(%esp)
 854e2fa:	c7 44 24 08 40 ed c9 	movl   $0x8c9ed40,0x8(%esp)
 854e301:	08 
 854e302:	c7 44 24 04 ff 0f 00 	movl   $0xfff,0x4(%esp)
 854e309:	00 
 854e30a:	8d 85 f4 ef ff ff    	lea    -0x100c(%ebp),%eax
 854e310:	89 04 24             	mov    %eax,(%esp)
 854e313:	e8 c8 f8 b2 ff       	call   807dbe0 <snprintf@plt>
 854e318:	eb 25                	jmp    854e33f <_ZN14LwServerWriter3logEPKcS1_iS1_+0x6b>
 854e31a:	8b 45 18             	mov    0x18(%ebp),%eax
 854e31d:	89 44 24 0c          	mov    %eax,0xc(%esp)
 854e321:	c7 44 24 08 4b ed c9 	movl   $0x8c9ed4b,0x8(%esp)
 854e328:	08 
 854e329:	c7 44 24 04 ff 0f 00 	movl   $0xfff,0x4(%esp)
 854e330:	00 
 854e331:	8d 85 f4 ef ff ff    	lea    -0x100c(%ebp),%eax
 854e337:	89 04 24             	mov    %eax,(%esp)
 854e33a:	e8 a1 f8 b2 ff       	call   807dbe0 <snprintf@plt>
 854e33f:	e8 a8 fc c2 ff       	call   817dfec <_ZN4CLog8instanceEv>
 854e344:	89 c1                	mov    %eax,%ecx
 854e346:	8b 45 08             	mov    0x8(%ebp),%eax
 854e349:	8b 40 04             	mov    0x4(%eax),%eax
 854e34c:	89 c2                	mov    %eax,%edx
 854e34e:	89 d0                	mov    %edx,%eax
 854e350:	01 c0                	add    %eax,%eax
 854e352:	01 d0                	add    %edx,%eax
 854e354:	c1 e0 03             	shl    $0x3,%eax
 854e357:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 854e35a:	89 44 24 04          	mov    %eax,0x4(%esp)
 854e35e:	8d 45 f4             	lea    -0xc(%ebp),%eax
 854e361:	89 04 24             	mov    %eax,(%esp)
 854e364:	e8 e3 70 bb ff       	call   810544c <_ZN5GuardI5MutexEC1EPS0_>
 854e369:	8b 45 08             	mov    0x8(%ebp),%eax
 854e36c:	8b 40 04             	mov    0x4(%eax),%eax
 854e36f:	83 f8 01             	cmp    $0x1,%eax
 854e372:	74 07                	je     854e37b <_ZN14LwServerWriter3logEPKcS1_iS1_+0xa7>
 854e374:	83 f8 02             	cmp    $0x2,%eax
 854e377:	74 1b                	je     854e394 <_ZN14LwServerWriter3logEPKcS1_iS1_+0xc0>
 854e379:	eb 30                	jmp    854e3ab <_ZN14LwServerWriter3logEPKcS1_iS1_+0xd7>
 854e37b:	e8 6c fc c2 ff       	call   817dfec <_ZN4CLog8instanceEv>
 854e380:	8d 95 f4 ef ff ff    	lea    -0x100c(%ebp),%edx
 854e386:	89 54 24 04          	mov    %edx,0x4(%esp)
 854e38a:	89 04 24             	mov    %eax,(%esp)
 854e38d:	e8 30 0e 00 00       	call   854f1c2 <_ZN4CLog8logErrorEPKcz>
 854e392:	eb 17                	jmp    854e3ab <_ZN14LwServerWriter3logEPKcS1_iS1_+0xd7>
 854e394:	e8 53 fc c2 ff       	call   817dfec <_ZN4CLog8instanceEv>
 854e399:	8d 95 f4 ef ff ff    	lea    -0x100c(%ebp),%edx
 854e39f:	89 54 24 04          	mov    %edx,0x4(%esp)
 854e3a3:	89 04 24             	mov    %eax,(%esp)
 854e3a6:	e8 5f 10 00 00       	call   854f40a <_ZN4CLog8logDebugEPKcz>
 854e3ab:	8d 45 f4             	lea    -0xc(%ebp),%eax
 854e3ae:	89 04 24             	mov    %eax,(%esp)
 854e3b1:	e8 b2 70 bb ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 854e3b6:	81 c4 30 10 00 00    	add    $0x1030,%esp
 854e3bc:	5b                   	pop    %ebx
 854e3bd:	5e                   	pop    %esi
 854e3be:	5d                   	pop    %ebp
 854e3bf:	c3                   	ret
 854e3c0:	89 d3                	mov    %edx,%ebx
 854e3c2:	89 c6                	mov    %eax,%esi
 854e3c4:	8d 45 f4             	lea    -0xc(%ebp),%eax
 854e3c7:	89 04 24             	mov    %eax,(%esp)
 854e3ca:	e8 99 70 bb ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 854e3cf:	89 f0                	mov    %esi,%eax
 854e3d1:	89 da                	mov    %ebx,%edx
 854e3d3:	89 04 24             	mov    %eax,(%esp)
 854e3d6:	e8 75 53 59 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// LwServerWriter::log @ 0x854e2d4

/* LwServerWriter::log(char const*, char const*, int, char const*) */

void __thiscall
LwServerWriter::log(LwServerWriter *this,char *param_1,char *param_2,int param_3,char *param_4)

{
  int iVar1;
  CLog *this_00;
  char *pcVar2;
  char local_1010 [4096];
  Guard<Mutex> local_10 [4];
  
  if (param_2 == (char *)0x0) {
    snprintf(local_1010,0xfff,"%s",param_4);
  }
  else {
    snprintf(local_1010,0xfff,"%s(%d): %s",param_2,param_3,param_4);
  }
  iVar1 = CLog::instance();
  Guard<Mutex>::Guard(local_10,(Mutex *)(iVar1 + *(int *)(this + 4) * 0x18));
  if (*(int *)(this + 4) == 1) {
    this_00 = (CLog *)CLog::instance();
                    /* try { // try from 0854e38d to 0854e391 has its CatchHandler @ 0854e3c0 */
    CLog::logError(this_00,local_1010);
  }
  else if (*(int *)(this + 4) == 2) {
    pcVar2 = (char *)CLog::instance();
    CLog::logDebug(pcVar2,local_1010);
  }
  Guard<Mutex>::~Guard(local_10);
  return;
}

```

