# CSimpleLog

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 8

---

## CSimpleLog

```asm
// === 0854fa88 CSimpleLog::CSimpleLog  [0x0854fa88-0x854faa7] ===
 854fa88:	55                   	push   %ebp
 854fa89:	89 e5                	mov    %esp,%ebp
 854fa8b:	83 ec 18             	sub    $0x18,%esp
 854fa8e:	8b 45 08             	mov    0x8(%ebp),%eax
 854fa91:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 854fa97:	8b 45 08             	mov    0x8(%ebp),%eax
 854fa9a:	83 c0 04             	add    $0x4,%eax
 854fa9d:	89 04 24             	mov    %eax,(%esp)
 854faa0:	e8 5d ff ff ff       	call   854fa02 <_ZN10CSimpleLog8DateTimeC1Ev>
 854faa5:	c9                   	leave
 854faa6:	c3                   	ret
 854faa7:	90                   	nop

```

```c
// CSimpleLog::CSimpleLog @ 0x854fa88

/* CSimpleLog::CSimpleLog() */

void __thiscall CSimpleLog::CSimpleLog(CSimpleLog *this)

{
  *(undefined4 *)this = 0;
  DateTime::DateTime((DateTime *)(this + 4));
  return;
}

```

---

## CloseFile

```asm
// === 0854fb06 CSimpleLog::CloseFile  [0x0854fb06-0x854fb31] ===
 854fb06:	55                   	push   %ebp
 854fb07:	89 e5                	mov    %esp,%ebp
 854fb09:	83 ec 18             	sub    $0x18,%esp
 854fb0c:	8b 45 08             	mov    0x8(%ebp),%eax
 854fb0f:	8b 00                	mov    (%eax),%eax
 854fb11:	85 c0                	test   %eax,%eax
 854fb13:	74 16                	je     854fb2b <_ZN10CSimpleLog9CloseFileEv+0x25>
 854fb15:	8b 45 08             	mov    0x8(%ebp),%eax
 854fb18:	8b 00                	mov    (%eax),%eax
 854fb1a:	89 04 24             	mov    %eax,(%esp)
 854fb1d:	e8 7e e3 b2 ff       	call   807dea0 <fclose@plt>
 854fb22:	8b 45 08             	mov    0x8(%ebp),%eax
 854fb25:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 854fb2b:	b8 01 00 00 00       	mov    $0x1,%eax
 854fb30:	c9                   	leave
 854fb31:	c3                   	ret

```

```c
// CSimpleLog::CloseFile @ 0x854fb06

/* CSimpleLog::CloseFile() */

undefined4 __thiscall CSimpleLog::CloseFile(CSimpleLog *this)

{
  if (*(int *)this != 0) {
    fclose(*(FILE **)this);
    *(undefined4 *)this = 0;
  }
  return 1;
}

```

---

## CreateLogFile

