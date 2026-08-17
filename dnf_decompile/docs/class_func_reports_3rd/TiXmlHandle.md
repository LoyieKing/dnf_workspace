# TiXmlHandle

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 8

---

## Child

```asm
// === 087e0170 TiXmlHandle::Child  [0x087e0170-0x87e01cf] ===
 87e0170:	55                   	push   %ebp
 87e0171:	89 e5                	mov    %esp,%ebp
 87e0173:	8b 55 0c             	mov    0xc(%ebp),%edx
 87e0176:	53                   	push   %ebx
 87e0177:	8b 45 08             	mov    0x8(%ebp),%eax
 87e017a:	8b 5d 10             	mov    0x10(%ebp),%ebx
 87e017d:	8b 12                	mov    (%edx),%edx
 87e017f:	85 d2                	test   %edx,%edx
 87e0181:	74 35                	je     87e01b8 <_ZNK11TiXmlHandle5ChildEi+0x48>
 87e0183:	85 db                	test   %ebx,%ebx
 87e0185:	8b 52 18             	mov    0x18(%edx),%edx
 87e0188:	7e 1c                	jle    87e01a6 <_ZNK11TiXmlHandle5ChildEi+0x36>
 87e018a:	85 d2                	test   %edx,%edx
 87e018c:	74 2a                	je     87e01b8 <_ZNK11TiXmlHandle5ChildEi+0x48>
 87e018e:	31 c9                	xor    %ecx,%ecx
 87e0190:	eb 0a                	jmp    87e019c <_ZNK11TiXmlHandle5ChildEi+0x2c>
 87e0192:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87e0198:	85 d2                	test   %edx,%edx
 87e019a:	74 1c                	je     87e01b8 <_ZNK11TiXmlHandle5ChildEi+0x48>
 87e019c:	83 c1 01             	add    $0x1,%ecx
 87e019f:	8b 52 28             	mov    0x28(%edx),%edx
 87e01a2:	39 cb                	cmp    %ecx,%ebx
 87e01a4:	7f f2                	jg     87e0198 <_ZNK11TiXmlHandle5ChildEi+0x28>
 87e01a6:	85 d2                	test   %edx,%edx
 87e01a8:	74 0e                	je     87e01b8 <_ZNK11TiXmlHandle5ChildEi+0x48>
 87e01aa:	89 10                	mov    %edx,(%eax)
 87e01ac:	5b                   	pop    %ebx
 87e01ad:	5d                   	pop    %ebp
 87e01ae:	c2 04 00             	ret    $0x4
 87e01b1:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87e01b8:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 87e01be:	5b                   	pop    %ebx
 87e01bf:	5d                   	pop    %ebp
 87e01c0:	c2 04 00             	ret    $0x4
 87e01c3:	90                   	nop
 87e01c4:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87e01ca:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// TiXmlHandle::Child @ 0x87e0170

/* TiXmlHandle::Child(int) const */

void TiXmlHandle::Child(int param_1)

{
  int iVar1;
  int iVar2;
  int *in_stack_00000008;
  int in_stack_0000000c;
  
  if (*in_stack_00000008 != 0) {
    iVar2 = *(int *)(*in_stack_00000008 + 0x18);
    if (in_stack_0000000c < 1) {
LAB_087e01a6:
      if (iVar2 != 0) {
        *(int *)param_1 = iVar2;
        return;
      }
    }
    else if (iVar2 != 0) {
      iVar1 = 0;
      do {
        iVar1 = iVar1 + 1;
        iVar2 = *(int *)(iVar2 + 0x28);
        if (in_stack_0000000c <= iVar1) goto LAB_087e01a6;
      } while (iVar2 != 0);
    }
  }
  *(undefined4 *)param_1 = 0;
  return;
}

```

---

## ChildElement

