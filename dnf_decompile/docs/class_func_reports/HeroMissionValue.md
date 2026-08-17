# HeroMissionValue

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## clear

```asm
// === 08164b80 HeroMissionValue::clear  [0x08164b80-0x8164bb1] ===
 8164b80:	55                   	push   %ebp
 8164b81:	89 e5                	mov    %esp,%ebp
 8164b83:	8b 45 08             	mov    0x8(%ebp),%eax
 8164b86:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8164b8c:	8b 45 08             	mov    0x8(%ebp),%eax
 8164b8f:	66 c7 40 04 00 00    	movw   $0x0,0x4(%eax)
 8164b95:	8b 45 08             	mov    0x8(%ebp),%eax
 8164b98:	66 c7 40 06 00 00    	movw   $0x0,0x6(%eax)
 8164b9e:	8b 45 08             	mov    0x8(%ebp),%eax
 8164ba1:	66 c7 40 08 00 00    	movw   $0x0,0x8(%eax)
 8164ba7:	8b 45 08             	mov    0x8(%ebp),%eax
 8164baa:	66 c7 40 0a 00 00    	movw   $0x0,0xa(%eax)
 8164bb0:	5d                   	pop    %ebp
 8164bb1:	c3                   	ret

```

```c
// HeroMissionValue::clear @ 0x8164b80

/* HeroMissionValue::clear() */

void __thiscall HeroMissionValue::clear(HeroMissionValue *this)

{
  *(undefined4 *)this = 0;
  *(undefined2 *)(this + 4) = 0;
  *(undefined2 *)(this + 6) = 0;
  *(undefined2 *)(this + 8) = 0;
  *(undefined2 *)(this + 10) = 0;
  return;
}

```

---

## getStringToken

