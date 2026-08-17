# OS_API

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 10

---

## Exit

```asm
// === 0858c53a OS_API::Exit  [0x0858c53a-0x858c54b] ===
 858c53a:	55                   	push   %ebp
 858c53b:	89 e5                	mov    %esp,%ebp
 858c53d:	83 ec 18             	sub    $0x18,%esp
 858c540:	8b 45 08             	mov    0x8(%ebp),%eax
 858c543:	89 04 24             	mov    %eax,(%esp)
 858c546:	e8 75 1c af ff       	call   807e1c0 <exit@plt>
 858c54b:	90                   	nop

```

```c
// OS_API::Exit @ 0x858c53a

/* OS_API::Exit(int) */

void OS_API::Exit(int param_1)

{
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}

```

---

## GetDateTimeTick

```asm
// === 0858c802 OS_API::GetDateTimeTick  [0x0858c802-0x858c81b] ===
 858c802:	55                   	push   %ebp
 858c803:	89 e5                	mov    %esp,%ebp
 858c805:	83 ec 28             	sub    $0x28,%esp
 858c808:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 858c80f:	e8 8a f4 b3 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 858c814:	89 45 f4             	mov    %eax,-0xc(%ebp)
 858c817:	8b 45 f4             	mov    -0xc(%ebp),%eax
 858c81a:	c9                   	leave
 858c81b:	c3                   	ret

```

```c
// OS_API::GetDateTimeTick @ 0x858c802

/* OS_API::GetDateTimeTick() */

undefined4 OS_API::GetDateTimeTick(void)

{
  undefined4 uVar1;
  
  uVar1 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  return uVar1;
}

```

---

## Sleep

```asm
// === 0858c4e0 OS_API::Sleep  [0x0858c4e0-0x858c4f9] ===
 858c4e0:	55                   	push   %ebp
 858c4e1:	89 e5                	mov    %esp,%ebp
 858c4e3:	83 ec 18             	sub    $0x18,%esp
 858c4e6:	8b 45 08             	mov    0x8(%ebp),%eax
 858c4e9:	69 c0 e8 03 00 00    	imul   $0x3e8,%eax,%eax
 858c4ef:	89 04 24             	mov    %eax,(%esp)
 858c4f2:	e8 39 14 af ff       	call   807d930 <usleep@plt>
 858c4f7:	c9                   	leave
 858c4f8:	c3                   	ret
 858c4f9:	90                   	nop

```

```c
// OS_API::Sleep @ 0x858c4e0

/* OS_API::Sleep(int) */

void OS_API::Sleep(int param_1)

{
  usleep(param_1 * 1000);
  return;
}

```

---

## WriteLastBookmark

```asm
// === 0858c6d4 OS_API::WriteLastBookmark  [0x0858c6d4-0x858c71d] ===
 858c6d4:	55                   	push   %ebp
 858c6d5:	89 e5                	mov    %esp,%ebp
 858c6d7:	83 ec 28             	sub    $0x28,%esp
 858c6da:	c7 44 24 04 2c c7 ca 	movl   $0x8cac72c,0x4(%esp)
 858c6e1:	08 
 858c6e2:	8b 45 08             	mov    0x8(%ebp),%eax
 858c6e5:	89 04 24             	mov    %eax,(%esp)
 858c6e8:	e8 83 20 af ff       	call   807e770 <fopen@plt>
 858c6ed:	89 45 f4             	mov    %eax,-0xc(%ebp)
 858c6f0:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 858c6f4:	74 25                	je     858c71b <_ZN6OS_API17WriteLastBookmarkEPKci+0x47>
 858c6f6:	8b 45 0c             	mov    0xc(%ebp),%eax
 858c6f9:	89 44 24 08          	mov    %eax,0x8(%esp)
 858c6fd:	c7 44 24 04 98 c7 ca 	movl   $0x8cac798,0x4(%esp)
 858c704:	08 
 858c705:	8b 45 f4             	mov    -0xc(%ebp),%eax
 858c708:	89 04 24             	mov    %eax,(%esp)
 858c70b:	e8 80 13 af ff       	call   807da90 <fprintf@plt>
 858c710:	8b 45 f4             	mov    -0xc(%ebp),%eax
 858c713:	89 04 24             	mov    %eax,(%esp)
 858c716:	e8 85 17 af ff       	call   807dea0 <fclose@plt>
 858c71b:	c9                   	leave
 858c71c:	c3                   	ret
 858c71d:	90                   	nop

```

