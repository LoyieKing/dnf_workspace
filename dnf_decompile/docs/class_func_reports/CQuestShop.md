# CQuestShop

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 23

---

## CQuestShop

```asm
// === 085eebc8 CQuestShop::CQuestShop  [0x085eebc8-0x85eec5f] ===
 85eebc8:	55                   	push   %ebp
 85eebc9:	89 e5                	mov    %esp,%ebp
 85eebcb:	56                   	push   %esi
 85eebcc:	53                   	push   %ebx
 85eebcd:	83 ec 10             	sub    $0x10,%esp
 85eebd0:	8b 45 08             	mov    0x8(%ebp),%eax
 85eebd3:	89 04 24             	mov    %eax,(%esp)
 85eebd6:	e8 df a0 ad ff       	call   80c8cba <_ZN13charac_expand5CDataC1Ev>
 85eebdb:	8b 45 08             	mov    0x8(%ebp),%eax
 85eebde:	c7 00 a8 ff cc 08    	movl   $0x8ccffa8,(%eax)
 85eebe4:	8b 45 08             	mov    0x8(%ebp),%eax
 85eebe7:	83 c0 08             	add    $0x8,%eax
 85eebea:	89 04 24             	mov    %eax,(%esp)
 85eebed:	e8 d6 69 d9 ff       	call   83855c8 <_ZNSt3mapIhsSt4lessIhESaISt4pairIKhsEEEC1Ev>
 85eebf2:	8b 45 08             	mov    0x8(%ebp),%eax
 85eebf5:	83 c0 20             	add    $0x20,%eax
 85eebf8:	89 04 24             	mov    %eax,(%esp)
 85eebfb:	e8 c8 69 d9 ff       	call   83855c8 <_ZNSt3mapIhsSt4lessIhESaISt4pairIKhsEEEC1Ev>
 85eec00:	8b 45 08             	mov    0x8(%ebp),%eax
 85eec03:	89 04 24             	mov    %eax,(%esp)
 85eec06:	e8 69 11 00 00       	call   85efd74 <_ZN10CQuestShop6_resetEv>
 85eec0b:	eb 4b                	jmp    85eec58 <_ZN10CQuestShopC1Ev+0x90>
 85eec0d:	89 d3                	mov    %edx,%ebx
 85eec0f:	89 c6                	mov    %eax,%esi
 85eec11:	8b 45 08             	mov    0x8(%ebp),%eax
 85eec14:	83 c0 20             	add    $0x20,%eax
 85eec17:	89 04 24             	mov    %eax,(%esp)
 85eec1a:	e8 4f 2b d8 ff       	call   837176e <_ZNSt3mapIhsSt4lessIhESaISt4pairIKhsEEED1Ev>
 85eec1f:	89 f0                	mov    %esi,%eax
 85eec21:	89 da                	mov    %ebx,%edx
 85eec23:	eb 00                	jmp    85eec25 <_ZN10CQuestShopC1Ev+0x5d>
 85eec25:	89 d3                	mov    %edx,%ebx
 85eec27:	89 c6                	mov    %eax,%esi
 85eec29:	8b 45 08             	mov    0x8(%ebp),%eax
 85eec2c:	83 c0 08             	add    $0x8,%eax
 85eec2f:	89 04 24             	mov    %eax,(%esp)
 85eec32:	e8 37 2b d8 ff       	call   837176e <_ZNSt3mapIhsSt4lessIhESaISt4pairIKhsEEED1Ev>
 85eec37:	89 f0                	mov    %esi,%eax
 85eec39:	89 da                	mov    %ebx,%edx
 85eec3b:	eb 00                	jmp    85eec3d <_ZN10CQuestShopC1Ev+0x75>
 85eec3d:	89 d3                	mov    %edx,%ebx
 85eec3f:	89 c6                	mov    %eax,%esi
 85eec41:	8b 45 08             	mov    0x8(%ebp),%eax
 85eec44:	89 04 24             	mov    %eax,(%esp)
 85eec47:	e8 96 9f ad ff       	call   80c8be2 <_ZN13charac_expand5CDataD1Ev>
 85eec4c:	89 f0                	mov    %esi,%eax
 85eec4e:	89 da                	mov    %ebx,%edx
 85eec50:	89 04 24             	mov    %eax,(%esp)
 85eec53:	e8 f8 4a 4f 00       	call   8ae3750 <_Unwind_Resume>
 85eec58:	83 c4 10             	add    $0x10,%esp
 85eec5b:	5b                   	pop    %ebx
 85eec5c:	5e                   	pop    %esi
 85eec5d:	5d                   	pop    %ebp
 85eec5e:	c3                   	ret
 85eec5f:	90                   	nop

```

```c
// CQuestShop::CQuestShop @ 0x85eebc8

/* CQuestShop::CQuestShop() */

void __thiscall CQuestShop::CQuestShop(CQuestShop *this)

{
  charac_expand::CData::CData((CData *)this);
  *(undefined ***)this = &PTR_ResetDailyMidnight_08ccffa8;
                    /* try { // try from 085eebed to 085eebf1 has its CatchHandler @ 085eec3d */
  std::
  map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
  ::map((map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
         *)(this + 8));
                    /* try { // try from 085eebfb to 085eebff has its CatchHandler @ 085eec25 */
  std::
  map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
  ::map((map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
         *)(this + 0x20));
                    /* try { // try from 085eec06 to 085eec0a has its CatchHandler @ 085eec0d */
  _reset(this);
  return;
}

```

---

## SetTagCharacQuestShopData

```asm
// === 085efdc0 CQuestShop::SetTagCharacQuestShopData  [0x085efdc0-0x85efe53] ===
 85efdc0:	55                   	push   %ebp
 85efdc1:	89 e5                	mov    %esp,%ebp
 85efdc3:	83 ec 38             	sub    $0x38,%esp
 85efdc6:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 85efdcd:	eb 71                	jmp    85efe40 <_ZN10CQuestShop25SetTagCharacQuestShopDataEP22CHARAC_QUEST_SHOP_DATA+0x80>
 85efdcf:	8b 55 e0             	mov    -0x20(%ebp),%edx
 85efdd2:	8b 45 0c             	mov    0xc(%ebp),%eax
 85efdd5:	0f b7 44 50 0c       	movzwl 0xc(%eax,%edx,2),%eax
 85efdda:	66 85 c0             	test   %ax,%ax
 85efddd:	74 57                	je     85efe36 <_ZN10CQuestShop25SetTagCharacQuestShopDataEP22CHARAC_QUEST_SHOP_DATA+0x76>
 85efddf:	8b 45 e0             	mov    -0x20(%ebp),%eax
 85efde2:	01 c0                	add    %eax,%eax
 85efde4:	03 45 0c             	add    0xc(%ebp),%eax
 85efde7:	8d 50 0c             	lea    0xc(%eax),%edx
 85efdea:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85efded:	89 54 24 08          	mov    %edx,0x8(%esp)
 85efdf1:	8d 55 e0             	lea    -0x20(%ebp),%edx
 85efdf4:	89 54 24 04          	mov    %edx,0x4(%esp)
 85efdf8:	89 04 24             	mov    %eax,(%esp)
 85efdfb:	e8 53 02 00 00       	call   85f0053 <_ZSt9make_pairIRiRtESt4pairINSt17__decay_and_stripIT_E6__typeENS3_IT0_E6__typeEEOS4_OS7_>
 85efe00:	83 ec 04             	sub    $0x4,%esp
 85efe03:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85efe06:	89 44 24 04          	mov    %eax,0x4(%esp)
 85efe0a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85efe0d:	89 04 24             	mov    %eax,(%esp)
 85efe10:	e8 7d 02 00 00       	call   85f0092 <_ZNSt4pairIKhsEC1IitEEOS_IT_T0_E>
 85efe15:	8b 45 08             	mov    0x8(%ebp),%eax
 85efe18:	8d 48 20             	lea    0x20(%eax),%ecx
 85efe1b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85efe1e:	8d 55 ec             	lea    -0x14(%ebp),%edx
 85efe21:	89 54 24 08          	mov    %edx,0x8(%esp)
 85efe25:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 85efe29:	89 04 24             	mov    %eax,(%esp)
 85efe2c:	e8 83 42 e6 ff       	call   84540b4 <_ZNSt3mapIhsSt4lessIhESaISt4pairIKhsEEE6insertERKS4_>
 85efe31:	83 ec 04             	sub    $0x4,%esp
 85efe34:	eb 01                	jmp    85efe37 <_ZN10CQuestShop25SetTagCharacQuestShopDataEP22CHARAC_QUEST_SHOP_DATA+0x77>
 85efe36:	90                   	nop
 85efe37:	8b 45 e0             	mov    -0x20(%ebp),%eax
 85efe3a:	83 c0 01             	add    $0x1,%eax
 85efe3d:	89 45 e0             	mov    %eax,-0x20(%ebp)
 85efe40:	8b 45 e0             	mov    -0x20(%ebp),%eax
 85efe43:	83 f8 4c             	cmp    $0x4c,%eax
 85efe46:	0f 9e c0             	setle  %al
 85efe49:	84 c0                	test   %al,%al
 85efe4b:	75 82                	jne    85efdcf <_ZN10CQuestShop25SetTagCharacQuestShopDataEP22CHARAC_QUEST_SHOP_DATA+0xf>
 85efe4d:	b8 01 00 00 00       	mov    $0x1,%eax
 85efe52:	c9                   	leave
 85efe53:	c3                   	ret

```

```c
// CQuestShop::SetTagCharacQuestShopData @ 0x85efdc0

/* CQuestShop::SetTagCharacQuestShopData(CHARAC_QUEST_SHOP_DATA*) */

undefined4 __thiscall
CQuestShop::SetTagCharacQuestShopData(CQuestShop *this,CHARAC_QUEST_SHOP_DATA *param_1)

{
  int local_24;
  pair local_20 [8];
  pair<unsigned_char_const,short> local_18 [4];
  int local_14 [4];
  
  for (local_24 = 0; local_24 < 0x4d; local_24 = local_24 + 1) {
    if (*(short *)(param_1 + local_24 * 2 + 0xc) != 0) {
      std::make_pair<int&,unsigned_short&>(local_14,(ushort *)&local_24);
      std::pair<unsigned_char_const,short>::pair<int,unsigned_short>(local_18,(pair *)local_14);
      std::
      map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
      ::insert(local_20);
    }
  }
  return 1;
}

```

---

## _reset

```asm
// === 085efd74 CQuestShop::_reset  [0x085efd74-0x85efdbf] ===
 85efd74:	55                   	push   %ebp
 85efd75:	89 e5                	mov    %esp,%ebp
 85efd77:	83 ec 18             	sub    $0x18,%esp
 85efd7a:	8b 45 08             	mov    0x8(%ebp),%eax
 85efd7d:	83 c0 08             	add    $0x8,%eax
 85efd80:	89 04 24             	mov    %eax,(%esp)
 85efd83:	e8 34 59 d9 ff       	call   83856bc <_ZNSt3mapIhsSt4lessIhESaISt4pairIKhsEEE5clearEv>
 85efd88:	8b 45 08             	mov    0x8(%ebp),%eax
 85efd8b:	c7 40 38 00 00 00 00 	movl   $0x0,0x38(%eax)
 85efd92:	8b 45 08             	mov    0x8(%ebp),%eax
 85efd95:	c7 40 3c 00 00 00 00 	movl   $0x0,0x3c(%eax)
 85efd9c:	8b 45 08             	mov    0x8(%ebp),%eax
 85efd9f:	c7 40 40 00 00 00 00 	movl   $0x0,0x40(%eax)
 85efda6:	8b 45 08             	mov    0x8(%ebp),%eax
 85efda9:	83 c0 20             	add    $0x20,%eax
 85efdac:	89 04 24             	mov    %eax,(%esp)
 85efdaf:	e8 08 59 d9 ff       	call   83856bc <_ZNSt3mapIhsSt4lessIhESaISt4pairIKhsEEE5clearEv>
 85efdb4:	8b 45 08             	mov    0x8(%ebp),%eax
 85efdb7:	c7 40 44 00 00 00 00 	movl   $0x0,0x44(%eax)
 85efdbe:	c9                   	leave
 85efdbf:	c3                   	ret

```

```c
// CQuestShop::_reset @ 0x85efd74

/* CQuestShop::_reset() */

void __thiscall CQuestShop::_reset(CQuestShop *this)

{
  std::
  map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
  ::clear((map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
           *)(this + 8));
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  std::
  map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
  ::clear((map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
           *)(this + 0x20));
  *(undefined4 *)(this + 0x44) = 0;
  return;
}

```

---

## _saveData