```asm
// === 08164bca HeroMissionValue::getStringToken  [0x08164bca-0x8164d67] ===
 8164bca:	55                   	push   %ebp
 8164bcb:	89 e5                	mov    %esp,%ebp
 8164bcd:	56                   	push   %esi
 8164bce:	53                   	push   %ebx
 8164bcf:	81 ec d0 00 00 00    	sub    $0xd0,%esp
 8164bd5:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 8164bdc:	00 
 8164bdd:	c7 04 24 10 00 00 00 	movl   $0x10,(%esp)
 8164be4:	e8 d2 35 00 00       	call   81681bb <_ZStorSt13_Ios_OpenmodeS_>
 8164be9:	89 44 24 04          	mov    %eax,0x4(%esp)
 8164bed:	8d 85 38 ff ff ff    	lea    -0xc8(%ebp),%eax
 8164bf3:	89 04 24             	mov    %eax,(%esp)
 8164bf6:	e8 25 c8 59 00       	call   8701420 <_ZNSt18basic_stringstreamIcSt11char_traitsIcESaIcEEC1ESt13_Ios_Openmode>
 8164bfb:	8b 45 0c             	mov    0xc(%ebp),%eax
 8164bfe:	89 04 24             	mov    %eax,(%esp)
 8164c01:	e8 6a 1a 5a 00       	call   8706670 <_ZNKSs6lengthEv>
 8164c06:	85 c0                	test   %eax,%eax
 8164c08:	0f 95 c0             	setne  %al
 8164c0b:	84 c0                	test   %al,%al
 8164c0d:	74 19                	je     8164c28 <_ZN16HeroMissionValue14getStringTokenERSs+0x5e>
 8164c0f:	c7 44 24 04 2c 00 00 	movl   $0x2c,0x4(%esp)
 8164c16:	00 
 8164c17:	8d 85 38 ff ff ff    	lea    -0xc8(%ebp),%eax
 8164c1d:	83 c0 08             	add    $0x8,%eax
 8164c20:	89 04 24             	mov    %eax,(%esp)
 8164c23:	e8 48 87 59 00       	call   86fd370 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c>
 8164c28:	8b 45 08             	mov    0x8(%ebp),%eax
 8164c2b:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 8164c2f:	0f b7 d8             	movzwl %ax,%ebx
 8164c32:	8b 45 08             	mov    0x8(%ebp),%eax
 8164c35:	8b 00                	mov    (%eax),%eax
 8164c37:	89 44 24 04          	mov    %eax,0x4(%esp)
 8164c3b:	8d 85 38 ff ff ff    	lea    -0xc8(%ebp),%eax
 8164c41:	83 c0 08             	add    $0x8,%eax
 8164c44:	89 04 24             	mov    %eax,(%esp)
 8164c47:	e8 f4 b3 59 00       	call   8700040 <_ZNSolsEi>
 8164c4c:	c7 44 24 04 20 00 00 	movl   $0x20,0x4(%esp)
 8164c53:	00 
 8164c54:	89 04 24             	mov    %eax,(%esp)
 8164c57:	e8 14 87 59 00       	call   86fd370 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c>
 8164c5c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8164c60:	89 04 24             	mov    %eax,(%esp)
 8164c63:	e8 a8 b1 59 00       	call   86ffe10 <_ZNSolsEt>
 8164c68:	c7 44 24 04 20 00 00 	movl   $0x20,0x4(%esp)
 8164c6f:	00 
 8164c70:	89 04 24             	mov    %eax,(%esp)
 8164c73:	e8 f8 86 59 00       	call   86fd370 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c>
 8164c78:	8b 45 08             	mov    0x8(%ebp),%eax
 8164c7b:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 8164c7f:	0f b7 d8             	movzwl %ax,%ebx
 8164c82:	8b 45 08             	mov    0x8(%ebp),%eax
 8164c85:	0f b7 40 0a          	movzwl 0xa(%eax),%eax
 8164c89:	0f b7 f0             	movzwl %ax,%esi
 8164c8c:	8b 45 08             	mov    0x8(%ebp),%eax
 8164c8f:	0f b7 40 06          	movzwl 0x6(%eax),%eax
 8164c93:	0f b7 c0             	movzwl %ax,%eax
 8164c96:	89 44 24 04          	mov    %eax,0x4(%esp)
 8164c9a:	8d 85 38 ff ff ff    	lea    -0xc8(%ebp),%eax
 8164ca0:	83 c0 08             	add    $0x8,%eax
 8164ca3:	89 04 24             	mov    %eax,(%esp)
 8164ca6:	e8 65 b1 59 00       	call   86ffe10 <_ZNSolsEt>
 8164cab:	c7 44 24 04 20 00 00 	movl   $0x20,0x4(%esp)
 8164cb2:	00 
 8164cb3:	89 04 24             	mov    %eax,(%esp)
 8164cb6:	e8 b5 86 59 00       	call   86fd370 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c>
 8164cbb:	89 74 24 04          	mov    %esi,0x4(%esp)
 8164cbf:	89 04 24             	mov    %eax,(%esp)
 8164cc2:	e8 49 b1 59 00       	call   86ffe10 <_ZNSolsEt>
 8164cc7:	c7 44 24 04 20 00 00 	movl   $0x20,0x4(%esp)
 8164cce:	00 
 8164ccf:	89 04 24             	mov    %eax,(%esp)
 8164cd2:	e8 99 86 59 00       	call   86fd370 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c>
 8164cd7:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8164cdb:	89 04 24             	mov    %eax,(%esp)
 8164cde:	e8 2d b1 59 00       	call   86ffe10 <_ZNSolsEt>
 8164ce3:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8164ce6:	8d 95 38 ff ff ff    	lea    -0xc8(%ebp),%edx
 8164cec:	89 54 24 04          	mov    %edx,0x4(%esp)
 8164cf0:	89 04 24             	mov    %eax,(%esp)
 8164cf3:	e8 58 fc 59 00       	call   8704950 <_ZNKSt18basic_stringstreamIcSt11char_traitsIcESaIcEE3strEv>
 8164cf8:	83 ec 04             	sub    $0x4,%esp
 8164cfb:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8164cfe:	89 44 24 04          	mov    %eax,0x4(%esp)
 8164d02:	8b 45 0c             	mov    0xc(%ebp),%eax
 8164d05:	89 04 24             	mov    %eax,(%esp)
 8164d08:	e8 33 34 5a 00       	call   8708140 <_ZNSs6appendERKSs>
 8164d0d:	eb 15                	jmp    8164d24 <_ZN16HeroMissionValue14getStringTokenERSs+0x15a>
 8164d0f:	89 d3                	mov    %edx,%ebx
 8164d11:	89 c6                	mov    %eax,%esi
 8164d13:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8164d16:	89 04 24             	mov    %eax,(%esp)
 8164d19:	e8 c2 2e 5a 00       	call   8707be0 <_ZNSsD1Ev>
 8164d1e:	89 f0                	mov    %esi,%eax
 8164d20:	89 da                	mov    %ebx,%edx
 8164d22:	eb 0d                	jmp    8164d31 <_ZN16HeroMissionValue14getStringTokenERSs+0x167>
 8164d24:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8164d27:	89 04 24             	mov    %eax,(%esp)
 8164d2a:	e8 b1 2e 5a 00       	call   8707be0 <_ZNSsD1Ev>
 8164d2f:	eb 1e                	jmp    8164d4f <_ZN16HeroMissionValue14getStringTokenERSs+0x185>
 8164d31:	89 d3                	mov    %edx,%ebx
 8164d33:	89 c6                	mov    %eax,%esi
 8164d35:	8d 85 38 ff ff ff    	lea    -0xc8(%ebp),%eax
 8164d3b:	89 04 24             	mov    %eax,(%esp)
 8164d3e:	e8 7d f0 59 00       	call   8703dc0 <_ZNSt18basic_stringstreamIcSt11char_traitsIcESaIcEED1Ev>
 8164d43:	89 f0                	mov    %esi,%eax
 8164d45:	89 da                	mov    %ebx,%edx
 8164d47:	89 04 24             	mov    %eax,(%esp)
 8164d4a:	e8 01 ea 97 00       	call   8ae3750 <_Unwind_Resume>
 8164d4f:	8d 85 38 ff ff ff    	lea    -0xc8(%ebp),%eax
 8164d55:	89 04 24             	mov    %eax,(%esp)
 8164d58:	e8 63 f0 59 00       	call   8703dc0 <_ZNSt18basic_stringstreamIcSt11char_traitsIcESaIcEED1Ev>
 8164d5d:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8164d60:	83 c4 00             	add    $0x0,%esp
 8164d63:	5b                   	pop    %ebx
 8164d64:	5e                   	pop    %esi
 8164d65:	5d                   	pop    %ebp
 8164d66:	c3                   	ret
 8164d67:	90                   	nop

```

