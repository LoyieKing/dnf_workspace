# CExceptLog

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## CExceptLog

```asm
// === 0846d736 CExceptLog::CExceptLog  [0x0846d736-0x846d7a4] ===
 846d736:	55                   	push   %ebp
 846d737:	89 e5                	mov    %esp,%ebp
 846d739:	81 ec a8 00 00 00    	sub    $0xa8,%esp
 846d73f:	8b 45 08             	mov    0x8(%ebp),%eax
 846d742:	c7 44 24 08 d0 07 00 	movl   $0x7d0,0x8(%esp)
 846d749:	00 
 846d74a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 846d751:	00 
 846d752:	89 04 24             	mov    %eax,(%esp)
 846d755:	e8 66 05 c1 ff       	call   807dcc0 <memset@plt>
 846d75a:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 846d760:	89 44 24 04          	mov    %eax,0x4(%esp)
 846d764:	8b 45 08             	mov    0x8(%ebp),%eax
 846d767:	89 04 24             	mov    %eax,(%esp)
 846d76a:	e8 53 ff ff ff       	call   846d6c2 <_ZN10CExceptLog15Set_Time_StringEPc>
 846d76f:	8b 45 0c             	mov    0xc(%ebp),%eax
 846d772:	89 04 24             	mov    %eax,(%esp)
 846d775:	e8 76 8d 29 00       	call   87064f0 <_ZNKSs5c_strEv>
 846d77a:	89 44 24 10          	mov    %eax,0x10(%esp)
 846d77e:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 846d784:	89 44 24 0c          	mov    %eax,0xc(%esp)
 846d788:	c7 44 24 08 9f 79 c6 	movl   $0x8c6799f,0x8(%esp)
 846d78f:	08 
 846d790:	c7 44 24 04 a6 79 c6 	movl   $0x8c679a6,0x4(%esp)
 846d797:	08 
 846d798:	8b 45 08             	mov    0x8(%ebp),%eax
 846d79b:	89 04 24             	mov    %eax,(%esp)
 846d79e:	e8 df fe ff ff       	call   846d682 <_ZN10CExceptLog14fPrintTextFileEPcS0_z>
 846d7a3:	c9                   	leave
 846d7a4:	c3                   	ret

```

```c
// CExceptLog::CExceptLog @ 0x846d736

/* CExceptLog::CExceptLog(std::string&) */

void __thiscall CExceptLog::CExceptLog(CExceptLog *this,string *param_1)

{
  undefined4 uVar1;
  char local_8c [136];
  
  memset(this,0,2000);
  Set_Time_String(this,local_8c);
  uVar1 = std::string::c_str((string *)param_1);
  fPrintTextFile(this,"Except.txt","%s\n%s\n",local_8c,uVar1);
  return;
}

```

---

## PrintTextFile

```asm
// === 0846d640 CExceptLog::PrintTextFile  [0x0846d640-0x846d681] ===
 846d640:	55                   	push   %ebp
 846d641:	89 e5                	mov    %esp,%ebp
 846d643:	83 ec 28             	sub    $0x28,%esp
 846d646:	c7 44 24 04 80 79 c6 	movl   $0x8c67980,0x4(%esp)
 846d64d:	08 
 846d64e:	8b 45 0c             	mov    0xc(%ebp),%eax
 846d651:	89 04 24             	mov    %eax,(%esp)
 846d654:	e8 17 11 c1 ff       	call   807e770 <fopen@plt>
 846d659:	89 45 f4             	mov    %eax,-0xc(%ebp)
 846d65c:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 846d660:	74 1d                	je     846d67f <_ZN10CExceptLog13PrintTextFileEPcS0_+0x3f>
 846d662:	8b 45 10             	mov    0x10(%ebp),%eax
 846d665:	89 44 24 04          	mov    %eax,0x4(%esp)
 846d669:	8b 45 f4             	mov    -0xc(%ebp),%eax
 846d66c:	89 04 24             	mov    %eax,(%esp)
 846d66f:	e8 1c 04 c1 ff       	call   807da90 <fprintf@plt>
 846d674:	8b 45 f4             	mov    -0xc(%ebp),%eax
 846d677:	89 04 24             	mov    %eax,(%esp)
 846d67a:	e8 21 08 c1 ff       	call   807dea0 <fclose@plt>
 846d67f:	c9                   	leave
 846d680:	c3                   	ret
 846d681:	90                   	nop

```

```c
// CExceptLog::PrintTextFile @ 0x846d640

/* CExceptLog::PrintTextFile(char*, char*) */

void __thiscall CExceptLog::PrintTextFile(CExceptLog *this,char *param_1,char *param_2)

{
  FILE *__stream;
  
  __stream = fopen(param_1,"a");
  if (__stream != (FILE *)0x0) {
    fprintf(__stream,param_2);
    fclose(__stream);
  }
  return;
}

```

---

## Set_Time_String

