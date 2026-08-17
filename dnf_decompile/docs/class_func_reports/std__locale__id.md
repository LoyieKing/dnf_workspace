# std__locale__id

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## _M_id

```asm
// === 086dadb0 std::locale::id::_M_id  [0x086dadb0-0x86dadef] ===
 86dadb0:	55                   	push   %ebp
 86dadb1:	89 e5                	mov    %esp,%ebp
 86dadb3:	8b 55 08             	mov    0x8(%ebp),%edx
 86dadb6:	8b 02                	mov    (%edx),%eax
 86dadb8:	85 c0                	test   %eax,%eax
 86dadba:	75 1b                	jne    86dadd7 <_ZNKSt6locale2id5_M_idEv+0x27>
 86dadbc:	b8 60 e5 07 08       	mov    $0x807e560,%eax
 86dadc1:	85 c0                	test   %eax,%eax
 86dadc3:	74 17                	je     86daddc <_ZNKSt6locale2id5_M_idEv+0x2c>
 86dadc5:	b8 01 00 00 00       	mov    $0x1,%eax
 86dadca:	f0 0f c1 05 60 bd 48 	lock xadd %eax,0x948bd60
 86dadd1:	09 
 86dadd2:	83 c0 01             	add    $0x1,%eax
 86dadd5:	89 02                	mov    %eax,(%edx)
 86dadd7:	83 e8 01             	sub    $0x1,%eax
 86dadda:	5d                   	pop    %ebp
 86daddb:	c3                   	ret
 86daddc:	a1 60 bd 48 09       	mov    0x948bd60,%eax
 86dade1:	83 c0 01             	add    $0x1,%eax
 86dade4:	a3 60 bd 48 09       	mov    %eax,0x948bd60
 86dade9:	eb ea                	jmp    86dadd5 <_ZNKSt6locale2id5_M_idEv+0x25>
 86dadeb:	90                   	nop
 86dadec:	90                   	nop
 86daded:	90                   	nop
 86dadee:	90                   	nop
 86dadef:	90                   	nop

```

```c
// std::locale::id::_M_id @ 0x86dadb0

/* WARNING: Removing unreachable block (ram,0x086daddc) */
/* std::locale::id::_M_id() const */

int __thiscall std::locale::id::_M_id(id *this)

{
  size_t sVar1;
  
  sVar1 = this->_M_index;
  if (sVar1 == 0) {
    LOCK();
    UNLOCK();
    sVar1 = _S_refcount + 1;
    _S_refcount = _S_refcount + 1;
    this->_M_index = sVar1;
  }
  return sVar1 - 1;
}

```

