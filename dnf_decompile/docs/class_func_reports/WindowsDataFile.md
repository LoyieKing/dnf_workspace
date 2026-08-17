# WindowsDataFile

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## GenerateChecksum

```asm
// === 08574eba WindowsDataFile::GenerateChecksum  [0x08574eba-0x8574f15] ===
 8574eba:	55                   	push   %ebp
 8574ebb:	89 e5                	mov    %esp,%ebp
 8574ebd:	83 ec 18             	sub    $0x18,%esp
 8574ec0:	8b 45 08             	mov    0x8(%ebp),%eax
 8574ec3:	8b 00                	mov    (%eax),%eax
 8574ec5:	3b 45 10             	cmp    0x10(%ebp),%eax
 8574ec8:	77 0d                	ja     8574ed7 <_ZN15WindowsDataFile16GenerateChecksumEP16CodeHackChecksummm+0x1d>
 8574eca:	8b 45 0c             	mov    0xc(%ebp),%eax
 8574ecd:	89 04 24             	mov    %eax,(%esp)
 8574ed0:	e8 c7 55 b1 ff       	call   808a49c <_Z18ZeroMemoryChecksumP16CodeHackChecksum>
 8574ed5:	eb 3c                	jmp    8574f13 <_ZN15WindowsDataFile16GenerateChecksumEP16CodeHackChecksummm+0x59>
 8574ed7:	8b 45 08             	mov    0x8(%ebp),%eax
 8574eda:	8b 00                	mov    (%eax),%eax
 8574edc:	8b 55 14             	mov    0x14(%ebp),%edx
 8574edf:	8b 4d 10             	mov    0x10(%ebp),%ecx
 8574ee2:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 8574ee5:	39 d0                	cmp    %edx,%eax
 8574ee7:	73 0b                	jae    8574ef4 <_ZN15WindowsDataFile16GenerateChecksumEP16CodeHackChecksummm+0x3a>
 8574ee9:	8b 45 08             	mov    0x8(%ebp),%eax
 8574eec:	8b 00                	mov    (%eax),%eax
 8574eee:	2b 45 10             	sub    0x10(%ebp),%eax
 8574ef1:	89 45 14             	mov    %eax,0x14(%ebp)
 8574ef4:	8b 45 08             	mov    0x8(%ebp),%eax
 8574ef7:	8b 40 04             	mov    0x4(%eax),%eax
 8574efa:	03 45 10             	add    0x10(%ebp),%eax
 8574efd:	89 44 24 08          	mov    %eax,0x8(%esp)
 8574f01:	8b 45 14             	mov    0x14(%ebp),%eax
 8574f04:	89 44 24 04          	mov    %eax,0x4(%esp)
 8574f08:	8b 45 0c             	mov    0xc(%ebp),%eax
 8574f0b:	89 04 24             	mov    %eax,(%esp)
 8574f0e:	e8 b1 55 b1 ff       	call   808a4c4 <_Z23CalculateMemoryChecksumP16CodeHackChecksummPv>
 8574f13:	c9                   	leave
 8574f14:	c3                   	ret
 8574f15:	90                   	nop

```

```c
// WindowsDataFile::GenerateChecksum @ 0x8574eba

/* WindowsDataFile::GenerateChecksum(CodeHackChecksum*, unsigned long, unsigned long) */

void __thiscall
WindowsDataFile::GenerateChecksum
          (WindowsDataFile *this,CodeHackChecksum *param_1,ulong param_2,ulong param_3)

{
  if (param_2 < *(uint *)this) {
    if (*(uint *)this < param_2 + param_3) {
      param_3 = *(int *)this - param_2;
    }
    CalculateMemoryChecksum(param_1,param_3,(void *)(*(int *)(this + 4) + param_2));
  }
  else {
    ZeroMemoryChecksum(param_1);
  }
  return;
}

```

---

## LoadWindowsDataFile

