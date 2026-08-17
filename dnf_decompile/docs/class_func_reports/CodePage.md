# CodePage

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 8

---

## client

```asm
// === 08108df4 CodePage::client  [0x08108df4-0x8108e07] ===
 8108df4:	55                   	push   %ebp
 8108df5:	89 e5                	mov    %esp,%ebp
 8108df7:	83 ec 18             	sub    $0x18,%esp
 8108dfa:	c7 04 24 f4 eb 3f 09 	movl   $0x93febf4,(%esp)
 8108e01:	e8 ea d6 5f 00       	call   87064f0 <_ZNKSs5c_strEv>
 8108e06:	c9                   	leave
 8108e07:	c3                   	ret

```

```c
// CodePage::client @ 0x8108df4

/* CodePage::client() */

void CodePage::client(void)

{
  std::string::c_str((string *)&gClientEncoding);
  return;
}

```

---

## client2Database

```asm
// === 08108ed2 CodePage::client2Database  [0x08108ed2-0x8108f36] ===
 8108ed2:	55                   	push   %ebp
 8108ed3:	89 e5                	mov    %esp,%ebp
 8108ed5:	53                   	push   %ebx
 8108ed6:	83 ec 14             	sub    $0x14,%esp
 8108ed9:	c7 44 24 04 f4 eb 3f 	movl   $0x93febf4,0x4(%esp)
 8108ee0:	09 
 8108ee1:	c7 04 24 fc eb 3f 09 	movl   $0x93febfc,(%esp)
 8108ee8:	e8 93 db 5f 00       	call   8706a80 <_ZNKSs7compareERKSs>
 8108eed:	85 c0                	test   %eax,%eax
 8108eef:	0f 94 c0             	sete   %al
 8108ef2:	84 c0                	test   %al,%al
 8108ef4:	74 07                	je     8108efd <_ZN8CodePage15client2DatabaseEPcS0_+0x2b>
 8108ef6:	b8 01 00 00 00       	mov    $0x1,%eax
 8108efb:	eb 34                	jmp    8108f31 <_ZN8CodePage15client2DatabaseEPcS0_+0x5f>
 8108efd:	c7 04 24 fc eb 3f 09 	movl   $0x93febfc,(%esp)
 8108f04:	e8 e7 d5 5f 00       	call   87064f0 <_ZNKSs5c_strEv>
 8108f09:	89 c3                	mov    %eax,%ebx
 8108f0b:	c7 04 24 f4 eb 3f 09 	movl   $0x93febf4,(%esp)
 8108f12:	e8 d9 d5 5f 00       	call   87064f0 <_ZNKSs5c_strEv>
 8108f17:	8b 55 0c             	mov    0xc(%ebp),%edx
 8108f1a:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8108f1e:	8b 55 08             	mov    0x8(%ebp),%edx
 8108f21:	89 54 24 08          	mov    %edx,0x8(%esp)
 8108f25:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8108f29:	89 04 24             	mov    %eax,(%esp)
 8108f2c:	e8 ca fc ff ff       	call   8108bfb <_ZN7DNFFLib15CharacSetSwitchEPKcS1_PcS2_>
 8108f31:	83 c4 14             	add    $0x14,%esp
 8108f34:	5b                   	pop    %ebx
 8108f35:	5d                   	pop    %ebp
 8108f36:	c3                   	ret

```

```c
// CodePage::client2Database @ 0x8108ed2

/* CodePage::client2Database(char*, char*) */

undefined4 CodePage::client2Database(char *param_1,char *param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar1 = std::string::compare((string *)&gDatabaseEncoding,(string *)&gClientEncoding);
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    pcVar3 = (char *)std::string::c_str((string *)&gDatabaseEncoding);
    pcVar4 = (char *)std::string::c_str((string *)&gClientEncoding);
    uVar2 = DNFFLib::CharacSetSwitch(pcVar4,pcVar3,param_1,param_2);
  }
  return uVar2;
}

```

---

## database

