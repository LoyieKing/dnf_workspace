# CToolFileLog

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## CToolFileLog

```asm
// === 08107882 CToolFileLog::CToolFileLog  [0x08107882-0x8107897] ===
 8107882:	55                   	push   %ebp
 8107883:	89 e5                	mov    %esp,%ebp
 8107885:	8b 45 08             	mov    0x8(%ebp),%eax
 8107888:	8b 55 0c             	mov    0xc(%ebp),%edx
 810788b:	89 10                	mov    %edx,(%eax)
 810788d:	8b 45 08             	mov    0x8(%ebp),%eax
 8107890:	8b 55 10             	mov    0x10(%ebp),%edx
 8107893:	89 50 04             	mov    %edx,0x4(%eax)
 8107896:	5d                   	pop    %ebp
 8107897:	c3                   	ret

```

```c
// CToolFileLog::CToolFileLog @ 0x8107882

/* CToolFileLog::CToolFileLog(char const*, int) */

void __thiscall CToolFileLog::CToolFileLog(CToolFileLog *this,char *param_1,int param_2)

{
  *(char **)this = param_1;
  *(int *)(this + 4) = param_2;
  return;
}

```

---

## operator

```asm
// === 08107946 CToolFileLog::operator  [0x08107946-0x8107a8f] ===
 8107946:	55                   	push   %ebp
 8107947:	89 e5                	mov    %esp,%ebp
 8107949:	57                   	push   %edi
 810794a:	53                   	push   %ebx
 810794b:	81 ec 20 e1 00 00    	sub    $0xe120,%esp
 8107951:	8d 85 f4 8e ff ff    	lea    -0x710c(%ebp),%eax
 8107957:	ba 00 70 00 00       	mov    $0x7000,%edx
 810795c:	89 54 24 08          	mov    %edx,0x8(%esp)
 8107960:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8107967:	00 
 8107968:	89 04 24             	mov    %eax,(%esp)
 810796b:	e8 50 63 f7 ff       	call   807dcc0 <memset@plt>
 8107970:	8d 85 f4 1e ff ff    	lea    -0xe10c(%ebp),%eax
 8107976:	ba 00 70 00 00       	mov    $0x7000,%edx
 810797b:	89 54 24 08          	mov    %edx,0x8(%esp)
 810797f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8107986:	00 
 8107987:	89 04 24             	mov    %eax,(%esp)
 810798a:	e8 31 63 f7 ff       	call   807dcc0 <memset@plt>
 810798f:	8d 9d f4 fe ff ff    	lea    -0x10c(%ebp),%ebx
 8107995:	b8 00 00 00 00       	mov    $0x0,%eax
 810799a:	ba 40 00 00 00       	mov    $0x40,%edx
 810799f:	89 df                	mov    %ebx,%edi
 81079a1:	89 d1                	mov    %edx,%ecx
 81079a3:	f3 ab                	rep stos %eax,%es:(%edi)
 81079a5:	8b 45 08             	mov    0x8(%ebp),%eax
 81079a8:	8b 50 04             	mov    0x4(%eax),%edx
 81079ab:	8b 45 08             	mov    0x8(%ebp),%eax
 81079ae:	8b 00                	mov    (%eax),%eax
 81079b0:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81079b4:	89 44 24 08          	mov    %eax,0x8(%esp)
 81079b8:	c7 44 24 04 af 40 b4 	movl   $0x8b440af,0x4(%esp)
 81079bf:	08 
 81079c0:	8d 85 f4 8e ff ff    	lea    -0x710c(%ebp),%eax
 81079c6:	89 04 24             	mov    %eax,(%esp)
 81079c9:	e8 72 6a f7 ff       	call   807e440 <sprintf@plt>
 81079ce:	8d 45 18             	lea    0x18(%ebp),%eax
 81079d1:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81079d4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81079d7:	89 44 24 08          	mov    %eax,0x8(%esp)
 81079db:	8b 45 14             	mov    0x14(%ebp),%eax
 81079de:	89 44 24 04          	mov    %eax,0x4(%esp)
 81079e2:	8d 85 f4 1e ff ff    	lea    -0xe10c(%ebp),%eax
 81079e8:	89 04 24             	mov    %eax,(%esp)
 81079eb:	e8 e0 5d f7 ff       	call   807d7d0 <vsprintf@plt>
 81079f0:	8d 85 f4 8e ff ff    	lea    -0x710c(%ebp),%eax
 81079f6:	89 04 24             	mov    %eax,(%esp)
 81079f9:	e8 b2 69 f7 ff       	call   807e3b0 <strlen@plt>
 81079fe:	89 c2                	mov    %eax,%edx
 8107a00:	8d 85 f4 8e ff ff    	lea    -0x710c(%ebp),%eax
 8107a06:	01 d0                	add    %edx,%eax
 8107a08:	8d 95 f4 1e ff ff    	lea    -0xe10c(%ebp),%edx
 8107a0e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8107a12:	89 04 24             	mov    %eax,(%esp)
 8107a15:	e8 46 63 f7 ff       	call   807dd60 <strcat@plt>
 8107a1a:	83 7d 10 ff          	cmpl   $0xffffffff,0x10(%ebp)
 8107a1e:	74 47                	je     8107a67 <_ZN12CToolFileLogclEPKciS1_z+0x121>
 8107a20:	8b 45 10             	mov    0x10(%ebp),%eax
 8107a23:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8107a27:	8b 45 0c             	mov    0xc(%ebp),%eax
 8107a2a:	89 44 24 08          	mov    %eax,0x8(%esp)
 8107a2e:	c7 44 24 04 b8 40 b4 	movl   $0x8b440b8,0x4(%esp)
 8107a35:	08 
 8107a36:	8d 85 f4 fe ff ff    	lea    -0x10c(%ebp),%eax
 8107a3c:	89 04 24             	mov    %eax,(%esp)
 8107a3f:	e8 fc 69 f7 ff       	call   807e440 <sprintf@plt>
 8107a44:	e8 e7 f2 ff ff       	call   8106d30 <_Z22CFileLogWriterInstancev>
 8107a49:	8d 95 f4 8e ff ff    	lea    -0x710c(%ebp),%edx
 8107a4f:	89 54 24 08          	mov    %edx,0x8(%esp)
 8107a53:	8d 95 f4 fe ff ff    	lea    -0x10c(%ebp),%edx
 8107a59:	89 54 24 04          	mov    %edx,0x4(%esp)
 8107a5d:	89 04 24             	mov    %eax,(%esp)
 8107a60:	e8 19 f6 ff ff       	call   810707e <_ZN14CFileLogWriter8writeLogEPKcS1_z>
 8107a65:	eb 1e                	jmp    8107a85 <_ZN12CToolFileLogclEPKciS1_z+0x13f>
 8107a67:	e8 c4 f2 ff ff       	call   8106d30 <_Z22CFileLogWriterInstancev>
 8107a6c:	8d 95 f4 8e ff ff    	lea    -0x710c(%ebp),%edx
 8107a72:	89 54 24 08          	mov    %edx,0x8(%esp)
 8107a76:	8b 55 0c             	mov    0xc(%ebp),%edx
 8107a79:	89 54 24 04          	mov    %edx,0x4(%esp)
 8107a7d:	89 04 24             	mov    %eax,(%esp)
 8107a80:	e8 f9 f5 ff ff       	call   810707e <_ZN14CFileLogWriter8writeLogEPKcS1_z>
 8107a85:	81 c4 20 e1 00 00    	add    $0xe120,%esp
 8107a8b:	5b                   	pop    %ebx
 8107a8c:	5f                   	pop    %edi
 8107a8d:	5d                   	pop    %ebp
 8107a8e:	c3                   	ret
 8107a8f:	90                   	nop

```

