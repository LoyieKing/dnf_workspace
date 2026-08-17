# RegenerationROI

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 10

---

## RegenVer_get_option_quantity

```asm
// === 085f8cb4 RegenerationROI::RegenVer_get_option_quantity  [0x085f8cb4-0x85f8da5] ===
 85f8cb4:	55                   	push   %ebp
 85f8cb5:	89 e5                	mov    %esp,%ebp
 85f8cb7:	83 ec 38             	sub    $0x38,%esp
 85f8cba:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 85f8cbe:	78 06                	js     85f8cc6 <_ZN15RegenerationROI28RegenVer_get_option_quantityEii+0x12>
 85f8cc0:	83 7d 0c 03          	cmpl   $0x3,0xc(%ebp)
 85f8cc4:	7e 0a                	jle    85f8cd0 <_ZN15RegenerationROI28RegenVer_get_option_quantityEii+0x1c>
 85f8cc6:	b8 00 00 00 00       	mov    $0x0,%eax
 85f8ccb:	e9 d4 00 00 00       	jmp    85f8da4 <_ZN15RegenerationROI28RegenVer_get_option_quantityEii+0xf0>
 85f8cd0:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 85f8cd4:	78 06                	js     85f8cdc <_ZN15RegenerationROI28RegenVer_get_option_quantityEii+0x28>
 85f8cd6:	83 7d 10 03          	cmpl   $0x3,0x10(%ebp)
 85f8cda:	7e 0a                	jle    85f8ce6 <_ZN15RegenerationROI28RegenVer_get_option_quantityEii+0x32>
 85f8cdc:	b8 00 00 00 00       	mov    $0x0,%eax
 85f8ce1:	e9 be 00 00 00       	jmp    85f8da4 <_ZN15RegenerationROI28RegenVer_get_option_quantityEii+0xf0>
 85f8ce6:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 85f8ced:	8b 45 0c             	mov    0xc(%ebp),%eax
 85f8cf0:	83 e8 01             	sub    $0x1,%eax
 85f8cf3:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85f8cf6:	eb 1e                	jmp    85f8d16 <_ZN15RegenerationROI28RegenVer_get_option_quantityEii+0x62>
 85f8cf8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85f8cfb:	8b 55 08             	mov    0x8(%ebp),%edx
 85f8cfe:	83 c2 34             	add    $0x34,%edx
 85f8d01:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f8d05:	89 14 24             	mov    %edx,(%esp)
 85f8d08:	e8 cf 54 a9 ff       	call   808e1dc <_ZNSt6vectorIiSaIiEEixEj>
 85f8d0d:	8b 00                	mov    (%eax),%eax
 85f8d0f:	01 45 e8             	add    %eax,-0x18(%ebp)
 85f8d12:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 85f8d16:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85f8d19:	3b 45 10             	cmp    0x10(%ebp),%eax
 85f8d1c:	0f 9c c0             	setl   %al
 85f8d1f:	84 c0                	test   %al,%al
 85f8d21:	75 d5                	jne    85f8cf8 <_ZN15RegenerationROI28RegenVer_get_option_quantityEii+0x44>
 85f8d23:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85f8d26:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 85f8d29:	8b 45 08             	mov    0x8(%ebp),%eax
 85f8d2c:	8b 00                	mov    (%eax),%eax
 85f8d2e:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 85f8d31:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f8d35:	89 04 24             	mov    %eax,(%esp)
 85f8d38:	e8 81 2d ad ff       	call   80cbabe <_ZN7CMTRand7randIntERKm>
 85f8d3d:	89 45 e8             	mov    %eax,-0x18(%ebp)
 85f8d40:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 85f8d47:	8b 45 0c             	mov    0xc(%ebp),%eax
 85f8d4a:	83 e8 01             	sub    $0x1,%eax
 85f8d4d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85f8d50:	eb 2e                	jmp    85f8d80 <_ZN15RegenerationROI28RegenVer_get_option_quantityEii+0xcc>
 85f8d52:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85f8d55:	8b 55 08             	mov    0x8(%ebp),%edx
 85f8d58:	83 c2 34             	add    $0x34,%edx
 85f8d5b:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f8d5f:	89 14 24             	mov    %edx,(%esp)
 85f8d62:	e8 75 54 a9 ff       	call   808e1dc <_ZNSt6vectorIiSaIiEEixEj>
 85f8d67:	8b 00                	mov    (%eax),%eax
 85f8d69:	01 45 ec             	add    %eax,-0x14(%ebp)
 85f8d6c:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85f8d6f:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 85f8d72:	7f 08                	jg     85f8d7c <_ZN15RegenerationROI28RegenVer_get_option_quantityEii+0xc8>
 85f8d74:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85f8d77:	83 c0 01             	add    $0x1,%eax
 85f8d7a:	eb 28                	jmp    85f8da4 <_ZN15RegenerationROI28RegenVer_get_option_quantityEii+0xf0>
 85f8d7c:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85f8d80:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85f8d83:	3b 45 10             	cmp    0x10(%ebp),%eax
 85f8d86:	0f 9c c0             	setl   %al
 85f8d89:	84 c0                	test   %al,%al
 85f8d8b:	75 c5                	jne    85f8d52 <_ZN15RegenerationROI28RegenVer_get_option_quantityEii+0x9e>
 85f8d8d:	8b 45 0c             	mov    0xc(%ebp),%eax
 85f8d90:	8b 55 08             	mov    0x8(%ebp),%edx
 85f8d93:	83 c2 34             	add    $0x34,%edx
 85f8d96:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f8d9a:	89 14 24             	mov    %edx,(%esp)
 85f8d9d:	e8 3a 54 a9 ff       	call   808e1dc <_ZNSt6vectorIiSaIiEEixEj>
 85f8da2:	8b 00                	mov    (%eax),%eax
 85f8da4:	c9                   	leave
 85f8da5:	c3                   	ret

```

```c
// RegenerationROI::RegenVer_get_option_quantity @ 0x85f8cb4

/* RegenerationROI::RegenVer_get_option_quantity(int, int) */

int __thiscall
RegenerationROI::RegenVer_get_option_quantity(RegenerationROI *this,int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  ulong local_20;
  ulong local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  
  if ((param_1 < 0) || (3 < param_1)) {
    iVar1 = 0;
  }
  else if ((param_2 < 0) || (3 < param_2)) {
    iVar1 = 0;
  }
  else {
    local_1c = 0;
    for (local_14 = param_1 - 1; (int)local_14 < param_2; local_14 = local_14 + 1) {
      piVar2 = (int *)std::vector<int,std::allocator<int>>::operator[]
                                ((vector<int,std::allocator<int>> *)(this + 0x34),local_14);
      local_1c = local_1c + *piVar2;
    }
    local_20 = local_1c;
    local_1c = CMTRand::randInt(*(CMTRand **)this,&local_20);
    local_18 = 0;
    for (local_10 = param_1 - 1; (int)local_10 < param_2; local_10 = local_10 + 1) {
      piVar2 = (int *)std::vector<int,std::allocator<int>>::operator[]
                                ((vector<int,std::allocator<int>> *)(this + 0x34),local_10);
      local_18 = local_18 + *piVar2;
      if ((int)local_1c <= local_18) {
        return local_10 + 1;
      }
    }
    piVar2 = (int *)std::vector<int,std::allocator<int>>::operator[]
                              ((vector<int,std::allocator<int>> *)(this + 0x34),param_1);
    iVar1 = *piVar2;
  }
  return iVar1;
}

```

---

## RegenVer_get_option_value

```asm
// === 085f8da6 RegenerationROI::RegenVer_get_option_value  [0x085f8da6-0x85f8ec1] ===
 85f8da6:	55                   	push   %ebp
 85f8da7:	89 e5                	mov    %esp,%ebp
 85f8da9:	83 ec 58             	sub    $0x58,%esp
 85f8dac:	8b 45 08             	mov    0x8(%ebp),%eax
 85f8daf:	8b 40 4c             	mov    0x4c(%eax),%eax
 85f8db2:	89 45 dc             	mov    %eax,-0x24(%ebp)
 85f8db5:	8b 45 08             	mov    0x8(%ebp),%eax
 85f8db8:	8b 00                	mov    (%eax),%eax
 85f8dba:	8d 55 dc             	lea    -0x24(%ebp),%edx
 85f8dbd:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f8dc1:	89 04 24             	mov    %eax,(%esp)
 85f8dc4:	e8 f5 2c ad ff       	call   80cbabe <_ZN7CMTRand7randIntERKm>
 85f8dc9:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 85f8dcc:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 85f8dd3:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85f8dd6:	89 04 24             	mov    %eax,(%esp)
 85f8dd9:	e8 98 b3 ff ff       	call   85f4176 <_ZN16OptionValueRatioC1Ev>
 85f8dde:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85f8de5:	eb 5e                	jmp    85f8e45 <_ZN15RegenerationROI25RegenVer_get_option_valueEii+0x9f>
 85f8de7:	8b 45 08             	mov    0x8(%ebp),%eax
 85f8dea:	8d 50 40             	lea    0x40(%eax),%edx
 85f8ded:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85f8df0:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f8df4:	89 14 24             	mov    %edx,(%esp)
 85f8df7:	e8 04 0c 00 00       	call   85f9a00 <_ZNSt6vectorI23_str_option_value_ratioSaIS0_EEixEj>
 85f8dfc:	8b 40 08             	mov    0x8(%eax),%eax
 85f8dff:	01 45 e8             	add    %eax,-0x18(%ebp)
 85f8e02:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85f8e05:	3b 45 e8             	cmp    -0x18(%ebp),%eax
 85f8e08:	77 37                	ja     85f8e41 <_ZN15RegenerationROI25RegenVer_get_option_valueEii+0x9b>
 85f8e0a:	8b 45 08             	mov    0x8(%ebp),%eax
 85f8e0d:	8d 50 40             	lea    0x40(%eax),%edx
 85f8e10:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85f8e13:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f8e17:	89 14 24             	mov    %edx,(%esp)
 85f8e1a:	e8 e1 0b 00 00       	call   85f9a00 <_ZNSt6vectorI23_str_option_value_ratioSaIS0_EEixEj>
 85f8e1f:	8b 40 04             	mov    0x4(%eax),%eax
 85f8e22:	89 45 d0             	mov    %eax,-0x30(%ebp)
 85f8e25:	8b 45 08             	mov    0x8(%ebp),%eax
 85f8e28:	8d 50 40             	lea    0x40(%eax),%edx
 85f8e2b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85f8e2e:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f8e32:	89 14 24             	mov    %edx,(%esp)
 85f8e35:	e8 c6 0b 00 00       	call   85f9a00 <_ZNSt6vectorI23_str_option_value_ratioSaIS0_EEixEj>
 85f8e3a:	8b 00                	mov    (%eax),%eax
 85f8e3c:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 85f8e3f:	eb 1c                	jmp    85f8e5d <_ZN15RegenerationROI25RegenVer_get_option_valueEii+0xb7>
 85f8e41:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85f8e45:	8b 45 08             	mov    0x8(%ebp),%eax
 85f8e48:	83 c0 40             	add    $0x40,%eax
 85f8e4b:	89 04 24             	mov    %eax,(%esp)
 85f8e4e:	e8 8b 0b 00 00       	call   85f99de <_ZNKSt6vectorI23_str_option_value_ratioSaIS0_EE4sizeEv>
 85f8e53:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 85f8e56:	0f 97 c0             	seta   %al
 85f8e59:	84 c0                	test   %al,%al
 85f8e5b:	75 8a                	jne    85f8de7 <_ZN15RegenerationROI25RegenVer_get_option_valueEii+0x41>
 85f8e5d:	8b 45 0c             	mov    0xc(%ebp),%eax
 85f8e60:	8b 55 10             	mov    0x10(%ebp),%edx
 85f8e63:	89 d1                	mov    %edx,%ecx
 85f8e65:	29 c1                	sub    %eax,%ecx
 85f8e67:	89 c8                	mov    %ecx,%eax
 85f8e69:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 85f8e6c:	db 45 c4             	fildl  -0x3c(%ebp)
 85f8e6f:	d9 45 d0             	flds   -0x30(%ebp)
 85f8e72:	de c9                	fmulp  %st,%st(1)
 85f8e74:	d9 7d c2             	fnstcw -0x3e(%ebp)
 85f8e77:	0f b7 45 c2          	movzwl -0x3e(%ebp),%eax
 85f8e7b:	b4 0c                	mov    $0xc,%ah
 85f8e7d:	66 89 45 c0          	mov    %ax,-0x40(%ebp)
 85f8e81:	d9 6d c0             	fldcw  -0x40(%ebp)
 85f8e84:	db 5d ec             	fistpl -0x14(%ebp)
 85f8e87:	d9 6d c2             	fldcw  -0x3e(%ebp)
 85f8e8a:	db 45 0c             	fildl  0xc(%ebp)
 85f8e8d:	d9 45 d4             	flds   -0x2c(%ebp)
 85f8e90:	de c9                	fmulp  %st,%st(1)
 85f8e92:	d9 6d c0             	fldcw  -0x40(%ebp)
 85f8e95:	db 5d f0             	fistpl -0x10(%ebp)
 85f8e98:	d9 6d c2             	fldcw  -0x3e(%ebp)
 85f8e9b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85f8e9e:	89 45 e0             	mov    %eax,-0x20(%ebp)
 85f8ea1:	8b 45 08             	mov    0x8(%ebp),%eax
 85f8ea4:	8b 00                	mov    (%eax),%eax
 85f8ea6:	8d 55 e0             	lea    -0x20(%ebp),%edx
 85f8ea9:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f8ead:	89 04 24             	mov    %eax,(%esp)
 85f8eb0:	e8 09 2c ad ff       	call   80cbabe <_ZN7CMTRand7randIntERKm>
 85f8eb5:	8b 55 f0             	mov    -0x10(%ebp),%edx
 85f8eb8:	01 d0                	add    %edx,%eax
 85f8eba:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 85f8ebd:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85f8ec0:	c9                   	leave
 85f8ec1:	c3                   	ret

```

```c
// RegenerationROI::RegenVer_get_option_value @ 0x85f8da6

/* RegenerationROI::RegenVer_get_option_value(int, int) */

int __thiscall
RegenerationROI::RegenVer_get_option_value(RegenerationROI *this,int param_1,int param_2)

{
  float *pfVar1;
  uint uVar2;
  int iVar3;
  float local_34;
  float local_30;
  ulong local_28;
  ulong local_24;
  uint local_20;
  uint local_1c;
  ulong local_18;
  int local_14;
  uint local_10;
  
  local_28 = *(ulong *)(this + 0x4c);
  local_20 = CMTRand::randInt(*(CMTRand **)this,&local_28);
  local_1c = 0;
  OptionValueRatio::OptionValueRatio((OptionValueRatio *)&local_34);
  local_10 = 0;
  do {
    uVar2 = std::vector<_str_option_value_ratio,std::allocator<_str_option_value_ratio>>::size
                      ((vector<_str_option_value_ratio,std::allocator<_str_option_value_ratio>> *)
                       (this + 0x40));
    if (uVar2 <= local_10) {
LAB_085f8e5d:
      local_24 = (ulong)ROUND(local_34 * (float)(param_2 - param_1));
      local_14 = (int)ROUND(local_30 * (float)param_1);
      local_18 = local_24;
      iVar3 = CMTRand::randInt(*(CMTRand **)this,&local_24);
      return iVar3 + local_14;
    }
    iVar3 = std::vector<_str_option_value_ratio,std::allocator<_str_option_value_ratio>>::operator[]
                      ((vector<_str_option_value_ratio,std::allocator<_str_option_value_ratio>> *)
                       (this + 0x40),local_10);
    local_1c = local_1c + *(int *)(iVar3 + 8);
    if (local_20 <= local_1c) {
      iVar3 = std::vector<_str_option_value_ratio,std::allocator<_str_option_value_ratio>>::
              operator[]((vector<_str_option_value_ratio,std::allocator<_str_option_value_ratio>> *)
                         (this + 0x40),local_10);
      local_34 = *(float *)(iVar3 + 4);
      pfVar1 = (float *)std::vector<_str_option_value_ratio,std::allocator<_str_option_value_ratio>>
                        ::operator[]((vector<_str_option_value_ratio,std::allocator<_str_option_value_ratio>>
                                      *)(this + 0x40),local_10);
      local_30 = *pfVar1;
      goto LAB_085f8e5d;
    }
    local_10 = local_10 + 1;
  } while( true );
}

```

