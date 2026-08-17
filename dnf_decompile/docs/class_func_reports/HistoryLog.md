# HistoryLog

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 23

---

## CheckFD

```asm
// === 084b9d06 HistoryLog::CheckFD  [0x084b9d06-0x84b9d33] ===
 84b9d06:	55                   	push   %ebp
 84b9d07:	89 e5                	mov    %esp,%ebp
 84b9d09:	83 ec 18             	sub    $0x18,%esp
 84b9d0c:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
 84b9d10:	75 07                	jne    84b9d19 <_ZN10HistoryLog7CheckFDEP8_IO_FILE+0x13>
 84b9d12:	b8 00 00 00 00       	mov    $0x0,%eax
 84b9d17:	eb 19                	jmp    84b9d32 <_ZN10HistoryLog7CheckFDEP8_IO_FILE+0x2c>
 84b9d19:	c7 44 24 04 10 00 00 	movl   $0x10,0x4(%esp)
 84b9d20:	00 
 84b9d21:	c7 04 24 34 dd 43 09 	movl   $0x943dd34,(%esp)
 84b9d28:	e8 00 7c 1f 00       	call   86b192d <_Z16get_str_datetimePci>
 84b9d2d:	b8 01 00 00 00       	mov    $0x1,%eax
 84b9d32:	c9                   	leave
 84b9d33:	c3                   	ret

```

```c
// HistoryLog::CheckFD @ 0x84b9d06

/* HistoryLog::CheckFD(_IO_FILE*) */

bool HistoryLog::CheckFD(_IO_FILE *param_1)

{
  if (param_1 != (_IO_FILE *)0x0) {
    get_str_datetime(time,0x10);
  }
  return param_1 != (_IO_FILE *)0x0;
}

```

---

## Init

```asm
// === 084b9ad4 HistoryLog::Init  [0x084b9ad4-0x84b9b31] ===
 84b9ad4:	55                   	push   %ebp
 84b9ad5:	89 e5                	mov    %esp,%ebp
 84b9ad7:	83 ec 78             	sub    $0x78,%esp
 84b9ada:	8d 45 a0             	lea    -0x60(%ebp),%eax
 84b9add:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b9ae1:	c7 04 24 20 61 c8 08 	movl   $0x8c86120,(%esp)
 84b9ae8:	e8 ad d0 c4 ff       	call   8106b9a <stat>
 84b9aed:	c1 e8 1f             	shr    $0x1f,%eax
 84b9af0:	84 c0                	test   %al,%al
 84b9af2:	74 36                	je     84b9b2a <_ZN10HistoryLog4InitEv+0x56>
 84b9af4:	c7 44 24 04 fd 01 00 	movl   $0x1fd,0x4(%esp)
 84b9afb:	00 
 84b9afc:	c7 04 24 20 61 c8 08 	movl   $0x8c86120,(%esp)
 84b9b03:	e8 f8 3c bc ff       	call   807d800 <mkdir@plt>
 84b9b08:	c1 e8 1f             	shr    $0x1f,%eax
 84b9b0b:	84 c0                	test   %al,%al
 84b9b0d:	74 1b                	je     84b9b2a <_ZN10HistoryLog4InitEv+0x56>
 84b9b0f:	c7 44 24 04 20 61 c8 	movl   $0x8c86120,0x4(%esp)
 84b9b16:	08 
 84b9b17:	c7 04 24 2c 61 c8 08 	movl   $0x8c8612c,(%esp)
 84b9b1e:	e8 3d 40 bc ff       	call   807db60 <printf@plt>
 84b9b23:	b8 00 00 00 00       	mov    $0x0,%eax
 84b9b28:	eb 05                	jmp    84b9b2f <_ZN10HistoryLog4InitEv+0x5b>
 84b9b2a:	b8 01 00 00 00       	mov    $0x1,%eax
 84b9b2f:	c9                   	leave
 84b9b30:	c3                   	ret
 84b9b31:	90                   	nop

```

```c
// HistoryLog::Init @ 0x84b9ad4

/* HistoryLog::Init() */

undefined4 HistoryLog::Init(void)

{
  int iVar1;
  stat local_64;
  
  iVar1 = stat("./history/",&local_64);
  if ((iVar1 < 0) && (iVar1 = mkdir("./history/",0x1fd), iVar1 < 0)) {
    printf("Fail To Make Directory, PATH[%s]\n","./history/");
    return 0;
  }
  return 1;
}

```

---

## LogClose

```asm
// === 084b9d34 HistoryLog::LogClose  [0x084b9d34-0x84b9d6f] ===
 84b9d34:	55                   	push   %ebp
 84b9d35:	89 e5                	mov    %esp,%ebp
 84b9d37:	83 ec 18             	sub    $0x18,%esp
 84b9d3a:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
 84b9d3e:	74 2d                	je     84b9d6d <_ZN10HistoryLog8LogCloseEP8_IO_FILE+0x39>
 84b9d40:	8b 45 08             	mov    0x8(%ebp),%eax
 84b9d43:	89 04 24             	mov    %eax,(%esp)
 84b9d46:	e8 55 41 bc ff       	call   807dea0 <fclose@plt>
 84b9d4b:	8b 45 08             	mov    0x8(%ebp),%eax
 84b9d4e:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b9d52:	c7 04 24 00 dd 43 09 	movl   $0x943dd00,(%esp)
 84b9d59:	e8 36 08 00 00       	call   84ba594 <_ZN10StaticPoolI8_IO_FILELi50EE4FreeEPS0_>
 84b9d5e:	a1 30 dd 43 09       	mov    0x943dd30,%eax
 84b9d63:	83 e8 01             	sub    $0x1,%eax
 84b9d66:	a3 30 dd 43 09       	mov    %eax,0x943dd30
 84b9d6b:	eb 01                	jmp    84b9d6e <_ZN10HistoryLog8LogCloseEP8_IO_FILE+0x3a>
 84b9d6d:	90                   	nop
 84b9d6e:	c9                   	leave
 84b9d6f:	c3                   	ret

```

```c
// HistoryLog::LogClose @ 0x84b9d34

/* HistoryLog::LogClose(_IO_FILE*) */

void HistoryLog::LogClose(_IO_FILE *param_1)

{
  if (param_1 != (_IO_FILE *)0x0) {
    fclose(param_1);
    StaticPool<_IO_FILE,50>::Free((StaticPool<_IO_FILE,50> *)logfiles_,param_1);
    count_ = count_ + -1;
  }
  return;
}

```

---

## LogOpen