```asm
// === 0854fb32 CSimpleLog::CreateLogFile  [0x0854fb32-0x854fbb9] ===
 854fb32:	55                   	push   %ebp
 854fb33:	89 e5                	mov    %esp,%ebp
 854fb35:	57                   	push   %edi
 854fb36:	53                   	push   %ebx
 854fb37:	81 ec 20 04 00 00    	sub    $0x420,%esp
 854fb3d:	8d 9d f8 fb ff ff    	lea    -0x408(%ebp),%ebx
 854fb43:	b8 00 00 00 00       	mov    $0x0,%eax
 854fb48:	ba 00 01 00 00       	mov    $0x100,%edx
 854fb4d:	89 df                	mov    %ebx,%edi
 854fb4f:	89 d1                	mov    %edx,%ecx
 854fb51:	f3 ab                	rep stos %eax,%es:(%edi)
 854fb53:	8b 45 0c             	mov    0xc(%ebp),%eax
 854fb56:	0f b6 40 03          	movzbl 0x3(%eax),%eax
 854fb5a:	0f be c8             	movsbl %al,%ecx
 854fb5d:	8b 45 0c             	mov    0xc(%ebp),%eax
 854fb60:	0f b6 40 02          	movzbl 0x2(%eax),%eax
 854fb64:	0f be d0             	movsbl %al,%edx
 854fb67:	8b 45 0c             	mov    0xc(%ebp),%eax
 854fb6a:	0f b7 00             	movzwl (%eax),%eax
 854fb6d:	98                   	cwtl
 854fb6e:	8b 5d 08             	mov    0x8(%ebp),%ebx
 854fb71:	83 c3 0c             	add    $0xc,%ebx
 854fb74:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 854fb78:	89 54 24 10          	mov    %edx,0x10(%esp)
 854fb7c:	89 44 24 0c          	mov    %eax,0xc(%esp)
 854fb80:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 854fb84:	c7 44 24 04 1c ee c9 	movl   $0x8c9ee1c,0x4(%esp)
 854fb8b:	08 
 854fb8c:	8d 85 f8 fb ff ff    	lea    -0x408(%ebp),%eax
 854fb92:	89 04 24             	mov    %eax,(%esp)
 854fb95:	e8 a6 e8 b2 ff       	call   807e440 <sprintf@plt>
 854fb9a:	8d 85 f8 fb ff ff    	lea    -0x408(%ebp),%eax
 854fba0:	89 44 24 04          	mov    %eax,0x4(%esp)
 854fba4:	8b 45 08             	mov    0x8(%ebp),%eax
 854fba7:	89 04 24             	mov    %eax,(%esp)
 854fbaa:	e8 0d ff ff ff       	call   854fabc <_ZN10CSimpleLog8OpenFileEPKc>
 854fbaf:	81 c4 20 04 00 00    	add    $0x420,%esp
 854fbb5:	5b                   	pop    %ebx
 854fbb6:	5f                   	pop    %edi
 854fbb7:	5d                   	pop    %ebp
 854fbb8:	c3                   	ret
 854fbb9:	90                   	nop

```

```c
// CSimpleLog::CreateLogFile @ 0x854fb32

/* CSimpleLog::CreateLogFile(CSimpleLog::DateTime&) */

void __thiscall CSimpleLog::CreateLogFile(CSimpleLog *this,DateTime *param_1)

{
  int iVar1;
  char *pcVar2;
  char local_40c [1024];
  
  pcVar2 = local_40c;
  for (iVar1 = 0x100; iVar1 != 0; iVar1 = iVar1 + -1) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2 = pcVar2 + 4;
  }
  sprintf(local_40c,"%s%04d%02d%02d.%s",this + 0xc,(int)*(short *)param_1,(int)(char)param_1[2],
          (int)(char)param_1[3]);
  OpenFile(this,local_40c);
  return;
}

```

---

## CreateLogFile_0854fbba

```asm
// === 0854fbba CSimpleLog::CreateLogFile  [0x0854fbba-0x854fbfb] ===
 854fbba:	55                   	push   %ebp
 854fbbb:	89 e5                	mov    %esp,%ebp
 854fbbd:	83 ec 28             	sub    $0x28,%esp
 854fbc0:	8d 45 f0             	lea    -0x10(%ebp),%eax
 854fbc3:	89 04 24             	mov    %eax,(%esp)
 854fbc6:	e8 37 fe ff ff       	call   854fa02 <_ZN10CSimpleLog8DateTimeC1Ev>
 854fbcb:	8b 45 08             	mov    0x8(%ebp),%eax
 854fbce:	8d 50 0c             	lea    0xc(%eax),%edx
 854fbd1:	c7 44 24 08 fe 00 00 	movl   $0xfe,0x8(%esp)
 854fbd8:	00 
 854fbd9:	8b 45 0c             	mov    0xc(%ebp),%eax
 854fbdc:	89 44 24 04          	mov    %eax,0x4(%esp)
 854fbe0:	89 14 24             	mov    %edx,(%esp)
 854fbe3:	e8 e8 dc b2 ff       	call   807d8d0 <strncpy@plt>
 854fbe8:	8d 45 f0             	lea    -0x10(%ebp),%eax
 854fbeb:	89 44 24 04          	mov    %eax,0x4(%esp)
 854fbef:	8b 45 08             	mov    0x8(%ebp),%eax
 854fbf2:	89 04 24             	mov    %eax,(%esp)
 854fbf5:	e8 38 ff ff ff       	call   854fb32 <_ZN10CSimpleLog13CreateLogFileERNS_8DateTimeE>
 854fbfa:	c9                   	leave
 854fbfb:	c3                   	ret

```

