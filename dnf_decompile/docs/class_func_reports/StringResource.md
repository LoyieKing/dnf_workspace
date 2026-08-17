# StringResource

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 9

---

## StringResource

```asm
// === 08ad47a8 StringResource::StringResource  [0x08ad47a8-0x8ad47bb] ===
 8ad47a8:	55                   	push   %ebp
 8ad47a9:	89 e5                	mov    %esp,%ebp
 8ad47ab:	83 ec 18             	sub    $0x18,%esp
 8ad47ae:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad47b1:	89 04 24             	mov    %eax,(%esp)
 8ad47b4:	e8 d3 0d 00 00       	call   8ad558c <_ZNSt3mapIi10CharStringSt4lessIiESaISt4pairIKiS0_EEEC1Ev>
 8ad47b9:	c9                   	leave
 8ad47ba:	c3                   	ret
 8ad47bb:	90                   	nop

```

```c
// StringResource::StringResource @ 0x8ad47a8

/* StringResource::StringResource() */

void __thiscall StringResource::StringResource(StringResource *this)

{
  std::map<int,CharString,std::less<int>,std::allocator<std::pair<int_const,CharString>>>::map
            ((map<int,CharString,std::less<int>,std::allocator<std::pair<int_const,CharString>>> *)
             this);
  return;
}

```

---

## add

```asm
// === 08ad47d0 StringResource::add  [0x08ad47d0-0x8ad4877] ===
 8ad47d0:	55                   	push   %ebp
 8ad47d1:	89 e5                	mov    %esp,%ebp
 8ad47d3:	56                   	push   %esi
 8ad47d4:	53                   	push   %ebx
 8ad47d5:	83 ec 30             	sub    $0x30,%esp
 8ad47d8:	8b 45 10             	mov    0x10(%ebp),%eax
 8ad47db:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ad47df:	8d 45 0c             	lea    0xc(%ebp),%eax
 8ad47e2:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad47e6:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ad47e9:	89 04 24             	mov    %eax,(%esp)
 8ad47ec:	e8 15 0e 00 00       	call   8ad5606 <_ZNSt4pairIi10CharStringEC1IRiRKS0_EEOT_OT0_>
 8ad47f1:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ad47f4:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad47f8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8ad47fb:	89 04 24             	mov    %eax,(%esp)
 8ad47fe:	e8 3b 0e 00 00       	call   8ad563e <_ZNSt4pairIKi10CharStringEC1IiS1_EEOS_IT_T0_E>
 8ad4803:	8b 55 08             	mov    0x8(%ebp),%edx
 8ad4806:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8ad4809:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 8ad480c:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8ad4810:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad4814:	89 04 24             	mov    %eax,(%esp)
 8ad4817:	e8 5c 0e 00 00       	call   8ad5678 <_ZNSt3mapIi10CharStringSt4lessIiESaISt4pairIKiS0_EEE6insertERKS5_>
 8ad481c:	83 ec 04             	sub    $0x4,%esp
 8ad481f:	0f b6 5d e4          	movzbl -0x1c(%ebp),%ebx
 8ad4823:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8ad4826:	89 04 24             	mov    %eax,(%esp)
 8ad4829:	e8 48 0d 00 00       	call   8ad5576 <_ZNSt4pairIKi10CharStringED1Ev>
 8ad482e:	eb 30                	jmp    8ad4860 <_ZN14StringResource3addEiRK10CharString+0x90>
 8ad4830:	89 d3                	mov    %edx,%ebx
 8ad4832:	89 c6                	mov    %eax,%esi
 8ad4834:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8ad4837:	89 04 24             	mov    %eax,(%esp)
 8ad483a:	e8 37 0d 00 00       	call   8ad5576 <_ZNSt4pairIKi10CharStringED1Ev>
 8ad483f:	89 f0                	mov    %esi,%eax
 8ad4841:	89 da                	mov    %ebx,%edx
 8ad4843:	eb 00                	jmp    8ad4845 <_ZN14StringResource3addEiRK10CharString+0x75>
 8ad4845:	89 d3                	mov    %edx,%ebx
 8ad4847:	89 c6                	mov    %eax,%esi
 8ad4849:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ad484c:	89 04 24             	mov    %eax,(%esp)
 8ad484f:	e8 0c 0d 00 00       	call   8ad5560 <_ZNSt4pairIi10CharStringED1Ev>
 8ad4854:	89 f0                	mov    %esi,%eax
 8ad4856:	89 da                	mov    %ebx,%edx
 8ad4858:	89 04 24             	mov    %eax,(%esp)
 8ad485b:	e8 f0 ee 00 00       	call   8ae3750 <_Unwind_Resume>
 8ad4860:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ad4863:	89 04 24             	mov    %eax,(%esp)
 8ad4866:	e8 f5 0c 00 00       	call   8ad5560 <_ZNSt4pairIi10CharStringED1Ev>
 8ad486b:	89 d8                	mov    %ebx,%eax
 8ad486d:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8ad4870:	83 c4 00             	add    $0x0,%esp
 8ad4873:	5b                   	pop    %ebx
 8ad4874:	5e                   	pop    %esi
 8ad4875:	5d                   	pop    %ebp
 8ad4876:	c3                   	ret
 8ad4877:	90                   	nop

```

```c
// StringResource::add @ 0x8ad47d0

/* StringResource::add(int, CharString const&) */

undefined1 __thiscall StringResource::add(StringResource *this,int param_1,CharString *param_2)

{
  pair local_24 [4];
  undefined1 local_20;
  pair<int_const,CharString> local_1c [8];
  pair<int,CharString> local_14 [8];
  
  std::pair<int,CharString>::pair<int&,CharString_const&>(local_14,&param_1,param_2);
                    /* try { // try from 08ad47fe to 08ad4802 has its CatchHandler @ 08ad4845 */
  std::pair<int_const,CharString>::pair<int,CharString>(local_1c,local_14);
                    /* try { // try from 08ad4817 to 08ad481b has its CatchHandler @ 08ad4830 */
  std::map<int,CharString,std::less<int>,std::allocator<std::pair<int_const,CharString>>>::insert
            (local_24);
                    /* try { // try from 08ad4829 to 08ad482d has its CatchHandler @ 08ad4845 */
  std::pair<int_const,CharString>::~pair(local_1c);
  std::pair<int,CharString>::~pair(local_14);
  return local_20;
}

```

---

## get

```asm
// === 08ad4878 StringResource::get  [0x08ad4878-0x8ad48e5] ===
 8ad4878:	55                   	push   %ebp
 8ad4879:	89 e5                	mov    %esp,%ebp
 8ad487b:	83 ec 28             	sub    $0x28,%esp
 8ad487e:	8b 55 08             	mov    0x8(%ebp),%edx
 8ad4881:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ad4884:	8d 4d 0c             	lea    0xc(%ebp),%ecx
 8ad4887:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8ad488b:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad488f:	89 04 24             	mov    %eax,(%esp)
 8ad4892:	e8 0d 0e 00 00       	call   8ad56a4 <_ZNKSt3mapIi10CharStringSt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 8ad4897:	83 ec 04             	sub    $0x4,%esp
 8ad489a:	8b 55 08             	mov    0x8(%ebp),%edx
 8ad489d:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8ad48a0:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad48a4:	89 04 24             	mov    %eax,(%esp)
 8ad48a7:	e8 24 0e 00 00       	call   8ad56d0 <_ZNKSt3mapIi10CharStringSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 8ad48ac:	83 ec 04             	sub    $0x4,%esp
 8ad48af:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8ad48b2:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad48b6:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ad48b9:	89 04 24             	mov    %eax,(%esp)
 8ad48bc:	e8 35 0e 00 00       	call   8ad56f6 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi10CharStringEEneERKS4_>
 8ad48c1:	84 c0                	test   %al,%al
 8ad48c3:	74 1a                	je     8ad48df <_ZNK14StringResource3getEiPPK10CharString+0x67>
 8ad48c5:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ad48c8:	89 04 24             	mov    %eax,(%esp)
 8ad48cb:	e8 3a 0e 00 00       	call   8ad570a <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi10CharStringEEptEv>
 8ad48d0:	8d 50 04             	lea    0x4(%eax),%edx
 8ad48d3:	8b 45 10             	mov    0x10(%ebp),%eax
 8ad48d6:	89 10                	mov    %edx,(%eax)
 8ad48d8:	b8 01 00 00 00       	mov    $0x1,%eax
 8ad48dd:	eb 05                	jmp    8ad48e4 <_ZNK14StringResource3getEiPPK10CharString+0x6c>
 8ad48df:	b8 00 00 00 00       	mov    $0x0,%eax
 8ad48e4:	c9                   	leave
 8ad48e5:	c3                   	ret

```