---

## Regenerate

```asm
// === 085f8646 RegenerationROI::Regenerate  [0x085f8646-0x85f8cb3] ===
 85f8646:	55                   	push   %ebp
 85f8647:	89 e5                	mov    %esp,%ebp
 85f8649:	57                   	push   %edi
 85f864a:	56                   	push   %esi
 85f864b:	53                   	push   %ebx
 85f864c:	81 ec 5c 01 00 00    	sub    $0x15c,%esp
 85f8652:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 85f8659:	00 
 85f865a:	c7 04 24 10 00 00 00 	movl   $0x10,(%esp)
 85f8661:	e8 55 fb b6 ff       	call   81681bb <_ZStorSt13_Ios_OpenmodeS_>
 85f8666:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f866a:	8d 85 dc fe ff ff    	lea    -0x124(%ebp),%eax
 85f8670:	89 04 24             	mov    %eax,(%esp)
 85f8673:	e8 a8 8d 10 00       	call   8701420 <_ZNSt18basic_stringstreamIcSt11char_traitsIcESaIcEEC1ESt13_Ios_Openmode>
 85f8678:	8d 45 a8             	lea    -0x58(%ebp),%eax
 85f867b:	89 04 24             	mov    %eax,(%esp)
 85f867e:	e8 29 11 00 00       	call   85f97ac <_ZN16select_base_itemC1Ev>
 85f8683:	8d 85 dc fe ff ff    	lea    -0x124(%ebp),%eax
 85f8689:	89 44 24 10          	mov    %eax,0x10(%esp)
 85f868d:	8d 45 a8             	lea    -0x58(%ebp),%eax
 85f8690:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85f8694:	8b 45 10             	mov    0x10(%ebp),%eax
 85f8697:	89 44 24 08          	mov    %eax,0x8(%esp)
 85f869b:	8b 45 0c             	mov    0xc(%ebp),%eax
 85f869e:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f86a2:	8b 45 08             	mov    0x8(%ebp),%eax
 85f86a5:	89 04 24             	mov    %eax,(%esp)
 85f86a8:	e8 1f 0d 00 00       	call   85f93cc <_ZN15RegenerationROI12_RandomLevelEiiR16select_base_itemRSt18basic_stringstreamIcSt11char_traitsIcESaIcEE>
 85f86ad:	b8 00 31 47 09       	mov    $0x9473100,%eax
 85f86b2:	0f b6 00             	movzbl (%eax),%eax
 85f86b5:	84 c0                	test   %al,%al
 85f86b7:	75 6e                	jne    85f8727 <_ZN15RegenerationROI10RegenerateEiiiiRiR10Inven_ItemP5CUser+0xe1>
 85f86b9:	c7 04 24 00 31 47 09 	movl   $0x9473100,(%esp)
 85f86c0:	e8 6b cc 12 00       	call   8725330 <__cxa_guard_acquire>
 85f86c5:	85 c0                	test   %eax,%eax
 85f86c7:	0f 95 c0             	setne  %al
 85f86ca:	84 c0                	test   %al,%al
 85f86cc:	74 59                	je     85f8727 <_ZN15RegenerationROI10RegenerateEiiiiRiR10Inven_ItemP5CUser+0xe1>
 85f86ce:	bb 00 00 00 00       	mov    $0x0,%ebx
 85f86d3:	c7 04 24 08 31 47 09 	movl   $0x9473108,(%esp)
 85f86da:	e8 85 86 ff ff       	call   85f0d64 <_ZN13random_option23CRandomOptionItemHandleC1Ev>
 85f86df:	c7 04 24 00 31 47 09 	movl   $0x9473100,(%esp)
 85f86e6:	e8 65 cb 12 00       	call   8725250 <__cxa_guard_release>
 85f86eb:	b8 46 0e 5f 08       	mov    $0x85f0e46,%eax
 85f86f0:	c7 44 24 08 48 58 ae 	movl   $0x8ae5848,0x8(%esp)
 85f86f7:	08 
 85f86f8:	c7 44 24 04 08 31 47 	movl   $0x9473108,0x4(%esp)
 85f86ff:	09 
 85f8700:	89 04 24             	mov    %eax,(%esp)
 85f8703:	e8 c8 56 a8 ff       	call   807ddd0 <__cxa_atexit@plt>
 85f8708:	eb 1d                	jmp    85f8727 <_ZN15RegenerationROI10RegenerateEiiiiRiR10Inven_ItemP5CUser+0xe1>
 85f870a:	89 d6                	mov    %edx,%esi
 85f870c:	89 c7                	mov    %eax,%edi
 85f870e:	84 db                	test   %bl,%bl
 85f8710:	75 0c                	jne    85f871e <_ZN15RegenerationROI10RegenerateEiiiiRiR10Inven_ItemP5CUser+0xd8>
 85f8712:	c7 04 24 00 31 47 09 	movl   $0x9473100,(%esp)
 85f8719:	e8 a2 cb 12 00       	call   87252c0 <__cxa_guard_abort>
 85f871e:	89 f8                	mov    %edi,%eax
 85f8720:	89 f2                	mov    %esi,%edx
 85f8722:	e9 53 05 00 00       	jmp    85f8c7a <_ZN15RegenerationROI10RegenerateEiiiiRiR10Inven_ItemP5CUser+0x634>
 85f8727:	83 7d 18 00          	cmpl   $0x0,0x18(%ebp)
 85f872b:	74 10                	je     85f873d <_ZN15RegenerationROI10RegenerateEiiiiRiR10Inven_ItemP5CUser+0xf7>
 85f872d:	83 7d 18 65          	cmpl   $0x65,0x18(%ebp)
 85f8731:	74 0a                	je     85f873d <_ZN15RegenerationROI10RegenerateEiiiiRiR10Inven_ItemP5CUser+0xf7>
 85f8733:	bb 11 00 00 00       	mov    $0x11,%ebx
 85f8738:	e9 5b 05 00 00       	jmp    85f8c98 <_ZN15RegenerationROI10RegenerateEiiiiRiR10Inven_ItemP5CUser+0x652>
 85f873d:	8b 45 10             	mov    0x10(%ebp),%eax
 85f8740:	89 44 24 10          	mov    %eax,0x10(%esp)
 85f8744:	8b 45 0c             	mov    0xc(%ebp),%eax
 85f8747:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85f874b:	8b 45 18             	mov    0x18(%ebp),%eax
 85f874e:	89 44 24 08          	mov    %eax,0x8(%esp)
 85f8752:	8b 45 14             	mov    0x14(%ebp),%eax
 85f8755:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f8759:	8b 45 08             	mov    0x8(%ebp),%eax
 85f875c:	89 04 24             	mov    %eax,(%esp)
 85f875f:	e8 30 09 00 00       	call   85f9094 <_ZN15RegenerationROI20_Calculate_RegenCostEiiii>
 85f8764:	8b 55 1c             	mov    0x1c(%ebp),%edx
 85f8767:	89 02                	mov    %eax,(%edx)
 85f8769:	8b 45 1c             	mov    0x1c(%ebp),%eax
 85f876c:	8b 00                	mov    (%eax),%eax
 85f876e:	83 f8 ff             	cmp    $0xffffffff,%eax
 85f8771:	75 5c                	jne    85f87cf <_ZN15RegenerationROI10RegenerateEiiiiRiR10Inven_ItemP5CUser+0x189>
 85f8773:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 85f877a:	00 
 85f877b:	c7 44 24 08 47 00 00 	movl   $0x47,0x8(%esp)
 85f8782:	00 
 85f8783:	c7 44 24 04 a0 31 cd 	movl   $0x8cd31a0,0x4(%esp)
 85f878a:	08 
 85f878b:	8d 45 c0             	lea    -0x40(%ebp),%eax
 85f878e:	89 04 24             	mov    %eax,(%esp)
 85f8791:	e8 82 6f f5 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 85f8796:	8b 45 10             	mov    0x10(%ebp),%eax
 85f8799:	89 44 24 14          	mov    %eax,0x14(%esp)
 85f879d:	8b 45 0c             	mov    0xc(%ebp),%eax
 85f87a0:	89 44 24 10          	mov    %eax,0x10(%esp)
 85f87a4:	8b 45 18             	mov    0x18(%ebp),%eax
 85f87a7:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85f87ab:	8b 45 14             	mov    0x14(%ebp),%eax
 85f87ae:	89 44 24 08          	mov    %eax,0x8(%esp)
 85f87b2:	c7 44 24 04 d0 23 cd 	movl   $0x8cd23d0,0x4(%esp)
 85f87b9:	08 
 85f87ba:	8d 45 c0             	lea    -0x40(%ebp),%eax
 85f87bd:	89 04 24             	mov    %eax,(%esp)
 85f87c0:	e8 c3 6f f5 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 85f87c5:	bb 11 00 00 00       	mov    $0x11,%ebx
 85f87ca:	e9 c9 04 00 00       	jmp    85f8c98 <_ZN15RegenerationROI10RegenerateEiiiiRiR10Inven_ItemP5CUser+0x652>
 85f87cf:	8d 45 9c             	lea    -0x64(%ebp),%eax
 85f87d2:	89 04 24             	mov    %eax,(%esp)
 85f87d5:	e8 d2 59 a9 ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 85f87da:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 85f87de:	74 19                	je     85f87f9 <_ZN15RegenerationROI10RegenerateEiiiiRiR10Inven_ItemP5CUser+0x1b3>
 85f87e0:	8d 45 9c             	lea    -0x64(%ebp),%eax
 85f87e3:	89 44 24 08          	mov    %eax,0x8(%esp)
 85f87e7:	8b 45 14             	mov    0x14(%ebp),%eax
 85f87ea:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f87ee:	8b 45 08             	mov    0x8(%ebp),%eax
 85f87f1:	89 04 24             	mov    %eax,(%esp)
 85f87f4:	e8 c9 06 00 00       	call   85f8ec2 <_ZN15RegenerationROI12_Select_PartEiRSt6vectorIiSaIiEE>
 85f87f9:	83 7d 14 ff          	cmpl   $0xffffffff,0x14(%ebp)
 85f87fd:	75 0a                	jne    85f8809 <_ZN15RegenerationROI10RegenerateEiiiiRiR10Inven_ItemP5CUser+0x1c3>
 85f87ff:	bb 11 00 00 00       	mov    $0x11,%ebx
 85f8804:	e9 64 04 00 00       	jmp    85f8c6d <_ZN15RegenerationROI10RegenerateEiiiiRiR10Inven_ItemP5CUser+0x627>
 85f8809:	8b 45 a8             	mov    -0x58(%ebp),%eax
 85f880c:	8d 55 9c             	lea    -0x64(%ebp),%edx
 85f880f:	89 54 24 0c          	mov    %edx,0xc(%esp)
 85f8813:	89 44 24 08          	mov    %eax,0x8(%esp)
 85f8817:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 85f881e:	00 
 85f881f:	c7 04 24 08 31 47 09 	movl   $0x9473108,(%esp)
 85f8826:	e8 d7 8f ff ff       	call   85f1802 <_ZN13random_option23CRandomOptionItemHandle20RegenVer_choose_itemE11ENUM_RARITYiRKSt6vectorIiSaIiEE>
 85f882b:	89 45 dc             	mov    %eax,-0x24(%ebp)
 85f882e:	c7 44 24 04 f1 23 cd 	movl   $0x8cd23f1,0x4(%esp)
 85f8835:	08 
 85f8836:	8d 85 dc fe ff ff    	lea    -0x124(%ebp),%eax
 85f883c:	83 c0 08             	add    $0x8,%eax
 85f883f:	89 04 24             	mov    %eax,(%esp)
 85f8842:	e8 b9 4a 10 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 85f8847:	8b 55 dc             	mov    -0x24(%ebp),%edx
 85f884a:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f884e:	89 04 24             	mov    %eax,(%esp)
 85f8851:	e8 da 75 10 00       	call   86ffe30 <_ZNSolsEm>
 85f8856:	c7 44 24 04 04 24 cd 	movl   $0x8cd2404,0x4(%esp)
 85f885d:	08 
 85f885e:	89 04 24             	mov    %eax,(%esp)
 85f8861:	e8 9a 4a 10 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 85f8866:	8b 5d dc             	mov    -0x24(%ebp),%ebx
 85f8869:	e8 2d 39 ad ff       	call   80cc19b <_Z14G_CDataManagerv>
 85f886e:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85f8872:	89 04 24             	mov    %eax,(%esp)
 85f8875:	e8 b8 71 d6 ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 85f887a:	89 45 e0             	mov    %eax,-0x20(%ebp)
 85f887d:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 85f8881:	0f 85 81 00 00 00    	jne    85f8908 <_ZN15RegenerationROI10RegenerateEiiiiRiR10Inven_ItemP5CUser+0x2c2>
 85f8887:	c7 44 24 04 06 24 cd 	movl   $0x8cd2406,0x4(%esp)
 85f888e:	08 
 85f888f:	8d 85 dc fe ff ff    	lea    -0x124(%ebp),%eax
 85f8895:	83 c0 08             	add    $0x8,%eax
 85f8898:	89 04 24             	mov    %eax,(%esp)
 85f889b:	e8 60 4a 10 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 85f88a0:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85f88a3:	8d 95 dc fe ff ff    	lea    -0x124(%ebp),%edx
 85f88a9:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f88ad:	89 04 24             	mov    %eax,(%esp)
 85f88b0:	e8 9b c0 10 00       	call   8704950 <_ZNKSt18basic_stringstreamIcSt11char_traitsIcESaIcEE3strEv>
 85f88b5:	83 ec 04             	sub    $0x4,%esp
 85f88b8:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85f88bb:	89 04 24             	mov    %eax,(%esp)
 85f88be:	e8 2d dc 10 00       	call   87064f0 <_ZNKSs5c_strEv>
 85f88c3:	89 44 24 08          	mov    %eax,0x8(%esp)
 85f88c7:	8b 45 24             	mov    0x24(%ebp),%eax
 85f88ca:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f88ce:	8b 45 08             	mov    0x8(%ebp),%eax
 85f88d1:	89 04 24             	mov    %eax,(%esp)
 85f88d4:	e8 63 fc ff ff       	call   85f853c <_ZN15RegenerationROI18SendMessageToCUserEP5CUserPKc>
 85f88d9:	eb 18                	jmp    85f88f3 <_ZN15RegenerationROI10RegenerateEiiiiRiR10Inven_ItemP5CUser+0x2ad>
 85f88db:	89 d3                	mov    %edx,%ebx
 85f88dd:	89 c6                	mov    %eax,%esi
 85f88df:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85f88e2:	89 04 24             	mov    %eax,(%esp)
 85f88e5:	e8 f6 f2 10 00       	call   8707be0 <_ZNSsD1Ev>
 85f88ea:	89 f0                	mov    %esi,%eax
 85f88ec:	89 da                	mov    %ebx,%edx
 85f88ee:	e9 65 03 00 00       	jmp    85f8c58 <_ZN15RegenerationROI10RegenerateEiiiiRiR10Inven_ItemP5CUser+0x612>
 85f88f3:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85f88f6:	89 04 24             	mov    %eax,(%esp)
 85f88f9:	e8 e2 f2 10 00       	call   8707be0 <_ZNSsD1Ev>
 85f88fe:	bb 11 00 00 00       	mov    $0x11,%ebx
 85f8903:	e9 65 03 00 00       	jmp    85f8c6d <_ZN15RegenerationROI10RegenerateEiiiiRiR10Inven_ItemP5CUser+0x627>
 85f8908:	8b 45 e0             	mov    -0x20(%ebp),%eax
 85f890b:	89 04 24             	mov    %eax,(%esp)
 85f890e:	e8 c3 89 af ff       	call   80f12d6 <_ZNK5CItem10get_rarityEv>
 85f8913:	88 45 98             	mov    %al,-0x68(%ebp)
 85f8916:	8b 45 e0             	mov    -0x20(%ebp),%eax
 85f8919:	89 04 24             	mov    %eax,(%esp)
 85f891c:	e8 cd 89 af ff       	call   80f12ee <_ZNK5CItem14getUsableLevelEv>
 85f8921:	66 89 45 9a          	mov    %ax,-0x66(%ebp)
 85f8925:	8b 45 e0             	mov    -0x20(%ebp),%eax
 85f8928:	8b 00                	mov    (%eax),%eax
 85f892a:	83 c0 50             	add    $0x50,%eax
 85f892d:	8b 10                	mov    (%eax),%edx
 85f892f:	8b 45 e0             	mov    -0x20(%ebp),%eax
 85f8932:	89 04 24             	mov    %eax,(%esp)
 85f8935:	ff d2                	call   *%edx
 85f8937:	88 45 99             	mov    %al,-0x67(%ebp)
 85f893a:	0f b6 45 99          	movzbl -0x67(%ebp),%eax
 85f893e:	0f be d8             	movsbl %al,%ebx
 85f8941:	0f b7 45 9a          	movzwl -0x66(%ebp),%eax
 85f8945:	0f b7 f0             	movzwl %ax,%esi
 85f8948:	0f b6 45 98          	movzbl -0x68(%ebp),%eax
 85f894c:	0f be f8             	movsbl %al,%edi
 85f894f:	c7 44 24 04 19 24 cd 	movl   $0x8cd2419,0x4(%esp)
 85f8956:	08 
 85f8957:	8d 85 dc fe ff ff    	lea    -0x124(%ebp),%eax
 85f895d:	83 c0 08             	add    $0x8,%eax
 85f8960:	89 04 24             	mov    %eax,(%esp)
 85f8963:	e8 98 49 10 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 85f8968:	89 7c 24 04          	mov    %edi,0x4(%esp)
 85f896c:	89 04 24             	mov    %eax,(%esp)
 85f896f:	e8 cc 76 10 00       	call   8700040 <_ZNSolsEi>
 85f8974:	c7 44 24 04 23 24 cd 	movl   $0x8cd2423,0x4(%esp)
 85f897b:	08 
 85f897c:	89 04 24             	mov    %eax,(%esp)
 85f897f:	e8 7c 49 10 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 85f8984:	89 74 24 04          	mov    %esi,0x4(%esp)
 85f8988:	89 04 24             	mov    %eax,(%esp)
 85f898b:	e8 80 74 10 00       	call   86ffe10 <_ZNSolsEt>
 85f8990:	c7 44 24 04 2d 24 cd 	movl   $0x8cd242d,0x4(%esp)
 85f8997:	08 
 85f8998:	89 04 24             	mov    %eax,(%esp)
 85f899b:	e8 60 49 10 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 85f89a0:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85f89a4:	89 04 24             	mov    %eax,(%esp)
 85f89a7:	e8 94 76 10 00       	call   8700040 <_ZNSolsEi>
 85f89ac:	c7 44 24 04 04 24 cd 	movl   $0x8cd2404,0x4(%esp)
 85f89b3:	08 
 85f89b4:	89 04 24             	mov    %eax,(%esp)
 85f89b7:	e8 44 49 10 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 85f89bc:	8b 45 20             	mov    0x20(%ebp),%eax
 85f89bf:	89 04 24             	mov    %eax,(%esp)
 85f89c2:	e8 11 2e ad ff       	call   80cb7d8 <_ZN10Inven_Item5resetEv>
 85f89c7:	8b 45 20             	mov    0x20(%ebp),%eax
 85f89ca:	8b 55 dc             	mov    -0x24(%ebp),%edx
 85f89cd:	89 50 02             	mov    %edx,0x2(%eax)
 85f89d0:	e8 c6 37 ad ff       	call   80cc19b <_Z14G_CDataManagerv>
 85f89d5:	8b 40 0c             	mov    0xc(%eax),%eax
 85f89d8:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 85f89df:	00 
 85f89e0:	8b 55 20             	mov    0x20(%ebp),%edx
 85f89e3:	89 54 24 08          	mov    %edx,0x8(%esp)
 85f89e7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85f89ee:	00 
 85f89ef:	89 04 24             	mov    %eax,(%esp)
 85f89f2:	e8 c1 95 f1 ff       	call   8511fb8 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi>
 85f89f7:	8b 45 20             	mov    0x20(%ebp),%eax
 85f89fa:	83 c0 25             	add    $0x25,%eax
 85f89fd:	89 85 d4 fe ff ff    	mov    %eax,-0x12c(%ebp)
 85f8a03:	8b 45 e0             	mov    -0x20(%ebp),%eax
 85f8a06:	8b 00                	mov    (%eax),%eax
 85f8a08:	83 c0 50             	add    $0x50,%eax
 85f8a0b:	8b 10                	mov    (%eax),%edx
 85f8a0d:	8b 45 e0             	mov    -0x20(%ebp),%eax
 85f8a10:	89 04 24             	mov    %eax,(%esp)
 85f8a13:	ff d2                	call   *%edx
 85f8a15:	89 c7                	mov    %eax,%edi
 85f8a17:	8b 45 e0             	mov    -0x20(%ebp),%eax
 85f8a1a:	89 04 24             	mov    %eax,(%esp)
 85f8a1d:	e8 f0 88 af ff       	call   80f1312 <_ZNK5CItem16getItemGroupNameEv>
 85f8a22:	89 c6                	mov    %eax,%esi
 85f8a24:	8b 45 e0             	mov    -0x20(%ebp),%eax
 85f8a27:	89 04 24             	mov    %eax,(%esp)
 85f8a2a:	e8 bf 88 af ff       	call   80f12ee <_ZNK5CItem14getUsableLevelEv>
 85f8a2f:	89 c3                	mov    %eax,%ebx
 85f8a31:	8b 45 e0             	mov    -0x20(%ebp),%eax
 85f8a34:	89 04 24             	mov    %eax,(%esp)
 85f8a37:	e8 9a 88 af ff       	call   80f12d6 <_ZNK5CItem10get_rarityEv>
 85f8a3c:	8b 55 18             	mov    0x18(%ebp),%edx
 85f8a3f:	89 54 24 20          	mov    %edx,0x20(%esp)
 85f8a43:	8b 55 08             	mov    0x8(%ebp),%edx
 85f8a46:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 85f8a4a:	8b 95 d4 fe ff ff    	mov    -0x12c(%ebp),%edx
 85f8a50:	89 54 24 18          	mov    %edx,0x18(%esp)
 85f8a54:	89 7c 24 14          	mov    %edi,0x14(%esp)
 85f8a58:	89 74 24 10          	mov    %esi,0x10(%esp)
 85f8a5c:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 85f8a60:	89 44 24 08          	mov    %eax,0x8(%esp)
 85f8a64:	8b 45 dc             	mov    -0x24(%ebp),%eax
 85f8a67:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f8a6b:	c7 04 24 08 31 47 09 	movl   $0x9473108,(%esp)
 85f8a72:	e8 39 91 ff ff       	call   85f1bb0 <_ZN13random_option23CRandomOptionItemHandle20RegenVer_give_optionEm11ENUM_RARITYiiiP12RandomOptionP15RegenerationROIi>
 85f8a77:	83 f0 01             	xor    $0x1,%eax
 85f8a7a:	84 c0                	test   %al,%al
 85f8a7c:	0f 84 81 00 00 00    	je     85f8b03 <_ZN15RegenerationROI10RegenerateEiiiiRiR10Inven_ItemP5CUser+0x4bd>
 85f8a82:	c7 44 24 04 40 24 cd 	movl   $0x8cd2440,0x4(%esp)
 85f8a89:	08 
 85f8a8a:	8d 85 dc fe ff ff    	lea    -0x124(%ebp),%eax
 85f8a90:	83 c0 08             	add    $0x8,%eax
 85f8a93:	89 04 24             	mov    %eax,(%esp)
 85f8a96:	e8 65 48 10 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 85f8a9b:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85f8a9e:	8d 95 dc fe ff ff    	lea    -0x124(%ebp),%edx
 85f8aa4:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f8aa8:	89 04 24             	mov    %eax,(%esp)
 85f8aab:	e8 a0 be 10 00       	call   8704950 <_ZNKSt18basic_stringstreamIcSt11char_traitsIcESaIcEE3strEv>
 85f8ab0:	83 ec 04             	sub    $0x4,%esp
 85f8ab3:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85f8ab6:	89 04 24             	mov    %eax,(%esp)
 85f8ab9:	e8 32 da 10 00       	call   87064f0 <_ZNKSs5c_strEv>
 85f8abe:	89 44 24 08          	mov    %eax,0x8(%esp)
 85f8ac2:	8b 45 24             	mov    0x24(%ebp),%eax
 85f8ac5:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f8ac9:	8b 45 08             	mov    0x8(%ebp),%eax
 85f8acc:	89 04 24             	mov    %eax,(%esp)
 85f8acf:	e8 68 fa ff ff       	call   85f853c <_ZN15RegenerationROI18SendMessageToCUserEP5CUserPKc>
 85f8ad4:	eb 18                	jmp    85f8aee <_ZN15RegenerationROI10RegenerateEiiiiRiR10Inven_ItemP5CUser+0x4a8>
 85f8ad6:	89 d3                	mov    %edx,%ebx
 85f8ad8:	89 c6                	mov    %eax,%esi
 85f8ada:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85f8add:	89 04 24             	mov    %eax,(%esp)
 85f8ae0:	e8 fb f0 10 00       	call   8707be0 <_ZNSsD1Ev>
 85f8ae5:	89 f0                	mov    %esi,%eax
 85f8ae7:	89 da                	mov    %ebx,%edx
 85f8ae9:	e9 6a 01 00 00       	jmp    85f8c58 <_ZN15RegenerationROI10RegenerateEiiiiRiR10Inven_ItemP5CUser+0x612>
 85f8aee:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85f8af1:	89 04 24             	mov    %eax,(%esp)
 85f8af4:	e8 e7 f0 10 00       	call   8707be0 <_ZNSsD1Ev>
 85f8af9:	bb 13 00 00 00       	mov    $0x13,%ebx
 85f8afe:	e9 6a 01 00 00       	jmp    85f8c6d <_ZN15RegenerationROI10RegenerateEiiiiRiR10Inven_ItemP5CUser+0x627>
 85f8b03:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 85f8b0a:	e9 d8 00 00 00       	jmp    85f8be7 <_ZN15RegenerationROI10RegenerateEiiiiRiR10Inven_ItemP5CUser+0x5a1>
 85f8b0f:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 85f8b12:	8b 4d 20             	mov    0x20(%ebp),%ecx
 85f8b15:	89 d0                	mov    %edx,%eax
 85f8b17:	01 c0                	add    %eax,%eax
 85f8b19:	01 d0                	add    %edx,%eax
 85f8b1b:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 85f8b1e:	83 c0 27             	add    $0x27,%eax
 85f8b21:	0f b6 00             	movzbl (%eax),%eax
 85f8b24:	0f b6 d8             	movzbl %al,%ebx
 85f8b27:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 85f8b2a:	8b 4d 20             	mov    0x20(%ebp),%ecx
 85f8b2d:	89 d0                	mov    %edx,%eax
 85f8b2f:	01 c0                	add    %eax,%eax
 85f8b31:	01 d0                	add    %edx,%eax
 85f8b33:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 85f8b36:	83 c0 26             	add    $0x26,%eax
 85f8b39:	0f b6 00             	movzbl (%eax),%eax
 85f8b3c:	0f b6 f0             	movzbl %al,%esi
 85f8b3f:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 85f8b42:	8b 4d 20             	mov    0x20(%ebp),%ecx
 85f8b45:	89 d0                	mov    %edx,%eax
 85f8b47:	01 c0                	add    %eax,%eax
 85f8b49:	01 d0                	add    %edx,%eax
 85f8b4b:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 85f8b4e:	83 c0 25             	add    $0x25,%eax
 85f8b51:	0f b6 00             	movzbl (%eax),%eax
 85f8b54:	0f b6 f8             	movzbl %al,%edi
 85f8b57:	c7 44 24 04 53 24 cd 	movl   $0x8cd2453,0x4(%esp)
 85f8b5e:	08 
 85f8b5f:	8d 85 dc fe ff ff    	lea    -0x124(%ebp),%eax
 85f8b65:	83 c0 08             	add    $0x8,%eax
 85f8b68:	89 04 24             	mov    %eax,(%esp)
 85f8b6b:	e8 90 47 10 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 85f8b70:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 85f8b73:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f8b77:	89 04 24             	mov    %eax,(%esp)
 85f8b7a:	e8 c1 74 10 00       	call   8700040 <_ZNSolsEi>
 85f8b7f:	c7 44 24 04 55 24 cd 	movl   $0x8cd2455,0x4(%esp)
 85f8b86:	08 
 85f8b87:	89 04 24             	mov    %eax,(%esp)
 85f8b8a:	e8 71 47 10 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 85f8b8f:	89 7c 24 04          	mov    %edi,0x4(%esp)
 85f8b93:	89 04 24             	mov    %eax,(%esp)
 85f8b96:	e8 a5 74 10 00       	call   8700040 <_ZNSolsEi>
 85f8b9b:	c7 44 24 04 59 24 cd 	movl   $0x8cd2459,0x4(%esp)
 85f8ba2:	08 
 85f8ba3:	89 04 24             	mov    %eax,(%esp)
 85f8ba6:	e8 55 47 10 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 85f8bab:	89 74 24 04          	mov    %esi,0x4(%esp)
 85f8baf:	89 04 24             	mov    %eax,(%esp)
 85f8bb2:	e8 89 74 10 00       	call   8700040 <_ZNSolsEi>
 85f8bb7:	c7 44 24 04 59 24 cd 	movl   $0x8cd2459,0x4(%esp)
 85f8bbe:	08 
 85f8bbf:	89 04 24             	mov    %eax,(%esp)
 85f8bc2:	e8 39 47 10 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 85f8bc7:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85f8bcb:	89 04 24             	mov    %eax,(%esp)
 85f8bce:	e8 6d 74 10 00       	call   8700040 <_ZNSolsEi>
 85f8bd3:	c7 44 24 04 04 24 cd 	movl   $0x8cd2404,0x4(%esp)
 85f8bda:	08 
 85f8bdb:	89 04 24             	mov    %eax,(%esp)
 85f8bde:	e8 1d 47 10 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 85f8be3:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 85f8be7:	83 7d e4 02          	cmpl   $0x2,-0x1c(%ebp)
 85f8beb:	0f 9e c0             	setle  %al
 85f8bee:	84 c0                	test   %al,%al
 85f8bf0:	0f 85 19 ff ff ff    	jne    85f8b0f <_ZN15RegenerationROI10RegenerateEiiiiRiR10Inven_ItemP5CUser+0x4c9>
 85f8bf6:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85f8bf9:	8d 95 dc fe ff ff    	lea    -0x124(%ebp),%edx
 85f8bff:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f8c03:	89 04 24             	mov    %eax,(%esp)
 85f8c06:	e8 45 bd 10 00       	call   8704950 <_ZNKSt18basic_stringstreamIcSt11char_traitsIcESaIcEE3strEv>
 85f8c0b:	83 ec 04             	sub    $0x4,%esp
 85f8c0e:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85f8c11:	89 04 24             	mov    %eax,(%esp)
 85f8c14:	e8 d7 d8 10 00       	call   87064f0 <_ZNKSs5c_strEv>
 85f8c19:	89 44 24 08          	mov    %eax,0x8(%esp)
 85f8c1d:	8b 45 24             	mov    0x24(%ebp),%eax
 85f8c20:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f8c24:	8b 45 08             	mov    0x8(%ebp),%eax
 85f8c27:	89 04 24             	mov    %eax,(%esp)
 85f8c2a:	e8 0d f9 ff ff       	call   85f853c <_ZN15RegenerationROI18SendMessageToCUserEP5CUserPKc>
 85f8c2f:	eb 15                	jmp    85f8c46 <_ZN15RegenerationROI10RegenerateEiiiiRiR10Inven_ItemP5CUser+0x600>
 85f8c31:	89 d3                	mov    %edx,%ebx
 85f8c33:	89 c6                	mov    %eax,%esi
 85f8c35:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85f8c38:	89 04 24             	mov    %eax,(%esp)
 85f8c3b:	e8 a0 ef 10 00       	call   8707be0 <_ZNSsD1Ev>
 85f8c40:	89 f0                	mov    %esi,%eax
 85f8c42:	89 da                	mov    %ebx,%edx
 85f8c44:	eb 12                	jmp    85f8c58 <_ZN15RegenerationROI10RegenerateEiiiiRiR10Inven_ItemP5CUser+0x612>
 85f8c46:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85f8c49:	89 04 24             	mov    %eax,(%esp)
 85f8c4c:	e8 8f ef 10 00       	call   8707be0 <_ZNSsD1Ev>
 85f8c51:	bb 00 00 00 00       	mov    $0x0,%ebx
 85f8c56:	eb 15                	jmp    85f8c6d <_ZN15RegenerationROI10RegenerateEiiiiRiR10Inven_ItemP5CUser+0x627>
 85f8c58:	89 d3                	mov    %edx,%ebx
 85f8c5a:	89 c6                	mov    %eax,%esi
 85f8c5c:	8d 45 9c             	lea    -0x64(%ebp),%eax
 85f8c5f:	89 04 24             	mov    %eax,(%esp)
 85f8c62:	e8 73 b1 a8 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 85f8c67:	89 f0                	mov    %esi,%eax
 85f8c69:	89 da                	mov    %ebx,%edx
 85f8c6b:	eb 0d                	jmp    85f8c7a <_ZN15RegenerationROI10RegenerateEiiiiRiR10Inven_ItemP5CUser+0x634>
 85f8c6d:	8d 45 9c             	lea    -0x64(%ebp),%eax
 85f8c70:	89 04 24             	mov    %eax,(%esp)
 85f8c73:	e8 62 b1 a8 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 85f8c78:	eb 1e                	jmp    85f8c98 <_ZN15RegenerationROI10RegenerateEiiiiRiR10Inven_ItemP5CUser+0x652>
 85f8c7a:	89 d3                	mov    %edx,%ebx
 85f8c7c:	89 c6                	mov    %eax,%esi
 85f8c7e:	8d 85 dc fe ff ff    	lea    -0x124(%ebp),%eax
 85f8c84:	89 04 24             	mov    %eax,(%esp)
 85f8c87:	e8 34 b1 10 00       	call   8703dc0 <_ZNSt18basic_stringstreamIcSt11char_traitsIcESaIcEED1Ev>
 85f8c8c:	89 f0                	mov    %esi,%eax
 85f8c8e:	89 da                	mov    %ebx,%edx
 85f8c90:	89 04 24             	mov    %eax,(%esp)
 85f8c93:	e8 b8 aa 4e 00       	call   8ae3750 <_Unwind_Resume>
 85f8c98:	8d 85 dc fe ff ff    	lea    -0x124(%ebp),%eax
 85f8c9e:	89 04 24             	mov    %eax,(%esp)
 85f8ca1:	e8 1a b1 10 00       	call   8703dc0 <_ZNSt18basic_stringstreamIcSt11char_traitsIcESaIcEED1Ev>
 85f8ca6:	89 d8                	mov    %ebx,%eax
 85f8ca8:	8d 65 f4             	lea    -0xc(%ebp),%esp
 85f8cab:	83 c4 00             	add    $0x0,%esp
 85f8cae:	5b                   	pop    %ebx
 85f8caf:	5e                   	pop    %esi
 85f8cb0:	5f                   	pop    %edi
 85f8cb1:	5d                   	pop    %ebp
 85f8cb2:	c3                   	ret
 85f8cb3:	90                   	nop

```

