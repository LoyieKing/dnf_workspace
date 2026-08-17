# SmallStreamPool

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## Acquire

```asm
// === 0828ff74 SmallStreamPool::Acquire  [0x0828ff74-0x8290003] ===
 828ff74:	55                   	push   %ebp
 828ff75:	89 e5                	mov    %esp,%ebp
 828ff77:	56                   	push   %esi
 828ff78:	53                   	push   %ebx
 828ff79:	83 ec 20             	sub    $0x20,%esp
 828ff7c:	8b 45 08             	mov    0x8(%ebp),%eax
 828ff7f:	89 44 24 04          	mov    %eax,0x4(%esp)
 828ff83:	8d 45 f0             	lea    -0x10(%ebp),%eax
 828ff86:	89 04 24             	mov    %eax,(%esp)
 828ff89:	e8 be 54 e7 ff       	call   810544c <_ZN5GuardI5MutexEC1EPS0_>
 828ff8e:	8b 45 08             	mov    0x8(%ebp),%eax
 828ff91:	8b 40 18             	mov    0x18(%eax),%eax
 828ff94:	89 04 24             	mov    %eax,(%esp)
 828ff97:	e8 8e d4 01 00       	call   82ad42a <_ZN11DynamicPoolI11SmallStreamE7AcquireEv>
 828ff9c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 828ff9f:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 828ffa3:	75 07                	jne    828ffac <_ZN15SmallStreamPool7AcquireEPKci+0x38>
 828ffa5:	bb 00 00 00 00       	mov    $0x0,%ebx
 828ffaa:	eb 43                	jmp    828ffef <_ZN15SmallStreamPool7AcquireEPKci+0x7b>
 828ffac:	8b 45 f4             	mov    -0xc(%ebp),%eax
 828ffaf:	8b 55 0c             	mov    0xc(%ebp),%edx
 828ffb2:	89 50 18             	mov    %edx,0x18(%eax)
 828ffb5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 828ffb8:	8b 55 10             	mov    0x10(%ebp),%edx
 828ffbb:	89 50 1c             	mov    %edx,0x1c(%eax)
 828ffbe:	8b 45 f4             	mov    -0xc(%ebp),%eax
 828ffc1:	c7 40 20 01 00 00 00 	movl   $0x1,0x20(%eax)
 828ffc8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 828ffcb:	c6 40 24 01          	movb   $0x1,0x24(%eax)
 828ffcf:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 828ffd2:	eb 1b                	jmp    828ffef <_ZN15SmallStreamPool7AcquireEPKci+0x7b>
 828ffd4:	89 d3                	mov    %edx,%ebx
 828ffd6:	89 c6                	mov    %eax,%esi
 828ffd8:	8d 45 f0             	lea    -0x10(%ebp),%eax
 828ffdb:	89 04 24             	mov    %eax,(%esp)
 828ffde:	e8 85 54 e7 ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 828ffe3:	89 f0                	mov    %esi,%eax
 828ffe5:	89 da                	mov    %ebx,%edx
 828ffe7:	89 04 24             	mov    %eax,(%esp)
 828ffea:	e8 61 37 85 00       	call   8ae3750 <_Unwind_Resume>
 828ffef:	8d 45 f0             	lea    -0x10(%ebp),%eax
 828fff2:	89 04 24             	mov    %eax,(%esp)
 828fff5:	e8 6e 54 e7 ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 828fffa:	89 d8                	mov    %ebx,%eax
 828fffc:	83 c4 20             	add    $0x20,%esp
 828ffff:	5b                   	pop    %ebx
 8290000:	5e                   	pop    %esi
 8290001:	5d                   	pop    %ebp
 8290002:	c3                   	ret
 8290003:	90                   	nop

```