```c
// OS_API::WriteLastBookmark @ 0x858c6d4

/* OS_API::WriteLastBookmark(char const*, int) */

void OS_API::WriteLastBookmark(char *param_1,int param_2)

{
  FILE *__stream;
  
  __stream = fopen(param_1,"wb");
  if (__stream != (FILE *)0x0) {
    fprintf(__stream,"bm:%d",param_2);
    fclose(__stream);
  }
  return;
}

```

---

## WriteLastSig

```asm
// === 0858c54c OS_API::WriteLastSig  [0x0858c54c-0x858c5f3] ===
 858c54c:	55                   	push   %ebp
 858c54d:	89 e5                	mov    %esp,%ebp
 858c54f:	57                   	push   %edi
 858c550:	53                   	push   %ebx
 858c551:	81 ec 30 01 00 00    	sub    $0x130,%esp
 858c557:	8d 9d f4 fe ff ff    	lea    -0x10c(%ebp),%ebx
 858c55d:	b8 00 00 00 00       	mov    $0x0,%eax
 858c562:	ba 40 00 00 00       	mov    $0x40,%edx
 858c567:	89 df                	mov    %ebx,%edi
 858c569:	89 d1                	mov    %edx,%ecx
 858c56b:	f3 ab                	rep stos %eax,%es:(%edi)
 858c56d:	8b 45 0c             	mov    0xc(%ebp),%eax
 858c570:	89 44 24 0c          	mov    %eax,0xc(%esp)
 858c574:	8b 45 08             	mov    0x8(%ebp),%eax
 858c577:	89 44 24 08          	mov    %eax,0x8(%esp)
 858c57b:	c7 44 24 04 20 c7 ca 	movl   $0x8cac720,0x4(%esp)
 858c582:	08 
 858c583:	8d 85 f4 fe ff ff    	lea    -0x10c(%ebp),%eax
 858c589:	89 04 24             	mov    %eax,(%esp)
 858c58c:	e8 af 1e af ff       	call   807e440 <sprintf@plt>
 858c591:	c7 44 24 04 2c c7 ca 	movl   $0x8cac72c,0x4(%esp)
 858c598:	08 
 858c599:	8d 85 f4 fe ff ff    	lea    -0x10c(%ebp),%eax
 858c59f:	89 04 24             	mov    %eax,(%esp)
 858c5a2:	e8 c9 21 af ff       	call   807e770 <fopen@plt>
 858c5a7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 858c5aa:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 858c5ae:	74 3a                	je     858c5ea <_ZN6OS_API12WriteLastSigEPKcS1_iiPKvi+0x9e>
 858c5b0:	8b 45 1c             	mov    0x1c(%ebp),%eax
 858c5b3:	89 44 24 14          	mov    %eax,0x14(%esp)
 858c5b7:	8b 45 18             	mov    0x18(%ebp),%eax
 858c5ba:	89 44 24 10          	mov    %eax,0x10(%esp)
 858c5be:	8b 45 14             	mov    0x14(%ebp),%eax
 858c5c1:	89 44 24 0c          	mov    %eax,0xc(%esp)
 858c5c5:	8b 45 10             	mov    0x10(%ebp),%eax
 858c5c8:	89 44 24 08          	mov    %eax,0x8(%esp)
 858c5cc:	c7 44 24 04 2f c7 ca 	movl   $0x8cac72f,0x4(%esp)
 858c5d3:	08 
 858c5d4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 858c5d7:	89 04 24             	mov    %eax,(%esp)
 858c5da:	e8 b1 14 af ff       	call   807da90 <fprintf@plt>
 858c5df:	8b 45 f4             	mov    -0xc(%ebp),%eax
 858c5e2:	89 04 24             	mov    %eax,(%esp)
 858c5e5:	e8 b6 18 af ff       	call   807dea0 <fclose@plt>
 858c5ea:	81 c4 30 01 00 00    	add    $0x130,%esp
 858c5f0:	5b                   	pop    %ebx
 858c5f1:	5f                   	pop    %edi
 858c5f2:	5d                   	pop    %ebp
 858c5f3:	c3                   	ret

```

