# CStreamGuard

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## ~CStreamGuard

```asm
// === 0861c8d2 CStreamGuard::~CStreamGuard  [0x0861c8d2-0x861c958] ===
 861c8d2:	55                   	push   %ebp
 861c8d3:	89 e5                	mov    %esp,%ebp
 861c8d5:	83 ec 18             	sub    $0x18,%esp
 861c8d8:	8b 45 08             	mov    0x8(%ebp),%eax
 861c8db:	8b 00                	mov    (%eax),%eax
 861c8dd:	85 c0                	test   %eax,%eax
 861c8df:	74 76                	je     861c957 <_ZN12CStreamGuardD1Ev+0x85>
 861c8e1:	8b 45 08             	mov    0x8(%ebp),%eax
 861c8e4:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 861c8e8:	84 c0                	test   %al,%al
 861c8ea:	74 6b                	je     861c957 <_ZN12CStreamGuardD1Ev+0x85>
 861c8ec:	8b 45 08             	mov    0x8(%ebp),%eax
 861c8ef:	8b 00                	mov    (%eax),%eax
 861c8f1:	0f b6 40 24          	movzbl 0x24(%eax),%eax
 861c8f5:	84 c0                	test   %al,%al
 861c8f7:	74 5e                	je     861c957 <_ZN12CStreamGuardD1Ev+0x85>
 861c8f9:	8b 45 08             	mov    0x8(%ebp),%eax
 861c8fc:	8b 00                	mov    (%eax),%eax
 861c8fe:	8b 40 20             	mov    0x20(%eax),%eax
 861c901:	83 f8 01             	cmp    $0x1,%eax
 861c904:	74 0b                	je     861c911 <_ZN12CStreamGuardD1Ev+0x3f>
 861c906:	83 f8 02             	cmp    $0x2,%eax
 861c909:	74 36                	je     861c941 <_ZN12CStreamGuardD1Ev+0x6f>
 861c90b:	85 c0                	test   %eax,%eax
 861c90d:	74 1a                	je     861c929 <_ZN12CStreamGuardD1Ev+0x57>
 861c90f:	eb 46                	jmp    861c957 <_ZN12CStreamGuardD1Ev+0x85>
 861c911:	8b 45 08             	mov    0x8(%ebp),%eax
 861c914:	8b 10                	mov    (%eax),%edx
 861c916:	a1 a8 bd 40 09       	mov    0x940bda8,%eax
 861c91b:	89 54 24 04          	mov    %edx,0x4(%esp)
 861c91f:	89 04 24             	mov    %eax,(%esp)
 861c922:	e8 dd 36 c7 ff       	call   8290004 <_ZN15SmallStreamPool4FreeEP6Stream>
 861c927:	eb 2e                	jmp    861c957 <_ZN12CStreamGuardD1Ev+0x85>
 861c929:	8b 45 08             	mov    0x8(%ebp),%eax
 861c92c:	8b 10                	mov    (%eax),%edx
 861c92e:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 861c933:	89 54 24 04          	mov    %edx,0x4(%esp)
 861c937:	89 04 24             	mov    %eax,(%esp)
 861c93a:	e8 e9 31 c7 ff       	call   828fb28 <_ZN10StreamPool4FreeEP6Stream>
 861c93f:	eb 16                	jmp    861c957 <_ZN12CStreamGuardD1Ev+0x85>
 861c941:	8b 45 08             	mov    0x8(%ebp),%eax
 861c944:	8b 10                	mov    (%eax),%edx
 861c946:	a1 a4 bd 40 09       	mov    0x940bda4,%eax
 861c94b:	89 54 24 04          	mov    %edx,0x4(%esp)
 861c94f:	89 04 24             	mov    %eax,(%esp)
 861c952:	e8 ad 39 c7 ff       	call   8290304 <_ZN13BigStreamPool4FreeEP6Stream>
 861c957:	c9                   	leave
 861c958:	c3                   	ret

```

```c
// CStreamGuard::~CStreamGuard @ 0x861c8d2

/* CStreamGuard::~CStreamGuard() */

void __thiscall CStreamGuard::~CStreamGuard(CStreamGuard *this)

{
  int iVar1;
  
  if (((*(int *)this != 0) && (this[4] != (CStreamGuard)0x0)) &&
     (*(char *)(*(int *)this + 0x24) != '\0')) {
    iVar1 = *(int *)(*(int *)this + 0x20);
    if (iVar1 == 1) {
      SmallStreamPool::Free(GlobalData::s_small_stream_pool,*(Stream **)this);
    }
    else if (iVar1 == 2) {
      BigStreamPool::Free(GlobalData::s_big_stream_pool,*(Stream **)this);
    }
    else if (iVar1 == 0) {
      StreamPool::Free(GlobalData::s_stream_pool,*(Stream **)this);
    }
  }
  return;
}

```