```c
// HeroMissionValue::getStringToken @ 0x8164bca

/* HeroMissionValue::getStringToken(std::string&) */

void __thiscall HeroMissionValue::getStringToken(HeroMissionValue *this,string *param_1)

{
  ushort uVar1;
  ushort uVar2;
  _Ios_Openmode _Var3;
  int iVar4;
  ostream *poVar5;
  stringstream local_cc [8];
  ostream aoStack_c4 [180];
  string local_10 [4];
  
  _Var3 = std::operator|(_S_out,_S_in);
  std::stringstream::stringstream(local_cc,_Var3);
                    /* try { // try from 08164c01 to 08164cf7 has its CatchHandler @ 08164d31 */
  iVar4 = std::string::length((string *)param_1);
  if (iVar4 != 0) {
    std::operator<<(aoStack_c4,',');
  }
  uVar1 = *(ushort *)(this + 4);
  poVar5 = (ostream *)std::ostream::operator<<(aoStack_c4,*(int *)this);
  poVar5 = std::operator<<(poVar5,' ');
  poVar5 = (ostream *)std::ostream::operator<<(poVar5,uVar1);
  std::operator<<(poVar5,' ');
  uVar1 = *(ushort *)(this + 8);
  uVar2 = *(ushort *)(this + 10);
  poVar5 = (ostream *)std::ostream::operator<<(aoStack_c4,*(ushort *)(this + 6));
  poVar5 = std::operator<<(poVar5,' ');
  poVar5 = (ostream *)std::ostream::operator<<(poVar5,uVar2);
  poVar5 = std::operator<<(poVar5,' ');
  std::ostream::operator<<(poVar5,uVar1);
  std::stringstream::str();
                    /* try { // try from 08164d08 to 08164d0c has its CatchHandler @ 08164d0f */
  std::string::append((string *)param_1,local_10);
                    /* try { // try from 08164d2a to 08164d2e has its CatchHandler @ 08164d31 */
  std::string::~string(local_10);
  std::stringstream::~stringstream(local_cc);
  return;
}

```