```c
// SmallStreamPool::Acquire @ 0x828ff74

/* SmallStreamPool::Acquire(char const*, int) */

int __thiscall SmallStreamPool::Acquire(SmallStreamPool *this,char *param_1,int param_2)

{
  int iVar1;
  Guard<Mutex> local_14 [4];
  int local_10;
  
  Guard<Mutex>::Guard(local_14,(Mutex *)this);
                    /* try { // try from 0828ff97 to 0828ff9b has its CatchHandler @ 0828ffd4 */
  local_10 = DynamicPool<SmallStream>::Acquire(*(DynamicPool<SmallStream> **)(this + 0x18));
  if (local_10 == 0) {
    iVar1 = 0;
  }
  else {
    *(char **)(local_10 + 0x18) = param_1;
    *(int *)(local_10 + 0x1c) = param_2;
    *(undefined4 *)(local_10 + 0x20) = 1;
    *(undefined1 *)(local_10 + 0x24) = 1;
    iVar1 = local_10;
  }
  Guard<Mutex>::~Guard(local_14);
  return iVar1;
}

```

---

## Free

```asm
// === 08290004 SmallStreamPool::Free  [0x08290004-0x82900df] ===
 8290004:	55                   	push   %ebp
 8290005:	89 e5                	mov    %esp,%ebp
 8290007:	56                   	push   %esi
 8290008:	53                   	push   %ebx
 8290009:	83 ec 30             	sub    $0x30,%esp
 829000c:	8b 45 0c             	mov    0xc(%ebp),%eax
 829000f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8290012:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8290016:	75 0a                	jne    8290022 <_ZN15SmallStreamPool4FreeEP6Stream+0x1e>
 8290018:	bb 00 00 00 00       	mov    $0x0,%ebx
 829001d:	e9 b5 00 00 00       	jmp    82900d7 <_ZN15SmallStreamPool4FreeEP6Stream+0xd3>
 8290022:	8b 45 08             	mov    0x8(%ebp),%eax
 8290025:	89 44 24 04          	mov    %eax,0x4(%esp)
 8290029:	8d 45 f0             	lea    -0x10(%ebp),%eax
 829002c:	89 04 24             	mov    %eax,(%esp)
 829002f:	e8 18 54 e7 ff       	call   810544c <_ZN5GuardI5MutexEC1EPS0_>
 8290034:	8b 45 08             	mov    0x8(%ebp),%eax
 8290037:	8b 40 18             	mov    0x18(%eax),%eax
 829003a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 829003d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8290041:	89 04 24             	mov    %eax,(%esp)
 8290044:	e8 25 d6 01 00       	call   82ad66e <_ZN11DynamicPoolI11SmallStreamE10IsValidPtrEPS0_>
 8290049:	83 f0 01             	xor    $0x1,%eax
 829004c:	84 c0                	test   %al,%al
 829004e:	74 3a                	je     829008a <_ZN15SmallStreamPool4FreeEP6Stream+0x86>
 8290050:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8290053:	89 44 24 14          	mov    %eax,0x14(%esp)
 8290057:	c7 44 24 10 e8 62 c1 	movl   $0x8c162e8,0x10(%esp)
 829005e:	08 
 829005f:	c7 44 24 0c ae 02 00 	movl   $0x2ae,0xc(%esp)
 8290066:	00 
 8290067:	c7 44 24 08 00 b9 c1 	movl   $0x8c1b900,0x8(%esp)
 829006e:	08 
 829006f:	c7 44 24 04 88 62 c1 	movl   $0x8c16288,0x4(%esp)
 8290076:	08 
 8290077:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 829007e:	e8 87 3b 84 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8290083:	bb 00 00 00 00       	mov    $0x0,%ebx
 8290088:	eb 42                	jmp    82900cc <_ZN15SmallStreamPool4FreeEP6Stream+0xc8>
 829008a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 829008d:	89 04 24             	mov    %eax,(%esp)
 8290090:	e8 f5 bd 38 00       	call   861be8a <_ZN6Stream5resetEv>
 8290095:	8b 45 08             	mov    0x8(%ebp),%eax
 8290098:	8b 40 18             	mov    0x18(%eax),%eax
 829009b:	8b 55 f4             	mov    -0xc(%ebp),%edx
 829009e:	89 54 24 04          	mov    %edx,0x4(%esp)
 82900a2:	89 04 24             	mov    %eax,(%esp)
 82900a5:	e8 2c d6 01 00       	call   82ad6d6 <_ZN11DynamicPoolI11SmallStreamE4FreeEPS0_>
 82900aa:	bb 01 00 00 00       	mov    $0x1,%ebx
 82900af:	eb 1b                	jmp    82900cc <_ZN15SmallStreamPool4FreeEP6Stream+0xc8>
 82900b1:	89 d3                	mov    %edx,%ebx
 82900b3:	89 c6                	mov    %eax,%esi
 82900b5:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82900b8:	89 04 24             	mov    %eax,(%esp)
 82900bb:	e8 a8 53 e7 ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 82900c0:	89 f0                	mov    %esi,%eax
 82900c2:	89 da                	mov    %ebx,%edx
 82900c4:	89 04 24             	mov    %eax,(%esp)
 82900c7:	e8 84 36 85 00       	call   8ae3750 <_Unwind_Resume>
 82900cc:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82900cf:	89 04 24             	mov    %eax,(%esp)
 82900d2:	e8 91 53 e7 ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 82900d7:	89 d8                	mov    %ebx,%eax
 82900d9:	83 c4 30             	add    $0x30,%esp
 82900dc:	5b                   	pop    %ebx
 82900dd:	5e                   	pop    %esi
 82900de:	5d                   	pop    %ebp
 82900df:	c3                   	ret

```

