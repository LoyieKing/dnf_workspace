# DisjointScript__._381

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## ~._381

```asm
// === 0834809e DisjointScript::._381::~._381  [0x0834809e-0x83480b3] ===
 834809e:	55                   	push   %ebp
 834809f:	89 e5                	mov    %esp,%ebp
 83480a1:	83 ec 18             	sub    $0x18,%esp
 83480a4:	8b 45 08             	mov    0x8(%ebp),%eax
 83480a7:	83 c0 04             	add    $0x4,%eax
 83480aa:	89 04 24             	mov    %eax,(%esp)
 83480ad:	e8 28 bd d3 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 83480b2:	c9                   	leave
 83480b3:	c3                   	ret

```

```c
// DisjointScript::._381::~._381 @ 0x834809e

/* DisjointScript::._381::~._381() */

void __thiscall DisjointScript::._381::~__381(__381 *this)

{
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 4));
  return;
}

```