---

## reset

```asm
// === 08164bb2 HeroMissionValue::reset  [0x08164bb2-0x8164bc9] ===
 8164bb2:	55                   	push   %ebp
 8164bb3:	89 e5                	mov    %esp,%ebp
 8164bb5:	8b 45 08             	mov    0x8(%ebp),%eax
 8164bb8:	66 c7 40 04 00 00    	movw   $0x0,0x4(%eax)
 8164bbe:	8b 45 08             	mov    0x8(%ebp),%eax
 8164bc1:	66 c7 40 06 00 00    	movw   $0x0,0x6(%eax)
 8164bc7:	5d                   	pop    %ebp
 8164bc8:	c3                   	ret
 8164bc9:	90                   	nop

```

```c
// HeroMissionValue::reset @ 0x8164bb2

/* HeroMissionValue::reset() */

void __thiscall HeroMissionValue::reset(HeroMissionValue *this)

{
  *(undefined2 *)(this + 4) = 0;
  *(undefined2 *)(this + 6) = 0;
  return;
}

```

---

## setStringToken

```asm
// === 08164d68 HeroMissionValue::setStringToken  [0x08164d68-0x8164f11] ===
 8164d68:	55                   	push   %ebp
 8164d69:	89 e5                	mov    %esp,%ebp
 8164d6b:	56                   	push   %esi
 8164d6c:	53                   	push   %ebx
 8164d6d:	83 ec 70             	sub    $0x70,%esp
 8164d70:	8b 45 08             	mov    0x8(%ebp),%eax
 8164d73:	89 04 24             	mov    %eax,(%esp)
 8164d76:	e8 05 fe ff ff       	call   8164b80 <_ZN16HeroMissionValue5clearEv>
 8164d7b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8164d82:	00 
 8164d83:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8164d8a:	00 
 8164d8b:	c7 44 24 04 e3 da b7 	movl   $0x8b7dae3,0x4(%esp)
 8164d92:	08 
 8164d93:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8164d96:	89 04 24             	mov    %eax,(%esp)
 8164d99:	e8 10 b5 f6 ff       	call   80d02ae <_ZN5boost14char_separatorIcSt11char_traitsIcEEC1EPKcS5_NS_18empty_token_policyE>
 8164d9e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8164da1:	89 44 24 08          	mov    %eax,0x8(%esp)
 8164da5:	8b 45 0c             	mov    0xc(%ebp),%eax
 8164da8:	89 44 24 04          	mov    %eax,0x4(%esp)
 8164dac:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8164daf:	89 04 24             	mov    %eax,(%esp)
 8164db2:	e8 c3 b5 f6 ff       	call   80d037a <_ZN5boost9tokenizerINS_14char_separatorIcSt11char_traitsIcEEEN9__gnu_cxx17__normal_iteratorIPKcSsEESsEC1ISsEERKT_RKS4_>
 8164db7:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8164dba:	8d 55 c8             	lea    -0x38(%ebp),%edx
 8164dbd:	89 54 24 04          	mov    %edx,0x4(%esp)
 8164dc1:	89 04 24             	mov    %eax,(%esp)
 8164dc4:	e8 fb b5 f6 ff       	call   80d03c4 <_ZNK5boost9tokenizerINS_14char_separatorIcSt11char_traitsIcEEEN9__gnu_cxx17__normal_iteratorIPKcSsEESsE5beginEv>
 8164dc9:	83 ec 04             	sub    $0x4,%esp
 8164dcc:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8164dcf:	89 04 24             	mov    %eax,(%esp)
 8164dd2:	e8 bb d4 f6 ff       	call   80d2292 <_ZNK5boost15iterator_facadeINS_14token_iteratorINS_14char_separatorIcSt11char_traitsIcEEEN9__gnu_cxx17__normal_iteratorIPKcSsEESsEESsNS_21forward_traversal_tagERKSsiEptEv>
 8164dd7:	89 04 24             	mov    %eax,(%esp)
 8164dda:	e8 11 17 5a 00       	call   87064f0 <_ZNKSs5c_strEv>
 8164ddf:	89 04 24             	mov    %eax,(%esp)
 8164de2:	e8 09 99 f1 ff       	call   807e6f0 <atoi@plt>
 8164de7:	89 c2                	mov    %eax,%edx
 8164de9:	8b 45 08             	mov    0x8(%ebp),%eax
 8164dec:	89 10                	mov    %edx,(%eax)
 8164dee:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8164df1:	89 04 24             	mov    %eax,(%esp)
 8164df4:	e8 e1 b6 f6 ff       	call   80d04da <_ZN5boost15iterator_facadeINS_14token_iteratorINS_14char_separatorIcSt11char_traitsIcEEEN9__gnu_cxx17__normal_iteratorIPKcSsEESsEESsNS_21forward_traversal_tagERKSsiEppEv>
 8164df9:	89 04 24             	mov    %eax,(%esp)
 8164dfc:	e8 91 d4 f6 ff       	call   80d2292 <_ZNK5boost15iterator_facadeINS_14token_iteratorINS_14char_separatorIcSt11char_traitsIcEEEN9__gnu_cxx17__normal_iteratorIPKcSsEESsEESsNS_21forward_traversal_tagERKSsiEptEv>
 8164e01:	89 04 24             	mov    %eax,(%esp)
 8164e04:	e8 e7 16 5a 00       	call   87064f0 <_ZNKSs5c_strEv>
 8164e09:	89 04 24             	mov    %eax,(%esp)
 8164e0c:	e8 df 98 f1 ff       	call   807e6f0 <atoi@plt>
 8164e11:	89 c2                	mov    %eax,%edx
 8164e13:	8b 45 08             	mov    0x8(%ebp),%eax
 8164e16:	66 89 50 04          	mov    %dx,0x4(%eax)
 8164e1a:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8164e1d:	89 04 24             	mov    %eax,(%esp)
 8164e20:	e8 b5 b6 f6 ff       	call   80d04da <_ZN5boost15iterator_facadeINS_14token_iteratorINS_14char_separatorIcSt11char_traitsIcEEEN9__gnu_cxx17__normal_iteratorIPKcSsEESsEESsNS_21forward_traversal_tagERKSsiEppEv>
 8164e25:	89 04 24             	mov    %eax,(%esp)
 8164e28:	e8 65 d4 f6 ff       	call   80d2292 <_ZNK5boost15iterator_facadeINS_14token_iteratorINS_14char_separatorIcSt11char_traitsIcEEEN9__gnu_cxx17__normal_iteratorIPKcSsEESsEESsNS_21forward_traversal_tagERKSsiEptEv>
 8164e2d:	89 04 24             	mov    %eax,(%esp)
 8164e30:	e8 bb 16 5a 00       	call   87064f0 <_ZNKSs5c_strEv>
 8164e35:	89 04 24             	mov    %eax,(%esp)
 8164e38:	e8 b3 98 f1 ff       	call   807e6f0 <atoi@plt>
 8164e3d:	89 c2                	mov    %eax,%edx
 8164e3f:	8b 45 08             	mov    0x8(%ebp),%eax
 8164e42:	66 89 50 06          	mov    %dx,0x6(%eax)
 8164e46:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8164e49:	89 04 24             	mov    %eax,(%esp)
 8164e4c:	e8 89 b6 f6 ff       	call   80d04da <_ZN5boost15iterator_facadeINS_14token_iteratorINS_14char_separatorIcSt11char_traitsIcEEEN9__gnu_cxx17__normal_iteratorIPKcSsEESsEESsNS_21forward_traversal_tagERKSsiEppEv>
 8164e51:	89 04 24             	mov    %eax,(%esp)
 8164e54:	e8 39 d4 f6 ff       	call   80d2292 <_ZNK5boost15iterator_facadeINS_14token_iteratorINS_14char_separatorIcSt11char_traitsIcEEEN9__gnu_cxx17__normal_iteratorIPKcSsEESsEESsNS_21forward_traversal_tagERKSsiEptEv>
 8164e59:	89 04 24             	mov    %eax,(%esp)
 8164e5c:	e8 8f 16 5a 00       	call   87064f0 <_ZNKSs5c_strEv>
 8164e61:	89 04 24             	mov    %eax,(%esp)
 8164e64:	e8 87 98 f1 ff       	call   807e6f0 <atoi@plt>
 8164e69:	89 c2                	mov    %eax,%edx
 8164e6b:	8b 45 08             	mov    0x8(%ebp),%eax
 8164e6e:	66 89 50 0a          	mov    %dx,0xa(%eax)
 8164e72:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8164e75:	89 04 24             	mov    %eax,(%esp)
 8164e78:	e8 5d b6 f6 ff       	call   80d04da <_ZN5boost15iterator_facadeINS_14token_iteratorINS_14char_separatorIcSt11char_traitsIcEEEN9__gnu_cxx17__normal_iteratorIPKcSsEESsEESsNS_21forward_traversal_tagERKSsiEppEv>
 8164e7d:	89 04 24             	mov    %eax,(%esp)
 8164e80:	e8 0d d4 f6 ff       	call   80d2292 <_ZNK5boost15iterator_facadeINS_14token_iteratorINS_14char_separatorIcSt11char_traitsIcEEEN9__gnu_cxx17__normal_iteratorIPKcSsEESsEESsNS_21forward_traversal_tagERKSsiEptEv>
 8164e85:	89 04 24             	mov    %eax,(%esp)
 8164e88:	e8 63 16 5a 00       	call   87064f0 <_ZNKSs5c_strEv>
 8164e8d:	89 04 24             	mov    %eax,(%esp)
 8164e90:	e8 5b 98 f1 ff       	call   807e6f0 <atoi@plt>
 8164e95:	89 c2                	mov    %eax,%edx
 8164e97:	8b 45 08             	mov    0x8(%ebp),%eax
 8164e9a:	66 89 50 08          	mov    %dx,0x8(%eax)
 8164e9e:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8164ea1:	89 04 24             	mov    %eax,(%esp)
 8164ea4:	e8 11 92 f6 ff       	call   80ce0ba <_ZN5boost14token_iteratorINS_14char_separatorIcSt11char_traitsIcEEEN9__gnu_cxx17__normal_iteratorIPKcSsEESsED1Ev>
 8164ea9:	eb 2a                	jmp    8164ed5 <_ZN16HeroMissionValue14setStringTokenESs+0x16d>
 8164eab:	89 d3                	mov    %edx,%ebx
 8164ead:	89 c6                	mov    %eax,%esi
 8164eaf:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8164eb2:	89 04 24             	mov    %eax,(%esp)
 8164eb5:	e8 00 92 f6 ff       	call   80ce0ba <_ZN5boost14token_iteratorINS_14char_separatorIcSt11char_traitsIcEEEN9__gnu_cxx17__normal_iteratorIPKcSsEESsED1Ev>
 8164eba:	89 f0                	mov    %esi,%eax
 8164ebc:	89 da                	mov    %ebx,%edx
 8164ebe:	eb 00                	jmp    8164ec0 <_ZN16HeroMissionValue14setStringTokenESs+0x158>
 8164ec0:	89 d3                	mov    %edx,%ebx
 8164ec2:	89 c6                	mov    %eax,%esi
 8164ec4:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8164ec7:	89 04 24             	mov    %eax,(%esp)
 8164eca:	e8 d5 91 f6 ff       	call   80ce0a4 <_ZN5boost9tokenizerINS_14char_separatorIcSt11char_traitsIcEEEN9__gnu_cxx17__normal_iteratorIPKcSsEESsED1Ev>
 8164ecf:	89 f0                	mov    %esi,%eax
 8164ed1:	89 da                	mov    %ebx,%edx
 8164ed3:	eb 0d                	jmp    8164ee2 <_ZN16HeroMissionValue14setStringTokenESs+0x17a>
 8164ed5:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8164ed8:	89 04 24             	mov    %eax,(%esp)
 8164edb:	e8 c4 91 f6 ff       	call   80ce0a4 <_ZN5boost9tokenizerINS_14char_separatorIcSt11char_traitsIcEEEN9__gnu_cxx17__normal_iteratorIPKcSsEESsED1Ev>
 8164ee0:	eb 1b                	jmp    8164efd <_ZN16HeroMissionValue14setStringTokenESs+0x195>
 8164ee2:	89 d3                	mov    %edx,%ebx
 8164ee4:	89 c6                	mov    %eax,%esi
 8164ee6:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8164ee9:	89 04 24             	mov    %eax,(%esp)
 8164eec:	e8 6d 91 f6 ff       	call   80ce05e <_ZN5boost14char_separatorIcSt11char_traitsIcEED1Ev>
 8164ef1:	89 f0                	mov    %esi,%eax
 8164ef3:	89 da                	mov    %ebx,%edx
 8164ef5:	89 04 24             	mov    %eax,(%esp)
 8164ef8:	e8 53 e8 97 00       	call   8ae3750 <_Unwind_Resume>
 8164efd:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8164f00:	89 04 24             	mov    %eax,(%esp)
 8164f03:	e8 56 91 f6 ff       	call   80ce05e <_ZN5boost14char_separatorIcSt11char_traitsIcEED1Ev>
 8164f08:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8164f0b:	83 c4 00             	add    $0x0,%esp
 8164f0e:	5b                   	pop    %ebx
 8164f0f:	5e                   	pop    %esi
 8164f10:	5d                   	pop    %ebp
 8164f11:	c3                   	ret

```