```c
// OS_API::WriteLastSig @ 0x858c54c

/* OS_API::WriteLastSig(char const*, char const*, int, int, void const*, int) */

void OS_API::WriteLastSig
               (char *param_1,char *param_2,int param_3,int param_4,void *param_5,int param_6)

{
  int iVar1;
  char *pcVar2;
  char local_110 [256];
  FILE *local_10;
  
  pcVar2 = local_110;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2 = pcVar2 + 4;
  }
  sprintf(local_110,"./log/%s/%s",param_1,param_2);
  local_10 = fopen(local_110,"wb");
  if (local_10 != (FILE *)0x0) {
    fprintf(local_10,"K:%d C:%d P:%p SZ:%d\n",param_3,param_4,param_5,param_6);
    fclose(local_10);
  }
  return;
}

```

---

## WriteLastSig_0858c5f4

```asm
// === 0858c5f4 OS_API::WriteLastSig  [0x0858c5f4-0x858c6d3] ===
 858c5f4:	55                   	push   %ebp
 858c5f5:	89 e5                	mov    %esp,%ebp
 858c5f7:	57                   	push   %edi
 858c5f8:	53                   	push   %ebx
 858c5f9:	81 ec 50 02 00 00    	sub    $0x250,%esp
 858c5ff:	8d 9d f0 fd ff ff    	lea    -0x210(%ebp),%ebx
 858c605:	b8 00 00 00 00       	mov    $0x0,%eax
 858c60a:	ba 80 00 00 00       	mov    $0x80,%edx
 858c60f:	89 df                	mov    %ebx,%edi
 858c611:	89 d1                	mov    %edx,%ecx
 858c613:	f3 ab                	rep stos %eax,%es:(%edi)
 858c615:	8b 45 0c             	mov    0xc(%ebp),%eax
 858c618:	89 44 24 0c          	mov    %eax,0xc(%esp)
 858c61c:	8b 45 08             	mov    0x8(%ebp),%eax
 858c61f:	89 44 24 08          	mov    %eax,0x8(%esp)
 858c623:	c7 44 24 04 20 c7 ca 	movl   $0x8cac720,0x4(%esp)
 858c62a:	08 
 858c62b:	8d 85 f0 fd ff ff    	lea    -0x210(%ebp),%eax
 858c631:	89 04 24             	mov    %eax,(%esp)
 858c634:	e8 07 1e af ff       	call   807e440 <sprintf@plt>
 858c639:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 858c640:	00 
 858c641:	8b 45 10             	mov    0x10(%ebp),%eax
 858c644:	89 04 24             	mov    %eax,(%esp)
 858c647:	e8 ff c9 b7 ff       	call   810904b <_Z14NumberToStringji>
 858c64c:	89 c3                	mov    %eax,%ebx
 858c64e:	c7 44 24 08 4e 00 00 	movl   $0x4e,0x8(%esp)
 858c655:	00 
 858c656:	c7 44 24 04 c0 d3 ca 	movl   $0x8cad3c0,0x4(%esp)
 858c65d:	08 
 858c65e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 858c661:	89 04 24             	mov    %eax,(%esp)
 858c664:	e8 03 b2 b7 ff       	call   810786c <_ZN10CMyFileLogC1EPKci>
 858c669:	8b 45 34             	mov    0x34(%ebp),%eax
 858c66c:	89 44 24 30          	mov    %eax,0x30(%esp)
 858c670:	8b 45 30             	mov    0x30(%ebp),%eax
 858c673:	89 44 24 2c          	mov    %eax,0x2c(%esp)
 858c677:	8b 45 2c             	mov    0x2c(%ebp),%eax
 858c67a:	89 44 24 28          	mov    %eax,0x28(%esp)
 858c67e:	8b 45 28             	mov    0x28(%ebp),%eax
 858c681:	89 44 24 24          	mov    %eax,0x24(%esp)
 858c685:	8b 45 24             	mov    0x24(%ebp),%eax
 858c688:	89 44 24 20          	mov    %eax,0x20(%esp)
 858c68c:	8b 45 20             	mov    0x20(%ebp),%eax
 858c68f:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 858c693:	8b 45 1c             	mov    0x1c(%ebp),%eax
 858c696:	89 44 24 18          	mov    %eax,0x18(%esp)
 858c69a:	8b 45 18             	mov    0x18(%ebp),%eax
 858c69d:	89 44 24 14          	mov    %eax,0x14(%esp)
 858c6a1:	8b 45 14             	mov    0x14(%ebp),%eax
 858c6a4:	89 44 24 10          	mov    %eax,0x10(%esp)
 858c6a8:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 858c6ac:	c7 44 24 08 48 c7 ca 	movl   $0x8cac748,0x8(%esp)
 858c6b3:	08 
 858c6b4:	8d 85 f0 fd ff ff    	lea    -0x210(%ebp),%eax
 858c6ba:	89 44 24 04          	mov    %eax,0x4(%esp)
 858c6be:	8d 45 f0             	lea    -0x10(%ebp),%eax
 858c6c1:	89 04 24             	mov    %eax,(%esp)
 858c6c4:	e8 cf b1 b7 ff       	call   8107898 <_ZN10CMyFileLogclEPKcS1_z>
 858c6c9:	81 c4 50 02 00 00    	add    $0x250,%esp
 858c6cf:	5b                   	pop    %ebx
 858c6d0:	5f                   	pop    %edi
 858c6d1:	5d                   	pop    %ebp
 858c6d2:	c3                   	ret
 858c6d3:	90                   	nop

```