```c
// CSimpleLog::CreateLogFile @ 0x854fbba

/* CSimpleLog::CreateLogFile(char const*) */

void __thiscall CSimpleLog::CreateLogFile(CSimpleLog *this,char *param_1)

{
  DateTime local_14 [16];
  
  DateTime::DateTime(local_14);
  strncpy((char *)(this + 0xc),param_1,0xfe);
  CreateLogFile(this,local_14);
  return;
}

```

---

## OpenFile

```asm
// === 0854fabc CSimpleLog::OpenFile  [0x0854fabc-0x854fb05] ===
 854fabc:	55                   	push   %ebp
 854fabd:	89 e5                	mov    %esp,%ebp
 854fabf:	83 ec 18             	sub    $0x18,%esp
 854fac2:	8b 45 08             	mov    0x8(%ebp),%eax
 854fac5:	8b 00                	mov    (%eax),%eax
 854fac7:	85 c0                	test   %eax,%eax
 854fac9:	74 07                	je     854fad2 <_ZN10CSimpleLog8OpenFileEPKc+0x16>
 854facb:	b8 00 00 00 00       	mov    $0x0,%eax
 854fad0:	eb 32                	jmp    854fb04 <_ZN10CSimpleLog8OpenFileEPKc+0x48>
 854fad2:	c7 44 24 04 cd ed c9 	movl   $0x8c9edcd,0x4(%esp)
 854fad9:	08 
 854fada:	8b 45 0c             	mov    0xc(%ebp),%eax
 854fadd:	89 04 24             	mov    %eax,(%esp)
 854fae0:	e8 8b ec b2 ff       	call   807e770 <fopen@plt>
 854fae5:	8b 55 08             	mov    0x8(%ebp),%edx
 854fae8:	89 02                	mov    %eax,(%edx)
 854faea:	8b 45 08             	mov    0x8(%ebp),%eax
 854faed:	8b 00                	mov    (%eax),%eax
 854faef:	85 c0                	test   %eax,%eax
 854faf1:	0f 94 c0             	sete   %al
 854faf4:	84 c0                	test   %al,%al
 854faf6:	74 07                	je     854faff <_ZN10CSimpleLog8OpenFileEPKc+0x43>
 854faf8:	b8 00 00 00 00       	mov    $0x0,%eax
 854fafd:	eb 05                	jmp    854fb04 <_ZN10CSimpleLog8OpenFileEPKc+0x48>
 854faff:	b8 01 00 00 00       	mov    $0x1,%eax
 854fb04:	c9                   	leave
 854fb05:	c3                   	ret

```

```c
// CSimpleLog::OpenFile @ 0x854fabc

/* CSimpleLog::OpenFile(char const*) */

undefined4 __thiscall CSimpleLog::OpenFile(CSimpleLog *this,char *param_1)

{
  undefined4 uVar1;
  FILE *pFVar2;
  
  if (*(int *)this == 0) {
    pFVar2 = fopen(param_1,"ab");
    *(FILE **)this = pFVar2;
    if (*(int *)this == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## WriteLog

```asm
// === 0854fcb8 CSimpleLog::WriteLog  [0x0854fcb8-0x854fd17] ===
 854fcb8:	55                   	push   %ebp
 854fcb9:	89 e5                	mov    %esp,%ebp
 854fcbb:	81 ec 28 10 00 00    	sub    $0x1028,%esp
 854fcc1:	c7 44 24 08 00 10 00 	movl   $0x1000,0x8(%esp)
 854fcc8:	00 
 854fcc9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 854fcd0:	00 
 854fcd1:	8d 85 f4 ef ff ff    	lea    -0x100c(%ebp),%eax
 854fcd7:	89 04 24             	mov    %eax,(%esp)
 854fcda:	e8 e1 df b2 ff       	call   807dcc0 <memset@plt>
 854fcdf:	8d 45 10             	lea    0x10(%ebp),%eax
 854fce2:	89 45 f4             	mov    %eax,-0xc(%ebp)
 854fce5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 854fce8:	89 44 24 08          	mov    %eax,0x8(%esp)
 854fcec:	8b 45 0c             	mov    0xc(%ebp),%eax
 854fcef:	89 44 24 04          	mov    %eax,0x4(%esp)
 854fcf3:	8d 85 f4 ef ff ff    	lea    -0x100c(%ebp),%eax
 854fcf9:	89 04 24             	mov    %eax,(%esp)
 854fcfc:	e8 cf da b2 ff       	call   807d7d0 <vsprintf@plt>
 854fd01:	8d 85 f4 ef ff ff    	lea    -0x100c(%ebp),%eax
 854fd07:	89 44 24 04          	mov    %eax,0x4(%esp)
 854fd0b:	8b 45 08             	mov    0x8(%ebp),%eax
 854fd0e:	89 04 24             	mov    %eax,(%esp)
 854fd11:	e8 e6 fe ff ff       	call   854fbfc <_ZN10CSimpleLog9_WriteLogEPKc>
 854fd16:	c9                   	leave
 854fd17:	c3                   	ret