```asm
// === 087e1990 TiXmlHandle::ChildElement  [0x087e1990-0x87e1a4f] ===
 87e1990:	55                   	push   %ebp
 87e1991:	89 e5                	mov    %esp,%ebp
 87e1993:	57                   	push   %edi
 87e1994:	56                   	push   %esi
 87e1995:	53                   	push   %ebx
 87e1996:	83 ec 2c             	sub    $0x2c,%esp
 87e1999:	8b 45 0c             	mov    0xc(%ebp),%eax
 87e199c:	8b 7d 08             	mov    0x8(%ebp),%edi
 87e199f:	8b 75 10             	mov    0x10(%ebp),%esi
 87e19a2:	8b 00                	mov    (%eax),%eax
 87e19a4:	85 c0                	test   %eax,%eax
 87e19a6:	0f 84 8c 00 00 00    	je     87e1a38 <_ZNK11TiXmlHandle12ChildElementEi+0xa8>
 87e19ac:	8b 58 18             	mov    0x18(%eax),%ebx
 87e19af:	85 db                	test   %ebx,%ebx
 87e19b1:	75 0c                	jne    87e19bf <_ZNK11TiXmlHandle12ChildElementEi+0x2f>
 87e19b3:	e9 80 00 00 00       	jmp    87e1a38 <_ZNK11TiXmlHandle12ChildElementEi+0xa8>
 87e19b8:	8b 5b 28             	mov    0x28(%ebx),%ebx
 87e19bb:	85 db                	test   %ebx,%ebx
 87e19bd:	74 79                	je     87e1a38 <_ZNK11TiXmlHandle12ChildElementEi+0xa8>
 87e19bf:	8b 03                	mov    (%ebx),%eax
 87e19c1:	89 1c 24             	mov    %ebx,(%esp)
 87e19c4:	ff 50 14             	call   *0x14(%eax)
 87e19c7:	85 c0                	test   %eax,%eax
 87e19c9:	74 ed                	je     87e19b8 <_ZNK11TiXmlHandle12ChildElementEi+0x28>
 87e19cb:	8b 03                	mov    (%ebx),%eax
 87e19cd:	89 1c 24             	mov    %ebx,(%esp)
 87e19d0:	ff 50 14             	call   *0x14(%eax)
 87e19d3:	85 c0                	test   %eax,%eax
 87e19d5:	74 61                	je     87e1a38 <_ZNK11TiXmlHandle12ChildElementEi+0xa8>
 87e19d7:	85 f6                	test   %esi,%esi
 87e19d9:	7e 45                	jle    87e1a20 <_ZNK11TiXmlHandle12ChildElementEi+0x90>
 87e19db:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 87e19e2:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87e19e8:	8b 58 28             	mov    0x28(%eax),%ebx
 87e19eb:	85 db                	test   %ebx,%ebx
 87e19ed:	75 10                	jne    87e19ff <_ZNK11TiXmlHandle12ChildElementEi+0x6f>
 87e19ef:	eb 47                	jmp    87e1a38 <_ZNK11TiXmlHandle12ChildElementEi+0xa8>
 87e19f1:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87e19f8:	8b 5b 28             	mov    0x28(%ebx),%ebx
 87e19fb:	85 db                	test   %ebx,%ebx
 87e19fd:	74 39                	je     87e1a38 <_ZNK11TiXmlHandle12ChildElementEi+0xa8>
 87e19ff:	8b 03                	mov    (%ebx),%eax
 87e1a01:	89 1c 24             	mov    %ebx,(%esp)
 87e1a04:	ff 50 14             	call   *0x14(%eax)
 87e1a07:	85 c0                	test   %eax,%eax
 87e1a09:	74 ed                	je     87e19f8 <_ZNK11TiXmlHandle12ChildElementEi+0x68>
 87e1a0b:	8b 03                	mov    (%ebx),%eax
 87e1a0d:	89 1c 24             	mov    %ebx,(%esp)
 87e1a10:	ff 50 14             	call   *0x14(%eax)
 87e1a13:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 87e1a17:	85 c0                	test   %eax,%eax
 87e1a19:	74 1d                	je     87e1a38 <_ZNK11TiXmlHandle12ChildElementEi+0xa8>
 87e1a1b:	3b 75 e4             	cmp    -0x1c(%ebp),%esi
 87e1a1e:	7f c8                	jg     87e19e8 <_ZNK11TiXmlHandle12ChildElementEi+0x58>
 87e1a20:	85 c0                	test   %eax,%eax
 87e1a22:	74 14                	je     87e1a38 <_ZNK11TiXmlHandle12ChildElementEi+0xa8>
 87e1a24:	89 07                	mov    %eax,(%edi)
 87e1a26:	83 c4 2c             	add    $0x2c,%esp
 87e1a29:	89 f8                	mov    %edi,%eax
 87e1a2b:	5b                   	pop    %ebx
 87e1a2c:	5e                   	pop    %esi
 87e1a2d:	5f                   	pop    %edi
 87e1a2e:	5d                   	pop    %ebp
 87e1a2f:	c2 04 00             	ret    $0x4
 87e1a32:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87e1a38:	c7 07 00 00 00 00    	movl   $0x0,(%edi)
 87e1a3e:	89 f8                	mov    %edi,%eax
 87e1a40:	83 c4 2c             	add    $0x2c,%esp
 87e1a43:	5b                   	pop    %ebx
 87e1a44:	5e                   	pop    %esi
 87e1a45:	5f                   	pop    %edi
 87e1a46:	5d                   	pop    %ebp
 87e1a47:	c2 04 00             	ret    $0x4
 87e1a4a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// TiXmlHandle::ChildElement @ 0x87e1990

/* TiXmlHandle::ChildElement(int) const */

int TiXmlHandle::ChildElement(int param_1)

{
  int *piVar1;
  int iVar2;
  int *in_stack_00000008;
  int in_stack_0000000c;
  int local_20;
  
  if (*in_stack_00000008 != 0) {
    for (piVar1 = *(int **)(*in_stack_00000008 + 0x18); piVar1 != (int *)0x0;
        piVar1 = (int *)piVar1[10]) {
      iVar2 = (**(code **)(*piVar1 + 0x14))(piVar1);
      if (iVar2 != 0) {
        iVar2 = (**(code **)(*piVar1 + 0x14))(piVar1);
        if (iVar2 != 0) {
          if (in_stack_0000000c < 1) goto LAB_087e1a20;
          local_20 = 0;
          goto LAB_087e19e8;
        }
        break;
      }
    }
  }
  goto LAB_087e1a38;
  while (local_20 < in_stack_0000000c) {
LAB_087e19e8:
    piVar1 = *(int **)(iVar2 + 0x28);
    while( true ) {
      if (piVar1 == (int *)0x0) goto LAB_087e1a38;
      iVar2 = (**(code **)(*piVar1 + 0x14))(piVar1);
      if (iVar2 != 0) break;
      piVar1 = (int *)piVar1[10];
    }
    iVar2 = (**(code **)(*piVar1 + 0x14))(piVar1);
    local_20 = local_20 + 1;
    if (iVar2 == 0) goto LAB_087e1a38;
  }
LAB_087e1a20:
  if (iVar2 != 0) {
    *(int *)param_1 = iVar2;
    return param_1;
  }
LAB_087e1a38:
  *(undefined4 *)param_1 = 0;
  return param_1;
}

```

---

## ChildElement_087e1f90

