# _SDC

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## isObjectType

```asm
// === 080950e8 _SDC::isObjectType  [0x080950e8-0x80950fa] ===
 80950e8:	55                   	push   %ebp
 80950e9:	89 e5                	mov    %esp,%ebp
 80950eb:	8b 45 0c             	mov    0xc(%ebp),%eax
 80950ee:	8b 55 08             	mov    0x8(%ebp),%edx
 80950f1:	21 d0                	and    %edx,%eax
 80950f3:	3b 45 0c             	cmp    0xc(%ebp),%eax
 80950f6:	0f 94 c0             	sete   %al
 80950f9:	5d                   	pop    %ebp
 80950fa:	c3                   	ret

```

```c
// _SDC::isObjectType @ 0x80950e8

/* _SDC::isObjectType(int, int) */

undefined4 _SDC::isObjectType(int param_1,int param_2)

{
  return CONCAT31((int3)((uint)(param_2 & param_1) >> 8),(param_2 & param_1) == param_2);
}

```

---

## isSyncActiveStatus

```asm
// === 0808d074 _SDC::isSyncActiveStatus  [0x0808d074-0x808d0a5] ===
 808d074:	55                   	push   %ebp
 808d075:	89 e5                	mov    %esp,%ebp
 808d077:	53                   	push   %ebx
 808d078:	83 7d 08 0b          	cmpl   $0xb,0x8(%ebp)
 808d07c:	77 20                	ja     808d09e <_ZN4_SDC18isSyncActiveStatusEi+0x2a>
 808d07e:	8b 45 08             	mov    0x8(%ebp),%eax
 808d081:	ba 01 00 00 00       	mov    $0x1,%edx
 808d086:	89 d3                	mov    %edx,%ebx
 808d088:	89 c1                	mov    %eax,%ecx
 808d08a:	d3 e3                	shl    %cl,%ebx
 808d08c:	89 d8                	mov    %ebx,%eax
 808d08e:	25 c4 0a 00 00       	and    $0xac4,%eax
 808d093:	85 c0                	test   %eax,%eax
 808d095:	74 07                	je     808d09e <_ZN4_SDC18isSyncActiveStatusEi+0x2a>
 808d097:	b8 01 00 00 00       	mov    $0x1,%eax
 808d09c:	eb 05                	jmp    808d0a3 <_ZN4_SDC18isSyncActiveStatusEi+0x2f>
 808d09e:	b8 00 00 00 00       	mov    $0x0,%eax
 808d0a3:	5b                   	pop    %ebx
 808d0a4:	5d                   	pop    %ebp
 808d0a5:	c3                   	ret

```

```c
// _SDC::isSyncActiveStatus @ 0x808d074

/* _SDC::isSyncActiveStatus(int) */

undefined4 _SDC::isSyncActiveStatus(int param_1)

{
  undefined4 uVar1;
  
  if (((uint)param_1 < 0xc) && ((1 << ((byte)param_1 & 0x1f) & 0xac4U) != 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