```asm
// === 08108de0 CodePage::database  [0x08108de0-0x8108df3] ===
 8108de0:	55                   	push   %ebp
 8108de1:	89 e5                	mov    %esp,%ebp
 8108de3:	83 ec 18             	sub    $0x18,%esp
 8108de6:	c7 04 24 fc eb 3f 09 	movl   $0x93febfc,(%esp)
 8108ded:	e8 fe d6 5f 00       	call   87064f0 <_ZNKSs5c_strEv>
 8108df2:	c9                   	leave
 8108df3:	c3                   	ret

```

```c
// CodePage::database @ 0x8108de0

/* CodePage::database() */

void CodePage::database(void)

{
  std::string::c_str((string *)&gDatabaseEncoding);
  return;
}

```

---

## database2Client

```asm
// === 08108f37 CodePage::database2Client  [0x08108f37-0x8108f9b] ===
 8108f37:	55                   	push   %ebp
 8108f38:	89 e5                	mov    %esp,%ebp
 8108f3a:	53                   	push   %ebx
 8108f3b:	83 ec 14             	sub    $0x14,%esp
 8108f3e:	c7 44 24 04 f4 eb 3f 	movl   $0x93febf4,0x4(%esp)
 8108f45:	09 
 8108f46:	c7 04 24 fc eb 3f 09 	movl   $0x93febfc,(%esp)
 8108f4d:	e8 2e db 5f 00       	call   8706a80 <_ZNKSs7compareERKSs>
 8108f52:	85 c0                	test   %eax,%eax
 8108f54:	0f 94 c0             	sete   %al
 8108f57:	84 c0                	test   %al,%al
 8108f59:	74 07                	je     8108f62 <_ZN8CodePage15database2ClientEPcS0_+0x2b>
 8108f5b:	b8 01 00 00 00       	mov    $0x1,%eax
 8108f60:	eb 34                	jmp    8108f96 <_ZN8CodePage15database2ClientEPcS0_+0x5f>
 8108f62:	c7 04 24 f4 eb 3f 09 	movl   $0x93febf4,(%esp)
 8108f69:	e8 82 d5 5f 00       	call   87064f0 <_ZNKSs5c_strEv>
 8108f6e:	89 c3                	mov    %eax,%ebx
 8108f70:	c7 04 24 fc eb 3f 09 	movl   $0x93febfc,(%esp)
 8108f77:	e8 74 d5 5f 00       	call   87064f0 <_ZNKSs5c_strEv>
 8108f7c:	8b 55 0c             	mov    0xc(%ebp),%edx
 8108f7f:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8108f83:	8b 55 08             	mov    0x8(%ebp),%edx
 8108f86:	89 54 24 08          	mov    %edx,0x8(%esp)
 8108f8a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8108f8e:	89 04 24             	mov    %eax,(%esp)
 8108f91:	e8 65 fc ff ff       	call   8108bfb <_ZN7DNFFLib15CharacSetSwitchEPKcS1_PcS2_>
 8108f96:	83 c4 14             	add    $0x14,%esp
 8108f99:	5b                   	pop    %ebx
 8108f9a:	5d                   	pop    %ebp
 8108f9b:	c3                   	ret

```

```c
// CodePage::database2Client @ 0x8108f37

/* CodePage::database2Client(char*, char*) */

undefined4 CodePage::database2Client(char *param_1,char *param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar1 = std::string::compare((string *)&gDatabaseEncoding,(string *)&gClientEncoding);
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    pcVar3 = (char *)std::string::c_str((string *)&gClientEncoding);
    pcVar4 = (char *)std::string::c_str((string *)&gDatabaseEncoding);
    uVar2 = DNFFLib::CharacSetSwitch(pcVar4,pcVar3,param_1,param_2);
  }
  return uVar2;
}

```

---

## database2Script

