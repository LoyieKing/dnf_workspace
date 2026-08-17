# StreamPool

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## Acquire

```asm
// === 0828fa86 StreamPool::Acquire  [0x0828fa86-0x828fb27] ===
 828fa86:	55                   	push   %ebp
 828fa87:	89 e5                	mov    %esp,%ebp
 828fa89:	56                   	push   %esi
 828fa8a:	53                   	push   %ebx
 828fa8b:	83 ec 20             	sub    $0x20,%esp
 828fa8e:	8b 45 08             	mov    0x8(%ebp),%eax
 828fa91:	89 44 24 04          	mov    %eax,0x4(%esp)
 828fa95:	8d 45 f0             	lea    -0x10(%ebp),%eax
 828fa98:	89 04 24             	mov    %eax,(%esp)
 828fa9b:	e8 ac 59 e7 ff       	call   810544c <_ZN5GuardI5MutexEC1EPS0_>
 828faa0:	8b 45 08             	mov    0x8(%ebp),%eax
 828faa3:	8b 40 18             	mov    0x18(%eax),%eax
 828faa6:	89 04 24             	mov    %eax,(%esp)
 828faa9:	e8 00 cd 01 00       	call   82ac7ae <_ZN11DynamicPoolI6StreamE7AcquireEv>
 828faae:	89 45 f4             	mov    %eax,-0xc(%ebp)
 828fab1:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 828fab5:	75 07                	jne    828fabe <_ZN10StreamPool7AcquireEPKci+0x38>
 828fab7:	bb 00 00 00 00       	mov    $0x0,%ebx
 828fabc:	eb 56                	jmp    828fb14 <_ZN10StreamPool7AcquireEPKci+0x8e>
 828fabe:	8b 45 f4             	mov    -0xc(%ebp),%eax
 828fac1:	8b 55 0c             	mov    0xc(%ebp),%edx
 828fac4:	89 50 18             	mov    %edx,0x18(%eax)
 828fac7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 828faca:	8b 55 10             	mov    0x10(%ebp),%edx
 828facd:	89 50 1c             	mov    %edx,0x1c(%eax)
 828fad0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 828fad3:	c7 40 20 00 00 00 00 	movl   $0x0,0x20(%eax)
 828fada:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 828fae1:	00 
 828fae2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 828fae5:	89 04 24             	mov    %eax,(%esp)
 828fae8:	e8 d7 c3 38 00       	call   861bec4 <_ZN6Stream14set_big_streamEb>
 828faed:	8b 45 f4             	mov    -0xc(%ebp),%eax
 828faf0:	c6 40 24 01          	movb   $0x1,0x24(%eax)
 828faf4:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 828faf7:	eb 1b                	jmp    828fb14 <_ZN10StreamPool7AcquireEPKci+0x8e>
 828faf9:	89 d3                	mov    %edx,%ebx
 828fafb:	89 c6                	mov    %eax,%esi
 828fafd:	8d 45 f0             	lea    -0x10(%ebp),%eax
 828fb00:	89 04 24             	mov    %eax,(%esp)
 828fb03:	e8 60 59 e7 ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 828fb08:	89 f0                	mov    %esi,%eax
 828fb0a:	89 da                	mov    %ebx,%edx
 828fb0c:	89 04 24             	mov    %eax,(%esp)
 828fb0f:	e8 3c 3c 85 00       	call   8ae3750 <_Unwind_Resume>
 828fb14:	8d 45 f0             	lea    -0x10(%ebp),%eax
 828fb17:	89 04 24             	mov    %eax,(%esp)
 828fb1a:	e8 49 59 e7 ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 828fb1f:	89 d8                	mov    %ebx,%eax
 828fb21:	83 c4 20             	add    $0x20,%esp
 828fb24:	5b                   	pop    %ebx
 828fb25:	5e                   	pop    %esi
 828fb26:	5d                   	pop    %ebp
 828fb27:	c3                   	ret

```

