# std__hash_lt_std

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## basic_string_lt_wchar_t_

```asm
// === 086d9f10 std::hash<std::basic_string<wchar_t,  [0x086d9f10-0x86d9f4f] ===
 86d9f10:	55                   	push   %ebp
 86d9f11:	31 d2                	xor    %edx,%edx
 86d9f13:	89 e5                	mov    %esp,%ebp
 86d9f15:	8b 45 0c             	mov    0xc(%ebp),%eax
 86d9f18:	56                   	push   %esi
 86d9f19:	53                   	push   %ebx
 86d9f1a:	8b 30                	mov    (%eax),%esi
 86d9f1c:	b8 c5 9d 1c 81       	mov    $0x811c9dc5,%eax
 86d9f21:	8b 5e f4             	mov    -0xc(%esi),%ebx
 86d9f24:	c1 e3 02             	shl    $0x2,%ebx
 86d9f27:	85 db                	test   %ebx,%ebx
 86d9f29:	74 18                	je     86d9f43 <_ZNKSt4hashISbIwSt11char_traitsIwESaIwEEEclES3_+0x33>
 86d9f2b:	90                   	nop
 86d9f2c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 86d9f30:	0f be 0c 16          	movsbl (%esi,%edx,1),%ecx
 86d9f34:	83 c2 01             	add    $0x1,%edx
 86d9f37:	31 c1                	xor    %eax,%ecx
 86d9f39:	69 c1 93 01 00 01    	imul   $0x1000193,%ecx,%eax
 86d9f3f:	39 d3                	cmp    %edx,%ebx
 86d9f41:	75 ed                	jne    86d9f30 <_ZNKSt4hashISbIwSt11char_traitsIwESaIwEEEclES3_+0x20>
 86d9f43:	5b                   	pop    %ebx
 86d9f44:	5e                   	pop    %esi
 86d9f45:	5d                   	pop    %ebp
 86d9f46:	c3                   	ret
 86d9f47:	90                   	nop
 86d9f48:	90                   	nop
 86d9f49:	90                   	nop
 86d9f4a:	90                   	nop
 86d9f4b:	90                   	nop
 86d9f4c:	90                   	nop
 86d9f4d:	90                   	nop
 86d9f4e:	90                   	nop
 86d9f4f:	90                   	nop

```

```c
// std::hash<std::basic_string<wchar_t, @ 0x86d9f10

/* std::hash<std::wstring >::TEMPNAMEPLACEHOLDERVALUE(std::wstring) const */

uint __thiscall std::hash<std::wstring>::operator()(hash<std::wstring> *this,wstring param_1)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  uVar2 = 0x811c9dc5;
  iVar4 = *(int *)(*(int *)param_1._M_dataplus._M_p + -0xc) << 2;
  if (iVar4 != 0) {
    do {
      pcVar1 = (char *)(*(int *)param_1._M_dataplus._M_p + iVar3);
      iVar3 = iVar3 + 1;
      uVar2 = ((int)*pcVar1 ^ uVar2) * 0x1000193;
    } while (iVar4 != iVar3);
  }
  return uVar2;
}

```

---

## basic_string_lt_wchar_t__086d9f50

```asm
// === 086d9f50 std::hash<std::basic_string<wchar_t,  [0x086d9f50-0x86d9f8f] ===
 86d9f50:	55                   	push   %ebp
 86d9f51:	31 d2                	xor    %edx,%edx
 86d9f53:	89 e5                	mov    %esp,%ebp
 86d9f55:	8b 45 0c             	mov    0xc(%ebp),%eax
 86d9f58:	56                   	push   %esi
 86d9f59:	53                   	push   %ebx
 86d9f5a:	8b 30                	mov    (%eax),%esi
 86d9f5c:	b8 c5 9d 1c 81       	mov    $0x811c9dc5,%eax
 86d9f61:	8b 5e f4             	mov    -0xc(%esi),%ebx
 86d9f64:	c1 e3 02             	shl    $0x2,%ebx
 86d9f67:	85 db                	test   %ebx,%ebx
 86d9f69:	74 18                	je     86d9f83 <_ZNKSt4hashIRKSbIwSt11char_traitsIwESaIwEEEclES5_+0x33>
 86d9f6b:	90                   	nop
 86d9f6c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 86d9f70:	0f be 0c 16          	movsbl (%esi,%edx,1),%ecx
 86d9f74:	83 c2 01             	add    $0x1,%edx
 86d9f77:	31 c1                	xor    %eax,%ecx
 86d9f79:	69 c1 93 01 00 01    	imul   $0x1000193,%ecx,%eax
 86d9f7f:	39 d3                	cmp    %edx,%ebx
 86d9f81:	75 ed                	jne    86d9f70 <_ZNKSt4hashIRKSbIwSt11char_traitsIwESaIwEEEclES5_+0x20>
 86d9f83:	5b                   	pop    %ebx
 86d9f84:	5e                   	pop    %esi
 86d9f85:	5d                   	pop    %ebp
 86d9f86:	c3                   	ret
 86d9f87:	90                   	nop
 86d9f88:	90                   	nop
 86d9f89:	90                   	nop
 86d9f8a:	90                   	nop
 86d9f8b:	90                   	nop
 86d9f8c:	90                   	nop
 86d9f8d:	90                   	nop
 86d9f8e:	90                   	nop
 86d9f8f:	90                   	nop

```