```c
// RegenerationROI::Regenerate @ 0x85f8646

/* RegenerationROI::Regenerate(int, int, int, int, int&, Inven_Item&, CUser*) */

undefined4 __thiscall
RegenerationROI::Regenerate
          (RegenerationROI *this,int param_1,int param_2,int param_3,int param_4,int *param_5,
          Inven_Item *param_6,CUser *param_7)

{
  Inven_Item IVar1;
  Inven_Item IVar2;
  Inven_Item IVar3;
  ushort uVar4;
  ulong uVar5;
  char cVar6;
  _Ios_Openmode _Var7;
  int iVar8;
  int iVar9;
  ostream *poVar10;
  CDataManager *this_00;
  char *pcVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  stringstream local_128 [8];
  ostream aoStack_120 [180];
  char local_6c;
  char local_6b;
  ushort local_6a;
  vector<int,std::allocator<int>> local_68 [12];
  undefined4 local_5c [6];
  cMyTrace local_44 [16];
  string local_34 [4];
  string local_30 [4];
  string local_2c [4];
  ulong local_28;
  CItem *local_24;
  int local_20;
  
  _Var7 = std::operator|(_S_out,_S_in);
  std::stringstream::stringstream(local_128,_Var7);
  select_base_item::select_base_item((select_base_item *)local_5c);
                    /* try { // try from 085f86a8 to 085f86ac has its CatchHandler @ 085f8c7a */
  _RandomLevel(this,param_1,param_2,(select_base_item *)local_5c,local_128);
  if (Regenerate(int,int,int,int,int&,Inven_Item&,CUser*)::handle == '\0') {
    iVar8 = __cxa_guard_acquire(&Regenerate(int,int,int,int,int&,Inven_Item&,CUser*)::handle);
    if (iVar8 != 0) {
                    /* try { // try from 085f86da to 085f86de has its CatchHandler @ 085f870a */
      random_option::CRandomOptionItemHandle::CRandomOptionItemHandle
                ((CRandomOptionItemHandle *)
                 Regenerate(int,int,int,int,int&,Inven_Item&,CUser*)::handle);
      __cxa_guard_release(&Regenerate(int,int,int,int,int&,Inven_Item&,CUser*)::handle);
      __cxa_atexit(random_option::CRandomOptionItemHandle::~CRandomOptionItemHandle,
                   Regenerate(int,int,int,int,int&,Inven_Item&,CUser*)::handle,&__dso_handle);
    }
  }
  if ((param_4 == 0) || (param_4 == 0x65)) {
    iVar8 = param_2;
                    /* try { // try from 085f875f to 085f87d9 has its CatchHandler @ 085f8c7a */
    iVar9 = _Calculate_RegenCost((int)this,param_3,param_4,param_1);
    *param_5 = iVar9;
    if (*param_5 == -1) {
      cMyTrace::cMyTrace(local_44,
                         "int RegenerationROI::Regenerate(int, int, int, int, int&, Inven_Item&, CUser*)"
                         ,0x47,5);
      cMyTrace::operator()
                (local_44,"ROI regen Error : %d, %d, %d, %d",param_3,param_4,param_1,param_2);
      uVar15 = 0x11;
    }
    else {
      std::vector<int,std::allocator<int>>::vector(local_68);
      if (param_3 != 0) {
                    /* try { // try from 085f87f4 to 085f88b4 has its CatchHandler @ 085f8c58 */
        _Select_Part(this,param_3,(vector *)local_68);
      }
      if (param_3 == -1) {
        uVar15 = 0x11;
      }
      else {
        local_28 = random_option::CRandomOptionItemHandle::RegenVer_choose_item
                             ((CRandomOptionItemHandle *)
                              Regenerate(int,int,int,int,int&,Inven_Item&,CUser*)::handle,2,
                              local_5c[0],local_68,iVar8);
        poVar10 = std::operator<<(aoStack_120,"base item index : ");
        poVar10 = (ostream *)std::ostream::operator<<(poVar10,local_28);
        std::operator<<(poVar10,"\n");
        uVar5 = local_28;
        this_00 = (CDataManager *)G_CDataManager();
        local_24 = (CItem *)CDataManager::find_item(this_00,uVar5);
        if (local_24 == (CItem *)0x0) {
          std::operator<<(aoStack_120,"base item is Null\n");
          std::stringstream::str();
                    /* try { // try from 085f88be to 085f88d8 has its CatchHandler @ 085f88db */
          pcVar11 = (char *)std::string::c_str(local_34);
          SendMessageToCUser(this,param_7,pcVar11);
                    /* try { // try from 085f88f9 to 085f8aaf has its CatchHandler @ 085f8c58 */
          std::string::~string(local_34);
          uVar15 = 0x11;
        }
        else {
          local_6c = CItem::get_rarity(local_24);
          local_6a = CItem::getUsableLevel(local_24);
          local_6b = (**(code **)(*(int *)local_24 + 0x50))(local_24);
          uVar4 = local_6a;
          iVar8 = (int)local_6b;
          iVar9 = (int)local_6c;
          poVar10 = std::operator<<(aoStack_120,"rarity : ");
          poVar10 = (ostream *)std::ostream::operator<<(poVar10,iVar9);
          poVar10 = std::operator<<(poVar10," level : ");
          poVar10 = (ostream *)std::ostream::operator<<(poVar10,uVar4);
          poVar10 = std::operator<<(poVar10," base item item : ");
          poVar10 = (ostream *)std::ostream::operator<<(poVar10,iVar8);
          std::operator<<(poVar10,"\n");
          Inven_Item::reset(param_6);
          *(ulong *)(param_6 + 2) = local_28;
          iVar8 = G_CDataManager();
          CItemList::create_item(*(CItemList **)(iVar8 + 0xc),0,param_6,1);
          uVar15 = (**(code **)(*(int *)local_24 + 0x50))(local_24);
          uVar12 = CItem::getItemGroupName(local_24);
          uVar13 = CItem::getUsableLevel(local_24);
          uVar14 = CItem::get_rarity(local_24);
          cVar6 = random_option::CRandomOptionItemHandle::RegenVer_give_option
                            (Regenerate(int,int,int,int,int&,Inven_Item&,CUser*)::handle,local_28,
                             uVar14,uVar13,uVar12,uVar15,param_6 + 0x25,this,param_4);
          if (cVar6 == '\x01') {
            for (local_20 = 0; local_20 < 3; local_20 = local_20 + 1) {
              IVar1 = param_6[local_20 * 3 + 0x27];
              IVar2 = param_6[local_20 * 3 + 0x26];
              IVar3 = param_6[local_20 * 3 + 0x25];
              poVar10 = std::operator<<(aoStack_120,"[");
              poVar10 = (ostream *)std::ostream::operator<<(poVar10,local_20);
              poVar10 = std::operator<<(poVar10,"] :");
              poVar10 = (ostream *)std::ostream::operator<<(poVar10,(uint)(byte)IVar3);
              poVar10 = std::operator<<(poVar10,":");
              poVar10 = (ostream *)std::ostream::operator<<(poVar10,(uint)(byte)IVar2);
              poVar10 = std::operator<<(poVar10,":");
              poVar10 = (ostream *)std::ostream::operator<<(poVar10,(uint)(byte)IVar1);
              std::operator<<(poVar10,"\n");
            }
            std::stringstream::str();
                    /* try { // try from 085f8c14 to 085f8c2e has its CatchHandler @ 085f8c31 */
            pcVar11 = (char *)std::string::c_str(local_2c);
            SendMessageToCUser(this,param_7,pcVar11);
                    /* try { // try from 085f8c4c to 085f8c50 has its CatchHandler @ 085f8c58 */
            std::string::~string(local_2c);
            uVar15 = 0;
          }
          else {
            std::operator<<(aoStack_120,"give_option false\n");
            std::stringstream::str();
                    /* try { // try from 085f8ab9 to 085f8ad3 has its CatchHandler @ 085f8ad6 */
            pcVar11 = (char *)std::string::c_str(local_30);
            SendMessageToCUser(this,param_7,pcVar11);
                    /* try { // try from 085f8af4 to 085f8c0a has its CatchHandler @ 085f8c58 */
            std::string::~string(local_30);
            uVar15 = 0x13;
          }
        }
      }
                    /* try { // try from 085f8c73 to 085f8c77 has its CatchHandler @ 085f8c7a */
      std::vector<int,std::allocator<int>>::~vector(local_68);
    }
  }
  else {
    uVar15 = 0x11;
  }
  std::stringstream::~stringstream(local_128);
  return uVar15;
}

```

