# LwConsole

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## LwConsole

```asm
// === 08ad39e2 LwConsole::LwConsole  [0x08ad39e2-0x8ad3a05] ===
 8ad39e2:	55                   	push   %ebp
 8ad39e3:	89 e5                	mov    %esp,%ebp
 8ad39e5:	83 ec 04             	sub    $0x4,%esp
 8ad39e8:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad39eb:	89 04 24             	mov    %eax,(%esp)
 8ad39ee:	e8 9d ff ff ff       	call   8ad3990 <_ZN9LogWriterC1Ev>
 8ad39f3:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad39f6:	c7 00 50 2b e3 08    	movl   $0x8e32b50,(%eax)
 8ad39fc:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad39ff:	c6 40 04 00          	movb   $0x0,0x4(%eax)
 8ad3a03:	c9                   	leave
 8ad3a04:	c3                   	ret
 8ad3a05:	90                   	nop

```

```c
// LwConsole::LwConsole @ 0x8ad39e2

/* LwConsole::LwConsole() */

void __thiscall LwConsole::LwConsole(LwConsole *this)

{
  LogWriter::LogWriter((LogWriter *)this);
  *(undefined ***)this = &PTR__LwConsole_08e32b50;
  this[4] = (LwConsole)0x0;
  return;
}

```

---

## isSourcePositionVisible

```asm
// === 08ad3a06 LwConsole::isSourcePositionVisible  [0x08ad3a06-0x8ad3a11] ===
 8ad3a06:	55                   	push   %ebp
 8ad3a07:	89 e5                	mov    %esp,%ebp
 8ad3a09:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad3a0c:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 8ad3a10:	5d                   	pop    %ebp
 8ad3a11:	c3                   	ret

```

```c
// LwConsole::isSourcePositionVisible @ 0x8ad3a06

/* LwConsole::isSourcePositionVisible() const */

LwConsole __thiscall LwConsole::isSourcePositionVisible(LwConsole *this)

{
  return this[4];
}

```

---

## log

```asm
// === 08ad3a2a LwConsole::log  [0x08ad3a2a-0x8ad3a69] ===
 8ad3a2a:	55                   	push   %ebp
 8ad3a2b:	89 e5                	mov    %esp,%ebp
 8ad3a2d:	83 ec 18             	sub    $0x18,%esp
 8ad3a30:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad3a33:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 8ad3a37:	84 c0                	test   %al,%al
 8ad3a39:	74 21                	je     8ad3a5c <_ZN9LwConsole3logEPKcS1_iS1_+0x32>
 8ad3a3b:	8b 45 10             	mov    0x10(%ebp),%eax
 8ad3a3e:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8ad3a42:	8b 45 14             	mov    0x14(%ebp),%eax
 8ad3a45:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ad3a49:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad3a4c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad3a50:	c7 04 24 14 2b e3 08 	movl   $0x8e32b14,(%esp)
 8ad3a57:	e8 04 a1 5a ff       	call   807db60 <printf@plt>
 8ad3a5c:	8b 45 18             	mov    0x18(%ebp),%eax
 8ad3a5f:	89 04 24             	mov    %eax,(%esp)
 8ad3a62:	e8 09 ab 5a ff       	call   807e570 <puts@plt>
 8ad3a67:	c9                   	leave
 8ad3a68:	c3                   	ret
 8ad3a69:	90                   	nop

```

```c
// LwConsole::log @ 0x8ad3a2a

/* LwConsole::log(char const*, char const*, int, char const*) */

void __thiscall
LwConsole::log(LwConsole *this,char *param_1,char *param_2,int param_3,char *param_4)

{
  if (this[4] != (LwConsole)0x0) {
    printf("%s(%d) %s: ",param_1,param_3,param_2);
  }
  puts(param_4);
  return;
}

```

---

## setSourcePositionVisible

```asm
// === 08ad3a12 LwConsole::setSourcePositionVisible  [0x08ad3a12-0x8ad3a29] ===
 8ad3a12:	55                   	push   %ebp
 8ad3a13:	89 e5                	mov    %esp,%ebp
 8ad3a15:	83 ec 04             	sub    $0x4,%esp
 8ad3a18:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad3a1b:	88 45 fc             	mov    %al,-0x4(%ebp)
 8ad3a1e:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad3a21:	0f b6 55 fc          	movzbl -0x4(%ebp),%edx
 8ad3a25:	88 50 04             	mov    %dl,0x4(%eax)
 8ad3a28:	c9                   	leave
 8ad3a29:	c3                   	ret

```

```c
// LwConsole::setSourcePositionVisible @ 0x8ad3a12

/* LwConsole::setSourcePositionVisible(bool) */

void __thiscall LwConsole::setSourcePositionVisible(LwConsole *this,bool param_1)

{
  this[4] = (LwConsole)param_1;
  return;
}

```