```c
// StringResource::get @ 0x8ad4878

/* StringResource::get(int, CharString const**) const */

bool __thiscall StringResource::get(StringResource *this,int param_1,CharString **param_2)

{
  char cVar1;
  int iVar2;
  _Rb_tree_const_iterator<std::pair<int_const,CharString>> local_14 [4];
  map<int,CharString,std::less<int>,std::allocator<std::pair<int_const,CharString>>> local_10 [12];
  
  std::map<int,CharString,std::less<int>,std::allocator<std::pair<int_const,CharString>>>::find
            ((int *)local_14);
  std::map<int,CharString,std::less<int>,std::allocator<std::pair<int_const,CharString>>>::end
            (local_10);
  cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,CharString>>::operator!=
                    (local_14,(_Rb_tree_const_iterator *)local_10);
  if (cVar1 != '\0') {
    iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,CharString>>::operator->(local_14);
    *param_2 = (CharString *)(iVar2 + 4);
  }
  return cVar1 != '\0';
}

```

---

## loadFromBinary

```asm
// === 08ad4e04 StringResource::loadFromBinary  [0x08ad4e04-0x8ad52a1] ===
 8ad4e04:	55                   	push   %ebp
 8ad4e05:	89 e5                	mov    %esp,%ebp
 8ad4e07:	56                   	push   %esi
 8ad4e08:	53                   	push   %ebx
 8ad4e09:	83 ec 60             	sub    $0x60,%esp
 8ad4e0c:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8ad4e0f:	89 04 24             	mov    %eax,(%esp)
 8ad4e12:	e8 93 1b 00 00       	call   8ad69aa <_ZN10CharStringC1Ev>
 8ad4e17:	83 7d 10 04          	cmpl   $0x4,0x10(%ebp)
 8ad4e1b:	0f 8e b6 01 00 00    	jle    8ad4fd7 <_ZN14StringResource14loadFromBinaryEPKhiP10CharString+0x1d3>
 8ad4e21:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad4e24:	0f b6 00             	movzbl (%eax),%eax
 8ad4e27:	3c 53                	cmp    $0x53,%al
 8ad4e29:	0f 85 a8 01 00 00    	jne    8ad4fd7 <_ZN14StringResource14loadFromBinaryEPKhiP10CharString+0x1d3>
 8ad4e2f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad4e32:	83 c0 01             	add    $0x1,%eax
 8ad4e35:	0f b6 00             	movzbl (%eax),%eax
 8ad4e38:	3c 43                	cmp    $0x43,%al
 8ad4e3a:	0f 85 97 01 00 00    	jne    8ad4fd7 <_ZN14StringResource14loadFromBinaryEPKhiP10CharString+0x1d3>
 8ad4e40:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad4e43:	83 c0 02             	add    $0x2,%eax
 8ad4e46:	0f b6 00             	movzbl (%eax),%eax
 8ad4e49:	3c 30                	cmp    $0x30,%al
 8ad4e4b:	0f 85 86 01 00 00    	jne    8ad4fd7 <_ZN14StringResource14loadFromBinaryEPKhiP10CharString+0x1d3>
 8ad4e51:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad4e54:	83 c0 03             	add    $0x3,%eax
 8ad4e57:	0f b6 00             	movzbl (%eax),%eax
 8ad4e5a:	3c 31                	cmp    $0x31,%al
 8ad4e5c:	0f 85 75 01 00 00    	jne    8ad4fd7 <_ZN14StringResource14loadFromBinaryEPKhiP10CharString+0x1d3>
 8ad4e62:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad4e65:	83 c0 04             	add    $0x4,%eax
 8ad4e68:	8b 00                	mov    (%eax),%eax
 8ad4e6a:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8ad4e6d:	8b 45 10             	mov    0x10(%ebp),%eax
 8ad4e70:	83 c0 03             	add    $0x3,%eax
 8ad4e73:	89 c2                	mov    %eax,%edx
 8ad4e75:	c1 fa 1f             	sar    $0x1f,%edx
 8ad4e78:	c1 ea 1e             	shr    $0x1e,%edx
 8ad4e7b:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8ad4e7e:	c1 f8 02             	sar    $0x2,%eax
 8ad4e81:	c1 e0 02             	shl    $0x2,%eax
 8ad4e84:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8ad4e87:	c7 45 dc 17 af 19 58 	movl   $0x5819af17,-0x24(%ebp)
 8ad4e8e:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8ad4e91:	89 04 24             	mov    %eax,(%esp)
 8ad4e94:	e8 27 df c4 ff       	call   8722dc0 <_Znaj>
 8ad4e99:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8ad4e9c:	8b 45 10             	mov    0x10(%ebp),%eax
 8ad4e9f:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ad4ea2:	83 c2 08             	add    $0x8,%edx
 8ad4ea5:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ad4ea9:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad4ead:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8ad4eb0:	89 04 24             	mov    %eax,(%esp)
 8ad4eb3:	e8 e8 89 5a ff       	call   807d8a0 <memcpy@plt>
 8ad4eb8:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8ad4ebb:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8ad4ebe:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8ad4ec1:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8ad4ec4:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8ad4ecb:	eb 2b                	jmp    8ad4ef8 <_ZN14StringResource14loadFromBinaryEPKhiP10CharString+0xf4>
 8ad4ecd:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8ad4ed0:	c1 e0 02             	shl    $0x2,%eax
 8ad4ed3:	03 45 e8             	add    -0x18(%ebp),%eax
 8ad4ed6:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8ad4ed9:	c1 e2 02             	shl    $0x2,%edx
 8ad4edc:	03 55 e8             	add    -0x18(%ebp),%edx
 8ad4edf:	8b 12                	mov    (%edx),%edx
 8ad4ee1:	33 55 ec             	xor    -0x14(%ebp),%edx
 8ad4ee4:	89 10                	mov    %edx,(%eax)
 8ad4ee6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8ad4ee9:	c1 e0 02             	shl    $0x2,%eax
 8ad4eec:	03 45 e8             	add    -0x18(%ebp),%eax
 8ad4eef:	8b 00                	mov    (%eax),%eax
 8ad4ef1:	31 45 ec             	xor    %eax,-0x14(%ebp)
 8ad4ef4:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8ad4ef8:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8ad4efb:	c1 e8 02             	shr    $0x2,%eax
 8ad4efe:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 8ad4f01:	0f 97 c0             	seta   %al
 8ad4f04:	84 c0                	test   %al,%al
 8ad4f06:	75 c5                	jne    8ad4ecd <_ZN14StringResource14loadFromBinaryEPKhiP10CharString+0xc9>
 8ad4f08:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8ad4f0b:	89 04 24             	mov    %eax,(%esp)
 8ad4f0e:	e8 eb 4a 00 00       	call   8ad99fe <_ZN10WideStringC1Ev>
 8ad4f13:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 8ad4f16:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8ad4f19:	8d 4d b4             	lea    -0x4c(%ebp),%ecx
 8ad4f1c:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8ad4f20:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad4f24:	89 04 24             	mov    %eax,(%esp)
 8ad4f27:	e8 67 a9 00 00       	call   8adf893 <_Z15convertFromUtf8PKciP10WideString>
 8ad4f2c:	88 45 e7             	mov    %al,-0x19(%ebp)
 8ad4f2f:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 8ad4f33:	74 0b                	je     8ad4f40 <_ZN14StringResource14loadFromBinaryEPKhiP10CharString+0x13c>
 8ad4f35:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8ad4f38:	89 04 24             	mov    %eax,(%esp)
 8ad4f3b:	e8 70 fc c4 ff       	call   8724bb0 <_ZdaPv>
 8ad4f40:	0f b6 45 e7          	movzbl -0x19(%ebp),%eax
 8ad4f44:	83 f0 01             	xor    $0x1,%eax
 8ad4f47:	84 c0                	test   %al,%al
 8ad4f49:	74 0c                	je     8ad4f57 <_ZN14StringResource14loadFromBinaryEPKhiP10CharString+0x153>
 8ad4f4b:	bb 00 00 00 00       	mov    $0x0,%ebx
 8ad4f50:	be 00 00 00 00       	mov    $0x0,%esi
 8ad4f55:	eb 68                	jmp    8ad4fbf <_ZN14StringResource14loadFromBinaryEPKhiP10CharString+0x1bb>
 8ad4f57:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8ad4f5a:	8d 55 b4             	lea    -0x4c(%ebp),%edx
 8ad4f5d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad4f61:	89 04 24             	mov    %eax,(%esp)
 8ad4f64:	e8 bb a6 00 00       	call   8adf624 <_Z19convertToCharStringRK10WideString>
 8ad4f69:	83 ec 04             	sub    $0x4,%esp
 8ad4f6c:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8ad4f6f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad4f73:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8ad4f76:	89 04 24             	mov    %eax,(%esp)
 8ad4f79:	e8 60 21 00 00       	call   8ad70de <_ZN10CharStringaSERKS_>
 8ad4f7e:	eb 15                	jmp    8ad4f95 <_ZN14StringResource14loadFromBinaryEPKhiP10CharString+0x191>
 8ad4f80:	89 d3                	mov    %edx,%ebx
 8ad4f82:	89 c6                	mov    %eax,%esi
 8ad4f84:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8ad4f87:	89 04 24             	mov    %eax,(%esp)
 8ad4f8a:	e8 2b 1c 00 00       	call   8ad6bba <_ZN10CharStringD1Ev>
 8ad4f8f:	89 f0                	mov    %esi,%eax
 8ad4f91:	89 da                	mov    %ebx,%edx
 8ad4f93:	eb 12                	jmp    8ad4fa7 <_ZN14StringResource14loadFromBinaryEPKhiP10CharString+0x1a3>
 8ad4f95:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8ad4f98:	89 04 24             	mov    %eax,(%esp)
 8ad4f9b:	e8 1a 1c 00 00       	call   8ad6bba <_ZN10CharStringD1Ev>
 8ad4fa0:	be 01 00 00 00       	mov    $0x1,%esi
 8ad4fa5:	eb 18                	jmp    8ad4fbf <_ZN14StringResource14loadFromBinaryEPKhiP10CharString+0x1bb>
 8ad4fa7:	89 d3                	mov    %edx,%ebx
 8ad4fa9:	89 c6                	mov    %eax,%esi
 8ad4fab:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8ad4fae:	89 04 24             	mov    %eax,(%esp)
 8ad4fb1:	e8 5e 4c 00 00       	call   8ad9c14 <_ZN10WideStringD1Ev>
 8ad4fb6:	89 f0                	mov    %esi,%eax
 8ad4fb8:	89 da                	mov    %ebx,%edx
 8ad4fba:	e9 b1 02 00 00       	jmp    8ad5270 <_ZN14StringResource14loadFromBinaryEPKhiP10CharString+0x46c>
 8ad4fbf:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8ad4fc2:	89 04 24             	mov    %eax,(%esp)
 8ad4fc5:	e8 4a 4c 00 00       	call   8ad9c14 <_ZN10WideStringD1Ev>
 8ad4fca:	85 f6                	test   %esi,%esi
 8ad4fcc:	0f 84 b9 02 00 00    	je     8ad528b <_ZN14StringResource14loadFromBinaryEPKhiP10CharString+0x487>
 8ad4fd2:	e9 10 02 00 00       	jmp    8ad51e7 <_ZN14StringResource14loadFromBinaryEPKhiP10CharString+0x3e3>
 8ad4fd7:	83 7d 10 03          	cmpl   $0x3,0x10(%ebp)
 8ad4fdb:	0f 8e f4 00 00 00    	jle    8ad50d5 <_ZN14StringResource14loadFromBinaryEPKhiP10CharString+0x2d1>
 8ad4fe1:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad4fe4:	0f b6 00             	movzbl (%eax),%eax
 8ad4fe7:	3c ef                	cmp    $0xef,%al
 8ad4fe9:	0f 85 e6 00 00 00    	jne    8ad50d5 <_ZN14StringResource14loadFromBinaryEPKhiP10CharString+0x2d1>
 8ad4fef:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad4ff2:	83 c0 01             	add    $0x1,%eax
 8ad4ff5:	0f b6 00             	movzbl (%eax),%eax
 8ad4ff8:	3c bb                	cmp    $0xbb,%al
 8ad4ffa:	0f 85 d5 00 00 00    	jne    8ad50d5 <_ZN14StringResource14loadFromBinaryEPKhiP10CharString+0x2d1>
 8ad5000:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad5003:	83 c0 02             	add    $0x2,%eax
 8ad5006:	0f b6 00             	movzbl (%eax),%eax
 8ad5009:	3c bf                	cmp    $0xbf,%al
 8ad500b:	0f 85 c4 00 00 00    	jne    8ad50d5 <_ZN14StringResource14loadFromBinaryEPKhiP10CharString+0x2d1>
 8ad5011:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8ad5014:	89 04 24             	mov    %eax,(%esp)
 8ad5017:	e8 e2 49 00 00       	call   8ad99fe <_ZN10WideStringC1Ev>
 8ad501c:	8b 45 10             	mov    0x10(%ebp),%eax
 8ad501f:	8d 48 fd             	lea    -0x3(%eax),%ecx
 8ad5022:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad5025:	8d 50 03             	lea    0x3(%eax),%edx
 8ad5028:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8ad502b:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ad502f:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8ad5033:	89 14 24             	mov    %edx,(%esp)
 8ad5036:	e8 58 a8 00 00       	call   8adf893 <_Z15convertFromUtf8PKciP10WideString>
 8ad503b:	88 45 f7             	mov    %al,-0x9(%ebp)
 8ad503e:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 8ad5042:	83 f0 01             	xor    $0x1,%eax
 8ad5045:	84 c0                	test   %al,%al
 8ad5047:	74 0c                	je     8ad5055 <_ZN14StringResource14loadFromBinaryEPKhiP10CharString+0x251>
 8ad5049:	bb 00 00 00 00       	mov    $0x0,%ebx
 8ad504e:	be 00 00 00 00       	mov    $0x0,%esi
 8ad5053:	eb 68                	jmp    8ad50bd <_ZN14StringResource14loadFromBinaryEPKhiP10CharString+0x2b9>
 8ad5055:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8ad5058:	8d 55 b0             	lea    -0x50(%ebp),%edx
 8ad505b:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad505f:	89 04 24             	mov    %eax,(%esp)
 8ad5062:	e8 bd a5 00 00       	call   8adf624 <_Z19convertToCharStringRK10WideString>
 8ad5067:	83 ec 04             	sub    $0x4,%esp
 8ad506a:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8ad506d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad5071:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8ad5074:	89 04 24             	mov    %eax,(%esp)
 8ad5077:	e8 62 20 00 00       	call   8ad70de <_ZN10CharStringaSERKS_>
 8ad507c:	eb 15                	jmp    8ad5093 <_ZN14StringResource14loadFromBinaryEPKhiP10CharString+0x28f>
 8ad507e:	89 d3                	mov    %edx,%ebx
 8ad5080:	89 c6                	mov    %eax,%esi
 8ad5082:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8ad5085:	89 04 24             	mov    %eax,(%esp)
 8ad5088:	e8 2d 1b 00 00       	call   8ad6bba <_ZN10CharStringD1Ev>
 8ad508d:	89 f0                	mov    %esi,%eax
 8ad508f:	89 da                	mov    %ebx,%edx
 8ad5091:	eb 12                	jmp    8ad50a5 <_ZN14StringResource14loadFromBinaryEPKhiP10CharString+0x2a1>
 8ad5093:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8ad5096:	89 04 24             	mov    %eax,(%esp)
 8ad5099:	e8 1c 1b 00 00       	call   8ad6bba <_ZN10CharStringD1Ev>
 8ad509e:	be 01 00 00 00       	mov    $0x1,%esi
 8ad50a3:	eb 18                	jmp    8ad50bd <_ZN14StringResource14loadFromBinaryEPKhiP10CharString+0x2b9>
 8ad50a5:	89 d3                	mov    %edx,%ebx
 8ad50a7:	89 c6                	mov    %eax,%esi
 8ad50a9:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8ad50ac:	89 04 24             	mov    %eax,(%esp)
 8ad50af:	e8 60 4b 00 00       	call   8ad9c14 <_ZN10WideStringD1Ev>
 8ad50b4:	89 f0                	mov    %esi,%eax
 8ad50b6:	89 da                	mov    %ebx,%edx
 8ad50b8:	e9 b3 01 00 00       	jmp    8ad5270 <_ZN14StringResource14loadFromBinaryEPKhiP10CharString+0x46c>
 8ad50bd:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8ad50c0:	89 04 24             	mov    %eax,(%esp)
 8ad50c3:	e8 4c 4b 00 00       	call   8ad9c14 <_ZN10WideStringD1Ev>
 8ad50c8:	85 f6                	test   %esi,%esi
 8ad50ca:	0f 84 bb 01 00 00    	je     8ad528b <_ZN14StringResource14loadFromBinaryEPKhiP10CharString+0x487>
 8ad50d0:	e9 12 01 00 00       	jmp    8ad51e7 <_ZN14StringResource14loadFromBinaryEPKhiP10CharString+0x3e3>
 8ad50d5:	83 7d 10 02          	cmpl   $0x2,0x10(%ebp)
 8ad50d9:	0f 8e b8 00 00 00    	jle    8ad5197 <_ZN14StringResource14loadFromBinaryEPKhiP10CharString+0x393>
 8ad50df:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad50e2:	0f b6 00             	movzbl (%eax),%eax
 8ad50e5:	3c ff                	cmp    $0xff,%al
 8ad50e7:	0f 85 aa 00 00 00    	jne    8ad5197 <_ZN14StringResource14loadFromBinaryEPKhiP10CharString+0x393>
 8ad50ed:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad50f0:	83 c0 01             	add    $0x1,%eax
 8ad50f3:	0f b6 00             	movzbl (%eax),%eax
 8ad50f6:	3c fe                	cmp    $0xfe,%al
 8ad50f8:	0f 85 99 00 00 00    	jne    8ad5197 <_ZN14StringResource14loadFromBinaryEPKhiP10CharString+0x393>
 8ad50fe:	8b 45 10             	mov    0x10(%ebp),%eax
 8ad5101:	83 e8 02             	sub    $0x2,%eax
 8ad5104:	89 c2                	mov    %eax,%edx
 8ad5106:	c1 ea 1f             	shr    $0x1f,%edx
 8ad5109:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8ad510c:	d1 f8                	sar    $1,%eax
 8ad510e:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ad5111:	83 c2 02             	add    $0x2,%edx
 8ad5114:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ad5118:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad511c:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8ad511f:	89 04 24             	mov    %eax,(%esp)
 8ad5122:	e8 9b 49 00 00       	call   8ad9ac2 <_ZN10WideStringC1EPKwi>
 8ad5127:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8ad512a:	8d 55 ac             	lea    -0x54(%ebp),%edx
 8ad512d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad5131:	89 04 24             	mov    %eax,(%esp)
 8ad5134:	e8 eb a4 00 00       	call   8adf624 <_Z19convertToCharStringRK10WideString>
 8ad5139:	83 ec 04             	sub    $0x4,%esp
 8ad513c:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8ad513f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad5143:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8ad5146:	89 04 24             	mov    %eax,(%esp)
 8ad5149:	e8 90 1f 00 00       	call   8ad70de <_ZN10CharStringaSERKS_>
 8ad514e:	eb 15                	jmp    8ad5165 <_ZN14StringResource14loadFromBinaryEPKhiP10CharString+0x361>
 8ad5150:	89 d3                	mov    %edx,%ebx
 8ad5152:	89 c6                	mov    %eax,%esi
 8ad5154:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8ad5157:	89 04 24             	mov    %eax,(%esp)
 8ad515a:	e8 5b 1a 00 00       	call   8ad6bba <_ZN10CharStringD1Ev>
 8ad515f:	89 f0                	mov    %esi,%eax
 8ad5161:	89 da                	mov    %ebx,%edx
 8ad5163:	eb 0d                	jmp    8ad5172 <_ZN14StringResource14loadFromBinaryEPKhiP10CharString+0x36e>
 8ad5165:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8ad5168:	89 04 24             	mov    %eax,(%esp)
 8ad516b:	e8 4a 1a 00 00       	call   8ad6bba <_ZN10CharStringD1Ev>
 8ad5170:	eb 18                	jmp    8ad518a <_ZN14StringResource14loadFromBinaryEPKhiP10CharString+0x386>
 8ad5172:	89 d3                	mov    %edx,%ebx
 8ad5174:	89 c6                	mov    %eax,%esi
 8ad5176:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8ad5179:	89 04 24             	mov    %eax,(%esp)
 8ad517c:	e8 93 4a 00 00       	call   8ad9c14 <_ZN10WideStringD1Ev>
 8ad5181:	89 f0                	mov    %esi,%eax
 8ad5183:	89 da                	mov    %ebx,%edx
 8ad5185:	e9 e6 00 00 00       	jmp    8ad5270 <_ZN14StringResource14loadFromBinaryEPKhiP10CharString+0x46c>
 8ad518a:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8ad518d:	89 04 24             	mov    %eax,(%esp)
 8ad5190:	e8 7f 4a 00 00       	call   8ad9c14 <_ZN10WideStringD1Ev>
 8ad5195:	eb 50                	jmp    8ad51e7 <_ZN14StringResource14loadFromBinaryEPKhiP10CharString+0x3e3>
 8ad5197:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad519a:	8b 55 10             	mov    0x10(%ebp),%edx
 8ad519d:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ad51a1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad51a5:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8ad51a8:	89 04 24             	mov    %eax,(%esp)
 8ad51ab:	e8 bc 18 00 00       	call   8ad6a6c <_ZN10CharStringC1EPKci>
 8ad51b0:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8ad51b3:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad51b7:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8ad51ba:	89 04 24             	mov    %eax,(%esp)
 8ad51bd:	e8 1c 1f 00 00       	call   8ad70de <_ZN10CharStringaSERKS_>
 8ad51c2:	eb 18                	jmp    8ad51dc <_ZN14StringResource14loadFromBinaryEPKhiP10CharString+0x3d8>
 8ad51c4:	89 d3                	mov    %edx,%ebx
 8ad51c6:	89 c6                	mov    %eax,%esi
 8ad51c8:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8ad51cb:	89 04 24             	mov    %eax,(%esp)
 8ad51ce:	e8 e7 19 00 00       	call   8ad6bba <_ZN10CharStringD1Ev>
 8ad51d3:	89 f0                	mov    %esi,%eax
 8ad51d5:	89 da                	mov    %ebx,%edx
 8ad51d7:	e9 94 00 00 00       	jmp    8ad5270 <_ZN14StringResource14loadFromBinaryEPKhiP10CharString+0x46c>
 8ad51dc:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8ad51df:	89 04 24             	mov    %eax,(%esp)
 8ad51e2:	e8 d3 19 00 00       	call   8ad6bba <_ZN10CharStringD1Ev>
 8ad51e7:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8ad51ea:	89 04 24             	mov    %eax,(%esp)
 8ad51ed:	e8 3e 03 00 00       	call   8ad5530 <_ZNK10CharString6lengthEv>
 8ad51f2:	83 c0 01             	add    $0x1,%eax
 8ad51f5:	89 04 24             	mov    %eax,(%esp)
 8ad51f8:	e8 c3 db c4 ff       	call   8722dc0 <_Znaj>
 8ad51fd:	89 45 cc             	mov    %eax,-0x34(%ebp)
 8ad5200:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8ad5203:	89 04 24             	mov    %eax,(%esp)
 8ad5206:	e8 25 03 00 00       	call   8ad5530 <_ZNK10CharString6lengthEv>
 8ad520b:	83 c0 01             	add    $0x1,%eax
 8ad520e:	89 c3                	mov    %eax,%ebx
 8ad5210:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8ad5213:	89 04 24             	mov    %eax,(%esp)
 8ad5216:	e8 e1 ad 5a ff       	call   807fffc <_ZNK10CharString5c_strEv>
 8ad521b:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8ad521f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad5223:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8ad5226:	89 04 24             	mov    %eax,(%esp)
 8ad5229:	e8 72 86 5a ff       	call   807d8a0 <memcpy@plt>
 8ad522e:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8ad5231:	89 04 24             	mov    %eax,(%esp)
 8ad5234:	e8 f7 02 00 00       	call   8ad5530 <_ZNK10CharString6lengthEv>
 8ad5239:	8b 55 14             	mov    0x14(%ebp),%edx
 8ad523c:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8ad5240:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ad5244:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8ad5247:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad524b:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad524e:	89 04 24             	mov    %eax,(%esp)
 8ad5251:	e8 6c f8 ff ff       	call   8ad4ac2 <_ZN14StringResource14loadFromStringEPciP10CharString>
 8ad5256:	88 45 d3             	mov    %al,-0x2d(%ebp)
 8ad5259:	83 7d cc 00          	cmpl   $0x0,-0x34(%ebp)
 8ad525d:	74 0b                	je     8ad526a <_ZN14StringResource14loadFromBinaryEPKhiP10CharString+0x466>
 8ad525f:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8ad5262:	89 04 24             	mov    %eax,(%esp)
 8ad5265:	e8 46 f9 c4 ff       	call   8724bb0 <_ZdaPv>
 8ad526a:	0f b6 5d d3          	movzbl -0x2d(%ebp),%ebx
 8ad526e:	eb 1b                	jmp    8ad528b <_ZN14StringResource14loadFromBinaryEPKhiP10CharString+0x487>
 8ad5270:	89 d3                	mov    %edx,%ebx
 8ad5272:	89 c6                	mov    %eax,%esi
 8ad5274:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8ad5277:	89 04 24             	mov    %eax,(%esp)
 8ad527a:	e8 3b 19 00 00       	call   8ad6bba <_ZN10CharStringD1Ev>
 8ad527f:	89 f0                	mov    %esi,%eax
 8ad5281:	89 da                	mov    %ebx,%edx
 8ad5283:	89 04 24             	mov    %eax,(%esp)
 8ad5286:	e8 c5 e4 00 00       	call   8ae3750 <_Unwind_Resume>
 8ad528b:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8ad528e:	89 04 24             	mov    %eax,(%esp)
 8ad5291:	e8 24 19 00 00       	call   8ad6bba <_ZN10CharStringD1Ev>
 8ad5296:	89 d8                	mov    %ebx,%eax
 8ad5298:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8ad529b:	83 c4 00             	add    $0x0,%esp
 8ad529e:	5b                   	pop    %ebx
 8ad529f:	5e                   	pop    %esi
 8ad52a0:	5d                   	pop    %ebp
 8ad52a1:	c3                   	ret

```