```asm
// === 085efb66 CQuestShop::_saveData  [0x085efb66-0x85efd73] ===
 85efb66:	55                   	push   %ebp
 85efb67:	89 e5                	mov    %esp,%ebp
 85efb69:	56                   	push   %esi
 85efb6a:	53                   	push   %ebx
 85efb6b:	83 ec 30             	sub    $0x30,%esp
 85efb6e:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 85efb73:	c7 44 24 08 1b 02 00 	movl   $0x21b,0x8(%esp)
 85efb7a:	00 
 85efb7b:	c7 44 24 04 80 f3 cc 	movl   $0x8ccf380,0x4(%esp)
 85efb82:	08 
 85efb83:	89 04 24             	mov    %eax,(%esp)
 85efb86:	e8 fb fe c9 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 85efb8b:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 85efb92:	00 
 85efb93:	89 44 24 04          	mov    %eax,0x4(%esp)
 85efb97:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85efb9a:	89 04 24             	mov    %eax,(%esp)
 85efb9d:	e8 84 90 ad ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 85efba2:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85efba5:	89 04 24             	mov    %eax,(%esp)
 85efba8:	e8 99 90 ad ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 85efbad:	c7 44 24 04 79 02 00 	movl   $0x279,0x4(%esp)
 85efbb4:	00 
 85efbb5:	89 04 24             	mov    %eax,(%esp)
 85efbb8:	e8 99 90 ad ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 85efbbd:	8b 45 0c             	mov    0xc(%ebp),%eax
 85efbc0:	89 04 24             	mov    %eax,(%esp)
 85efbc3:	e8 ce 90 ad ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 85efbc8:	89 c3                	mov    %eax,%ebx
 85efbca:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85efbcd:	89 04 24             	mov    %eax,(%esp)
 85efbd0:	e8 71 90 ad ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 85efbd5:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85efbd9:	89 04 24             	mov    %eax,(%esp)
 85efbdc:	e8 75 90 ad ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 85efbe1:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85efbe4:	89 04 24             	mov    %eax,(%esp)
 85efbe7:	e8 62 90 ad ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 85efbec:	89 04 24             	mov    %eax,(%esp)
 85efbef:	e8 d4 04 00 00       	call   85f00c8 <_ZN12CStreamGuard11GetInBufferI19SIG_QUEST_SHOP_DATAEEPT_v>
 85efbf4:	89 45 ec             	mov    %eax,-0x14(%ebp)
 85efbf7:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 85efbfb:	75 0a                	jne    85efc07 <_ZN10CQuestShop9_saveDataEP5CUser+0xa1>
 85efbfd:	bb 00 00 00 00       	mov    $0x0,%ebx
 85efc02:	e9 56 01 00 00       	jmp    85efd5d <_ZN10CQuestShop9_saveDataEP5CUser+0x1f7>
 85efc07:	c7 44 24 08 55 01 00 	movl   $0x155,0x8(%esp)
 85efc0e:	00 
 85efc0f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85efc16:	00 
 85efc17:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85efc1a:	89 04 24             	mov    %eax,(%esp)
 85efc1d:	e8 9e e0 a8 ff       	call   807dcc0 <memset@plt>
 85efc22:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85efc25:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85efc28:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 85efc2f:	ff 
 85efc30:	8b 45 0c             	mov    0xc(%ebp),%eax
 85efc33:	89 04 24             	mov    %eax,(%esp)
 85efc36:	e8 65 e3 05 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 85efc3b:	89 c2                	mov    %eax,%edx
 85efc3d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85efc40:	89 10                	mov    %edx,(%eax)
 85efc42:	8b 45 08             	mov    0x8(%ebp),%eax
 85efc45:	89 04 24             	mov    %eax,(%esp)
 85efc48:	e8 63 02 00 00       	call   85efeb0 <_ZNK10CQuestShop5getQpEv>
 85efc4d:	89 c2                	mov    %eax,%edx
 85efc4f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85efc52:	89 50 04             	mov    %edx,0x4(%eax)
 85efc55:	8b 45 08             	mov    0x8(%ebp),%eax
 85efc58:	89 04 24             	mov    %eax,(%esp)
 85efc5b:	e8 aa 02 00 00       	call   85eff0a <_ZNK10CQuestShop12getInitCountEv>
 85efc60:	89 c2                	mov    %eax,%edx
 85efc62:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85efc65:	89 50 08             	mov    %edx,0x8(%eax)
 85efc68:	8b 45 08             	mov    0x8(%ebp),%eax
 85efc6b:	89 04 24             	mov    %eax,(%esp)
 85efc6e:	e8 d1 02 00 00       	call   85eff44 <_ZNK10CQuestShop8getPieceEv>
 85efc73:	89 c2                	mov    %eax,%edx
 85efc75:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85efc78:	89 90 a6 00 00 00    	mov    %edx,0xa6(%eax)
 85efc7e:	8b 45 08             	mov    0x8(%ebp),%eax
 85efc81:	8d 50 08             	lea    0x8(%eax),%edx
 85efc84:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85efc87:	89 54 24 04          	mov    %edx,0x4(%esp)
 85efc8b:	89 04 24             	mov    %eax,(%esp)
 85efc8e:	e8 ed 04 e6 ff       	call   8450180 <_ZNSt3mapIhsSt4lessIhESaISt4pairIKhsEEE3endEv>
 85efc93:	83 ec 04             	sub    $0x4,%esp
 85efc96:	8b 45 08             	mov    0x8(%ebp),%eax
 85efc99:	8d 50 08             	lea    0x8(%eax),%edx
 85efc9c:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85efc9f:	89 54 24 04          	mov    %edx,0x4(%esp)
 85efca3:	89 04 24             	mov    %eax,(%esp)
 85efca6:	e8 af 04 e6 ff       	call   845015a <_ZNSt3mapIhsSt4lessIhESaISt4pairIKhsEEE5beginEv>
 85efcab:	83 ec 04             	sub    $0x4,%esp
 85efcae:	eb 59                	jmp    85efd09 <_ZN10CQuestShop9_saveDataEP5CUser+0x1a3>
 85efcb0:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85efcb3:	89 04 24             	mov    %eax,(%esp)
 85efcb6:	e8 ff 04 e6 ff       	call   84501ba <_ZNKSt17_Rb_tree_iteratorISt4pairIKhsEEptEv>
 85efcbb:	0f b6 00             	movzbl (%eax),%eax
 85efcbe:	88 45 f5             	mov    %al,-0xb(%ebp)
 85efcc1:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85efcc4:	89 04 24             	mov    %eax,(%esp)
 85efcc7:	e8 ee 04 e6 ff       	call   84501ba <_ZNKSt17_Rb_tree_iteratorISt4pairIKhsEEptEv>
 85efccc:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 85efcd0:	66 89 45 f6          	mov    %ax,-0xa(%ebp)
 85efcd4:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85efcd7:	89 04 24             	mov    %eax,(%esp)
 85efcda:	e8 db 04 e6 ff       	call   84501ba <_ZNKSt17_Rb_tree_iteratorISt4pairIKhsEEptEv>
 85efcdf:	0f b6 00             	movzbl (%eax),%eax
 85efce2:	3c 4c                	cmp    $0x4c,%al
 85efce4:	0f 97 c0             	seta   %al
 85efce7:	84 c0                	test   %al,%al
 85efce9:	75 12                	jne    85efcfd <_ZN10CQuestShop9_saveDataEP5CUser+0x197>
 85efceb:	0f b6 55 f5          	movzbl -0xb(%ebp),%edx
 85efcef:	0f b7 4d f6          	movzwl -0xa(%ebp),%ecx
 85efcf3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85efcf6:	66 89 4c 50 0c       	mov    %cx,0xc(%eax,%edx,2)
 85efcfb:	eb 01                	jmp    85efcfe <_ZN10CQuestShop9_saveDataEP5CUser+0x198>
 85efcfd:	90                   	nop
 85efcfe:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85efd01:	89 04 24             	mov    %eax,(%esp)
 85efd04:	e8 d7 43 e6 ff       	call   84540e0 <_ZNSt17_Rb_tree_iteratorISt4pairIKhsEEppEv>
 85efd09:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85efd0c:	89 44 24 04          	mov    %eax,0x4(%esp)
 85efd10:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85efd13:	89 04 24             	mov    %eax,(%esp)
 85efd16:	e8 8b 04 e6 ff       	call   84501a6 <_ZNKSt17_Rb_tree_iteratorISt4pairIKhsEEneERKS3_>
 85efd1b:	84 c0                	test   %al,%al
 85efd1d:	75 91                	jne    85efcb0 <_ZN10CQuestShop9_saveDataEP5CUser+0x14a>
 85efd1f:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 85efd24:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 85efd27:	89 54 24 08          	mov    %edx,0x8(%esp)
 85efd2b:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 85efd32:	00 
 85efd33:	89 04 24             	mov    %eax,(%esp)
 85efd36:	e8 a3 12 f8 ff       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 85efd3b:	bb 01 00 00 00       	mov    $0x1,%ebx
 85efd40:	eb 1b                	jmp    85efd5d <_ZN10CQuestShop9_saveDataEP5CUser+0x1f7>
 85efd42:	89 d3                	mov    %edx,%ebx
 85efd44:	89 c6                	mov    %eax,%esi
 85efd46:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85efd49:	89 04 24             	mov    %eax,(%esp)
 85efd4c:	e8 81 cb 02 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 85efd51:	89 f0                	mov    %esi,%eax
 85efd53:	89 da                	mov    %ebx,%edx
 85efd55:	89 04 24             	mov    %eax,(%esp)
 85efd58:	e8 f3 39 4f 00       	call   8ae3750 <_Unwind_Resume>
 85efd5d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85efd60:	89 04 24             	mov    %eax,(%esp)
 85efd63:	e8 6a cb 02 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 85efd68:	89 d8                	mov    %ebx,%eax
 85efd6a:	8d 65 f8             	lea    -0x8(%ebp),%esp
 85efd6d:	83 c4 00             	add    $0x0,%esp
 85efd70:	5b                   	pop    %ebx
 85efd71:	5e                   	pop    %esi
 85efd72:	5d                   	pop    %ebp
 85efd73:	c3                   	ret

```

```c
// CQuestShop::_saveData @ 0x85efb66

/* CQuestShop::_saveData(CUser*) */

undefined4 __thiscall CQuestShop::_saveData(CQuestShop *this,CUser *param_1)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 uVar6;
  map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
  local_28 [4];
  map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
  local_24 [4];
  CStreamGuard local_20 [8];
  SIG_QUEST_SHOP_DATA *local_18;
  SIG_QUEST_SHOP_DATA *local_14;
  byte local_f;
  undefined2 local_e;
  
  pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"QuestShop.cpp",0x21b);
  CStreamGuard::CStreamGuard(local_20,pSVar2,true);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_20);
                    /* try { // try from 085efbb8 to 085efd3a has its CatchHandler @ 085efd42 */
  CStreamGuard::operator<<(pCVar3,0x279);
  iVar4 = CUser::GetUID(param_1);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_20);
  CStreamGuard::operator<<(pCVar3,iVar4);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_20);
  local_18 = CStreamGuard::GetInBuffer<SIG_QUEST_SHOP_DATA>(pCVar3);
  if (local_18 == (SIG_QUEST_SHOP_DATA *)0x0) {
    uVar6 = 0;
  }
  else {
    memset(local_18,0,0x155);
    local_14 = local_18;
    uVar6 = CUser::get_charac_no(param_1,-1);
    *(undefined4 *)local_14 = uVar6;
    uVar6 = getQp(this);
    *(undefined4 *)(local_14 + 4) = uVar6;
    uVar6 = getInitCount(this);
    *(undefined4 *)(local_14 + 8) = uVar6;
    uVar6 = getPiece(this);
    *(undefined4 *)(local_14 + 0xa6) = uVar6;
    std::
    map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
    ::end(local_24);
    std::
    map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
    ::begin(local_28);
    while( true ) {
      cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,short>>::operator!=
                        ((_Rb_tree_iterator<std::pair<unsigned_char_const,short>> *)local_28,
                         (_Rb_tree_iterator *)local_24);
      if (cVar1 == '\0') break;
      pbVar5 = (byte *)std::_Rb_tree_iterator<std::pair<unsigned_char_const,short>>::operator->
                                 ((_Rb_tree_iterator<std::pair<unsigned_char_const,short>> *)
                                  local_28);
      local_f = *pbVar5;
      iVar4 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,short>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_char_const,short>> *)local_28);
      local_e = *(undefined2 *)(iVar4 + 2);
      pbVar5 = (byte *)std::_Rb_tree_iterator<std::pair<unsigned_char_const,short>>::operator->
                                 ((_Rb_tree_iterator<std::pair<unsigned_char_const,short>> *)
                                  local_28);
      if (*pbVar5 < 0x4d) {
        *(undefined2 *)(local_14 + (uint)local_f * 2 + 0xc) = local_e;
      }
      std::_Rb_tree_iterator<std::pair<unsigned_char_const,short>>::operator++
                ((_Rb_tree_iterator<std::pair<unsigned_char_const,short>> *)local_28);
    }
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_20);
    uVar6 = 1;
  }
  CStreamGuard::~CStreamGuard(local_20);
  return uVar6;
}

```

---

## buyStatus

```asm
// === 085ef306 CQuestShop::buyStatus  [0x085ef306-0x85ef425] ===
 85ef306:	55                   	push   %ebp
 85ef307:	89 e5                	mov    %esp,%ebp
 85ef309:	53                   	push   %ebx
 85ef30a:	83 ec 34             	sub    $0x34,%esp
 85ef30d:	8b 55 10             	mov    0x10(%ebp),%edx
 85ef310:	8b 45 14             	mov    0x14(%ebp),%eax
 85ef313:	88 55 e4             	mov    %dl,-0x1c(%ebp)
 85ef316:	88 45 e0             	mov    %al,-0x20(%ebp)
 85ef319:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
 85ef31d:	89 44 24 04          	mov    %eax,0x4(%esp)
 85ef321:	8b 45 08             	mov    0x8(%ebp),%eax
 85ef324:	89 04 24             	mov    %eax,(%esp)
 85ef327:	e8 02 fd ff ff       	call   85ef02e <_ZN10CQuestShop20getStatusBuyingCountEh>
 85ef32c:	98                   	cwtl
 85ef32d:	89 45 e8             	mov    %eax,-0x18(%ebp)
 85ef330:	83 7d e8 ff          	cmpl   $0xffffffff,-0x18(%ebp)
 85ef334:	75 0a                	jne    85ef340 <_ZN10CQuestShop9buyStatusEP5CUserhhRs+0x3a>
 85ef336:	b8 01 00 00 00       	mov    $0x1,%eax
 85ef33b:	e9 df 00 00 00       	jmp    85ef41f <_ZN10CQuestShop9buyStatusEP5CUserhhRs+0x119>
 85ef340:	0f b6 55 e0          	movzbl -0x20(%ebp),%edx
 85ef344:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85ef347:	8d 04 02             	lea    (%edx,%eax,1),%eax
 85ef34a:	89 c2                	mov    %eax,%edx
 85ef34c:	8b 45 18             	mov    0x18(%ebp),%eax
 85ef34f:	66 89 10             	mov    %dx,(%eax)
 85ef352:	8b 45 0c             	mov    0xc(%ebp),%eax
 85ef355:	89 04 24             	mov    %eax,(%esp)
 85ef358:	e8 5b af ae ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 85ef35d:	8b 55 18             	mov    0x18(%ebp),%edx
 85ef360:	0f b7 12             	movzwl (%edx),%edx
 85ef363:	0f bf ca             	movswl %dx,%ecx
 85ef366:	0f b6 55 e4          	movzbl -0x1c(%ebp),%edx
 85ef36a:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85ef36e:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 85ef372:	89 54 24 04          	mov    %edx,0x4(%esp)
 85ef376:	8b 45 08             	mov    0x8(%ebp),%eax
 85ef379:	89 04 24             	mov    %eax,(%esp)
 85ef37c:	e8 4d fd ff ff       	call   85ef0ce <_ZN10CQuestShop28checkBuyingStatus_LimitLevelEhsi>
 85ef381:	88 45 ef             	mov    %al,-0x11(%ebp)
 85ef384:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
 85ef388:	83 f0 01             	xor    $0x1,%eax
 85ef38b:	84 c0                	test   %al,%al
 85ef38d:	74 0a                	je     85ef399 <_ZN10CQuestShop9buyStatusEP5CUserhhRs+0x93>
 85ef38f:	b8 0e 00 00 00       	mov    $0xe,%eax
 85ef394:	e9 86 00 00 00       	jmp    85ef41f <_ZN10CQuestShop9buyStatusEP5CUserhhRs+0x119>
 85ef399:	8b 45 08             	mov    0x8(%ebp),%eax
 85ef39c:	89 04 24             	mov    %eax,(%esp)
 85ef39f:	e8 0c 0b 00 00       	call   85efeb0 <_ZNK10CQuestShop5getQpEv>
 85ef3a4:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85ef3a7:	0f b6 55 e0          	movzbl -0x20(%ebp),%edx
 85ef3ab:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
 85ef3af:	89 54 24 08          	mov    %edx,0x8(%esp)
 85ef3b3:	89 44 24 04          	mov    %eax,0x4(%esp)
 85ef3b7:	8b 45 08             	mov    0x8(%ebp),%eax
 85ef3ba:	89 04 24             	mov    %eax,(%esp)
 85ef3bd:	e8 68 f9 ff ff       	call   85eed2a <_ZN10CQuestShop5subQpEhh>
 85ef3c2:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85ef3c5:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 85ef3c9:	74 05                	je     85ef3d0 <_ZN10CQuestShop9buyStatusEP5CUserhhRs+0xca>
 85ef3cb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85ef3ce:	eb 4f                	jmp    85ef41f <_ZN10CQuestShop9buyStatusEP5CUserhhRs+0x119>
 85ef3d0:	0f b6 55 e0          	movzbl -0x20(%ebp),%edx
 85ef3d4:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
 85ef3d8:	89 54 24 08          	mov    %edx,0x8(%esp)
 85ef3dc:	89 44 24 04          	mov    %eax,0x4(%esp)
 85ef3e0:	8b 45 08             	mov    0x8(%ebp),%eax
 85ef3e3:	89 04 24             	mov    %eax,(%esp)
 85ef3e6:	e8 3d fb ff ff       	call   85eef28 <_ZN10CQuestShop20incStatusBuyingCountEhh>
 85ef3eb:	0f b6 5d e4          	movzbl -0x1c(%ebp),%ebx
 85ef3ef:	8b 45 08             	mov    0x8(%ebp),%eax
 85ef3f2:	89 04 24             	mov    %eax,(%esp)
 85ef3f5:	e8 b6 0a 00 00       	call   85efeb0 <_ZNK10CQuestShop5getQpEv>
 85ef3fa:	8b 55 0c             	mov    0xc(%ebp),%edx
 85ef3fd:	81 c2 00 97 07 00    	add    $0x79700,%edx
 85ef403:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 85ef407:	89 44 24 08          	mov    %eax,0x8(%esp)
 85ef40b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85ef40e:	89 44 24 04          	mov    %eax,0x4(%esp)
 85ef412:	89 14 24             	mov    %edx,(%esp)
 85ef415:	e8 40 94 09 00       	call   868885a <_ZN15cUserHistoryLog5QPSubEiii>
 85ef41a:	b8 00 00 00 00       	mov    $0x0,%eax
 85ef41f:	83 c4 34             	add    $0x34,%esp
 85ef422:	5b                   	pop    %ebx
 85ef423:	5d                   	pop    %ebp
 85ef424:	c3                   	ret
 85ef425:	90                   	nop

```

```c
// CQuestShop::buyStatus @ 0x85ef306

/* CQuestShop::buyStatus(CUser*, unsigned char, unsigned char, short&) */

int __thiscall
CQuestShop::buyStatus(CQuestShop *this,CUser *param_1,uchar param_2,uchar param_3,short *param_4)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  
  sVar2 = getStatusBuyingCount(this,param_2);
  if (sVar2 == -1) {
    iVar3 = 1;
  }
  else {
    *param_4 = (ushort)param_3 + sVar2;
    iVar4 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
    cVar1 = checkBuyingStatus_LimitLevel(this,param_2,*param_4,iVar4);
    if (cVar1 == '\x01') {
      iVar4 = getQp(this);
      iVar3 = subQp(this,param_2,param_3);
      if (iVar3 == 0) {
        incStatusBuyingCount(this,param_2,param_3);
        iVar3 = getQp(this);
        cUserHistoryLog::QPSub((cUserHistoryLog *)(param_1 + 0x79700),iVar4,iVar3,(uint)param_2);
        iVar3 = 0;
      }
    }
    else {
      iVar3 = 0xe;
    }
  }
  return iVar3;
}

```

---

## calUsedQp