---

## RegenerationROI

```asm
// === 085f8496 RegenerationROI::RegenerationROI  [0x085f8496-0x85f8505] ===
 85f8496:	55                   	push   %ebp
 85f8497:	89 e5                	mov    %esp,%ebp
 85f8499:	57                   	push   %edi
 85f849a:	56                   	push   %esi
 85f849b:	53                   	push   %ebx
 85f849c:	83 ec 1c             	sub    $0x1c,%esp
 85f849f:	8b 45 08             	mov    0x8(%ebp),%eax
 85f84a2:	83 c0 04             	add    $0x4,%eax
 85f84a5:	89 04 24             	mov    %eax,(%esp)
 85f84a8:	e8 65 12 00 00       	call   85f9712 <_ZN28RandomOptionItem_RegeneratorC1Ev>
 85f84ad:	c7 04 24 c8 09 00 00 	movl   $0x9c8,(%esp)
 85f84b4:	e8 97 bf 12 00       	call   8724450 <_Znwj>
 85f84b9:	89 c3                	mov    %eax,%ebx
 85f84bb:	89 d8                	mov    %ebx,%eax
 85f84bd:	89 04 24             	mov    %eax,(%esp)
 85f84c0:	e8 83 1a ae ff       	call   80d9f48 <_ZN7CMTRandC1Ev>
 85f84c5:	eb 12                	jmp    85f84d9 <_ZN15RegenerationROIC1Ev+0x43>
 85f84c7:	89 d6                	mov    %edx,%esi
 85f84c9:	89 c7                	mov    %eax,%edi
 85f84cb:	89 1c 24             	mov    %ebx,(%esp)
 85f84ce:	e8 1d c0 12 00       	call   87244f0 <_ZdlPv>
 85f84d3:	89 f8                	mov    %edi,%eax
 85f84d5:	89 f2                	mov    %esi,%edx
 85f84d7:	eb 0f                	jmp    85f84e8 <_ZN15RegenerationROIC1Ev+0x52>
 85f84d9:	89 da                	mov    %ebx,%edx
 85f84db:	8b 45 08             	mov    0x8(%ebp),%eax
 85f84de:	89 10                	mov    %edx,(%eax)
 85f84e0:	83 c4 1c             	add    $0x1c,%esp
 85f84e3:	5b                   	pop    %ebx
 85f84e4:	5e                   	pop    %esi
 85f84e5:	5f                   	pop    %edi
 85f84e6:	5d                   	pop    %ebp
 85f84e7:	c3                   	ret
 85f84e8:	89 d3                	mov    %edx,%ebx
 85f84ea:	89 c6                	mov    %eax,%esi
 85f84ec:	8b 45 08             	mov    0x8(%ebp),%eax
 85f84ef:	83 c0 04             	add    $0x4,%eax
 85f84f2:	89 04 24             	mov    %eax,(%esp)
 85f84f5:	e8 e8 12 00 00       	call   85f97e2 <_ZN28RandomOptionItem_RegeneratorD1Ev>
 85f84fa:	89 f0                	mov    %esi,%eax
 85f84fc:	89 da                	mov    %ebx,%edx
 85f84fe:	89 04 24             	mov    %eax,(%esp)
 85f8501:	e8 4a b2 4e 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// RegenerationROI::RegenerationROI @ 0x85f8496

/* RegenerationROI::RegenerationROI() */

void __thiscall RegenerationROI::RegenerationROI(RegenerationROI *this)

{
  CMTRand *this_00;
  
  RandomOptionItem_Regenerator::RandomOptionItem_Regenerator
            ((RandomOptionItem_Regenerator *)(this + 4));
                    /* try { // try from 085f84b4 to 085f84b8 has its CatchHandler @ 085f84e8 */
  this_00 = operator_new(0x9c8);
                    /* try { // try from 085f84c0 to 085f84c4 has its CatchHandler @ 085f84c7 */
  CMTRand::CMTRand(this_00);
  *(CMTRand **)this = this_00;
  return;
}

```

---

## SendMessageToCUser

