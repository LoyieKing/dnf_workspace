# ChattingEmoticonBase

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## AddPremiumIndex

```asm
// === 080e5dde ChattingEmoticonBase::AddPremiumIndex  [0x080e5dde-0x80e5e4d] ===
 80e5dde:	55                   	push   %ebp
 80e5ddf:	89 e5                	mov    %esp,%ebp
 80e5de1:	83 ec 38             	sub    $0x38,%esp
 80e5de4:	8b 45 0c             	mov    0xc(%ebp),%eax
 80e5de7:	3d bf 98 28 00       	cmp    $0x2898bf,%eax
 80e5dec:	7c 5e                	jl     80e5e4c <_ZN20ChattingEmoticonBase15AddPremiumIndexEi+0x6e>
 80e5dee:	3d c0 98 28 00       	cmp    $0x2898c0,%eax
 80e5df3:	7e 09                	jle    80e5dfe <_ZN20ChattingEmoticonBase15AddPremiumIndexEi+0x20>
 80e5df5:	3d c2 98 28 00       	cmp    $0x2898c2,%eax
 80e5dfa:	7f 50                	jg     80e5e4c <_ZN20ChattingEmoticonBase15AddPremiumIndexEi+0x6e>
 80e5dfc:	eb 28                	jmp    80e5e26 <_ZN20ChattingEmoticonBase15AddPremiumIndexEi+0x48>
 80e5dfe:	c7 45 e8 53 00 00 00 	movl   $0x53,-0x18(%ebp)
 80e5e05:	8b 45 08             	mov    0x8(%ebp),%eax
 80e5e08:	8d 48 08             	lea    0x8(%eax),%ecx
 80e5e0b:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80e5e0e:	8d 55 e8             	lea    -0x18(%ebp),%edx
 80e5e11:	89 54 24 08          	mov    %edx,0x8(%esp)
 80e5e15:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 80e5e19:	89 04 24             	mov    %eax,(%esp)
 80e5e1c:	e8 a5 47 ff ff       	call   80da5c6 <_ZNSt3setIiSt4lessIiESaIiEE6insertERKi>
 80e5e21:	83 ec 04             	sub    $0x4,%esp
 80e5e24:	eb 26                	jmp    80e5e4c <_ZN20ChattingEmoticonBase15AddPremiumIndexEi+0x6e>
 80e5e26:	c7 45 f4 57 00 00 00 	movl   $0x57,-0xc(%ebp)
 80e5e2d:	8b 45 08             	mov    0x8(%ebp),%eax
 80e5e30:	8d 48 08             	lea    0x8(%eax),%ecx
 80e5e33:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80e5e36:	8d 55 f4             	lea    -0xc(%ebp),%edx
 80e5e39:	89 54 24 08          	mov    %edx,0x8(%esp)
 80e5e3d:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 80e5e41:	89 04 24             	mov    %eax,(%esp)
 80e5e44:	e8 7d 47 ff ff       	call   80da5c6 <_ZNSt3setIiSt4lessIiESaIiEE6insertERKi>
 80e5e49:	83 ec 04             	sub    $0x4,%esp
 80e5e4c:	c9                   	leave
 80e5e4d:	c3                   	ret

```

```c
// ChattingEmoticonBase::AddPremiumIndex @ 0x80e5dde

/* ChattingEmoticonBase::AddPremiumIndex(int) */

void __thiscall ChattingEmoticonBase::AddPremiumIndex(ChattingEmoticonBase *this,int param_1)

{
  int local_24 [2];
  undefined4 local_1c;
  int local_18 [2];
  undefined4 local_10;
  
  if (0x2898be < param_1) {
    if (param_1 < 0x2898c1) {
      local_1c = 0x53;
      std::set<int,std::less<int>,std::allocator<int>>::insert(local_24);
    }
    else if (param_1 < 0x2898c3) {
      local_10 = 0x57;
      std::set<int,std::less<int>,std::allocator<int>>::insert(local_18);
    }
  }
  return;
}

```

---

## ChattingEmoticonBase

```asm
// === 080e5c2a ChattingEmoticonBase::ChattingEmoticonBase  [0x080e5c2a-0x80e5c53] ===
 80e5c2a:	55                   	push   %ebp
 80e5c2b:	89 e5                	mov    %esp,%ebp
 80e5c2d:	83 ec 18             	sub    $0x18,%esp
 80e5c30:	8b 45 08             	mov    0x8(%ebp),%eax
 80e5c33:	c7 00 48 07 b3 08    	movl   $0x8b30748,(%eax)
 80e5c39:	8b 45 08             	mov    0x8(%ebp),%eax
 80e5c3c:	83 c0 08             	add    $0x8,%eax
 80e5c3f:	89 04 24             	mov    %eax,(%esp)
 80e5c42:	e8 95 47 ff ff       	call   80da3dc <_ZNSt3setIiSt4lessIiESaIiEEC1Ev>
 80e5c47:	8b 45 08             	mov    0x8(%ebp),%eax
 80e5c4a:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 80e5c51:	c9                   	leave
 80e5c52:	c3                   	ret
 80e5c53:	90                   	nop

```