```asm
// === 08108e6d CodePage::database2Script  [0x08108e6d-0x8108ed1] ===
 8108e6d:	55                   	push   %ebp
 8108e6e:	89 e5                	mov    %esp,%ebp
 8108e70:	53                   	push   %ebx
 8108e71:	83 ec 14             	sub    $0x14,%esp
 8108e74:	c7 44 24 04 f8 eb 3f 	movl   $0x93febf8,0x4(%esp)
 8108e7b:	09 
 8108e7c:	c7 04 24 fc eb 3f 09 	movl   $0x93febfc,(%esp)
 8108e83:	e8 f8 db 5f 00       	call   8706a80 <_ZNKSs7compareERKSs>
 8108e88:	85 c0                	test   %eax,%eax
 8108e8a:	0f 94 c0             	sete   %al
 8108e8d:	84 c0                	test   %al,%al
 8108e8f:	74 07                	je     8108e98 <_ZN8CodePage15database2ScriptEPcS0_+0x2b>
 8108e91:	b8 01 00 00 00       	mov    $0x1,%eax
 8108e96:	eb 34                	jmp    8108ecc <_ZN8CodePage15database2ScriptEPcS0_+0x5f>
 8108e98:	c7 04 24 f8 eb 3f 09 	movl   $0x93febf8,(%esp)
 8108e9f:	e8 4c d6 5f 00       	call   87064f0 <_ZNKSs5c_strEv>
 8108ea4:	89 c3                	mov    %eax,%ebx
 8108ea6:	c7 04 24 fc eb 3f 09 	movl   $0x93febfc,(%esp)
 8108ead:	e8 3e d6 5f 00       	call   87064f0 <_ZNKSs5c_strEv>
 8108eb2:	8b 55 0c             	mov    0xc(%ebp),%edx
 8108eb5:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8108eb9:	8b 55 08             	mov    0x8(%ebp),%edx
 8108ebc:	89 54 24 08          	mov    %edx,0x8(%esp)
 8108ec0:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8108ec4:	89 04 24             	mov    %eax,(%esp)
 8108ec7:	e8 2f fd ff ff       	call   8108bfb <_ZN7DNFFLib15CharacSetSwitchEPKcS1_PcS2_>
 8108ecc:	83 c4 14             	add    $0x14,%esp
 8108ecf:	5b                   	pop    %ebx
 8108ed0:	5d                   	pop    %ebp
 8108ed1:	c3                   	ret

```

```c
// CodePage::database2Script @ 0x8108e6d

/* CodePage::database2Script(char*, char*) */

undefined4 CodePage::database2Script(char *param_1,char *param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar1 = std::string::compare((string *)&gDatabaseEncoding,(string *)&gScriptEncoding);
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    pcVar3 = (char *)std::string::c_str((string *)&gScriptEncoding);
    pcVar4 = (char *)std::string::c_str((string *)&gDatabaseEncoding);
    uVar2 = DNFFLib::CharacSetSwitch(pcVar4,pcVar3,param_1,param_2);
  }
  return uVar2;
}

```

---

## initCodePage

```asm
// === 08108d88 CodePage::initCodePage  [0x08108d88-0x8108dcb] ===
 8108d88:	55                   	push   %ebp
 8108d89:	89 e5                	mov    %esp,%ebp
 8108d8b:	83 ec 18             	sub    $0x18,%esp
 8108d8e:	c7 44 24 04 cb 46 b4 	movl   $0x8b446cb,0x4(%esp)
 8108d95:	08 
 8108d96:	c7 04 24 f4 eb 3f 09 	movl   $0x93febf4,(%esp)
 8108d9d:	e8 7e f9 5f 00       	call   8708720 <_ZNSsaSEPKc>
 8108da2:	c7 44 24 04 d1 46 b4 	movl   $0x8b446d1,0x4(%esp)
 8108da9:	08 
 8108daa:	c7 04 24 f8 eb 3f 09 	movl   $0x93febf8,(%esp)
 8108db1:	e8 6a f9 5f 00       	call   8708720 <_ZNSsaSEPKc>
 8108db6:	c7 44 24 04 cb 46 b4 	movl   $0x8b446cb,0x4(%esp)
 8108dbd:	08 
 8108dbe:	c7 04 24 fc eb 3f 09 	movl   $0x93febfc,(%esp)
 8108dc5:	e8 56 f9 5f 00       	call   8708720 <_ZNSsaSEPKc>
 8108dca:	c9                   	leave
 8108dcb:	c3                   	ret

```