```asm
// === 087e1f90 TiXmlHandle::ChildElement  [0x087e1f90-0x87e20af] ===
 87e1f90:	55                   	push   %ebp
 87e1f91:	89 e5                	mov    %esp,%ebp
 87e1f93:	57                   	push   %edi
 87e1f94:	56                   	push   %esi
 87e1f95:	53                   	push   %ebx
 87e1f96:	83 ec 1c             	sub    $0x1c,%esp
 87e1f99:	8b 45 0c             	mov    0xc(%ebp),%eax
 87e1f9c:	8b 75 10             	mov    0x10(%ebp),%esi
 87e1f9f:	8b 00                	mov    (%eax),%eax
 87e1fa1:	85 c0                	test   %eax,%eax
 87e1fa3:	74 4d                	je     87e1ff2 <_ZNK11TiXmlHandle12ChildElementEPKci+0x62>
 87e1fa5:	8b 58 18             	mov    0x18(%eax),%ebx
 87e1fa8:	85 db                	test   %ebx,%ebx
 87e1faa:	75 0b                	jne    87e1fb7 <_ZNK11TiXmlHandle12ChildElementEPKci+0x27>
 87e1fac:	eb 44                	jmp    87e1ff2 <_ZNK11TiXmlHandle12ChildElementEPKci+0x62>
 87e1fae:	66 90                	xchg   %ax,%ax
 87e1fb0:	8b 5b 28             	mov    0x28(%ebx),%ebx
 87e1fb3:	85 db                	test   %ebx,%ebx
 87e1fb5:	74 3b                	je     87e1ff2 <_ZNK11TiXmlHandle12ChildElementEPKci+0x62>
 87e1fb7:	8b 43 20             	mov    0x20(%ebx),%eax
 87e1fba:	89 74 24 04          	mov    %esi,0x4(%esp)
 87e1fbe:	89 04 24             	mov    %eax,(%esp)
 87e1fc1:	e8 1a c5 89 ff       	call   807e4e0 <strcmp@plt>
 87e1fc6:	85 c0                	test   %eax,%eax
 87e1fc8:	75 e6                	jne    87e1fb0 <_ZNK11TiXmlHandle12ChildElementEPKci+0x20>
 87e1fca:	8b 03                	mov    (%ebx),%eax
 87e1fcc:	89 1c 24             	mov    %ebx,(%esp)
 87e1fcf:	ff 50 14             	call   *0x14(%eax)
 87e1fd2:	85 c0                	test   %eax,%eax
 87e1fd4:	74 15                	je     87e1feb <_ZNK11TiXmlHandle12ChildElementEPKci+0x5b>
 87e1fd6:	eb 2d                	jmp    87e2005 <_ZNK11TiXmlHandle12ChildElementEPKci+0x75>
 87e1fd8:	8b 43 20             	mov    0x20(%ebx),%eax
 87e1fdb:	89 74 24 04          	mov    %esi,0x4(%esp)
 87e1fdf:	89 04 24             	mov    %eax,(%esp)
 87e1fe2:	e8 f9 c4 89 ff       	call   807e4e0 <strcmp@plt>
 87e1fe7:	85 c0                	test   %eax,%eax
 87e1fe9:	74 df                	je     87e1fca <_ZNK11TiXmlHandle12ChildElementEPKci+0x3a>
 87e1feb:	8b 5b 28             	mov    0x28(%ebx),%ebx
 87e1fee:	85 db                	test   %ebx,%ebx
 87e1ff0:	75 e6                	jne    87e1fd8 <_ZNK11TiXmlHandle12ChildElementEPKci+0x48>
 87e1ff2:	8b 45 08             	mov    0x8(%ebp),%eax
 87e1ff5:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 87e1ffb:	83 c4 1c             	add    $0x1c,%esp
 87e1ffe:	5b                   	pop    %ebx
 87e1fff:	5e                   	pop    %esi
 87e2000:	5f                   	pop    %edi
 87e2001:	5d                   	pop    %ebp
 87e2002:	c2 04 00             	ret    $0x4
 87e2005:	8b 03                	mov    (%ebx),%eax
 87e2007:	89 1c 24             	mov    %ebx,(%esp)
 87e200a:	ff 50 14             	call   *0x14(%eax)
 87e200d:	85 c0                	test   %eax,%eax
 87e200f:	74 e1                	je     87e1ff2 <_ZNK11TiXmlHandle12ChildElementEPKci+0x62>
 87e2011:	31 ff                	xor    %edi,%edi
 87e2013:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 87e2017:	7e 76                	jle    87e208f <_ZNK11TiXmlHandle12ChildElementEPKci+0xff>
 87e2019:	8b 58 28             	mov    0x28(%eax),%ebx
 87e201c:	85 db                	test   %ebx,%ebx
 87e201e:	75 0f                	jne    87e202f <_ZNK11TiXmlHandle12ChildElementEPKci+0x9f>
 87e2020:	eb d0                	jmp    87e1ff2 <_ZNK11TiXmlHandle12ChildElementEPKci+0x62>
 87e2022:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87e2028:	8b 5b 28             	mov    0x28(%ebx),%ebx
 87e202b:	85 db                	test   %ebx,%ebx
 87e202d:	74 c3                	je     87e1ff2 <_ZNK11TiXmlHandle12ChildElementEPKci+0x62>
 87e202f:	8b 43 20             	mov    0x20(%ebx),%eax
 87e2032:	89 74 24 04          	mov    %esi,0x4(%esp)
 87e2036:	89 04 24             	mov    %eax,(%esp)
 87e2039:	e8 a2 c4 89 ff       	call   807e4e0 <strcmp@plt>
 87e203e:	85 c0                	test   %eax,%eax
 87e2040:	75 e6                	jne    87e2028 <_ZNK11TiXmlHandle12ChildElementEPKci+0x98>
 87e2042:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87e2048:	8b 03                	mov    (%ebx),%eax
 87e204a:	89 1c 24             	mov    %ebx,(%esp)
 87e204d:	ff 50 14             	call   *0x14(%eax)
 87e2050:	85 c0                	test   %eax,%eax
 87e2052:	74 17                	je     87e206b <_ZNK11TiXmlHandle12ChildElementEPKci+0xdb>
 87e2054:	eb 21                	jmp    87e2077 <_ZNK11TiXmlHandle12ChildElementEPKci+0xe7>
 87e2056:	66 90                	xchg   %ax,%ax
 87e2058:	8b 43 20             	mov    0x20(%ebx),%eax
 87e205b:	89 74 24 04          	mov    %esi,0x4(%esp)
 87e205f:	89 04 24             	mov    %eax,(%esp)
 87e2062:	e8 79 c4 89 ff       	call   807e4e0 <strcmp@plt>
 87e2067:	85 c0                	test   %eax,%eax
 87e2069:	74 dd                	je     87e2048 <_ZNK11TiXmlHandle12ChildElementEPKci+0xb8>
 87e206b:	8b 5b 28             	mov    0x28(%ebx),%ebx
 87e206e:	85 db                	test   %ebx,%ebx
 87e2070:	75 e6                	jne    87e2058 <_ZNK11TiXmlHandle12ChildElementEPKci+0xc8>
 87e2072:	e9 7b ff ff ff       	jmp    87e1ff2 <_ZNK11TiXmlHandle12ChildElementEPKci+0x62>
 87e2077:	8b 03                	mov    (%ebx),%eax
 87e2079:	83 c7 01             	add    $0x1,%edi
 87e207c:	89 1c 24             	mov    %ebx,(%esp)
 87e207f:	ff 50 14             	call   *0x14(%eax)
 87e2082:	85 c0                	test   %eax,%eax
 87e2084:	0f 84 68 ff ff ff    	je     87e1ff2 <_ZNK11TiXmlHandle12ChildElementEPKci+0x62>
 87e208a:	39 7d 14             	cmp    %edi,0x14(%ebp)
 87e208d:	7f 8a                	jg     87e2019 <_ZNK11TiXmlHandle12ChildElementEPKci+0x89>
 87e208f:	85 c0                	test   %eax,%eax
 87e2091:	0f 84 5b ff ff ff    	je     87e1ff2 <_ZNK11TiXmlHandle12ChildElementEPKci+0x62>
 87e2097:	8b 55 08             	mov    0x8(%ebp),%edx
 87e209a:	89 02                	mov    %eax,(%edx)
 87e209c:	89 d0                	mov    %edx,%eax
 87e209e:	e9 58 ff ff ff       	jmp    87e1ffb <_ZNK11TiXmlHandle12ChildElementEPKci+0x6b>
 87e20a3:	90                   	nop
 87e20a4:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87e20aa:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// TiXmlHandle::ChildElement @ 0x87e1f90

/* WARNING: Variable defined which should be unmapped: param_1 */
/* TiXmlHandle::ChildElement(char const*, int) const */

char * TiXmlHandle::ChildElement(char *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  char *in_stack_0000000c;
  int in_stack_00000010;
  
  if (*(int *)param_2 != 0) {
    for (piVar2 = *(int **)(*(int *)param_2 + 0x18); piVar2 != (int *)0x0;
        piVar2 = (int *)piVar2[10]) {
      iVar1 = strcmp((char *)piVar2[8],in_stack_0000000c);
      if (iVar1 == 0) goto LAB_087e1fca;
    }
  }
  goto LAB_087e1ff2;
LAB_087e1fca:
  while (iVar1 = (**(code **)(*piVar2 + 0x14))(piVar2), iVar1 == 0) {
    do {
      piVar2 = (int *)piVar2[10];
      if (piVar2 == (int *)0x0) goto LAB_087e1ff2;
      iVar1 = strcmp((char *)piVar2[8],in_stack_0000000c);
    } while (iVar1 != 0);
  }
  iVar1 = (**(code **)(*piVar2 + 0x14))(piVar2);
  if (iVar1 != 0) {
    iVar3 = 0;
    if (0 < in_stack_00000010) {
      do {
        piVar2 = *(int **)(iVar1 + 0x28);
        while( true ) {
          if (piVar2 == (int *)0x0) goto LAB_087e1ff2;
          iVar1 = strcmp((char *)piVar2[8],in_stack_0000000c);
          if (iVar1 == 0) break;
          piVar2 = (int *)piVar2[10];
        }
        while (iVar1 = (**(code **)(*piVar2 + 0x14))(piVar2), iVar1 == 0) {
          do {
            piVar2 = (int *)piVar2[10];
            if (piVar2 == (int *)0x0) goto LAB_087e1ff2;
            iVar1 = strcmp((char *)piVar2[8],in_stack_0000000c);
          } while (iVar1 != 0);
        }
        iVar3 = iVar3 + 1;
        iVar1 = (**(code **)(*piVar2 + 0x14))(piVar2);
        if (iVar1 == 0) goto LAB_087e1ff2;
      } while (iVar3 < in_stack_00000010);
    }
    if (iVar1 != 0) {
      *(int *)param_1 = iVar1;
      return param_1;
    }
  }
LAB_087e1ff2:
  param_1[0] = '\0';
  param_1[1] = '\0';
  param_1[2] = '\0';
  param_1[3] = '\0';
  return param_1;
}

```