```c
// std::hash<std::basic_string<wchar_t, @ 0x86d9f50

/* std::hash<std::wstring const&>::TEMPNAMEPLACEHOLDERVALUE(std::wstring const&) const */

uint __thiscall
std::hash<std::wstring_const&>::operator()(hash<std::wstring_const&> *this,wstring *param_1)

{
  char *pcVar1;
  wchar_t *pwVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  pwVar2 = (param_1->_M_dataplus)._M_p;
  uVar3 = 0x811c9dc5;
  iVar5 = pwVar2[-3] << 2;
  if (iVar5 != 0) {
    do {
      pcVar1 = (char *)((int)pwVar2 + iVar4);
      iVar4 = iVar4 + 1;
      uVar3 = ((int)*pcVar1 ^ uVar3) * 0x1000193;
    } while (iVar5 != iVar4);
  }
  return uVar3;
}

```

---

## string

```asm
// === 086d9ee0 std::hash<std::string  [0x086d9ee0-0x86d9f0f] ===
 86d9ee0:	55                   	push   %ebp
 86d9ee1:	31 d2                	xor    %edx,%edx
 86d9ee3:	89 e5                	mov    %esp,%ebp
 86d9ee5:	8b 45 0c             	mov    0xc(%ebp),%eax
 86d9ee8:	56                   	push   %esi
 86d9ee9:	53                   	push   %ebx
 86d9eea:	8b 30                	mov    (%eax),%esi
 86d9eec:	b8 c5 9d 1c 81       	mov    $0x811c9dc5,%eax
 86d9ef1:	8b 5e f4             	mov    -0xc(%esi),%ebx
 86d9ef4:	85 db                	test   %ebx,%ebx
 86d9ef6:	74 13                	je     86d9f0b <_ZNKSt4hashIRKSsEclES1_+0x2b>
 86d9ef8:	0f be 0c 16          	movsbl (%esi,%edx,1),%ecx
 86d9efc:	83 c2 01             	add    $0x1,%edx
 86d9eff:	31 c1                	xor    %eax,%ecx
 86d9f01:	69 c1 93 01 00 01    	imul   $0x1000193,%ecx,%eax
 86d9f07:	39 d3                	cmp    %edx,%ebx
 86d9f09:	75 ed                	jne    86d9ef8 <_ZNKSt4hashIRKSsEclES1_+0x18>
 86d9f0b:	5b                   	pop    %ebx
 86d9f0c:	5e                   	pop    %esi
 86d9f0d:	5d                   	pop    %ebp
 86d9f0e:	c3                   	ret
 86d9f0f:	90                   	nop

```

```c
// std::hash<std::string @ 0x86d9ee0

/* std::hash<std::string const&>::TEMPNAMEPLACEHOLDERVALUE(std::string const&) const */

uint __thiscall
std::hash<std::string_const&>::operator()(hash<std::string_const&> *this,string *param_1)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = 0;
  pcVar2 = (param_1->_M_dataplus)._M_p;
  uVar4 = 0x811c9dc5;
  iVar3 = *(int *)(pcVar2 + -0xc);
  if (iVar3 != 0) {
    do {
      pcVar1 = pcVar2 + iVar5;
      iVar5 = iVar5 + 1;
      uVar4 = ((int)*pcVar1 ^ uVar4) * 0x1000193;
    } while (iVar3 != iVar5);
  }
  return uVar4;
}

```