```c
// SmallStreamPool::Free @ 0x8290004

/* SmallStreamPool::Free(Stream*) */

bool __thiscall SmallStreamPool::Free(SmallStreamPool *this,Stream *param_1)

{
  char cVar1;
  bool bVar2;
  Guard<Mutex> local_14 [4];
  Stream *local_10;
  
  local_10 = param_1;
  if (param_1 == (Stream *)0x0) {
    bVar2 = false;
  }
  else {
    Guard<Mutex>::Guard(local_14,(Mutex *)this);
                    /* try { // try from 08290044 to 082900a9 has its CatchHandler @ 082900b1 */
    cVar1 = DynamicPool<SmallStream>::IsValidPtr
                      (*(DynamicPool<SmallStream> **)(this + 0x18),(SmallStream *)local_10);
    bVar2 = cVar1 == '\x01';
    if (bVar2) {
      Stream::reset(local_10);
      DynamicPool<SmallStream>::Free
                (*(DynamicPool<SmallStream> **)(this + 0x18),(SmallStream *)local_10);
    }
    else {
      LogManager::logFormat
                (1,"App.cpp","bool SmallStreamPool::Free(Stream*)",0x2ae,
                 "[BigStreamPool::Free] invalid ptr : %p",local_10);
    }
    Guard<Mutex>::~Guard(local_14);
  }
  return bVar2;
}

```

---

## Remain

```asm
// === 082900f6 SmallStreamPool::Remain  [0x082900f6-0x829014f] ===
 82900f6:	55                   	push   %ebp
 82900f7:	89 e5                	mov    %esp,%ebp
 82900f9:	56                   	push   %esi
 82900fa:	53                   	push   %ebx
 82900fb:	83 ec 20             	sub    $0x20,%esp
 82900fe:	8b 45 08             	mov    0x8(%ebp),%eax
 8290101:	89 44 24 04          	mov    %eax,0x4(%esp)
 8290105:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8290108:	89 04 24             	mov    %eax,(%esp)
 829010b:	e8 3c 53 e7 ff       	call   810544c <_ZN5GuardI5MutexEC1EPS0_>
 8290110:	8b 45 08             	mov    0x8(%ebp),%eax
 8290113:	8b 40 18             	mov    0x18(%eax),%eax
 8290116:	89 04 24             	mov    %eax,(%esp)
 8290119:	e8 d4 d6 01 00       	call   82ad7f2 <_ZN11DynamicPoolI11SmallStreamE6RemainEv>
 829011e:	89 c3                	mov    %eax,%ebx
 8290120:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8290123:	89 04 24             	mov    %eax,(%esp)
 8290126:	e8 3d 53 e7 ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 829012b:	89 d8                	mov    %ebx,%eax
 829012d:	83 c4 20             	add    $0x20,%esp
 8290130:	5b                   	pop    %ebx
 8290131:	5e                   	pop    %esi
 8290132:	5d                   	pop    %ebp
 8290133:	c3                   	ret
 8290134:	89 d3                	mov    %edx,%ebx
 8290136:	89 c6                	mov    %eax,%esi
 8290138:	8d 45 f4             	lea    -0xc(%ebp),%eax
 829013b:	89 04 24             	mov    %eax,(%esp)
 829013e:	e8 25 53 e7 ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 8290143:	89 f0                	mov    %esi,%eax
 8290145:	89 da                	mov    %ebx,%edx
 8290147:	89 04 24             	mov    %eax,(%esp)
 829014a:	e8 01 36 85 00       	call   8ae3750 <_Unwind_Resume>
 829014f:	90                   	nop

```