```asm
// === 084b9b32 HistoryLog::LogOpen  [0x084b9b32-0x84b9d05] ===
 84b9b32:	55                   	push   %ebp
 84b9b33:	89 e5                	mov    %esp,%ebp
 84b9b35:	57                   	push   %edi
 84b9b36:	53                   	push   %ebx
 84b9b37:	81 ec 30 01 00 00    	sub    $0x130,%esp
 84b9b3d:	e8 5e 41 bc ff       	call   807dca0 <rand@plt>
 84b9b42:	89 c1                	mov    %eax,%ecx
 84b9b44:	ba 1f 85 eb 51       	mov    $0x51eb851f,%edx
 84b9b49:	89 c8                	mov    %ecx,%eax
 84b9b4b:	f7 ea                	imul   %edx
 84b9b4d:	c1 fa 05             	sar    $0x5,%edx
 84b9b50:	89 c8                	mov    %ecx,%eax
 84b9b52:	c1 f8 1f             	sar    $0x1f,%eax
 84b9b55:	89 d3                	mov    %edx,%ebx
 84b9b57:	29 c3                	sub    %eax,%ebx
 84b9b59:	89 d8                	mov    %ebx,%eax
 84b9b5b:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84b9b5e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84b9b61:	6b c0 64             	imul   $0x64,%eax,%eax
 84b9b64:	89 cf                	mov    %ecx,%edi
 84b9b66:	29 c7                	sub    %eax,%edi
 84b9b68:	89 f8                	mov    %edi,%eax
 84b9b6a:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84b9b6d:	83 7d f0 5f          	cmpl   $0x5f,-0x10(%ebp)
 84b9b71:	0f 8e 7f 01 00 00    	jle    84b9cf6 <_ZN10HistoryLog7LogOpenEj+0x1c4>
 84b9b77:	c7 04 24 00 dd 43 09 	movl   $0x943dd00,(%esp)
 84b9b7e:	e8 e3 08 00 00       	call   84ba466 <_ZN10StaticPoolI8_IO_FILELi50EE7AcquireEv>
 84b9b83:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84b9b86:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 84b9b8a:	75 0a                	jne    84b9b96 <_ZN10HistoryLog7LogOpenEj+0x64>
 84b9b8c:	b8 00 00 00 00       	mov    $0x0,%eax
 84b9b91:	e9 65 01 00 00       	jmp    84b9cfb <_ZN10HistoryLog7LogOpenEj+0x1c9>
 84b9b96:	c7 45 e6 00 00 00 00 	movl   $0x0,-0x1a(%ebp)
 84b9b9d:	c7 45 ea 00 00 00 00 	movl   $0x0,-0x16(%ebp)
 84b9ba4:	66 c7 45 ee 00 00    	movw   $0x0,-0x12(%ebp)
 84b9baa:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84b9bb1:	00 
 84b9bb2:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 84b9bb9:	00 
 84b9bba:	8d 45 e6             	lea    -0x1a(%ebp),%eax
 84b9bbd:	89 04 24             	mov    %eax,(%esp)
 84b9bc0:	e8 f4 7d 1f 00       	call   86b19b9 <_Z12get_str_datePcic>
 84b9bc5:	8d 55 b4             	lea    -0x4c(%ebp),%edx
 84b9bc8:	b8 00 00 00 00       	mov    $0x0,%eax
 84b9bcd:	b9 0c 00 00 00       	mov    $0xc,%ecx
 84b9bd2:	89 d7                	mov    %edx,%edi
 84b9bd4:	f3 ab                	rep stos %eax,%es:(%edi)
 84b9bd6:	89 fa                	mov    %edi,%edx
 84b9bd8:	66 89 02             	mov    %ax,(%edx)
 84b9bdb:	83 c2 02             	add    $0x2,%edx
 84b9bde:	8d 45 e6             	lea    -0x1a(%ebp),%eax
 84b9be1:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84b9be5:	c7 44 24 08 20 61 c8 	movl   $0x8c86120,0x8(%esp)
 84b9bec:	08 
 84b9bed:	c7 44 24 04 4e 61 c8 	movl   $0x8c8614e,0x4(%esp)
 84b9bf4:	08 
 84b9bf5:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84b9bf8:	89 04 24             	mov    %eax,(%esp)
 84b9bfb:	e8 40 48 bc ff       	call   807e440 <sprintf@plt>
 84b9c00:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 84b9c06:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b9c0a:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84b9c0d:	89 04 24             	mov    %eax,(%esp)
 84b9c10:	e8 85 cf c4 ff       	call   8106b9a <stat>
 84b9c15:	c1 e8 1f             	shr    $0x1f,%eax
 84b9c18:	84 c0                	test   %al,%al
 84b9c1a:	74 13                	je     84b9c2f <_ZN10HistoryLog7LogOpenEj+0xfd>
 84b9c1c:	c7 44 24 04 fd 01 00 	movl   $0x1fd,0x4(%esp)
 84b9c23:	00 
 84b9c24:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84b9c27:	89 04 24             	mov    %eax,(%esp)
 84b9c2a:	e8 d1 3b bc ff       	call   807d800 <mkdir@plt>
 84b9c2f:	8d 95 dd fe ff ff    	lea    -0x123(%ebp),%edx
 84b9c35:	bb 7f 00 00 00       	mov    $0x7f,%ebx
 84b9c3a:	b8 00 00 00 00       	mov    $0x0,%eax
 84b9c3f:	89 d1                	mov    %edx,%ecx
 84b9c41:	83 e1 01             	and    $0x1,%ecx
 84b9c44:	85 c9                	test   %ecx,%ecx
 84b9c46:	74 08                	je     84b9c50 <_ZN10HistoryLog7LogOpenEj+0x11e>
 84b9c48:	88 02                	mov    %al,(%edx)
 84b9c4a:	83 c2 01             	add    $0x1,%edx
 84b9c4d:	83 eb 01             	sub    $0x1,%ebx
 84b9c50:	89 d1                	mov    %edx,%ecx
 84b9c52:	83 e1 02             	and    $0x2,%ecx
 84b9c55:	85 c9                	test   %ecx,%ecx
 84b9c57:	74 09                	je     84b9c62 <_ZN10HistoryLog7LogOpenEj+0x130>
 84b9c59:	66 89 02             	mov    %ax,(%edx)
 84b9c5c:	83 c2 02             	add    $0x2,%edx
 84b9c5f:	83 eb 02             	sub    $0x2,%ebx
 84b9c62:	89 d9                	mov    %ebx,%ecx
 84b9c64:	c1 e9 02             	shr    $0x2,%ecx
 84b9c67:	89 d7                	mov    %edx,%edi
 84b9c69:	f3 ab                	rep stos %eax,%es:(%edi)
 84b9c6b:	89 fa                	mov    %edi,%edx
 84b9c6d:	89 d9                	mov    %ebx,%ecx
 84b9c6f:	83 e1 02             	and    $0x2,%ecx
 84b9c72:	85 c9                	test   %ecx,%ecx
 84b9c74:	74 06                	je     84b9c7c <_ZN10HistoryLog7LogOpenEj+0x14a>
 84b9c76:	66 89 02             	mov    %ax,(%edx)
 84b9c79:	83 c2 02             	add    $0x2,%edx
 84b9c7c:	89 d9                	mov    %ebx,%ecx
 84b9c7e:	83 e1 01             	and    $0x1,%ecx
 84b9c81:	85 c9                	test   %ecx,%ecx
 84b9c83:	74 05                	je     84b9c8a <_ZN10HistoryLog7LogOpenEj+0x158>
 84b9c85:	88 02                	mov    %al,(%edx)
 84b9c87:	83 c2 01             	add    $0x1,%edx
 84b9c8a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84b9c91:	00 
 84b9c92:	8b 45 08             	mov    0x8(%ebp),%eax
 84b9c95:	89 04 24             	mov    %eax,(%esp)
 84b9c98:	e8 ae f3 c4 ff       	call   810904b <_Z14NumberToStringji>
 84b9c9d:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84b9ca1:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84b9ca4:	89 44 24 08          	mov    %eax,0x8(%esp)
 84b9ca8:	c7 44 24 04 54 61 c8 	movl   $0x8c86154,0x4(%esp)
 84b9caf:	08 
 84b9cb0:	8d 85 dd fe ff ff    	lea    -0x123(%ebp),%eax
 84b9cb6:	89 04 24             	mov    %eax,(%esp)
 84b9cb9:	e8 82 47 bc ff       	call   807e440 <sprintf@plt>
 84b9cbe:	c7 44 24 04 5d 61 c8 	movl   $0x8c8615d,0x4(%esp)
 84b9cc5:	08 
 84b9cc6:	8d 85 dd fe ff ff    	lea    -0x123(%ebp),%eax
 84b9ccc:	89 04 24             	mov    %eax,(%esp)
 84b9ccf:	e8 9c 4a bc ff       	call   807e770 <fopen@plt>
 84b9cd4:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84b9cd7:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 84b9cdb:	75 07                	jne    84b9ce4 <_ZN10HistoryLog7LogOpenEj+0x1b2>
 84b9cdd:	b8 00 00 00 00       	mov    $0x0,%eax
 84b9ce2:	eb 17                	jmp    84b9cfb <_ZN10HistoryLog7LogOpenEj+0x1c9>
 84b9ce4:	a1 30 dd 43 09       	mov    0x943dd30,%eax
 84b9ce9:	83 c0 01             	add    $0x1,%eax
 84b9cec:	a3 30 dd 43 09       	mov    %eax,0x943dd30
 84b9cf1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84b9cf4:	eb 05                	jmp    84b9cfb <_ZN10HistoryLog7LogOpenEj+0x1c9>
 84b9cf6:	b8 00 00 00 00       	mov    $0x0,%eax
 84b9cfb:	81 c4 30 01 00 00    	add    $0x130,%esp
 84b9d01:	5b                   	pop    %ebx
 84b9d02:	5f                   	pop    %edi
 84b9d03:	5d                   	pop    %ebp
 84b9d04:	c3                   	ret
 84b9d05:	90                   	nop

```