```asm
// === 085ef214 CQuestShop::calUsedQp  [0x085ef214-0x85ef305] ===
 85ef214:	55                   	push   %ebp
 85ef215:	89 e5                	mov    %esp,%ebp
 85ef217:	83 ec 38             	sub    $0x38,%esp
 85ef21a:	c6 45 e7 00          	movb   $0x0,-0x19(%ebp)
 85ef21e:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 85ef225:	8b 45 08             	mov    0x8(%ebp),%eax
 85ef228:	8d 50 08             	lea    0x8(%eax),%edx
 85ef22b:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85ef22e:	89 54 24 04          	mov    %edx,0x4(%esp)
 85ef232:	89 04 24             	mov    %eax,(%esp)
 85ef235:	e8 46 0f e6 ff       	call   8450180 <_ZNSt3mapIhsSt4lessIhESaISt4pairIKhsEEE3endEv>
 85ef23a:	83 ec 04             	sub    $0x4,%esp
 85ef23d:	8b 45 08             	mov    0x8(%ebp),%eax
 85ef240:	8d 50 08             	lea    0x8(%eax),%edx
 85ef243:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85ef246:	89 54 24 04          	mov    %edx,0x4(%esp)
 85ef24a:	89 04 24             	mov    %eax,(%esp)
 85ef24d:	e8 08 0f e6 ff       	call   845015a <_ZNSt3mapIhsSt4lessIhESaISt4pairIKhsEEE5beginEv>
 85ef252:	83 ec 04             	sub    $0x4,%esp
 85ef255:	e9 8c 00 00 00       	jmp    85ef2e6 <_ZN10CQuestShop9calUsedQpEv+0xd2>
 85ef25a:	c7 45 ec ff ff ff ff 	movl   $0xffffffff,-0x14(%ebp)
 85ef261:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85ef264:	89 04 24             	mov    %eax,(%esp)
 85ef267:	e8 4e 0f e6 ff       	call   84501ba <_ZNKSt17_Rb_tree_iteratorISt4pairIKhsEEptEv>
 85ef26c:	0f b6 00             	movzbl (%eax),%eax
 85ef26f:	0f b6 c0             	movzbl %al,%eax
 85ef272:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85ef275:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85ef278:	89 04 24             	mov    %eax,(%esp)
 85ef27b:	e8 3a 0f e6 ff       	call   84501ba <_ZNKSt17_Rb_tree_iteratorISt4pairIKhsEEptEv>
 85ef280:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 85ef284:	98                   	cwtl
 85ef285:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85ef288:	83 7d f0 4c          	cmpl   $0x4c,-0x10(%ebp)
 85ef28c:	7e 07                	jle    85ef295 <_ZN10CQuestShop9calUsedQpEv+0x81>
 85ef28e:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 85ef293:	eb 6e                	jmp    85ef303 <_ZN10CQuestShop9calUsedQpEv+0xef>
 85ef295:	e8 01 cf ad ff       	call   80cc19b <_Z14G_CDataManagerv>
 85ef29a:	8b 55 f0             	mov    -0x10(%ebp),%edx
 85ef29d:	0f b6 84 10 c0 63 00 	movzbl 0x63c0(%eax,%edx,1),%eax
 85ef2a4:	00 
 85ef2a5:	0f be c0             	movsbl %al,%eax
 85ef2a8:	89 45 ec             	mov    %eax,-0x14(%ebp)
 85ef2ab:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85ef2ae:	0f b6 c0             	movzbl %al,%eax
 85ef2b1:	89 44 24 04          	mov    %eax,0x4(%esp)
 85ef2b5:	8b 45 08             	mov    0x8(%ebp),%eax
 85ef2b8:	89 04 24             	mov    %eax,(%esp)
 85ef2bb:	e8 e8 fa ff ff       	call   85eeda8 <_ZN10CQuestShop12findStatusQpEh>
 85ef2c0:	88 45 e7             	mov    %al,-0x19(%ebp)
 85ef2c3:	80 7d e7 00          	cmpb   $0x0,-0x19(%ebp)
 85ef2c7:	75 07                	jne    85ef2d0 <_ZN10CQuestShop9calUsedQpEv+0xbc>
 85ef2c9:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 85ef2ce:	eb 33                	jmp    85ef303 <_ZN10CQuestShop9calUsedQpEv+0xef>
 85ef2d0:	0f b6 45 e7          	movzbl -0x19(%ebp),%eax
 85ef2d4:	0f af 45 f4          	imul   -0xc(%ebp),%eax
 85ef2d8:	01 45 e8             	add    %eax,-0x18(%ebp)
 85ef2db:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85ef2de:	89 04 24             	mov    %eax,(%esp)
 85ef2e1:	e8 fa 4d e6 ff       	call   84540e0 <_ZNSt17_Rb_tree_iteratorISt4pairIKhsEEppEv>
 85ef2e6:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85ef2e9:	89 44 24 04          	mov    %eax,0x4(%esp)
 85ef2ed:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85ef2f0:	89 04 24             	mov    %eax,(%esp)
 85ef2f3:	e8 ae 0e e6 ff       	call   84501a6 <_ZNKSt17_Rb_tree_iteratorISt4pairIKhsEEneERKS3_>
 85ef2f8:	84 c0                	test   %al,%al
 85ef2fa:	0f 85 5a ff ff ff    	jne    85ef25a <_ZN10CQuestShop9calUsedQpEv+0x46>
 85ef300:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85ef303:	c9                   	leave
 85ef304:	c3                   	ret
 85ef305:	90                   	nop

```

```c
// CQuestShop::calUsedQp @ 0x85ef214

/* CQuestShop::calUsedQp() */

int __thiscall CQuestShop::calUsedQp(CQuestShop *this)

{
  uchar uVar1;
  char cVar2;
  byte *pbVar3;
  int iVar4;
  map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
  local_28 [4];
  map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
  local_24 [7];
  byte local_1d;
  int local_1c;
  int local_18;
  uint local_14;
  int local_10;
  
  local_1d = 0;
  local_1c = 0;
  std::
  map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
  ::end(local_24);
  std::
  map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
  ::begin(local_28);
  while( true ) {
    cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,short>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_char_const,short>> *)local_28,
                       (_Rb_tree_iterator *)local_24);
    if (cVar2 == '\0') {
      return local_1c;
    }
    local_18 = 0xffffffff;
    pbVar3 = (byte *)std::_Rb_tree_iterator<std::pair<unsigned_char_const,short>>::operator->
                               ((_Rb_tree_iterator<std::pair<unsigned_char_const,short>> *)local_28)
    ;
    local_14 = (uint)*pbVar3;
    iVar4 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,short>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_char_const,short>> *)local_28);
    local_10 = (int)*(short *)(iVar4 + 2);
    if (0x4c < (int)local_14) break;
    iVar4 = G_CDataManager();
    uVar1 = *(uchar *)(iVar4 + 0x63c0 + local_14);
    local_18 = (int)(char)uVar1;
    local_1d = findStatusQp(this,uVar1);
    if (local_1d == 0) {
      return -1;
    }
    local_1c = local_1c + (uint)local_1d * local_10;
    std::_Rb_tree_iterator<std::pair<unsigned_char_const,short>>::operator++
              ((_Rb_tree_iterator<std::pair<unsigned_char_const,short>> *)local_28);
  }
  return -1;
}

```

---

## checkBuyingStatus_LimitLevel

```asm
// === 085ef0ce CQuestShop::checkBuyingStatus_LimitLevel  [0x085ef0ce-0x85ef1b9] ===
 85ef0ce:	55                   	push   %ebp
 85ef0cf:	89 e5                	mov    %esp,%ebp
 85ef0d1:	56                   	push   %esi
 85ef0d2:	53                   	push   %ebx
 85ef0d3:	83 ec 50             	sub    $0x50,%esp
 85ef0d6:	8b 55 0c             	mov    0xc(%ebp),%edx
 85ef0d9:	8b 45 10             	mov    0x10(%ebp),%eax
 85ef0dc:	88 55 c4             	mov    %dl,-0x3c(%ebp)
 85ef0df:	66 89 45 c0          	mov    %ax,-0x40(%ebp)
 85ef0e3:	e8 b3 d0 ad ff       	call   80cc19b <_Z14G_CDataManagerv>
 85ef0e8:	05 98 63 00 00       	add    $0x6398,%eax
 85ef0ed:	89 44 24 04          	mov    %eax,0x4(%esp)
 85ef0f1:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85ef0f4:	89 04 24             	mov    %eax,(%esp)
 85ef0f7:	e8 54 0e 00 00       	call   85eff50 <_ZNSt3mapIi17stQuestShopStatusSt4lessIiESaISt4pairIKiS0_EEEC1ERKS7_>
 85ef0fc:	0f b6 45 c4          	movzbl -0x3c(%ebp),%eax
 85ef100:	89 45 ec             	mov    %eax,-0x14(%ebp)
 85ef103:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85ef106:	8d 55 ec             	lea    -0x14(%ebp),%edx
 85ef109:	89 54 24 08          	mov    %edx,0x8(%esp)
 85ef10d:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 85ef110:	89 54 24 04          	mov    %edx,0x4(%esp)
 85ef114:	89 04 24             	mov    %eax,(%esp)
 85ef117:	e8 4e 0e 00 00       	call   85eff6a <_ZNSt3mapIi17stQuestShopStatusSt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 85ef11c:	83 ec 04             	sub    $0x4,%esp
 85ef11f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85ef122:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 85ef125:	89 54 24 04          	mov    %edx,0x4(%esp)
 85ef129:	89 04 24             	mov    %eax,(%esp)
 85ef12c:	e8 65 0e 00 00       	call   85eff96 <_ZNSt3mapIi17stQuestShopStatusSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 85ef131:	83 ec 04             	sub    $0x4,%esp
 85ef134:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85ef137:	89 44 24 04          	mov    %eax,0x4(%esp)
 85ef13b:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85ef13e:	89 04 24             	mov    %eax,(%esp)
 85ef141:	e8 76 0e 00 00       	call   85effbc <_ZNKSt17_Rb_tree_iteratorISt4pairIKi17stQuestShopStatusEEneERKS4_>
 85ef146:	84 c0                	test   %al,%al
 85ef148:	74 37                	je     85ef181 <_ZN10CQuestShop28checkBuyingStatus_LimitLevelEhsi+0xb3>
 85ef14a:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85ef14d:	89 04 24             	mov    %eax,(%esp)
 85ef150:	e8 7b 0e 00 00       	call   85effd0 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi17stQuestShopStatusEEptEv>
 85ef155:	8d 50 04             	lea    0x4(%eax),%edx
 85ef158:	8b 45 14             	mov    0x14(%ebp),%eax
 85ef15b:	89 44 24 04          	mov    %eax,0x4(%esp)
 85ef15f:	89 14 24             	mov    %edx,(%esp)
 85ef162:	e8 85 07 32 00       	call   890f8ec <_ZN17stQuestShopStatus11getMaxCountEi>
 85ef167:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85ef16a:	0f bf 45 c0          	movswl -0x40(%ebp),%eax
 85ef16e:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 85ef171:	7e 07                	jle    85ef17a <_ZN10CQuestShop28checkBuyingStatus_LimitLevelEhsi+0xac>
 85ef173:	bb 00 00 00 00       	mov    $0x0,%ebx
 85ef178:	eb 29                	jmp    85ef1a3 <_ZN10CQuestShop28checkBuyingStatus_LimitLevelEhsi+0xd5>
 85ef17a:	bb 01 00 00 00       	mov    $0x1,%ebx
 85ef17f:	eb 22                	jmp    85ef1a3 <_ZN10CQuestShop28checkBuyingStatus_LimitLevelEhsi+0xd5>
 85ef181:	bb 00 00 00 00       	mov    $0x0,%ebx
 85ef186:	eb 1b                	jmp    85ef1a3 <_ZN10CQuestShop28checkBuyingStatus_LimitLevelEhsi+0xd5>
 85ef188:	89 d3                	mov    %edx,%ebx
 85ef18a:	89 c6                	mov    %eax,%esi
 85ef18c:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85ef18f:	89 04 24             	mov    %eax,(%esp)
 85ef192:	e8 29 1f d8 ff       	call   83710c0 <_ZNSt3mapIi17stQuestShopStatusSt4lessIiESaISt4pairIKiS0_EEED1Ev>
 85ef197:	89 f0                	mov    %esi,%eax
 85ef199:	89 da                	mov    %ebx,%edx
 85ef19b:	89 04 24             	mov    %eax,(%esp)
 85ef19e:	e8 ad 45 4f 00       	call   8ae3750 <_Unwind_Resume>
 85ef1a3:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85ef1a6:	89 04 24             	mov    %eax,(%esp)
 85ef1a9:	e8 12 1f d8 ff       	call   83710c0 <_ZNSt3mapIi17stQuestShopStatusSt4lessIiESaISt4pairIKiS0_EEED1Ev>
 85ef1ae:	89 d8                	mov    %ebx,%eax
 85ef1b0:	8d 65 f8             	lea    -0x8(%ebp),%esp
 85ef1b3:	83 c4 00             	add    $0x0,%esp
 85ef1b6:	5b                   	pop    %ebx
 85ef1b7:	5e                   	pop    %esi
 85ef1b8:	5d                   	pop    %ebp
 85ef1b9:	c3                   	ret

```

```c
// CQuestShop::checkBuyingStatus_LimitLevel @ 0x85ef0ce

/* CQuestShop::checkBuyingStatus_LimitLevel(unsigned char, short, int) */

undefined4 __thiscall
CQuestShop::checkBuyingStatus_LimitLevel(CQuestShop *this,uchar param_1,short param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_iterator<std::pair<int_const,stQuestShopStatus>> local_34 [4];
  map<int,stQuestShopStatus,std::less<int>,std::allocator<std::pair<int_const,stQuestShopStatus>>>
  local_30 [24];
  uint local_18;
  map<int,stQuestShopStatus,std::less<int>,std::allocator<std::pair<int_const,stQuestShopStatus>>>
  local_14 [4];
  int local_10;
  
  iVar2 = G_CDataManager();
  std::
  map<int,stQuestShopStatus,std::less<int>,std::allocator<std::pair<int_const,stQuestShopStatus>>>::
  map(local_30,(map *)(iVar2 + 0x6398));
  local_18 = (uint)param_1;
                    /* try { // try from 085ef117 to 085ef166 has its CatchHandler @ 085ef188 */
  std::
  map<int,stQuestShopStatus,std::less<int>,std::allocator<std::pair<int_const,stQuestShopStatus>>>::
  find((int *)local_34);
  std::
  map<int,stQuestShopStatus,std::less<int>,std::allocator<std::pair<int_const,stQuestShopStatus>>>::
  end(local_14);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,stQuestShopStatus>>::operator!=
                    (local_34,(_Rb_tree_iterator *)local_14);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,stQuestShopStatus>>::operator->(local_34);
    local_10 = stQuestShopStatus::getMaxCount((stQuestShopStatus *)(iVar2 + 4),param_3);
    if (local_10 < param_2) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  std::
  map<int,stQuestShopStatus,std::less<int>,std::allocator<std::pair<int_const,stQuestShopStatus>>>::
  ~map(local_30);
  return uVar3;
}

```

---

## clearBuyingStatuslist

```asm
// === 085eed08 CQuestShop::clearBuyingStatuslist  [0x085eed08-0x85eed29] ===
 85eed08:	55                   	push   %ebp
 85eed09:	89 e5                	mov    %esp,%ebp
 85eed0b:	83 ec 18             	sub    $0x18,%esp
 85eed0e:	8b 45 08             	mov    0x8(%ebp),%eax
 85eed11:	89 04 24             	mov    %eax,(%esp)
 85eed14:	e8 ab 9e ad ff       	call   80c8bc4 <_ZN13charac_expand5CData5alterEv>
 85eed19:	8b 45 08             	mov    0x8(%ebp),%eax
 85eed1c:	83 c0 08             	add    $0x8,%eax
 85eed1f:	89 04 24             	mov    %eax,(%esp)
 85eed22:	e8 95 69 d9 ff       	call   83856bc <_ZNSt3mapIhsSt4lessIhESaISt4pairIKhsEEE5clearEv>
 85eed27:	c9                   	leave
 85eed28:	c3                   	ret
 85eed29:	90                   	nop

```

```c
// CQuestShop::clearBuyingStatuslist @ 0x85eed08

/* CQuestShop::clearBuyingStatuslist() */

void __thiscall CQuestShop::clearBuyingStatuslist(CQuestShop *this)

{
  charac_expand::CData::alter((CData *)this);
  std::
  map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
  ::clear((map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
           *)(this + 8));
  return;
}

```

---

## clearQP