```c
// StringResource::loadFromBinary @ 0x8ad4e04

/* StringResource::loadFromBinary(unsigned char const*, int, CharString*) */

uint __thiscall
StringResource::loadFromBinary(StringResource *this,uchar *param_1,int param_2,CharString *param_3)

{
  int32 iVar1;
  char *__src;
  uint unaff_EBX;
  bool bVar2;
  CharString *pCVar3;
  WideString local_58;
  WideString local_54;
  WideString local_50;
  CharString local_4c;
  CharString local_48;
  CharString local_44;
  CharString local_40;
  CharString local_3c;
  CharString *local_38;
  byte local_31;
  CharString *local_30;
  uint local_2c;
  uint local_28;
  char *local_24;
  char local_1d;
  char *local_1c;
  uint local_18;
  uint local_14;
  undefined1 local_d;
  
  CharString::CharString(&local_4c);
  if ((((param_2 < 5) || (*param_1 != 'S')) || (param_1[1] != 'C')) ||
     ((param_1[2] != '0' || (param_1[3] != '1')))) {
    if (((3 < param_2) && ((*param_1 == 0xef && (param_1[1] == 0xbb)))) && (param_1[2] == 0xbf)) {
      WideString::WideString(&local_54);
      pCVar3 = (CharString *)(param_2 + -3);
                    /* try { // try from 08ad5036 to 08ad5066 has its CatchHandler @ 08ad50a5 */
      bVar2 = convertFromUtf8((char *)(param_1 + 3),(int32)pCVar3,&local_54);
      local_d = bVar2;
      if (bVar2) {
        convertToCharString(&local_44,&local_54);
        pCVar3 = &local_44;
                    /* try { // try from 08ad5077 to 08ad507b has its CatchHandler @ 08ad507e */
        CharString::operator=(&local_4c,pCVar3);
                    /* try { // try from 08ad5099 to 08ad509d has its CatchHandler @ 08ad50a5 */
        CharString::~CharString(&local_44,(int)pCVar3);
      }
      else {
        unaff_EBX = 0;
      }
                    /* try { // try from 08ad50c3 to 08ad5126 has its CatchHandler @ 08ad5270 */
      WideString::~WideString(&local_54,(int)pCVar3);
      goto joined_r0x08ad50ca;
    }
    if (((param_2 < 3) || (*param_1 != 0xff)) || (param_1[1] != 0xfe)) {
      CharString::CharString(&local_3c,(char *)param_1,param_2);
      pCVar3 = &local_3c;
                    /* try { // try from 08ad51bd to 08ad51c1 has its CatchHandler @ 08ad51c4 */
      CharString::operator=(&local_4c,pCVar3);
                    /* try { // try from 08ad51e2 to 08ad5255 has its CatchHandler @ 08ad5270 */
      CharString::~CharString(&local_3c,(int)pCVar3);
    }
    else {
      WideString::WideString(&local_58,(wchar *)(param_1 + 2),(param_2 + -2) / 2);
                    /* try { // try from 08ad5134 to 08ad5138 has its CatchHandler @ 08ad5172 */
      convertToCharString(&local_40,&local_58);
      pCVar3 = &local_40;
                    /* try { // try from 08ad5149 to 08ad514d has its CatchHandler @ 08ad5150 */
      CharString::operator=(&local_4c,pCVar3);
                    /* try { // try from 08ad516b to 08ad516f has its CatchHandler @ 08ad5172 */
      CharString::~CharString(&local_40,(int)pCVar3);
                    /* try { // try from 08ad5190 to 08ad51af has its CatchHandler @ 08ad5270 */
      WideString::~WideString(&local_58,(int)pCVar3);
    }
  }
  else {
    local_30 = *(CharString **)(param_1 + 4);
    local_2c = ((int)(((uint)(param_2 + 3 >> 0x1f) >> 0x1e) + param_2 + 3) >> 2) << 2;
    local_28 = 0x5819af17;
                    /* try { // try from 08ad4e94 to 08ad4e98 has its CatchHandler @ 08ad5270 */
    local_24 = operator_new__(local_2c);
    memcpy(local_24,param_1 + 8,param_2);
    local_1c = local_24;
    local_18 = local_28;
    for (local_14 = 0; local_14 < local_2c >> 2; local_14 = local_14 + 1) {
      *(uint *)(local_24 + local_14 * 4) = *(uint *)(local_24 + local_14 * 4) ^ local_18;
      local_18 = local_18 ^ *(uint *)(local_24 + local_14 * 4);
    }
    WideString::WideString(&local_50);
    pCVar3 = local_30;
                    /* try { // try from 08ad4f27 to 08ad4f68 has its CatchHandler @ 08ad4fa7 */
    local_1d = convertFromUtf8(local_24,(int32)local_30,&local_50);
    if (local_24 != (char *)0x0) {
      operator_delete__(local_24);
    }
    bVar2 = local_1d == '\x01';
    if (bVar2) {
      convertToCharString(&local_48,&local_50);
      pCVar3 = &local_48;
                    /* try { // try from 08ad4f79 to 08ad4f7d has its CatchHandler @ 08ad4f80 */
      CharString::operator=(&local_4c,pCVar3);
                    /* try { // try from 08ad4f9b to 08ad4f9f has its CatchHandler @ 08ad4fa7 */
      CharString::~CharString(&local_48,(int)pCVar3);
    }
    else {
      unaff_EBX = 0;
    }
                    /* try { // try from 08ad4fc5 to 08ad4fc9 has its CatchHandler @ 08ad5270 */
    WideString::~WideString(&local_50,(int)pCVar3);
joined_r0x08ad50ca:
    if (!bVar2) goto LAB_08ad528b;
  }
  iVar1 = CharString::length(&local_4c);
  local_38 = operator_new__(iVar1 + 1);
  iVar1 = CharString::length(&local_4c);
  __src = CharString::c_str(&local_4c);
  memcpy(local_38,__src,iVar1 + 1);
  iVar1 = CharString::length(&local_4c);
  pCVar3 = local_38;
  local_31 = loadFromString(this,(char *)local_38,iVar1,param_3);
  if (local_38 != (CharString *)0x0) {
    operator_delete__(local_38);
  }
  unaff_EBX = (uint)local_31;
LAB_08ad528b:
  CharString::~CharString(&local_4c,(int)pCVar3);
  return unaff_EBX;
}

```