```c
// HistoryLog::LogOpen @ 0x84b9b32

/* HistoryLog::LogOpen(unsigned int) */

FILE * HistoryLog::LogOpen(uint param_1)

{
  FILE *pFVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  bool bVar7;
  byte bVar8;
  char local_127;
  char local_126 [126];
  stat local_a8;
  char local_50 [50];
  char local_1e [10];
  int local_14;
  int local_10;
  
  bVar8 = 0;
  local_14 = rand();
  local_14 = local_14 % 100;
  if (local_14 < 0x60) {
    pFVar1 = (FILE *)0x0;
  }
  else {
    local_10 = StaticPool<_IO_FILE,50>::Acquire((StaticPool<_IO_FILE,50> *)logfiles_);
    if (local_10 == 0) {
      pFVar1 = (FILE *)0x0;
    }
    else {
      local_1e[0] = '\0';
      local_1e[1] = '\0';
      local_1e[2] = '\0';
      local_1e[3] = '\0';
      local_1e[4] = '\0';
      local_1e[5] = '\0';
      local_1e[6] = '\0';
      local_1e[7] = '\0';
      local_1e[8] = '\0';
      local_1e[9] = '\0';
      get_str_date(local_1e,10,'\0');
      pcVar5 = local_50;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        pcVar5[0] = '\0';
        pcVar5[1] = '\0';
        pcVar5[2] = '\0';
        pcVar5[3] = '\0';
        pcVar5 = pcVar5 + ((uint)bVar8 * -2 + 1) * 4;
      }
      pcVar5[0] = '\0';
      pcVar5[1] = '\0';
      sprintf(local_50,"%s%s/","./history/",local_1e);
      iVar3 = stat(local_50,&local_a8);
      if (iVar3 < 0) {
        mkdir(local_50,0x1fd);
      }
      pcVar5 = &local_127;
      uVar6 = 0x7f;
      bVar7 = ((uint)pcVar5 & 1) != 0;
      if (bVar7) {
        local_127 = '\0';
        pcVar5 = local_126;
        uVar6 = 0x7e;
      }
      if (((uint)pcVar5 & 2) != 0) {
        pcVar5[0] = '\0';
        pcVar5[1] = '\0';
        pcVar5 = pcVar5 + 2;
        uVar6 = uVar6 - 2;
      }
      for (uVar4 = uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        pcVar5[0] = '\0';
        pcVar5[1] = '\0';
        pcVar5[2] = '\0';
        pcVar5[3] = '\0';
        pcVar5 = pcVar5 + ((uint)bVar8 * -2 + 1) * 4;
      }
      if ((uVar6 & 2) != 0) {
        pcVar5[0] = '\0';
        pcVar5[1] = '\0';
        pcVar5 = pcVar5 + 2;
      }
      if (!bVar7) {
        *pcVar5 = '\0';
      }
      uVar2 = NumberToString(param_1,0);
      sprintf(&local_127,"%s%s.log",local_50,uVar2);
      pFVar1 = fopen(&local_127,"a");
      if (pFVar1 == (FILE *)0x0) {
        pFVar1 = (FILE *)0x0;
      }
      else {
        count_ = count_ + 1;
      }
    }
  }
  return pFVar1;
}

```

---

## WriteBuyItem

```asm
// === 084ba1f4 HistoryLog::WriteBuyItem  [0x084ba1f4-0x84ba239] ===
 84ba1f4:	55                   	push   %ebp
 84ba1f5:	89 e5                	mov    %esp,%ebp
 84ba1f7:	83 ec 28             	sub    $0x28,%esp
 84ba1fa:	8b 45 08             	mov    0x8(%ebp),%eax
 84ba1fd:	89 04 24             	mov    %eax,(%esp)
 84ba200:	e8 01 fb ff ff       	call   84b9d06 <_ZN10HistoryLog7CheckFDEP8_IO_FILE>
 84ba205:	83 f0 01             	xor    $0x1,%eax
 84ba208:	84 c0                	test   %al,%al
 84ba20a:	75 2b                	jne    84ba237 <_ZN10HistoryLog12WriteBuyItemEP8_IO_FILEii+0x43>
 84ba20c:	8b 45 10             	mov    0x10(%ebp),%eax
 84ba20f:	89 44 24 10          	mov    %eax,0x10(%esp)
 84ba213:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ba216:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84ba21a:	c7 44 24 08 34 dd 43 	movl   $0x943dd34,0x8(%esp)
 84ba221:	09 
 84ba222:	c7 44 24 04 50 63 c8 	movl   $0x8c86350,0x4(%esp)
 84ba229:	08 
 84ba22a:	8b 45 08             	mov    0x8(%ebp),%eax
 84ba22d:	89 04 24             	mov    %eax,(%esp)
 84ba230:	e8 5b 38 bc ff       	call   807da90 <fprintf@plt>
 84ba235:	eb 01                	jmp    84ba238 <_ZN10HistoryLog12WriteBuyItemEP8_IO_FILEii+0x44>
 84ba237:	90                   	nop
 84ba238:	c9                   	leave
 84ba239:	c3                   	ret

```

```c
// HistoryLog::WriteBuyItem @ 0x84ba1f4

/* HistoryLog::WriteBuyItem(_IO_FILE*, int, int) */

void HistoryLog::WriteBuyItem(_IO_FILE *param_1,int param_2,int param_3)

{
  char cVar1;
  
  cVar1 = CheckFD(param_1);
  if (cVar1 == '\x01') {
    fprintf(param_1,&DAT_08c86350,time,param_2,param_3);
  }
  return;
}

```

---

## WriteChat

```asm
// === 084b9e9e HistoryLog::WriteChat  [0x084b9e9e-0x84b9ee3] ===
 84b9e9e:	55                   	push   %ebp
 84b9e9f:	89 e5                	mov    %esp,%ebp
 84b9ea1:	83 ec 28             	sub    $0x28,%esp
 84b9ea4:	8b 45 08             	mov    0x8(%ebp),%eax
 84b9ea7:	89 04 24             	mov    %eax,(%esp)
 84b9eaa:	e8 57 fe ff ff       	call   84b9d06 <_ZN10HistoryLog7CheckFDEP8_IO_FILE>
 84b9eaf:	83 f0 01             	xor    $0x1,%eax
 84b9eb2:	84 c0                	test   %al,%al
 84b9eb4:	75 2b                	jne    84b9ee1 <_ZN10HistoryLog9WriteChatEP8_IO_FILEiPci+0x43>
 84b9eb6:	8b 45 10             	mov    0x10(%ebp),%eax
 84b9eb9:	89 44 24 10          	mov    %eax,0x10(%esp)
 84b9ebd:	8b 45 0c             	mov    0xc(%ebp),%eax
 84b9ec0:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84b9ec4:	c7 44 24 08 34 dd 43 	movl   $0x943dd34,0x8(%esp)
 84b9ecb:	09 
 84b9ecc:	c7 44 24 04 ed 61 c8 	movl   $0x8c861ed,0x4(%esp)
 84b9ed3:	08 
 84b9ed4:	8b 45 08             	mov    0x8(%ebp),%eax
 84b9ed7:	89 04 24             	mov    %eax,(%esp)
 84b9eda:	e8 b1 3b bc ff       	call   807da90 <fprintf@plt>
 84b9edf:	eb 01                	jmp    84b9ee2 <_ZN10HistoryLog9WriteChatEP8_IO_FILEiPci+0x44>
 84b9ee1:	90                   	nop
 84b9ee2:	c9                   	leave
 84b9ee3:	c3                   	ret

```