---

## Child_087e1050

```asm
// === 087e1050 TiXmlHandle::Child  [0x087e1050-0x87e10ef] ===
 87e1050:	55                   	push   %ebp
 87e1051:	89 e5                	mov    %esp,%ebp
 87e1053:	57                   	push   %edi
 87e1054:	56                   	push   %esi
 87e1055:	53                   	push   %ebx
 87e1056:	83 ec 1c             	sub    $0x1c,%esp
 87e1059:	8b 45 0c             	mov    0xc(%ebp),%eax
 87e105c:	8b 75 10             	mov    0x10(%ebp),%esi
 87e105f:	8b 00                	mov    (%eax),%eax
 87e1061:	85 c0                	test   %eax,%eax
 87e1063:	74 4d                	je     87e10b2 <_ZNK11TiXmlHandle5ChildEPKci+0x62>
 87e1065:	8b 58 18             	mov    0x18(%eax),%ebx
 87e1068:	85 db                	test   %ebx,%ebx
 87e106a:	75 0b                	jne    87e1077 <_ZNK11TiXmlHandle5ChildEPKci+0x27>
 87e106c:	eb 44                	jmp    87e10b2 <_ZNK11TiXmlHandle5ChildEPKci+0x62>
 87e106e:	66 90                	xchg   %ax,%ax
 87e1070:	8b 5b 28             	mov    0x28(%ebx),%ebx
 87e1073:	85 db                	test   %ebx,%ebx
 87e1075:	74 3b                	je     87e10b2 <_ZNK11TiXmlHandle5ChildEPKci+0x62>
 87e1077:	8b 43 20             	mov    0x20(%ebx),%eax
 87e107a:	89 74 24 04          	mov    %esi,0x4(%esp)
 87e107e:	89 04 24             	mov    %eax,(%esp)
 87e1081:	e8 5a d4 89 ff       	call   807e4e0 <strcmp@plt>
 87e1086:	85 c0                	test   %eax,%eax
 87e1088:	75 e6                	jne    87e1070 <_ZNK11TiXmlHandle5ChildEPKci+0x20>
 87e108a:	8b 7d 14             	mov    0x14(%ebp),%edi
 87e108d:	85 ff                	test   %edi,%edi
 87e108f:	7e 3f                	jle    87e10d0 <_ZNK11TiXmlHandle5ChildEPKci+0x80>
 87e1091:	31 ff                	xor    %edi,%edi
 87e1093:	eb 16                	jmp    87e10ab <_ZNK11TiXmlHandle5ChildEPKci+0x5b>
 87e1095:	8d 76 00             	lea    0x0(%esi),%esi
 87e1098:	8b 43 20             	mov    0x20(%ebx),%eax
 87e109b:	89 74 24 04          	mov    %esi,0x4(%esp)
 87e109f:	89 04 24             	mov    %eax,(%esp)
 87e10a2:	e8 39 d4 89 ff       	call   807e4e0 <strcmp@plt>
 87e10a7:	85 c0                	test   %eax,%eax
 87e10a9:	74 1d                	je     87e10c8 <_ZNK11TiXmlHandle5ChildEPKci+0x78>
 87e10ab:	8b 5b 28             	mov    0x28(%ebx),%ebx
 87e10ae:	85 db                	test   %ebx,%ebx
 87e10b0:	75 e6                	jne    87e1098 <_ZNK11TiXmlHandle5ChildEPKci+0x48>
 87e10b2:	8b 45 08             	mov    0x8(%ebp),%eax
 87e10b5:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 87e10bb:	83 c4 1c             	add    $0x1c,%esp
 87e10be:	5b                   	pop    %ebx
 87e10bf:	5e                   	pop    %esi
 87e10c0:	5f                   	pop    %edi
 87e10c1:	5d                   	pop    %ebp
 87e10c2:	c2 04 00             	ret    $0x4
 87e10c5:	8d 76 00             	lea    0x0(%esi),%esi
 87e10c8:	83 c7 01             	add    $0x1,%edi
 87e10cb:	39 7d 14             	cmp    %edi,0x14(%ebp)
 87e10ce:	7f db                	jg     87e10ab <_ZNK11TiXmlHandle5ChildEPKci+0x5b>
 87e10d0:	85 db                	test   %ebx,%ebx
 87e10d2:	74 de                	je     87e10b2 <_ZNK11TiXmlHandle5ChildEPKci+0x62>
 87e10d4:	8b 45 08             	mov    0x8(%ebp),%eax
 87e10d7:	89 18                	mov    %ebx,(%eax)
 87e10d9:	83 c4 1c             	add    $0x1c,%esp
 87e10dc:	5b                   	pop    %ebx
 87e10dd:	5e                   	pop    %esi
 87e10de:	5f                   	pop    %edi
 87e10df:	5d                   	pop    %ebp
 87e10e0:	c2 04 00             	ret    $0x4
 87e10e3:	90                   	nop
 87e10e4:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87e10ea:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// TiXmlHandle::Child @ 0x87e1050

/* TiXmlHandle::Child(char const*, int) const */

void TiXmlHandle::Child(char *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *in_stack_0000000c;
  int in_stack_00000010;
  
  if (*(int *)param_2 != 0) {
    for (iVar3 = *(int *)(*(int *)param_2 + 0x18); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x28)) {
      iVar1 = strcmp(*(char **)(iVar3 + 0x20),in_stack_0000000c);
      if (iVar1 == 0) {
        if (in_stack_00000010 < 1) goto LAB_087e10d0;
        iVar1 = 0;
        goto LAB_087e10ab;
      }
    }
  }
  goto LAB_087e10b2;
  while ((iVar2 = strcmp(*(char **)(iVar3 + 0x20),in_stack_0000000c), iVar2 != 0 ||
         (iVar1 = iVar1 + 1, iVar1 < in_stack_00000010))) {
LAB_087e10ab:
    iVar3 = *(int *)(iVar3 + 0x28);
    if (iVar3 == 0) goto LAB_087e10b2;
  }
LAB_087e10d0:
  if (iVar3 != 0) {
    *(int *)param_1 = iVar3;
    return;
  }
LAB_087e10b2:
  param_1[0] = '\0';
  param_1[1] = '\0';
  param_1[2] = '\0';
  param_1[3] = '\0';
  return;
}

```