```c
// SmallStreamPool::Remain @ 0x82900f6

/* SmallStreamPool::Remain() */

undefined4 __thiscall SmallStreamPool::Remain(SmallStreamPool *this)

{
  undefined4 uVar1;
  Guard<Mutex> local_10 [4];
  
  Guard<Mutex>::Guard(local_10,(Mutex *)this);
                    /* try { // try from 08290119 to 0829011d has its CatchHandler @ 08290134 */
  uVar1 = DynamicPool<SmallStream>::Remain(*(DynamicPool<SmallStream> **)(this + 0x18));
  Guard<Mutex>::~Guard(local_10);
  return uVar1;
}

```

---

## Size

```asm
// === 082900e0 SmallStreamPool::Size  [0x082900e0-0x82900f5] ===
 82900e0:	55                   	push   %ebp
 82900e1:	89 e5                	mov    %esp,%ebp
 82900e3:	83 ec 18             	sub    $0x18,%esp
 82900e6:	8b 45 08             	mov    0x8(%ebp),%eax
 82900e9:	8b 40 18             	mov    0x18(%eax),%eax
 82900ec:	89 04 24             	mov    %eax,(%esp)
 82900ef:	e8 f2 d6 01 00       	call   82ad7e6 <_ZN11DynamicPoolI11SmallStreamE4SizeEv>
 82900f4:	c9                   	leave
 82900f5:	c3                   	ret

```

```c
// SmallStreamPool::Size @ 0x82900e0

/* SmallStreamPool::Size() */

void __thiscall SmallStreamPool::Size(SmallStreamPool *this)

{
  DynamicPool<SmallStream>::Size(*(DynamicPool<SmallStream> **)(this + 0x18));
  return;
}

```

---

## SmallStreamPool

