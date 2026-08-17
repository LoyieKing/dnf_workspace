# CSwitchLog

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## CSwitchLog

```asm
// === 0854fd3c CSwitchLog::CSwitchLog  [0x0854fd3c-0x854fd63] ===
 854fd3c:	55                   	push   %ebp
 854fd3d:	89 e5                	mov    %esp,%ebp
 854fd3f:	8b 45 08             	mov    0x8(%ebp),%eax
 854fd42:	8b 55 0c             	mov    0xc(%ebp),%edx
 854fd45:	89 10                	mov    %edx,(%eax)
 854fd47:	8b 45 08             	mov    0x8(%ebp),%eax
 854fd4a:	8b 55 10             	mov    0x10(%ebp),%edx
 854fd4d:	89 50 04             	mov    %edx,0x4(%eax)
 854fd50:	8b 45 08             	mov    0x8(%ebp),%eax
 854fd53:	8b 55 14             	mov    0x14(%ebp),%edx
 854fd56:	89 50 08             	mov    %edx,0x8(%eax)
 854fd59:	8b 45 08             	mov    0x8(%ebp),%eax
 854fd5c:	8b 55 18             	mov    0x18(%ebp),%edx
 854fd5f:	89 50 0c             	mov    %edx,0xc(%eax)
 854fd62:	5d                   	pop    %ebp
 854fd63:	c3                   	ret

```

```c
// CSwitchLog::CSwitchLog @ 0x854fd3c

/* CSwitchLog::CSwitchLog(char const*, int, int, int) */

void __thiscall
CSwitchLog::CSwitchLog(CSwitchLog *this,char *param_1,int param_2,int param_3,int param_4)

{
  *(char **)this = param_1;
  *(int *)(this + 4) = param_2;
  *(int *)(this + 8) = param_3;
  *(int *)(this + 0xc) = param_4;
  return;
}

```

---

## SetLogWriteFlag

```asm
// === 0854fd18 CSwitchLog::SetLogWriteFlag  [0x0854fd18-0x854fd3b] ===
 854fd18:	55                   	push   %ebp
 854fd19:	89 e5                	mov    %esp,%ebp
 854fd1b:	8b 45 08             	mov    0x8(%ebp),%eax
 854fd1e:	85 c0                	test   %eax,%eax
 854fd20:	74 07                	je     854fd29 <_ZN10CSwitchLog15SetLogWriteFlagEi+0x11>
 854fd22:	83 f8 01             	cmp    $0x1,%eax
 854fd25:	74 0b                	je     854fd32 <_ZN10CSwitchLog15SetLogWriteFlagEi+0x1a>
 854fd27:	eb 10                	jmp    854fd39 <_ZN10CSwitchLog15SetLogWriteFlagEi+0x21>
 854fd29:	c6 05 78 df 43 09 00 	movb   $0x0,0x943df78
 854fd30:	eb 07                	jmp    854fd39 <_ZN10CSwitchLog15SetLogWriteFlagEi+0x21>
 854fd32:	c6 05 78 df 43 09 01 	movb   $0x1,0x943df78
 854fd39:	5d                   	pop    %ebp
 854fd3a:	c3                   	ret
 854fd3b:	90                   	nop

```

```c
// CSwitchLog::SetLogWriteFlag @ 0x854fd18

/* CSwitchLog::SetLogWriteFlag(int) */

void CSwitchLog::SetLogWriteFlag(int param_1)

{
  if (param_1 == 0) {
    log_write_ = 0;
  }
  else if (param_1 == 1) {
    log_write_ = 1;
  }
  return;
}

```

---

## operator