---

## FirstChild

```asm
// === 087e0140 TiXmlHandle::FirstChild  [0x087e0140-0x87e016f] ===
 87e0140:	55                   	push   %ebp
 87e0141:	89 e5                	mov    %esp,%ebp
 87e0143:	8b 55 0c             	mov    0xc(%ebp),%edx
 87e0146:	8b 45 08             	mov    0x8(%ebp),%eax
 87e0149:	8b 12                	mov    (%edx),%edx
 87e014b:	85 d2                	test   %edx,%edx
 87e014d:	74 11                	je     87e0160 <_ZNK11TiXmlHandle10FirstChildEv+0x20>
 87e014f:	8b 52 18             	mov    0x18(%edx),%edx
 87e0152:	85 d2                	test   %edx,%edx
 87e0154:	74 0a                	je     87e0160 <_ZNK11TiXmlHandle10FirstChildEv+0x20>
 87e0156:	89 10                	mov    %edx,(%eax)
 87e0158:	5d                   	pop    %ebp
 87e0159:	c2 04 00             	ret    $0x4
 87e015c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87e0160:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 87e0166:	5d                   	pop    %ebp
 87e0167:	c2 04 00             	ret    $0x4
 87e016a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// TiXmlHandle::FirstChild @ 0x87e0140

/* TiXmlHandle::FirstChild() const */

void TiXmlHandle::FirstChild(void)

{
  int iVar1;
  int *in_stack_00000004;
  int *in_stack_00000008;
  
  if ((*in_stack_00000008 != 0) && (iVar1 = *(int *)(*in_stack_00000008 + 0x18), iVar1 != 0)) {
    *in_stack_00000004 = iVar1;
    return;
  }
  *in_stack_00000004 = 0;
  return;
}

```

