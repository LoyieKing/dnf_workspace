# CMyFileLog

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## CMyFileLog

```asm
// === 0810786c CMyFileLog::CMyFileLog  [0x0810786c-0x8107881] ===
 810786c:	55                   	push   %ebp
 810786d:	89 e5                	mov    %esp,%ebp
 810786f:	8b 45 08             	mov    0x8(%ebp),%eax
 8107872:	8b 55 0c             	mov    0xc(%ebp),%edx
 8107875:	89 10                	mov    %edx,(%eax)
 8107877:	8b 45 08             	mov    0x8(%ebp),%eax
 810787a:	8b 55 10             	mov    0x10(%ebp),%edx
 810787d:	89 50 04             	mov    %edx,0x4(%eax)
 8107880:	5d                   	pop    %ebp
 8107881:	c3                   	ret

```

```c
// CMyFileLog::CMyFileLog @ 0x810786c

/* CMyFileLog::CMyFileLog(char const*, int) */

void __thiscall CMyFileLog::CMyFileLog(CMyFileLog *this,char *param_1,int param_2)

{
  *(char **)this = param_1;
  *(int *)(this + 4) = param_2;
  return;
}

```

---

## operator

```asm
// === 08107898 CMyFileLog::operator  [0x08107898-0x8107945] ===
 8107898:	55                   	push   %ebp
 8107899:	89 e5                	mov    %esp,%ebp
 810789b:	53                   	push   %ebx
 810789c:	81 ec 24 70 00 00    	sub    $0x7024,%esp
 81078a2:	8d 85 f4 8f ff ff    	lea    -0x700c(%ebp),%eax
 81078a8:	ba 00 70 00 00       	mov    $0x7000,%edx
 81078ad:	89 54 24 08          	mov    %edx,0x8(%esp)
 81078b1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81078b8:	00 
 81078b9:	89 04 24             	mov    %eax,(%esp)
 81078bc:	e8 ff 63 f7 ff       	call   807dcc0 <memset@plt>
 81078c1:	8b 45 08             	mov    0x8(%ebp),%eax
 81078c4:	8b 50 04             	mov    0x4(%eax),%edx
 81078c7:	8b 45 08             	mov    0x8(%ebp),%eax
 81078ca:	8b 00                	mov    (%eax),%eax
 81078cc:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81078d0:	89 44 24 08          	mov    %eax,0x8(%esp)
 81078d4:	c7 44 24 04 af 40 b4 	movl   $0x8b440af,0x4(%esp)
 81078db:	08 
 81078dc:	8d 85 f4 8f ff ff    	lea    -0x700c(%ebp),%eax
 81078e2:	89 04 24             	mov    %eax,(%esp)
 81078e5:	e8 56 6b f7 ff       	call   807e440 <sprintf@plt>
 81078ea:	8d 45 14             	lea    0x14(%ebp),%eax
 81078ed:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81078f0:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 81078f3:	8d 85 f4 8f ff ff    	lea    -0x700c(%ebp),%eax
 81078f9:	89 04 24             	mov    %eax,(%esp)
 81078fc:	e8 af 6a f7 ff       	call   807e3b0 <strlen@plt>
 8107901:	89 c2                	mov    %eax,%edx
 8107903:	8d 85 f4 8f ff ff    	lea    -0x700c(%ebp),%eax
 8107909:	01 d0                	add    %edx,%eax
 810790b:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 810790f:	8b 55 10             	mov    0x10(%ebp),%edx
 8107912:	89 54 24 04          	mov    %edx,0x4(%esp)
 8107916:	89 04 24             	mov    %eax,(%esp)
 8107919:	e8 b2 5e f7 ff       	call   807d7d0 <vsprintf@plt>
 810791e:	e8 0d f4 ff ff       	call   8106d30 <_Z22CFileLogWriterInstancev>
 8107923:	8d 95 f4 8f ff ff    	lea    -0x700c(%ebp),%edx
 8107929:	89 54 24 08          	mov    %edx,0x8(%esp)
 810792d:	8b 55 0c             	mov    0xc(%ebp),%edx
 8107930:	89 54 24 04          	mov    %edx,0x4(%esp)
 8107934:	89 04 24             	mov    %eax,(%esp)
 8107937:	e8 42 f7 ff ff       	call   810707e <_ZN14CFileLogWriter8writeLogEPKcS1_z>
 810793c:	81 c4 24 70 00 00    	add    $0x7024,%esp
 8107942:	5b                   	pop    %ebx
 8107943:	5d                   	pop    %ebp
 8107944:	c3                   	ret
 8107945:	90                   	nop

```

```c
// CMyFileLog::operator @ 0x8107898

/* CMyFileLog::TEMPNAMEPLACEHOLDERVALUE(char const*, char const*, ...) */

void __thiscall CMyFileLog::operator()(CMyFileLog *this,char *param_1,char *param_2,...)

{
  size_t sVar1;
  CFileLogWriter *this_00;
  char local_7010 [28672];
  undefined1 *local_10;
  
  memset(local_7010,0,0x7000);
  sprintf(local_7010,"%s(%d): ",*(undefined4 *)this,*(undefined4 *)(this + 4));
  local_10 = &stack0x00000010;
  sVar1 = strlen(local_7010);
  vsprintf(local_7010 + sVar1,param_2,&stack0x00000010);
  this_00 = (CFileLogWriter *)CFileLogWriterInstance();
  CFileLogWriter::writeLog(this_00,param_1,local_7010);
  return;
}

```