```c
// HeroMissionValue::setStringToken @ 0x8164d68

/* HeroMissionValue::setStringToken(std::string) */

void __thiscall HeroMissionValue::setStringToken(HeroMissionValue *this,string param_1)

{
  string *psVar1;
  char *pcVar2;
  int iVar3;
  iterator_facade<boost::token_iterator<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>,std::string,boost::forward_traversal_tag,std::string_const&,int>
  *piVar4;
  iterator_facade<boost::token_iterator<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>,std::string,boost::forward_traversal_tag,std::string_const&,int>
  local_60 [36];
  tokenizer<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>
  local_3c [28];
  char_separator<char,std::char_traits<char>> local_20 [20];
  
  clear(this);
  boost::char_separator<char,std::char_traits<char>>::char_separator(local_20,&DAT_08b7dae3,0,0);
                    /* try { // try from 08164db2 to 08164db6 has its CatchHandler @ 08164ee2 */
  boost::
  tokenizer<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>
  ::tokenizer<std::string>(local_3c,(string *)param_1._M_dataplus._M_p,(char_separator *)local_20);
                    /* try { // try from 08164dc4 to 08164dc8 has its CatchHandler @ 08164ec0 */
  boost::
  tokenizer<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>
  ::begin();
                    /* try { // try from 08164dd2 to 08164e8c has its CatchHandler @ 08164eab */
  psVar1 = (string *)
           boost::
           iterator_facade<boost::token_iterator<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>,std::string,boost::forward_traversal_tag,std::string_const&,int>
           ::operator->(local_60);
  pcVar2 = (char *)std::string::c_str(psVar1);
  iVar3 = atoi(pcVar2);
  *(int *)this = iVar3;
  piVar4 = (iterator_facade<boost::token_iterator<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>,std::string,boost::forward_traversal_tag,std::string_const&,int>
            *)boost::
              iterator_facade<boost::token_iterator<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>,std::string,boost::forward_traversal_tag,std::string_const&,int>
              ::operator++(local_60);
  psVar1 = (string *)
           boost::
           iterator_facade<boost::token_iterator<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>,std::string,boost::forward_traversal_tag,std::string_const&,int>
           ::operator->(piVar4);
  pcVar2 = (char *)std::string::c_str(psVar1);
  iVar3 = atoi(pcVar2);
  *(short *)(this + 4) = (short)iVar3;
  piVar4 = (iterator_facade<boost::token_iterator<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>,std::string,boost::forward_traversal_tag,std::string_const&,int>
            *)boost::
              iterator_facade<boost::token_iterator<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>,std::string,boost::forward_traversal_tag,std::string_const&,int>
              ::operator++(local_60);
  psVar1 = (string *)
           boost::
           iterator_facade<boost::token_iterator<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>,std::string,boost::forward_traversal_tag,std::string_const&,int>
           ::operator->(piVar4);
  pcVar2 = (char *)std::string::c_str(psVar1);
  iVar3 = atoi(pcVar2);
  *(short *)(this + 6) = (short)iVar3;
  piVar4 = (iterator_facade<boost::token_iterator<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>,std::string,boost::forward_traversal_tag,std::string_const&,int>
            *)boost::
              iterator_facade<boost::token_iterator<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>,std::string,boost::forward_traversal_tag,std::string_const&,int>
              ::operator++(local_60);
  psVar1 = (string *)
           boost::
           iterator_facade<boost::token_iterator<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>,std::string,boost::forward_traversal_tag,std::string_const&,int>
           ::operator->(piVar4);
  pcVar2 = (char *)std::string::c_str(psVar1);
  iVar3 = atoi(pcVar2);
  *(short *)(this + 10) = (short)iVar3;
  piVar4 = (iterator_facade<boost::token_iterator<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>,std::string,boost::forward_traversal_tag,std::string_const&,int>
            *)boost::
              iterator_facade<boost::token_iterator<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>,std::string,boost::forward_traversal_tag,std::string_const&,int>
              ::operator++(local_60);
  psVar1 = (string *)
           boost::
           iterator_facade<boost::token_iterator<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>,std::string,boost::forward_traversal_tag,std::string_const&,int>
           ::operator->(piVar4);
  pcVar2 = (char *)std::string::c_str(psVar1);
  iVar3 = atoi(pcVar2);
  *(short *)(this + 8) = (short)iVar3;
                    /* try { // try from 08164ea4 to 08164ea8 has its CatchHandler @ 08164ec0 */
  boost::
  token_iterator<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>
  ::~token_iterator((token_iterator<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>
                     *)local_60);
                    /* try { // try from 08164edb to 08164edf has its CatchHandler @ 08164ee2 */
  boost::
  tokenizer<boost::char_separator<char,std::char_traits<char>>,__gnu_cxx::__normal_iterator<char_const*,std::string>,std::string>
  ::~tokenizer(local_3c);
  boost::char_separator<char,std::char_traits<char>>::~char_separator(local_20);
  return;
}

```