---

## loadFromFile

```asm
// === 08ad4ce4 StringResource::loadFromFile  [0x08ad4ce4-0x8ad4df9] ===
 8ad4ce4:	55                   	push   %ebp
 8ad4ce5:	89 e5                	mov    %esp,%ebp
 8ad4ce7:	83 ec 28             	sub    $0x28,%esp
 8ad4cea:	c7 44 24 04 38 2c e3 	movl   $0x8e32c38,0x4(%esp)
 8ad4cf1:	08 
 8ad4cf2:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad4cf5:	89 04 24             	mov    %eax,(%esp)
 8ad4cf8:	e8 73 9a 5a ff       	call   807e770 <fopen@plt>
 8ad4cfd:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8ad4d00:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 8ad4d04:	75 23                	jne    8ad4d29 <_ZN14StringResource12loadFromFileEPKcP10CharString+0x45>
 8ad4d06:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 8ad4d0a:	74 1d                	je     8ad4d29 <_ZN14StringResource12loadFromFileEPKcP10CharString+0x45>
 8ad4d0c:	c7 44 24 04 3b 2c e3 	movl   $0x8e32c3b,0x4(%esp)
 8ad4d13:	08 
 8ad4d14:	8b 45 10             	mov    0x10(%ebp),%eax
 8ad4d17:	89 04 24             	mov    %eax,(%esp)
 8ad4d1a:	e8 a1 23 00 00       	call   8ad70c0 <_ZN10CharStringaSEPKc>
 8ad4d1f:	b8 00 00 00 00       	mov    $0x0,%eax
 8ad4d24:	e9 ce 00 00 00       	jmp    8ad4df7 <_ZN14StringResource12loadFromFileEPKcP10CharString+0x113>
 8ad4d29:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 8ad4d30:	00 
 8ad4d31:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8ad4d38:	00 
 8ad4d39:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8ad4d3c:	89 04 24             	mov    %eax,(%esp)
 8ad4d3f:	e8 6c 93 5a ff       	call   807e0b0 <fseek@plt>
 8ad4d44:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8ad4d47:	89 04 24             	mov    %eax,(%esp)
 8ad4d4a:	e8 81 8c 5a ff       	call   807d9d0 <ftell@plt>
 8ad4d4f:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8ad4d52:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8ad4d59:	00 
 8ad4d5a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8ad4d61:	00 
 8ad4d62:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8ad4d65:	89 04 24             	mov    %eax,(%esp)
 8ad4d68:	e8 43 93 5a ff       	call   807e0b0 <fseek@plt>
 8ad4d6d:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 8ad4d71:	79 12                	jns    8ad4d85 <_ZN14StringResource12loadFromFileEPKcP10CharString+0xa1>
 8ad4d73:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8ad4d76:	89 04 24             	mov    %eax,(%esp)
 8ad4d79:	e8 22 91 5a ff       	call   807dea0 <fclose@plt>
 8ad4d7e:	b8 00 00 00 00       	mov    $0x0,%eax
 8ad4d83:	eb 72                	jmp    8ad4df7 <_ZN14StringResource12loadFromFileEPKcP10CharString+0x113>
 8ad4d85:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8ad4d88:	89 04 24             	mov    %eax,(%esp)
 8ad4d8b:	e8 30 e0 c4 ff       	call   8722dc0 <_Znaj>
 8ad4d90:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8ad4d93:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8ad4d96:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8ad4d99:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8ad4d9d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ad4da1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8ad4da8:	00 
 8ad4da9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8ad4dac:	89 04 24             	mov    %eax,(%esp)
 8ad4daf:	e8 9c 8f 5a ff       	call   807dd50 <fread@plt>
 8ad4db4:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8ad4db7:	89 04 24             	mov    %eax,(%esp)
 8ad4dba:	e8 e1 90 5a ff       	call   807dea0 <fclose@plt>
 8ad4dbf:	8b 45 10             	mov    0x10(%ebp),%eax
 8ad4dc2:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8ad4dc6:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8ad4dc9:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ad4dcd:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8ad4dd0:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad4dd4:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad4dd7:	89 04 24             	mov    %eax,(%esp)
 8ad4dda:	e8 25 00 00 00       	call   8ad4e04 <_ZN14StringResource14loadFromBinaryEPKhiP10CharString>
 8ad4ddf:	88 45 f7             	mov    %al,-0x9(%ebp)
 8ad4de2:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8ad4de6:	74 0b                	je     8ad4df3 <_ZN14StringResource12loadFromFileEPKcP10CharString+0x10f>
 8ad4de8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8ad4deb:	89 04 24             	mov    %eax,(%esp)
 8ad4dee:	e8 bd fd c4 ff       	call   8724bb0 <_ZdaPv>
 8ad4df3:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 8ad4df7:	c9                   	leave
 8ad4df8:	c3                   	ret
 8ad4df9:	90                   	nop

```