```c
// HistoryLog::WriteChat @ 0x84b9e9e

/* HistoryLog::WriteChat(_IO_FILE*, int, char*, int) */

void HistoryLog::WriteChat(_IO_FILE *param_1,int param_2,char *param_3,int param_4)

{
  char cVar1;
  
  cVar1 = CheckFD(param_1);
  if (cVar1 == '\x01') {
    fprintf(param_1,&DAT_08c861ed,time,param_2,param_3);
  }
  return;
}

```

---

## WriteComposition

```asm
// === 084ba174 HistoryLog::WriteComposition  [0x084ba174-0x84ba1b3] ===
 84ba174:	55                   	push   %ebp
 84ba175:	89 e5                	mov    %esp,%ebp
 84ba177:	83 ec 18             	sub    $0x18,%esp
 84ba17a:	8b 45 08             	mov    0x8(%ebp),%eax
 84ba17d:	89 04 24             	mov    %eax,(%esp)
 84ba180:	e8 81 fb ff ff       	call   84b9d06 <_ZN10HistoryLog7CheckFDEP8_IO_FILE>
 84ba185:	83 f0 01             	xor    $0x1,%eax
 84ba188:	84 c0                	test   %al,%al
 84ba18a:	75 24                	jne    84ba1b0 <_ZN10HistoryLog16WriteCompositionEP8_IO_FILEi+0x3c>
 84ba18c:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ba18f:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84ba193:	c7 44 24 08 34 dd 43 	movl   $0x943dd34,0x8(%esp)
 84ba19a:	09 
 84ba19b:	c7 44 24 04 25 63 c8 	movl   $0x8c86325,0x4(%esp)
 84ba1a2:	08 
 84ba1a3:	8b 45 08             	mov    0x8(%ebp),%eax
 84ba1a6:	89 04 24             	mov    %eax,(%esp)
 84ba1a9:	e8 e2 38 bc ff       	call   807da90 <fprintf@plt>
 84ba1ae:	eb 01                	jmp    84ba1b1 <_ZN10HistoryLog16WriteCompositionEP8_IO_FILEi+0x3d>
 84ba1b0:	90                   	nop
 84ba1b1:	c9                   	leave
 84ba1b2:	c3                   	ret
 84ba1b3:	90                   	nop

```

```c
// HistoryLog::WriteComposition @ 0x84ba174

/* HistoryLog::WriteComposition(_IO_FILE*, int) */

void HistoryLog::WriteComposition(_IO_FILE *param_1,int param_2)

{
  char cVar1;
  
  cVar1 = CheckFD(param_1);
  if (cVar1 == '\x01') {
    fprintf(param_1,&DAT_08c86325,time,param_2);
  }
  return;
}

```

---

## WriteCreateCh

```asm
// === 084b9d70 HistoryLog::WriteCreateCh  [0x084b9d70-0x84b9db5] ===
 84b9d70:	55                   	push   %ebp
 84b9d71:	89 e5                	mov    %esp,%ebp
 84b9d73:	83 ec 28             	sub    $0x28,%esp
 84b9d76:	8b 45 08             	mov    0x8(%ebp),%eax
 84b9d79:	89 04 24             	mov    %eax,(%esp)
 84b9d7c:	e8 85 ff ff ff       	call   84b9d06 <_ZN10HistoryLog7CheckFDEP8_IO_FILE>
 84b9d81:	83 f0 01             	xor    $0x1,%eax
 84b9d84:	84 c0                	test   %al,%al
 84b9d86:	75 2b                	jne    84b9db3 <_ZN10HistoryLog13WriteCreateChEP8_IO_FILEPci+0x43>
 84b9d88:	8b 45 10             	mov    0x10(%ebp),%eax
 84b9d8b:	89 44 24 10          	mov    %eax,0x10(%esp)
 84b9d8f:	8b 45 0c             	mov    0xc(%ebp),%eax
 84b9d92:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84b9d96:	c7 44 24 08 34 dd 43 	movl   $0x943dd34,0x8(%esp)
 84b9d9d:	09 
 84b9d9e:	c7 44 24 04 5f 61 c8 	movl   $0x8c8615f,0x4(%esp)
 84b9da5:	08 
 84b9da6:	8b 45 08             	mov    0x8(%ebp),%eax
 84b9da9:	89 04 24             	mov    %eax,(%esp)
 84b9dac:	e8 df 3c bc ff       	call   807da90 <fprintf@plt>
 84b9db1:	eb 01                	jmp    84b9db4 <_ZN10HistoryLog13WriteCreateChEP8_IO_FILEPci+0x44>
 84b9db3:	90                   	nop
 84b9db4:	c9                   	leave
 84b9db5:	c3                   	ret

```

```c
// HistoryLog::WriteCreateCh @ 0x84b9d70

/* HistoryLog::WriteCreateCh(_IO_FILE*, char*, int) */

void HistoryLog::WriteCreateCh(_IO_FILE *param_1,char *param_2,int param_3)

{
  char cVar1;
  
  cVar1 = CheckFD(param_1);
  if (cVar1 == '\x01') {
    fprintf(param_1,&DAT_08c8615f,time,param_2,param_3);
  }
  return;
}

```

---

## WriteDeleteCh

```asm
// === 084b9e0a HistoryLog::WriteDeleteCh  [0x084b9e0a-0x84b9e5d] ===
 84b9e0a:	55                   	push   %ebp
 84b9e0b:	89 e5                	mov    %esp,%ebp
 84b9e0d:	83 ec 28             	sub    $0x28,%esp
 84b9e10:	8b 45 08             	mov    0x8(%ebp),%eax
 84b9e13:	89 04 24             	mov    %eax,(%esp)
 84b9e16:	e8 eb fe ff ff       	call   84b9d06 <_ZN10HistoryLog7CheckFDEP8_IO_FILE>
 84b9e1b:	83 f0 01             	xor    $0x1,%eax
 84b9e1e:	84 c0                	test   %al,%al
 84b9e20:	75 39                	jne    84b9e5b <_ZN10HistoryLog13WriteDeleteChEP8_IO_FILEPciii+0x51>
 84b9e22:	8b 45 18             	mov    0x18(%ebp),%eax
 84b9e25:	89 44 24 18          	mov    %eax,0x18(%esp)
 84b9e29:	8b 45 14             	mov    0x14(%ebp),%eax
 84b9e2c:	89 44 24 14          	mov    %eax,0x14(%esp)
 84b9e30:	8b 45 10             	mov    0x10(%ebp),%eax
 84b9e33:	89 44 24 10          	mov    %eax,0x10(%esp)
 84b9e37:	8b 45 0c             	mov    0xc(%ebp),%eax
 84b9e3a:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84b9e3e:	c7 44 24 08 34 dd 43 	movl   $0x943dd34,0x8(%esp)
 84b9e45:	09 
 84b9e46:	c7 44 24 04 ac 61 c8 	movl   $0x8c861ac,0x4(%esp)
 84b9e4d:	08 
 84b9e4e:	8b 45 08             	mov    0x8(%ebp),%eax
 84b9e51:	89 04 24             	mov    %eax,(%esp)
 84b9e54:	e8 37 3c bc ff       	call   807da90 <fprintf@plt>
 84b9e59:	eb 01                	jmp    84b9e5c <_ZN10HistoryLog13WriteDeleteChEP8_IO_FILEPciii+0x52>
 84b9e5b:	90                   	nop
 84b9e5c:	c9                   	leave
 84b9e5d:	c3                   	ret

```

```c
// HistoryLog::WriteDeleteCh @ 0x84b9e0a

/* HistoryLog::WriteDeleteCh(_IO_FILE*, char*, int, int, int) */

void HistoryLog::WriteDeleteCh(_IO_FILE *param_1,char *param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  
  cVar1 = CheckFD(param_1);
  if (cVar1 == '\x01') {
    fprintf(param_1,&DAT_08c861ac,time,param_2,param_3,param_4,param_5);
  }
  return;
}

```

---

## WriteDie