```c
// StreamPool::Acquire @ 0x828fa86

/* StreamPool::Acquire(char const*, int) */

Stream * __thiscall StreamPool::Acquire(StreamPool *this,char *param_1,int param_2)

{
  Stream *pSVar1;
  Guard<Mutex> local_14 [4];
  Stream *local_10;
  
  Guard<Mutex>::Guard(local_14,(Mutex *)this);
                    /* try { // try from 0828faa9 to 0828faec has its CatchHandler @ 0828faf9 */
  local_10 = (Stream *)DynamicPool<Stream>::Acquire(*(DynamicPool<Stream> **)(this + 0x18));
  if (local_10 == (Stream *)0x0) {
    pSVar1 = (Stream *)0x0;
  }
  else {
    *(char **)(local_10 + 0x18) = param_1;
    *(int *)(local_10 + 0x1c) = param_2;
    *(undefined4 *)(local_10 + 0x20) = 0;
    Stream::set_big_stream(local_10,false);
    local_10[0x24] = (Stream)0x1;
    pSVar1 = local_10;
  }
  Guard<Mutex>::~Guard(local_14);
  return pSVar1;
}

```

---

## Free

```asm
// === 0828fb28 StreamPool::Free  [0x0828fb28-0x828fc05] ===
 828fb28:	55                   	push   %ebp
 828fb29:	89 e5                	mov    %esp,%ebp
 828fb2b:	56                   	push   %esi
 828fb2c:	53                   	push   %ebx
 828fb2d:	83 ec 30             	sub    $0x30,%esp
 828fb30:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 828fb34:	75 0a                	jne    828fb40 <_ZN10StreamPool4FreeEP6Stream+0x18>
 828fb36:	bb 00 00 00 00       	mov    $0x0,%ebx
 828fb3b:	e9 bc 00 00 00       	jmp    828fbfc <_ZN10StreamPool4FreeEP6Stream+0xd4>
 828fb40:	8b 45 08             	mov    0x8(%ebp),%eax
 828fb43:	89 44 24 04          	mov    %eax,0x4(%esp)
 828fb47:	8d 45 f4             	lea    -0xc(%ebp),%eax
 828fb4a:	89 04 24             	mov    %eax,(%esp)
 828fb4d:	e8 fa 58 e7 ff       	call   810544c <_ZN5GuardI5MutexEC1EPS0_>
 828fb52:	8b 45 0c             	mov    0xc(%ebp),%eax
 828fb55:	c6 40 24 00          	movb   $0x0,0x24(%eax)
 828fb59:	8b 45 08             	mov    0x8(%ebp),%eax
 828fb5c:	8b 40 18             	mov    0x18(%eax),%eax
 828fb5f:	8b 55 0c             	mov    0xc(%ebp),%edx
 828fb62:	89 54 24 04          	mov    %edx,0x4(%esp)
 828fb66:	89 04 24             	mov    %eax,(%esp)
 828fb69:	e8 84 ce 01 00       	call   82ac9f2 <_ZN11DynamicPoolI6StreamE10IsValidPtrEPS0_>
 828fb6e:	83 f0 01             	xor    $0x1,%eax
 828fb71:	84 c0                	test   %al,%al
 828fb73:	74 3a                	je     828fbaf <_ZN10StreamPool4FreeEP6Stream+0x87>
 828fb75:	8b 45 0c             	mov    0xc(%ebp),%eax
 828fb78:	89 44 24 14          	mov    %eax,0x14(%esp)
 828fb7c:	c7 44 24 10 64 62 c1 	movl   $0x8c16264,0x10(%esp)
 828fb83:	08 
 828fb84:	c7 44 24 0c 39 02 00 	movl   $0x239,0xc(%esp)
 828fb8b:	00 
 828fb8c:	c7 44 24 08 74 b9 c1 	movl   $0x8c1b974,0x8(%esp)
 828fb93:	08 
 828fb94:	c7 44 24 04 88 62 c1 	movl   $0x8c16288,0x4(%esp)
 828fb9b:	08 
 828fb9c:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 828fba3:	e8 62 40 84 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 828fba8:	bb 00 00 00 00       	mov    $0x0,%ebx
 828fbad:	eb 42                	jmp    828fbf1 <_ZN10StreamPool4FreeEP6Stream+0xc9>
 828fbaf:	8b 45 0c             	mov    0xc(%ebp),%eax
 828fbb2:	89 04 24             	mov    %eax,(%esp)
 828fbb5:	e8 d0 c2 38 00       	call   861be8a <_ZN6Stream5resetEv>
 828fbba:	8b 45 08             	mov    0x8(%ebp),%eax
 828fbbd:	8b 40 18             	mov    0x18(%eax),%eax
 828fbc0:	8b 55 0c             	mov    0xc(%ebp),%edx
 828fbc3:	89 54 24 04          	mov    %edx,0x4(%esp)
 828fbc7:	89 04 24             	mov    %eax,(%esp)
 828fbca:	e8 8b ce 01 00       	call   82aca5a <_ZN11DynamicPoolI6StreamE4FreeEPS0_>
 828fbcf:	bb 01 00 00 00       	mov    $0x1,%ebx
 828fbd4:	eb 1b                	jmp    828fbf1 <_ZN10StreamPool4FreeEP6Stream+0xc9>
 828fbd6:	89 d3                	mov    %edx,%ebx
 828fbd8:	89 c6                	mov    %eax,%esi
 828fbda:	8d 45 f4             	lea    -0xc(%ebp),%eax
 828fbdd:	89 04 24             	mov    %eax,(%esp)
 828fbe0:	e8 83 58 e7 ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 828fbe5:	89 f0                	mov    %esi,%eax
 828fbe7:	89 da                	mov    %ebx,%edx
 828fbe9:	89 04 24             	mov    %eax,(%esp)
 828fbec:	e8 5f 3b 85 00       	call   8ae3750 <_Unwind_Resume>
 828fbf1:	8d 45 f4             	lea    -0xc(%ebp),%eax
 828fbf4:	89 04 24             	mov    %eax,(%esp)
 828fbf7:	e8 6c 58 e7 ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 828fbfc:	89 d8                	mov    %ebx,%eax
 828fbfe:	83 c4 30             	add    $0x30,%esp
 828fc01:	5b                   	pop    %ebx
 828fc02:	5e                   	pop    %esi
 828fc03:	5d                   	pop    %ebp
 828fc04:	c3                   	ret
 828fc05:	90                   	nop

```