```asm
// === 085ef54c CQuestShop::clearQP  [0x085ef54c-0x85ef5db] ===
 85ef54c:	55                   	push   %ebp
 85ef54d:	89 e5                	mov    %esp,%ebp
 85ef54f:	83 ec 38             	sub    $0x38,%esp
 85ef552:	8b 45 08             	mov    0x8(%ebp),%eax
 85ef555:	89 04 24             	mov    %eax,(%esp)
 85ef558:	e8 53 09 00 00       	call   85efeb0 <_ZNK10CQuestShop5getQpEv>
 85ef55d:	89 45 ec             	mov    %eax,-0x14(%ebp)
 85ef560:	8b 45 0c             	mov    0xc(%ebp),%eax
 85ef563:	89 04 24             	mov    %eax,(%esp)
 85ef566:	e8 91 b8 09 00       	call   868adfc <_ZN5CUser17setInitQuestPointEv>
 85ef56b:	8b 45 08             	mov    0x8(%ebp),%eax
 85ef56e:	89 04 24             	mov    %eax,(%esp)
 85ef571:	e8 c2 09 00 00       	call   85eff38 <_ZNK10CQuestShop9getInitQpEv>
 85ef576:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85ef579:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85ef57c:	89 44 24 04          	mov    %eax,0x4(%esp)
 85ef580:	8b 45 08             	mov    0x8(%ebp),%eax
 85ef583:	89 04 24             	mov    %eax,(%esp)
 85ef586:	e8 55 09 00 00       	call   85efee0 <_ZN10CQuestShop5setQpEi>
 85ef58b:	8b 45 08             	mov    0x8(%ebp),%eax
 85ef58e:	89 04 24             	mov    %eax,(%esp)
 85ef591:	e8 72 f7 ff ff       	call   85eed08 <_ZN10CQuestShop21clearBuyingStatuslistEv>
 85ef596:	8b 45 08             	mov    0x8(%ebp),%eax
 85ef599:	89 04 24             	mov    %eax,(%esp)
 85ef59c:	e8 0f 09 00 00       	call   85efeb0 <_ZNK10CQuestShop5getQpEv>
 85ef5a1:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85ef5a4:	8b 45 08             	mov    0x8(%ebp),%eax
 85ef5a7:	89 04 24             	mov    %eax,(%esp)
 85ef5aa:	e8 5b 09 00 00       	call   85eff0a <_ZNK10CQuestShop12getInitCountEv>
 85ef5af:	8b 55 0c             	mov    0xc(%ebp),%edx
 85ef5b2:	81 c2 00 97 07 00    	add    $0x79700,%edx
 85ef5b8:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 85ef5bf:	00 
 85ef5c0:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85ef5c4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85ef5c7:	89 44 24 08          	mov    %eax,0x8(%esp)
 85ef5cb:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85ef5ce:	89 44 24 04          	mov    %eax,0x4(%esp)
 85ef5d2:	89 14 24             	mov    %edx,(%esp)
 85ef5d5:	e8 e4 92 09 00       	call   86888be <_ZN15cUserHistoryLog11ClearUsedQPEiiii>
 85ef5da:	c9                   	leave
 85ef5db:	c3                   	ret

```

```c
// CQuestShop::clearQP @ 0x85ef54c

/* CQuestShop::clearQP(CUser*) */

void __thiscall CQuestShop::clearQP(CQuestShop *this,CUser *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = getQp(this);
  CUser::setInitQuestPoint(param_1);
  iVar2 = getInitQp(this);
  setQp(this,iVar2);
  clearBuyingStatuslist(this);
  iVar2 = getQp(this);
  iVar3 = getInitCount(this);
  cUserHistoryLog::ClearUsedQP((cUserHistoryLog *)(param_1 + 0x79700),iVar1,iVar2,iVar3,0);
  return;
}

```

---

## clearUsedQp

```asm
// === 085ef426 CQuestShop::clearUsedQp  [0x085ef426-0x85ef54b] ===
 85ef426:	55                   	push   %ebp
 85ef427:	89 e5                	mov    %esp,%ebp
 85ef429:	83 ec 38             	sub    $0x38,%esp
 85ef42c:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 85ef433:	8b 45 08             	mov    0x8(%ebp),%eax
 85ef436:	89 04 24             	mov    %eax,(%esp)
 85ef439:	e8 cc 0a 00 00       	call   85eff0a <_ZNK10CQuestShop12getInitCountEv>
 85ef43e:	89 44 24 04          	mov    %eax,0x4(%esp)
 85ef442:	8b 45 08             	mov    0x8(%ebp),%eax
 85ef445:	89 04 24             	mov    %eax,(%esp)
 85ef448:	e8 6d fd ff ff       	call   85ef1ba <_ZN10CQuestShop11getInitCostEi>
 85ef44d:	89 45 ec             	mov    %eax,-0x14(%ebp)
 85ef450:	8b 45 0c             	mov    0xc(%ebp),%eax
 85ef453:	89 04 24             	mov    %eax,(%esp)
 85ef456:	e8 23 ae ae ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 85ef45b:	89 04 24             	mov    %eax,(%esp)
 85ef45e:	e8 73 53 b4 ff       	call   81347d6 <_ZNK10CInventory9get_moneyEv>
 85ef463:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 85ef466:	0f 9c c0             	setl   %al
 85ef469:	84 c0                	test   %al,%al
 85ef46b:	74 0a                	je     85ef477 <_ZN10CQuestShop11clearUsedQpEP5CUser+0x51>
 85ef46d:	b8 0a 00 00 00       	mov    $0xa,%eax
 85ef472:	e9 d2 00 00 00       	jmp    85ef549 <_ZN10CQuestShop11clearUsedQpEP5CUser+0x123>
 85ef477:	8b 45 0c             	mov    0xc(%ebp),%eax
 85ef47a:	89 04 24             	mov    %eax,(%esp)
 85ef47d:	e8 0c ae ae ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 85ef482:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 85ef489:	00 
 85ef48a:	c7 44 24 08 2b 00 00 	movl   $0x2b,0x8(%esp)
 85ef491:	00 
 85ef492:	8b 55 ec             	mov    -0x14(%ebp),%edx
 85ef495:	89 54 24 04          	mov    %edx,0x4(%esp)
 85ef499:	89 04 24             	mov    %eax,(%esp)
 85ef49c:	e8 ab 00 f1 ff       	call   84ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>
 85ef4a1:	83 f0 01             	xor    $0x1,%eax
 85ef4a4:	84 c0                	test   %al,%al
 85ef4a6:	74 0a                	je     85ef4b2 <_ZN10CQuestShop11clearUsedQpEP5CUser+0x8c>
 85ef4a8:	b8 01 00 00 00       	mov    $0x1,%eax
 85ef4ad:	e9 97 00 00 00       	jmp    85ef549 <_ZN10CQuestShop11clearUsedQpEP5CUser+0x123>
 85ef4b2:	8b 45 08             	mov    0x8(%ebp),%eax
 85ef4b5:	89 04 24             	mov    %eax,(%esp)
 85ef4b8:	e8 f3 09 00 00       	call   85efeb0 <_ZNK10CQuestShop5getQpEv>
 85ef4bd:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85ef4c0:	8b 45 08             	mov    0x8(%ebp),%eax
 85ef4c3:	89 04 24             	mov    %eax,(%esp)
 85ef4c6:	e8 4b 0a 00 00       	call   85eff16 <_ZN10CQuestShop12incInitCountEv>
 85ef4cb:	8b 45 0c             	mov    0xc(%ebp),%eax
 85ef4ce:	89 04 24             	mov    %eax,(%esp)
 85ef4d1:	e8 26 b9 09 00       	call   868adfc <_ZN5CUser17setInitQuestPointEv>
 85ef4d6:	8b 45 08             	mov    0x8(%ebp),%eax
 85ef4d9:	89 04 24             	mov    %eax,(%esp)
 85ef4dc:	e8 57 0a 00 00       	call   85eff38 <_ZNK10CQuestShop9getInitQpEv>
 85ef4e1:	89 45 e8             	mov    %eax,-0x18(%ebp)
 85ef4e4:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85ef4e7:	89 44 24 04          	mov    %eax,0x4(%esp)
 85ef4eb:	8b 45 08             	mov    0x8(%ebp),%eax
 85ef4ee:	89 04 24             	mov    %eax,(%esp)
 85ef4f1:	e8 ea 09 00 00       	call   85efee0 <_ZN10CQuestShop5setQpEi>
 85ef4f6:	8b 45 08             	mov    0x8(%ebp),%eax
 85ef4f9:	89 04 24             	mov    %eax,(%esp)
 85ef4fc:	e8 07 f8 ff ff       	call   85eed08 <_ZN10CQuestShop21clearBuyingStatuslistEv>
 85ef501:	8b 45 08             	mov    0x8(%ebp),%eax
 85ef504:	89 04 24             	mov    %eax,(%esp)
 85ef507:	e8 a4 09 00 00       	call   85efeb0 <_ZNK10CQuestShop5getQpEv>
 85ef50c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85ef50f:	8b 45 08             	mov    0x8(%ebp),%eax
 85ef512:	89 04 24             	mov    %eax,(%esp)
 85ef515:	e8 f0 09 00 00       	call   85eff0a <_ZNK10CQuestShop12getInitCountEv>
 85ef51a:	8b 55 0c             	mov    0xc(%ebp),%edx
 85ef51d:	8d 8a 00 97 07 00    	lea    0x79700(%edx),%ecx
 85ef523:	8b 55 ec             	mov    -0x14(%ebp),%edx
 85ef526:	89 54 24 10          	mov    %edx,0x10(%esp)
 85ef52a:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85ef52e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85ef531:	89 44 24 08          	mov    %eax,0x8(%esp)
 85ef535:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85ef538:	89 44 24 04          	mov    %eax,0x4(%esp)
 85ef53c:	89 0c 24             	mov    %ecx,(%esp)
 85ef53f:	e8 7a 93 09 00       	call   86888be <_ZN15cUserHistoryLog11ClearUsedQPEiiii>
 85ef544:	b8 00 00 00 00       	mov    $0x0,%eax
 85ef549:	c9                   	leave
 85ef54a:	c3                   	ret
 85ef54b:	90                   	nop

```

```c
// CQuestShop::clearUsedQp @ 0x85ef426

/* CQuestShop::clearUsedQp(CUser*) */

undefined4 __thiscall CQuestShop::clearUsedQp(CQuestShop *this,CUser *param_1)

{
  char cVar1;
  int iVar2;
  CInventory *pCVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  iVar2 = getInitCount(this);
  iVar2 = getInitCost(this,iVar2);
  pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  iVar4 = CInventory::get_money(pCVar3);
  if (iVar4 < iVar2) {
    uVar5 = 10;
  }
  else {
    pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    cVar1 = CInventory::use_money(pCVar3,iVar2,0x2b,1);
    if (cVar1 == '\x01') {
      iVar4 = getQp(this);
      incInitCount(this);
      CUser::setInitQuestPoint(param_1);
      iVar6 = getInitQp(this);
      setQp(this,iVar6);
      clearBuyingStatuslist(this);
      iVar6 = getQp(this);
      iVar7 = getInitCount(this);
      cUserHistoryLog::ClearUsedQP((cUserHistoryLog *)(param_1 + 0x79700),iVar4,iVar6,iVar7,iVar2);
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
  }
  return uVar5;
}

```

---

## findStatusQp

```asm
// === 085eeda8 CQuestShop::findStatusQp  [0x085eeda8-0x85eee69] ===
 85eeda8:	55                   	push   %ebp
 85eeda9:	89 e5                	mov    %esp,%ebp
 85eedab:	56                   	push   %esi
 85eedac:	53                   	push   %ebx
 85eedad:	83 ec 50             	sub    $0x50,%esp
 85eedb0:	8b 45 0c             	mov    0xc(%ebp),%eax
 85eedb3:	88 45 c4             	mov    %al,-0x3c(%ebp)
 85eedb6:	e8 e0 d3 ad ff       	call   80cc19b <_Z14G_CDataManagerv>
 85eedbb:	05 98 63 00 00       	add    $0x6398,%eax
 85eedc0:	89 44 24 04          	mov    %eax,0x4(%esp)
 85eedc4:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85eedc7:	89 04 24             	mov    %eax,(%esp)
 85eedca:	e8 81 11 00 00       	call   85eff50 <_ZNSt3mapIi17stQuestShopStatusSt4lessIiESaISt4pairIKiS0_EEEC1ERKS7_>
 85eedcf:	0f b6 45 c4          	movzbl -0x3c(%ebp),%eax
 85eedd3:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85eedd6:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85eedd9:	8d 55 f0             	lea    -0x10(%ebp),%edx
 85eeddc:	89 54 24 08          	mov    %edx,0x8(%esp)
 85eede0:	8d 55 d8             	lea    -0x28(%ebp),%edx
 85eede3:	89 54 24 04          	mov    %edx,0x4(%esp)
 85eede7:	89 04 24             	mov    %eax,(%esp)
 85eedea:	e8 7b 11 00 00       	call   85eff6a <_ZNSt3mapIi17stQuestShopStatusSt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 85eedef:	83 ec 04             	sub    $0x4,%esp
 85eedf2:	8d 45 f4             	lea    -0xc(%ebp),%eax
 85eedf5:	8d 55 d8             	lea    -0x28(%ebp),%edx
 85eedf8:	89 54 24 04          	mov    %edx,0x4(%esp)
 85eedfc:	89 04 24             	mov    %eax,(%esp)
 85eedff:	e8 92 11 00 00       	call   85eff96 <_ZNSt3mapIi17stQuestShopStatusSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 85eee04:	83 ec 04             	sub    $0x4,%esp
 85eee07:	8d 45 f4             	lea    -0xc(%ebp),%eax
 85eee0a:	89 44 24 04          	mov    %eax,0x4(%esp)
 85eee0e:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85eee11:	89 04 24             	mov    %eax,(%esp)
 85eee14:	e8 a3 11 00 00       	call   85effbc <_ZNKSt17_Rb_tree_iteratorISt4pairIKi17stQuestShopStatusEEneERKS4_>
 85eee19:	84 c0                	test   %al,%al
 85eee1b:	74 14                	je     85eee31 <_ZN10CQuestShop12findStatusQpEh+0x89>
 85eee1d:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85eee20:	89 04 24             	mov    %eax,(%esp)
 85eee23:	e8 a8 11 00 00       	call   85effd0 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi17stQuestShopStatusEEptEv>
 85eee28:	0f b6 40 18          	movzbl 0x18(%eax),%eax
 85eee2c:	0f b6 d8             	movzbl %al,%ebx
 85eee2f:	eb 22                	jmp    85eee53 <_ZN10CQuestShop12findStatusQpEh+0xab>
 85eee31:	bb ff ff ff ff       	mov    $0xffffffff,%ebx
 85eee36:	eb 1b                	jmp    85eee53 <_ZN10CQuestShop12findStatusQpEh+0xab>
 85eee38:	89 d3                	mov    %edx,%ebx
 85eee3a:	89 c6                	mov    %eax,%esi
 85eee3c:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85eee3f:	89 04 24             	mov    %eax,(%esp)
 85eee42:	e8 79 22 d8 ff       	call   83710c0 <_ZNSt3mapIi17stQuestShopStatusSt4lessIiESaISt4pairIKiS0_EEED1Ev>
 85eee47:	89 f0                	mov    %esi,%eax
 85eee49:	89 da                	mov    %ebx,%edx
 85eee4b:	89 04 24             	mov    %eax,(%esp)
 85eee4e:	e8 fd 48 4f 00       	call   8ae3750 <_Unwind_Resume>
 85eee53:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85eee56:	89 04 24             	mov    %eax,(%esp)
 85eee59:	e8 62 22 d8 ff       	call   83710c0 <_ZNSt3mapIi17stQuestShopStatusSt4lessIiESaISt4pairIKiS0_EEED1Ev>
 85eee5e:	89 d8                	mov    %ebx,%eax
 85eee60:	8d 65 f8             	lea    -0x8(%ebp),%esp
 85eee63:	83 c4 00             	add    $0x0,%esp
 85eee66:	5b                   	pop    %ebx
 85eee67:	5e                   	pop    %esi
 85eee68:	5d                   	pop    %ebp
 85eee69:	c3                   	ret

```

```c
// CQuestShop::findStatusQp @ 0x85eeda8

/* CQuestShop::findStatusQp(unsigned char) */

uint __thiscall CQuestShop::findStatusQp(CQuestShop *this,uchar param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  _Rb_tree_iterator<std::pair<int_const,stQuestShopStatus>> local_30 [4];
  map<int,stQuestShopStatus,std::less<int>,std::allocator<std::pair<int_const,stQuestShopStatus>>>
  local_2c [24];
  uint local_14;
  map<int,stQuestShopStatus,std::less<int>,std::allocator<std::pair<int_const,stQuestShopStatus>>>
  local_10 [4];
  
  iVar2 = G_CDataManager();
  std::
  map<int,stQuestShopStatus,std::less<int>,std::allocator<std::pair<int_const,stQuestShopStatus>>>::
  map(local_2c,(map *)(iVar2 + 0x6398));
  local_14 = (uint)param_1;
                    /* try { // try from 085eedea to 085eee03 has its CatchHandler @ 085eee38 */
  std::
  map<int,stQuestShopStatus,std::less<int>,std::allocator<std::pair<int_const,stQuestShopStatus>>>::
  find((int *)local_30);
  std::
  map<int,stQuestShopStatus,std::less<int>,std::allocator<std::pair<int_const,stQuestShopStatus>>>::
  end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,stQuestShopStatus>>::operator!=
                    (local_30,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0xffffffff;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,stQuestShopStatus>>::operator->(local_30);
    uVar3 = (uint)*(byte *)(iVar2 + 0x18);
  }
  std::
  map<int,stQuestShopStatus,std::less<int>,std::allocator<std::pair<int_const,stQuestShopStatus>>>::
  ~map(local_2c);
  return uVar3;
}

```

---

## findStatusType

