# AradAppSystem

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## AradAppInit

```asm
// === 0817de00 AradAppSystem::AradAppInit  [0x0817de00-0x817de99] ===
 817de00:	55                   	push   %ebp
 817de01:	89 e5                	mov    %esp,%ebp
 817de03:	83 ec 18             	sub    $0x18,%esp
 817de06:	c7 44 24 04 83 8f b8 	movl   $0x8b88f83,0x4(%esp)
 817de0d:	08 
 817de0e:	c7 04 24 60 b4 48 09 	movl   $0x948b460,(%esp)
 817de15:	e8 e6 f4 57 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 817de1a:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 817de21:	e8 2a f9 ef ff       	call   807d750 <time@plt>
 817de26:	89 04 24             	mov    %eax,(%esp)
 817de29:	e8 52 f9 ef ff       	call   807d780 <srand@plt>
 817de2e:	83 7d 08 02          	cmpl   $0x2,0x8(%ebp)
 817de32:	eb 1b                	jmp    817de4f <_ZN13AradAppSystem11AradAppInitEiPPc+0x4f>
 817de34:	c7 44 24 04 9b 8f b8 	movl   $0x8b88f9b,0x4(%esp)
 817de3b:	08 
 817de3c:	c7 04 24 60 b4 48 09 	movl   $0x948b460,(%esp)
 817de43:	e8 b8 f4 57 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 817de48:	b8 00 00 00 00       	mov    $0x0,%eax
 817de4d:	eb 49                	jmp    817de98 <_ZN13AradAppSystem11AradAppInitEiPPc+0x98>
 817de4f:	8b 45 0c             	mov    0xc(%ebp),%eax
 817de52:	83 c0 04             	add    $0x4,%eax
 817de55:	8b 00                	mov    (%eax),%eax
 817de57:	89 04 24             	mov    %eax,(%esp)
 817de5a:	e8 8b 00 00 00       	call   817deea <_ZN13AradAppSystem8open_logEPc>
 817de5f:	83 f0 01             	xor    $0x1,%eax
 817de62:	84 c0                	test   %al,%al
 817de64:	74 07                	je     817de6d <_ZN13AradAppSystem11AradAppInitEiPPc+0x6d>
 817de66:	b8 00 00 00 00       	mov    $0x0,%eax
 817de6b:	eb 2b                	jmp    817de98 <_ZN13AradAppSystem11AradAppInitEiPPc+0x98>
 817de6d:	e8 62 bc 33 00       	call   84b9ad4 <_ZN10HistoryLog4InitEv>
 817de72:	83 f0 01             	xor    $0x1,%eax
 817de75:	84 c0                	test   %al,%al
 817de77:	74 07                	je     817de80 <_ZN13AradAppSystem11AradAppInitEiPPc+0x80>
 817de79:	b8 00 00 00 00       	mov    $0x0,%eax
 817de7e:	eb 18                	jmp    817de98 <_ZN13AradAppSystem11AradAppInitEiPPc+0x98>
 817de80:	e8 15 00 00 00       	call   817de9a <_ZN13AradAppSystem11script_loadEv>
 817de85:	83 f0 01             	xor    $0x1,%eax
 817de88:	84 c0                	test   %al,%al
 817de8a:	74 07                	je     817de93 <_ZN13AradAppSystem11AradAppInitEiPPc+0x93>
 817de8c:	b8 00 00 00 00       	mov    $0x0,%eax
 817de91:	eb 05                	jmp    817de98 <_ZN13AradAppSystem11AradAppInitEiPPc+0x98>
 817de93:	b8 01 00 00 00       	mov    $0x1,%eax
 817de98:	c9                   	leave
 817de99:	c3                   	ret

```