```asm
// === 0828fe62 SmallStreamPool::SmallStreamPool  [0x0828fe62-0x828ff0d] ===
 828fe62:	55                   	push   %ebp
 828fe63:	89 e5                	mov    %esp,%ebp
 828fe65:	57                   	push   %edi
 828fe66:	56                   	push   %esi
 828fe67:	53                   	push   %ebx
 828fe68:	83 ec 2c             	sub    $0x2c,%esp
 828fe6b:	8b 45 08             	mov    0x8(%ebp),%eax
 828fe6e:	89 04 24             	mov    %eax,(%esp)
 828fe71:	e8 9c b5 e3 ff       	call   80cb412 <_ZN5MutexC1Ev>
 828fe76:	e8 06 c3 e3 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 828fe7b:	8b 80 9c 01 00 00    	mov    0x19c(%eax),%eax
 828fe81:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 828fe84:	c7 04 24 5c 00 00 00 	movl   $0x5c,(%esp)
 828fe8b:	e8 c0 45 49 00       	call   8724450 <_Znwj>
 828fe90:	89 c3                	mov    %eax,%ebx
 828fe92:	89 d8                	mov    %ebx,%eax
 828fe94:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 828fe97:	89 54 24 04          	mov    %edx,0x4(%esp)
 828fe9b:	89 04 24             	mov    %eax,(%esp)
 828fe9e:	e8 57 d2 01 00       	call   82ad0fa <_ZN11DynamicPoolI11SmallStreamEC1Ei>
 828fea3:	eb 12                	jmp    828feb7 <_ZN15SmallStreamPoolC1Ev+0x55>
 828fea5:	89 d6                	mov    %edx,%esi
 828fea7:	89 c7                	mov    %eax,%edi
 828fea9:	89 1c 24             	mov    %ebx,(%esp)
 828feac:	e8 3f 46 49 00       	call   87244f0 <_ZdlPv>
 828feb1:	89 f8                	mov    %edi,%eax
 828feb3:	89 f2                	mov    %esi,%edx
 828feb5:	eb 3c                	jmp    828fef3 <_ZN15SmallStreamPoolC1Ev+0x91>
 828feb7:	89 da                	mov    %ebx,%edx
 828feb9:	8b 45 08             	mov    0x8(%ebp),%eax
 828febc:	89 50 18             	mov    %edx,0x18(%eax)
 828febf:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 828fec2:	0f b7 d0             	movzwl %ax,%edx
 828fec5:	8b 45 08             	mov    0x8(%ebp),%eax
 828fec8:	8b 40 18             	mov    0x18(%eax),%eax
 828fecb:	c7 44 24 08 e8 03 00 	movl   $0x3e8,0x8(%esp)
 828fed2:	00 
 828fed3:	89 54 24 04          	mov    %edx,0x4(%esp)
 828fed7:	89 04 24             	mov    %eax,(%esp)
 828feda:	e8 3d d3 01 00       	call   82ad21c <_ZN11DynamicPoolI11SmallStreamE11SetPoolSizeEtt>
 828fedf:	8b 45 08             	mov    0x8(%ebp),%eax
 828fee2:	8b 40 18             	mov    0x18(%eax),%eax
 828fee5:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 828feeb:	83 c4 2c             	add    $0x2c,%esp
 828feee:	5b                   	pop    %ebx
 828feef:	5e                   	pop    %esi
 828fef0:	5f                   	pop    %edi
 828fef1:	5d                   	pop    %ebp
 828fef2:	c3                   	ret
 828fef3:	89 d3                	mov    %edx,%ebx
 828fef5:	89 c6                	mov    %eax,%esi
 828fef7:	8b 45 08             	mov    0x8(%ebp),%eax
 828fefa:	89 04 24             	mov    %eax,(%esp)
 828fefd:	e8 2c b5 e3 ff       	call   80cb42e <_ZN5MutexD1Ev>
 828ff02:	89 f0                	mov    %esi,%eax
 828ff04:	89 da                	mov    %ebx,%edx
 828ff06:	89 04 24             	mov    %eax,(%esp)
 828ff09:	e8 42 38 85 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// SmallStreamPool::SmallStreamPool @ 0x828fe62

/* SmallStreamPool::SmallStreamPool() */

void __thiscall SmallStreamPool::SmallStreamPool(SmallStreamPool *this)

{
  int iVar1;
  DynamicPool<SmallStream> *this_00;
  
  Mutex::Mutex((Mutex *)this);
                    /* try { // try from 0828fe76 to 0828fe8f has its CatchHandler @ 0828fef3 */
  iVar1 = G_CEnvironment();
  iVar1 = *(int *)(iVar1 + 0x19c);
  this_00 = operator_new(0x5c);
                    /* try { // try from 0828fe9e to 0828fea2 has its CatchHandler @ 0828fea5 */
  DynamicPool<SmallStream>::DynamicPool(this_00,iVar1);
  *(DynamicPool<SmallStream> **)(this + 0x18) = this_00;
  DynamicPool<SmallStream>::SetPoolSize
            (*(DynamicPool<SmallStream> **)(this + 0x18),(ushort)iVar1,1000);
  **(undefined4 **)(this + 0x18) = 0;
  return;
}

```