```asm
// === 085f853c RegenerationROI::SendMessageToCUser  [0x085f853c-0x85f8645] ===
 85f853c:	55                   	push   %ebp
 85f853d:	89 e5                	mov    %esp,%ebp
 85f853f:	56                   	push   %esi
 85f8540:	53                   	push   %ebx
 85f8541:	83 ec 20             	sub    $0x20,%esp
 85f8544:	8b 45 0c             	mov    0xc(%ebp),%eax
 85f8547:	89 04 24             	mov    %eax,(%esp)
 85f854a:	e8 4d d3 b4 ff       	call   814589c <_ZN5CUser8isGMUserEv>
 85f854f:	84 c0                	test   %al,%al
 85f8551:	0f 84 e7 00 00 00    	je     85f863e <_ZN15RegenerationROI18SendMessageToCUserEP5CUserPKc+0x102>
 85f8557:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85f855a:	89 04 24             	mov    %eax,(%esp)
 85f855d:	e8 ea 57 f9 ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 85f8562:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 85f8569:	00 
 85f856a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85f8571:	00 
 85f8572:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85f8575:	89 04 24             	mov    %eax,(%esp)
 85f8578:	e8 7f 33 ad ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 85f857d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85f8584:	00 
 85f8585:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85f8588:	89 04 24             	mov    %eax,(%esp)
 85f858b:	e8 90 33 ad ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85f8590:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85f8597:	00 
 85f8598:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85f859b:	89 04 24             	mov    %eax,(%esp)
 85f859e:	e8 01 19 ae ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 85f85a3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85f85aa:	00 
 85f85ab:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85f85ae:	89 04 24             	mov    %eax,(%esp)
 85f85b1:	e8 6a 33 ad ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85f85b6:	8b 45 10             	mov    0x10(%ebp),%eax
 85f85b9:	89 04 24             	mov    %eax,(%esp)
 85f85bc:	e8 ef 5d a8 ff       	call   807e3b0 <strlen@plt>
 85f85c1:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f85c5:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85f85c8:	89 04 24             	mov    %eax,(%esp)
 85f85cb:	e8 6c 33 ad ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 85f85d0:	8b 45 10             	mov    0x10(%ebp),%eax
 85f85d3:	89 04 24             	mov    %eax,(%esp)
 85f85d6:	e8 d5 5d a8 ff       	call   807e3b0 <strlen@plt>
 85f85db:	89 44 24 08          	mov    %eax,0x8(%esp)
 85f85df:	8b 45 10             	mov    0x10(%ebp),%eax
 85f85e2:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f85e6:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85f85e9:	89 04 24             	mov    %eax,(%esp)
 85f85ec:	e8 7f 31 c3 ff       	call   822b770 <_ZN18InterfacePacketBuf7put_strEPKci>
 85f85f1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85f85f8:	00 
 85f85f9:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85f85fc:	89 04 24             	mov    %eax,(%esp)
 85f85ff:	e8 54 33 ad ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 85f8604:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85f8607:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f860b:	8b 45 0c             	mov    0xc(%ebp),%eax
 85f860e:	89 04 24             	mov    %eax,(%esp)
 85f8611:	e8 a4 ff 04 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 85f8616:	eb 1b                	jmp    85f8633 <_ZN15RegenerationROI18SendMessageToCUserEP5CUserPKc+0xf7>
 85f8618:	89 d3                	mov    %edx,%ebx
 85f861a:	89 c6                	mov    %eax,%esi
 85f861c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85f861f:	89 04 24             	mov    %eax,(%esp)
 85f8622:	e8 59 58 f9 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 85f8627:	89 f0                	mov    %esi,%eax
 85f8629:	89 da                	mov    %ebx,%edx
 85f862b:	89 04 24             	mov    %eax,(%esp)
 85f862e:	e8 1d b1 4e 00       	call   8ae3750 <_Unwind_Resume>
 85f8633:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85f8636:	89 04 24             	mov    %eax,(%esp)
 85f8639:	e8 42 58 f9 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 85f863e:	83 c4 20             	add    $0x20,%esp
 85f8641:	5b                   	pop    %ebx
 85f8642:	5e                   	pop    %esi
 85f8643:	5d                   	pop    %ebp
 85f8644:	c3                   	ret
 85f8645:	90                   	nop

```

```c
// RegenerationROI::SendMessageToCUser @ 0x85f853c

/* RegenerationROI::SendMessageToCUser(CUser*, char const*) */

void __thiscall
RegenerationROI::SendMessageToCUser(RegenerationROI *this,CUser *param_1,char *param_2)

{
  char cVar1;
  size_t sVar2;
  PacketGuard local_18 [12];
  
  cVar1 = CUser::isGMUser(param_1);
  if (cVar1 != '\0') {
    PacketGuard::PacketGuard(local_18);
                    /* try { // try from 085f8578 to 085f8615 has its CatchHandler @ 085f8618 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0xc);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,0);
    sVar2 = strlen(param_2);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,sVar2);
    sVar2 = strlen(param_2);
    InterfacePacketBuf::put_str((InterfacePacketBuf *)local_18,param_2,sVar2);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
    CUser::Send(param_1,local_18);
    PacketGuard::~PacketGuard(local_18);
  }
  return;
}

```

---

## _0_Load_RegenerationRandomOptionItem

```asm
// === 085f963e RegenerationROI::_0_Load_RegenerationRandomOptionItem  [0x085f963e-0x85f968d] ===
 85f963e:	55                   	push   %ebp
 85f963f:	89 e5                	mov    %esp,%ebp
 85f9641:	83 ec 28             	sub    $0x28,%esp
 85f9644:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85f964b:	8b 45 08             	mov    0x8(%ebp),%eax
 85f964e:	83 c0 04             	add    $0x4,%eax
 85f9651:	c7 44 24 04 bc 24 cd 	movl   $0x8cd24bc,0x4(%esp)
 85f9658:	08 
 85f9659:	89 04 24             	mov    %eax,(%esp)
 85f965c:	e8 af 4f 48 00       	call   8a7e610 <_Z36importRegenerationRandomOptionScriptR28RandomOptionItem_RegeneratorPKc>
 85f9661:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85f9664:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 85f9668:	0f 95 c0             	setne  %al
 85f966b:	84 c0                	test   %al,%al
 85f966d:	74 18                	je     85f9687 <_ZN15RegenerationROI36_0_Load_RegenerationRandomOptionItemEv+0x49>
 85f966f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85f9672:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f9676:	c7 04 24 ec 24 cd 08 	movl   $0x8cd24ec,(%esp)
 85f967d:	e8 de 44 a8 ff       	call   807db60 <printf@plt>
 85f9682:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85f9685:	eb 05                	jmp    85f968c <_ZN15RegenerationROI36_0_Load_RegenerationRandomOptionItemEv+0x4e>
 85f9687:	b8 00 00 00 00       	mov    $0x0,%eax
 85f968c:	c9                   	leave
 85f968d:	c3                   	ret

```

```c
// RegenerationROI::_0_Load_RegenerationRandomOptionItem @ 0x85f963e

/* RegenerationROI::_0_Load_RegenerationRandomOptionItem() */

int __thiscall RegenerationROI::_0_Load_RegenerationRandomOptionItem(RegenerationROI *this)

{
  int iVar1;
  
  iVar1 = importRegenerationRandomOptionScript
                    ((RandomOptionItem_Regenerator *)(this + 4),
                     "Etc/RandomOption/RegenerationRandomOption.etc");
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    printf("Fail to Load Random Option Item Regenerator Line : %d\n",iVar1);
  }
  return iVar1;
}

```

---

## _Calculate_RegenCost

```asm
// === 085f9094 RegenerationROI::_Calculate_RegenCost  [0x085f9094-0x85f93cb] ===
 85f9094:	55                   	push   %ebp
 85f9095:	89 e5                	mov    %esp,%ebp
 85f9097:	83 ec 68             	sub    $0x68,%esp
 85f909a:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 85f90a1:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 85f90a8:	8b 45 0c             	mov    0xc(%ebp),%eax
 85f90ab:	85 c0                	test   %eax,%eax
 85f90ad:	0f 84 84 01 00 00    	je     85f9237 <_ZN15RegenerationROI20_Calculate_RegenCostEiiii+0x1a3>
 85f90b3:	8b 45 0c             	mov    0xc(%ebp),%eax
 85f90b6:	83 f8 63             	cmp    $0x63,%eax
 85f90b9:	0f 8f 78 01 00 00    	jg     85f9237 <_ZN15RegenerationROI20_Calculate_RegenCostEiiii+0x1a3>
 85f90bf:	8b 45 08             	mov    0x8(%ebp),%eax
 85f90c2:	8d 48 1c             	lea    0x1c(%eax),%ecx
 85f90c5:	8d 45 cc             	lea    -0x34(%ebp),%eax
 85f90c8:	8d 55 0c             	lea    0xc(%ebp),%edx
 85f90cb:	89 54 24 08          	mov    %edx,0x8(%esp)
 85f90cf:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 85f90d3:	89 04 24             	mov    %eax,(%esp)
 85f90d6:	e8 d5 09 00 00       	call   85f9ab0 <_ZNSt3mapIiS_Ii9_str_costSt4lessIiESaISt4pairIKiS0_EEES2_SaIS3_IS4_S7_EEE4findERS4_>
 85f90db:	83 ec 04             	sub    $0x4,%esp
 85f90de:	8b 45 08             	mov    0x8(%ebp),%eax
 85f90e1:	8d 50 1c             	lea    0x1c(%eax),%edx
 85f90e4:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85f90e7:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f90eb:	89 04 24             	mov    %eax,(%esp)
 85f90ee:	e8 e9 09 00 00       	call   85f9adc <_ZNSt3mapIiS_Ii9_str_costSt4lessIiESaISt4pairIKiS0_EEES2_SaIS3_IS4_S7_EEE3endEv>
 85f90f3:	83 ec 04             	sub    $0x4,%esp
 85f90f6:	8d 45 cc             	lea    -0x34(%ebp),%eax
 85f90f9:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f90fd:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85f9100:	89 04 24             	mov    %eax,(%esp)
 85f9103:	e8 fa 09 00 00       	call   85f9b02 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt3mapIi9_str_costSt4lessIiESaIS0_IS1_S3_EEEEEneERKSA_>
 85f9108:	84 c0                	test   %al,%al
 85f910a:	0f 84 1d 01 00 00    	je     85f922d <_ZN15RegenerationROI20_Calculate_RegenCostEiiii+0x199>
 85f9110:	8d 45 cc             	lea    -0x34(%ebp),%eax
 85f9113:	89 04 24             	mov    %eax,(%esp)
 85f9116:	e8 fb 09 00 00       	call   85f9b16 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt3mapIi9_str_costSt4lessIiESaIS0_IS1_S3_EEEEEptEv>
 85f911b:	83 c0 04             	add    $0x4,%eax
 85f911e:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85f9121:	8d 45 c8             	lea    -0x38(%ebp),%eax
 85f9124:	8d 55 14             	lea    0x14(%ebp),%edx
 85f9127:	89 54 24 08          	mov    %edx,0x8(%esp)
 85f912b:	8b 55 f0             	mov    -0x10(%ebp),%edx
 85f912e:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f9132:	89 04 24             	mov    %eax,(%esp)
 85f9135:	e8 ea 09 00 00       	call   85f9b24 <_ZNSt3mapIi9_str_costSt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 85f913a:	83 ec 04             	sub    $0x4,%esp
 85f913d:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85f9140:	8b 55 f0             	mov    -0x10(%ebp),%edx
 85f9143:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f9147:	89 04 24             	mov    %eax,(%esp)
 85f914a:	e8 01 0a 00 00       	call   85f9b50 <_ZNSt3mapIi9_str_costSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 85f914f:	83 ec 04             	sub    $0x4,%esp
 85f9152:	8d 45 c8             	lea    -0x38(%ebp),%eax
 85f9155:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f9159:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85f915c:	89 04 24             	mov    %eax,(%esp)
 85f915f:	e8 12 0a 00 00       	call   85f9b76 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi9_str_costEEneERKS4_>
 85f9164:	84 c0                	test   %al,%al
 85f9166:	74 2a                	je     85f9192 <_ZN15RegenerationROI20_Calculate_RegenCostEiiii+0xfe>
 85f9168:	8d 45 c8             	lea    -0x38(%ebp),%eax
 85f916b:	89 04 24             	mov    %eax,(%esp)
 85f916e:	e8 17 0a 00 00       	call   85f9b8a <_ZNKSt17_Rb_tree_iteratorISt4pairIKi9_str_costEEptEv>
 85f9173:	8b 40 04             	mov    0x4(%eax),%eax
 85f9176:	85 c0                	test   %eax,%eax
 85f9178:	0f 94 c0             	sete   %al
 85f917b:	84 c0                	test   %al,%al
 85f917d:	74 1d                	je     85f919c <_ZN15RegenerationROI20_Calculate_RegenCostEiiii+0x108>
 85f917f:	8d 45 c8             	lea    -0x38(%ebp),%eax
 85f9182:	89 04 24             	mov    %eax,(%esp)
 85f9185:	e8 00 0a 00 00       	call   85f9b8a <_ZNKSt17_Rb_tree_iteratorISt4pairIKi9_str_costEEptEv>
 85f918a:	8b 40 08             	mov    0x8(%eax),%eax
 85f918d:	89 45 e8             	mov    %eax,-0x18(%ebp)
 85f9190:	eb 0a                	jmp    85f919c <_ZN15RegenerationROI20_Calculate_RegenCostEiiii+0x108>
 85f9192:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 85f9197:	e9 2d 02 00 00       	jmp    85f93c9 <_ZN15RegenerationROI20_Calculate_RegenCostEiiii+0x335>
 85f919c:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 85f919f:	8d 55 18             	lea    0x18(%ebp),%edx
 85f91a2:	89 54 24 08          	mov    %edx,0x8(%esp)
 85f91a6:	8b 55 f0             	mov    -0x10(%ebp),%edx
 85f91a9:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f91ad:	89 04 24             	mov    %eax,(%esp)
 85f91b0:	e8 6f 09 00 00       	call   85f9b24 <_ZNSt3mapIi9_str_costSt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 85f91b5:	83 ec 04             	sub    $0x4,%esp
 85f91b8:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 85f91bb:	89 45 c8             	mov    %eax,-0x38(%ebp)
 85f91be:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85f91c1:	8b 55 f0             	mov    -0x10(%ebp),%edx
 85f91c4:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f91c8:	89 04 24             	mov    %eax,(%esp)
 85f91cb:	e8 80 09 00 00       	call   85f9b50 <_ZNSt3mapIi9_str_costSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 85f91d0:	83 ec 04             	sub    $0x4,%esp
 85f91d3:	8d 45 c8             	lea    -0x38(%ebp),%eax
 85f91d6:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f91da:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85f91dd:	89 04 24             	mov    %eax,(%esp)
 85f91e0:	e8 91 09 00 00       	call   85f9b76 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi9_str_costEEneERKS4_>
 85f91e5:	84 c0                	test   %al,%al
 85f91e7:	74 3a                	je     85f9223 <_ZN15RegenerationROI20_Calculate_RegenCostEiiii+0x18f>
 85f91e9:	8d 45 c8             	lea    -0x38(%ebp),%eax
 85f91ec:	89 04 24             	mov    %eax,(%esp)
 85f91ef:	e8 96 09 00 00       	call   85f9b8a <_ZNKSt17_Rb_tree_iteratorISt4pairIKi9_str_costEEptEv>
 85f91f4:	8b 40 04             	mov    0x4(%eax),%eax
 85f91f7:	85 c0                	test   %eax,%eax
 85f91f9:	0f 94 c0             	sete   %al
 85f91fc:	84 c0                	test   %al,%al
 85f91fe:	74 37                	je     85f9237 <_ZN15RegenerationROI20_Calculate_RegenCostEiiii+0x1a3>
 85f9200:	8d 45 c8             	lea    -0x38(%ebp),%eax
 85f9203:	89 04 24             	mov    %eax,(%esp)
 85f9206:	e8 7f 09 00 00       	call   85f9b8a <_ZNKSt17_Rb_tree_iteratorISt4pairIKi9_str_costEEptEv>
 85f920b:	8b 40 08             	mov    0x8(%eax),%eax
 85f920e:	01 45 e8             	add    %eax,-0x18(%ebp)
 85f9211:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85f9214:	89 c2                	mov    %eax,%edx
 85f9216:	c1 ea 1f             	shr    $0x1f,%edx
 85f9219:	8d 04 02             	lea    (%edx,%eax,1),%eax
 85f921c:	d1 f8                	sar    $1,%eax
 85f921e:	89 45 e8             	mov    %eax,-0x18(%ebp)
 85f9221:	eb 14                	jmp    85f9237 <_ZN15RegenerationROI20_Calculate_RegenCostEiiii+0x1a3>
 85f9223:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 85f9228:	e9 9c 01 00 00       	jmp    85f93c9 <_ZN15RegenerationROI20_Calculate_RegenCostEiiii+0x335>
 85f922d:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 85f9232:	e9 92 01 00 00       	jmp    85f93c9 <_ZN15RegenerationROI20_Calculate_RegenCostEiiii+0x335>
 85f9237:	8b 45 10             	mov    0x10(%ebp),%eax
 85f923a:	85 c0                	test   %eax,%eax
 85f923c:	0f 84 7e 01 00 00    	je     85f93c0 <_ZN15RegenerationROI20_Calculate_RegenCostEiiii+0x32c>
 85f9242:	8b 45 10             	mov    0x10(%ebp),%eax
 85f9245:	83 f8 64             	cmp    $0x64,%eax
 85f9248:	0f 8e 72 01 00 00    	jle    85f93c0 <_ZN15RegenerationROI20_Calculate_RegenCostEiiii+0x32c>
 85f924e:	8b 45 08             	mov    0x8(%ebp),%eax
 85f9251:	8d 48 1c             	lea    0x1c(%eax),%ecx
 85f9254:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 85f9257:	8d 55 10             	lea    0x10(%ebp),%edx
 85f925a:	89 54 24 08          	mov    %edx,0x8(%esp)
 85f925e:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 85f9262:	89 04 24             	mov    %eax,(%esp)
 85f9265:	e8 46 08 00 00       	call   85f9ab0 <_ZNSt3mapIiS_Ii9_str_costSt4lessIiESaISt4pairIKiS0_EEES2_SaIS3_IS4_S7_EEE4findERS4_>
 85f926a:	83 ec 04             	sub    $0x4,%esp
 85f926d:	8b 45 08             	mov    0x8(%ebp),%eax
 85f9270:	8d 50 1c             	lea    0x1c(%eax),%edx
 85f9273:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85f9276:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f927a:	89 04 24             	mov    %eax,(%esp)
 85f927d:	e8 5a 08 00 00       	call   85f9adc <_ZNSt3mapIiS_Ii9_str_costSt4lessIiESaISt4pairIKiS0_EEES2_SaIS3_IS4_S7_EEE3endEv>
 85f9282:	83 ec 04             	sub    $0x4,%esp
 85f9285:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 85f9288:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f928c:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85f928f:	89 04 24             	mov    %eax,(%esp)
 85f9292:	e8 6b 08 00 00       	call   85f9b02 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt3mapIi9_str_costSt4lessIiESaIS0_IS1_S3_EEEEEneERKSA_>
 85f9297:	84 c0                	test   %al,%al
 85f9299:	0f 84 1a 01 00 00    	je     85f93b9 <_ZN15RegenerationROI20_Calculate_RegenCostEiiii+0x325>
 85f929f:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 85f92a2:	89 04 24             	mov    %eax,(%esp)
 85f92a5:	e8 6c 08 00 00       	call   85f9b16 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt3mapIi9_str_costSt4lessIiESaIS0_IS1_S3_EEEEEptEv>
 85f92aa:	83 c0 04             	add    $0x4,%eax
 85f92ad:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85f92b0:	8d 45 c0             	lea    -0x40(%ebp),%eax
 85f92b3:	8d 55 14             	lea    0x14(%ebp),%edx
 85f92b6:	89 54 24 08          	mov    %edx,0x8(%esp)
 85f92ba:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85f92bd:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f92c1:	89 04 24             	mov    %eax,(%esp)
 85f92c4:	e8 5b 08 00 00       	call   85f9b24 <_ZNSt3mapIi9_str_costSt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 85f92c9:	83 ec 04             	sub    $0x4,%esp
 85f92cc:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85f92cf:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85f92d2:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f92d6:	89 04 24             	mov    %eax,(%esp)
 85f92d9:	e8 72 08 00 00       	call   85f9b50 <_ZNSt3mapIi9_str_costSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 85f92de:	83 ec 04             	sub    $0x4,%esp
 85f92e1:	8d 45 c0             	lea    -0x40(%ebp),%eax
 85f92e4:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f92e8:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85f92eb:	89 04 24             	mov    %eax,(%esp)
 85f92ee:	e8 83 08 00 00       	call   85f9b76 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi9_str_costEEneERKS4_>
 85f92f3:	84 c0                	test   %al,%al
 85f92f5:	74 2a                	je     85f9321 <_ZN15RegenerationROI20_Calculate_RegenCostEiiii+0x28d>
 85f92f7:	8d 45 c0             	lea    -0x40(%ebp),%eax
 85f92fa:	89 04 24             	mov    %eax,(%esp)
 85f92fd:	e8 88 08 00 00       	call   85f9b8a <_ZNKSt17_Rb_tree_iteratorISt4pairIKi9_str_costEEptEv>
 85f9302:	8b 40 04             	mov    0x4(%eax),%eax
 85f9305:	85 c0                	test   %eax,%eax
 85f9307:	0f 94 c0             	sete   %al
 85f930a:	84 c0                	test   %al,%al
 85f930c:	74 1d                	je     85f932b <_ZN15RegenerationROI20_Calculate_RegenCostEiiii+0x297>
 85f930e:	8d 45 c0             	lea    -0x40(%ebp),%eax
 85f9311:	89 04 24             	mov    %eax,(%esp)
 85f9314:	e8 71 08 00 00       	call   85f9b8a <_ZNKSt17_Rb_tree_iteratorISt4pairIKi9_str_costEEptEv>
 85f9319:	8b 40 08             	mov    0x8(%eax),%eax
 85f931c:	89 45 ec             	mov    %eax,-0x14(%ebp)
 85f931f:	eb 0a                	jmp    85f932b <_ZN15RegenerationROI20_Calculate_RegenCostEiiii+0x297>
 85f9321:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 85f9326:	e9 9e 00 00 00       	jmp    85f93c9 <_ZN15RegenerationROI20_Calculate_RegenCostEiiii+0x335>
 85f932b:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 85f932e:	8d 55 18             	lea    0x18(%ebp),%edx
 85f9331:	89 54 24 08          	mov    %edx,0x8(%esp)
 85f9335:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85f9338:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f933c:	89 04 24             	mov    %eax,(%esp)
 85f933f:	e8 e0 07 00 00       	call   85f9b24 <_ZNSt3mapIi9_str_costSt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 85f9344:	83 ec 04             	sub    $0x4,%esp
 85f9347:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 85f934a:	89 45 c0             	mov    %eax,-0x40(%ebp)
 85f934d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85f9350:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85f9353:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f9357:	89 04 24             	mov    %eax,(%esp)
 85f935a:	e8 f1 07 00 00       	call   85f9b50 <_ZNSt3mapIi9_str_costSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 85f935f:	83 ec 04             	sub    $0x4,%esp
 85f9362:	8d 45 c0             	lea    -0x40(%ebp),%eax
 85f9365:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f9369:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85f936c:	89 04 24             	mov    %eax,(%esp)
 85f936f:	e8 02 08 00 00       	call   85f9b76 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi9_str_costEEneERKS4_>
 85f9374:	84 c0                	test   %al,%al
 85f9376:	74 3a                	je     85f93b2 <_ZN15RegenerationROI20_Calculate_RegenCostEiiii+0x31e>
 85f9378:	8d 45 c0             	lea    -0x40(%ebp),%eax
 85f937b:	89 04 24             	mov    %eax,(%esp)
 85f937e:	e8 07 08 00 00       	call   85f9b8a <_ZNKSt17_Rb_tree_iteratorISt4pairIKi9_str_costEEptEv>
 85f9383:	8b 40 04             	mov    0x4(%eax),%eax
 85f9386:	85 c0                	test   %eax,%eax
 85f9388:	0f 94 c0             	sete   %al
 85f938b:	84 c0                	test   %al,%al
 85f938d:	74 31                	je     85f93c0 <_ZN15RegenerationROI20_Calculate_RegenCostEiiii+0x32c>
 85f938f:	8d 45 c0             	lea    -0x40(%ebp),%eax
 85f9392:	89 04 24             	mov    %eax,(%esp)
 85f9395:	e8 f0 07 00 00       	call   85f9b8a <_ZNKSt17_Rb_tree_iteratorISt4pairIKi9_str_costEEptEv>
 85f939a:	8b 40 08             	mov    0x8(%eax),%eax
 85f939d:	01 45 ec             	add    %eax,-0x14(%ebp)
 85f93a0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85f93a3:	89 c2                	mov    %eax,%edx
 85f93a5:	c1 ea 1f             	shr    $0x1f,%edx
 85f93a8:	8d 04 02             	lea    (%edx,%eax,1),%eax
 85f93ab:	d1 f8                	sar    $1,%eax
 85f93ad:	89 45 ec             	mov    %eax,-0x14(%ebp)
 85f93b0:	eb 0e                	jmp    85f93c0 <_ZN15RegenerationROI20_Calculate_RegenCostEiiii+0x32c>
 85f93b2:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 85f93b7:	eb 10                	jmp    85f93c9 <_ZN15RegenerationROI20_Calculate_RegenCostEiiii+0x335>
 85f93b9:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 85f93be:	eb 09                	jmp    85f93c9 <_ZN15RegenerationROI20_Calculate_RegenCostEiiii+0x335>
 85f93c0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85f93c3:	8b 55 e8             	mov    -0x18(%ebp),%edx
 85f93c6:	8d 04 02             	lea    (%edx,%eax,1),%eax
 85f93c9:	c9                   	leave
 85f93ca:	c3                   	ret
 85f93cb:	90                   	nop

```