```asm
// === 085eee6a CQuestShop::findStatusType  [0x085eee6a-0x85eef27] ===
 85eee6a:	55                   	push   %ebp
 85eee6b:	89 e5                	mov    %esp,%ebp
 85eee6d:	56                   	push   %esi
 85eee6e:	53                   	push   %ebx
 85eee6f:	83 ec 50             	sub    $0x50,%esp
 85eee72:	8b 45 0c             	mov    0xc(%ebp),%eax
 85eee75:	88 45 c4             	mov    %al,-0x3c(%ebp)
 85eee78:	e8 1e d3 ad ff       	call   80cc19b <_Z14G_CDataManagerv>
 85eee7d:	05 98 63 00 00       	add    $0x6398,%eax
 85eee82:	89 44 24 04          	mov    %eax,0x4(%esp)
 85eee86:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85eee89:	89 04 24             	mov    %eax,(%esp)
 85eee8c:	e8 bf 10 00 00       	call   85eff50 <_ZNSt3mapIi17stQuestShopStatusSt4lessIiESaISt4pairIKiS0_EEEC1ERKS7_>
 85eee91:	0f b6 45 c4          	movzbl -0x3c(%ebp),%eax
 85eee95:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85eee98:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85eee9b:	8d 55 f0             	lea    -0x10(%ebp),%edx
 85eee9e:	89 54 24 08          	mov    %edx,0x8(%esp)
 85eeea2:	8d 55 d8             	lea    -0x28(%ebp),%edx
 85eeea5:	89 54 24 04          	mov    %edx,0x4(%esp)
 85eeea9:	89 04 24             	mov    %eax,(%esp)
 85eeeac:	e8 b9 10 00 00       	call   85eff6a <_ZNSt3mapIi17stQuestShopStatusSt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 85eeeb1:	83 ec 04             	sub    $0x4,%esp
 85eeeb4:	8d 45 f4             	lea    -0xc(%ebp),%eax
 85eeeb7:	8d 55 d8             	lea    -0x28(%ebp),%edx
 85eeeba:	89 54 24 04          	mov    %edx,0x4(%esp)
 85eeebe:	89 04 24             	mov    %eax,(%esp)
 85eeec1:	e8 d0 10 00 00       	call   85eff96 <_ZNSt3mapIi17stQuestShopStatusSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 85eeec6:	83 ec 04             	sub    $0x4,%esp
 85eeec9:	8d 45 f4             	lea    -0xc(%ebp),%eax
 85eeecc:	89 44 24 04          	mov    %eax,0x4(%esp)
 85eeed0:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85eeed3:	89 04 24             	mov    %eax,(%esp)
 85eeed6:	e8 e1 10 00 00       	call   85effbc <_ZNKSt17_Rb_tree_iteratorISt4pairIKi17stQuestShopStatusEEneERKS4_>
 85eeedb:	84 c0                	test   %al,%al
 85eeedd:	74 10                	je     85eeeef <_ZN10CQuestShop14findStatusTypeEh+0x85>
 85eeedf:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85eeee2:	89 04 24             	mov    %eax,(%esp)
 85eeee5:	e8 e6 10 00 00       	call   85effd0 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi17stQuestShopStatusEEptEv>
 85eeeea:	8b 58 1c             	mov    0x1c(%eax),%ebx
 85eeeed:	eb 22                	jmp    85eef11 <_ZN10CQuestShop14findStatusTypeEh+0xa7>
 85eeeef:	bb 4d 00 00 00       	mov    $0x4d,%ebx
 85eeef4:	eb 1b                	jmp    85eef11 <_ZN10CQuestShop14findStatusTypeEh+0xa7>
 85eeef6:	89 d3                	mov    %edx,%ebx
 85eeef8:	89 c6                	mov    %eax,%esi
 85eeefa:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85eeefd:	89 04 24             	mov    %eax,(%esp)
 85eef00:	e8 bb 21 d8 ff       	call   83710c0 <_ZNSt3mapIi17stQuestShopStatusSt4lessIiESaISt4pairIKiS0_EEED1Ev>
 85eef05:	89 f0                	mov    %esi,%eax
 85eef07:	89 da                	mov    %ebx,%edx
 85eef09:	89 04 24             	mov    %eax,(%esp)
 85eef0c:	e8 3f 48 4f 00       	call   8ae3750 <_Unwind_Resume>
 85eef11:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85eef14:	89 04 24             	mov    %eax,(%esp)
 85eef17:	e8 a4 21 d8 ff       	call   83710c0 <_ZNSt3mapIi17stQuestShopStatusSt4lessIiESaISt4pairIKiS0_EEED1Ev>
 85eef1c:	89 d8                	mov    %ebx,%eax
 85eef1e:	8d 65 f8             	lea    -0x8(%ebp),%esp
 85eef21:	83 c4 00             	add    $0x0,%esp
 85eef24:	5b                   	pop    %ebx
 85eef25:	5e                   	pop    %esi
 85eef26:	5d                   	pop    %ebp
 85eef27:	c3                   	ret

```

```c
// CQuestShop::findStatusType @ 0x85eee6a

/* CQuestShop::findStatusType(unsigned char) */

undefined4 __thiscall CQuestShop::findStatusType(CQuestShop *this,uchar param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_iterator<std::pair<int_const,stQuestShopStatus>> local_30 [4];
  map<int,stQuestShopStatus,std::less<int>,std::allocator<std::pair<int_const,stQuestShopStatus>>>
  local_2c [24];
  uint local_14;
  map<int,stQuestShopStatus,std::less<int>,std::allocator<std::pair<int_const,stQuestShopStatus>>>
  local_10 [4];
  
  iVar2 = G_CDataManager();
  std::
  map<int,stQuestShopStatus,std::less<int>,std::allocator<std::pair<int_const,stQuestShopStatus>>>::
  map(local_2c,(map *)(iVar2 + 0x6398));
  local_14 = (uint)param_1;
                    /* try { // try from 085eeeac to 085eeec5 has its CatchHandler @ 085eeef6 */
  std::
  map<int,stQuestShopStatus,std::less<int>,std::allocator<std::pair<int_const,stQuestShopStatus>>>::
  find((int *)local_30);
  std::
  map<int,stQuestShopStatus,std::less<int>,std::allocator<std::pair<int_const,stQuestShopStatus>>>::
  end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,stQuestShopStatus>>::operator!=
                    (local_30,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0x4d;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,stQuestShopStatus>>::operator->(local_30);
    uVar3 = *(undefined4 *)(iVar2 + 0x1c);
  }
  std::
  map<int,stQuestShopStatus,std::less<int>,std::allocator<std::pair<int_const,stQuestShopStatus>>>::
  ~map(local_2c);
  return uVar3;
}

```

---

## getData

```asm
// === 085ef868 CQuestShop::getData  [0x085ef868-0x85efa2b] ===
 85ef868:	55                   	push   %ebp
 85ef869:	89 e5                	mov    %esp,%ebp
 85ef86b:	83 ec 48             	sub    $0x48,%esp
 85ef86e:	8b 45 0c             	mov    0xc(%ebp),%eax
 85ef871:	89 45 e8             	mov    %eax,-0x18(%ebp)
 85ef874:	c7 44 24 08 55 01 00 	movl   $0x155,0x8(%esp)
 85ef87b:	00 
 85ef87c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85ef883:	00 
 85ef884:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85ef887:	89 04 24             	mov    %eax,(%esp)
 85ef88a:	e8 31 e4 a8 ff       	call   807dcc0 <memset@plt>
 85ef88f:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85ef892:	89 45 ec             	mov    %eax,-0x14(%ebp)
 85ef895:	8b 45 08             	mov    0x8(%ebp),%eax
 85ef898:	89 04 24             	mov    %eax,(%esp)
 85ef89b:	e8 10 06 00 00       	call   85efeb0 <_ZNK10CQuestShop5getQpEv>
 85ef8a0:	89 c2                	mov    %eax,%edx
 85ef8a2:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85ef8a5:	89 50 04             	mov    %edx,0x4(%eax)
 85ef8a8:	8b 45 08             	mov    0x8(%ebp),%eax
 85ef8ab:	89 04 24             	mov    %eax,(%esp)
 85ef8ae:	e8 57 06 00 00       	call   85eff0a <_ZNK10CQuestShop12getInitCountEv>
 85ef8b3:	89 c2                	mov    %eax,%edx
 85ef8b5:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85ef8b8:	89 50 08             	mov    %edx,0x8(%eax)
 85ef8bb:	8b 45 08             	mov    0x8(%ebp),%eax
 85ef8be:	89 04 24             	mov    %eax,(%esp)
 85ef8c1:	e8 7e 06 00 00       	call   85eff44 <_ZNK10CQuestShop8getPieceEv>
 85ef8c6:	89 c2                	mov    %eax,%edx
 85ef8c8:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85ef8cb:	89 90 a6 00 00 00    	mov    %edx,0xa6(%eax)
 85ef8d1:	8b 45 08             	mov    0x8(%ebp),%eax
 85ef8d4:	8d 50 08             	lea    0x8(%eax),%edx
 85ef8d7:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85ef8da:	89 54 24 04          	mov    %edx,0x4(%esp)
 85ef8de:	89 04 24             	mov    %eax,(%esp)
 85ef8e1:	e8 3e 48 e6 ff       	call   8454124 <_ZNKSt3mapIhsSt4lessIhESaISt4pairIKhsEEE3endEv>
 85ef8e6:	83 ec 04             	sub    $0x4,%esp
 85ef8e9:	8b 45 08             	mov    0x8(%ebp),%eax
 85ef8ec:	8d 50 08             	lea    0x8(%eax),%edx
 85ef8ef:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85ef8f2:	89 54 24 04          	mov    %edx,0x4(%esp)
 85ef8f6:	89 04 24             	mov    %eax,(%esp)
 85ef8f9:	e8 00 48 e6 ff       	call   84540fe <_ZNKSt3mapIhsSt4lessIhESaISt4pairIKhsEEE5beginEv>
 85ef8fe:	83 ec 04             	sub    $0x4,%esp
 85ef901:	eb 59                	jmp    85ef95c <_ZNK10CQuestShop7getDataEPc+0xf4>
 85ef903:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85ef906:	89 04 24             	mov    %eax,(%esp)
 85ef909:	e8 50 48 e6 ff       	call   845415e <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKhsEEptEv>
 85ef90e:	0f b6 00             	movzbl (%eax),%eax
 85ef911:	88 45 f1             	mov    %al,-0xf(%ebp)
 85ef914:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85ef917:	89 04 24             	mov    %eax,(%esp)
 85ef91a:	e8 3f 48 e6 ff       	call   845415e <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKhsEEptEv>
 85ef91f:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 85ef923:	66 89 45 f2          	mov    %ax,-0xe(%ebp)
 85ef927:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85ef92a:	89 04 24             	mov    %eax,(%esp)
 85ef92d:	e8 2c 48 e6 ff       	call   845415e <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKhsEEptEv>
 85ef932:	0f b6 00             	movzbl (%eax),%eax
 85ef935:	3c 4c                	cmp    $0x4c,%al
 85ef937:	0f 97 c0             	seta   %al
 85ef93a:	84 c0                	test   %al,%al
 85ef93c:	75 12                	jne    85ef950 <_ZNK10CQuestShop7getDataEPc+0xe8>
 85ef93e:	0f b6 55 f1          	movzbl -0xf(%ebp),%edx
 85ef942:	0f b7 4d f2          	movzwl -0xe(%ebp),%ecx
 85ef946:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85ef949:	66 89 4c 50 0c       	mov    %cx,0xc(%eax,%edx,2)
 85ef94e:	eb 01                	jmp    85ef951 <_ZNK10CQuestShop7getDataEPc+0xe9>
 85ef950:	90                   	nop
 85ef951:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85ef954:	89 04 24             	mov    %eax,(%esp)
 85ef957:	e8 10 48 e6 ff       	call   845416c <_ZNSt23_Rb_tree_const_iteratorISt4pairIKhsEEppEv>
 85ef95c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85ef95f:	89 44 24 04          	mov    %eax,0x4(%esp)
 85ef963:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85ef966:	89 04 24             	mov    %eax,(%esp)
 85ef969:	e8 dc 47 e6 ff       	call   845414a <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKhsEEneERKS3_>
 85ef96e:	84 c0                	test   %al,%al
 85ef970:	75 91                	jne    85ef903 <_ZNK10CQuestShop7getDataEPc+0x9b>
 85ef972:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85ef975:	05 aa 00 00 00       	add    $0xaa,%eax
 85ef97a:	89 45 ec             	mov    %eax,-0x14(%ebp)
 85ef97d:	8b 45 08             	mov    0x8(%ebp),%eax
 85ef980:	8d 50 20             	lea    0x20(%eax),%edx
 85ef983:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85ef986:	89 54 24 04          	mov    %edx,0x4(%esp)
 85ef98a:	89 04 24             	mov    %eax,(%esp)
 85ef98d:	e8 6c 47 e6 ff       	call   84540fe <_ZNKSt3mapIhsSt4lessIhESaISt4pairIKhsEEE5beginEv>
 85ef992:	83 ec 04             	sub    $0x4,%esp
 85ef995:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 85ef998:	89 45 e0             	mov    %eax,-0x20(%ebp)
 85ef99b:	8b 45 08             	mov    0x8(%ebp),%eax
 85ef99e:	8d 50 20             	lea    0x20(%eax),%edx
 85ef9a1:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85ef9a4:	89 54 24 04          	mov    %edx,0x4(%esp)
 85ef9a8:	89 04 24             	mov    %eax,(%esp)
 85ef9ab:	e8 74 47 e6 ff       	call   8454124 <_ZNKSt3mapIhsSt4lessIhESaISt4pairIKhsEEE3endEv>
 85ef9b0:	83 ec 04             	sub    $0x4,%esp
 85ef9b3:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 85ef9b6:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 85ef9b9:	eb 59                	jmp    85efa14 <_ZNK10CQuestShop7getDataEPc+0x1ac>
 85ef9bb:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85ef9be:	89 04 24             	mov    %eax,(%esp)
 85ef9c1:	e8 98 47 e6 ff       	call   845415e <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKhsEEptEv>
 85ef9c6:	0f b6 00             	movzbl (%eax),%eax
 85ef9c9:	88 45 f5             	mov    %al,-0xb(%ebp)
 85ef9cc:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85ef9cf:	89 04 24             	mov    %eax,(%esp)
 85ef9d2:	e8 87 47 e6 ff       	call   845415e <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKhsEEptEv>
 85ef9d7:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 85ef9db:	66 89 45 f6          	mov    %ax,-0xa(%ebp)
 85ef9df:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85ef9e2:	89 04 24             	mov    %eax,(%esp)
 85ef9e5:	e8 74 47 e6 ff       	call   845415e <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKhsEEptEv>
 85ef9ea:	0f b6 00             	movzbl (%eax),%eax
 85ef9ed:	3c 4c                	cmp    $0x4c,%al
 85ef9ef:	0f 97 c0             	seta   %al
 85ef9f2:	84 c0                	test   %al,%al
 85ef9f4:	75 12                	jne    85efa08 <_ZNK10CQuestShop7getDataEPc+0x1a0>
 85ef9f6:	0f b6 55 f5          	movzbl -0xb(%ebp),%edx
 85ef9fa:	0f b7 4d f6          	movzwl -0xa(%ebp),%ecx
 85ef9fe:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85efa01:	66 89 4c 50 0c       	mov    %cx,0xc(%eax,%edx,2)
 85efa06:	eb 01                	jmp    85efa09 <_ZNK10CQuestShop7getDataEPc+0x1a1>
 85efa08:	90                   	nop
 85efa09:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85efa0c:	89 04 24             	mov    %eax,(%esp)
 85efa0f:	e8 58 47 e6 ff       	call   845416c <_ZNSt23_Rb_tree_const_iteratorISt4pairIKhsEEppEv>
 85efa14:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85efa17:	89 44 24 04          	mov    %eax,0x4(%esp)
 85efa1b:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85efa1e:	89 04 24             	mov    %eax,(%esp)
 85efa21:	e8 24 47 e6 ff       	call   845414a <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKhsEEneERKS3_>
 85efa26:	84 c0                	test   %al,%al
 85efa28:	75 91                	jne    85ef9bb <_ZNK10CQuestShop7getDataEPc+0x153>
 85efa2a:	c9                   	leave
 85efa2b:	c3                   	ret

```

