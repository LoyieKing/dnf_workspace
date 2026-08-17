# ICryptoGraph

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## GetApiType

```asm
// === 0809df82 ICryptoGraph::GetApiType  [0x0809df82-0x809df8f] ===
 809df82:	55                   	push   %ebp
 809df83:	89 e5                	mov    %esp,%ebp
 809df85:	8b 45 08             	mov    0x8(%ebp),%eax
 809df88:	8b 40 04             	mov    0x4(%eax),%eax
 809df8b:	5d                   	pop    %ebp
 809df8c:	c3                   	ret
 809df8d:	90                   	nop
 809df8e:	90                   	nop
 809df8f:	90                   	nop

```

```c
// ICryptoGraph::GetApiType @ 0x809df82

/* ICryptoGraph::GetApiType() const */

undefined4 __thiscall ICryptoGraph::GetApiType(ICryptoGraph *this)

{
  return *(undefined4 *)(this + 4);
}

```

---

## ICryptoGraph

```asm
// === 0809def0 ICryptoGraph::ICryptoGraph  [0x0809def0-0x809df07] ===
 809def0:	55                   	push   %ebp
 809def1:	89 e5                	mov    %esp,%ebp
 809def3:	8b 45 08             	mov    0x8(%ebp),%eax
 809def6:	c7 00 08 3c b1 08    	movl   $0x8b13c08,(%eax)
 809defc:	8b 45 08             	mov    0x8(%ebp),%eax
 809deff:	8b 55 0c             	mov    0xc(%ebp),%edx
 809df02:	89 50 04             	mov    %edx,0x4(%eax)
 809df05:	5d                   	pop    %ebp
 809df06:	c3                   	ret
 809df07:	90                   	nop

```

```c
// ICryptoGraph::ICryptoGraph @ 0x809def0

/* ICryptoGraph::ICryptoGraph(CRYPTO_GRAPH_TYPE) */

void __thiscall ICryptoGraph::ICryptoGraph(ICryptoGraph *this,undefined4 param_2)

{
  *(undefined ***)this = &PTR__ICryptoGraph_08b13c08;
  *(undefined4 *)(this + 4) = param_2;
  return;
}

```

---

## ICryptoGraph_0809df4c

```asm
// === 0809df4c ICryptoGraph::ICryptoGraph  [0x0809df4c-0x809df65] ===
 809df4c:	55                   	push   %ebp
 809df4d:	89 e5                	mov    %esp,%ebp
 809df4f:	8b 45 08             	mov    0x8(%ebp),%eax
 809df52:	c7 00 08 3c b1 08    	movl   $0x8b13c08,(%eax)
 809df58:	8b 45 0c             	mov    0xc(%ebp),%eax
 809df5b:	8b 50 04             	mov    0x4(%eax),%edx
 809df5e:	8b 45 08             	mov    0x8(%ebp),%eax
 809df61:	89 50 04             	mov    %edx,0x4(%eax)
 809df64:	5d                   	pop    %ebp
 809df65:	c3                   	ret

```

```c
// ICryptoGraph::ICryptoGraph @ 0x809df4c

/* ICryptoGraph::ICryptoGraph(ICryptoGraph const&) */

void __thiscall ICryptoGraph::ICryptoGraph(ICryptoGraph *this,ICryptoGraph *param_1)

{
  *(undefined ***)this = &PTR__ICryptoGraph_08b13c08;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  return;
}

```

---

## operator=

```asm
// === 0809df66 ICryptoGraph::operator=  [0x0809df66-0x809df81] ===
 809df66:	55                   	push   %ebp
 809df67:	89 e5                	mov    %esp,%ebp
 809df69:	8b 45 08             	mov    0x8(%ebp),%eax
 809df6c:	3b 45 0c             	cmp    0xc(%ebp),%eax
 809df6f:	74 0c                	je     809df7d <_ZN12ICryptoGraphaSERKS_+0x17>
 809df71:	8b 45 0c             	mov    0xc(%ebp),%eax
 809df74:	8b 50 04             	mov    0x4(%eax),%edx
 809df77:	8b 45 08             	mov    0x8(%ebp),%eax
 809df7a:	89 50 04             	mov    %edx,0x4(%eax)
 809df7d:	8b 45 08             	mov    0x8(%ebp),%eax
 809df80:	5d                   	pop    %ebp
 809df81:	c3                   	ret

```

```c
// ICryptoGraph::operator= @ 0x809df66

/* ICryptoGraph::TEMPNAMEPLACEHOLDERVALUE(ICryptoGraph const&) */

ICryptoGraph * __thiscall ICryptoGraph::operator=(ICryptoGraph *this,ICryptoGraph *param_1)

{
  if (this != param_1) {
    *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  }
  return this;
}

```

---

## ~ICryptoGraph

```asm
// === 0809df08 ICryptoGraph::~ICryptoGraph  [0x0809df08-0x809df2d] ===
 809df08:	55                   	push   %ebp
 809df09:	89 e5                	mov    %esp,%ebp
 809df0b:	83 ec 18             	sub    $0x18,%esp
 809df0e:	8b 45 08             	mov    0x8(%ebp),%eax
 809df11:	c7 00 08 3c b1 08    	movl   $0x8b13c08,(%eax)
 809df17:	b8 00 00 00 00       	mov    $0x0,%eax
 809df1c:	84 c0                	test   %al,%al
 809df1e:	74 0b                	je     809df2b <_ZN12ICryptoGraphD1Ev+0x23>
 809df20:	8b 45 08             	mov    0x8(%ebp),%eax
 809df23:	89 04 24             	mov    %eax,(%esp)
 809df26:	e8 c5 65 68 00       	call   87244f0 <_ZdlPv>
 809df2b:	c9                   	leave
 809df2c:	c3                   	ret
 809df2d:	90                   	nop

```

```c
// ICryptoGraph::~ICryptoGraph @ 0x809df08

/* WARNING: Removing unreachable block (ram,0x0809df20) */
/* ICryptoGraph::~ICryptoGraph() */

void __thiscall ICryptoGraph::~ICryptoGraph(ICryptoGraph *this)

{
  *(undefined ***)this = &PTR__ICryptoGraph_08b13c08;
  return;
}

```

---

## ~ICryptoGraph_0809df2e

```asm
// === 0809df2e ICryptoGraph::~ICryptoGraph  [0x0809df2e-0x809df4b] ===
 809df2e:	55                   	push   %ebp
 809df2f:	89 e5                	mov    %esp,%ebp
 809df31:	83 ec 18             	sub    $0x18,%esp
 809df34:	8b 45 08             	mov    0x8(%ebp),%eax
 809df37:	89 04 24             	mov    %eax,(%esp)
 809df3a:	e8 c9 ff ff ff       	call   809df08 <_ZN12ICryptoGraphD1Ev>
 809df3f:	8b 45 08             	mov    0x8(%ebp),%eax
 809df42:	89 04 24             	mov    %eax,(%esp)
 809df45:	e8 a6 65 68 00       	call   87244f0 <_ZdlPv>
 809df4a:	c9                   	leave
 809df4b:	c3                   	ret

```

```c
// ICryptoGraph::~ICryptoGraph @ 0x809df2e

/* ICryptoGraph::~ICryptoGraph() */

void __thiscall ICryptoGraph::~ICryptoGraph(ICryptoGraph *this)

{
  ~ICryptoGraph(this);
  operator_delete(this);
  return;
}

```