```c
// RegenerationROI::_Calculate_RegenCost @ 0x85f9094

/* RegenerationROI::_Calculate_RegenCost(int, int, int, int) */

int RegenerationROI::_Calculate_RegenCost(int param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int local_50 [3];
  int local_44;
  _Rb_tree_iterator local_40 [4];
  int local_3c;
  _Rb_tree_iterator local_38 [4];
  map<int,std::map<int,_str_cost,std::less<int>,std::allocator<std::pair<int_const,_str_cost>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,_str_cost,std::less<int>,std::allocator<std::pair<int_const,_str_cost>>>>>>
  local_34 [4];
  map<int,_str_cost,std::less<int>,std::allocator<std::pair<int_const,_str_cost>>> local_30 [4];
  map<int,_str_cost,std::less<int>,std::allocator<std::pair<int_const,_str_cost>>> local_2c [4];
  map<int,std::map<int,_str_cost,std::less<int>,std::allocator<std::pair<int_const,_str_cost>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,_str_cost,std::less<int>,std::allocator<std::pair<int_const,_str_cost>>>>>>
  local_28 [4];
  map<int,_str_cost,std::less<int>,std::allocator<std::pair<int_const,_str_cost>>> local_24 [4];
  map<int,_str_cost,std::less<int>,std::allocator<std::pair<int_const,_str_cost>>> local_20 [4];
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_1c = 0;
  local_18 = 0;
  if ((param_2 != 0) && (param_2 < 100)) {
    std::
    map<int,std::map<int,_str_cost,std::less<int>,std::allocator<std::pair<int_const,_str_cost>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,_str_cost,std::less<int>,std::allocator<std::pair<int_const,_str_cost>>>>>>
    ::find((int *)local_38);
    std::
    map<int,std::map<int,_str_cost,std::less<int>,std::allocator<std::pair<int_const,_str_cost>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,_str_cost,std::less<int>,std::allocator<std::pair<int_const,_str_cost>>>>>>
    ::end(local_34);
    cVar1 = std::
            _Rb_tree_iterator<std::pair<int_const,std::map<int,_str_cost,std::less<int>,std::allocator<std::pair<int_const,_str_cost>>>>>
            ::operator!=((_Rb_tree_iterator<std::pair<int_const,std::map<int,_str_cost,std::less<int>,std::allocator<std::pair<int_const,_str_cost>>>>>
                          *)local_34,local_38);
    if (cVar1 == '\0') {
      return -1;
    }
    local_14 = std::
               _Rb_tree_iterator<std::pair<int_const,std::map<int,_str_cost,std::less<int>,std::allocator<std::pair<int_const,_str_cost>>>>>
               ::operator->((_Rb_tree_iterator<std::pair<int_const,std::map<int,_str_cost,std::less<int>,std::allocator<std::pair<int_const,_str_cost>>>>>
                             *)local_38);
    local_14 = local_14 + 4;
    std::map<int,_str_cost,std::less<int>,std::allocator<std::pair<int_const,_str_cost>>>::find
              (&local_3c);
    std::map<int,_str_cost,std::less<int>,std::allocator<std::pair<int_const,_str_cost>>>::end
              (local_30);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,_str_cost>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,_str_cost>> *)local_30,
                       (_Rb_tree_iterator *)&local_3c);
    if (cVar1 == '\0') {
      return -1;
    }
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,_str_cost>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,_str_cost>> *)&local_3c);
    if (*(int *)(iVar2 + 4) == 0) {
      iVar2 = std::_Rb_tree_iterator<std::pair<int_const,_str_cost>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,_str_cost>> *)&local_3c);
      local_1c = *(int *)(iVar2 + 8);
    }
    std::map<int,_str_cost,std::less<int>,std::allocator<std::pair<int_const,_str_cost>>>::find
              (local_50);
    local_3c = local_50[0];
    std::map<int,_str_cost,std::less<int>,std::allocator<std::pair<int_const,_str_cost>>>::end
              (local_2c);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,_str_cost>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,_str_cost>> *)local_2c,
                       (_Rb_tree_iterator *)&local_3c);
    if (cVar1 == '\0') {
      return -1;
    }
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,_str_cost>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,_str_cost>> *)&local_3c);
    if (*(int *)(iVar2 + 4) == 0) {
      iVar2 = std::_Rb_tree_iterator<std::pair<int_const,_str_cost>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,_str_cost>> *)&local_3c);
      local_1c = (local_1c + *(int *)(iVar2 + 8)) / 2;
    }
  }
  if ((param_3 != 0) && (100 < param_3)) {
    std::
    map<int,std::map<int,_str_cost,std::less<int>,std::allocator<std::pair<int_const,_str_cost>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,_str_cost,std::less<int>,std::allocator<std::pair<int_const,_str_cost>>>>>>
    ::find((int *)local_40);
    std::
    map<int,std::map<int,_str_cost,std::less<int>,std::allocator<std::pair<int_const,_str_cost>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,_str_cost,std::less<int>,std::allocator<std::pair<int_const,_str_cost>>>>>>
    ::end(local_28);
    cVar1 = std::
            _Rb_tree_iterator<std::pair<int_const,std::map<int,_str_cost,std::less<int>,std::allocator<std::pair<int_const,_str_cost>>>>>
            ::operator!=((_Rb_tree_iterator<std::pair<int_const,std::map<int,_str_cost,std::less<int>,std::allocator<std::pair<int_const,_str_cost>>>>>
                          *)local_28,local_40);
    if (cVar1 == '\0') {
      return -1;
    }
    local_10 = std::
               _Rb_tree_iterator<std::pair<int_const,std::map<int,_str_cost,std::less<int>,std::allocator<std::pair<int_const,_str_cost>>>>>
               ::operator->((_Rb_tree_iterator<std::pair<int_const,std::map<int,_str_cost,std::less<int>,std::allocator<std::pair<int_const,_str_cost>>>>>
                             *)local_40);
    local_10 = local_10 + 4;
    std::map<int,_str_cost,std::less<int>,std::allocator<std::pair<int_const,_str_cost>>>::find
              (&local_44);
    std::map<int,_str_cost,std::less<int>,std::allocator<std::pair<int_const,_str_cost>>>::end
              (local_24);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,_str_cost>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,_str_cost>> *)local_24,
                       (_Rb_tree_iterator *)&local_44);
    if (cVar1 == '\0') {
      return -1;
    }
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,_str_cost>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,_str_cost>> *)&local_44);
    if (*(int *)(iVar2 + 4) == 0) {
      iVar2 = std::_Rb_tree_iterator<std::pair<int_const,_str_cost>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,_str_cost>> *)&local_44);
      local_18 = *(int *)(iVar2 + 8);
    }
    std::map<int,_str_cost,std::less<int>,std::allocator<std::pair<int_const,_str_cost>>>::find
              (local_50);
    local_44 = local_50[0];
    std::map<int,_str_cost,std::less<int>,std::allocator<std::pair<int_const,_str_cost>>>::end
              (local_20);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,_str_cost>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,_str_cost>> *)local_20,
                       (_Rb_tree_iterator *)&local_44);
    if (cVar1 == '\0') {
      return -1;
    }
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,_str_cost>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,_str_cost>> *)&local_44);
    if (*(int *)(iVar2 + 4) == 0) {
      iVar2 = std::_Rb_tree_iterator<std::pair<int_const,_str_cost>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,_str_cost>> *)&local_44);
      local_18 = (local_18 + *(int *)(iVar2 + 8)) / 2;
    }
  }
  return local_1c + local_18;
}

```

---

## _RandomLevel