```asm
// === 084b9ff8 HistoryLog::WriteDie  [0x084b9ff8-0x84ba02f] ===
 84b9ff8:	55                   	push   %ebp
 84b9ff9:	89 e5                	mov    %esp,%ebp
 84b9ffb:	83 ec 18             	sub    $0x18,%esp
 84b9ffe:	8b 45 08             	mov    0x8(%ebp),%eax
 84ba001:	89 04 24             	mov    %eax,(%esp)
 84ba004:	e8 fd fc ff ff       	call   84b9d06 <_ZN10HistoryLog7CheckFDEP8_IO_FILE>
 84ba009:	83 f0 01             	xor    $0x1,%eax
 84ba00c:	84 c0                	test   %al,%al
 84ba00e:	75 1d                	jne    84ba02d <_ZN10HistoryLog8WriteDieEP8_IO_FILE+0x35>
 84ba010:	c7 44 24 08 34 dd 43 	movl   $0x943dd34,0x8(%esp)
 84ba017:	09 
 84ba018:	c7 44 24 04 85 62 c8 	movl   $0x8c86285,0x4(%esp)
 84ba01f:	08 
 84ba020:	8b 45 08             	mov    0x8(%ebp),%eax
 84ba023:	89 04 24             	mov    %eax,(%esp)
 84ba026:	e8 65 3a bc ff       	call   807da90 <fprintf@plt>
 84ba02b:	eb 01                	jmp    84ba02e <_ZN10HistoryLog8WriteDieEP8_IO_FILE+0x36>
 84ba02d:	90                   	nop
 84ba02e:	c9                   	leave
 84ba02f:	c3                   	ret

```

```c
// HistoryLog::WriteDie @ 0x84b9ff8

/* HistoryLog::WriteDie(_IO_FILE*) */

void HistoryLog::WriteDie(_IO_FILE *param_1)

{
  char cVar1;
  
  cVar1 = CheckFD(param_1);
  if (cVar1 == '\x01') {
    fprintf(param_1,&DAT_08c86285,time);
  }
  return;
}

```

---

## WriteDisJoint

```asm
// === 084ba1b4 HistoryLog::WriteDisJoint  [0x084ba1b4-0x84ba1f3] ===
 84ba1b4:	55                   	push   %ebp
 84ba1b5:	89 e5                	mov    %esp,%ebp
 84ba1b7:	83 ec 18             	sub    $0x18,%esp
 84ba1ba:	8b 45 08             	mov    0x8(%ebp),%eax
 84ba1bd:	89 04 24             	mov    %eax,(%esp)
 84ba1c0:	e8 41 fb ff ff       	call   84b9d06 <_ZN10HistoryLog7CheckFDEP8_IO_FILE>
 84ba1c5:	83 f0 01             	xor    $0x1,%eax
 84ba1c8:	84 c0                	test   %al,%al
 84ba1ca:	75 24                	jne    84ba1f0 <_ZN10HistoryLog13WriteDisJointEP8_IO_FILEi+0x3c>
 84ba1cc:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ba1cf:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84ba1d3:	c7 44 24 08 34 dd 43 	movl   $0x943dd34,0x8(%esp)
 84ba1da:	09 
 84ba1db:	c7 44 24 04 3b 63 c8 	movl   $0x8c8633b,0x4(%esp)
 84ba1e2:	08 
 84ba1e3:	8b 45 08             	mov    0x8(%ebp),%eax
 84ba1e6:	89 04 24             	mov    %eax,(%esp)
 84ba1e9:	e8 a2 38 bc ff       	call   807da90 <fprintf@plt>
 84ba1ee:	eb 01                	jmp    84ba1f1 <_ZN10HistoryLog13WriteDisJointEP8_IO_FILEi+0x3d>
 84ba1f0:	90                   	nop
 84ba1f1:	c9                   	leave
 84ba1f2:	c3                   	ret
 84ba1f3:	90                   	nop

```

```c
// HistoryLog::WriteDisJoint @ 0x84ba1b4

/* HistoryLog::WriteDisJoint(_IO_FILE*, int) */

void HistoryLog::WriteDisJoint(_IO_FILE *param_1,int param_2)

{
  char cVar1;
  
  cVar1 = CheckFD(param_1);
  if (cVar1 == '\x01') {
    fprintf(param_1,&DAT_08c8633b,time,param_2);
  }
  return;
}

```

---

## WriteDunClear

```asm
// === 084ba0b0 HistoryLog::WriteDunClear  [0x084ba0b0-0x84ba0e7] ===
 84ba0b0:	55                   	push   %ebp
 84ba0b1:	89 e5                	mov    %esp,%ebp
 84ba0b3:	83 ec 18             	sub    $0x18,%esp
 84ba0b6:	8b 45 08             	mov    0x8(%ebp),%eax
 84ba0b9:	89 04 24             	mov    %eax,(%esp)
 84ba0bc:	e8 45 fc ff ff       	call   84b9d06 <_ZN10HistoryLog7CheckFDEP8_IO_FILE>
 84ba0c1:	83 f0 01             	xor    $0x1,%eax
 84ba0c4:	84 c0                	test   %al,%al
 84ba0c6:	75 1d                	jne    84ba0e5 <_ZN10HistoryLog13WriteDunClearEP8_IO_FILE+0x35>
 84ba0c8:	c7 44 24 08 34 dd 43 	movl   $0x943dd34,0x8(%esp)
 84ba0cf:	09 
 84ba0d0:	c7 44 24 04 c1 62 c8 	movl   $0x8c862c1,0x4(%esp)
 84ba0d7:	08 
 84ba0d8:	8b 45 08             	mov    0x8(%ebp),%eax
 84ba0db:	89 04 24             	mov    %eax,(%esp)
 84ba0de:	e8 ad 39 bc ff       	call   807da90 <fprintf@plt>
 84ba0e3:	eb 01                	jmp    84ba0e6 <_ZN10HistoryLog13WriteDunClearEP8_IO_FILE+0x36>
 84ba0e5:	90                   	nop
 84ba0e6:	c9                   	leave
 84ba0e7:	c3                   	ret

```

```c
// HistoryLog::WriteDunClear @ 0x84ba0b0

/* HistoryLog::WriteDunClear(_IO_FILE*) */

void HistoryLog::WriteDunClear(_IO_FILE *param_1)

{
  char cVar1;
  
  cVar1 = CheckFD(param_1);
  if (cVar1 == '\x01') {
    fprintf(param_1,&DAT_08c862c1,time);
  }
  return;
}

```

---

## WriteDunStart

```asm
// === 084b9f6a HistoryLog::WriteDunStart  [0x084b9f6a-0x84b9fb7] ===
 84b9f6a:	55                   	push   %ebp
 84b9f6b:	89 e5                	mov    %esp,%ebp
 84b9f6d:	83 ec 28             	sub    $0x28,%esp
 84b9f70:	8b 45 08             	mov    0x8(%ebp),%eax
 84b9f73:	89 04 24             	mov    %eax,(%esp)
 84b9f76:	e8 8b fd ff ff       	call   84b9d06 <_ZN10HistoryLog7CheckFDEP8_IO_FILE>
 84b9f7b:	83 f0 01             	xor    $0x1,%eax
 84b9f7e:	84 c0                	test   %al,%al
 84b9f80:	75 32                	jne    84b9fb4 <_ZN10HistoryLog13WriteDunStartEP8_IO_FILEiii+0x4a>
 84b9f82:	8b 45 14             	mov    0x14(%ebp),%eax
 84b9f85:	89 44 24 14          	mov    %eax,0x14(%esp)
 84b9f89:	8b 45 10             	mov    0x10(%ebp),%eax
 84b9f8c:	89 44 24 10          	mov    %eax,0x10(%esp)
 84b9f90:	8b 45 0c             	mov    0xc(%ebp),%eax
 84b9f93:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84b9f97:	c7 44 24 08 34 dd 43 	movl   $0x943dd34,0x8(%esp)
 84b9f9e:	09 
 84b9f9f:	c7 44 24 04 40 62 c8 	movl   $0x8c86240,0x4(%esp)
 84b9fa6:	08 
 84b9fa7:	8b 45 08             	mov    0x8(%ebp),%eax
 84b9faa:	89 04 24             	mov    %eax,(%esp)
 84b9fad:	e8 de 3a bc ff       	call   807da90 <fprintf@plt>
 84b9fb2:	eb 01                	jmp    84b9fb5 <_ZN10HistoryLog13WriteDunStartEP8_IO_FILEiii+0x4b>
 84b9fb4:	90                   	nop
 84b9fb5:	c9                   	leave
 84b9fb6:	c3                   	ret
 84b9fb7:	90                   	nop

```