```c
// AradAppSystem::AradAppInit @ 0x817de00

/* AradAppSystem::AradAppInit(int, char**) */

undefined4 AradAppSystem::AradAppInit(int param_1,char **param_2)

{
  char cVar1;
  uint __seed;
  undefined4 uVar2;
  
  std::operator<<((ostream *)&std::cerr,"[!] Server Starting...\n");
  __seed = time((time_t *)0x0);
  srand(__seed);
  cVar1 = open_log(param_2[1]);
  if (cVar1 == '\x01') {
    cVar1 = HistoryLog::Init();
    if (cVar1 == '\x01') {
      cVar1 = script_load();
      if (cVar1 == '\x01') {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## open_log

```asm
// === 0817deea AradAppSystem::open_log  [0x0817deea-0x817df8f] ===
 817deea:	55                   	push   %ebp
 817deeb:	89 e5                	mov    %esp,%ebp
 817deed:	57                   	push   %edi
 817deee:	53                   	push   %ebx
 817deef:	81 ec e0 00 00 00    	sub    $0xe0,%esp
 817def5:	e8 87 e2 f4 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 817defa:	8b 55 08             	mov    0x8(%ebp),%edx
 817defd:	89 54 24 04          	mov    %edx,0x4(%esp)
 817df01:	89 04 24             	mov    %eax,(%esp)
 817df04:	e8 ed 00 00 00       	call   817dff6 <_ZN12CEnvironment13set_file_nameEPKc>
 817df09:	8d 9d 30 ff ff ff    	lea    -0xd0(%ebp),%ebx
 817df0f:	b8 00 00 00 00       	mov    $0x0,%eax
 817df14:	ba 32 00 00 00       	mov    $0x32,%edx
 817df19:	89 df                	mov    %ebx,%edi
 817df1b:	89 d1                	mov    %edx,%ecx
 817df1d:	f3 ab                	rep stos %eax,%es:(%edi)
 817df1f:	e8 5d e2 f4 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 817df24:	89 04 24             	mov    %eax,(%esp)
 817df27:	e8 6e c4 f5 ff       	call   80da39a <_ZN12CEnvironment13get_file_nameEv>
 817df2c:	89 44 24 08          	mov    %eax,0x8(%esp)
 817df30:	c7 44 24 04 eb 8f b8 	movl   $0x8b88feb,0x4(%esp)
 817df37:	08 
 817df38:	8d 85 30 ff ff ff    	lea    -0xd0(%ebp),%eax
 817df3e:	89 04 24             	mov    %eax,(%esp)
 817df41:	e8 fa 04 f0 ff       	call   807e440 <sprintf@plt>
 817df46:	e8 a1 00 00 00       	call   817dfec <_ZN4CLog8instanceEv>
 817df4b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 817df52:	00 
 817df53:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 817df5a:	00 
 817df5b:	8d 95 30 ff ff ff    	lea    -0xd0(%ebp),%edx
 817df61:	89 54 24 04          	mov    %edx,0x4(%esp)
 817df65:	89 04 24             	mov    %eax,(%esp)
 817df68:	e8 1f 09 3d 00       	call   854e88c <_ZN4CLog8initiateEPcS0_i>
 817df6d:	c7 44 24 04 f5 8f b8 	movl   $0x8b88ff5,0x4(%esp)
 817df74:	08 
 817df75:	c7 04 24 60 b4 48 09 	movl   $0x948b460,(%esp)
 817df7c:	e8 7f f3 57 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 817df81:	b8 01 00 00 00       	mov    $0x1,%eax
 817df86:	81 c4 e0 00 00 00    	add    $0xe0,%esp
 817df8c:	5b                   	pop    %ebx
 817df8d:	5f                   	pop    %edi
 817df8e:	5d                   	pop    %ebp
 817df8f:	c3                   	ret

```

```c
// AradAppSystem::open_log @ 0x817deea

/* AradAppSystem::open_log(char*) */

undefined4 AradAppSystem::open_log(char *param_1)

{
  CEnvironment *pCVar1;
  undefined4 uVar2;
  CLog *this;
  int iVar3;
  char *pcVar4;
  byte bVar5;
  char local_d4 [200];
  
  bVar5 = 0;
  pCVar1 = (CEnvironment *)G_CEnvironment();
  CEnvironment::set_file_name(pCVar1,param_1);
  pcVar4 = local_d4;
  for (iVar3 = 0x32; iVar3 != 0; iVar3 = iVar3 + -1) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4 = pcVar4 + ((uint)bVar5 * -2 + 1) * 4;
  }
  pCVar1 = (CEnvironment *)G_CEnvironment();
  uVar2 = CEnvironment::get_file_name(pCVar1);
  sprintf(local_d4,"./log/%s/",uVar2);
  this = (CLog *)CLog::instance();
  CLog::initiate(this,local_d4,(char *)0x0,0);
  std::operator<<((ostream *)&std::cerr,"[!] Log file init Sucess!!\n");
  return 1;
}

```

---

## script_load

```asm
// === 0817de9a AradAppSystem::script_load  [0x0817de9a-0x817dee9] ===
 817de9a:	55                   	push   %ebp
 817de9b:	89 e5                	mov    %esp,%ebp
 817de9d:	83 ec 18             	sub    $0x18,%esp
 817dea0:	c7 44 24 04 b2 8f b8 	movl   $0x8b88fb2,0x4(%esp)
 817dea7:	08 
 817dea8:	c7 04 24 60 b4 48 09 	movl   $0x948b460,(%esp)
 817deaf:	e8 4c f4 57 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 817deb4:	e8 e2 e2 f4 ff       	call   80cc19b <_Z14G_CDataManagerv>
 817deb9:	89 04 24             	mov    %eax,(%esp)
 817debc:	e8 71 a4 1d 00       	call   8358332 <_ZN12CDataManager4initEv>
 817dec1:	83 f0 01             	xor    $0x1,%eax
 817dec4:	84 c0                	test   %al,%al
 817dec6:	74 07                	je     817decf <_ZN13AradAppSystem11script_loadEv+0x35>
 817dec8:	b8 00 00 00 00       	mov    $0x0,%eax
 817decd:	eb 19                	jmp    817dee8 <_ZN13AradAppSystem11script_loadEv+0x4e>
 817decf:	c7 44 24 04 cc 8f b8 	movl   $0x8b88fcc,0x4(%esp)
 817ded6:	08 
 817ded7:	c7 04 24 60 b4 48 09 	movl   $0x948b460,(%esp)
 817dede:	e8 1d f4 57 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 817dee3:	b8 01 00 00 00       	mov    $0x1,%eax
 817dee8:	c9                   	leave
 817dee9:	c3                   	ret

```

```c
// AradAppSystem::script_load @ 0x817de9a

/* AradAppSystem::script_load() */

bool AradAppSystem::script_load(void)

{
  char cVar1;
  CDataManager *this;
  
  std::operator<<((ostream *)&std::cerr,"[!] script loading...\n");
  this = (CDataManager *)G_CDataManager();
  cVar1 = CDataManager::init(this);
  if (cVar1 == '\x01') {
    std::operator<<((ostream *)&std::cerr,"[!] script loading Complete!!\n");
  }
  return cVar1 == '\x01';
}

```