```asm
// === 0846d6c2 CExceptLog::Set_Time_String  [0x0846d6c2-0x846d735] ===
 846d6c2:	55                   	push   %ebp
 846d6c3:	89 e5                	mov    %esp,%ebp
 846d6c5:	57                   	push   %edi
 846d6c6:	56                   	push   %esi
 846d6c7:	53                   	push   %ebx
 846d6c8:	83 ec 5c             	sub    $0x5c,%esp
 846d6cb:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 846d6ce:	89 04 24             	mov    %eax,(%esp)
 846d6d1:	e8 7a 00 c1 ff       	call   807d750 <time@plt>
 846d6d6:	8d 45 b8             	lea    -0x48(%ebp),%eax
 846d6d9:	89 44 24 04          	mov    %eax,0x4(%esp)
 846d6dd:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 846d6e0:	89 04 24             	mov    %eax,(%esp)
 846d6e3:	e8 78 0c c1 ff       	call   807e360 <localtime_r@plt>
 846d6e8:	8b 5d b8             	mov    -0x48(%ebp),%ebx
 846d6eb:	8b 4d bc             	mov    -0x44(%ebp),%ecx
 846d6ee:	8b 55 c0             	mov    -0x40(%ebp),%edx
 846d6f1:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 846d6f4:	8b 75 c8             	mov    -0x38(%ebp),%esi
 846d6f7:	8d 7e 01             	lea    0x1(%esi),%edi
 846d6fa:	8b 75 cc             	mov    -0x34(%ebp),%esi
 846d6fd:	81 c6 6c 07 00 00    	add    $0x76c,%esi
 846d703:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 846d707:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 846d70b:	89 54 24 14          	mov    %edx,0x14(%esp)
 846d70f:	89 44 24 10          	mov    %eax,0x10(%esp)
 846d713:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 846d717:	89 74 24 08          	mov    %esi,0x8(%esp)
 846d71b:	c7 44 24 04 82 79 c6 	movl   $0x8c67982,0x4(%esp)
 846d722:	08 
 846d723:	8b 45 0c             	mov    0xc(%ebp),%eax
 846d726:	89 04 24             	mov    %eax,(%esp)
 846d729:	e8 12 0d c1 ff       	call   807e440 <sprintf@plt>
 846d72e:	83 c4 5c             	add    $0x5c,%esp
 846d731:	5b                   	pop    %ebx
 846d732:	5e                   	pop    %esi
 846d733:	5f                   	pop    %edi
 846d734:	5d                   	pop    %ebp
 846d735:	c3                   	ret

```

```c
// CExceptLog::Set_Time_String @ 0x846d6c2

/* CExceptLog::Set_Time_String(char*) */

void __thiscall CExceptLog::Set_Time_String(CExceptLog *this,char *param_1)

{
  tm local_4c;
  time_t local_20 [4];
  
  time(local_20);
  localtime_r(local_20,&local_4c);
  sprintf(param_1,"%4d.%02d.%02d %02d:%02d:%02d",local_4c.tm_year + 0x76c,local_4c.tm_mon + 1,
          local_4c.tm_mday,local_4c.tm_hour,local_4c.tm_min,local_4c.tm_sec);
  return;
}

```

---

## fPrintTextFile

```asm
// === 0846d682 CExceptLog::fPrintTextFile  [0x0846d682-0x846d6c1] ===
 846d682:	55                   	push   %ebp
 846d683:	89 e5                	mov    %esp,%ebp
 846d685:	83 ec 28             	sub    $0x28,%esp
 846d688:	8d 45 14             	lea    0x14(%ebp),%eax
 846d68b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 846d68e:	8b 55 f4             	mov    -0xc(%ebp),%edx
 846d691:	8b 45 08             	mov    0x8(%ebp),%eax
 846d694:	89 54 24 08          	mov    %edx,0x8(%esp)
 846d698:	8b 55 10             	mov    0x10(%ebp),%edx
 846d69b:	89 54 24 04          	mov    %edx,0x4(%esp)
 846d69f:	89 04 24             	mov    %eax,(%esp)
 846d6a2:	e8 29 01 c1 ff       	call   807d7d0 <vsprintf@plt>
 846d6a7:	8b 45 08             	mov    0x8(%ebp),%eax
 846d6aa:	89 44 24 08          	mov    %eax,0x8(%esp)
 846d6ae:	8b 45 0c             	mov    0xc(%ebp),%eax
 846d6b1:	89 44 24 04          	mov    %eax,0x4(%esp)
 846d6b5:	8b 45 08             	mov    0x8(%ebp),%eax
 846d6b8:	89 04 24             	mov    %eax,(%esp)
 846d6bb:	e8 80 ff ff ff       	call   846d640 <_ZN10CExceptLog13PrintTextFileEPcS0_>
 846d6c0:	c9                   	leave
 846d6c1:	c3                   	ret

```

```c
// CExceptLog::fPrintTextFile @ 0x846d682

/* CExceptLog::fPrintTextFile(char*, char*, ...) */

void __thiscall CExceptLog::fPrintTextFile(CExceptLog *this,char *param_1,char *param_2,...)

{
  vsprintf((char *)this,param_2,&stack0x00000010);
  PrintTextFile(this,param_1,(char *)this);
  return;
}

```

