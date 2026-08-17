# PacketPool

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## Acquire

```asm
// === 0828fdba PacketPool::Acquire  [0x0828fdba-0x828fe61] ===
 828fdba:	55                   	push   %ebp
 828fdbb:	89 e5                	mov    %esp,%ebp
 828fdbd:	57                   	push   %edi
 828fdbe:	56                   	push   %esi
 828fdbf:	53                   	push   %ebx
 828fdc0:	83 ec 4c             	sub    $0x4c,%esp
 828fdc3:	8b 45 08             	mov    0x8(%ebp),%eax
 828fdc6:	8b 00                	mov    (%eax),%eax
 828fdc8:	89 04 24             	mov    %eax,(%esp)
 828fdcb:	e8 8a d0 01 00       	call   82ace5a <_ZN11DynamicPoolI9PacketBufE7AcquireEv>
 828fdd0:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 828fdd3:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 828fdd7:	75 73                	jne    828fe4c <_ZN10PacketPool7AcquireEv+0x92>
 828fdd9:	8b 45 08             	mov    0x8(%ebp),%eax
 828fddc:	8b 00                	mov    (%eax),%eax
 828fdde:	89 04 24             	mov    %eax,(%esp)
 828fde1:	e8 e0 d2 01 00       	call   82ad0c6 <_ZN11DynamicPoolI9PacketBufE4SizeEv>
 828fde6:	89 c7                	mov    %eax,%edi
 828fde8:	8b 45 08             	mov    0x8(%ebp),%eax
 828fdeb:	8b 00                	mov    (%eax),%eax
 828fded:	89 04 24             	mov    %eax,(%esp)
 828fdf0:	e8 bb d2 01 00       	call   82ad0b0 <_ZN11DynamicPoolI9PacketBufE6RemainEv>
 828fdf5:	89 c6                	mov    %eax,%esi
 828fdf7:	8b 45 08             	mov    0x8(%ebp),%eax
 828fdfa:	89 04 24             	mov    %eax,(%esp)
 828fdfd:	e8 fe 70 01 00       	call   82a6f00 <_ZN10PacketPool11getThreadIDEv>
 828fe02:	89 c3                	mov    %eax,%ebx
 828fe04:	e8 37 e9 de ff       	call   807e740 <pthread_self@plt>
 828fe09:	89 7c 24 20          	mov    %edi,0x20(%esp)
 828fe0d:	89 74 24 1c          	mov    %esi,0x1c(%esp)
 828fe11:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 828fe15:	89 44 24 14          	mov    %eax,0x14(%esp)
 828fe19:	c7 44 24 10 90 62 c1 	movl   $0x8c16290,0x10(%esp)
 828fe20:	08 
 828fe21:	c7 44 24 0c 75 02 00 	movl   $0x275,0xc(%esp)
 828fe28:	00 
 828fe29:	c7 44 24 08 40 b9 c1 	movl   $0x8c1b940,0x8(%esp)
 828fe30:	08 
 828fe31:	c7 44 24 04 88 62 c1 	movl   $0x8c16288,0x4(%esp)
 828fe38:	08 
 828fe39:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 828fe40:	e8 c5 3d 84 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 828fe45:	b8 00 00 00 00       	mov    $0x0,%eax
 828fe4a:	eb 0e                	jmp    828fe5a <_ZN10PacketPool7AcquireEv+0xa0>
 828fe4c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 828fe4f:	89 04 24             	mov    %eax,(%esp)
 828fe52:	e8 8b ca 2f 00       	call   858c8e2 <_ZN9PacketBuf5clearEv>
 828fe57:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 828fe5a:	83 c4 4c             	add    $0x4c,%esp
 828fe5d:	5b                   	pop    %ebx
 828fe5e:	5e                   	pop    %esi
 828fe5f:	5f                   	pop    %edi
 828fe60:	5d                   	pop    %ebp
 828fe61:	c3                   	ret

```

```c
// PacketPool::Acquire @ 0x828fdba

/* PacketPool::Acquire() */

PacketBuf * __thiscall PacketPool::Acquire(PacketPool *this)

{
  PacketBuf *this_00;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  pthread_t pVar4;
  
  this_00 = (PacketBuf *)DynamicPool<PacketBuf>::Acquire(*(DynamicPool<PacketBuf> **)this);
  if (this_00 == (PacketBuf *)0x0) {
    uVar1 = DynamicPool<PacketBuf>::Size(*(DynamicPool<PacketBuf> **)this);
    uVar2 = DynamicPool<PacketBuf>::Remain(*(DynamicPool<PacketBuf> **)this);
    uVar3 = getThreadID(this);
    pVar4 = pthread_self();
    LogManager::logFormat
              (1,"App.cpp","PacketBuf* PacketPool::Acquire()",0x275,
               "[PacketPool alloc fail] curthreadid(%08x), poolthreadid(%08x), alloc_cnt(%d), size(%d)"
               ,pVar4,uVar3,uVar2,uVar1);
    this_00 = (PacketBuf *)0x0;
  }
  else {
    PacketBuf::clear(this_00);
  }
  return this_00;
}

```

---

## PacketPool

