# yaSSL__X509_NAME

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## GetEntry

```asm
// === 087523e0 yaSSL::X509_NAME::GetEntry  [0x087523e0-0x87524af] ===
 87523e0:	55                   	push   %ebp
 87523e1:	89 e5                	mov    %esp,%ebp
 87523e3:	83 ec 28             	sub    $0x28,%esp
 87523e6:	89 75 f8             	mov    %esi,-0x8(%ebp)
 87523e9:	8b 75 0c             	mov    0xc(%ebp),%esi
 87523ec:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 87523ef:	e8 04 0a fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87523f4:	81 c3 a4 a7 c1 00    	add    $0xc1a7a4,%ebx
 87523fa:	89 7d fc             	mov    %edi,-0x4(%ebp)
 87523fd:	8b 7d 08             	mov    0x8(%ebp),%edi
 8752400:	85 f6                	test   %esi,%esi
 8752402:	79 14                	jns    8752418 <_ZN5yaSSL9X509_NAME8GetEntryEi+0x38>
 8752404:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8752407:	31 c0                	xor    %eax,%eax
 8752409:	8b 75 f8             	mov    -0x8(%ebp),%esi
 875240c:	8b 7d fc             	mov    -0x4(%ebp),%edi
 875240f:	89 ec                	mov    %ebp,%esp
 8752411:	5d                   	pop    %ebp
 8752412:	c3                   	ret
 8752413:	90                   	nop
 8752414:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8752418:	3b 77 04             	cmp    0x4(%edi),%esi
 875241b:	7d e7                	jge    8752404 <_ZN5yaSSL9X509_NAME8GetEntryEi+0x24>
 875241d:	8b 47 10             	mov    0x10(%edi),%eax
 8752420:	85 c0                	test   %eax,%eax
 8752422:	74 0d                	je     8752431 <_ZN5yaSSL9X509_NAME8GetEntryEi+0x51>
 8752424:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8752429:	89 04 24             	mov    %eax,(%esp)
 875242c:	e8 bf e4 ff ff       	call   87508f0 <_ZdaPvN5yaSSL5new_tE>
 8752431:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8752436:	8b 47 04             	mov    0x4(%edi),%eax
 8752439:	89 04 24             	mov    %eax,(%esp)
 875243c:	e8 0f ff ff ff       	call   8752350 <_ZnajN5yaSSL5new_tE>
 8752441:	8b 57 04             	mov    0x4(%edi),%edx
 8752444:	8b 0f                	mov    (%edi),%ecx
 8752446:	29 f2                	sub    %esi,%edx
 8752448:	01 f1                	add    %esi,%ecx
 875244a:	89 47 10             	mov    %eax,0x10(%edi)
 875244d:	89 54 24 08          	mov    %edx,0x8(%esp)
 8752451:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8752455:	89 04 24             	mov    %eax,(%esp)
 8752458:	e8 43 b4 92 ff       	call   807d8a0 <memcpy@plt>
 875245d:	8b 47 04             	mov    0x4(%edi),%eax
 8752460:	8b 4f 10             	mov    0x10(%edi),%ecx
 8752463:	89 c2                	mov    %eax,%edx
 8752465:	29 f2                	sub    %esi,%edx
 8752467:	80 7c 11 ff 00       	cmpb   $0x0,-0x1(%ecx,%edx,1)
 875246c:	74 2a                	je     8752498 <_ZN5yaSSL9X509_NAME8GetEntryEi+0xb8>
 875246e:	c6 04 11 00          	movb   $0x0,(%ecx,%edx,1)
 8752472:	8b 47 04             	mov    0x4(%edi),%eax
 8752475:	29 f0                	sub    %esi,%eax
 8752477:	89 47 0c             	mov    %eax,0xc(%edi)
 875247a:	c7 47 08 00 00 00 00 	movl   $0x0,0x8(%edi)
 8752481:	8d 47 08             	lea    0x8(%edi),%eax
 8752484:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8752487:	8b 75 f8             	mov    -0x8(%ebp),%esi
 875248a:	8b 7d fc             	mov    -0x4(%ebp),%edi
 875248d:	89 ec                	mov    %ebp,%esp
 875248f:	5d                   	pop    %ebp
 8752490:	c3                   	ret
 8752491:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8752498:	83 e8 01             	sub    $0x1,%eax
 875249b:	29 f0                	sub    %esi,%eax
 875249d:	89 47 0c             	mov    %eax,0xc(%edi)
 87524a0:	eb d8                	jmp    875247a <_ZN5yaSSL9X509_NAME8GetEntryEi+0x9a>
 87524a2:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87524a9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::X509_NAME::GetEntry @ 0x87523e0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::X509_NAME::GetEntry(int) */

X509_NAME * __thiscall yaSSL::X509_NAME::GetEntry(X509_NAME *this,int param_1)

{
  void *__dest;
  int iVar1;
  uint in_stack_ffffffd8;
  
  if ((-1 < param_1) && (param_1 < *(int *)(this + 4))) {
    if (*(int *)(this + 0x10) != 0) {
      in_stack_ffffffd8 = in_stack_ffffffd8 & 0xffffff00;
      operator_delete__(*(int *)(this + 0x10),in_stack_ffffffd8);
    }
    __dest = operator_new__(*(undefined4 *)(this + 4),in_stack_ffffffd8 & 0xffffff00);
    *(void **)(this + 0x10) = __dest;
    memcpy(__dest,(void *)(*(int *)this + param_1),*(int *)(this + 4) - param_1);
    iVar1 = *(int *)(this + 4) - param_1;
    if (*(char *)(*(int *)(this + 0x10) + -1 + iVar1) == '\0') {
      *(int *)(this + 0xc) = (*(int *)(this + 4) + -1) - param_1;
    }
    else {
      *(undefined1 *)(*(int *)(this + 0x10) + iVar1) = 0;
      *(int *)(this + 0xc) = *(int *)(this + 4) - param_1;
    }
    *(undefined4 *)(this + 8) = 0;
    return this + 8;
  }
  return (X509_NAME *)0x0;
}

```

