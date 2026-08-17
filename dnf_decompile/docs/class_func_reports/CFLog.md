# CFLog

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## CFLog

```asm
// === 08106dc4 CFLog::CFLog  [0x08106dc4-0x8106e5b] ===
 8106dc4:	55                   	push   %ebp
 8106dc5:	89 e5                	mov    %esp,%ebp
 8106dc7:	56                   	push   %esi
 8106dc8:	53                   	push   %ebx
 8106dc9:	83 ec 10             	sub    $0x10,%esp
 8106dcc:	8b 45 08             	mov    0x8(%ebp),%eax
 8106dcf:	c7 00 50 46 b4 08    	movl   $0x8b44650,(%eax)
 8106dd5:	8b 45 08             	mov    0x8(%ebp),%eax
 8106dd8:	83 c0 08             	add    $0x8,%eax
 8106ddb:	89 04 24             	mov    %eax,(%esp)
 8106dde:	e8 ed f7 5f 00       	call   87065d0 <_ZNSsC1Ev>
 8106de3:	8b 45 08             	mov    0x8(%ebp),%eax
 8106de6:	8d 50 08             	lea    0x8(%eax),%edx
 8106de9:	8b 45 0c             	mov    0xc(%ebp),%eax
 8106dec:	89 44 24 04          	mov    %eax,0x4(%esp)
 8106df0:	89 14 24             	mov    %edx,(%esp)
 8106df3:	e8 08 0f 60 00       	call   8707d00 <_ZNSsaSERKSs>
 8106df8:	8b 45 0c             	mov    0xc(%ebp),%eax
 8106dfb:	89 04 24             	mov    %eax,(%esp)
 8106dfe:	e8 ed f6 5f 00       	call   87064f0 <_ZNKSs5c_strEv>
 8106e03:	c7 44 24 04 80 40 b4 	movl   $0x8b44080,0x4(%esp)
 8106e0a:	08 
 8106e0b:	89 04 24             	mov    %eax,(%esp)
 8106e0e:	e8 5d 79 f7 ff       	call   807e770 <fopen@plt>
 8106e13:	8b 55 08             	mov    0x8(%ebp),%edx
 8106e16:	89 42 04             	mov    %eax,0x4(%edx)
 8106e19:	8b 45 08             	mov    0x8(%ebp),%eax
 8106e1c:	8b 40 04             	mov    0x4(%eax),%eax
 8106e1f:	85 c0                	test   %eax,%eax
 8106e21:	0f 94 c0             	sete   %al
 8106e24:	84 c0                	test   %al,%al
 8106e26:	74 2c                	je     8106e54 <_ZN5CFLogC1ERSs+0x90>
 8106e28:	8b 15 c8 56 3f 09    	mov    0x93f56c8,%edx
 8106e2e:	8b 45 08             	mov    0x8(%ebp),%eax
 8106e31:	89 50 04             	mov    %edx,0x4(%eax)
 8106e34:	eb 1e                	jmp    8106e54 <_ZN5CFLogC1ERSs+0x90>
 8106e36:	89 d3                	mov    %edx,%ebx
 8106e38:	89 c6                	mov    %eax,%esi
 8106e3a:	8b 45 08             	mov    0x8(%ebp),%eax
 8106e3d:	83 c0 08             	add    $0x8,%eax
 8106e40:	89 04 24             	mov    %eax,(%esp)
 8106e43:	e8 98 0d 60 00       	call   8707be0 <_ZNSsD1Ev>
 8106e48:	89 f0                	mov    %esi,%eax
 8106e4a:	89 da                	mov    %ebx,%edx
 8106e4c:	89 04 24             	mov    %eax,(%esp)
 8106e4f:	e8 fc c8 9d 00       	call   8ae3750 <_Unwind_Resume>
 8106e54:	83 c4 10             	add    $0x10,%esp
 8106e57:	5b                   	pop    %ebx
 8106e58:	5e                   	pop    %esi
 8106e59:	5d                   	pop    %ebp
 8106e5a:	c3                   	ret
 8106e5b:	90                   	nop

```