```c
// StringResource::loadFromFile @ 0x8ad4ce4

/* StringResource::loadFromFile(char const*, CharString*) */

undefined1 __thiscall
StringResource::loadFromFile(StringResource *this,char *param_1,CharString *param_2)

{
  undefined1 uVar1;
  FILE *__stream;
  uint __n;
  uchar *__ptr;
  
  __stream = fopen(param_1,"rb");
  if ((__stream == (FILE *)0x0) && (param_2 != (CharString *)0x0)) {
    CharString::operator=((CharString *)param_2,"Cannot open file");
    uVar1 = 0;
  }
  else {
    fseek(__stream,0,2);
    __n = ftell(__stream);
    fseek(__stream,0,0);
    if ((int)__n < 0) {
      fclose(__stream);
      uVar1 = 0;
    }
    else {
      __ptr = operator_new__(__n);
      fread(__ptr,1,__n,__stream);
      fclose(__stream);
      uVar1 = loadFromBinary(this,__ptr,__n,param_2);
      if (__ptr != (uchar *)0x0) {
        operator_delete__(__ptr);
      }
    }
  }
  return uVar1;
}

```

---

## loadFromResource

```asm
// === 08ad4dfa StringResource::loadFromResource  [0x08ad4dfa-0x8ad4e03] ===
 8ad4dfa:	55                   	push   %ebp
 8ad4dfb:	89 e5                	mov    %esp,%ebp
 8ad4dfd:	b8 00 00 00 00       	mov    $0x0,%eax
 8ad4e02:	5d                   	pop    %ebp
 8ad4e03:	c3                   	ret

```