```c
// ChattingEmoticonBase::ChattingEmoticonBase @ 0x80e5c2a

/* ChattingEmoticonBase::ChattingEmoticonBase() */

void __thiscall ChattingEmoticonBase::ChattingEmoticonBase(ChattingEmoticonBase *this)

{
  *(undefined ***)this = &PTR__ChattingEmoticonBase_08b30748;
  std::set<int,std::less<int>,std::allocator<int>>::set
            ((set<int,std::less<int>,std::allocator<int>> *)(this + 8));
  *(undefined4 *)(this + 4) = 0;
  return;
}

```

---

## ~ChattingEmoticonBase

```asm
// === 080e5c54 ChattingEmoticonBase::~ChattingEmoticonBase  [0x080e5c54-0x80e5c87] ===
 80e5c54:	55                   	push   %ebp
 80e5c55:	89 e5                	mov    %esp,%ebp
 80e5c57:	83 ec 18             	sub    $0x18,%esp
 80e5c5a:	8b 45 08             	mov    0x8(%ebp),%eax
 80e5c5d:	c7 00 48 07 b3 08    	movl   $0x8b30748,(%eax)
 80e5c63:	8b 45 08             	mov    0x8(%ebp),%eax
 80e5c66:	83 c0 08             	add    $0x8,%eax
 80e5c69:	89 04 24             	mov    %eax,(%esp)
 80e5c6c:	e8 c3 42 ff ff       	call   80d9f34 <_ZNSt3setIiSt4lessIiESaIiEED1Ev>
 80e5c71:	b8 00 00 00 00       	mov    $0x0,%eax
 80e5c76:	84 c0                	test   %al,%al
 80e5c78:	74 0b                	je     80e5c85 <_ZN20ChattingEmoticonBaseD1Ev+0x31>
 80e5c7a:	8b 45 08             	mov    0x8(%ebp),%eax
 80e5c7d:	89 04 24             	mov    %eax,(%esp)
 80e5c80:	e8 6b e8 63 00       	call   87244f0 <_ZdlPv>
 80e5c85:	c9                   	leave
 80e5c86:	c3                   	ret
 80e5c87:	90                   	nop

```

```c
// ChattingEmoticonBase::~ChattingEmoticonBase @ 0x80e5c54

/* WARNING: Removing unreachable block (ram,0x080e5c7a) */
/* ChattingEmoticonBase::~ChattingEmoticonBase() */

void __thiscall ChattingEmoticonBase::~ChattingEmoticonBase(ChattingEmoticonBase *this)

{
  *(undefined ***)this = &PTR__ChattingEmoticonBase_08b30748;
  std::set<int,std::less<int>,std::allocator<int>>::~set
            ((set<int,std::less<int>,std::allocator<int>> *)(this + 8));
  return;
}

```

---

## ~ChattingEmoticonBase_080e5c88

```asm
// === 080e5c88 ChattingEmoticonBase::~ChattingEmoticonBase  [0x080e5c88-0x80e5ca5] ===
 80e5c88:	55                   	push   %ebp
 80e5c89:	89 e5                	mov    %esp,%ebp
 80e5c8b:	83 ec 18             	sub    $0x18,%esp
 80e5c8e:	8b 45 08             	mov    0x8(%ebp),%eax
 80e5c91:	89 04 24             	mov    %eax,(%esp)
 80e5c94:	e8 bb ff ff ff       	call   80e5c54 <_ZN20ChattingEmoticonBaseD1Ev>
 80e5c99:	8b 45 08             	mov    0x8(%ebp),%eax
 80e5c9c:	89 04 24             	mov    %eax,(%esp)
 80e5c9f:	e8 4c e8 63 00       	call   87244f0 <_ZdlPv>
 80e5ca4:	c9                   	leave
 80e5ca5:	c3                   	ret

```

```c
// ChattingEmoticonBase::~ChattingEmoticonBase @ 0x80e5c88

/* ChattingEmoticonBase::~ChattingEmoticonBase() */

void __thiscall ChattingEmoticonBase::~ChattingEmoticonBase(ChattingEmoticonBase *this)

{
  ~ChattingEmoticonBase(this);
  operator_delete(this);
  return;
}

```