```asm
// === 08574e80 WindowsDataFile::LoadWindowsDataFile  [0x08574e80-0x8574eb9] ===
 8574e80:	55                   	push   %ebp
 8574e81:	89 e5                	mov    %esp,%ebp
 8574e83:	83 ec 18             	sub    $0x18,%esp
 8574e86:	8b 45 08             	mov    0x8(%ebp),%eax
 8574e89:	83 c0 04             	add    $0x4,%eax
 8574e8c:	89 c2                	mov    %eax,%edx
 8574e8e:	8b 45 08             	mov    0x8(%ebp),%eax
 8574e91:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8574e94:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8574e98:	89 54 24 04          	mov    %edx,0x4(%esp)
 8574e9c:	89 04 24             	mov    %eax,(%esp)
 8574e9f:	e8 96 e0 ff ff       	call   8572f3a <_Z14LoadClientFilePmPPvPKc>
 8574ea4:	83 f0 01             	xor    $0x1,%eax
 8574ea7:	84 c0                	test   %al,%al
 8574ea9:	74 07                	je     8574eb2 <_ZN15WindowsDataFile19LoadWindowsDataFileEPKc+0x32>
 8574eab:	b8 00 00 00 00       	mov    $0x0,%eax
 8574eb0:	eb 05                	jmp    8574eb7 <_ZN15WindowsDataFile19LoadWindowsDataFileEPKc+0x37>
 8574eb2:	b8 01 00 00 00       	mov    $0x1,%eax
 8574eb7:	c9                   	leave
 8574eb8:	c3                   	ret
 8574eb9:	90                   	nop

```

```c
// WindowsDataFile::LoadWindowsDataFile @ 0x8574e80

/* WindowsDataFile::LoadWindowsDataFile(char const*) */

bool __thiscall WindowsDataFile::LoadWindowsDataFile(WindowsDataFile *this,char *param_1)

{
  char cVar1;
  
  cVar1 = LoadClientFile((ulong *)this,(void **)(this + 4),param_1);
  return cVar1 == '\x01';
}

```

---

## WindowsDataFile

```asm
// === 08574e3e WindowsDataFile::WindowsDataFile  [0x08574e3e-0x8574e55] ===
 8574e3e:	55                   	push   %ebp
 8574e3f:	89 e5                	mov    %esp,%ebp
 8574e41:	8b 45 08             	mov    0x8(%ebp),%eax
 8574e44:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8574e4a:	8b 45 08             	mov    0x8(%ebp),%eax
 8574e4d:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 8574e54:	5d                   	pop    %ebp
 8574e55:	c3                   	ret

```

```c
// WindowsDataFile::WindowsDataFile @ 0x8574e3e

/* WindowsDataFile::WindowsDataFile() */

void __thiscall WindowsDataFile::WindowsDataFile(WindowsDataFile *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  return;
}

```

---

## ~WindowsDataFile

```asm
// === 08574e56 WindowsDataFile::~WindowsDataFile  [0x08574e56-0x8574e7f] ===
 8574e56:	55                   	push   %ebp
 8574e57:	89 e5                	mov    %esp,%ebp
 8574e59:	83 ec 18             	sub    $0x18,%esp
 8574e5c:	8b 45 08             	mov    0x8(%ebp),%eax
 8574e5f:	8b 40 04             	mov    0x4(%eax),%eax
 8574e62:	85 c0                	test   %eax,%eax
 8574e64:	74 18                	je     8574e7e <_ZN15WindowsDataFileD1Ev+0x28>
 8574e66:	8b 45 08             	mov    0x8(%ebp),%eax
 8574e69:	8b 40 04             	mov    0x4(%eax),%eax
 8574e6c:	89 04 24             	mov    %eax,(%esp)
 8574e6f:	e8 7c f6 1a 00       	call   87244f0 <_ZdlPv>
 8574e74:	8b 45 08             	mov    0x8(%ebp),%eax
 8574e77:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 8574e7e:	c9                   	leave
 8574e7f:	c3                   	ret

```

```c
// WindowsDataFile::~WindowsDataFile @ 0x8574e56

/* WindowsDataFile::~WindowsDataFile() */

void __thiscall WindowsDataFile::~WindowsDataFile(WindowsDataFile *this)

{
  if (*(int *)(this + 4) != 0) {
    operator_delete(*(void **)(this + 4));
    *(undefined4 *)(this + 4) = 0;
  }
  return;
}

```