---

## GetLength

```asm
// === 0874eff0 yaSSL::X509_NAME::GetLength  [0x0874eff0-0x874efff] ===
 874eff0:	55                   	push   %ebp
 874eff1:	89 e5                	mov    %esp,%ebp
 874eff3:	8b 45 08             	mov    0x8(%ebp),%eax
 874eff6:	5d                   	pop    %ebp
 874eff7:	8b 40 04             	mov    0x4(%eax),%eax
 874effa:	c3                   	ret
 874effb:	90                   	nop
 874effc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::X509_NAME::GetLength @ 0x874eff0

/* yaSSL::X509_NAME::GetLength() const */

undefined4 __thiscall yaSSL::X509_NAME::GetLength(X509_NAME *this)

{
  return *(undefined4 *)(this + 4);
}

```

---

## GetName

```asm
// === 0874efe0 yaSSL::X509_NAME::GetName  [0x0874efe0-0x874efef] ===
 874efe0:	55                   	push   %ebp
 874efe1:	89 e5                	mov    %esp,%ebp
 874efe3:	8b 45 08             	mov    0x8(%ebp),%eax
 874efe6:	5d                   	pop    %ebp
 874efe7:	8b 00                	mov    (%eax),%eax
 874efe9:	c3                   	ret
 874efea:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::X509_NAME::GetName @ 0x874efe0

/* yaSSL::X509_NAME::GetName() const */

undefined4 __thiscall yaSSL::X509_NAME::GetName(X509_NAME *this)

{
  return *(undefined4 *)this;
}

```

---

## X509_NAME