```c
// CToolFileLog::operator @ 0x8107946

/* CToolFileLog::TEMPNAMEPLACEHOLDERVALUE(char const*, int, char const*, ...) */

void __thiscall
CToolFileLog::operator()(CToolFileLog *this,char *param_1,int param_2,char *param_3,...)

{
  size_t sVar1;
  CFileLogWriter *pCVar2;
  int iVar3;
  char *pcVar4;
  byte bVar5;
  char local_e110 [28672];
  char local_7110 [28672];
  char local_110 [256];
  undefined1 *local_10;
  
  bVar5 = 0;
  memset(local_7110,0,0x7000);
  memset(local_e110,0,0x7000);
  pcVar4 = local_110;
  for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4 = pcVar4 + ((uint)bVar5 * -2 + 1) * 4;
  }
  sprintf(local_7110,"%s(%d): ",*(undefined4 *)this,*(undefined4 *)(this + 4));
  local_10 = &stack0x00000014;
  vsprintf(local_e110,param_3,local_10);
  sVar1 = strlen(local_7110);
  strcat(local_7110 + sVar1,local_e110);
  if (param_2 == -1) {
    pCVar2 = (CFileLogWriter *)CFileLogWriterInstance();
    CFileLogWriter::writeLog(pCVar2,param_1,local_7110);
  }
  else {
    sprintf(local_110,"%s_%02d_",param_1,param_2);
    pCVar2 = (CFileLogWriter *)CFileLogWriterInstance();
    CFileLogWriter::writeLog(pCVar2,local_110,local_7110);
  }
  return;
}

```