```asm
// === 085f93cc RegenerationROI::_RandomLevel  [0x085f93cc-0x85f963d] ===
 85f93cc:	55                   	push   %ebp
 85f93cd:	89 e5                	mov    %esp,%ebp
 85f93cf:	56                   	push   %esi
 85f93d0:	53                   	push   %ebx
 85f93d1:	83 ec 30             	sub    $0x30,%esp
 85f93d4:	8b 5d 10             	mov    0x10(%ebp),%ebx
 85f93d7:	8b 75 0c             	mov    0xc(%ebp),%esi
 85f93da:	8b 45 18             	mov    0x18(%ebp),%eax
 85f93dd:	83 c0 08             	add    $0x8,%eax
 85f93e0:	c7 44 24 04 73 24 cd 	movl   $0x8cd2473,0x4(%esp)
 85f93e7:	08 
 85f93e8:	89 04 24             	mov    %eax,(%esp)
 85f93eb:	e8 10 3f 10 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 85f93f0:	89 74 24 04          	mov    %esi,0x4(%esp)
 85f93f4:	89 04 24             	mov    %eax,(%esp)
 85f93f7:	e8 44 6c 10 00       	call   8700040 <_ZNSolsEi>
 85f93fc:	c7 44 24 04 81 24 cd 	movl   $0x8cd2481,0x4(%esp)
 85f9403:	08 
 85f9404:	89 04 24             	mov    %eax,(%esp)
 85f9407:	e8 f4 3e 10 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 85f940c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85f9410:	89 04 24             	mov    %eax,(%esp)
 85f9413:	e8 28 6c 10 00       	call   8700040 <_ZNSolsEi>
 85f9418:	c7 44 24 04 04 24 cd 	movl   $0x8cd2404,0x4(%esp)
 85f941f:	08 
 85f9420:	89 04 24             	mov    %eax,(%esp)
 85f9423:	e8 d8 3e 10 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 85f9428:	8b 55 0c             	mov    0xc(%ebp),%edx
 85f942b:	8b 45 10             	mov    0x10(%ebp),%eax
 85f942e:	39 c2                	cmp    %eax,%edx
 85f9430:	7e 12                	jle    85f9444 <_ZN15RegenerationROI12_RandomLevelEiiR16select_base_itemRSt18basic_stringstreamIcSt11char_traitsIcESaIcEE+0x78>
 85f9432:	8d 45 10             	lea    0x10(%ebp),%eax
 85f9435:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f9439:	8d 45 0c             	lea    0xc(%ebp),%eax
 85f943c:	89 04 24             	mov    %eax,(%esp)
 85f943f:	e8 37 26 b4 ff       	call   813ba7b <_ZSt4swapIiEvRT_S1_>
 85f9444:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85f9447:	89 04 24             	mov    %eax,(%esp)
 85f944a:	e8 5d 4d a9 ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 85f944f:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 85f9452:	ba 67 66 66 66       	mov    $0x66666667,%edx
 85f9457:	89 c8                	mov    %ecx,%eax
 85f9459:	f7 ea                	imul   %edx
 85f945b:	d1 fa                	sar    $1,%edx
 85f945d:	89 c8                	mov    %ecx,%eax
 85f945f:	c1 f8 1f             	sar    $0x1f,%eax
 85f9462:	29 c2                	sub    %eax,%edx
 85f9464:	89 d0                	mov    %edx,%eax
 85f9466:	c1 e0 02             	shl    $0x2,%eax
 85f9469:	01 d0                	add    %edx,%eax
 85f946b:	89 ca                	mov    %ecx,%edx
 85f946d:	29 c2                	sub    %eax,%edx
 85f946f:	85 d2                	test   %edx,%edx
 85f9471:	74 29                	je     85f949c <_ZN15RegenerationROI12_RandomLevelEiiR16select_base_itemRSt18basic_stringstreamIcSt11char_traitsIcESaIcEE+0xd0>
 85f9473:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 85f9476:	ba 67 66 66 66       	mov    $0x66666667,%edx
 85f947b:	89 c8                	mov    %ecx,%eax
 85f947d:	f7 ea                	imul   %edx
 85f947f:	d1 fa                	sar    $1,%edx
 85f9481:	89 c8                	mov    %ecx,%eax
 85f9483:	c1 f8 1f             	sar    $0x1f,%eax
 85f9486:	29 c2                	sub    %eax,%edx
 85f9488:	89 d0                	mov    %edx,%eax
 85f948a:	c1 e0 02             	shl    $0x2,%eax
 85f948d:	01 d0                	add    %edx,%eax
 85f948f:	89 ca                	mov    %ecx,%edx
 85f9491:	29 c2                	sub    %eax,%edx
 85f9493:	b8 05 00 00 00       	mov    $0x5,%eax
 85f9498:	29 d0                	sub    %edx,%eax
 85f949a:	eb 05                	jmp    85f94a1 <_ZN15RegenerationROI12_RandomLevelEiiR16select_base_itemRSt18basic_stringstreamIcSt11char_traitsIcESaIcEE+0xd5>
 85f949c:	b8 00 00 00 00       	mov    $0x0,%eax
 85f94a1:	8b 55 0c             	mov    0xc(%ebp),%edx
 85f94a4:	01 d0                	add    %edx,%eax
 85f94a6:	89 45 ec             	mov    %eax,-0x14(%ebp)
 85f94a9:	8b 5d 10             	mov    0x10(%ebp),%ebx
 85f94ac:	8b 4d 10             	mov    0x10(%ebp),%ecx
 85f94af:	ba 67 66 66 66       	mov    $0x66666667,%edx
 85f94b4:	89 c8                	mov    %ecx,%eax
 85f94b6:	f7 ea                	imul   %edx
 85f94b8:	d1 fa                	sar    $1,%edx
 85f94ba:	89 c8                	mov    %ecx,%eax
 85f94bc:	c1 f8 1f             	sar    $0x1f,%eax
 85f94bf:	29 c2                	sub    %eax,%edx
 85f94c1:	89 d0                	mov    %edx,%eax
 85f94c3:	c1 e0 02             	shl    $0x2,%eax
 85f94c6:	01 d0                	add    %edx,%eax
 85f94c8:	89 ca                	mov    %ecx,%edx
 85f94ca:	29 c2                	sub    %eax,%edx
 85f94cc:	89 d8                	mov    %ebx,%eax
 85f94ce:	29 d0                	sub    %edx,%eax
 85f94d0:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85f94d3:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85f94d6:	89 45 d8             	mov    %eax,-0x28(%ebp)
 85f94d9:	eb 1b                	jmp    85f94f6 <_ZN15RegenerationROI12_RandomLevelEiiR16select_base_itemRSt18basic_stringstreamIcSt11char_traitsIcESaIcEE+0x12a>
 85f94db:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85f94de:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f94e2:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85f94e5:	89 04 24             	mov    %eax,(%esp)
 85f94e8:	e8 39 7c b1 ff       	call   8111126 <_ZNSt6vectorIiSaIiEE9push_backERKi>
 85f94ed:	8b 45 d8             	mov    -0x28(%ebp),%eax
 85f94f0:	83 c0 05             	add    $0x5,%eax
 85f94f3:	89 45 d8             	mov    %eax,-0x28(%ebp)
 85f94f6:	8b 45 d8             	mov    -0x28(%ebp),%eax
 85f94f9:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 85f94fc:	0f 9e c0             	setle  %al
 85f94ff:	84 c0                	test   %al,%al
 85f9501:	75 d8                	jne    85f94db <_ZN15RegenerationROI12_RandomLevelEiiR16select_base_itemRSt18basic_stringstreamIcSt11char_traitsIcESaIcEE+0x10f>
 85f9503:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85f9506:	89 04 24             	mov    %eax,(%esp)
 85f9509:	e8 52 34 b2 ff       	call   811c960 <_ZNKSt6vectorIiSaIiEE5emptyEv>
 85f950e:	84 c0                	test   %al,%al
 85f9510:	74 1b                	je     85f952d <_ZN15RegenerationROI12_RandomLevelEiiR16select_base_itemRSt18basic_stringstreamIcSt11char_traitsIcESaIcEE+0x161>
 85f9512:	8b 45 18             	mov    0x18(%ebp),%eax
 85f9515:	83 c0 08             	add    $0x8,%eax
 85f9518:	c7 44 24 04 83 24 cd 	movl   $0x8cd2483,0x4(%esp)
 85f951f:	08 
 85f9520:	89 04 24             	mov    %eax,(%esp)
 85f9523:	e8 d8 3d 10 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 85f9528:	e9 fe 00 00 00       	jmp    85f962b <_ZN15RegenerationROI12_RandomLevelEiiR16select_base_itemRSt18basic_stringstreamIcSt11char_traitsIcESaIcEE+0x25f>
 85f952d:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85f9530:	89 04 24             	mov    %eax,(%esp)
 85f9533:	e8 88 4c a9 ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 85f9538:	83 e8 01             	sub    $0x1,%eax
 85f953b:	89 45 e8             	mov    %eax,-0x18(%ebp)
 85f953e:	8b 45 08             	mov    0x8(%ebp),%eax
 85f9541:	8b 00                	mov    (%eax),%eax
 85f9543:	8d 55 e8             	lea    -0x18(%ebp),%edx
 85f9546:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f954a:	89 04 24             	mov    %eax,(%esp)
 85f954d:	e8 6c 25 ad ff       	call   80cbabe <_ZN7CMTRand7randIntERKm>
 85f9552:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85f9555:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85f9558:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f955c:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85f955f:	89 04 24             	mov    %eax,(%esp)
 85f9562:	e8 75 4c a9 ff       	call   808e1dc <_ZNSt6vectorIiSaIiEEixEj>
 85f9567:	8b 10                	mov    (%eax),%edx
 85f9569:	8b 45 14             	mov    0x14(%ebp),%eax
 85f956c:	89 10                	mov    %edx,(%eax)
 85f956e:	8b 45 14             	mov    0x14(%ebp),%eax
 85f9571:	8b 08                	mov    (%eax),%ecx
 85f9573:	ba 67 66 66 66       	mov    $0x66666667,%edx
 85f9578:	89 c8                	mov    %ecx,%eax
 85f957a:	f7 ea                	imul   %edx
 85f957c:	c1 fa 02             	sar    $0x2,%edx
 85f957f:	89 c8                	mov    %ecx,%eax
 85f9581:	c1 f8 1f             	sar    $0x1f,%eax
 85f9584:	29 c2                	sub    %eax,%edx
 85f9586:	89 d0                	mov    %edx,%eax
 85f9588:	c1 e0 02             	shl    $0x2,%eax
 85f958b:	01 d0                	add    %edx,%eax
 85f958d:	01 c0                	add    %eax,%eax
 85f958f:	89 ca                	mov    %ecx,%edx
 85f9591:	29 c2                	sub    %eax,%edx
 85f9593:	85 d2                	test   %edx,%edx
 85f9595:	74 17                	je     85f95ae <_ZN15RegenerationROI12_RandomLevelEiiR16select_base_itemRSt18basic_stringstreamIcSt11char_traitsIcESaIcEE+0x1e2>
 85f9597:	8b 45 14             	mov    0x14(%ebp),%eax
 85f959a:	8b 00                	mov    (%eax),%eax
 85f959c:	83 f8 0a             	cmp    $0xa,%eax
 85f959f:	7e 0d                	jle    85f95ae <_ZN15RegenerationROI12_RandomLevelEiiR16select_base_itemRSt18basic_stringstreamIcSt11char_traitsIcESaIcEE+0x1e2>
 85f95a1:	8b 45 14             	mov    0x14(%ebp),%eax
 85f95a4:	8b 00                	mov    (%eax),%eax
 85f95a6:	8d 50 05             	lea    0x5(%eax),%edx
 85f95a9:	8b 45 14             	mov    0x14(%ebp),%eax
 85f95ac:	89 10                	mov    %edx,(%eax)
 85f95ae:	8b 45 14             	mov    0x14(%ebp),%eax
 85f95b1:	8b 30                	mov    (%eax),%esi
 85f95b3:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85f95b6:	89 04 24             	mov    %eax,(%esp)
 85f95b9:	e8 02 4c a9 ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 85f95be:	89 c3                	mov    %eax,%ebx
 85f95c0:	8b 45 18             	mov    0x18(%ebp),%eax
 85f95c3:	83 c0 08             	add    $0x8,%eax
 85f95c6:	c7 44 24 04 98 24 cd 	movl   $0x8cd2498,0x4(%esp)
 85f95cd:	08 
 85f95ce:	89 04 24             	mov    %eax,(%esp)
 85f95d1:	e8 2a 3d 10 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 85f95d6:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85f95da:	89 04 24             	mov    %eax,(%esp)
 85f95dd:	e8 1e 68 10 00       	call   86ffe00 <_ZNSolsEj>
 85f95e2:	c7 44 24 04 a7 24 cd 	movl   $0x8cd24a7,0x4(%esp)
 85f95e9:	08 
 85f95ea:	89 04 24             	mov    %eax,(%esp)
 85f95ed:	e8 0e 3d 10 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 85f95f2:	89 74 24 04          	mov    %esi,0x4(%esp)
 85f95f6:	89 04 24             	mov    %eax,(%esp)
 85f95f9:	e8 42 6a 10 00       	call   8700040 <_ZNSolsEi>
 85f95fe:	c7 44 24 04 04 24 cd 	movl   $0x8cd2404,0x4(%esp)
 85f9605:	08 
 85f9606:	89 04 24             	mov    %eax,(%esp)
 85f9609:	e8 f2 3c 10 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 85f960e:	eb 1b                	jmp    85f962b <_ZN15RegenerationROI12_RandomLevelEiiR16select_base_itemRSt18basic_stringstreamIcSt11char_traitsIcESaIcEE+0x25f>
 85f9610:	89 d3                	mov    %edx,%ebx
 85f9612:	89 c6                	mov    %eax,%esi
 85f9614:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85f9617:	89 04 24             	mov    %eax,(%esp)
 85f961a:	e8 bb a7 a8 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 85f961f:	89 f0                	mov    %esi,%eax
 85f9621:	89 da                	mov    %ebx,%edx
 85f9623:	89 04 24             	mov    %eax,(%esp)
 85f9626:	e8 25 a1 4e 00       	call   8ae3750 <_Unwind_Resume>
 85f962b:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85f962e:	89 04 24             	mov    %eax,(%esp)
 85f9631:	e8 a4 a7 a8 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 85f9636:	83 c4 30             	add    $0x30,%esp
 85f9639:	5b                   	pop    %ebx
 85f963a:	5e                   	pop    %esi
 85f963b:	5d                   	pop    %ebp
 85f963c:	c3                   	ret
 85f963d:	90                   	nop

```

```c
// RegenerationROI::_RandomLevel @ 0x85f93cc

/* RegenerationROI::_RandomLevel(int, int, select_base_item&, std::stringstream&) */

void __thiscall
RegenerationROI::_RandomLevel
          (RegenerationROI *this,int param_1,int param_2,select_base_item *param_3,
          stringstream *param_4)

{
  int iVar1;
  char cVar2;
  ostream *poVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int local_2c;
  vector<int,std::allocator<int>> local_28 [12];
  ulong local_1c;
  int local_18;
  int local_14;
  uint local_10;
  
  iVar1 = param_2;
  iVar4 = param_1;
  poVar3 = std::operator<<((ostream *)(param_4 + 8),"try regen:lv:");
  poVar3 = (ostream *)std::ostream::operator<<(poVar3,iVar4);
  poVar3 = std::operator<<(poVar3,",");
  poVar3 = (ostream *)std::ostream::operator<<(poVar3,iVar1);
  std::operator<<(poVar3,"\n");
  if (param_2 < param_1) {
    std::swap<int>(&param_1,&param_2);
  }
  std::vector<int,std::allocator<int>>::vector(local_28);
  if (param_1 == (param_1 / 5) * 5) {
    local_2c = 0;
  }
  else {
    local_2c = 5 - param_1 % 5;
  }
  local_14 = (param_2 / 5) * 5;
  local_2c = local_2c + param_1;
  local_18 = local_2c;
  for (; local_2c <= local_14; local_2c = local_2c + 5) {
                    /* try { // try from 085f94e8 to 085f960d has its CatchHandler @ 085f9610 */
    std::vector<int,std::allocator<int>>::push_back(local_28,&local_2c);
  }
  cVar2 = std::vector<int,std::allocator<int>>::empty();
  if (cVar2 == '\0') {
    iVar4 = std::vector<int,std::allocator<int>>::size(local_28);
    local_1c = iVar4 - 1;
    local_10 = CMTRand::randInt(*(CMTRand **)this,&local_1c);
    puVar5 = (undefined4 *)std::vector<int,std::allocator<int>>::operator[](local_28,local_10);
    *(undefined4 *)param_3 = *puVar5;
    if ((*(int *)param_3 % 10 != 0) && (10 < *(int *)param_3)) {
      *(int *)param_3 = *(int *)param_3 + 5;
    }
    iVar4 = *(int *)param_3;
    uVar6 = std::vector<int,std::allocator<int>>::size(local_28);
    poVar3 = std::operator<<((ostream *)(param_4 + 8),"Level count : ");
    poVar3 = (ostream *)std::ostream::operator<<(poVar3,uVar6);
    poVar3 = std::operator<<(poVar3," and select lv : ");
    poVar3 = (ostream *)std::ostream::operator<<(poVar3,iVar4);
    std::operator<<(poVar3,"\n");
  }
  else {
    std::operator<<((ostream *)(param_4 + 8),"level count : Empty\n");
  }
  std::vector<int,std::allocator<int>>::~vector(local_28);
  return;
}

```