```c
// OS_API::WriteLastSig @ 0x858c5f4

/* OS_API::WriteLastSig(char const*, char const*, unsigned int, int, int, void const*, int, int,
   int, int, int, int) */

void OS_API::WriteLastSig
               (char *param_1,char *param_2,uint param_3,int param_4,int param_5,void *param_6,
               int param_7,int param_8,int param_9,int param_10,int param_11,int param_12)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  char local_214 [512];
  CMyFileLog local_14 [8];
  
  pcVar3 = local_214;
  for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
    pcVar3[0] = '\0';
    pcVar3[1] = '\0';
    pcVar3[2] = '\0';
    pcVar3[3] = '\0';
    pcVar3 = pcVar3 + 4;
  }
  sprintf(local_214,"./log/%s/%s",param_1,param_2);
  uVar1 = NumberToString(param_3,0);
  CMyFileLog::CMyFileLog
            (local_14,
             "static void OS_API::WriteLastSig(const char*, const char*, memberIdentificationNumber_t, int, int, const void*, int, int, int, int, int, int)"
             ,0x4e);
  CMyFileLog::operator()
            (local_14,local_214,
             "U:%s K:%d C:%d P:%p SZ:%d TimerQ:%d DispatchQ:%d NetworkQ:%d DBQ:%d, LOGDBQ:%d\n",
             uVar1,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,param_12);
  return;
}

```

---

## WriteLog