```c
// CQuestShop::getData @ 0x85ef868

/* CQuestShop::getData(char*) const */

void __thiscall CQuestShop::getData(CQuestShop *this,char *param_1)

{
  char cVar1;
  undefined4 uVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 local_30 [3];
  undefined4 local_24;
  undefined4 local_20;
  char *local_1c;
  char *local_18;
  byte local_13;
  undefined2 local_12;
  byte local_f;
  undefined2 local_e;
  
  local_1c = param_1;
  memset(param_1,0,0x155);
  local_18 = local_1c;
  uVar2 = getQp(this);
  *(undefined4 *)(local_18 + 4) = uVar2;
  uVar2 = getInitCount(this);
  *(undefined4 *)(local_18 + 8) = uVar2;
  uVar2 = getPiece(this);
  *(undefined4 *)(local_18 + 0xa6) = uVar2;
  std::
  map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
  ::end((map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
         *)&local_20);
  std::
  map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
  ::begin((map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
           *)&local_24);
  while( true ) {
    cVar1 = std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,short>>::operator!=
                      ((_Rb_tree_const_iterator<std::pair<unsigned_char_const,short>> *)&local_24,
                       (_Rb_tree_const_iterator *)&local_20);
    if (cVar1 == '\0') break;
    pbVar3 = (byte *)std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,short>>::operator->
                               ((_Rb_tree_const_iterator<std::pair<unsigned_char_const,short>> *)
                                &local_24);
    local_13 = *pbVar3;
    iVar4 = std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,short>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<unsigned_char_const,short>> *)&local_24);
    local_12 = *(undefined2 *)(iVar4 + 2);
    pbVar3 = (byte *)std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,short>>::operator->
                               ((_Rb_tree_const_iterator<std::pair<unsigned_char_const,short>> *)
                                &local_24);
    if (*pbVar3 < 0x4d) {
      *(undefined2 *)(local_18 + (uint)local_13 * 2 + 0xc) = local_12;
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,short>>::operator++
              ((_Rb_tree_const_iterator<std::pair<unsigned_char_const,short>> *)&local_24);
  }
  local_18 = local_1c + 0xaa;
  std::
  map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
  ::begin((map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
           *)local_30);
  local_24 = local_30[0];
  std::
  map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
  ::end((map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
         *)local_30);
  local_20 = local_30[0];
  while( true ) {
    cVar1 = std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,short>>::operator!=
                      ((_Rb_tree_const_iterator<std::pair<unsigned_char_const,short>> *)&local_24,
                       (_Rb_tree_const_iterator *)&local_20);
    if (cVar1 == '\0') break;
    pbVar3 = (byte *)std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,short>>::operator->
                               ((_Rb_tree_const_iterator<std::pair<unsigned_char_const,short>> *)
                                &local_24);
    local_f = *pbVar3;
    iVar4 = std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,short>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<unsigned_char_const,short>> *)&local_24);
    local_e = *(undefined2 *)(iVar4 + 2);
    pbVar3 = (byte *)std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,short>>::operator->
                               ((_Rb_tree_const_iterator<std::pair<unsigned_char_const,short>> *)
                                &local_24);
    if (*pbVar3 < 0x4d) {
      *(undefined2 *)(local_18 + (uint)local_f * 2 + 0xc) = local_e;
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,short>>::operator++
              ((_Rb_tree_const_iterator<std::pair<unsigned_char_const,short>> *)&local_24);
  }
  return;
}

```

---

## getInitCost

```asm
// === 085ef1ba CQuestShop::getInitCost  [0x085ef1ba-0x85ef213] ===
 85ef1ba:	55                   	push   %ebp
 85ef1bb:	89 e5                	mov    %esp,%ebp
 85ef1bd:	83 ec 18             	sub    $0x18,%esp
 85ef1c0:	e8 d6 cf ad ff       	call   80cc19b <_Z14G_CDataManagerv>
 85ef1c5:	8b 80 b4 63 00 00    	mov    0x63b4(%eax),%eax
 85ef1cb:	89 45 e8             	mov    %eax,-0x18(%ebp)
 85ef1ce:	e8 c8 cf ad ff       	call   80cc19b <_Z14G_CDataManagerv>
 85ef1d3:	8b 80 b8 63 00 00    	mov    0x63b8(%eax),%eax
 85ef1d9:	89 45 ec             	mov    %eax,-0x14(%ebp)
 85ef1dc:	e8 ba cf ad ff       	call   80cc19b <_Z14G_CDataManagerv>
 85ef1e1:	8b 80 bc 63 00 00    	mov    0x63bc(%eax),%eax
 85ef1e7:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85ef1ea:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 85ef1ee:	75 05                	jne    85ef1f5 <_ZN10CQuestShop11getInitCostEi+0x3b>
 85ef1f0:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85ef1f3:	eb 1d                	jmp    85ef212 <_ZN10CQuestShop11getInitCostEi+0x58>
 85ef1f5:	8b 45 0c             	mov    0xc(%ebp),%eax
 85ef1f8:	0f af 45 ec          	imul   -0x14(%ebp),%eax
 85ef1fc:	03 45 e8             	add    -0x18(%ebp),%eax
 85ef1ff:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85ef202:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85ef205:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 85ef208:	7c 05                	jl     85ef20f <_ZN10CQuestShop11getInitCostEi+0x55>
 85ef20a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85ef20d:	eb 03                	jmp    85ef212 <_ZN10CQuestShop11getInitCostEi+0x58>
 85ef20f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85ef212:	c9                   	leave
 85ef213:	c3                   	ret

```

```c
// CQuestShop::getInitCost @ 0x85ef1ba

/* CQuestShop::getInitCost(int) */

int __thiscall CQuestShop::getInitCost(CQuestShop *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = G_CDataManager();
  iVar1 = *(int *)(iVar1 + 0x63b4);
  iVar2 = G_CDataManager();
  iVar2 = *(int *)(iVar2 + 0x63b8);
  iVar3 = G_CDataManager();
  if ((param_1 != 0) && (iVar1 = param_1 * iVar2 + iVar1, *(int *)(iVar3 + 0x63bc) <= iVar1)) {
    iVar1 = *(int *)(iVar3 + 0x63bc);
  }
  return iVar1;
}

```

---

## getStatusBuyingCount

```asm
// === 085ef02e CQuestShop::getStatusBuyingCount  [0x085ef02e-0x85ef0cd] ===
 85ef02e:	55                   	push   %ebp
 85ef02f:	89 e5                	mov    %esp,%ebp
 85ef031:	83 ec 38             	sub    $0x38,%esp
 85ef034:	8b 45 0c             	mov    0xc(%ebp),%eax
 85ef037:	88 45 e4             	mov    %al,-0x1c(%ebp)
 85ef03a:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
 85ef03e:	89 44 24 04          	mov    %eax,0x4(%esp)
 85ef042:	8b 45 08             	mov    0x8(%ebp),%eax
 85ef045:	89 04 24             	mov    %eax,(%esp)
 85ef048:	e8 1d fe ff ff       	call   85eee6a <_ZN10CQuestShop14findStatusTypeEh>
 85ef04d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85ef050:	83 7d f4 4d          	cmpl   $0x4d,-0xc(%ebp)
 85ef054:	74 06                	je     85ef05c <_ZN10CQuestShop20getStatusBuyingCountEh+0x2e>
 85ef056:	83 7d f4 ff          	cmpl   $0xffffffff,-0xc(%ebp)
 85ef05a:	75 07                	jne    85ef063 <_ZN10CQuestShop20getStatusBuyingCountEh+0x35>
 85ef05c:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 85ef061:	eb 69                	jmp    85ef0cc <_ZN10CQuestShop20getStatusBuyingCountEh+0x9e>
 85ef063:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85ef066:	88 45 ef             	mov    %al,-0x11(%ebp)
 85ef069:	8b 45 08             	mov    0x8(%ebp),%eax
 85ef06c:	8d 48 08             	lea    0x8(%eax),%ecx
 85ef06f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85ef072:	8d 55 ef             	lea    -0x11(%ebp),%edx
 85ef075:	89 54 24 08          	mov    %edx,0x8(%esp)
 85ef079:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 85ef07d:	89 04 24             	mov    %eax,(%esp)
 85ef080:	e8 c1 0c eb ff       	call   849fd46 <_ZNSt3mapIhsSt4lessIhESaISt4pairIKhsEEE4findERS3_>
 85ef085:	83 ec 04             	sub    $0x4,%esp
 85ef088:	8b 45 08             	mov    0x8(%ebp),%eax
 85ef08b:	8d 50 08             	lea    0x8(%eax),%edx
 85ef08e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85ef091:	89 54 24 04          	mov    %edx,0x4(%esp)
 85ef095:	89 04 24             	mov    %eax,(%esp)
 85ef098:	e8 e3 10 e6 ff       	call   8450180 <_ZNSt3mapIhsSt4lessIhESaISt4pairIKhsEEE3endEv>
 85ef09d:	83 ec 04             	sub    $0x4,%esp
 85ef0a0:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85ef0a3:	89 44 24 04          	mov    %eax,0x4(%esp)
 85ef0a7:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85ef0aa:	89 04 24             	mov    %eax,(%esp)
 85ef0ad:	e8 f4 10 e6 ff       	call   84501a6 <_ZNKSt17_Rb_tree_iteratorISt4pairIKhsEEneERKS3_>
 85ef0b2:	84 c0                	test   %al,%al
 85ef0b4:	74 11                	je     85ef0c7 <_ZN10CQuestShop20getStatusBuyingCountEh+0x99>
 85ef0b6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85ef0b9:	89 04 24             	mov    %eax,(%esp)
 85ef0bc:	e8 f9 10 e6 ff       	call   84501ba <_ZNKSt17_Rb_tree_iteratorISt4pairIKhsEEptEv>
 85ef0c1:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 85ef0c5:	eb 05                	jmp    85ef0cc <_ZN10CQuestShop20getStatusBuyingCountEh+0x9e>
 85ef0c7:	b8 00 00 00 00       	mov    $0x0,%eax
 85ef0cc:	c9                   	leave
 85ef0cd:	c3                   	ret

```

```c
// CQuestShop::getStatusBuyingCount @ 0x85ef02e

/* CQuestShop::getStatusBuyingCount(unsigned char) */

uint __thiscall CQuestShop::getStatusBuyingCount(CQuestShop *this,uchar param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  _Rb_tree_iterator<std::pair<unsigned_char_const,short>> local_1c [7];
  undefined1 local_15;
  map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
  local_14 [4];
  int local_10;
  
  local_10 = findStatusType(this,param_1);
  if ((local_10 == 0x4d) || (local_10 == -1)) {
    uVar2 = 0xffffffff;
  }
  else {
    local_15 = (undefined1)local_10;
    std::
    map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
    ::find((uchar *)local_1c);
    std::
    map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
    ::end(local_14);
    cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,short>>::operator!=
                      (local_1c,(_Rb_tree_iterator *)local_14);
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,short>>::operator->(local_1c);
      uVar2 = (uint)*(ushort *)(iVar3 + 2);
    }
  }
  return uVar2;
}

```

---

## incStatusBuyingCount

```asm
// === 085eef28 CQuestShop::incStatusBuyingCount  [0x085eef28-0x85ef02d] ===
 85eef28:	55                   	push   %ebp
 85eef29:	89 e5                	mov    %esp,%ebp
 85eef2b:	83 ec 58             	sub    $0x58,%esp
 85eef2e:	8b 55 0c             	mov    0xc(%ebp),%edx
 85eef31:	8b 45 10             	mov    0x10(%ebp),%eax
 85eef34:	88 55 c4             	mov    %dl,-0x3c(%ebp)
 85eef37:	88 45 c0             	mov    %al,-0x40(%ebp)
 85eef3a:	0f b6 45 c4          	movzbl -0x3c(%ebp),%eax
 85eef3e:	89 44 24 04          	mov    %eax,0x4(%esp)
 85eef42:	8b 45 08             	mov    0x8(%ebp),%eax
 85eef45:	89 04 24             	mov    %eax,(%esp)
 85eef48:	e8 1d ff ff ff       	call   85eee6a <_ZN10CQuestShop14findStatusTypeEh>
 85eef4d:	89 45 d8             	mov    %eax,-0x28(%ebp)
 85eef50:	8b 45 d8             	mov    -0x28(%ebp),%eax
 85eef53:	83 f8 4d             	cmp    $0x4d,%eax
 85eef56:	0f 84 ce 00 00 00    	je     85ef02a <_ZN10CQuestShop20incStatusBuyingCountEhh+0x102>
 85eef5c:	8b 45 08             	mov    0x8(%ebp),%eax
 85eef5f:	89 04 24             	mov    %eax,(%esp)
 85eef62:	e8 5d 9c ad ff       	call   80c8bc4 <_ZN13charac_expand5CData5alterEv>
 85eef67:	8b 45 d8             	mov    -0x28(%ebp),%eax
 85eef6a:	88 45 df             	mov    %al,-0x21(%ebp)
 85eef6d:	8b 45 08             	mov    0x8(%ebp),%eax
 85eef70:	8d 48 08             	lea    0x8(%eax),%ecx
 85eef73:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85eef76:	8d 55 df             	lea    -0x21(%ebp),%edx
 85eef79:	89 54 24 08          	mov    %edx,0x8(%esp)
 85eef7d:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 85eef81:	89 04 24             	mov    %eax,(%esp)
 85eef84:	e8 bd 0d eb ff       	call   849fd46 <_ZNSt3mapIhsSt4lessIhESaISt4pairIKhsEEE4findERS3_>
 85eef89:	83 ec 04             	sub    $0x4,%esp
 85eef8c:	8b 45 08             	mov    0x8(%ebp),%eax
 85eef8f:	8d 50 08             	lea    0x8(%eax),%edx
 85eef92:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85eef95:	89 54 24 04          	mov    %edx,0x4(%esp)
 85eef99:	89 04 24             	mov    %eax,(%esp)
 85eef9c:	e8 df 11 e6 ff       	call   8450180 <_ZNSt3mapIhsSt4lessIhESaISt4pairIKhsEEE3endEv>
 85eefa1:	83 ec 04             	sub    $0x4,%esp
 85eefa4:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85eefa7:	89 44 24 04          	mov    %eax,0x4(%esp)
 85eefab:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85eefae:	89 04 24             	mov    %eax,(%esp)
 85eefb1:	e8 f0 11 e6 ff       	call   84501a6 <_ZNKSt17_Rb_tree_iteratorISt4pairIKhsEEneERKS3_>
 85eefb6:	84 c0                	test   %al,%al
 85eefb8:	74 21                	je     85eefdb <_ZN10CQuestShop20incStatusBuyingCountEhh+0xb3>
 85eefba:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85eefbd:	89 04 24             	mov    %eax,(%esp)
 85eefc0:	e8 f5 11 e6 ff       	call   84501ba <_ZNKSt17_Rb_tree_iteratorISt4pairIKhsEEptEv>
 85eefc5:	0f b7 50 02          	movzwl 0x2(%eax),%edx
 85eefc9:	89 d1                	mov    %edx,%ecx
 85eefcb:	0f b6 55 c0          	movzbl -0x40(%ebp),%edx
 85eefcf:	0f b6 d2             	movzbl %dl,%edx
 85eefd2:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 85eefd5:	66 89 50 02          	mov    %dx,0x2(%eax)
 85eefd9:	eb 50                	jmp    85ef02b <_ZN10CQuestShop20incStatusBuyingCountEhh+0x103>
 85eefdb:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85eefde:	8d 55 c0             	lea    -0x40(%ebp),%edx
 85eefe1:	89 54 24 08          	mov    %edx,0x8(%esp)
 85eefe5:	8d 55 d8             	lea    -0x28(%ebp),%edx
 85eefe8:	89 54 24 04          	mov    %edx,0x4(%esp)
 85eefec:	89 04 24             	mov    %eax,(%esp)
 85eefef:	e8 e9 0f 00 00       	call   85effdd <_ZSt9make_pairIRKiRKhESt4pairINSt17__decay_and_stripIT_E6__typeENS5_IT0_E6__typeEEOS6_OS9_>
 85eeff4:	83 ec 04             	sub    $0x4,%esp
 85eeff7:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85eeffa:	89 44 24 04          	mov    %eax,0x4(%esp)
 85eeffe:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85ef001:	89 04 24             	mov    %eax,(%esp)
 85ef004:	e8 13 10 00 00       	call   85f001c <_ZNSt4pairIKhsEC1IihEEOS_IT_T0_E>
 85ef009:	8b 45 08             	mov    0x8(%ebp),%eax
 85ef00c:	8d 48 08             	lea    0x8(%eax),%ecx
 85ef00f:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85ef012:	8d 55 ec             	lea    -0x14(%ebp),%edx
 85ef015:	89 54 24 08          	mov    %edx,0x8(%esp)
 85ef019:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 85ef01d:	89 04 24             	mov    %eax,(%esp)
 85ef020:	e8 8f 50 e6 ff       	call   84540b4 <_ZNSt3mapIhsSt4lessIhESaISt4pairIKhsEEE6insertERKS4_>
 85ef025:	83 ec 04             	sub    $0x4,%esp
 85ef028:	eb 01                	jmp    85ef02b <_ZN10CQuestShop20incStatusBuyingCountEhh+0x103>
 85ef02a:	90                   	nop
 85ef02b:	c9                   	leave
 85ef02c:	c3                   	ret
 85ef02d:	90                   	nop

```

```c
// CQuestShop::incStatusBuyingCount @ 0x85eef28

/* CQuestShop::incStatusBuyingCount(unsigned char, unsigned char) */

void __thiscall CQuestShop::incStatusBuyingCount(CQuestShop *this,uchar param_1,uchar param_2)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<unsigned_char_const,short>> local_30 [4];
  int local_2c;
  undefined1 local_25;
  map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
  local_24 [4];
  pair local_20 [8];
  pair<unsigned_char_const,short> local_18 [4];
  int local_14 [4];
  
  local_2c = findStatusType(this,param_1);
  if (local_2c != 0x4d) {
    charac_expand::CData::alter((CData *)this);
    local_25 = (undefined1)local_2c;
    std::
    map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
    ::find((uchar *)local_30);
    std::
    map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
    ::end(local_24);
    cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,short>>::operator!=
                      (local_30,(_Rb_tree_iterator *)local_24);
    if (cVar1 == '\0') {
      std::make_pair<int_const&,unsigned_char_const&>(local_14,(uchar *)&local_2c);
      std::pair<unsigned_char_const,short>::pair<int,unsigned_char>(local_18,(pair *)local_14);
      std::
      map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
      ::insert(local_20);
    }
    else {
      iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,short>>::operator->(local_30);
      *(ushort *)(iVar2 + 2) = *(short *)(iVar2 + 2) + (ushort)param_2;
    }
  }
  return;
}

```