```asm
// === 087524b0 yaSSL::X509_NAME::X509_NAME  [0x087524b0-0x875251f] ===
 87524b0:	55                   	push   %ebp
 87524b1:	89 e5                	mov    %esp,%ebp
 87524b3:	83 ec 28             	sub    $0x28,%esp
 87524b6:	89 7d fc             	mov    %edi,-0x4(%ebp)
 87524b9:	8b 7d 10             	mov    0x10(%ebp),%edi
 87524bc:	89 75 f8             	mov    %esi,-0x8(%ebp)
 87524bf:	8b 75 08             	mov    0x8(%ebp),%esi
 87524c2:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 87524c5:	e8 2e 09 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87524ca:	81 c3 ce a6 c1 00    	add    $0xc1a6ce,%ebx
 87524d0:	85 ff                	test   %edi,%edi
 87524d2:	c7 06 00 00 00 00    	movl   $0x0,(%esi)
 87524d8:	89 7e 04             	mov    %edi,0x4(%esi)
 87524db:	74 22                	je     87524ff <_ZN5yaSSL9X509_NAMEC1EPKcj+0x4f>
 87524dd:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87524e2:	89 3c 24             	mov    %edi,(%esp)
 87524e5:	e8 66 fe ff ff       	call   8752350 <_ZnajN5yaSSL5new_tE>
 87524ea:	8b 55 0c             	mov    0xc(%ebp),%edx
 87524ed:	89 06                	mov    %eax,(%esi)
 87524ef:	89 7c 24 08          	mov    %edi,0x8(%esp)
 87524f3:	89 54 24 04          	mov    %edx,0x4(%esp)
 87524f7:	89 04 24             	mov    %eax,(%esp)
 87524fa:	e8 a1 b3 92 ff       	call   807d8a0 <memcpy@plt>
 87524ff:	c7 46 10 00 00 00 00 	movl   $0x0,0x10(%esi)
 8752506:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8752509:	8b 75 f8             	mov    -0x8(%ebp),%esi
 875250c:	8b 7d fc             	mov    -0x4(%ebp),%edi
 875250f:	89 ec                	mov    %ebp,%esp
 8752511:	5d                   	pop    %ebp
 8752512:	c3                   	ret
 8752513:	90                   	nop
 8752514:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 875251a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// yaSSL::X509_NAME::X509_NAME @ 0x87524b0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::X509_NAME::X509_NAME(char const*, unsigned int) */

void __thiscall yaSSL::X509_NAME::X509_NAME(X509_NAME *this,char *param_1,uint param_2)

{
  void *__dest;
  uint in_stack_ffffffd8;
  
  *(undefined4 *)this = 0;
  *(uint *)(this + 4) = param_2;
  if (param_2 != 0) {
    __dest = operator_new__(param_2,in_stack_ffffffd8 & 0xffffff00);
    *(void **)this = __dest;
    memcpy(__dest,param_1,param_2);
  }
  *(undefined4 *)(this + 0x10) = 0;
  return;
}

```

---

## ~X509_NAME

```asm
// === 08750c50 yaSSL::X509_NAME::~X509_NAME  [0x08750c50-0x8750c9f] ===
 8750c50:	55                   	push   %ebp
 8750c51:	89 e5                	mov    %esp,%ebp
 8750c53:	83 ec 18             	sub    $0x18,%esp
 8750c56:	89 75 fc             	mov    %esi,-0x4(%ebp)
 8750c59:	8b 75 08             	mov    0x8(%ebp),%esi
 8750c5c:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8750c5f:	e8 94 21 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8750c64:	81 c3 34 bf c1 00    	add    $0xc1bf34,%ebx
 8750c6a:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8750c6f:	8b 06                	mov    (%esi),%eax
 8750c71:	89 04 24             	mov    %eax,(%esp)
 8750c74:	e8 77 fc ff ff       	call   87508f0 <_ZdaPvN5yaSSL5new_tE>
 8750c79:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8750c7e:	8b 46 10             	mov    0x10(%esi),%eax
 8750c81:	89 04 24             	mov    %eax,(%esp)
 8750c84:	e8 67 fc ff ff       	call   87508f0 <_ZdaPvN5yaSSL5new_tE>
 8750c89:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8750c8c:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8750c8f:	89 ec                	mov    %ebp,%esp
 8750c91:	5d                   	pop    %ebp
 8750c92:	c3                   	ret
 8750c93:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8750c99:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::X509_NAME::~X509_NAME @ 0x8750c50

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::X509_NAME::~X509_NAME() */

void __thiscall yaSSL::X509_NAME::~X509_NAME(X509_NAME *this)

{
  operator_delete__(*(undefined4 *)this,0);
  operator_delete__(*(undefined4 *)(this + 0x10),0);
  return;
}

```