```c
// StreamPool::Free @ 0x828fb28

/* StreamPool::Free(Stream*) */

bool __thiscall StreamPool::Free(StreamPool *this,Stream *param_1)

{
  char cVar1;
  bool bVar2;
  Guard<Mutex> local_10 [4];
  
  if (param_1 == (Stream *)0x0) {
    bVar2 = false;
  }
  else {
    Guard<Mutex>::Guard(local_10,(Mutex *)this);
    param_1[0x24] = (Stream)0x0;
                    /* try { // try from 0828fb69 to 0828fbce has its CatchHandler @ 0828fbd6 */
    cVar1 = DynamicPool<Stream>::IsValidPtr(*(DynamicPool<Stream> **)(this + 0x18),param_1);
    bVar2 = cVar1 == '\x01';
    if (bVar2) {
      Stream::reset(param_1);
      DynamicPool<Stream>::Free(*(DynamicPool<Stream> **)(this + 0x18),param_1);
    }
    else {
      LogManager::logFormat
                (1,"App.cpp","bool StreamPool::Free(Stream*)",0x239,
                 "[StreamPool::Free] invalid ptr : %p",param_1);
    }
    Guard<Mutex>::~Guard(local_10);
  }
  return bVar2;
}

```

---

## Remain

```asm
// === 0828fc1c StreamPool::Remain  [0x0828fc1c-0x828fc75] ===
 828fc1c:	55                   	push   %ebp
 828fc1d:	89 e5                	mov    %esp,%ebp
 828fc1f:	56                   	push   %esi
 828fc20:	53                   	push   %ebx
 828fc21:	83 ec 20             	sub    $0x20,%esp
 828fc24:	8b 45 08             	mov    0x8(%ebp),%eax
 828fc27:	89 44 24 04          	mov    %eax,0x4(%esp)
 828fc2b:	8d 45 f4             	lea    -0xc(%ebp),%eax
 828fc2e:	89 04 24             	mov    %eax,(%esp)
 828fc31:	e8 16 58 e7 ff       	call   810544c <_ZN5GuardI5MutexEC1EPS0_>
 828fc36:	8b 45 08             	mov    0x8(%ebp),%eax
 828fc39:	8b 40 18             	mov    0x18(%eax),%eax
 828fc3c:	89 04 24             	mov    %eax,(%esp)
 828fc3f:	e8 32 cf 01 00       	call   82acb76 <_ZN11DynamicPoolI6StreamE6RemainEv>
 828fc44:	89 c3                	mov    %eax,%ebx
 828fc46:	8d 45 f4             	lea    -0xc(%ebp),%eax
 828fc49:	89 04 24             	mov    %eax,(%esp)
 828fc4c:	e8 17 58 e7 ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 828fc51:	89 d8                	mov    %ebx,%eax
 828fc53:	83 c4 20             	add    $0x20,%esp
 828fc56:	5b                   	pop    %ebx
 828fc57:	5e                   	pop    %esi
 828fc58:	5d                   	pop    %ebp
 828fc59:	c3                   	ret
 828fc5a:	89 d3                	mov    %edx,%ebx
 828fc5c:	89 c6                	mov    %eax,%esi
 828fc5e:	8d 45 f4             	lea    -0xc(%ebp),%eax
 828fc61:	89 04 24             	mov    %eax,(%esp)
 828fc64:	e8 ff 57 e7 ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 828fc69:	89 f0                	mov    %esi,%eax
 828fc6b:	89 da                	mov    %ebx,%edx
 828fc6d:	89 04 24             	mov    %eax,(%esp)
 828fc70:	e8 db 3a 85 00       	call   8ae3750 <_Unwind_Resume>
 828fc75:	90                   	nop

```