```c
// HistoryLog::WriteDunStart @ 0x84b9f6a

/* HistoryLog::WriteDunStart(_IO_FILE*, int, int, int) */

void HistoryLog::WriteDunStart(_IO_FILE *param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  
  cVar1 = CheckFD(param_1);
  if (cVar1 == '\x01') {
    fprintf(param_1,&DAT_08c86240,time,param_2,param_3,param_4);
  }
  return;
}

```

---

## WriteFineQuest

```asm
// === 084b9ee4 HistoryLog::WriteFineQuest  [0x084b9ee4-0x84b9f23] ===
 84b9ee4:	55                   	push   %ebp
 84b9ee5:	89 e5                	mov    %esp,%ebp
 84b9ee7:	83 ec 18             	sub    $0x18,%esp
 84b9eea:	8b 45 08             	mov    0x8(%ebp),%eax
 84b9eed:	89 04 24             	mov    %eax,(%esp)
 84b9ef0:	e8 11 fe ff ff       	call   84b9d06 <_ZN10HistoryLog7CheckFDEP8_IO_FILE>
 84b9ef5:	83 f0 01             	xor    $0x1,%eax
 84b9ef8:	84 c0                	test   %al,%al
 84b9efa:	75 24                	jne    84b9f20 <_ZN10HistoryLog14WriteFineQuestEP8_IO_FILEi+0x3c>
 84b9efc:	8b 45 0c             	mov    0xc(%ebp),%eax
 84b9eff:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84b9f03:	c7 44 24 08 34 dd 43 	movl   $0x943dd34,0x8(%esp)
 84b9f0a:	09 
 84b9f0b:	c7 44 24 04 08 62 c8 	movl   $0x8c86208,0x4(%esp)
 84b9f12:	08 
 84b9f13:	8b 45 08             	mov    0x8(%ebp),%eax
 84b9f16:	89 04 24             	mov    %eax,(%esp)
 84b9f19:	e8 72 3b bc ff       	call   807da90 <fprintf@plt>
 84b9f1e:	eb 01                	jmp    84b9f21 <_ZN10HistoryLog14WriteFineQuestEP8_IO_FILEi+0x3d>
 84b9f20:	90                   	nop
 84b9f21:	c9                   	leave
 84b9f22:	c3                   	ret
 84b9f23:	90                   	nop

```

```c
// HistoryLog::WriteFineQuest @ 0x84b9ee4

/* HistoryLog::WriteFineQuest(_IO_FILE*, int) */

void HistoryLog::WriteFineQuest(_IO_FILE *param_1,int param_2)

{
  char cVar1;
  
  cVar1 = CheckFD(param_1);
  if (cVar1 == '\x01') {
    fprintf(param_1,&DAT_08c86208,time,param_2);
  }
  return;
}

```

---

## WriteGiveUp

```asm
// === 084ba070 HistoryLog::WriteGiveUp  [0x084ba070-0x84ba0af] ===
 84ba070:	55                   	push   %ebp
 84ba071:	89 e5                	mov    %esp,%ebp
 84ba073:	83 ec 18             	sub    $0x18,%esp
 84ba076:	8b 45 08             	mov    0x8(%ebp),%eax
 84ba079:	89 04 24             	mov    %eax,(%esp)
 84ba07c:	e8 85 fc ff ff       	call   84b9d06 <_ZN10HistoryLog7CheckFDEP8_IO_FILE>
 84ba081:	83 f0 01             	xor    $0x1,%eax
 84ba084:	84 c0                	test   %al,%al
 84ba086:	75 24                	jne    84ba0ac <_ZN10HistoryLog11WriteGiveUpEP8_IO_FILEPKc+0x3c>
 84ba088:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ba08b:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84ba08f:	c7 44 24 08 34 dd 43 	movl   $0x943dd34,0x8(%esp)
 84ba096:	09 
 84ba097:	c7 44 24 04 ae 62 c8 	movl   $0x8c862ae,0x4(%esp)
 84ba09e:	08 
 84ba09f:	8b 45 08             	mov    0x8(%ebp),%eax
 84ba0a2:	89 04 24             	mov    %eax,(%esp)
 84ba0a5:	e8 e6 39 bc ff       	call   807da90 <fprintf@plt>
 84ba0aa:	eb 01                	jmp    84ba0ad <_ZN10HistoryLog11WriteGiveUpEP8_IO_FILEPKc+0x3d>
 84ba0ac:	90                   	nop
 84ba0ad:	c9                   	leave
 84ba0ae:	c3                   	ret
 84ba0af:	90                   	nop

```

```c
// HistoryLog::WriteGiveUp @ 0x84ba070

/* HistoryLog::WriteGiveUp(_IO_FILE*, char const*) */

void HistoryLog::WriteGiveUp(_IO_FILE *param_1,char *param_2)

{
  char cVar1;
  
  cVar1 = CheckFD(param_1);
  if (cVar1 == '\x01') {
    fprintf(param_1,&DAT_08c862ae,time,param_2);
  }
  return;
}

```

---

## WriteKillMob

```asm
// === 084b9fb8 HistoryLog::WriteKillMob  [0x084b9fb8-0x84b9ff7] ===
 84b9fb8:	55                   	push   %ebp
 84b9fb9:	89 e5                	mov    %esp,%ebp
 84b9fbb:	83 ec 18             	sub    $0x18,%esp
 84b9fbe:	8b 45 08             	mov    0x8(%ebp),%eax
 84b9fc1:	89 04 24             	mov    %eax,(%esp)
 84b9fc4:	e8 3d fd ff ff       	call   84b9d06 <_ZN10HistoryLog7CheckFDEP8_IO_FILE>
 84b9fc9:	83 f0 01             	xor    $0x1,%eax
 84b9fcc:	84 c0                	test   %al,%al
 84b9fce:	75 24                	jne    84b9ff4 <_ZN10HistoryLog12WriteKillMobEP8_IO_FILEi+0x3c>
 84b9fd0:	8b 45 0c             	mov    0xc(%ebp),%eax
 84b9fd3:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84b9fd7:	c7 44 24 08 34 dd 43 	movl   $0x943dd34,0x8(%esp)
 84b9fde:	09 
 84b9fdf:	c7 44 24 04 6e 62 c8 	movl   $0x8c8626e,0x4(%esp)
 84b9fe6:	08 
 84b9fe7:	8b 45 08             	mov    0x8(%ebp),%eax
 84b9fea:	89 04 24             	mov    %eax,(%esp)
 84b9fed:	e8 9e 3a bc ff       	call   807da90 <fprintf@plt>
 84b9ff2:	eb 01                	jmp    84b9ff5 <_ZN10HistoryLog12WriteKillMobEP8_IO_FILEi+0x3d>
 84b9ff4:	90                   	nop
 84b9ff5:	c9                   	leave
 84b9ff6:	c3                   	ret
 84b9ff7:	90                   	nop

```

```c
// HistoryLog::WriteKillMob @ 0x84b9fb8

/* HistoryLog::WriteKillMob(_IO_FILE*, int) */

void HistoryLog::WriteKillMob(_IO_FILE *param_1,int param_2)

{
  char cVar1;
  
  cVar1 = CheckFD(param_1);
  if (cVar1 == '\x01') {
    fprintf(param_1,"[%s]Kill MobType: %d\r\n",time,param_2);
  }
  return;
}

```

---

## WriteLearnSkill