---

## FirstChildElement

```asm
// === 087e1920 TiXmlHandle::FirstChildElement  [0x087e1920-0x87e198f] ===
 87e1920:	55                   	push   %ebp
 87e1921:	89 e5                	mov    %esp,%ebp
 87e1923:	56                   	push   %esi
 87e1924:	53                   	push   %ebx
 87e1925:	83 ec 10             	sub    $0x10,%esp
 87e1928:	8b 45 0c             	mov    0xc(%ebp),%eax
 87e192b:	8b 75 08             	mov    0x8(%ebp),%esi
 87e192e:	8b 00                	mov    (%eax),%eax
 87e1930:	85 c0                	test   %eax,%eax
 87e1932:	74 3c                	je     87e1970 <_ZNK11TiXmlHandle17FirstChildElementEv+0x50>
 87e1934:	8b 58 18             	mov    0x18(%eax),%ebx
 87e1937:	85 db                	test   %ebx,%ebx
 87e1939:	75 0c                	jne    87e1947 <_ZNK11TiXmlHandle17FirstChildElementEv+0x27>
 87e193b:	eb 33                	jmp    87e1970 <_ZNK11TiXmlHandle17FirstChildElementEv+0x50>
 87e193d:	8d 76 00             	lea    0x0(%esi),%esi
 87e1940:	8b 5b 28             	mov    0x28(%ebx),%ebx
 87e1943:	85 db                	test   %ebx,%ebx
 87e1945:	74 29                	je     87e1970 <_ZNK11TiXmlHandle17FirstChildElementEv+0x50>
 87e1947:	8b 03                	mov    (%ebx),%eax
 87e1949:	89 1c 24             	mov    %ebx,(%esp)
 87e194c:	ff 50 14             	call   *0x14(%eax)
 87e194f:	85 c0                	test   %eax,%eax
 87e1951:	74 ed                	je     87e1940 <_ZNK11TiXmlHandle17FirstChildElementEv+0x20>
 87e1953:	8b 03                	mov    (%ebx),%eax
 87e1955:	89 1c 24             	mov    %ebx,(%esp)
 87e1958:	ff 50 14             	call   *0x14(%eax)
 87e195b:	85 c0                	test   %eax,%eax
 87e195d:	74 11                	je     87e1970 <_ZNK11TiXmlHandle17FirstChildElementEv+0x50>
 87e195f:	89 06                	mov    %eax,(%esi)
 87e1961:	83 c4 10             	add    $0x10,%esp
 87e1964:	89 f0                	mov    %esi,%eax
 87e1966:	5b                   	pop    %ebx
 87e1967:	5e                   	pop    %esi
 87e1968:	5d                   	pop    %ebp
 87e1969:	c2 04 00             	ret    $0x4
 87e196c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87e1970:	c7 06 00 00 00 00    	movl   $0x0,(%esi)
 87e1976:	89 f0                	mov    %esi,%eax
 87e1978:	83 c4 10             	add    $0x10,%esp
 87e197b:	5b                   	pop    %ebx
 87e197c:	5e                   	pop    %esi
 87e197d:	5d                   	pop    %ebp
 87e197e:	c2 04 00             	ret    $0x4
 87e1981:	90                   	nop
 87e1982:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87e1989:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TiXmlHandle::FirstChildElement @ 0x87e1920

/* TiXmlHandle::FirstChildElement() const */

int * TiXmlHandle::FirstChildElement(void)

{
  int *piVar1;
  int iVar2;
  int *in_stack_00000004;
  int *in_stack_00000008;
  
  if (*in_stack_00000008 != 0) {
    for (piVar1 = *(int **)(*in_stack_00000008 + 0x18); piVar1 != (int *)0x0;
        piVar1 = (int *)piVar1[10]) {
      iVar2 = (**(code **)(*piVar1 + 0x14))(piVar1);
      if (iVar2 != 0) {
        iVar2 = (**(code **)(*piVar1 + 0x14))(piVar1);
        if (iVar2 != 0) {
          *in_stack_00000004 = iVar2;
          return in_stack_00000004;
        }
        break;
      }
    }
  }
  *in_stack_00000004 = 0;
  return in_stack_00000004;
}

```