```c
// CFLog::CFLog @ 0x8106dc4

/* CFLog::CFLog(std::string&) */

void __thiscall CFLog::CFLog(CFLog *this,string *param_1)

{
  char *__filename;
  FILE *pFVar1;
  
  *(undefined ***)this = &PTR__CFLog_08b44650;
  std::string::string((string *)(this + 8));
                    /* try { // try from 08106df3 to 08106e12 has its CatchHandler @ 08106e36 */
  std::string::operator=((string *)(this + 8),(string *)param_1);
  __filename = (char *)std::string::c_str((string *)param_1);
  pFVar1 = fopen(__filename,"ab");
  *(FILE **)(this + 4) = pFVar1;
  if (*(int *)(this + 4) == 0) {
    *(undefined4 *)(this + 4) = stdout;
  }
  return;
}

```

---

## writeLog

```asm
// === 08106ee2 CFLog::writeLog  [0x08106ee2-0x8106f8d] ===
 8106ee2:	55                   	push   %ebp
 8106ee3:	89 e5                	mov    %esp,%ebp
 8106ee5:	53                   	push   %ebx
 8106ee6:	81 ec 24 e0 00 00    	sub    $0xe024,%esp
 8106eec:	8b 45 08             	mov    0x8(%ebp),%eax
 8106eef:	8b 40 04             	mov    0x4(%eax),%eax
 8106ef2:	85 c0                	test   %eax,%eax
 8106ef4:	0f 84 89 00 00 00    	je     8106f83 <_ZN5CFLog8writeLogEP2tmPKcPc+0xa1>
 8106efa:	8b 45 14             	mov    0x14(%ebp),%eax
 8106efd:	89 44 24 08          	mov    %eax,0x8(%esp)
 8106f01:	8b 45 10             	mov    0x10(%ebp),%eax
 8106f04:	89 44 24 04          	mov    %eax,0x4(%esp)
 8106f08:	8d 85 f8 8f ff ff    	lea    -0x7008(%ebp),%eax
 8106f0e:	89 04 24             	mov    %eax,(%esp)
 8106f11:	e8 ba 68 f7 ff       	call   807d7d0 <vsprintf@plt>
 8106f16:	8b 45 0c             	mov    0xc(%ebp),%eax
 8106f19:	8b 08                	mov    (%eax),%ecx
 8106f1b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8106f1e:	8b 50 04             	mov    0x4(%eax),%edx
 8106f21:	8b 45 0c             	mov    0xc(%ebp),%eax
 8106f24:	8b 40 08             	mov    0x8(%eax),%eax
 8106f27:	8d 9d f8 8f ff ff    	lea    -0x7008(%ebp),%ebx
 8106f2d:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 8106f31:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8106f35:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8106f39:	89 44 24 08          	mov    %eax,0x8(%esp)
 8106f3d:	c7 44 24 04 83 40 b4 	movl   $0x8b44083,0x4(%esp)
 8106f44:	08 
 8106f45:	8d 85 f8 1f ff ff    	lea    -0xe008(%ebp),%eax
 8106f4b:	89 04 24             	mov    %eax,(%esp)
 8106f4e:	e8 ed 74 f7 ff       	call   807e440 <sprintf@plt>
 8106f53:	8b 45 08             	mov    0x8(%ebp),%eax
 8106f56:	8b 40 04             	mov    0x4(%eax),%eax
 8106f59:	8d 95 f8 1f ff ff    	lea    -0xe008(%ebp),%edx
 8106f5f:	89 54 24 08          	mov    %edx,0x8(%esp)
 8106f63:	c7 44 24 04 97 40 b4 	movl   $0x8b44097,0x4(%esp)
 8106f6a:	08 
 8106f6b:	89 04 24             	mov    %eax,(%esp)
 8106f6e:	e8 1d 6b f7 ff       	call   807da90 <fprintf@plt>
 8106f73:	8b 45 08             	mov    0x8(%ebp),%eax
 8106f76:	8b 40 04             	mov    0x4(%eax),%eax
 8106f79:	89 04 24             	mov    %eax,(%esp)
 8106f7c:	e8 4f 79 f7 ff       	call   807e8d0 <fflush@plt>
 8106f81:	eb 01                	jmp    8106f84 <_ZN5CFLog8writeLogEP2tmPKcPc+0xa2>
 8106f83:	90                   	nop
 8106f84:	81 c4 24 e0 00 00    	add    $0xe024,%esp
 8106f8a:	5b                   	pop    %ebx
 8106f8b:	5d                   	pop    %ebp
 8106f8c:	c3                   	ret
 8106f8d:	90                   	nop

```