```asm
// === 084b9f24 HistoryLog::WriteLearnSkill  [0x084b9f24-0x84b9f69] ===
 84b9f24:	55                   	push   %ebp
 84b9f25:	89 e5                	mov    %esp,%ebp
 84b9f27:	83 ec 28             	sub    $0x28,%esp
 84b9f2a:	8b 45 08             	mov    0x8(%ebp),%eax
 84b9f2d:	89 04 24             	mov    %eax,(%esp)
 84b9f30:	e8 d1 fd ff ff       	call   84b9d06 <_ZN10HistoryLog7CheckFDEP8_IO_FILE>
 84b9f35:	83 f0 01             	xor    $0x1,%eax
 84b9f38:	84 c0                	test   %al,%al
 84b9f3a:	75 2b                	jne    84b9f67 <_ZN10HistoryLog15WriteLearnSkillEP8_IO_FILEii+0x43>
 84b9f3c:	8b 45 10             	mov    0x10(%ebp),%eax
 84b9f3f:	89 44 24 10          	mov    %eax,0x10(%esp)
 84b9f43:	8b 45 0c             	mov    0xc(%ebp),%eax
 84b9f46:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84b9f4a:	c7 44 24 08 34 dd 43 	movl   $0x943dd34,0x8(%esp)
 84b9f51:	09 
 84b9f52:	c7 44 24 04 20 62 c8 	movl   $0x8c86220,0x4(%esp)
 84b9f59:	08 
 84b9f5a:	8b 45 08             	mov    0x8(%ebp),%eax
 84b9f5d:	89 04 24             	mov    %eax,(%esp)
 84b9f60:	e8 2b 3b bc ff       	call   807da90 <fprintf@plt>
 84b9f65:	eb 01                	jmp    84b9f68 <_ZN10HistoryLog15WriteLearnSkillEP8_IO_FILEii+0x44>
 84b9f67:	90                   	nop
 84b9f68:	c9                   	leave
 84b9f69:	c3                   	ret

```

```c
// HistoryLog::WriteLearnSkill @ 0x84b9f24

/* HistoryLog::WriteLearnSkill(_IO_FILE*, int, int) */

void HistoryLog::WriteLearnSkill(_IO_FILE *param_1,int param_2,int param_3)

{
  char cVar1;
  
  cVar1 = CheckFD(param_1);
  if (cVar1 == '\x01') {
    fprintf(param_1,&DAT_08c86220,time,param_2,param_3);
  }
  return;
}

```

---

## WriteLevelUp

```asm
// === 084b9e5e HistoryLog::WriteLevelUp  [0x084b9e5e-0x84b9e9d] ===
 84b9e5e:	55                   	push   %ebp
 84b9e5f:	89 e5                	mov    %esp,%ebp
 84b9e61:	83 ec 18             	sub    $0x18,%esp
 84b9e64:	8b 45 08             	mov    0x8(%ebp),%eax
 84b9e67:	89 04 24             	mov    %eax,(%esp)
 84b9e6a:	e8 97 fe ff ff       	call   84b9d06 <_ZN10HistoryLog7CheckFDEP8_IO_FILE>
 84b9e6f:	83 f0 01             	xor    $0x1,%eax
 84b9e72:	84 c0                	test   %al,%al
 84b9e74:	75 24                	jne    84b9e9a <_ZN10HistoryLog12WriteLevelUpEP8_IO_FILEi+0x3c>
 84b9e76:	8b 45 0c             	mov    0xc(%ebp),%eax
 84b9e79:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84b9e7d:	c7 44 24 08 34 dd 43 	movl   $0x943dd34,0x8(%esp)
 84b9e84:	09 
 84b9e85:	c7 44 24 04 dc 61 c8 	movl   $0x8c861dc,0x4(%esp)
 84b9e8c:	08 
 84b9e8d:	8b 45 08             	mov    0x8(%ebp),%eax
 84b9e90:	89 04 24             	mov    %eax,(%esp)
 84b9e93:	e8 f8 3b bc ff       	call   807da90 <fprintf@plt>
 84b9e98:	eb 01                	jmp    84b9e9b <_ZN10HistoryLog12WriteLevelUpEP8_IO_FILEi+0x3d>
 84b9e9a:	90                   	nop
 84b9e9b:	c9                   	leave
 84b9e9c:	c3                   	ret
 84b9e9d:	90                   	nop

```

```c
// HistoryLog::WriteLevelUp @ 0x84b9e5e

/* HistoryLog::WriteLevelUp(_IO_FILE*, int) */

void HistoryLog::WriteLevelUp(_IO_FILE *param_1,int param_2)

{
  char cVar1;
  
  cVar1 = CheckFD(param_1);
  if (cVar1 == '\x01') {
    fprintf(param_1,&DAT_08c861dc,time,param_2);
  }
  return;
}

```

---

## WriteSelectCh

```asm
// === 084b9db6 HistoryLog::WriteSelectCh  [0x084b9db6-0x84b9e09] ===
 84b9db6:	55                   	push   %ebp
 84b9db7:	89 e5                	mov    %esp,%ebp
 84b9db9:	83 ec 28             	sub    $0x28,%esp
 84b9dbc:	8b 45 08             	mov    0x8(%ebp),%eax
 84b9dbf:	89 04 24             	mov    %eax,(%esp)
 84b9dc2:	e8 3f ff ff ff       	call   84b9d06 <_ZN10HistoryLog7CheckFDEP8_IO_FILE>
 84b9dc7:	83 f0 01             	xor    $0x1,%eax
 84b9dca:	84 c0                	test   %al,%al
 84b9dcc:	75 39                	jne    84b9e07 <_ZN10HistoryLog13WriteSelectChEP8_IO_FILEPKciii+0x51>
 84b9dce:	8b 45 18             	mov    0x18(%ebp),%eax
 84b9dd1:	89 44 24 18          	mov    %eax,0x18(%esp)
 84b9dd5:	8b 45 14             	mov    0x14(%ebp),%eax
 84b9dd8:	89 44 24 14          	mov    %eax,0x14(%esp)
 84b9ddc:	8b 45 10             	mov    0x10(%ebp),%eax
 84b9ddf:	89 44 24 10          	mov    %eax,0x10(%esp)
 84b9de3:	8b 45 0c             	mov    0xc(%ebp),%eax
 84b9de6:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84b9dea:	c7 44 24 08 34 dd 43 	movl   $0x943dd34,0x8(%esp)
 84b9df1:	09 
 84b9df2:	c7 44 24 04 7c 61 c8 	movl   $0x8c8617c,0x4(%esp)
 84b9df9:	08 
 84b9dfa:	8b 45 08             	mov    0x8(%ebp),%eax
 84b9dfd:	89 04 24             	mov    %eax,(%esp)
 84b9e00:	e8 8b 3c bc ff       	call   807da90 <fprintf@plt>
 84b9e05:	eb 01                	jmp    84b9e08 <_ZN10HistoryLog13WriteSelectChEP8_IO_FILEPKciii+0x52>
 84b9e07:	90                   	nop
 84b9e08:	c9                   	leave
 84b9e09:	c3                   	ret

```

```c
// HistoryLog::WriteSelectCh @ 0x84b9db6

/* HistoryLog::WriteSelectCh(_IO_FILE*, char const*, int, int, int) */

void HistoryLog::WriteSelectCh(_IO_FILE *param_1,char *param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  
  cVar1 = CheckFD(param_1);
  if (cVar1 == '\x01') {
    fprintf(param_1,&DAT_08c8617c,time,param_2,param_3,param_4,param_5);
  }
  return;
}

```

---

## WriteSellItem

```asm
// === 084ba23a HistoryLog::WriteSellItem  [0x084ba23a-0x84ba27f] ===
 84ba23a:	55                   	push   %ebp
 84ba23b:	89 e5                	mov    %esp,%ebp
 84ba23d:	83 ec 28             	sub    $0x28,%esp
 84ba240:	8b 45 08             	mov    0x8(%ebp),%eax
 84ba243:	89 04 24             	mov    %eax,(%esp)
 84ba246:	e8 bb fa ff ff       	call   84b9d06 <_ZN10HistoryLog7CheckFDEP8_IO_FILE>
 84ba24b:	83 f0 01             	xor    $0x1,%eax
 84ba24e:	84 c0                	test   %al,%al
 84ba250:	75 2b                	jne    84ba27d <_ZN10HistoryLog13WriteSellItemEP8_IO_FILEii+0x43>
 84ba252:	8b 45 10             	mov    0x10(%ebp),%eax
 84ba255:	89 44 24 10          	mov    %eax,0x10(%esp)
 84ba259:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ba25c:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84ba260:	c7 44 24 08 34 dd 43 	movl   $0x943dd34,0x8(%esp)
 84ba267:	09 
 84ba268:	c7 44 24 04 74 63 c8 	movl   $0x8c86374,0x4(%esp)
 84ba26f:	08 
 84ba270:	8b 45 08             	mov    0x8(%ebp),%eax
 84ba273:	89 04 24             	mov    %eax,(%esp)
 84ba276:	e8 15 38 bc ff       	call   807da90 <fprintf@plt>
 84ba27b:	eb 01                	jmp    84ba27e <_ZN10HistoryLog13WriteSellItemEP8_IO_FILEii+0x44>
 84ba27d:	90                   	nop
 84ba27e:	c9                   	leave
 84ba27f:	c3                   	ret

```