```asm
// === 0828fc76 PacketPool::PacketPool  [0x0828fc76-0x828fcf9] ===
 828fc76:	55                   	push   %ebp
 828fc77:	89 e5                	mov    %esp,%ebp
 828fc79:	57                   	push   %edi
 828fc7a:	56                   	push   %esi
 828fc7b:	53                   	push   %ebx
 828fc7c:	83 ec 1c             	sub    $0x1c,%esp
 828fc7f:	8b 45 08             	mov    0x8(%ebp),%eax
 828fc82:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 828fc89:	c7 04 24 5c 00 00 00 	movl   $0x5c,(%esp)
 828fc90:	e8 bb 47 49 00       	call   8724450 <_Znwj>
 828fc95:	89 c3                	mov    %eax,%ebx
 828fc97:	89 d8                	mov    %ebx,%eax
 828fc99:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 828fca0:	00 
 828fca1:	89 04 24             	mov    %eax,(%esp)
 828fca4:	e8 0b cf 01 00       	call   82acbb4 <_ZN11DynamicPoolI9PacketBufEC1Ei>
 828fca9:	eb 18                	jmp    828fcc3 <_ZN10PacketPoolC1Ev+0x4d>
 828fcab:	89 d6                	mov    %edx,%esi
 828fcad:	89 c7                	mov    %eax,%edi
 828fcaf:	89 1c 24             	mov    %ebx,(%esp)
 828fcb2:	e8 39 48 49 00       	call   87244f0 <_ZdlPv>
 828fcb7:	89 f8                	mov    %edi,%eax
 828fcb9:	89 f2                	mov    %esi,%edx
 828fcbb:	89 04 24             	mov    %eax,(%esp)
 828fcbe:	e8 8d 3a 85 00       	call   8ae3750 <_Unwind_Resume>
 828fcc3:	89 da                	mov    %ebx,%edx
 828fcc5:	8b 45 08             	mov    0x8(%ebp),%eax
 828fcc8:	89 10                	mov    %edx,(%eax)
 828fcca:	8b 45 08             	mov    0x8(%ebp),%eax
 828fccd:	8b 00                	mov    (%eax),%eax
 828fccf:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
 828fcd6:	00 
 828fcd7:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 828fcde:	00 
 828fcdf:	89 04 24             	mov    %eax,(%esp)
 828fce2:	e8 ef cf 01 00       	call   82accd6 <_ZN11DynamicPoolI9PacketBufE11SetPoolSizeEtt>
 828fce7:	8b 45 08             	mov    0x8(%ebp),%eax
 828fcea:	8b 00                	mov    (%eax),%eax
 828fcec:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 828fcf2:	83 c4 1c             	add    $0x1c,%esp
 828fcf5:	5b                   	pop    %ebx
 828fcf6:	5e                   	pop    %esi
 828fcf7:	5f                   	pop    %edi
 828fcf8:	5d                   	pop    %ebp
 828fcf9:	c3                   	ret

```

```c
// PacketPool::PacketPool @ 0x828fc76

/* PacketPool::PacketPool() */

void __thiscall PacketPool::PacketPool(PacketPool *this)

{
  DynamicPool<PacketBuf> *this_00;
  
  *(undefined4 *)(this + 4) = 0;
  this_00 = operator_new(0x5c);
                    /* try { // try from 0828fca4 to 0828fca8 has its CatchHandler @ 0828fcab */
  DynamicPool<PacketBuf>::DynamicPool(this_00,10);
  *(DynamicPool<PacketBuf> **)this = this_00;
  DynamicPool<PacketBuf>::SetPoolSize(*(DynamicPool<PacketBuf> **)this,10,10);
  **(undefined4 **)this = 0;
  return;
}

```

---

## PacketPool_0828fcfa