---

## loadData

```asm
// === 085efa2c CQuestShop::loadData  [0x085efa2c-0x85efb65] ===
 85efa2c:	55                   	push   %ebp
 85efa2d:	89 e5                	mov    %esp,%ebp
 85efa2f:	83 ec 38             	sub    $0x38,%esp
 85efa32:	8b 45 08             	mov    0x8(%ebp),%eax
 85efa35:	8b 00                	mov    (%eax),%eax
 85efa37:	83 c0 1c             	add    $0x1c,%eax
 85efa3a:	8b 10                	mov    (%eax),%edx
 85efa3c:	8b 45 08             	mov    0x8(%ebp),%eax
 85efa3f:	89 04 24             	mov    %eax,(%esp)
 85efa42:	ff d2                	call   *%edx
 85efa44:	8b 45 10             	mov    0x10(%ebp),%eax
 85efa47:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85efa4a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85efa4d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85efa50:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85efa53:	8b 40 04             	mov    0x4(%eax),%eax
 85efa56:	89 c2                	mov    %eax,%edx
 85efa58:	8b 45 08             	mov    0x8(%ebp),%eax
 85efa5b:	89 50 38             	mov    %edx,0x38(%eax)
 85efa5e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85efa61:	8b 40 08             	mov    0x8(%eax),%eax
 85efa64:	89 44 24 04          	mov    %eax,0x4(%esp)
 85efa68:	8b 45 08             	mov    0x8(%ebp),%eax
 85efa6b:	89 04 24             	mov    %eax,(%esp)
 85efa6e:	e8 89 04 00 00       	call   85efefc <_ZN10CQuestShop12setInitCountEi>
 85efa73:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85efa76:	8b 80 a6 00 00 00    	mov    0xa6(%eax),%eax
 85efa7c:	89 c2                	mov    %eax,%edx
 85efa7e:	8b 45 08             	mov    0x8(%ebp),%eax
 85efa81:	89 50 44             	mov    %edx,0x44(%eax)
 85efa84:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 85efa8b:	eb 71                	jmp    85efafe <_ZN10CQuestShop8loadDataEP5CUserPc+0xd2>
 85efa8d:	8b 55 d8             	mov    -0x28(%ebp),%edx
 85efa90:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85efa93:	0f b7 44 50 0c       	movzwl 0xc(%eax,%edx,2),%eax
 85efa98:	66 85 c0             	test   %ax,%ax
 85efa9b:	74 57                	je     85efaf4 <_ZN10CQuestShop8loadDataEP5CUserPc+0xc8>
 85efa9d:	8b 45 d8             	mov    -0x28(%ebp),%eax
 85efaa0:	01 c0                	add    %eax,%eax
 85efaa2:	03 45 f4             	add    -0xc(%ebp),%eax
 85efaa5:	8d 50 0c             	lea    0xc(%eax),%edx
 85efaa8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85efaab:	89 54 24 08          	mov    %edx,0x8(%esp)
 85efaaf:	8d 55 d8             	lea    -0x28(%ebp),%edx
 85efab2:	89 54 24 04          	mov    %edx,0x4(%esp)
 85efab6:	89 04 24             	mov    %eax,(%esp)
 85efab9:	e8 95 05 00 00       	call   85f0053 <_ZSt9make_pairIRiRtESt4pairINSt17__decay_and_stripIT_E6__typeENS3_IT0_E6__typeEEOS4_OS7_>
 85efabe:	83 ec 04             	sub    $0x4,%esp
 85efac1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85efac4:	89 44 24 04          	mov    %eax,0x4(%esp)
 85efac8:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85efacb:	89 04 24             	mov    %eax,(%esp)
 85eface:	e8 bf 05 00 00       	call   85f0092 <_ZNSt4pairIKhsEC1IitEEOS_IT_T0_E>
 85efad3:	8b 45 08             	mov    0x8(%ebp),%eax
 85efad6:	8d 48 08             	lea    0x8(%eax),%ecx
 85efad9:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85efadc:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 85efadf:	89 54 24 08          	mov    %edx,0x8(%esp)
 85efae3:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 85efae7:	89 04 24             	mov    %eax,(%esp)
 85efaea:	e8 c5 45 e6 ff       	call   84540b4 <_ZNSt3mapIhsSt4lessIhESaISt4pairIKhsEEE6insertERKS4_>
 85efaef:	83 ec 04             	sub    $0x4,%esp
 85efaf2:	eb 01                	jmp    85efaf5 <_ZN10CQuestShop8loadDataEP5CUserPc+0xc9>
 85efaf4:	90                   	nop
 85efaf5:	8b 45 d8             	mov    -0x28(%ebp),%eax
 85efaf8:	83 c0 01             	add    $0x1,%eax
 85efafb:	89 45 d8             	mov    %eax,-0x28(%ebp)
 85efafe:	8b 45 d8             	mov    -0x28(%ebp),%eax
 85efb01:	83 f8 4c             	cmp    $0x4c,%eax
 85efb04:	0f 9e c0             	setle  %al
 85efb07:	84 c0                	test   %al,%al
 85efb09:	75 82                	jne    85efa8d <_ZN10CQuestShop8loadDataEP5CUserPc+0x61>
 85efb0b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85efb0e:	0f b6 80 54 01 00 00 	movzbl 0x154(%eax),%eax
 85efb15:	84 c0                	test   %al,%al
 85efb17:	74 1d                	je     85efb36 <_ZN10CQuestShop8loadDataEP5CUserPc+0x10a>
 85efb19:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85efb1c:	05 aa 00 00 00       	add    $0xaa,%eax
 85efb21:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85efb24:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85efb27:	89 44 24 04          	mov    %eax,0x4(%esp)
 85efb2b:	8b 45 08             	mov    0x8(%ebp),%eax
 85efb2e:	89 04 24             	mov    %eax,(%esp)
 85efb31:	e8 8a 02 00 00       	call   85efdc0 <_ZN10CQuestShop25SetTagCharacQuestShopDataEP22CHARAC_QUEST_SHOP_DATA>
 85efb36:	8b 45 0c             	mov    0xc(%ebp),%eax
 85efb39:	89 04 24             	mov    %eax,(%esp)
 85efb3c:	e8 69 6b cb ff       	call   82a66aa <_ZNK15CUserCharacInfo24getCurCharacLastPlayTickEv>
 85efb41:	3d cf 23 07 50       	cmp    $0x500723cf,%eax
 85efb46:	0f 9e c0             	setle  %al
 85efb49:	84 c0                	test   %al,%al
 85efb4b:	74 12                	je     85efb5f <_ZN10CQuestShop8loadDataEP5CUserPc+0x133>
 85efb4d:	8b 45 0c             	mov    0xc(%ebp),%eax
 85efb50:	89 44 24 04          	mov    %eax,0x4(%esp)
 85efb54:	8b 45 08             	mov    0x8(%ebp),%eax
 85efb57:	89 04 24             	mov    %eax,(%esp)
 85efb5a:	e8 ed f9 ff ff       	call   85ef54c <_ZN10CQuestShop7clearQPEP5CUser>
 85efb5f:	b8 01 00 00 00       	mov    $0x1,%eax
 85efb64:	c9                   	leave
 85efb65:	c3                   	ret

```

```c
// CQuestShop::loadData @ 0x85efa2c

/* CQuestShop::loadData(CUser*, char*) */

undefined4 __thiscall CQuestShop::loadData(CQuestShop *this,CUser *param_1,char *param_2)

{
  int iVar1;
  int local_2c;
  pair local_28 [8];
  pair<unsigned_char_const,short> local_20 [4];
  int local_1c [2];
  char *local_14;
  CHARAC_QUEST_SHOP_DATA *local_10;
  
  (**(code **)(*(int *)this + 0x1c))(this);
  local_14 = param_2;
  local_10 = (CHARAC_QUEST_SHOP_DATA *)param_2;
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_2 + 4);
  setInitCount(this,*(int *)(param_2 + 8));
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(local_10 + 0xa6);
  for (local_2c = 0; local_2c < 0x4d; local_2c = local_2c + 1) {
    if (*(short *)(local_10 + local_2c * 2 + 0xc) != 0) {
      std::make_pair<int&,unsigned_short&>(local_1c,(ushort *)&local_2c);
      std::pair<unsigned_char_const,short>::pair<int,unsigned_short>(local_20,(pair *)local_1c);
      std::
      map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
      ::insert(local_28);
    }
  }
  if (local_14[0x154] != '\0') {
    local_10 = (CHARAC_QUEST_SHOP_DATA *)(local_14 + 0xaa);
    SetTagCharacQuestShopData(this,local_10);
  }
  iVar1 = CUserCharacInfo::getCurCharacLastPlayTick((CUserCharacInfo *)param_1);
  if (iVar1 < 0x500723d0) {
    clearQP(this,param_1);
  }
  return 1;
}

```

---

## makePacket_BuyingStatusList

```asm
// === 085ef5dc CQuestShop::makePacket_BuyingStatusList  [0x085ef5dc-0x85ef6fb] ===
 85ef5dc:	55                   	push   %ebp
 85ef5dd:	89 e5                	mov    %esp,%ebp
 85ef5df:	83 ec 48             	sub    $0x48,%esp
 85ef5e2:	8b 45 10             	mov    0x10(%ebp),%eax
 85ef5e5:	88 45 d4             	mov    %al,-0x2c(%ebp)
 85ef5e8:	0f b6 45 d4          	movzbl -0x2c(%ebp),%eax
 85ef5ec:	83 f0 01             	xor    $0x1,%eax
 85ef5ef:	84 c0                	test   %al,%al
 85ef5f1:	74 0b                	je     85ef5fe <_ZN10CQuestShop27makePacket_BuyingStatusListER11PacketGuardb+0x22>
 85ef5f3:	8b 45 08             	mov    0x8(%ebp),%eax
 85ef5f6:	83 c0 08             	add    $0x8,%eax
 85ef5f9:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 85ef5fc:	eb 09                	jmp    85ef607 <_ZN10CQuestShop27makePacket_BuyingStatusListER11PacketGuardb+0x2b>
 85ef5fe:	8b 45 08             	mov    0x8(%ebp),%eax
 85ef601:	83 c0 20             	add    $0x20,%eax
 85ef604:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 85ef607:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85ef60a:	89 04 24             	mov    %eax,(%esp)
 85ef60d:	e8 30 0c e6 ff       	call   8450242 <_ZNKSt3mapIhsSt4lessIhESaISt4pairIKhsEEE4sizeEv>
 85ef612:	88 45 eb             	mov    %al,-0x15(%ebp)
 85ef615:	0f b6 55 eb          	movzbl -0x15(%ebp),%edx
 85ef619:	8b 45 0c             	mov    0xc(%ebp),%eax
 85ef61c:	89 54 24 04          	mov    %edx,0x4(%esp)
 85ef620:	89 04 24             	mov    %eax,(%esp)
 85ef623:	e8 f8 c2 ad ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85ef628:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85ef62b:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 85ef62e:	89 54 24 04          	mov    %edx,0x4(%esp)
 85ef632:	89 04 24             	mov    %eax,(%esp)
 85ef635:	e8 46 0b e6 ff       	call   8450180 <_ZNSt3mapIhsSt4lessIhESaISt4pairIKhsEEE3endEv>
 85ef63a:	83 ec 04             	sub    $0x4,%esp
 85ef63d:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85ef640:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 85ef643:	89 54 24 04          	mov    %edx,0x4(%esp)
 85ef647:	89 04 24             	mov    %eax,(%esp)
 85ef64a:	e8 0b 0b e6 ff       	call   845015a <_ZNSt3mapIhsSt4lessIhESaISt4pairIKhsEEE5beginEv>
 85ef64f:	83 ec 04             	sub    $0x4,%esp
 85ef652:	e9 89 00 00 00       	jmp    85ef6e0 <_ZN10CQuestShop27makePacket_BuyingStatusListER11PacketGuardb+0x104>
 85ef657:	c7 45 ec ff ff ff ff 	movl   $0xffffffff,-0x14(%ebp)
 85ef65e:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85ef661:	89 04 24             	mov    %eax,(%esp)
 85ef664:	e8 51 0b e6 ff       	call   84501ba <_ZNKSt17_Rb_tree_iteratorISt4pairIKhsEEptEv>
 85ef669:	0f b6 00             	movzbl (%eax),%eax
 85ef66c:	0f b6 c0             	movzbl %al,%eax
 85ef66f:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85ef672:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85ef675:	89 04 24             	mov    %eax,(%esp)
 85ef678:	e8 3d 0b e6 ff       	call   84501ba <_ZNKSt17_Rb_tree_iteratorISt4pairIKhsEEptEv>
 85ef67d:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 85ef681:	98                   	cwtl
 85ef682:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85ef685:	83 7d f0 4c          	cmpl   $0x4c,-0x10(%ebp)
 85ef689:	7e 10                	jle    85ef69b <_ZN10CQuestShop27makePacket_BuyingStatusListER11PacketGuardb+0xbf>
 85ef68b:	c7 45 ec ff ff ff ff 	movl   $0xffffffff,-0x14(%ebp)
 85ef692:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85ef699:	eb 16                	jmp    85ef6b1 <_ZN10CQuestShop27makePacket_BuyingStatusListER11PacketGuardb+0xd5>
 85ef69b:	e8 fb ca ad ff       	call   80cc19b <_Z14G_CDataManagerv>
 85ef6a0:	8b 55 f0             	mov    -0x10(%ebp),%edx
 85ef6a3:	0f b6 84 10 c0 63 00 	movzbl 0x63c0(%eax,%edx,1),%eax
 85ef6aa:	00 
 85ef6ab:	0f be c0             	movsbl %al,%eax
 85ef6ae:	89 45 ec             	mov    %eax,-0x14(%ebp)
 85ef6b1:	8b 45 0c             	mov    0xc(%ebp),%eax
 85ef6b4:	8b 55 ec             	mov    -0x14(%ebp),%edx
 85ef6b7:	89 54 24 04          	mov    %edx,0x4(%esp)
 85ef6bb:	89 04 24             	mov    %eax,(%esp)
 85ef6be:	e8 5d c2 ad ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85ef6c3:	8b 45 0c             	mov    0xc(%ebp),%eax
 85ef6c6:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85ef6c9:	89 54 24 04          	mov    %edx,0x4(%esp)
 85ef6cd:	89 04 24             	mov    %eax,(%esp)
 85ef6d0:	e8 cf a7 ae ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 85ef6d5:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85ef6d8:	89 04 24             	mov    %eax,(%esp)
 85ef6db:	e8 00 4a e6 ff       	call   84540e0 <_ZNSt17_Rb_tree_iteratorISt4pairIKhsEEppEv>
 85ef6e0:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85ef6e3:	89 44 24 04          	mov    %eax,0x4(%esp)
 85ef6e7:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85ef6ea:	89 04 24             	mov    %eax,(%esp)
 85ef6ed:	e8 b4 0a e6 ff       	call   84501a6 <_ZNKSt17_Rb_tree_iteratorISt4pairIKhsEEneERKS3_>
 85ef6f2:	84 c0                	test   %al,%al
 85ef6f4:	0f 85 5d ff ff ff    	jne    85ef657 <_ZN10CQuestShop27makePacket_BuyingStatusListER11PacketGuardb+0x7b>
 85ef6fa:	c9                   	leave
 85ef6fb:	c3                   	ret

```

```c
// CQuestShop::makePacket_BuyingStatusList @ 0x85ef5dc

/* CQuestShop::makePacket_BuyingStatusList(PacketGuard&, bool) */

void __thiscall
CQuestShop::makePacket_BuyingStatusList(CQuestShop *this,PacketGuard *param_1,bool param_2)

{
  char cVar1;
  byte *pbVar2;
  int iVar3;
  map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
  local_28 [4];
  map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
  local_24 [4];
  map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
  *local_20;
  byte local_19;
  int local_18;
  uint local_14;
  int local_10;
  
  if (param_2) {
    local_20 = (map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
                *)(this + 0x20);
  }
  else {
    local_20 = (map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
                *)(this + 8);
  }
  local_19 = std::
             map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
             ::size(local_20);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,(uint)local_19);
  std::
  map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
  ::end(local_24);
  std::
  map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
  ::begin(local_28);
  while( true ) {
    cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,short>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_char_const,short>> *)local_28,
                       (_Rb_tree_iterator *)local_24);
    if (cVar1 == '\0') break;
    local_18 = 0xffffffff;
    pbVar2 = (byte *)std::_Rb_tree_iterator<std::pair<unsigned_char_const,short>>::operator->
                               ((_Rb_tree_iterator<std::pair<unsigned_char_const,short>> *)local_28)
    ;
    local_14 = (uint)*pbVar2;
    iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,short>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_char_const,short>> *)local_28);
    local_10 = (int)*(short *)(iVar3 + 2);
    if ((int)local_14 < 0x4d) {
      iVar3 = G_CDataManager();
      local_18 = (int)*(char *)(iVar3 + 0x63c0 + local_14);
    }
    else {
      local_18 = -1;
      local_10 = 0;
    }
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,local_18);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,local_10);
    std::_Rb_tree_iterator<std::pair<unsigned_char_const,short>>::operator++
              ((_Rb_tree_iterator<std::pair<unsigned_char_const,short>> *)local_28);
  }
  return;
}

```