```c
// CFLog::writeLog @ 0x8106ee2

/* CFLog::writeLog(tm*, char const*, char*) */

void __thiscall CFLog::writeLog(CFLog *this,tm *param_1,char *param_2,char *param_3)

{
  char local_e00c [28672];
  char local_700c [28676];
  
  if (*(int *)(this + 4) != 0) {
    vsprintf(local_700c,param_2,param_3);
    sprintf(local_e00c,"[%02d:%02d:%02d] %s",param_1->tm_hour,param_1->tm_min,param_1->tm_sec,
            local_700c);
    fprintf(*(FILE **)(this + 4),"%s\r\n",local_e00c);
    fflush(*(FILE **)(this + 4));
  }
  return;
}

```

---

## writeLog_08106f8e

```asm
// === 08106f8e CFLog::writeLog  [0x08106f8e-0x8106fef] ===
 8106f8e:	55                   	push   %ebp
 8106f8f:	89 e5                	mov    %esp,%ebp
 8106f91:	81 ec 18 70 00 00    	sub    $0x7018,%esp
 8106f97:	8b 45 08             	mov    0x8(%ebp),%eax
 8106f9a:	8b 40 04             	mov    0x4(%eax),%eax
 8106f9d:	85 c0                	test   %eax,%eax
 8106f9f:	74 4c                	je     8106fed <_ZN5CFLog8writeLogEPKcPc+0x5f>
 8106fa1:	8b 45 10             	mov    0x10(%ebp),%eax
 8106fa4:	89 44 24 08          	mov    %eax,0x8(%esp)
 8106fa8:	8b 45 0c             	mov    0xc(%ebp),%eax
 8106fab:	89 44 24 04          	mov    %eax,0x4(%esp)
 8106faf:	8d 85 f8 8f ff ff    	lea    -0x7008(%ebp),%eax
 8106fb5:	89 04 24             	mov    %eax,(%esp)
 8106fb8:	e8 13 68 f7 ff       	call   807d7d0 <vsprintf@plt>
 8106fbd:	8b 45 08             	mov    0x8(%ebp),%eax
 8106fc0:	8b 40 04             	mov    0x4(%eax),%eax
 8106fc3:	8d 95 f8 8f ff ff    	lea    -0x7008(%ebp),%edx
 8106fc9:	89 54 24 08          	mov    %edx,0x8(%esp)
 8106fcd:	c7 44 24 04 97 40 b4 	movl   $0x8b44097,0x4(%esp)
 8106fd4:	08 
 8106fd5:	89 04 24             	mov    %eax,(%esp)
 8106fd8:	e8 b3 6a f7 ff       	call   807da90 <fprintf@plt>
 8106fdd:	8b 45 08             	mov    0x8(%ebp),%eax
 8106fe0:	8b 40 04             	mov    0x4(%eax),%eax
 8106fe3:	89 04 24             	mov    %eax,(%esp)
 8106fe6:	e8 e5 78 f7 ff       	call   807e8d0 <fflush@plt>
 8106feb:	eb 01                	jmp    8106fee <_ZN5CFLog8writeLogEPKcPc+0x60>
 8106fed:	90                   	nop
 8106fee:	c9                   	leave
 8106fef:	c3                   	ret

```

```c
// CFLog::writeLog @ 0x8106f8e

/* CFLog::writeLog(char const*, char*) */

void __thiscall CFLog::writeLog(CFLog *this,char *param_1,char *param_2)

{
  char local_700c [28680];
  
  if (*(int *)(this + 4) != 0) {
    vsprintf(local_700c,param_1,param_2);
    fprintf(*(FILE **)(this + 4),"%s\r\n",local_700c);
    fflush(*(FILE **)(this + 4));
  }
  return;
}

```

---

## ~CFLog