```asm
// === 0828fcfa PacketPool::PacketPool  [0x0828fcfa-0x828fd81] ===
 828fcfa:	55                   	push   %ebp
 828fcfb:	89 e5                	mov    %esp,%ebp
 828fcfd:	57                   	push   %edi
 828fcfe:	56                   	push   %esi
 828fcff:	53                   	push   %ebx
 828fd00:	83 ec 1c             	sub    $0x1c,%esp
 828fd03:	8b 45 08             	mov    0x8(%ebp),%eax
 828fd06:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 828fd0d:	c7 04 24 5c 00 00 00 	movl   $0x5c,(%esp)
 828fd14:	e8 37 47 49 00       	call   8724450 <_Znwj>
 828fd19:	89 c3                	mov    %eax,%ebx
 828fd1b:	89 d8                	mov    %ebx,%eax
 828fd1d:	8b 55 0c             	mov    0xc(%ebp),%edx
 828fd20:	89 54 24 04          	mov    %edx,0x4(%esp)
 828fd24:	89 04 24             	mov    %eax,(%esp)
 828fd27:	e8 88 ce 01 00       	call   82acbb4 <_ZN11DynamicPoolI9PacketBufEC1Ei>
 828fd2c:	eb 18                	jmp    828fd46 <_ZN10PacketPoolC1Eii+0x4c>
 828fd2e:	89 d6                	mov    %edx,%esi
 828fd30:	89 c7                	mov    %eax,%edi
 828fd32:	89 1c 24             	mov    %ebx,(%esp)
 828fd35:	e8 b6 47 49 00       	call   87244f0 <_ZdlPv>
 828fd3a:	89 f8                	mov    %edi,%eax
 828fd3c:	89 f2                	mov    %esi,%edx
 828fd3e:	89 04 24             	mov    %eax,(%esp)
 828fd41:	e8 0a 3a 85 00       	call   8ae3750 <_Unwind_Resume>
 828fd46:	89 da                	mov    %ebx,%edx
 828fd48:	8b 45 08             	mov    0x8(%ebp),%eax
 828fd4b:	89 10                	mov    %edx,(%eax)
 828fd4d:	8b 45 10             	mov    0x10(%ebp),%eax
 828fd50:	0f b7 c8             	movzwl %ax,%ecx
 828fd53:	8b 45 0c             	mov    0xc(%ebp),%eax
 828fd56:	0f b7 d0             	movzwl %ax,%edx
 828fd59:	8b 45 08             	mov    0x8(%ebp),%eax
 828fd5c:	8b 00                	mov    (%eax),%eax
 828fd5e:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 828fd62:	89 54 24 04          	mov    %edx,0x4(%esp)
 828fd66:	89 04 24             	mov    %eax,(%esp)
 828fd69:	e8 68 cf 01 00       	call   82accd6 <_ZN11DynamicPoolI9PacketBufE11SetPoolSizeEtt>
 828fd6e:	8b 45 08             	mov    0x8(%ebp),%eax
 828fd71:	8b 00                	mov    (%eax),%eax
 828fd73:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 828fd79:	83 c4 1c             	add    $0x1c,%esp
 828fd7c:	5b                   	pop    %ebx
 828fd7d:	5e                   	pop    %esi
 828fd7e:	5f                   	pop    %edi
 828fd7f:	5d                   	pop    %ebp
 828fd80:	c3                   	ret
 828fd81:	90                   	nop

```

```c
// PacketPool::PacketPool @ 0x828fcfa

/* PacketPool::PacketPool(int, int) */

void __thiscall PacketPool::PacketPool(PacketPool *this,int param_1,int param_2)

{
  DynamicPool<PacketBuf> *this_00;
  
  *(undefined4 *)(this + 4) = 0;
  this_00 = operator_new(0x5c);
                    /* try { // try from 0828fd27 to 0828fd2b has its CatchHandler @ 0828fd2e */
  DynamicPool<PacketBuf>::DynamicPool(this_00,param_1);
  *(DynamicPool<PacketBuf> **)this = this_00;
  DynamicPool<PacketBuf>::SetPoolSize
            (*(DynamicPool<PacketBuf> **)this,(ushort)param_1,(ushort)param_2);
  **(undefined4 **)this = 0;
  return;
}

```

---

## ~PacketPool

```asm
// === 0828fd82 PacketPool::~PacketPool  [0x0828fd82-0x828fdb9] ===
 828fd82:	55                   	push   %ebp
 828fd83:	89 e5                	mov    %esp,%ebp
 828fd85:	53                   	push   %ebx
 828fd86:	83 ec 14             	sub    $0x14,%esp
 828fd89:	8b 45 08             	mov    0x8(%ebp),%eax
 828fd8c:	8b 00                	mov    (%eax),%eax
 828fd8e:	85 c0                	test   %eax,%eax
 828fd90:	74 22                	je     828fdb4 <_ZN10PacketPoolD1Ev+0x32>
 828fd92:	8b 45 08             	mov    0x8(%ebp),%eax
 828fd95:	8b 18                	mov    (%eax),%ebx
 828fd97:	85 db                	test   %ebx,%ebx
 828fd99:	74 10                	je     828fdab <_ZN10PacketPoolD1Ev+0x29>
 828fd9b:	89 1c 24             	mov    %ebx,(%esp)
 828fd9e:	e8 73 cf 01 00       	call   82acd16 <_ZN11DynamicPoolI9PacketBufED1Ev>
 828fda3:	89 1c 24             	mov    %ebx,(%esp)
 828fda6:	e8 45 47 49 00       	call   87244f0 <_ZdlPv>
 828fdab:	8b 45 08             	mov    0x8(%ebp),%eax
 828fdae:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 828fdb4:	83 c4 14             	add    $0x14,%esp
 828fdb7:	5b                   	pop    %ebx
 828fdb8:	5d                   	pop    %ebp
 828fdb9:	c3                   	ret

```

```c
// PacketPool::~PacketPool @ 0x828fd82

/* PacketPool::~PacketPool() */

void __thiscall PacketPool::~PacketPool(PacketPool *this)

{
  DynamicPool<PacketBuf> *this_00;
  
  if (*(int *)this != 0) {
    this_00 = *(DynamicPool<PacketBuf> **)this;
    if (this_00 != (DynamicPool<PacketBuf> *)0x0) {
      DynamicPool<PacketBuf>::~DynamicPool(this_00);
      operator_delete(this_00);
    }
    *(undefined4 *)this = 0;
  }
  return;
}

```