```c
// StringResource::loadFromResource @ 0x8ad4dfa

/* StringResource::loadFromResource(void*, int, CharString*) */

undefined4 StringResource::loadFromResource(void *param_1,int param_2,CharString *param_3)

{
  return 0;
}

```

---

## loadFromString

```asm
// === 08ad4ac2 StringResource::loadFromString  [0x08ad4ac2-0x8ad4ce3] ===
 8ad4ac2:	55                   	push   %ebp
 8ad4ac3:	89 e5                	mov    %esp,%ebp
 8ad4ac5:	56                   	push   %esi
 8ad4ac6:	53                   	push   %ebx
 8ad4ac7:	83 ec 40             	sub    $0x40,%esp
 8ad4aca:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad4acd:	89 04 24             	mov    %eax,(%esp)
 8ad4ad0:	e8 8f 0d 00 00       	call   8ad5864 <_ZNSt3mapIi10CharStringSt4lessIiESaISt4pairIKiS0_EEE5clearEv>
 8ad4ad5:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8ad4adc:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad4adf:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8ad4ae2:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 8ad4ae9:	e9 d5 01 00 00       	jmp    8ad4cc3 <_ZN14StringResource14loadFromStringEPciP10CharString+0x201>
 8ad4aee:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8ad4af1:	03 45 0c             	add    0xc(%ebp),%eax
 8ad4af4:	0f b6 00             	movzbl (%eax),%eax
 8ad4af7:	88 45 ef             	mov    %al,-0x11(%ebp)
 8ad4afa:	80 7d ef 0a          	cmpb   $0xa,-0x11(%ebp)
 8ad4afe:	74 12                	je     8ad4b12 <_ZN14StringResource14loadFromStringEPciP10CharString+0x50>
 8ad4b00:	80 7d ef 0d          	cmpb   $0xd,-0x11(%ebp)
 8ad4b04:	74 0c                	je     8ad4b12 <_ZN14StringResource14loadFromStringEPciP10CharString+0x50>
 8ad4b06:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8ad4b09:	3b 45 10             	cmp    0x10(%ebp),%eax
 8ad4b0c:	0f 85 ad 01 00 00    	jne    8ad4cbf <_ZN14StringResource14loadFromStringEPciP10CharString+0x1fd>
 8ad4b12:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 8ad4b16:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8ad4b19:	03 45 0c             	add    0xc(%ebp),%eax
 8ad4b1c:	c6 00 00             	movb   $0x0,(%eax)
 8ad4b1f:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 8ad4b26:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8ad4b29:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ad4b2d:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8ad4b30:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad4b34:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8ad4b37:	89 04 24             	mov    %eax,(%esp)
 8ad4b3a:	e8 d0 fd ff ff       	call   8ad490f <_ZL15parseStringLinePcPiPS_>
 8ad4b3f:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8ad4b42:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8ad4b45:	85 c0                	test   %eax,%eax
 8ad4b47:	74 6e                	je     8ad4bb7 <_ZN14StringResource14loadFromStringEPciP10CharString+0xf5>
 8ad4b49:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 8ad4b4d:	74 68                	je     8ad4bb7 <_ZN14StringResource14loadFromStringEPciP10CharString+0xf5>
 8ad4b4f:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8ad4b52:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8ad4b55:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8ad4b59:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8ad4b5c:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ad4b60:	c7 44 24 04 f8 2b e3 	movl   $0x8e32bf8,0x4(%esp)
 8ad4b67:	08 
 8ad4b68:	89 04 24             	mov    %eax,(%esp)
 8ad4b6b:	e8 8a 3f 00 00       	call   8ad8afa <_ZN10CharString6formatEPKcz>
 8ad4b70:	83 ec 04             	sub    $0x4,%esp
 8ad4b73:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8ad4b76:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad4b7a:	8b 45 14             	mov    0x14(%ebp),%eax
 8ad4b7d:	89 04 24             	mov    %eax,(%esp)
 8ad4b80:	e8 59 25 00 00       	call   8ad70de <_ZN10CharStringaSERKS_>
 8ad4b85:	eb 1b                	jmp    8ad4ba2 <_ZN14StringResource14loadFromStringEPciP10CharString+0xe0>
 8ad4b87:	89 d3                	mov    %edx,%ebx
 8ad4b89:	89 c6                	mov    %eax,%esi
 8ad4b8b:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8ad4b8e:	89 04 24             	mov    %eax,(%esp)
 8ad4b91:	e8 24 20 00 00       	call   8ad6bba <_ZN10CharStringD1Ev>
 8ad4b96:	89 f0                	mov    %esi,%eax
 8ad4b98:	89 da                	mov    %ebx,%edx
 8ad4b9a:	89 04 24             	mov    %eax,(%esp)
 8ad4b9d:	e8 ae eb 00 00       	call   8ae3750 <_Unwind_Resume>
 8ad4ba2:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8ad4ba5:	89 04 24             	mov    %eax,(%esp)
 8ad4ba8:	e8 0d 20 00 00       	call   8ad6bba <_ZN10CharStringD1Ev>
 8ad4bad:	b8 00 00 00 00       	mov    $0x0,%eax
 8ad4bb2:	e9 22 01 00 00       	jmp    8ad4cd9 <_ZN14StringResource14loadFromStringEPciP10CharString+0x217>
 8ad4bb7:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8ad4bba:	85 c0                	test   %eax,%eax
 8ad4bbc:	0f 84 d7 00 00 00    	je     8ad4c99 <_ZN14StringResource14loadFromStringEPciP10CharString+0x1d7>
 8ad4bc2:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8ad4bc5:	89 04 24             	mov    %eax,(%esp)
 8ad4bc8:	e8 a8 9f 00 00       	call   8adeb75 <_Z9toTStringPKc>
 8ad4bcd:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad4bd1:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8ad4bd4:	89 04 24             	mov    %eax,(%esp)
 8ad4bd7:	e8 12 1e 00 00       	call   8ad69ee <_ZN10CharStringC1EPKc>
 8ad4bdc:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8ad4bdf:	8d 55 d8             	lea    -0x28(%ebp),%edx
 8ad4be2:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ad4be6:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad4bea:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad4bed:	89 04 24             	mov    %eax,(%esp)
 8ad4bf0:	e8 db fb ff ff       	call   8ad47d0 <_ZN14StringResource3addEiRK10CharString>
 8ad4bf5:	88 45 f7             	mov    %al,-0x9(%ebp)
 8ad4bf8:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8ad4bfb:	89 04 24             	mov    %eax,(%esp)
 8ad4bfe:	e8 b7 1f 00 00       	call   8ad6bba <_ZN10CharStringD1Ev>
 8ad4c03:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 8ad4c07:	83 f0 01             	xor    $0x1,%eax
 8ad4c0a:	84 c0                	test   %al,%al
 8ad4c0c:	75 20                	jne    8ad4c2e <_ZN14StringResource14loadFromStringEPciP10CharString+0x16c>
 8ad4c0e:	e9 86 00 00 00       	jmp    8ad4c99 <_ZN14StringResource14loadFromStringEPciP10CharString+0x1d7>
 8ad4c13:	89 d3                	mov    %edx,%ebx
 8ad4c15:	89 c6                	mov    %eax,%esi
 8ad4c17:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8ad4c1a:	89 04 24             	mov    %eax,(%esp)
 8ad4c1d:	e8 98 1f 00 00       	call   8ad6bba <_ZN10CharStringD1Ev>
 8ad4c22:	89 f0                	mov    %esi,%eax
 8ad4c24:	89 da                	mov    %ebx,%edx
 8ad4c26:	89 04 24             	mov    %eax,(%esp)
 8ad4c29:	e8 22 eb 00 00       	call   8ae3750 <_Unwind_Resume>
 8ad4c2e:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 8ad4c32:	74 5e                	je     8ad4c92 <_ZN14StringResource14loadFromStringEPciP10CharString+0x1d0>
 8ad4c34:	8b 55 d0             	mov    -0x30(%ebp),%edx
 8ad4c37:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8ad4c3a:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8ad4c3e:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8ad4c41:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ad4c45:	c7 44 24 04 18 2c e3 	movl   $0x8e32c18,0x4(%esp)
 8ad4c4c:	08 
 8ad4c4d:	89 04 24             	mov    %eax,(%esp)
 8ad4c50:	e8 a5 3e 00 00       	call   8ad8afa <_ZN10CharString6formatEPKcz>
 8ad4c55:	83 ec 04             	sub    $0x4,%esp
 8ad4c58:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8ad4c5b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad4c5f:	8b 45 14             	mov    0x14(%ebp),%eax
 8ad4c62:	89 04 24             	mov    %eax,(%esp)
 8ad4c65:	e8 74 24 00 00       	call   8ad70de <_ZN10CharStringaSERKS_>
 8ad4c6a:	eb 1b                	jmp    8ad4c87 <_ZN14StringResource14loadFromStringEPciP10CharString+0x1c5>
 8ad4c6c:	89 d3                	mov    %edx,%ebx
 8ad4c6e:	89 c6                	mov    %eax,%esi
 8ad4c70:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8ad4c73:	89 04 24             	mov    %eax,(%esp)
 8ad4c76:	e8 3f 1f 00 00       	call   8ad6bba <_ZN10CharStringD1Ev>
 8ad4c7b:	89 f0                	mov    %esi,%eax
 8ad4c7d:	89 da                	mov    %ebx,%edx
 8ad4c7f:	89 04 24             	mov    %eax,(%esp)
 8ad4c82:	e8 c9 ea 00 00       	call   8ae3750 <_Unwind_Resume>
 8ad4c87:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8ad4c8a:	89 04 24             	mov    %eax,(%esp)
 8ad4c8d:	e8 28 1f 00 00       	call   8ad6bba <_ZN10CharStringD1Ev>
 8ad4c92:	b8 00 00 00 00       	mov    $0x0,%eax
 8ad4c97:	eb 40                	jmp    8ad4cd9 <_ZN14StringResource14loadFromStringEPciP10CharString+0x217>
 8ad4c99:	80 7d ef 0d          	cmpb   $0xd,-0x11(%ebp)
 8ad4c9d:	75 14                	jne    8ad4cb3 <_ZN14StringResource14loadFromStringEPciP10CharString+0x1f1>
 8ad4c9f:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8ad4ca2:	83 c0 01             	add    $0x1,%eax
 8ad4ca5:	03 45 0c             	add    0xc(%ebp),%eax
 8ad4ca8:	0f b6 00             	movzbl (%eax),%eax
 8ad4cab:	3c 0a                	cmp    $0xa,%al
 8ad4cad:	75 04                	jne    8ad4cb3 <_ZN14StringResource14loadFromStringEPciP10CharString+0x1f1>
 8ad4caf:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 8ad4cb3:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8ad4cb6:	83 c0 01             	add    $0x1,%eax
 8ad4cb9:	03 45 0c             	add    0xc(%ebp),%eax
 8ad4cbc:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8ad4cbf:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 8ad4cc3:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8ad4cc6:	3b 45 10             	cmp    0x10(%ebp),%eax
 8ad4cc9:	0f 9e c0             	setle  %al
 8ad4ccc:	84 c0                	test   %al,%al
 8ad4cce:	0f 85 1a fe ff ff    	jne    8ad4aee <_ZN14StringResource14loadFromStringEPciP10CharString+0x2c>
 8ad4cd4:	b8 01 00 00 00       	mov    $0x1,%eax
 8ad4cd9:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8ad4cdc:	83 c4 00             	add    $0x0,%esp
 8ad4cdf:	5b                   	pop    %ebx
 8ad4ce0:	5e                   	pop    %esi
 8ad4ce1:	5d                   	pop    %ebp
 8ad4ce2:	c3                   	ret
 8ad4ce3:	90                   	nop

```