---

## FirstChildElement_087e20b0

```asm
// === 087e20b0 TiXmlHandle::FirstChildElement  [0x087e20b0-0x87e214f] ===
 87e20b0:	55                   	push   %ebp
 87e20b1:	89 e5                	mov    %esp,%ebp
 87e20b3:	57                   	push   %edi
 87e20b4:	56                   	push   %esi
 87e20b5:	53                   	push   %ebx
 87e20b6:	83 ec 1c             	sub    $0x1c,%esp
 87e20b9:	8b 45 0c             	mov    0xc(%ebp),%eax
 87e20bc:	8b 7d 08             	mov    0x8(%ebp),%edi
 87e20bf:	8b 75 10             	mov    0x10(%ebp),%esi
 87e20c2:	8b 00                	mov    (%eax),%eax
 87e20c4:	85 c0                	test   %eax,%eax
 87e20c6:	74 5a                	je     87e2122 <_ZNK11TiXmlHandle17FirstChildElementEPKc+0x72>
 87e20c8:	8b 58 18             	mov    0x18(%eax),%ebx
 87e20cb:	85 db                	test   %ebx,%ebx
 87e20cd:	75 10                	jne    87e20df <_ZNK11TiXmlHandle17FirstChildElementEPKc+0x2f>
 87e20cf:	eb 51                	jmp    87e2122 <_ZNK11TiXmlHandle17FirstChildElementEPKc+0x72>
 87e20d1:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87e20d8:	8b 5b 28             	mov    0x28(%ebx),%ebx
 87e20db:	85 db                	test   %ebx,%ebx
 87e20dd:	74 43                	je     87e2122 <_ZNK11TiXmlHandle17FirstChildElementEPKc+0x72>
 87e20df:	8b 43 20             	mov    0x20(%ebx),%eax
 87e20e2:	89 74 24 04          	mov    %esi,0x4(%esp)
 87e20e6:	89 04 24             	mov    %eax,(%esp)
 87e20e9:	e8 f2 c3 89 ff       	call   807e4e0 <strcmp@plt>
 87e20ee:	85 c0                	test   %eax,%eax
 87e20f0:	75 e6                	jne    87e20d8 <_ZNK11TiXmlHandle17FirstChildElementEPKc+0x28>
 87e20f2:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87e20f8:	8b 03                	mov    (%ebx),%eax
 87e20fa:	89 1c 24             	mov    %ebx,(%esp)
 87e20fd:	ff 50 14             	call   *0x14(%eax)
 87e2100:	85 c0                	test   %eax,%eax
 87e2102:	74 17                	je     87e211b <_ZNK11TiXmlHandle17FirstChildElementEPKc+0x6b>
 87e2104:	eb 2e                	jmp    87e2134 <_ZNK11TiXmlHandle17FirstChildElementEPKc+0x84>
 87e2106:	66 90                	xchg   %ax,%ax
 87e2108:	8b 43 20             	mov    0x20(%ebx),%eax
 87e210b:	89 74 24 04          	mov    %esi,0x4(%esp)
 87e210f:	89 04 24             	mov    %eax,(%esp)
 87e2112:	e8 c9 c3 89 ff       	call   807e4e0 <strcmp@plt>
 87e2117:	85 c0                	test   %eax,%eax
 87e2119:	74 dd                	je     87e20f8 <_ZNK11TiXmlHandle17FirstChildElementEPKc+0x48>
 87e211b:	8b 5b 28             	mov    0x28(%ebx),%ebx
 87e211e:	85 db                	test   %ebx,%ebx
 87e2120:	75 e6                	jne    87e2108 <_ZNK11TiXmlHandle17FirstChildElementEPKc+0x58>
 87e2122:	c7 07 00 00 00 00    	movl   $0x0,(%edi)
 87e2128:	89 f8                	mov    %edi,%eax
 87e212a:	83 c4 1c             	add    $0x1c,%esp
 87e212d:	5b                   	pop    %ebx
 87e212e:	5e                   	pop    %esi
 87e212f:	5f                   	pop    %edi
 87e2130:	5d                   	pop    %ebp
 87e2131:	c2 04 00             	ret    $0x4
 87e2134:	8b 03                	mov    (%ebx),%eax
 87e2136:	89 1c 24             	mov    %ebx,(%esp)
 87e2139:	ff 50 14             	call   *0x14(%eax)
 87e213c:	85 c0                	test   %eax,%eax
 87e213e:	74 e2                	je     87e2122 <_ZNK11TiXmlHandle17FirstChildElementEPKc+0x72>
 87e2140:	89 07                	mov    %eax,(%edi)
 87e2142:	83 c4 1c             	add    $0x1c,%esp
 87e2145:	89 f8                	mov    %edi,%eax
 87e2147:	5b                   	pop    %ebx
 87e2148:	5e                   	pop    %esi
 87e2149:	5f                   	pop    %edi
 87e214a:	5d                   	pop    %ebp
 87e214b:	c2 04 00             	ret    $0x4
 87e214e:	66 90                	xchg   %ax,%ax

```