```asm
// === 0854fd64 CSwitchLog::operator  [0x0854fd64-0x854fef8] ===
 854fd64:	55                   	push   %ebp
 854fd65:	89 e5                	mov    %esp,%ebp
 854fd67:	56                   	push   %esi
 854fd68:	53                   	push   %ebx
 854fd69:	81 ec 20 10 00 00    	sub    $0x1020,%esp
 854fd6f:	8b 45 08             	mov    0x8(%ebp),%eax
 854fd72:	8b 40 0c             	mov    0xc(%eax),%eax
 854fd75:	0f b6 80 78 df 43 09 	movzbl 0x943df78(%eax),%eax
 854fd7c:	84 c0                	test   %al,%al
 854fd7e:	0f 84 6b 01 00 00    	je     854feef <_ZN10CSwitchLogclEPKcz+0x18b>
 854fd84:	8b 45 08             	mov    0x8(%ebp),%eax
 854fd87:	8b 50 04             	mov    0x4(%eax),%edx
 854fd8a:	8b 45 08             	mov    0x8(%ebp),%eax
 854fd8d:	8b 00                	mov    (%eax),%eax
 854fd8f:	89 54 24 0c          	mov    %edx,0xc(%esp)
 854fd93:	89 44 24 08          	mov    %eax,0x8(%esp)
 854fd97:	c7 44 24 04 e9 ed c9 	movl   $0x8c9ede9,0x4(%esp)
 854fd9e:	08 
 854fd9f:	8d 85 ec ef ff ff    	lea    -0x1014(%ebp),%eax
 854fda5:	89 04 24             	mov    %eax,(%esp)
 854fda8:	e8 93 e6 b2 ff       	call   807e440 <sprintf@plt>
 854fdad:	8d 45 10             	lea    0x10(%ebp),%eax
 854fdb0:	89 45 f0             	mov    %eax,-0x10(%ebp)
 854fdb3:	8d 85 ec ef ff ff    	lea    -0x1014(%ebp),%eax
 854fdb9:	89 04 24             	mov    %eax,(%esp)
 854fdbc:	e8 ef e5 b2 ff       	call   807e3b0 <strlen@plt>
 854fdc1:	89 45 f4             	mov    %eax,-0xc(%ebp)
 854fdc4:	8b 55 f0             	mov    -0x10(%ebp),%edx
 854fdc7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 854fdca:	b9 ff 0f 00 00       	mov    $0xfff,%ecx
 854fdcf:	29 c1                	sub    %eax,%ecx
 854fdd1:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 854fdd4:	8d 85 ec ef ff ff    	lea    -0x1014(%ebp),%eax
 854fdda:	01 d8                	add    %ebx,%eax
 854fddc:	89 54 24 0c          	mov    %edx,0xc(%esp)
 854fde0:	8b 55 0c             	mov    0xc(%ebp),%edx
 854fde3:	89 54 24 08          	mov    %edx,0x8(%esp)
 854fde7:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 854fdeb:	89 04 24             	mov    %eax,(%esp)
 854fdee:	e8 fd e7 b2 ff       	call   807e5f0 <vsnprintf@plt>
 854fdf3:	e8 f4 e1 c2 ff       	call   817dfec <_ZN4CLog8instanceEv>
 854fdf8:	89 c1                	mov    %eax,%ecx
 854fdfa:	8b 45 08             	mov    0x8(%ebp),%eax
 854fdfd:	8b 50 08             	mov    0x8(%eax),%edx
 854fe00:	89 d0                	mov    %edx,%eax
 854fe02:	01 c0                	add    %eax,%eax
 854fe04:	01 d0                	add    %edx,%eax
 854fe06:	c1 e0 03             	shl    $0x3,%eax
 854fe09:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 854fe0c:	89 44 24 04          	mov    %eax,0x4(%esp)
 854fe10:	8d 45 ec             	lea    -0x14(%ebp),%eax
 854fe13:	89 04 24             	mov    %eax,(%esp)
 854fe16:	e8 31 56 bb ff       	call   810544c <_ZN5GuardI5MutexEC1EPS0_>
 854fe1b:	8b 45 08             	mov    0x8(%ebp),%eax
 854fe1e:	8b 40 08             	mov    0x8(%eax),%eax
 854fe21:	83 f8 05             	cmp    $0x5,%eax
 854fe24:	0f 87 9d 00 00 00    	ja     854fec7 <_ZN10CSwitchLogclEPKcz+0x163>
 854fe2a:	8b 04 85 30 ee c9 08 	mov    0x8c9ee30(,%eax,4),%eax
 854fe31:	ff e0                	jmp    *%eax
 854fe33:	e8 b4 e1 c2 ff       	call   817dfec <_ZN4CLog8instanceEv>
 854fe38:	8d 95 ec ef ff ff    	lea    -0x1014(%ebp),%edx
 854fe3e:	89 54 24 04          	mov    %edx,0x4(%esp)
 854fe42:	89 04 24             	mov    %eax,(%esp)
 854fe45:	e8 18 f3 ff ff       	call   854f162 <_ZN4CLog9logNoticeEPKcz>
 854fe4a:	eb 7b                	jmp    854fec7 <_ZN10CSwitchLogclEPKcz+0x163>
 854fe4c:	e8 9b e1 c2 ff       	call   817dfec <_ZN4CLog8instanceEv>
 854fe51:	8d 95 ec ef ff ff    	lea    -0x1014(%ebp),%edx
 854fe57:	89 54 24 04          	mov    %edx,0x4(%esp)
 854fe5b:	89 04 24             	mov    %eax,(%esp)
 854fe5e:	e8 5f f3 ff ff       	call   854f1c2 <_ZN4CLog8logErrorEPKcz>
 854fe63:	eb 62                	jmp    854fec7 <_ZN10CSwitchLogclEPKcz+0x163>
 854fe65:	e8 82 e1 c2 ff       	call   817dfec <_ZN4CLog8instanceEv>
 854fe6a:	8d 95 ec ef ff ff    	lea    -0x1014(%ebp),%edx
 854fe70:	89 54 24 04          	mov    %edx,0x4(%esp)
 854fe74:	89 04 24             	mov    %eax,(%esp)
 854fe77:	e8 8e f5 ff ff       	call   854f40a <_ZN4CLog8logDebugEPKcz>
 854fe7c:	eb 49                	jmp    854fec7 <_ZN10CSwitchLogclEPKcz+0x163>
 854fe7e:	e8 69 e1 c2 ff       	call   817dfec <_ZN4CLog8instanceEv>
 854fe83:	8d 95 ec ef ff ff    	lea    -0x1014(%ebp),%edx
 854fe89:	89 54 24 04          	mov    %edx,0x4(%esp)
 854fe8d:	89 04 24             	mov    %eax,(%esp)
 854fe90:	e8 7f f5 ff ff       	call   854f414 <_ZN4CLog10logConsoleEPKcz>
 854fe95:	eb 30                	jmp    854fec7 <_ZN10CSwitchLogclEPKcz+0x163>
 854fe97:	e8 50 e1 c2 ff       	call   817dfec <_ZN4CLog8instanceEv>
 854fe9c:	8d 95 ec ef ff ff    	lea    -0x1014(%ebp),%edx
 854fea2:	89 54 24 04          	mov    %edx,0x4(%esp)
 854fea6:	89 04 24             	mov    %eax,(%esp)
 854fea9:	e8 d4 f3 ff ff       	call   854f282 <_ZN4CLog8logMoneyEPKcz>
 854feae:	eb 17                	jmp    854fec7 <_ZN10CSwitchLogclEPKcz+0x163>
 854feb0:	e8 37 e1 c2 ff       	call   817dfec <_ZN4CLog8instanceEv>
 854feb5:	8d 95 ec ef ff ff    	lea    -0x1014(%ebp),%edx
 854febb:	89 54 24 04          	mov    %edx,0x4(%esp)
 854febf:	89 04 24             	mov    %eax,(%esp)
 854fec2:	e8 5b f3 ff ff       	call   854f222 <_ZN4CLog11logCriticalEPKcz>
 854fec7:	8d 45 ec             	lea    -0x14(%ebp),%eax
 854feca:	89 04 24             	mov    %eax,(%esp)
 854fecd:	e8 96 55 bb ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 854fed2:	eb 1b                	jmp    854feef <_ZN10CSwitchLogclEPKcz+0x18b>
 854fed4:	89 d3                	mov    %edx,%ebx
 854fed6:	89 c6                	mov    %eax,%esi
 854fed8:	8d 45 ec             	lea    -0x14(%ebp),%eax
 854fedb:	89 04 24             	mov    %eax,(%esp)
 854fede:	e8 85 55 bb ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 854fee3:	89 f0                	mov    %esi,%eax
 854fee5:	89 da                	mov    %ebx,%edx
 854fee7:	89 04 24             	mov    %eax,(%esp)
 854feea:	e8 61 38 59 00       	call   8ae3750 <_Unwind_Resume>
 854feef:	81 c4 20 10 00 00    	add    $0x1020,%esp
 854fef5:	5b                   	pop    %ebx
 854fef6:	5e                   	pop    %esi
 854fef7:	5d                   	pop    %ebp
 854fef8:	c3                   	ret

```

