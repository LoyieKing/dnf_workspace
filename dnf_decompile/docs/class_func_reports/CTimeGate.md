# CTimeGate

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## CTimeGate

```asm
// === 08284512 CTimeGate::CTimeGate  [0x08284512-0x8284535] ===
 8284512:	55                   	push   %ebp
 8284513:	89 e5                	mov    %esp,%ebp
 8284515:	83 ec 18             	sub    $0x18,%esp
 8284518:	8b 45 08             	mov    0x8(%ebp),%eax
 828451b:	89 04 24             	mov    %eax,(%esp)
 828451e:	e8 87 00 00 00       	call   82845aa <_ZN14village_object7IObjectC1Ev>
 8284523:	8b 45 08             	mov    0x8(%ebp),%eax
 8284526:	c7 00 b8 be c0 08    	movl   $0x8c0beb8,(%eax)
 828452c:	8b 45 08             	mov    0x8(%ebp),%eax
 828452f:	c6 40 04 00          	movb   $0x0,0x4(%eax)
 8284533:	c9                   	leave
 8284534:	c3                   	ret
 8284535:	90                   	nop

```

```c
// CTimeGate::CTimeGate @ 0x8284512

/* CTimeGate::CTimeGate() */

void __thiscall CTimeGate::CTimeGate(CTimeGate *this)

{
  village_object::IObject::IObject((IObject *)this);
  *(undefined ***)this = &PTR_include_08c0beb8;
  this[4] = (CTimeGate)0x0;
  return;
}

```

---

## put_object_info

```asm
// === 082844d8 CTimeGate::put_object_info  [0x082844d8-0x8284511] ===
 82844d8:	55                   	push   %ebp
 82844d9:	89 e5                	mov    %esp,%ebp
 82844db:	83 ec 18             	sub    $0x18,%esp
 82844de:	8b 45 0c             	mov    0xc(%ebp),%eax
 82844e1:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 82844e8:	00 
 82844e9:	89 04 24             	mov    %eax,(%esp)
 82844ec:	e8 2f 74 e4 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 82844f1:	8b 45 08             	mov    0x8(%ebp),%eax
 82844f4:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 82844f8:	0f b6 d0             	movzbl %al,%edx
 82844fb:	8b 45 0c             	mov    0xc(%ebp),%eax
 82844fe:	89 54 24 04          	mov    %edx,0x4(%esp)
 8284502:	89 04 24             	mov    %eax,(%esp)
 8284505:	e8 16 74 e4 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 828450a:	b8 01 00 00 00       	mov    $0x1,%eax
 828450f:	c9                   	leave
 8284510:	c3                   	ret
 8284511:	90                   	nop

```

```c
// CTimeGate::put_object_info @ 0x82844d8

/* CTimeGate::put_object_info(PacketGuard&) */

undefined4 __thiscall CTimeGate::put_object_info(CTimeGate *this,PacketGuard *param_1)

{
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,2);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,(uint)(byte)this[4]);
  return 1;
}

```

---

## ~CTimeGate

```asm
// === 08284536 CTimeGate::~CTimeGate  [0x08284536-0x8284543] ===
 8284536:	55                   	push   %ebp
 8284537:	89 e5                	mov    %esp,%ebp
 8284539:	8b 45 08             	mov    0x8(%ebp),%eax
 828453c:	c7 00 b8 be c0 08    	movl   $0x8c0beb8,(%eax)
 8284542:	5d                   	pop    %ebp
 8284543:	c3                   	ret

```

```c
// CTimeGate::~CTimeGate @ 0x8284536

/* CTimeGate::~CTimeGate() */

void __thiscall CTimeGate::~CTimeGate(CTimeGate *this)

{
  *(undefined ***)this = &PTR_include_08c0beb8;
  return;
}

```

