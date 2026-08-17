# combo_script_key

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## clear

```asm
// === 08a5a858 combo_script_key::clear  [0x08a5a858-0x8a5a86b] ===
 8a5a858:	55                   	push   %ebp
 8a5a859:	89 e5                	mov    %esp,%ebp
 8a5a85b:	8b 45 08             	mov    0x8(%ebp),%eax
 8a5a85e:	c6 00 0b             	movb   $0xb,(%eax)
 8a5a861:	8b 45 08             	mov    0x8(%ebp),%eax
 8a5a864:	66 c7 40 02 00 00    	movw   $0x0,0x2(%eax)
 8a5a86a:	5d                   	pop    %ebp
 8a5a86b:	c3                   	ret

```

```c
// combo_script_key::clear @ 0x8a5a858

/* combo_script_key::clear() */

void __thiscall combo_script_key::clear(combo_script_key *this)

{
  *this = (combo_script_key)0xb;
  *(undefined2 *)(this + 2) = 0;
  return;
}

```

---

## operator_lt_

```asm
// === 08a5a81c combo_script_key::operator<  [0x08a5a81c-0x8a5a857] ===
 8a5a81c:	55                   	push   %ebp
 8a5a81d:	89 e5                	mov    %esp,%ebp
 8a5a81f:	8b 45 08             	mov    0x8(%ebp),%eax
 8a5a822:	0f b6 10             	movzbl (%eax),%edx
 8a5a825:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a5a828:	0f b6 00             	movzbl (%eax),%eax
 8a5a82b:	38 c2                	cmp    %al,%dl
 8a5a82d:	75 16                	jne    8a5a845 <_ZNK16combo_script_keyltERKS_+0x29>
 8a5a82f:	8b 45 08             	mov    0x8(%ebp),%eax
 8a5a832:	0f b7 50 02          	movzwl 0x2(%eax),%edx
 8a5a836:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a5a839:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 8a5a83d:	66 39 c2             	cmp    %ax,%dx
 8a5a840:	0f 9c c0             	setl   %al
 8a5a843:	eb 11                	jmp    8a5a856 <_ZNK16combo_script_keyltERKS_+0x3a>
 8a5a845:	8b 45 08             	mov    0x8(%ebp),%eax
 8a5a848:	0f b6 10             	movzbl (%eax),%edx
 8a5a84b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a5a84e:	0f b6 00             	movzbl (%eax),%eax
 8a5a851:	38 c2                	cmp    %al,%dl
 8a5a853:	0f 9c c0             	setl   %al
 8a5a856:	5d                   	pop    %ebp
 8a5a857:	c3                   	ret

```

```c
// combo_script_key::operator< @ 0x8a5a81c

/* combo_script_key::TEMPNAMEPLACEHOLDERVALUE(combo_script_key const&) const */

ushort __thiscall combo_script_key::operator<(combo_script_key *this,combo_script_key *param_1)

{
  ushort uVar1;
  
  if (*this == *param_1) {
    uVar1 = CONCAT11((char)((ushort)*(short *)(param_1 + 2) >> 8),
                     *(short *)(this + 2) < *(short *)(param_1 + 2));
  }
  else {
    uVar1 = (ushort)((char)*this < (char)*param_1);
  }
  return uVar1;
}

```