```c
// StreamPool::Remain @ 0x828fc1c

/* StreamPool::Remain() */

undefined4 __thiscall StreamPool::Remain(StreamPool *this)

{
  undefined4 uVar1;
  Guard<Mutex> local_10 [4];
  
  Guard<Mutex>::Guard(local_10,(Mutex *)this);
                    /* try { // try from 0828fc3f to 0828fc43 has its CatchHandler @ 0828fc5a */
  uVar1 = DynamicPool<Stream>::Remain(*(DynamicPool<Stream> **)(this + 0x18));
  Guard<Mutex>::~Guard(local_10);
  return uVar1;
}

```

---

## Size

```asm
// === 0828fc06 StreamPool::Size  [0x0828fc06-0x828fc1b] ===
 828fc06:	55                   	push   %ebp
 828fc07:	89 e5                	mov    %esp,%ebp
 828fc09:	83 ec 18             	sub    $0x18,%esp
 828fc0c:	8b 45 08             	mov    0x8(%ebp),%eax
 828fc0f:	8b 40 18             	mov    0x18(%eax),%eax
 828fc12:	89 04 24             	mov    %eax,(%esp)
 828fc15:	e8 50 cf 01 00       	call   82acb6a <_ZN11DynamicPoolI6StreamE4SizeEv>
 828fc1a:	c9                   	leave
 828fc1b:	c3                   	ret

```

```c
// StreamPool::Size @ 0x828fc06

/* StreamPool::Size() */

void __thiscall StreamPool::Size(StreamPool *this)

{
  DynamicPool<Stream>::Size(*(DynamicPool<Stream> **)(this + 0x18));
  return;
}

```

---

## StreamPool