---

## ~SmallStreamPool

```asm
// === 0828ff0e SmallStreamPool::~SmallStreamPool  [0x0828ff0e-0x828ff73] ===
 828ff0e:	55                   	push   %ebp
 828ff0f:	89 e5                	mov    %esp,%ebp
 828ff11:	56                   	push   %esi
 828ff12:	53                   	push   %ebx
 828ff13:	83 ec 10             	sub    $0x10,%esp
 828ff16:	8b 45 08             	mov    0x8(%ebp),%eax
 828ff19:	8b 40 18             	mov    0x18(%eax),%eax
 828ff1c:	85 c0                	test   %eax,%eax
 828ff1e:	74 41                	je     828ff61 <_ZN15SmallStreamPoolD1Ev+0x53>
 828ff20:	8b 45 08             	mov    0x8(%ebp),%eax
 828ff23:	8b 58 18             	mov    0x18(%eax),%ebx
 828ff26:	85 db                	test   %ebx,%ebx
 828ff28:	74 10                	je     828ff3a <_ZN15SmallStreamPoolD1Ev+0x2c>
 828ff2a:	89 1c 24             	mov    %ebx,(%esp)
 828ff2d:	e8 b2 d3 01 00       	call   82ad2e4 <_ZN11DynamicPoolI11SmallStreamED1Ev>
 828ff32:	89 1c 24             	mov    %ebx,(%esp)
 828ff35:	e8 b6 45 49 00       	call   87244f0 <_ZdlPv>
 828ff3a:	8b 45 08             	mov    0x8(%ebp),%eax
 828ff3d:	c7 40 18 00 00 00 00 	movl   $0x0,0x18(%eax)
 828ff44:	eb 1b                	jmp    828ff61 <_ZN15SmallStreamPoolD1Ev+0x53>
 828ff46:	89 d3                	mov    %edx,%ebx
 828ff48:	89 c6                	mov    %eax,%esi
 828ff4a:	8b 45 08             	mov    0x8(%ebp),%eax
 828ff4d:	89 04 24             	mov    %eax,(%esp)
 828ff50:	e8 d9 b4 e3 ff       	call   80cb42e <_ZN5MutexD1Ev>
 828ff55:	89 f0                	mov    %esi,%eax
 828ff57:	89 da                	mov    %ebx,%edx
 828ff59:	89 04 24             	mov    %eax,(%esp)
 828ff5c:	e8 ef 37 85 00       	call   8ae3750 <_Unwind_Resume>
 828ff61:	8b 45 08             	mov    0x8(%ebp),%eax
 828ff64:	89 04 24             	mov    %eax,(%esp)
 828ff67:	e8 c2 b4 e3 ff       	call   80cb42e <_ZN5MutexD1Ev>
 828ff6c:	83 c4 10             	add    $0x10,%esp
 828ff6f:	5b                   	pop    %ebx
 828ff70:	5e                   	pop    %esi
 828ff71:	5d                   	pop    %ebp
 828ff72:	c3                   	ret
 828ff73:	90                   	nop

```

```c
// SmallStreamPool::~SmallStreamPool @ 0x828ff0e

/* SmallStreamPool::~SmallStreamPool() */

void __thiscall SmallStreamPool::~SmallStreamPool(SmallStreamPool *this)

{
  DynamicPool<SmallStream> *this_00;
  
  if (*(int *)(this + 0x18) != 0) {
    this_00 = *(DynamicPool<SmallStream> **)(this + 0x18);
    if (this_00 != (DynamicPool<SmallStream> *)0x0) {
                    /* try { // try from 0828ff2d to 0828ff31 has its CatchHandler @ 0828ff46 */
      DynamicPool<SmallStream>::~DynamicPool(this_00);
      operator_delete(this_00);
    }
    *(undefined4 *)(this + 0x18) = 0;
  }
  Mutex::~Mutex((Mutex *)this);
  return;
}

```