```

```c
// CSimpleLog::WriteLog @ 0x854fcb8

/* CSimpleLog::WriteLog(char const*, ...) */

void __thiscall CSimpleLog::WriteLog(CSimpleLog *this,char *param_1,...)

{
  char local_1010 [4096];
  undefined1 *local_10;
  
  memset(local_1010,0,0x1000);
  local_10 = &stack0x0000000c;
  vsprintf(local_1010,param_1,local_10);
  _WriteLog(this,local_1010);
  return;
}

```

---

## _WriteLog

```asm
// === 0854fbfc CSimpleLog::_WriteLog  [0x0854fbfc-0x854fcb7] ===
 854fbfc:	55                   	push   %ebp
 854fbfd:	89 e5                	mov    %esp,%ebp
 854fbff:	83 ec 28             	sub    $0x28,%esp
 854fc02:	8b 45 08             	mov    0x8(%ebp),%eax
 854fc05:	8b 00                	mov    (%eax),%eax
 854fc07:	85 c0                	test   %eax,%eax
 854fc09:	75 0a                	jne    854fc15 <_ZN10CSimpleLog9_WriteLogEPKc+0x19>
 854fc0b:	b8 00 00 00 00       	mov    $0x0,%eax
 854fc10:	e9 a1 00 00 00       	jmp    854fcb6 <_ZN10CSimpleLog9_WriteLogEPKc+0xba>
 854fc15:	8d 45 f0             	lea    -0x10(%ebp),%eax
 854fc18:	89 04 24             	mov    %eax,(%esp)
 854fc1b:	e8 e2 fd ff ff       	call   854fa02 <_ZN10CSimpleLog8DateTimeC1Ev>
 854fc20:	8b 45 08             	mov    0x8(%ebp),%eax
 854fc23:	83 c0 04             	add    $0x4,%eax
 854fc26:	89 44 24 04          	mov    %eax,0x4(%esp)
 854fc2a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 854fc2d:	89 04 24             	mov    %eax,(%esp)
 854fc30:	e8 2d 03 00 00       	call   854ff62 <_ZN10CSimpleLog8DateTime7DiffDayERS0_>
 854fc35:	84 c0                	test   %al,%al
 854fc37:	74 2b                	je     854fc64 <_ZN10CSimpleLog9_WriteLogEPKc+0x68>
 854fc39:	8b 45 08             	mov    0x8(%ebp),%eax
 854fc3c:	89 04 24             	mov    %eax,(%esp)
 854fc3f:	e8 c2 fe ff ff       	call   854fb06 <_ZN10CSimpleLog9CloseFileEv>
 854fc44:	8d 45 f0             	lea    -0x10(%ebp),%eax
 854fc47:	89 44 24 04          	mov    %eax,0x4(%esp)
 854fc4b:	8b 45 08             	mov    0x8(%ebp),%eax
 854fc4e:	89 04 24             	mov    %eax,(%esp)
 854fc51:	e8 dc fe ff ff       	call   854fb32 <_ZN10CSimpleLog13CreateLogFileERNS_8DateTimeE>
 854fc56:	83 f0 01             	xor    $0x1,%eax
 854fc59:	84 c0                	test   %al,%al
 854fc5b:	74 07                	je     854fc64 <_ZN10CSimpleLog9_WriteLogEPKc+0x68>
 854fc5d:	b8 00 00 00 00       	mov    $0x0,%eax
 854fc62:	eb 52                	jmp    854fcb6 <_ZN10CSimpleLog9_WriteLogEPKc+0xba>
 854fc64:	8b 45 08             	mov    0x8(%ebp),%eax
 854fc67:	83 c0 04             	add    $0x4,%eax
 854fc6a:	8d 55 f0             	lea    -0x10(%ebp),%edx
 854fc6d:	39 d0                	cmp    %edx,%eax
 854fc6f:	74 17                	je     854fc88 <_ZN10CSimpleLog9_WriteLogEPKc+0x8c>
 854fc71:	c7 44 24 08 07 00 00 	movl   $0x7,0x8(%esp)
 854fc78:	00 
 854fc79:	8d 55 f0             	lea    -0x10(%ebp),%edx
 854fc7c:	89 54 24 04          	mov    %edx,0x4(%esp)
 854fc80:	89 04 24             	mov    %eax,(%esp)
 854fc83:	e8 18 dc b2 ff       	call   807d8a0 <memcpy@plt>
 854fc88:	8b 45 08             	mov    0x8(%ebp),%eax
 854fc8b:	8b 00                	mov    (%eax),%eax
 854fc8d:	8b 55 0c             	mov    0xc(%ebp),%edx
 854fc90:	89 54 24 08          	mov    %edx,0x8(%esp)
 854fc94:	c7 44 24 04 e4 ed c9 	movl   $0x8c9ede4,0x4(%esp)
 854fc9b:	08 
 854fc9c:	89 04 24             	mov    %eax,(%esp)
 854fc9f:	e8 ec dd b2 ff       	call   807da90 <fprintf@plt>
 854fca4:	8b 45 08             	mov    0x8(%ebp),%eax
 854fca7:	8b 00                	mov    (%eax),%eax
 854fca9:	89 04 24             	mov    %eax,(%esp)
 854fcac:	e8 1f ec b2 ff       	call   807e8d0 <fflush@plt>
 854fcb1:	b8 01 00 00 00       	mov    $0x1,%eax
 854fcb6:	c9                   	leave
 854fcb7:	c3                   	ret