---

## _Select_Part

```asm
// === 085f8ec2 RegenerationROI::_Select_Part  [0x085f8ec2-0x85f9093] ===
 85f8ec2:	55                   	push   %ebp
 85f8ec3:	89 e5                	mov    %esp,%ebp
 85f8ec5:	56                   	push   %esi
 85f8ec6:	53                   	push   %ebx
 85f8ec7:	83 ec 40             	sub    $0x40,%esp
 85f8eca:	8b 45 08             	mov    0x8(%ebp),%eax
 85f8ecd:	8d 48 04             	lea    0x4(%eax),%ecx
 85f8ed0:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85f8ed3:	8d 55 0c             	lea    0xc(%ebp),%edx
 85f8ed6:	89 54 24 08          	mov    %edx,0x8(%esp)
 85f8eda:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 85f8ede:	89 04 24             	mov    %eax,(%esp)
 85f8ee1:	e8 34 0b 00 00       	call   85f9a1a <_ZNSt3mapIi22str_index_to_itemgroupSt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 85f8ee6:	83 ec 04             	sub    $0x4,%esp
 85f8ee9:	8d 45 cc             	lea    -0x34(%ebp),%eax
 85f8eec:	89 04 24             	mov    %eax,(%esp)
 85f8eef:	e8 dc d6 10 00       	call   87065d0 <_ZNSsC1Ev>
 85f8ef4:	8b 45 08             	mov    0x8(%ebp),%eax
 85f8ef7:	8d 50 04             	lea    0x4(%eax),%edx
 85f8efa:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85f8efd:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f8f01:	89 04 24             	mov    %eax,(%esp)
 85f8f04:	e8 3d 0b 00 00       	call   85f9a46 <_ZNSt3mapIi22str_index_to_itemgroupSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 85f8f09:	83 ec 04             	sub    $0x4,%esp
 85f8f0c:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85f8f0f:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f8f13:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85f8f16:	89 04 24             	mov    %eax,(%esp)
 85f8f19:	e8 4e 0b 00 00       	call   85f9a6c <_ZNKSt17_Rb_tree_iteratorISt4pairIKi22str_index_to_itemgroupEEneERKS4_>
 85f8f1e:	84 c0                	test   %al,%al
 85f8f20:	0f 84 ee 00 00 00    	je     85f9014 <_ZN15RegenerationROI12_Select_PartEiRSt6vectorIiSaIiEE+0x152>
 85f8f26:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85f8f2d:	e9 bc 00 00 00       	jmp    85f8fee <_ZN15RegenerationROI12_Select_PartEiRSt6vectorIiSaIiEE+0x12c>
 85f8f32:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85f8f35:	89 04 24             	mov    %eax,(%esp)
 85f8f38:	e8 43 0b 00 00       	call   85f9a80 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi22str_index_to_itemgroupEEptEv>
 85f8f3d:	8d 50 0c             	lea    0xc(%eax),%edx
 85f8f40:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85f8f43:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f8f47:	89 14 24             	mov    %edx,(%esp)
 85f8f4a:	e8 7f eb c3 ff       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 85f8f4f:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f8f53:	8d 45 cc             	lea    -0x34(%ebp),%eax
 85f8f56:	89 04 24             	mov    %eax,(%esp)
 85f8f59:	e8 a2 ed 10 00       	call   8707d00 <_ZNSsaSERKSs>
 85f8f5e:	e8 a6 74 2c 00       	call   88c0409 <_Z21getItemGroupNameTablev>
 85f8f63:	8d 55 d8             	lea    -0x28(%ebp),%edx
 85f8f66:	8d 4d cc             	lea    -0x34(%ebp),%ecx
 85f8f69:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 85f8f6d:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f8f71:	89 14 24             	mov    %edx,(%esp)
 85f8f74:	e8 37 3e b8 ff       	call   817cdb0 <_ZNSt3mapISsiSt4lessISsESaISt4pairIKSsiEEE4findERS3_>
 85f8f79:	83 ec 04             	sub    $0x4,%esp
 85f8f7c:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85f8f7f:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f8f83:	8d 45 c8             	lea    -0x38(%ebp),%eax
 85f8f86:	89 04 24             	mov    %eax,(%esp)
 85f8f89:	e8 9e 42 b8 ff       	call   817d22c <_ZNSt23_Rb_tree_const_iteratorISt4pairIKSsiEEC1ERKSt17_Rb_tree_iteratorIS2_E>
 85f8f8e:	e8 76 74 2c 00       	call   88c0409 <_Z21getItemGroupNameTablev>
 85f8f93:	8d 55 e0             	lea    -0x20(%ebp),%edx
 85f8f96:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f8f9a:	89 14 24             	mov    %edx,(%esp)
 85f8f9d:	e8 3a 3e b8 ff       	call   817cddc <_ZNSt3mapISsiSt4lessISsESaISt4pairIKSsiEEE3endEv>
 85f8fa2:	83 ec 04             	sub    $0x4,%esp
 85f8fa5:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85f8fa8:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f8fac:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85f8faf:	89 04 24             	mov    %eax,(%esp)
 85f8fb2:	e8 75 42 b8 ff       	call   817d22c <_ZNSt23_Rb_tree_const_iteratorISt4pairIKSsiEEC1ERKSt17_Rb_tree_iteratorIS2_E>
 85f8fb7:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85f8fba:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f8fbe:	8d 45 c8             	lea    -0x38(%ebp),%eax
 85f8fc1:	89 04 24             	mov    %eax,(%esp)
 85f8fc4:	e8 c5 0a 00 00       	call   85f9a8e <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKSsiEEneERKS3_>
 85f8fc9:	84 c0                	test   %al,%al
 85f8fcb:	74 1d                	je     85f8fea <_ZN15RegenerationROI12_Select_PartEiRSt6vectorIiSaIiEE+0x128>
 85f8fcd:	8d 45 c8             	lea    -0x38(%ebp),%eax
 85f8fd0:	89 04 24             	mov    %eax,(%esp)
 85f8fd3:	e8 ca 0a 00 00       	call   85f9aa2 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKSsiEEptEv>
 85f8fd8:	83 c0 04             	add    $0x4,%eax
 85f8fdb:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f8fdf:	8b 45 10             	mov    0x10(%ebp),%eax
 85f8fe2:	89 04 24             	mov    %eax,(%esp)
 85f8fe5:	e8 3c 81 b1 ff       	call   8111126 <_ZNSt6vectorIiSaIiEE9push_backERKi>
 85f8fea:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85f8fee:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85f8ff1:	89 04 24             	mov    %eax,(%esp)
 85f8ff4:	e8 87 0a 00 00       	call   85f9a80 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi22str_index_to_itemgroupEEptEv>
 85f8ff9:	83 c0 0c             	add    $0xc,%eax
 85f8ffc:	89 04 24             	mov    %eax,(%esp)
 85f8fff:	e8 8c ea c3 ff       	call   8237a90 <_ZNKSt6vectorISsSaISsEE4sizeEv>
 85f9004:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 85f9007:	0f 97 c0             	seta   %al
 85f900a:	84 c0                	test   %al,%al
 85f900c:	0f 85 20 ff ff ff    	jne    85f8f32 <_ZN15RegenerationROI12_Select_PartEiRSt6vectorIiSaIiEE+0x70>
 85f9012:	eb 6b                	jmp    85f907f <_ZN15RegenerationROI12_Select_PartEiRSt6vectorIiSaIiEE+0x1bd>
 85f9014:	8d 45 cc             	lea    -0x34(%ebp),%eax
 85f9017:	89 04 24             	mov    %eax,(%esp)
 85f901a:	e8 d1 d4 10 00       	call   87064f0 <_ZNKSs5c_strEv>
 85f901f:	89 c3                	mov    %eax,%ebx
 85f9021:	8b 75 0c             	mov    0xc(%ebp),%esi
 85f9024:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 85f902b:	00 
 85f902c:	c7 44 24 08 d6 00 00 	movl   $0xd6,0x8(%esp)
 85f9033:	00 
 85f9034:	c7 44 24 04 40 31 cd 	movl   $0x8cd3140,0x4(%esp)
 85f903b:	08 
 85f903c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85f903f:	89 04 24             	mov    %eax,(%esp)
 85f9042:	e8 d1 66 f5 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 85f9047:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 85f904b:	89 74 24 08          	mov    %esi,0x8(%esp)
 85f904f:	c7 44 24 04 5b 24 cd 	movl   $0x8cd245b,0x4(%esp)
 85f9056:	08 
 85f9057:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85f905a:	89 04 24             	mov    %eax,(%esp)
 85f905d:	e8 26 67 f5 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 85f9062:	eb 1b                	jmp    85f907f <_ZN15RegenerationROI12_Select_PartEiRSt6vectorIiSaIiEE+0x1bd>
 85f9064:	89 d3                	mov    %edx,%ebx
 85f9066:	89 c6                	mov    %eax,%esi
 85f9068:	8d 45 cc             	lea    -0x34(%ebp),%eax
 85f906b:	89 04 24             	mov    %eax,(%esp)
 85f906e:	e8 6d eb 10 00       	call   8707be0 <_ZNSsD1Ev>
 85f9073:	89 f0                	mov    %esi,%eax
 85f9075:	89 da                	mov    %ebx,%edx
 85f9077:	89 04 24             	mov    %eax,(%esp)
 85f907a:	e8 d1 a6 4e 00       	call   8ae3750 <_Unwind_Resume>
 85f907f:	8d 45 cc             	lea    -0x34(%ebp),%eax
 85f9082:	89 04 24             	mov    %eax,(%esp)
 85f9085:	e8 56 eb 10 00       	call   8707be0 <_ZNSsD1Ev>
 85f908a:	8d 65 f8             	lea    -0x8(%ebp),%esp
 85f908d:	83 c4 00             	add    $0x0,%esp
 85f9090:	5b                   	pop    %ebx
 85f9091:	5e                   	pop    %esi
 85f9092:	5d                   	pop    %ebp
 85f9093:	c3                   	ret

```

```c
// RegenerationROI::_Select_Part @ 0x85f8ec2

/* RegenerationROI::_Select_Part(int, std::vector<int, std::allocator<int> >&) */

void __thiscall RegenerationROI::_Select_Part(RegenerationROI *this,int param_1,vector *param_2)

{
  char cVar1;
  string *psVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  _Rb_tree_const_iterator<std::pair<std::string_const,int>> local_3c [4];
  string local_38 [4];
  _Rb_tree_iterator local_34 [4];
  map<int,str_index_to_itemgroup,std::less<int>,std::allocator<std::pair<int_const,str_index_to_itemgroup>>>
  local_30 [4];
  string local_2c;
  _Rb_tree_const_iterator<std::pair<std::string_const,int>> local_28 [4];
  map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  local_24 [4];
  cMyTrace local_20 [16];
  uint local_10;
  
  std::
  map<int,str_index_to_itemgroup,std::less<int>,std::allocator<std::pair<int_const,str_index_to_itemgroup>>>
  ::find((int *)local_34);
  std::string::string(local_38);
                    /* try { // try from 085f8f04 to 085f9061 has its CatchHandler @ 085f9064 */
  std::
  map<int,str_index_to_itemgroup,std::less<int>,std::allocator<std::pair<int_const,str_index_to_itemgroup>>>
  ::end(local_30);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,str_index_to_itemgroup>>::operator!=
                    ((_Rb_tree_iterator<std::pair<int_const,str_index_to_itemgroup>> *)local_30,
                     local_34);
  if (cVar1 == '\0') {
    uVar5 = std::string::c_str(local_38);
    cMyTrace::cMyTrace(local_20,
                       "void RegenerationROI::_Select_Part(int, std::vector<int, std::allocator<int> >&)"
                       ,0xd6,5);
    cMyTrace::operator()(local_20,"packet:%d groupName:%s\n",param_1,uVar5);
  }
  else {
    local_10 = 0;
    while( true ) {
      iVar3 = std::_Rb_tree_iterator<std::pair<int_const,str_index_to_itemgroup>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,str_index_to_itemgroup>> *)local_34)
      ;
      uVar4 = std::vector<std::string,std::allocator<std::string>>::size
                        ((vector<std::string,std::allocator<std::string>> *)(iVar3 + 0xc));
      if (uVar4 <= local_10) break;
      iVar3 = std::_Rb_tree_iterator<std::pair<int_const,str_index_to_itemgroup>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,str_index_to_itemgroup>> *)local_34)
      ;
      psVar2 = (string *)
               std::vector<std::string,std::allocator<std::string>>::operator[]
                         ((vector<std::string,std::allocator<std::string>> *)(iVar3 + 0xc),local_10)
      ;
      std::string::operator=(local_38,psVar2);
      getItemGroupNameTable();
      std::
      map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>::
      find(&local_2c);
      std::_Rb_tree_const_iterator<std::pair<std::string_const,int>>::_Rb_tree_const_iterator
                (local_3c,(_Rb_tree_iterator *)&local_2c);
      getItemGroupNameTable();
      std::
      map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>::
      end(local_24);
      std::_Rb_tree_const_iterator<std::pair<std::string_const,int>>::_Rb_tree_const_iterator
                (local_28,(_Rb_tree_iterator *)local_24);
      cVar1 = std::_Rb_tree_const_iterator<std::pair<std::string_const,int>>::operator!=
                        (local_3c,(_Rb_tree_const_iterator *)local_28);
      if (cVar1 != '\0') {
        iVar3 = std::_Rb_tree_const_iterator<std::pair<std::string_const,int>>::operator->(local_3c)
        ;
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)param_2,(int *)(iVar3 + 4));
      }
      local_10 = local_10 + 1;
    }
  }
  std::string::~string(local_38);
  return;
}

```

---

## ~RegenerationROI

```asm
// === 085f8506 RegenerationROI::~RegenerationROI  [0x085f8506-0x85f853b] ===
 85f8506:	55                   	push   %ebp
 85f8507:	89 e5                	mov    %esp,%ebp
 85f8509:	83 ec 18             	sub    $0x18,%esp
 85f850c:	8b 45 08             	mov    0x8(%ebp),%eax
 85f850f:	8b 00                	mov    (%eax),%eax
 85f8511:	85 c0                	test   %eax,%eax
 85f8513:	74 0d                	je     85f8522 <_ZN15RegenerationROID1Ev+0x1c>
 85f8515:	8b 45 08             	mov    0x8(%ebp),%eax
 85f8518:	8b 00                	mov    (%eax),%eax
 85f851a:	89 04 24             	mov    %eax,(%esp)
 85f851d:	e8 ce bf 12 00       	call   87244f0 <_ZdlPv>
 85f8522:	8b 45 08             	mov    0x8(%ebp),%eax
 85f8525:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 85f852b:	8b 45 08             	mov    0x8(%ebp),%eax
 85f852e:	83 c0 04             	add    $0x4,%eax
 85f8531:	89 04 24             	mov    %eax,(%esp)
 85f8534:	e8 a9 12 00 00       	call   85f97e2 <_ZN28RandomOptionItem_RegeneratorD1Ev>
 85f8539:	c9                   	leave
 85f853a:	c3                   	ret
 85f853b:	90                   	nop

```

```c
// RegenerationROI::~RegenerationROI @ 0x85f8506

/* RegenerationROI::~RegenerationROI() */

void __thiscall RegenerationROI::~RegenerationROI(RegenerationROI *this)

{
  if (*(int *)this != 0) {
    operator_delete(*(void **)this);
  }
  *(undefined4 *)this = 0;
  RandomOptionItem_Regenerator::~RandomOptionItem_Regenerator
            ((RandomOptionItem_Regenerator *)(this + 4));
  return;
}

```