```c
// TiXmlHandle::FirstChildElement @ 0x87e20b0

/* TiXmlHandle::FirstChildElement(char const*) const */

char * TiXmlHandle::FirstChildElement(char *param_1)

{
  int iVar1;
  int *piVar2;
  int *in_stack_00000008;
  char *in_stack_0000000c;
  
  if (*in_stack_00000008 != 0) {
    for (piVar2 = *(int **)(*in_stack_00000008 + 0x18); piVar2 != (int *)0x0;
        piVar2 = (int *)piVar2[10]) {
      iVar1 = strcmp((char *)piVar2[8],in_stack_0000000c);
      if (iVar1 == 0) goto LAB_087e20f8;
    }
  }
LAB_087e2122:
  param_1[0] = '\0';
  param_1[1] = '\0';
  param_1[2] = '\0';
  param_1[3] = '\0';
  return param_1;
LAB_087e20f8:
  while (iVar1 = (**(code **)(*piVar2 + 0x14))(piVar2), iVar1 == 0) {
    do {
      piVar2 = (int *)piVar2[10];
      if (piVar2 == (int *)0x0) goto LAB_087e2122;
      iVar1 = strcmp((char *)piVar2[8],in_stack_0000000c);
    } while (iVar1 != 0);
  }
  iVar1 = (**(code **)(*piVar2 + 0x14))(piVar2);
  if (iVar1 != 0) {
    *(int *)param_1 = iVar1;
    return param_1;
  }
  goto LAB_087e2122;
}

```

---

## FirstChild_087e1170

```asm
// === 087e1170 TiXmlHandle::FirstChild  [0x087e1170-0x87e11df] ===
 87e1170:	55                   	push   %ebp
 87e1171:	89 e5                	mov    %esp,%ebp
 87e1173:	57                   	push   %edi
 87e1174:	56                   	push   %esi
 87e1175:	53                   	push   %ebx
 87e1176:	83 ec 1c             	sub    $0x1c,%esp
 87e1179:	8b 45 0c             	mov    0xc(%ebp),%eax
 87e117c:	8b 7d 08             	mov    0x8(%ebp),%edi
 87e117f:	8b 75 10             	mov    0x10(%ebp),%esi
 87e1182:	8b 00                	mov    (%eax),%eax
 87e1184:	85 c0                	test   %eax,%eax
 87e1186:	74 38                	je     87e11c0 <_ZNK11TiXmlHandle10FirstChildEPKc+0x50>
 87e1188:	8b 58 18             	mov    0x18(%eax),%ebx
 87e118b:	85 db                	test   %ebx,%ebx
 87e118d:	75 10                	jne    87e119f <_ZNK11TiXmlHandle10FirstChildEPKc+0x2f>
 87e118f:	eb 2f                	jmp    87e11c0 <_ZNK11TiXmlHandle10FirstChildEPKc+0x50>
 87e1191:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87e1198:	8b 5b 28             	mov    0x28(%ebx),%ebx
 87e119b:	85 db                	test   %ebx,%ebx
 87e119d:	74 21                	je     87e11c0 <_ZNK11TiXmlHandle10FirstChildEPKc+0x50>
 87e119f:	8b 43 20             	mov    0x20(%ebx),%eax
 87e11a2:	89 74 24 04          	mov    %esi,0x4(%esp)
 87e11a6:	89 04 24             	mov    %eax,(%esp)
 87e11a9:	e8 32 d3 89 ff       	call   807e4e0 <strcmp@plt>
 87e11ae:	85 c0                	test   %eax,%eax
 87e11b0:	75 e6                	jne    87e1198 <_ZNK11TiXmlHandle10FirstChildEPKc+0x28>
 87e11b2:	89 1f                	mov    %ebx,(%edi)
 87e11b4:	89 f8                	mov    %edi,%eax
 87e11b6:	83 c4 1c             	add    $0x1c,%esp
 87e11b9:	5b                   	pop    %ebx
 87e11ba:	5e                   	pop    %esi
 87e11bb:	5f                   	pop    %edi
 87e11bc:	5d                   	pop    %ebp
 87e11bd:	c2 04 00             	ret    $0x4
 87e11c0:	c7 07 00 00 00 00    	movl   $0x0,(%edi)
 87e11c6:	89 f8                	mov    %edi,%eax
 87e11c8:	83 c4 1c             	add    $0x1c,%esp
 87e11cb:	5b                   	pop    %ebx
 87e11cc:	5e                   	pop    %esi
 87e11cd:	5f                   	pop    %edi
 87e11ce:	5d                   	pop    %ebp
 87e11cf:	c2 04 00             	ret    $0x4
 87e11d2:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87e11d9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TiXmlHandle::FirstChild @ 0x87e1170

/* TiXmlHandle::FirstChild(char const*) const */

char * TiXmlHandle::FirstChild(char *param_1)

{
  int iVar1;
  int iVar2;
  int *in_stack_00000008;
  char *in_stack_0000000c;
  
  if (*in_stack_00000008 != 0) {
    for (iVar1 = *(int *)(*in_stack_00000008 + 0x18); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x28)) {
      iVar2 = strcmp(*(char **)(iVar1 + 0x20),in_stack_0000000c);
      if (iVar2 == 0) {
        *(int *)param_1 = iVar1;
        return param_1;
      }
    }
  }
  param_1[0] = '\0';
  param_1[1] = '\0';
  param_1[2] = '\0';
  param_1[3] = '\0';
  return param_1;
}

```