```

```c
// CSimpleLog::_WriteLog @ 0x854fbfc

/* CSimpleLog::_WriteLog(char const*) */

undefined4 __thiscall CSimpleLog::_WriteLog(CSimpleLog *this,char *param_1)

{
  char cVar1;
  undefined4 uVar2;
  DateTime local_14 [16];
  
  if (*(int *)this == 0) {
    uVar2 = 0;
  }
  else {
    DateTime::DateTime(local_14);
    cVar1 = DateTime::DiffDay(local_14,(DateTime *)(this + 4));
    if (cVar1 != '\0') {
      CloseFile(this);
      cVar1 = CreateLogFile(this,local_14);
      if (cVar1 != '\x01') {
        return 0;
      }
    }
    if ((DateTime *)(this + 4) != local_14) {
      memcpy((DateTime *)(this + 4),local_14,7);
    }
    fprintf(*(FILE **)this,"%s\r\n",param_1);
    fflush(*(FILE **)this);
    uVar2 = 1;
  }
  return uVar2;
}

```

---

## ~CSimpleLog

```asm
// === 0854faa8 CSimpleLog::~CSimpleLog  [0x0854faa8-0x854fabb] ===
 854faa8:	55                   	push   %ebp
 854faa9:	89 e5                	mov    %esp,%ebp
 854faab:	83 ec 18             	sub    $0x18,%esp
 854faae:	8b 45 08             	mov    0x8(%ebp),%eax
 854fab1:	89 04 24             	mov    %eax,(%esp)
 854fab4:	e8 4d 00 00 00       	call   854fb06 <_ZN10CSimpleLog9CloseFileEv>
 854fab9:	c9                   	leave
 854faba:	c3                   	ret
 854fabb:	90                   	nop

```

```c
// CSimpleLog::~CSimpleLog @ 0x854faa8

/* CSimpleLog::~CSimpleLog() */

void __thiscall CSimpleLog::~CSimpleLog(CSimpleLog *this)

{
  CloseFile(this);
  return;
}

```