```c
// CodePage::initCodePage @ 0x8108d88

/* CodePage::initCodePage() */

void CodePage::initCodePage(void)

{
  std::string::operator=((string *)&gClientEncoding,"UTF-8");
  std::string::operator=((string *)&gScriptEncoding,"GBK");
  std::string::operator=((string *)&gDatabaseEncoding,"UTF-8");
  return;
}

```

---

## script

```asm
// === 08108dcc CodePage::script  [0x08108dcc-0x8108ddf] ===
 8108dcc:	55                   	push   %ebp
 8108dcd:	89 e5                	mov    %esp,%ebp
 8108dcf:	83 ec 18             	sub    $0x18,%esp
 8108dd2:	c7 04 24 f8 eb 3f 09 	movl   $0x93febf8,(%esp)
 8108dd9:	e8 12 d7 5f 00       	call   87064f0 <_ZNKSs5c_strEv>
 8108dde:	c9                   	leave
 8108ddf:	c3                   	ret

```

```c
// CodePage::script @ 0x8108dcc

/* CodePage::script() */

void CodePage::script(void)

{
  std::string::c_str((string *)&gScriptEncoding);
  return;
}

```

---

## script2Database

```asm
// === 08108e08 CodePage::script2Database  [0x08108e08-0x8108e6c] ===
 8108e08:	55                   	push   %ebp
 8108e09:	89 e5                	mov    %esp,%ebp
 8108e0b:	53                   	push   %ebx
 8108e0c:	83 ec 14             	sub    $0x14,%esp
 8108e0f:	c7 44 24 04 f8 eb 3f 	movl   $0x93febf8,0x4(%esp)
 8108e16:	09 
 8108e17:	c7 04 24 fc eb 3f 09 	movl   $0x93febfc,(%esp)
 8108e1e:	e8 5d dc 5f 00       	call   8706a80 <_ZNKSs7compareERKSs>
 8108e23:	85 c0                	test   %eax,%eax
 8108e25:	0f 94 c0             	sete   %al
 8108e28:	84 c0                	test   %al,%al
 8108e2a:	74 07                	je     8108e33 <_ZN8CodePage15script2DatabaseEPcS0_+0x2b>
 8108e2c:	b8 01 00 00 00       	mov    $0x1,%eax
 8108e31:	eb 34                	jmp    8108e67 <_ZN8CodePage15script2DatabaseEPcS0_+0x5f>
 8108e33:	c7 04 24 fc eb 3f 09 	movl   $0x93febfc,(%esp)
 8108e3a:	e8 b1 d6 5f 00       	call   87064f0 <_ZNKSs5c_strEv>
 8108e3f:	89 c3                	mov    %eax,%ebx
 8108e41:	c7 04 24 f8 eb 3f 09 	movl   $0x93febf8,(%esp)
 8108e48:	e8 a3 d6 5f 00       	call   87064f0 <_ZNKSs5c_strEv>
 8108e4d:	8b 55 0c             	mov    0xc(%ebp),%edx
 8108e50:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8108e54:	8b 55 08             	mov    0x8(%ebp),%edx
 8108e57:	89 54 24 08          	mov    %edx,0x8(%esp)
 8108e5b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8108e5f:	89 04 24             	mov    %eax,(%esp)
 8108e62:	e8 94 fd ff ff       	call   8108bfb <_ZN7DNFFLib15CharacSetSwitchEPKcS1_PcS2_>
 8108e67:	83 c4 14             	add    $0x14,%esp
 8108e6a:	5b                   	pop    %ebx
 8108e6b:	5d                   	pop    %ebp
 8108e6c:	c3                   	ret

```

```c
// CodePage::script2Database @ 0x8108e08

/* CodePage::script2Database(char*, char*) */

undefined4 CodePage::script2Database(char *param_1,char *param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar1 = std::string::compare((string *)&gDatabaseEncoding,(string *)&gScriptEncoding);
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    pcVar3 = (char *)std::string::c_str((string *)&gDatabaseEncoding);
    pcVar4 = (char *)std::string::c_str((string *)&gScriptEncoding);
    uVar2 = DNFFLib::CharacSetSwitch(pcVar4,pcVar3,param_1,param_2);
  }
  return uVar2;
}

```

