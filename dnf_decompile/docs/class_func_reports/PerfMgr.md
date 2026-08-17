# PerfMgr

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## clear

```asm
// === 085c3c6a PerfMgr::clear  [0x085c3c6a-0x85c3c96] ===
 85c3c6a:	55                   	push   %ebp
 85c3c6b:	89 e5                	mov    %esp,%ebp
 85c3c6d:	83 ec 10             	sub    $0x10,%esp
 85c3c70:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 85c3c77:	eb 11                	jmp    85c3c8a <_ZN7PerfMgr5clearEv+0x20>
 85c3c79:	8b 55 fc             	mov    -0x4(%ebp),%edx
 85c3c7c:	8b 45 08             	mov    0x8(%ebp),%eax
 85c3c7f:	c7 04 90 00 00 00 00 	movl   $0x0,(%eax,%edx,4)
 85c3c86:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 85c3c8a:	83 7d fc 03          	cmpl   $0x3,-0x4(%ebp)
 85c3c8e:	0f 9e c0             	setle  %al
 85c3c91:	84 c0                	test   %al,%al
 85c3c93:	75 e4                	jne    85c3c79 <_ZN7PerfMgr5clearEv+0xf>
 85c3c95:	c9                   	leave
 85c3c96:	c3                   	ret

```

```c
// PerfMgr::clear @ 0x85c3c6a

/* PerfMgr::clear() */

void __thiscall PerfMgr::clear(PerfMgr *this)

{
  int local_8;
  
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    *(undefined4 *)(this + local_8 * 4) = 0;
  }
  return;
}

```

---

## get

```asm
// === 085c3c5c PerfMgr::get  [0x085c3c5c-0x85c3c69] ===
 85c3c5c:	55                   	push   %ebp
 85c3c5d:	89 e5                	mov    %esp,%ebp
 85c3c5f:	8b 55 0c             	mov    0xc(%ebp),%edx
 85c3c62:	8b 45 08             	mov    0x8(%ebp),%eax
 85c3c65:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85c3c68:	5d                   	pop    %ebp
 85c3c69:	c3                   	ret

```

```c
// PerfMgr::get @ 0x85c3c5c

/* PerfMgr::get(PerfMgr::TASK_IDX) */

undefined4 __thiscall PerfMgr::get(PerfMgr *this,int param_2)

{
  return *(undefined4 *)(this + param_2 * 4);
}

```

---

## inc

```asm
// === 085c3c44 PerfMgr::inc  [0x085c3c44-0x85c3c5b] ===
 85c3c44:	55                   	push   %ebp
 85c3c45:	89 e5                	mov    %esp,%ebp
 85c3c47:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c3c4a:	8b 55 08             	mov    0x8(%ebp),%edx
 85c3c4d:	8b 14 82             	mov    (%edx,%eax,4),%edx
 85c3c50:	8d 4a 01             	lea    0x1(%edx),%ecx
 85c3c53:	8b 55 08             	mov    0x8(%ebp),%edx
 85c3c56:	89 0c 82             	mov    %ecx,(%edx,%eax,4)
 85c3c59:	5d                   	pop    %ebp
 85c3c5a:	c3                   	ret
 85c3c5b:	90                   	nop

```

```c
// PerfMgr::inc @ 0x85c3c44

/* PerfMgr::inc(PerfMgr::TASK_IDX) */

void __thiscall PerfMgr::inc(PerfMgr *this,int param_2)

{
  *(int *)(this + param_2 * 4) = *(int *)(this + param_2 * 4) + 1;
  return;
}

```