```asm
// === 0858c78a OS_API::WriteLog  [0x0858c78a-0x858c801] ===
 858c78a:	55                   	push   %ebp
 858c78b:	89 e5                	mov    %esp,%ebp
 858c78d:	81 ec 28 04 00 00    	sub    $0x428,%esp
 858c793:	c7 44 24 04 9e c7 ca 	movl   $0x8cac79e,0x4(%esp)
 858c79a:	08 
 858c79b:	8b 45 08             	mov    0x8(%ebp),%eax
 858c79e:	89 04 24             	mov    %eax,(%esp)
 858c7a1:	e8 ca 1f af ff       	call   807e770 <fopen@plt>
 858c7a6:	89 45 f4             	mov    %eax,-0xc(%ebp)
 858c7a9:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 858c7ad:	74 4f                	je     858c7fe <_ZN6OS_API8WriteLogEPKcS1_z+0x74>
 858c7af:	8d 45 10             	lea    0x10(%ebp),%eax
 858c7b2:	89 45 f0             	mov    %eax,-0x10(%ebp)
 858c7b5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 858c7b8:	89 44 24 08          	mov    %eax,0x8(%esp)
 858c7bc:	8b 45 0c             	mov    0xc(%ebp),%eax
 858c7bf:	89 44 24 04          	mov    %eax,0x4(%esp)
 858c7c3:	8d 85 f0 fb ff ff    	lea    -0x410(%ebp),%eax
 858c7c9:	89 04 24             	mov    %eax,(%esp)
 858c7cc:	e8 ff 0f af ff       	call   807d7d0 <vsprintf@plt>
 858c7d1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 858c7d4:	89 44 24 04          	mov    %eax,0x4(%esp)
 858c7d8:	8d 85 f0 fb ff ff    	lea    -0x410(%ebp),%eax
 858c7de:	89 04 24             	mov    %eax,(%esp)
 858c7e1:	e8 3a 1f af ff       	call   807e720 <fputs@plt>
 858c7e6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 858c7e9:	89 04 24             	mov    %eax,(%esp)
 858c7ec:	e8 df 20 af ff       	call   807e8d0 <fflush@plt>
 858c7f1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 858c7f4:	89 04 24             	mov    %eax,(%esp)
 858c7f7:	e8 a4 16 af ff       	call   807dea0 <fclose@plt>
 858c7fc:	eb 01                	jmp    858c7ff <_ZN6OS_API8WriteLogEPKcS1_z+0x75>
 858c7fe:	90                   	nop
 858c7ff:	c9                   	leave
 858c800:	c3                   	ret
 858c801:	90                   	nop

```

```c
// OS_API::WriteLog @ 0x858c78a

/* OS_API::WriteLog(char const*, char const*, ...) */

void OS_API::WriteLog(char *param_1,char *param_2,...)

{
  char local_414 [1024];
  undefined1 *local_14;
  FILE *local_10;
  
  local_10 = fopen(param_1,"ab");
  if (local_10 != (FILE *)0x0) {
    local_14 = &stack0x0000000c;
    vsprintf(local_414,param_2,local_14);
    fputs(local_414,local_10);
    fflush(local_10);
    fclose(local_10);
  }
  return;
}

```

---

## WriteLoginInfo

```asm
// === 0858c71e OS_API::WriteLoginInfo  [0x0858c71e-0x858c789] ===
 858c71e:	55                   	push   %ebp
 858c71f:	89 e5                	mov    %esp,%ebp
 858c721:	81 ec 28 04 00 00    	sub    $0x428,%esp
 858c727:	c7 44 24 04 2c c7 ca 	movl   $0x8cac72c,0x4(%esp)
 858c72e:	08 
 858c72f:	8b 45 08             	mov    0x8(%ebp),%eax
 858c732:	89 04 24             	mov    %eax,(%esp)
 858c735:	e8 36 20 af ff       	call   807e770 <fopen@plt>
 858c73a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 858c73d:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 858c741:	74 44                	je     858c787 <_ZN6OS_API14WriteLoginInfoEPKcS1_z+0x69>
 858c743:	8d 45 10             	lea    0x10(%ebp),%eax
 858c746:	89 45 f0             	mov    %eax,-0x10(%ebp)
 858c749:	8b 45 f0             	mov    -0x10(%ebp),%eax
 858c74c:	89 44 24 08          	mov    %eax,0x8(%esp)
 858c750:	8b 45 0c             	mov    0xc(%ebp),%eax
 858c753:	89 44 24 04          	mov    %eax,0x4(%esp)
 858c757:	8d 85 f0 fb ff ff    	lea    -0x410(%ebp),%eax
 858c75d:	89 04 24             	mov    %eax,(%esp)
 858c760:	e8 6b 10 af ff       	call   807d7d0 <vsprintf@plt>
 858c765:	8b 45 f4             	mov    -0xc(%ebp),%eax
 858c768:	89 44 24 04          	mov    %eax,0x4(%esp)
 858c76c:	8d 85 f0 fb ff ff    	lea    -0x410(%ebp),%eax
 858c772:	89 04 24             	mov    %eax,(%esp)
 858c775:	e8 a6 1f af ff       	call   807e720 <fputs@plt>
 858c77a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 858c77d:	89 04 24             	mov    %eax,(%esp)
 858c780:	e8 1b 17 af ff       	call   807dea0 <fclose@plt>
 858c785:	eb 01                	jmp    858c788 <_ZN6OS_API14WriteLoginInfoEPKcS1_z+0x6a>
 858c787:	90                   	nop
 858c788:	c9                   	leave
 858c789:	c3                   	ret

```