```asm
// === 0828f974 StreamPool::StreamPool  [0x0828f974-0x828fa1f] ===
 828f974:	55                   	push   %ebp
 828f975:	89 e5                	mov    %esp,%ebp
 828f977:	57                   	push   %edi
 828f978:	56                   	push   %esi
 828f979:	53                   	push   %ebx
 828f97a:	83 ec 2c             	sub    $0x2c,%esp
 828f97d:	8b 45 08             	mov    0x8(%ebp),%eax
 828f980:	89 04 24             	mov    %eax,(%esp)
 828f983:	e8 8a ba e3 ff       	call   80cb412 <_ZN5MutexC1Ev>
 828f988:	e8 f4 c7 e3 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 828f98d:	8b 80 a0 01 00 00    	mov    0x1a0(%eax),%eax
 828f993:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 828f996:	c7 04 24 5c 00 00 00 	movl   $0x5c,(%esp)
 828f99d:	e8 ae 4a 49 00       	call   8724450 <_Znwj>
 828f9a2:	89 c3                	mov    %eax,%ebx
 828f9a4:	89 d8                	mov    %ebx,%eax
 828f9a6:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 828f9a9:	89 54 24 04          	mov    %edx,0x4(%esp)
 828f9ad:	89 04 24             	mov    %eax,(%esp)
 828f9b0:	e8 17 cb 01 00       	call   82ac4cc <_ZN11DynamicPoolI6StreamEC1Ei>
 828f9b5:	eb 12                	jmp    828f9c9 <_ZN10StreamPoolC1Ev+0x55>
 828f9b7:	89 d6                	mov    %edx,%esi
 828f9b9:	89 c7                	mov    %eax,%edi
 828f9bb:	89 1c 24             	mov    %ebx,(%esp)
 828f9be:	e8 2d 4b 49 00       	call   87244f0 <_ZdlPv>
 828f9c3:	89 f8                	mov    %edi,%eax
 828f9c5:	89 f2                	mov    %esi,%edx
 828f9c7:	eb 3c                	jmp    828fa05 <_ZN10StreamPoolC1Ev+0x91>
 828f9c9:	89 da                	mov    %ebx,%edx
 828f9cb:	8b 45 08             	mov    0x8(%ebp),%eax
 828f9ce:	89 50 18             	mov    %edx,0x18(%eax)
 828f9d1:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 828f9d4:	0f b7 d0             	movzwl %ax,%edx
 828f9d7:	8b 45 08             	mov    0x8(%ebp),%eax
 828f9da:	8b 40 18             	mov    0x18(%eax),%eax
 828f9dd:	c7 44 24 08 e8 03 00 	movl   $0x3e8,0x8(%esp)
 828f9e4:	00 
 828f9e5:	89 54 24 04          	mov    %edx,0x4(%esp)
 828f9e9:	89 04 24             	mov    %eax,(%esp)
 828f9ec:	e8 fd cb 01 00       	call   82ac5ee <_ZN11DynamicPoolI6StreamE11SetPoolSizeEtt>
 828f9f1:	8b 45 08             	mov    0x8(%ebp),%eax
 828f9f4:	8b 40 18             	mov    0x18(%eax),%eax
 828f9f7:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 828f9fd:	83 c4 2c             	add    $0x2c,%esp
 828fa00:	5b                   	pop    %ebx
 828fa01:	5e                   	pop    %esi
 828fa02:	5f                   	pop    %edi
 828fa03:	5d                   	pop    %ebp
 828fa04:	c3                   	ret
 828fa05:	89 d3                	mov    %edx,%ebx
 828fa07:	89 c6                	mov    %eax,%esi
 828fa09:	8b 45 08             	mov    0x8(%ebp),%eax
 828fa0c:	89 04 24             	mov    %eax,(%esp)
 828fa0f:	e8 1a ba e3 ff       	call   80cb42e <_ZN5MutexD1Ev>
 828fa14:	89 f0                	mov    %esi,%eax
 828fa16:	89 da                	mov    %ebx,%edx
 828fa18:	89 04 24             	mov    %eax,(%esp)
 828fa1b:	e8 30 3d 85 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// StreamPool::StreamPool @ 0x828f974

/* StreamPool::StreamPool() */

void __thiscall StreamPool::StreamPool(StreamPool *this)

{
  int iVar1;
  DynamicPool<Stream> *this_00;
  
  Mutex::Mutex((Mutex *)this);
                    /* try { // try from 0828f988 to 0828f9a1 has its CatchHandler @ 0828fa05 */
  iVar1 = G_CEnvironment();
  iVar1 = *(int *)(iVar1 + 0x1a0);
  this_00 = operator_new(0x5c);
                    /* try { // try from 0828f9b0 to 0828f9b4 has its CatchHandler @ 0828f9b7 */
  DynamicPool<Stream>::DynamicPool(this_00,iVar1);
  *(DynamicPool<Stream> **)(this + 0x18) = this_00;
  DynamicPool<Stream>::SetPoolSize(*(DynamicPool<Stream> **)(this + 0x18),(ushort)iVar1,1000);
  **(undefined4 **)(this + 0x18) = 0;
  return;
}

```