```c
// CSwitchLog::operator @ 0x854fd64

/* CSwitchLog::TEMPNAMEPLACEHOLDERVALUE(char const*, ...) */

void __thiscall CSwitchLog::operator()(CSwitchLog *this,char *param_1,...)

{
  int iVar1;
  char *pcVar2;
  CLog *pCVar3;
  char local_1018 [4096];
  Guard<Mutex> local_18 [4];
  undefined1 *local_14;
  size_t local_10;
  
  if ((&log_write_)[*(int *)(this + 0xc)] != '\0') {
    sprintf(local_1018,"%s(%d): ",*(undefined4 *)this,*(undefined4 *)(this + 4));
    local_14 = &stack0x0000000c;
    local_10 = strlen(local_1018);
    vsnprintf(local_1018 + local_10,0xfff - local_10,param_1,local_14);
    iVar1 = CLog::instance();
    Guard<Mutex>::Guard(local_18,(Mutex *)(iVar1 + *(int *)(this + 8) * 0x18));
    switch(*(undefined4 *)(this + 8)) {
    case 0:
      pCVar3 = (CLog *)CLog::instance();
                    /* try { // try from 0854fe45 to 0854fec6 has its CatchHandler @ 0854fed4 */
      CLog::logNotice(pCVar3,local_1018);
      break;
    case 1:
      pCVar3 = (CLog *)CLog::instance();
      CLog::logError(pCVar3,local_1018);
      break;
    case 2:
      pcVar2 = (char *)CLog::instance();
      CLog::logDebug(pcVar2,local_1018);
      break;
    case 3:
      pCVar3 = (CLog *)CLog::instance();
      CLog::logConsole(pCVar3,local_1018);
      break;
    case 4:
      pCVar3 = (CLog *)CLog::instance();
      CLog::logMoney(pCVar3,local_1018);
      break;
    case 5:
      pCVar3 = (CLog *)CLog::instance();
      CLog::logCritical(pCVar3,local_1018);
    }
    Guard<Mutex>::~Guard(local_18);
  }
  return;
}

```