---

## sendCharacQp

```asm
// === 085ef6fc CQuestShop::sendCharacQp  [0x085ef6fc-0x85ef7cb] ===
 85ef6fc:	55                   	push   %ebp
 85ef6fd:	89 e5                	mov    %esp,%ebp
 85ef6ff:	56                   	push   %esi
 85ef700:	53                   	push   %ebx
 85ef701:	83 ec 30             	sub    $0x30,%esp
 85ef704:	8b 45 10             	mov    0x10(%ebp),%eax
 85ef707:	88 45 e4             	mov    %al,-0x1c(%ebp)
 85ef70a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85ef70d:	89 04 24             	mov    %eax,(%esp)
 85ef710:	e8 37 e6 f9 ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 85ef715:	c7 44 24 08 5c 01 00 	movl   $0x15c,0x8(%esp)
 85ef71c:	00 
 85ef71d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85ef724:	00 
 85ef725:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85ef728:	89 04 24             	mov    %eax,(%esp)
 85ef72b:	e8 cc c1 ad ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 85ef730:	8b 45 08             	mov    0x8(%ebp),%eax
 85ef733:	89 04 24             	mov    %eax,(%esp)
 85ef736:	e8 75 07 00 00       	call   85efeb0 <_ZNK10CQuestShop5getQpEv>
 85ef73b:	89 44 24 04          	mov    %eax,0x4(%esp)
 85ef73f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85ef742:	89 04 24             	mov    %eax,(%esp)
 85ef745:	e8 f2 c1 ad ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 85ef74a:	8b 45 08             	mov    0x8(%ebp),%eax
 85ef74d:	89 04 24             	mov    %eax,(%esp)
 85ef750:	e8 b5 07 00 00       	call   85eff0a <_ZNK10CQuestShop12getInitCountEv>
 85ef755:	89 44 24 04          	mov    %eax,0x4(%esp)
 85ef759:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85ef75c:	89 04 24             	mov    %eax,(%esp)
 85ef75f:	e8 40 a7 ae ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 85ef764:	0f be 45 e4          	movsbl -0x1c(%ebp),%eax
 85ef768:	89 44 24 04          	mov    %eax,0x4(%esp)
 85ef76c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85ef76f:	89 04 24             	mov    %eax,(%esp)
 85ef772:	e8 a9 c1 ad ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85ef777:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85ef77e:	00 
 85ef77f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85ef782:	89 04 24             	mov    %eax,(%esp)
 85ef785:	e8 ce c1 ad ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 85ef78a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85ef78d:	89 44 24 04          	mov    %eax,0x4(%esp)
 85ef791:	8b 45 0c             	mov    0xc(%ebp),%eax
 85ef794:	89 04 24             	mov    %eax,(%esp)
 85ef797:	e8 1e 8e 05 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 85ef79c:	eb 1b                	jmp    85ef7b9 <_ZN10CQuestShop12sendCharacQpEP5CUserc+0xbd>
 85ef79e:	89 d3                	mov    %edx,%ebx
 85ef7a0:	89 c6                	mov    %eax,%esi
 85ef7a2:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85ef7a5:	89 04 24             	mov    %eax,(%esp)
 85ef7a8:	e8 d3 e6 f9 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 85ef7ad:	89 f0                	mov    %esi,%eax
 85ef7af:	89 da                	mov    %ebx,%edx
 85ef7b1:	89 04 24             	mov    %eax,(%esp)
 85ef7b4:	e8 97 3f 4f 00       	call   8ae3750 <_Unwind_Resume>
 85ef7b9:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85ef7bc:	89 04 24             	mov    %eax,(%esp)
 85ef7bf:	e8 bc e6 f9 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 85ef7c4:	83 c4 30             	add    $0x30,%esp
 85ef7c7:	5b                   	pop    %ebx
 85ef7c8:	5e                   	pop    %esi
 85ef7c9:	5d                   	pop    %ebp
 85ef7ca:	c3                   	ret
 85ef7cb:	90                   	nop

```

```c
// CQuestShop::sendCharacQp @ 0x85ef6fc

/* CQuestShop::sendCharacQp(CUser*, char) */

void __thiscall CQuestShop::sendCharacQp(CQuestShop *this,CUser *param_1,char param_2)

{
  int iVar1;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 085ef72b to 085ef79b has its CatchHandler @ 085ef79e */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x15c);
  iVar1 = getQp(this);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,iVar1);
  iVar1 = getInitCount(this);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,iVar1);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,(int)param_2);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  CUser::Send(param_1,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}

```

---

## sendCharacQuestPiece

```asm
// === 085ef7cc CQuestShop::sendCharacQuestPiece  [0x085ef7cc-0x85ef867] ===
 85ef7cc:	55                   	push   %ebp
 85ef7cd:	89 e5                	mov    %esp,%ebp
 85ef7cf:	56                   	push   %esi
 85ef7d0:	53                   	push   %ebx
 85ef7d1:	83 ec 20             	sub    $0x20,%esp
 85ef7d4:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85ef7d7:	89 04 24             	mov    %eax,(%esp)
 85ef7da:	e8 6d e5 f9 ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 85ef7df:	c7 44 24 08 be 01 00 	movl   $0x1be,0x8(%esp)
 85ef7e6:	00 
 85ef7e7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85ef7ee:	00 
 85ef7ef:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85ef7f2:	89 04 24             	mov    %eax,(%esp)
 85ef7f5:	e8 02 c1 ad ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 85ef7fa:	8b 45 08             	mov    0x8(%ebp),%eax
 85ef7fd:	89 04 24             	mov    %eax,(%esp)
 85ef800:	e8 3f 07 00 00       	call   85eff44 <_ZNK10CQuestShop8getPieceEv>
 85ef805:	89 44 24 04          	mov    %eax,0x4(%esp)
 85ef809:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85ef80c:	89 04 24             	mov    %eax,(%esp)
 85ef80f:	e8 28 c1 ad ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 85ef814:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85ef81b:	00 
 85ef81c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85ef81f:	89 04 24             	mov    %eax,(%esp)
 85ef822:	e8 31 c1 ad ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 85ef827:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85ef82a:	89 44 24 04          	mov    %eax,0x4(%esp)
 85ef82e:	8b 45 0c             	mov    0xc(%ebp),%eax
 85ef831:	89 04 24             	mov    %eax,(%esp)
 85ef834:	e8 81 8d 05 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 85ef839:	eb 1b                	jmp    85ef856 <_ZN10CQuestShop20sendCharacQuestPieceEP5CUser+0x8a>
 85ef83b:	89 d3                	mov    %edx,%ebx
 85ef83d:	89 c6                	mov    %eax,%esi
 85ef83f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85ef842:	89 04 24             	mov    %eax,(%esp)
 85ef845:	e8 36 e6 f9 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 85ef84a:	89 f0                	mov    %esi,%eax
 85ef84c:	89 da                	mov    %ebx,%edx
 85ef84e:	89 04 24             	mov    %eax,(%esp)
 85ef851:	e8 fa 3e 4f 00       	call   8ae3750 <_Unwind_Resume>
 85ef856:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85ef859:	89 04 24             	mov    %eax,(%esp)
 85ef85c:	e8 1f e6 f9 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 85ef861:	83 c4 20             	add    $0x20,%esp
 85ef864:	5b                   	pop    %ebx
 85ef865:	5e                   	pop    %esi
 85ef866:	5d                   	pop    %ebp
 85ef867:	c3                   	ret

```

```c
// CQuestShop::sendCharacQuestPiece @ 0x85ef7cc

/* CQuestShop::sendCharacQuestPiece(CUser*) */

void __thiscall CQuestShop::sendCharacQuestPiece(CQuestShop *this,CUser *param_1)

{
  int iVar1;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 085ef7f5 to 085ef838 has its CatchHandler @ 085ef83b */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x1be);
  iVar1 = getPiece(this);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,iVar1);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  CUser::Send(param_1,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}

```

---

## subQp

```asm
// === 085eed2a CQuestShop::subQp  [0x085eed2a-0x85eeda7] ===
 85eed2a:	55                   	push   %ebp
 85eed2b:	89 e5                	mov    %esp,%ebp
 85eed2d:	83 ec 38             	sub    $0x38,%esp
 85eed30:	8b 55 0c             	mov    0xc(%ebp),%edx
 85eed33:	8b 45 10             	mov    0x10(%ebp),%eax
 85eed36:	88 55 e4             	mov    %dl,-0x1c(%ebp)
 85eed39:	88 45 e0             	mov    %al,-0x20(%ebp)
 85eed3c:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85eed43:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
 85eed47:	89 44 24 04          	mov    %eax,0x4(%esp)
 85eed4b:	8b 45 08             	mov    0x8(%ebp),%eax
 85eed4e:	89 04 24             	mov    %eax,(%esp)
 85eed51:	e8 52 00 00 00       	call   85eeda8 <_ZN10CQuestShop12findStatusQpEh>
 85eed56:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85eed59:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 85eed5d:	7f 07                	jg     85eed66 <_ZN10CQuestShop5subQpEhh+0x3c>
 85eed5f:	b8 01 00 00 00       	mov    $0x1,%eax
 85eed64:	eb 40                	jmp    85eeda6 <_ZN10CQuestShop5subQpEhh+0x7c>
 85eed66:	0f b6 45 e0          	movzbl -0x20(%ebp),%eax
 85eed6a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85eed6d:	0f af c2             	imul   %edx,%eax
 85eed70:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85eed73:	8b 45 08             	mov    0x8(%ebp),%eax
 85eed76:	89 04 24             	mov    %eax,(%esp)
 85eed79:	e8 32 11 00 00       	call   85efeb0 <_ZNK10CQuestShop5getQpEv>
 85eed7e:	2b 45 f4             	sub    -0xc(%ebp),%eax
 85eed81:	c1 e8 1f             	shr    $0x1f,%eax
 85eed84:	84 c0                	test   %al,%al
 85eed86:	74 07                	je     85eed8f <_ZN10CQuestShop5subQpEhh+0x65>
 85eed88:	b8 16 00 00 00       	mov    $0x16,%eax
 85eed8d:	eb 17                	jmp    85eeda6 <_ZN10CQuestShop5subQpEhh+0x7c>
 85eed8f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85eed92:	89 44 24 04          	mov    %eax,0x4(%esp)
 85eed96:	8b 45 08             	mov    0x8(%ebp),%eax
 85eed99:	89 04 24             	mov    %eax,(%esp)
 85eed9c:	e8 1b 11 00 00       	call   85efebc <_ZN10CQuestShop5subQpEi>
 85eeda1:	b8 00 00 00 00       	mov    $0x0,%eax
 85eeda6:	c9                   	leave
 85eeda7:	c3                   	ret

```

```c
// CQuestShop::subQp @ 0x85eed2a

/* CQuestShop::subQp(unsigned char, unsigned char) */

undefined4 __thiscall CQuestShop::subQp(CQuestShop *this,uchar param_1,uchar param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = findStatusQp(this,param_1);
  if (iVar1 < 1) {
    uVar2 = 1;
  }
  else {
    iVar3 = getQp(this);
    if ((int)(iVar3 - (uint)param_2 * iVar1) < 0) {
      uVar2 = 0x16;
    }
    else {
      subQp(this,(uint)param_2 * iVar1);
      uVar2 = 0;
    }
  }
  return uVar2;
}

```

---

## ~CQuestShop

```asm
// === 085eec60 CQuestShop::~CQuestShop  [0x085eec60-0x85eece9] ===
 85eec60:	55                   	push   %ebp
 85eec61:	89 e5                	mov    %esp,%ebp
 85eec63:	56                   	push   %esi
 85eec64:	53                   	push   %ebx
 85eec65:	83 ec 10             	sub    $0x10,%esp
 85eec68:	8b 45 08             	mov    0x8(%ebp),%eax
 85eec6b:	c7 00 a8 ff cc 08    	movl   $0x8ccffa8,(%eax)
 85eec71:	8b 45 08             	mov    0x8(%ebp),%eax
 85eec74:	83 c0 20             	add    $0x20,%eax
 85eec77:	89 04 24             	mov    %eax,(%esp)
 85eec7a:	e8 ef 2a d8 ff       	call   837176e <_ZNSt3mapIhsSt4lessIhESaISt4pairIKhsEEED1Ev>
 85eec7f:	eb 18                	jmp    85eec99 <_ZN10CQuestShopD1Ev+0x39>
 85eec81:	89 d3                	mov    %edx,%ebx
 85eec83:	89 c6                	mov    %eax,%esi
 85eec85:	8b 45 08             	mov    0x8(%ebp),%eax
 85eec88:	83 c0 08             	add    $0x8,%eax
 85eec8b:	89 04 24             	mov    %eax,(%esp)
 85eec8e:	e8 db 2a d8 ff       	call   837176e <_ZNSt3mapIhsSt4lessIhESaISt4pairIKhsEEED1Ev>
 85eec93:	89 f0                	mov    %esi,%eax
 85eec95:	89 da                	mov    %ebx,%edx
 85eec97:	eb 10                	jmp    85eeca9 <_ZN10CQuestShopD1Ev+0x49>
 85eec99:	8b 45 08             	mov    0x8(%ebp),%eax
 85eec9c:	83 c0 08             	add    $0x8,%eax
 85eec9f:	89 04 24             	mov    %eax,(%esp)
 85eeca2:	e8 c7 2a d8 ff       	call   837176e <_ZNSt3mapIhsSt4lessIhESaISt4pairIKhsEEED1Ev>
 85eeca7:	eb 1b                	jmp    85eecc4 <_ZN10CQuestShopD1Ev+0x64>
 85eeca9:	89 d3                	mov    %edx,%ebx
 85eecab:	89 c6                	mov    %eax,%esi
 85eecad:	8b 45 08             	mov    0x8(%ebp),%eax
 85eecb0:	89 04 24             	mov    %eax,(%esp)
 85eecb3:	e8 2a 9f ad ff       	call   80c8be2 <_ZN13charac_expand5CDataD1Ev>
 85eecb8:	89 f0                	mov    %esi,%eax
 85eecba:	89 da                	mov    %ebx,%edx
 85eecbc:	89 04 24             	mov    %eax,(%esp)
 85eecbf:	e8 8c 4a 4f 00       	call   8ae3750 <_Unwind_Resume>
 85eecc4:	8b 45 08             	mov    0x8(%ebp),%eax
 85eecc7:	89 04 24             	mov    %eax,(%esp)
 85eecca:	e8 13 9f ad ff       	call   80c8be2 <_ZN13charac_expand5CDataD1Ev>
 85eeccf:	b8 00 00 00 00       	mov    $0x0,%eax
 85eecd4:	84 c0                	test   %al,%al
 85eecd6:	74 0b                	je     85eece3 <_ZN10CQuestShopD1Ev+0x83>
 85eecd8:	8b 45 08             	mov    0x8(%ebp),%eax
 85eecdb:	89 04 24             	mov    %eax,(%esp)
 85eecde:	e8 0d 58 13 00       	call   87244f0 <_ZdlPv>
 85eece3:	83 c4 10             	add    $0x10,%esp
 85eece6:	5b                   	pop    %ebx
 85eece7:	5e                   	pop    %esi
 85eece8:	5d                   	pop    %ebp
 85eece9:	c3                   	ret

```

```c
// CQuestShop::~CQuestShop @ 0x85eec60

/* WARNING: Removing unreachable block (ram,0x085eecd8) */
/* CQuestShop::~CQuestShop() */

void __thiscall CQuestShop::~CQuestShop(CQuestShop *this)

{
  *(undefined ***)this = &PTR_ResetDailyMidnight_08ccffa8;
                    /* try { // try from 085eec7a to 085eec7e has its CatchHandler @ 085eec81 */
  std::
  map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
  ::~map((map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
          *)(this + 0x20));
                    /* try { // try from 085eeca2 to 085eeca6 has its CatchHandler @ 085eeca9 */
  std::
  map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
  ::~map((map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
          *)(this + 8));
  charac_expand::CData::~CData((CData *)this);
  return;
}

```

---

## ~CQuestShop_085eecea

```asm
// === 085eecea CQuestShop::~CQuestShop  [0x085eecea-0x85eed07] ===
 85eecea:	55                   	push   %ebp
 85eeceb:	89 e5                	mov    %esp,%ebp
 85eeced:	83 ec 18             	sub    $0x18,%esp
 85eecf0:	8b 45 08             	mov    0x8(%ebp),%eax
 85eecf3:	89 04 24             	mov    %eax,(%esp)
 85eecf6:	e8 65 ff ff ff       	call   85eec60 <_ZN10CQuestShopD1Ev>
 85eecfb:	8b 45 08             	mov    0x8(%ebp),%eax
 85eecfe:	89 04 24             	mov    %eax,(%esp)
 85eed01:	e8 ea 57 13 00       	call   87244f0 <_ZdlPv>
 85eed06:	c9                   	leave
 85eed07:	c3                   	ret

```

```c
// CQuestShop::~CQuestShop @ 0x85eecea

/* CQuestShop::~CQuestShop() */

void __thiscall CQuestShop::~CQuestShop(CQuestShop *this)

{
  ~CQuestShop(this);
  operator_delete(this);
  return;
}

```