```c
// StringResource::loadFromString @ 0x8ad4ac2

/* StringResource::loadFromString(char*, int, CharString*) */

undefined4 __thiscall
StringResource::loadFromString(StringResource *this,char *param_1,int param_2,CharString *param_3)

{
  TCHAR *src;
  int __in_chrg;
  CharString *pCVar1;
  char *local_38;
  int local_34;
  CharString local_30;
  CharString local_2c;
  CharString local_28;
  int local_24;
  char *local_20;
  int local_1c;
  char local_15;
  int local_14;
  char local_d;
  
  std::map<int,CharString,std::less<int>,std::allocator<std::pair<int_const,CharString>>>::clear
            ((map<int,CharString,std::less<int>,std::allocator<std::pair<int_const,CharString>>> *)
             this);
  local_24 = 0;
  local_20 = param_1;
  local_1c = 0;
  do {
    if (param_2 < local_1c) {
      return 1;
    }
    local_15 = param_1[local_1c];
    if (((local_15 == '\n') || (local_15 == '\r')) || (local_1c == param_2)) {
      local_24 = local_24 + 1;
      param_1[local_1c] = '\0';
      local_38 = (char *)0x0;
      local_14 = parseStringLine(local_20,&local_34,&local_38);
      if ((local_14 != 0) && (param_3 != (CharString *)0x0)) {
        CharString::format(&local_30,"Parse error : line:%d reason:%d",local_24,local_14);
        pCVar1 = &local_30;
                    /* try { // try from 08ad4b80 to 08ad4b84 has its CatchHandler @ 08ad4b87 */
        CharString::operator=((CharString *)param_3,pCVar1);
        CharString::~CharString(&local_30,(int)pCVar1);
        return 0;
      }
      if (local_38 != (char *)0x0) {
        src = toTString(local_38);
        CharString::CharString(&local_2c,src);
        __in_chrg = local_34;
                    /* try { // try from 08ad4bf0 to 08ad4bf4 has its CatchHandler @ 08ad4c13 */
        local_d = add(this,local_34,(CharString *)&local_2c);
        CharString::~CharString(&local_2c,__in_chrg);
        if (local_d != '\x01') {
          if (param_3 != (CharString *)0x0) {
            CharString::format(&local_28,"Duplicated key : line:%d key:%d",local_24,local_34);
            pCVar1 = &local_28;
                    /* try { // try from 08ad4c65 to 08ad4c69 has its CatchHandler @ 08ad4c6c */
            CharString::operator=((CharString *)param_3,pCVar1);
            CharString::~CharString(&local_28,(int)pCVar1);
          }
          return 0;
        }
      }
      if ((local_15 == '\r') && (param_1[local_1c + 1] == '\n')) {
        local_1c = local_1c + 1;
      }
      local_20 = param_1 + local_1c + 1;
    }
    local_1c = local_1c + 1;
  } while( true );
}

```