```c
// OS_API::WriteLoginInfo @ 0x858c71e

/* OS_API::WriteLoginInfo(char const*, char const*, ...) */

void OS_API::WriteLoginInfo(char *param_1,char *param_2,...)

{
  char local_414 [1024];
  undefined1 *local_14;
  FILE *local_10;
  
  local_10 = fopen(param_1,"wb");
  if (local_10 != (FILE *)0x0) {
    local_14 = &stack0x0000000c;
    vsprintf(local_414,param_2,local_14);
    fputs(local_414,local_10);
    fclose(local_10);
  }
  return;
}

```

---

## snprintf

```asm
// === 0858c81c OS_API::snprintf  [0x0858c81c-0x858c84f] ===
 858c81c:	55                   	push   %ebp
 858c81d:	89 e5                	mov    %esp,%ebp
 858c81f:	83 ec 28             	sub    $0x28,%esp
 858c822:	8d 45 14             	lea    0x14(%ebp),%eax
 858c825:	89 45 f0             	mov    %eax,-0x10(%ebp)
 858c828:	8b 45 f0             	mov    -0x10(%ebp),%eax
 858c82b:	89 44 24 0c          	mov    %eax,0xc(%esp)
 858c82f:	8b 45 10             	mov    0x10(%ebp),%eax
 858c832:	89 44 24 08          	mov    %eax,0x8(%esp)
 858c836:	8b 45 0c             	mov    0xc(%ebp),%eax
 858c839:	89 44 24 04          	mov    %eax,0x4(%esp)
 858c83d:	8b 45 08             	mov    0x8(%ebp),%eax
 858c840:	89 04 24             	mov    %eax,(%esp)
 858c843:	e8 a8 1d af ff       	call   807e5f0 <vsnprintf@plt>
 858c848:	89 45 f4             	mov    %eax,-0xc(%ebp)
 858c84b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 858c84e:	c9                   	leave
 858c84f:	c3                   	ret

```

```c
// OS_API::snprintf @ 0x858c81c

/* OS_API::snprintf(char*, unsigned int, char const*, ...) */

int OS_API::snprintf(char *param_1,uint param_2,char *param_3,...)

{
  int iVar1;
  
  iVar1 = vsnprintf(param_1,param_2,param_3,&stack0x00000010);
  return iVar1;
}

```

---

## uSleep

```asm
// === 0858c4fa OS_API::uSleep  [0x0858c4fa-0x858c539] ===
 858c4fa:	55                   	push   %ebp
 858c4fb:	89 e5                	mov    %esp,%ebp
 858c4fd:	83 ec 38             	sub    $0x38,%esp
 858c500:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 858c507:	8b 45 08             	mov    0x8(%ebp),%eax
 858c50a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 858c50d:	8d 45 f0             	lea    -0x10(%ebp),%eax
 858c510:	89 44 24 10          	mov    %eax,0x10(%esp)
 858c514:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 858c51b:	00 
 858c51c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 858c523:	00 
 858c524:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 858c52b:	00 
 858c52c:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 858c533:	e8 08 23 af ff       	call   807e840 <select@plt>
 858c538:	c9                   	leave
 858c539:	c3                   	ret

```

```c
// OS_API::uSleep @ 0x858c4fa

/* OS_API::uSleep(unsigned int) */

void OS_API::uSleep(uint param_1)

{
  timeval local_14 [2];
  
  local_14[0].tv_sec = 0;
  local_14[0].tv_usec = param_1;
  select(0,(fd_set *)0x0,(fd_set *)0x0,(fd_set *)0x0,local_14);
  return;
}

```