```c
// HistoryLog::WriteSellItem @ 0x84ba23a

/* HistoryLog::WriteSellItem(_IO_FILE*, int, int) */

void HistoryLog::WriteSellItem(_IO_FILE *param_1,int param_2,int param_3)

{
  char cVar1;
  
  cVar1 = CheckFD(param_1);
  if (cVar1 == '\x01') {
    fprintf(param_1,&DAT_08c86374,time,param_2,param_3);
  }
  return;
}

```

---

## WriteTradeDown

```asm
// === 084ba12e HistoryLog::WriteTradeDown  [0x084ba12e-0x84ba173] ===
 84ba12e:	55                   	push   %ebp
 84ba12f:	89 e5                	mov    %esp,%ebp
 84ba131:	83 ec 28             	sub    $0x28,%esp
 84ba134:	8b 45 08             	mov    0x8(%ebp),%eax
 84ba137:	89 04 24             	mov    %eax,(%esp)
 84ba13a:	e8 c7 fb ff ff       	call   84b9d06 <_ZN10HistoryLog7CheckFDEP8_IO_FILE>
 84ba13f:	83 f0 01             	xor    $0x1,%eax
 84ba142:	84 c0                	test   %al,%al
 84ba144:	75 2b                	jne    84ba171 <_ZN10HistoryLog14WriteTradeDownEP8_IO_FILEii+0x43>
 84ba146:	8b 45 10             	mov    0x10(%ebp),%eax
 84ba149:	89 44 24 10          	mov    %eax,0x10(%esp)
 84ba14d:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ba150:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84ba154:	c7 44 24 08 34 dd 43 	movl   $0x943dd34,0x8(%esp)
 84ba15b:	09 
 84ba15c:	c7 44 24 04 fc 62 c8 	movl   $0x8c862fc,0x4(%esp)
 84ba163:	08 
 84ba164:	8b 45 08             	mov    0x8(%ebp),%eax
 84ba167:	89 04 24             	mov    %eax,(%esp)
 84ba16a:	e8 21 39 bc ff       	call   807da90 <fprintf@plt>
 84ba16f:	eb 01                	jmp    84ba172 <_ZN10HistoryLog14WriteTradeDownEP8_IO_FILEii+0x44>
 84ba171:	90                   	nop
 84ba172:	c9                   	leave
 84ba173:	c3                   	ret

```

```c
// HistoryLog::WriteTradeDown @ 0x84ba12e

/* HistoryLog::WriteTradeDown(_IO_FILE*, int, int) */

void HistoryLog::WriteTradeDown(_IO_FILE *param_1,int param_2,int param_3)

{
  char cVar1;
  
  cVar1 = CheckFD(param_1);
  if (cVar1 == '\x01') {
    fprintf(param_1,&DAT_08c862fc,time,param_2,param_3);
  }
  return;
}

```

---

## WriteTradeUp

```asm
// === 084ba0e8 HistoryLog::WriteTradeUp  [0x084ba0e8-0x84ba12d] ===
 84ba0e8:	55                   	push   %ebp
 84ba0e9:	89 e5                	mov    %esp,%ebp
 84ba0eb:	83 ec 28             	sub    $0x28,%esp
 84ba0ee:	8b 45 08             	mov    0x8(%ebp),%eax
 84ba0f1:	89 04 24             	mov    %eax,(%esp)
 84ba0f4:	e8 0d fc ff ff       	call   84b9d06 <_ZN10HistoryLog7CheckFDEP8_IO_FILE>
 84ba0f9:	83 f0 01             	xor    $0x1,%eax
 84ba0fc:	84 c0                	test   %al,%al
 84ba0fe:	75 2b                	jne    84ba12b <_ZN10HistoryLog12WriteTradeUpEP8_IO_FILEii+0x43>
 84ba100:	8b 45 10             	mov    0x10(%ebp),%eax
 84ba103:	89 44 24 10          	mov    %eax,0x10(%esp)
 84ba107:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ba10a:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84ba10e:	c7 44 24 08 34 dd 43 	movl   $0x943dd34,0x8(%esp)
 84ba115:	09 
 84ba116:	c7 44 24 04 d4 62 c8 	movl   $0x8c862d4,0x4(%esp)
 84ba11d:	08 
 84ba11e:	8b 45 08             	mov    0x8(%ebp),%eax
 84ba121:	89 04 24             	mov    %eax,(%esp)
 84ba124:	e8 67 39 bc ff       	call   807da90 <fprintf@plt>
 84ba129:	eb 01                	jmp    84ba12c <_ZN10HistoryLog12WriteTradeUpEP8_IO_FILEii+0x44>
 84ba12b:	90                   	nop
 84ba12c:	c9                   	leave
 84ba12d:	c3                   	ret

```

```c
// HistoryLog::WriteTradeUp @ 0x84ba0e8

/* HistoryLog::WriteTradeUp(_IO_FILE*, int, int) */

void HistoryLog::WriteTradeUp(_IO_FILE *param_1,int param_2,int param_3)

{
  char cVar1;
  
  cVar1 = CheckFD(param_1);
  if (cVar1 == '\x01') {
    fprintf(param_1,&DAT_08c862d4,time,param_2,param_3);
  }
  return;
}

```

---

## WriteUseCoin

```asm
// === 084ba030 HistoryLog::WriteUseCoin  [0x084ba030-0x84ba06f] ===
 84ba030:	55                   	push   %ebp
 84ba031:	89 e5                	mov    %esp,%ebp
 84ba033:	83 ec 18             	sub    $0x18,%esp
 84ba036:	8b 45 08             	mov    0x8(%ebp),%eax
 84ba039:	89 04 24             	mov    %eax,(%esp)
 84ba03c:	e8 c5 fc ff ff       	call   84b9d06 <_ZN10HistoryLog7CheckFDEP8_IO_FILE>
 84ba041:	83 f0 01             	xor    $0x1,%eax
 84ba044:	84 c0                	test   %al,%al
 84ba046:	75 24                	jne    84ba06c <_ZN10HistoryLog12WriteUseCoinEP8_IO_FILEPKc+0x3c>
 84ba048:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ba04b:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84ba04f:	c7 44 24 08 34 dd 43 	movl   $0x943dd34,0x8(%esp)
 84ba056:	09 
 84ba057:	c7 44 24 04 99 62 c8 	movl   $0x8c86299,0x4(%esp)
 84ba05e:	08 
 84ba05f:	8b 45 08             	mov    0x8(%ebp),%eax
 84ba062:	89 04 24             	mov    %eax,(%esp)
 84ba065:	e8 26 3a bc ff       	call   807da90 <fprintf@plt>
 84ba06a:	eb 01                	jmp    84ba06d <_ZN10HistoryLog12WriteUseCoinEP8_IO_FILEPKc+0x3d>
 84ba06c:	90                   	nop
 84ba06d:	c9                   	leave
 84ba06e:	c3                   	ret
 84ba06f:	90                   	nop

```

```c
// HistoryLog::WriteUseCoin @ 0x84ba030

/* HistoryLog::WriteUseCoin(_IO_FILE*, char const*) */

void HistoryLog::WriteUseCoin(_IO_FILE *param_1,char *param_2)

{
  char cVar1;
  
  cVar1 = CheckFD(param_1);
  if (cVar1 == '\x01') {
    fprintf(param_1,&DAT_08c86299,time,param_2);
  }
  return;
}

```