---

## set

```asm
// === 08ad48e6 StringResource::set  [0x08ad48e6-0x8ad490e] ===
 8ad48e6:	55                   	push   %ebp
 8ad48e7:	89 e5                	mov    %esp,%ebp
 8ad48e9:	83 ec 18             	sub    $0x18,%esp
 8ad48ec:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad48ef:	8d 55 0c             	lea    0xc(%ebp),%edx
 8ad48f2:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad48f6:	89 04 24             	mov    %eax,(%esp)
 8ad48f9:	e8 1a 0e 00 00       	call   8ad5718 <_ZNSt3mapIi10CharStringSt4lessIiESaISt4pairIKiS0_EEEixERS4_>
 8ad48fe:	8b 55 10             	mov    0x10(%ebp),%edx
 8ad4901:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad4905:	89 04 24             	mov    %eax,(%esp)
 8ad4908:	e8 d1 27 00 00       	call   8ad70de <_ZN10CharStringaSERKS_>
 8ad490d:	c9                   	leave
 8ad490e:	c3                   	ret

```

```c
// StringResource::set @ 0x8ad48e6

/* StringResource::set(int, CharString const&) */

void __thiscall StringResource::set(StringResource *this,int param_1,CharString *param_2)

{
  CharString *this_00;
  
  this_00 = (CharString *)
            std::map<int,CharString,std::less<int>,std::allocator<std::pair<int_const,CharString>>>
            ::operator[]((map<int,CharString,std::less<int>,std::allocator<std::pair<int_const,CharString>>>
                          *)this,&param_1);
  CharString::operator=(this_00,(CharString *)param_2);
  return;
}

```

---

## ~StringResource

```asm
// === 08ad47bc StringResource::~StringResource  [0x08ad47bc-0x8ad47cf] ===
 8ad47bc:	55                   	push   %ebp
 8ad47bd:	89 e5                	mov    %esp,%ebp
 8ad47bf:	83 ec 18             	sub    $0x18,%esp
 8ad47c2:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad47c5:	89 04 24             	mov    %eax,(%esp)
 8ad47c8:	e8 7f 0d 00 00       	call   8ad554c <_ZNSt3mapIi10CharStringSt4lessIiESaISt4pairIKiS0_EEED1Ev>
 8ad47cd:	c9                   	leave
 8ad47ce:	c3                   	ret
 8ad47cf:	90                   	nop

```

```c
// StringResource::~StringResource @ 0x8ad47bc

/* StringResource::~StringResource() */

void __thiscall StringResource::~StringResource(StringResource *this)

{
  std::map<int,CharString,std::less<int>,std::allocator<std::pair<int_const,CharString>>>::~map
            ((map<int,CharString,std::less<int>,std::allocator<std::pair<int_const,CharString>>> *)
             this);
  return;
}

```