```asm
// === 08106e5c CFLog::~CFLog  [0x08106e5c-0x8106ec3] ===
 8106e5c:	55                   	push   %ebp
 8106e5d:	89 e5                	mov    %esp,%ebp
 8106e5f:	56                   	push   %esi
 8106e60:	53                   	push   %ebx
 8106e61:	83 ec 10             	sub    $0x10,%esp
 8106e64:	8b 45 08             	mov    0x8(%ebp),%eax
 8106e67:	c7 00 50 46 b4 08    	movl   $0x8b44650,(%eax)
 8106e6d:	8b 45 08             	mov    0x8(%ebp),%eax
 8106e70:	8b 40 04             	mov    0x4(%eax),%eax
 8106e73:	89 04 24             	mov    %eax,(%esp)
 8106e76:	e8 25 70 f7 ff       	call   807dea0 <fclose@plt>
 8106e7b:	eb 1e                	jmp    8106e9b <_ZN5CFLogD1Ev+0x3f>
 8106e7d:	89 d3                	mov    %edx,%ebx
 8106e7f:	89 c6                	mov    %eax,%esi
 8106e81:	8b 45 08             	mov    0x8(%ebp),%eax
 8106e84:	83 c0 08             	add    $0x8,%eax
 8106e87:	89 04 24             	mov    %eax,(%esp)
 8106e8a:	e8 51 0d 60 00       	call   8707be0 <_ZNSsD1Ev>
 8106e8f:	89 f0                	mov    %esi,%eax
 8106e91:	89 da                	mov    %ebx,%edx
 8106e93:	89 04 24             	mov    %eax,(%esp)
 8106e96:	e8 b5 c8 9d 00       	call   8ae3750 <_Unwind_Resume>
 8106e9b:	8b 45 08             	mov    0x8(%ebp),%eax
 8106e9e:	83 c0 08             	add    $0x8,%eax
 8106ea1:	89 04 24             	mov    %eax,(%esp)
 8106ea4:	e8 37 0d 60 00       	call   8707be0 <_ZNSsD1Ev>
 8106ea9:	b8 00 00 00 00       	mov    $0x0,%eax
 8106eae:	84 c0                	test   %al,%al
 8106eb0:	74 0b                	je     8106ebd <_ZN5CFLogD1Ev+0x61>
 8106eb2:	8b 45 08             	mov    0x8(%ebp),%eax
 8106eb5:	89 04 24             	mov    %eax,(%esp)
 8106eb8:	e8 33 d6 61 00       	call   87244f0 <_ZdlPv>
 8106ebd:	83 c4 10             	add    $0x10,%esp
 8106ec0:	5b                   	pop    %ebx
 8106ec1:	5e                   	pop    %esi
 8106ec2:	5d                   	pop    %ebp
 8106ec3:	c3                   	ret

```

```c
// CFLog::~CFLog @ 0x8106e5c

/* WARNING: Removing unreachable block (ram,0x08106eb2) */
/* CFLog::~CFLog() */

void __thiscall CFLog::~CFLog(CFLog *this)

{
  *(undefined ***)this = &PTR__CFLog_08b44650;
                    /* try { // try from 08106e76 to 08106e7a has its CatchHandler @ 08106e7d */
  fclose(*(FILE **)(this + 4));
  std::string::~string((string *)(this + 8));
  return;
}

```

---

## ~CFLog_08106ec4

```asm
// === 08106ec4 CFLog::~CFLog  [0x08106ec4-0x8106ee1] ===
 8106ec4:	55                   	push   %ebp
 8106ec5:	89 e5                	mov    %esp,%ebp
 8106ec7:	83 ec 18             	sub    $0x18,%esp
 8106eca:	8b 45 08             	mov    0x8(%ebp),%eax
 8106ecd:	89 04 24             	mov    %eax,(%esp)
 8106ed0:	e8 87 ff ff ff       	call   8106e5c <_ZN5CFLogD1Ev>
 8106ed5:	8b 45 08             	mov    0x8(%ebp),%eax
 8106ed8:	89 04 24             	mov    %eax,(%esp)
 8106edb:	e8 10 d6 61 00       	call   87244f0 <_ZdlPv>
 8106ee0:	c9                   	leave
 8106ee1:	c3                   	ret

```

```c
// CFLog::~CFLog @ 0x8106ec4

/* CFLog::~CFLog() */

void __thiscall CFLog::~CFLog(CFLog *this)

{
  ~CFLog(this);
  operator_delete(this);
  return;
}

```