---

## ~StreamPool

```asm
// === 0828fa20 StreamPool::~StreamPool  [0x0828fa20-0x828fa85] ===
 828fa20:	55                   	push   %ebp
 828fa21:	89 e5                	mov    %esp,%ebp
 828fa23:	56                   	push   %esi
 828fa24:	53                   	push   %ebx
 828fa25:	83 ec 10             	sub    $0x10,%esp
 828fa28:	8b 45 08             	mov    0x8(%ebp),%eax
 828fa2b:	8b 40 18             	mov    0x18(%eax),%eax
 828fa2e:	85 c0                	test   %eax,%eax
 828fa30:	74 41                	je     828fa73 <_ZN10StreamPoolD1Ev+0x53>
 828fa32:	8b 45 08             	mov    0x8(%ebp),%eax
 828fa35:	8b 58 18             	mov    0x18(%eax),%ebx
 828fa38:	85 db                	test   %ebx,%ebx
 828fa3a:	74 10                	je     828fa4c <_ZN10StreamPoolD1Ev+0x2c>
 828fa3c:	89 1c 24             	mov    %ebx,(%esp)
 828fa3f:	e8 24 cc 01 00       	call   82ac668 <_ZN11DynamicPoolI6StreamED1Ev>
 828fa44:	89 1c 24             	mov    %ebx,(%esp)
 828fa47:	e8 a4 4a 49 00       	call   87244f0 <_ZdlPv>
 828fa4c:	8b 45 08             	mov    0x8(%ebp),%eax
 828fa4f:	c7 40 18 00 00 00 00 	movl   $0x0,0x18(%eax)
 828fa56:	eb 1b                	jmp    828fa73 <_ZN10StreamPoolD1Ev+0x53>
 828fa58:	89 d3                	mov    %edx,%ebx
 828fa5a:	89 c6                	mov    %eax,%esi
 828fa5c:	8b 45 08             	mov    0x8(%ebp),%eax
 828fa5f:	89 04 24             	mov    %eax,(%esp)
 828fa62:	e8 c7 b9 e3 ff       	call   80cb42e <_ZN5MutexD1Ev>
 828fa67:	89 f0                	mov    %esi,%eax
 828fa69:	89 da                	mov    %ebx,%edx
 828fa6b:	89 04 24             	mov    %eax,(%esp)
 828fa6e:	e8 dd 3c 85 00       	call   8ae3750 <_Unwind_Resume>
 828fa73:	8b 45 08             	mov    0x8(%ebp),%eax
 828fa76:	89 04 24             	mov    %eax,(%esp)
 828fa79:	e8 b0 b9 e3 ff       	call   80cb42e <_ZN5MutexD1Ev>
 828fa7e:	83 c4 10             	add    $0x10,%esp
 828fa81:	5b                   	pop    %ebx
 828fa82:	5e                   	pop    %esi
 828fa83:	5d                   	pop    %ebp
 828fa84:	c3                   	ret
 828fa85:	90                   	nop

```

```c
// StreamPool::~StreamPool @ 0x828fa20

/* StreamPool::~StreamPool() */

void __thiscall StreamPool::~StreamPool(StreamPool *this)

{
  DynamicPool<Stream> *this_00;
  
  if (*(int *)(this + 0x18) != 0) {
    this_00 = *(DynamicPool<Stream> **)(this + 0x18);
    if (this_00 != (DynamicPool<Stream> *)0x0) {
                    /* try { // try from 0828fa3f to 0828fa43 has its CatchHandler @ 0828fa58 */
      DynamicPool<Stream>::~DynamicPool(this_00);
      operator_delete(this_00);
    }
    *(undefined4 *)(this + 0x18) = 0;
  }
  Mutex::~Mutex((Mutex *)this);
  return;
}

```

