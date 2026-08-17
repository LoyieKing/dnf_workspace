# CMyRawFileLog

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## operator

```asm
// === 08107a90 CMyRawFileLog::operator  [0x08107a90-0x8107af9] ===
 8107a90:	55                   	push   %ebp
 8107a91:	89 e5                	mov    %esp,%ebp
 8107a93:	81 ec 28 70 00 00    	sub    $0x7028,%esp
 8107a99:	8d 85 f4 8f ff ff    	lea    -0x700c(%ebp),%eax
 8107a9f:	ba 00 70 00 00       	mov    $0x7000,%edx
 8107aa4:	89 54 24 08          	mov    %edx,0x8(%esp)
 8107aa8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8107aaf:	00 
 8107ab0:	89 04 24             	mov    %eax,(%esp)
 8107ab3:	e8 08 62 f7 ff       	call   807dcc0 <memset@plt>
 8107ab8:	8d 45 14             	lea    0x14(%ebp),%eax
 8107abb:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8107abe:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8107ac1:	89 44 24 08          	mov    %eax,0x8(%esp)
 8107ac5:	8b 45 10             	mov    0x10(%ebp),%eax
 8107ac8:	89 44 24 04          	mov    %eax,0x4(%esp)
 8107acc:	8d 85 f4 8f ff ff    	lea    -0x700c(%ebp),%eax
 8107ad2:	89 04 24             	mov    %eax,(%esp)
 8107ad5:	e8 f6 5c f7 ff       	call   807d7d0 <vsprintf@plt>
 8107ada:	e8 51 f2 ff ff       	call   8106d30 <_Z22CFileLogWriterInstancev>
 8107adf:	8d 95 f4 8f ff ff    	lea    -0x700c(%ebp),%edx
 8107ae5:	89 54 24 08          	mov    %edx,0x8(%esp)
 8107ae9:	8b 55 0c             	mov    0xc(%ebp),%edx
 8107aec:	89 54 24 04          	mov    %edx,0x4(%esp)
 8107af0:	89 04 24             	mov    %eax,(%esp)
 8107af3:	e8 84 f9 ff ff       	call   810747c <_ZN14CFileLogWriter11writeRawLogEPKcS1_z>
 8107af8:	c9                   	leave
 8107af9:	c3                   	ret

```

```c
// CMyRawFileLog::operator @ 0x8107a90

/* CMyRawFileLog::TEMPNAMEPLACEHOLDERVALUE(char const*, char const*, ...) */

void __thiscall CMyRawFileLog::operator()(CMyRawFileLog *this,char *param_1,char *param_2,...)

{
  CFileLogWriter *this_00;
  char local_7010 [28672];
  undefined1 *local_10;
  
  memset(local_7010,0,0x7000);
  local_10 = &stack0x00000010;
  vsprintf(local_7010,param_2,local_10);
  this_00 = (CFileLogWriter *)CFileLogWriterInstance();
  CFileLogWriter::writeRawLog(this_00,param_1,local_7010);
  return;
}

```

