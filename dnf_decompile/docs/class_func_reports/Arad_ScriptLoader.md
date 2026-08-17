# Arad_ScriptLoader

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## open

```asm
// === 081a1eec Arad_ScriptLoader::open  [0x081a1eec-0x81a1fcd] ===
 81a1eec:	55                   	push   %ebp
 81a1eed:	89 e5                	mov    %esp,%ebp
 81a1eef:	83 ec 28             	sub    $0x28,%esp
 81a1ef2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81a1ef5:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a1ef9:	c7 04 24 60 c6 ba 08 	movl   $0x8bac660,(%esp)
 81a1f00:	e8 24 9e 71 00       	call   88bbd29 <_Z18loadRDARScriptFilePKcS0_>
 81a1f05:	83 f0 01             	xor    $0x1,%eax
 81a1f08:	84 c0                	test   %al,%al
 81a1f0a:	74 0a                	je     81a1f16 <_ZN17Arad_ScriptLoader4openEPKc+0x2a>
 81a1f0c:	b8 10 00 00 00       	mov    $0x10,%eax
 81a1f11:	e9 b6 00 00 00       	jmp    81a1fcc <_ZN17Arad_ScriptLoader4openEPKc+0xe0>
 81a1f16:	c7 04 24 20 50 49 09 	movl   $0x9495020,(%esp)
 81a1f1d:	e8 0e ca 92 00       	call   8ace930 <_ZN13DNFLexWrapper18getInputStreamSizeEv>
 81a1f22:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81a1f25:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81a1f28:	83 c0 01             	add    $0x1,%eax
 81a1f2b:	89 04 24             	mov    %eax,(%esp)
 81a1f2e:	e8 8d 0e 58 00       	call   8722dc0 <_Znaj>
 81a1f33:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81a1f36:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81a1f39:	83 c0 01             	add    $0x1,%eax
 81a1f3c:	89 44 24 08          	mov    %eax,0x8(%esp)
 81a1f40:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81a1f47:	00 
 81a1f48:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81a1f4b:	89 04 24             	mov    %eax,(%esp)
 81a1f4e:	e8 6d bd ed ff       	call   807dcc0 <memset@plt>
 81a1f53:	c7 04 24 20 50 49 09 	movl   $0x9495020,(%esp)
 81a1f5a:	e8 a1 c9 92 00       	call   8ace900 <_ZN13DNFLexWrapper14getInputStreamEv>
 81a1f5f:	8b 55 ec             	mov    -0x14(%ebp),%edx
 81a1f62:	89 54 24 08          	mov    %edx,0x8(%esp)
 81a1f66:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81a1f69:	89 54 24 04          	mov    %edx,0x4(%esp)
 81a1f6d:	89 04 24             	mov    %eax,(%esp)
 81a1f70:	e8 7b 3c 54 00       	call   86e5bf0 <_ZNSi4readEPci>
 81a1f75:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81a1f78:	03 45 f0             	add    -0x10(%ebp),%eax
 81a1f7b:	c6 00 ff             	movb   $0xff,(%eax)
 81a1f7e:	8b 45 08             	mov    0x8(%ebp),%eax
 81a1f81:	8b 00                	mov    (%eax),%eax
 81a1f83:	83 c0 04             	add    $0x4,%eax
 81a1f86:	8b 10                	mov    (%eax),%edx
 81a1f88:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81a1f8b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a1f8f:	8b 45 08             	mov    0x8(%ebp),%eax
 81a1f92:	89 04 24             	mov    %eax,(%esp)
 81a1f95:	ff d2                	call   *%edx
 81a1f97:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81a1f9a:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81a1f9e:	74 16                	je     81a1fb6 <_ZN17Arad_ScriptLoader4openEPKc+0xca>
 81a1fa0:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 81a1fa4:	74 0b                	je     81a1fb1 <_ZN17Arad_ScriptLoader4openEPKc+0xc5>
 81a1fa6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81a1fa9:	89 04 24             	mov    %eax,(%esp)
 81a1fac:	e8 ff 2b 58 00       	call   8724bb0 <_ZdaPv>
 81a1fb1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81a1fb4:	eb 16                	jmp    81a1fcc <_ZN17Arad_ScriptLoader4openEPKc+0xe0>
 81a1fb6:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 81a1fba:	74 0b                	je     81a1fc7 <_ZN17Arad_ScriptLoader4openEPKc+0xdb>
 81a1fbc:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81a1fbf:	89 04 24             	mov    %eax,(%esp)
 81a1fc2:	e8 e9 2b 58 00       	call   8724bb0 <_ZdaPv>
 81a1fc7:	b8 00 00 00 00       	mov    $0x0,%eax
 81a1fcc:	c9                   	leave
 81a1fcd:	c3                   	ret

```

```c
// Arad_ScriptLoader::open @ 0x81a1eec

/* Arad_ScriptLoader::open(char const*) */

int __thiscall Arad_ScriptLoader::open(Arad_ScriptLoader *this,char *param_1)

{
  char cVar1;
  int iVar2;
  char *__s;
  istream *this_00;
  
  cVar1 = loadRDARScriptFile("",param_1);
  if (cVar1 == '\x01') {
    iVar2 = DNFLexWrapper::getInputStreamSize((DNFLexWrapper *)g_dnfLex);
    __s = operator_new__(iVar2 + 1);
    memset(__s,0,iVar2 + 1);
    this_00 = DNFLexWrapper::getInputStream((DNFLexWrapper *)g_dnfLex);
    std::istream::read((istream *)this_00,__s,iVar2);
    __s[iVar2] = -1;
    iVar2 = (**(code **)(*(int *)this + 4))(this,__s);
    if (iVar2 == 0) {
      if (__s != (char *)0x0) {
        operator_delete__(__s);
      }
      iVar2 = 0;
    }
    else if (__s != (char *)0x0) {
      operator_delete__(__s);
    }
  }
  else {
    iVar2 = 0x10;
  }
  return iVar2;
}

```

