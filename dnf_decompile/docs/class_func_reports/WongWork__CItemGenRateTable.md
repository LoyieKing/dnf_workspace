# WongWork__CItemGenRateTable

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## _itemTypeVerify

```asm
// === 08534906 WongWork::CItemGenRateTable::_itemTypeVerify  [0x08534906-0x85349a3] ===
 8534906:	55                   	push   %ebp
 8534907:	89 e5                	mov    %esp,%ebp
 8534909:	83 ec 18             	sub    $0x18,%esp
 853490c:	8b 45 10             	mov    0x10(%ebp),%eax
 853490f:	89 04 24             	mov    %eax,(%esp)
 8534912:	e8 e3 c9 bb ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 8534917:	84 c0                	test   %al,%al
 8534919:	74 41                	je     853495c <_ZN8WongWork17CItemGenRateTable15_itemTypeVerifyEiPK5CItem+0x56>
 853491b:	8b 45 10             	mov    0x10(%ebp),%eax
 853491e:	8b 00                	mov    (%eax),%eax
 8534920:	83 c0 0c             	add    $0xc,%eax
 8534923:	8b 10                	mov    (%eax),%edx
 8534925:	8b 45 10             	mov    0x10(%ebp),%eax
 8534928:	89 04 24             	mov    %eax,(%esp)
 853492b:	ff d2                	call   *%edx
 853492d:	83 f8 03             	cmp    $0x3,%eax
 8534930:	75 0d                	jne    853493f <_ZN8WongWork17CItemGenRateTable15_itemTypeVerifyEiPK5CItem+0x39>
 8534932:	83 7d 0c 03          	cmpl   $0x3,0xc(%ebp)
 8534936:	75 07                	jne    853493f <_ZN8WongWork17CItemGenRateTable15_itemTypeVerifyEiPK5CItem+0x39>
 8534938:	b8 01 00 00 00       	mov    $0x1,%eax
 853493d:	eb 05                	jmp    8534944 <_ZN8WongWork17CItemGenRateTable15_itemTypeVerifyEiPK5CItem+0x3e>
 853493f:	b8 00 00 00 00       	mov    $0x0,%eax
 8534944:	84 c0                	test   %al,%al
 8534946:	74 07                	je     853494f <_ZN8WongWork17CItemGenRateTable15_itemTypeVerifyEiPK5CItem+0x49>
 8534948:	b8 01 00 00 00       	mov    $0x1,%eax
 853494d:	eb 52                	jmp    85349a1 <_ZN8WongWork17CItemGenRateTable15_itemTypeVerifyEiPK5CItem+0x9b>
 853494f:	83 7d 0c 01          	cmpl   $0x1,0xc(%ebp)
 8534953:	75 47                	jne    853499c <_ZN8WongWork17CItemGenRateTable15_itemTypeVerifyEiPK5CItem+0x96>
 8534955:	b8 01 00 00 00       	mov    $0x1,%eax
 853495a:	eb 45                	jmp    85349a1 <_ZN8WongWork17CItemGenRateTable15_itemTypeVerifyEiPK5CItem+0x9b>
 853495c:	8b 45 10             	mov    0x10(%ebp),%eax
 853495f:	8b 00                	mov    (%eax),%eax
 8534961:	83 c0 14             	add    $0x14,%eax
 8534964:	8b 10                	mov    (%eax),%edx
 8534966:	8b 45 10             	mov    0x10(%ebp),%eax
 8534969:	89 04 24             	mov    %eax,(%esp)
 853496c:	ff d2                	call   *%edx
 853496e:	84 c0                	test   %al,%al
 8534970:	74 0d                	je     853497f <_ZN8WongWork17CItemGenRateTable15_itemTypeVerifyEiPK5CItem+0x79>
 8534972:	83 7d 0c 04          	cmpl   $0x4,0xc(%ebp)
 8534976:	75 07                	jne    853497f <_ZN8WongWork17CItemGenRateTable15_itemTypeVerifyEiPK5CItem+0x79>
 8534978:	b8 01 00 00 00       	mov    $0x1,%eax
 853497d:	eb 05                	jmp    8534984 <_ZN8WongWork17CItemGenRateTable15_itemTypeVerifyEiPK5CItem+0x7e>
 853497f:	b8 00 00 00 00       	mov    $0x0,%eax
 8534984:	84 c0                	test   %al,%al
 8534986:	74 07                	je     853498f <_ZN8WongWork17CItemGenRateTable15_itemTypeVerifyEiPK5CItem+0x89>
 8534988:	b8 01 00 00 00       	mov    $0x1,%eax
 853498d:	eb 12                	jmp    85349a1 <_ZN8WongWork17CItemGenRateTable15_itemTypeVerifyEiPK5CItem+0x9b>
 853498f:	83 7d 0c 02          	cmpl   $0x2,0xc(%ebp)
 8534993:	75 07                	jne    853499c <_ZN8WongWork17CItemGenRateTable15_itemTypeVerifyEiPK5CItem+0x96>
 8534995:	b8 01 00 00 00       	mov    $0x1,%eax
 853499a:	eb 05                	jmp    85349a1 <_ZN8WongWork17CItemGenRateTable15_itemTypeVerifyEiPK5CItem+0x9b>
 853499c:	b8 00 00 00 00       	mov    $0x0,%eax
 85349a1:	c9                   	leave
 85349a2:	c3                   	ret
 85349a3:	90                   	nop

```

```c
// WongWork::CItemGenRateTable::_itemTypeVerify @ 0x8534906

/* WongWork::CItemGenRateTable::_itemTypeVerify(int, CItem const*) */

undefined4 __thiscall
WongWork::CItemGenRateTable::_itemTypeVerify(CItemGenRateTable *this,int param_1,CItem *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  
  cVar2 = CItem::is_stackable(param_2);
  if (cVar2 == '\0') {
    cVar2 = (**(code **)(*(int *)param_2 + 0x14))(param_2);
    if ((cVar2 == '\0') || (param_1 != 4)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return 1;
    }
    if (param_1 == 2) {
      return 1;
    }
  }
  else {
    iVar3 = (**(code **)(*(int *)param_2 + 0xc))(param_2);
    if ((iVar3 == 3) && (param_1 == 3)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      return 1;
    }
    if (param_1 == 1) {
      return 1;
    }
  }
  return 0;
}

```

---

## chooseItem

```asm
// === 085349a4 WongWork::CItemGenRateTable::chooseItem  [0x085349a4-0x8534c19] ===
 85349a4:	55                   	push   %ebp
 85349a5:	89 e5                	mov    %esp,%ebp
 85349a7:	56                   	push   %esi
 85349a8:	53                   	push   %ebx
 85349a9:	83 ec 60             	sub    $0x60,%esp
 85349ac:	83 7d 0c 02          	cmpl   $0x2,0xc(%ebp)
 85349b0:	75 3c                	jne    85349ee <_ZN8WongWork17CItemGenRateTable10chooseItemENS_15eItemDropType_tE11ENUM_RARITYi+0x4a>
 85349b2:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
 85349b9:	8b 45 08             	mov    0x8(%ebp),%eax
 85349bc:	8d 90 54 35 02 00    	lea    0x23554(%eax),%edx
 85349c2:	8b 45 14             	mov    0x14(%ebp),%eax
 85349c5:	89 44 24 08          	mov    %eax,0x8(%esp)
 85349c9:	8d 45 10             	lea    0x10(%ebp),%eax
 85349cc:	89 44 24 04          	mov    %eax,0x4(%esp)
 85349d0:	89 14 24             	mov    %edx,(%esp)
 85349d3:	e8 88 cb 0b 00       	call   85f1560 <_ZN13random_option23CRandomOptionItemHandle11choose_itemER11ENUM_RARITYi>
 85349d8:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85349db:	83 7d f4 ff          	cmpl   $0xffffffff,-0xc(%ebp)
 85349df:	0f 95 c0             	setne  %al
 85349e2:	84 c0                	test   %al,%al
 85349e4:	74 08                	je     85349ee <_ZN8WongWork17CItemGenRateTable10chooseItemENS_15eItemDropType_tE11ENUM_RARITYi+0x4a>
 85349e6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85349e9:	e9 21 02 00 00       	jmp    8534c0f <_ZN8WongWork17CItemGenRateTable10chooseItemENS_15eItemDropType_tE11ENUM_RARITYi+0x26b>
 85349ee:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 85349f1:	8b 45 10             	mov    0x10(%ebp),%eax
 85349f4:	89 c3                	mov    %eax,%ebx
 85349f6:	8b 55 14             	mov    0x14(%ebp),%edx
 85349f9:	89 d0                	mov    %edx,%eax
 85349fb:	01 c0                	add    %eax,%eax
 85349fd:	01 d0                	add    %edx,%eax
 85349ff:	c1 e0 03             	shl    $0x3,%eax
 8534a02:	69 d3 d8 12 00 00    	imul   $0x12d8,%ebx,%edx
 8534a08:	8d 14 10             	lea    (%eax,%edx,1),%edx
 8534a0b:	69 c1 10 71 00 00    	imul   $0x7110,%ecx,%eax
 8534a11:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8534a14:	03 45 08             	add    0x8(%ebp),%eax
 8534a17:	89 04 24             	mov    %eax,(%esp)
 8534a1a:	e8 41 65 00 00       	call   853af60 <_ZNKSt3mapIjiSt4lessIjESaISt4pairIKjiEEE4sizeEv>
 8534a1f:	85 c0                	test   %eax,%eax
 8534a21:	0f 94 c0             	sete   %al
 8534a24:	84 c0                	test   %al,%al
 8534a26:	74 0a                	je     8534a32 <_ZN8WongWork17CItemGenRateTable10chooseItemENS_15eItemDropType_tE11ENUM_RARITYi+0x8e>
 8534a28:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8534a2d:	e9 dd 01 00 00       	jmp    8534c0f <_ZN8WongWork17CItemGenRateTable10chooseItemENS_15eItemDropType_tE11ENUM_RARITYi+0x26b>
 8534a32:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8534a35:	89 04 24             	mov    %eax,(%esp)
 8534a38:	e8 37 65 00 00       	call   853af74 <_ZNSt17_Rb_tree_iteratorISt4pairIKjiEEC1Ev>
 8534a3d:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8534a40:	8b 45 10             	mov    0x10(%ebp),%eax
 8534a43:	89 c3                	mov    %eax,%ebx
 8534a45:	8b 55 14             	mov    0x14(%ebp),%edx
 8534a48:	89 d0                	mov    %edx,%eax
 8534a4a:	01 c0                	add    %eax,%eax
 8534a4c:	01 d0                	add    %edx,%eax
 8534a4e:	c1 e0 03             	shl    $0x3,%eax
 8534a51:	69 d3 d8 12 00 00    	imul   $0x12d8,%ebx,%edx
 8534a57:	8d 14 10             	lea    (%eax,%edx,1),%edx
 8534a5a:	69 c1 10 71 00 00    	imul   $0x7110,%ecx,%eax
 8534a60:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8534a63:	89 c2                	mov    %eax,%edx
 8534a65:	03 55 08             	add    0x8(%ebp),%edx
 8534a68:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8534a6b:	89 54 24 04          	mov    %edx,0x4(%esp)
 8534a6f:	89 04 24             	mov    %eax,(%esp)
 8534a72:	e8 21 b8 f1 ff       	call   8450298 <_ZNSt3mapIjiSt4lessIjESaISt4pairIKjiEEE3endEv>
 8534a77:	83 ec 04             	sub    $0x4,%esp
 8534a7a:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8534a7d:	89 45 c8             	mov    %eax,-0x38(%ebp)
 8534a80:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8534a83:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8534a8a:	00 
 8534a8b:	8d 55 c8             	lea    -0x38(%ebp),%edx
 8534a8e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8534a92:	89 04 24             	mov    %eax,(%esp)
 8534a95:	e8 e8 64 00 00       	call   853af82 <_ZNSt17_Rb_tree_iteratorISt4pairIKjiEEmmEi>
 8534a9a:	83 ec 04             	sub    $0x4,%esp
 8534a9d:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8534aa0:	89 04 24             	mov    %eax,(%esp)
 8534aa3:	e8 2a b8 f1 ff       	call   84502d2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKjiEEptEv>
 8534aa8:	8b 00                	mov    (%eax),%eax
 8534aaa:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8534aad:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8534ab0:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8534ab3:	8b 45 08             	mov    0x8(%ebp),%eax
 8534ab6:	8b 80 50 35 02 00    	mov    0x23550(%eax),%eax
 8534abc:	8d 55 d0             	lea    -0x30(%ebp),%edx
 8534abf:	89 54 24 04          	mov    %edx,0x4(%esp)
 8534ac3:	89 04 24             	mov    %eax,(%esp)
 8534ac6:	e8 f3 6f b9 ff       	call   80cbabe <_ZN7CMTRand7randIntERKm>
 8534acb:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 8534ace:	c7 45 f0 ff ff ff ff 	movl   $0xffffffff,-0x10(%ebp)
 8534ad5:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8534ad8:	8b 45 10             	mov    0x10(%ebp),%eax
 8534adb:	89 c3                	mov    %eax,%ebx
 8534add:	8b 55 14             	mov    0x14(%ebp),%edx
 8534ae0:	89 d0                	mov    %edx,%eax
 8534ae2:	01 c0                	add    %eax,%eax
 8534ae4:	01 d0                	add    %edx,%eax
 8534ae6:	c1 e0 03             	shl    $0x3,%eax
 8534ae9:	69 d3 d8 12 00 00    	imul   $0x12d8,%ebx,%edx
 8534aef:	8d 14 10             	lea    (%eax,%edx,1),%edx
 8534af2:	69 c1 10 71 00 00    	imul   $0x7110,%ecx,%eax
 8534af8:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8534afb:	89 c2                	mov    %eax,%edx
 8534afd:	03 55 08             	add    0x8(%ebp),%edx
 8534b00:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8534b03:	8d 4d c4             	lea    -0x3c(%ebp),%ecx
 8534b06:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8534b0a:	89 54 24 04          	mov    %edx,0x4(%esp)
 8534b0e:	89 04 24             	mov    %eax,(%esp)
 8534b11:	e8 aa 64 00 00       	call   853afc0 <_ZNSt3mapIjiSt4lessIjESaISt4pairIKjiEEE11lower_boundERS3_>
 8534b16:	83 ec 04             	sub    $0x4,%esp
 8534b19:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8534b1c:	89 45 c8             	mov    %eax,-0x38(%ebp)
 8534b1f:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8534b22:	8b 45 10             	mov    0x10(%ebp),%eax
 8534b25:	89 c3                	mov    %eax,%ebx
 8534b27:	8b 55 14             	mov    0x14(%ebp),%edx
 8534b2a:	89 d0                	mov    %edx,%eax
 8534b2c:	01 c0                	add    %eax,%eax
 8534b2e:	01 d0                	add    %edx,%eax
 8534b30:	c1 e0 03             	shl    $0x3,%eax
 8534b33:	69 d3 d8 12 00 00    	imul   $0x12d8,%ebx,%edx
 8534b39:	8d 14 10             	lea    (%eax,%edx,1),%edx
 8534b3c:	69 c1 10 71 00 00    	imul   $0x7110,%ecx,%eax
 8534b42:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8534b45:	89 c2                	mov    %eax,%edx
 8534b47:	03 55 08             	add    0x8(%ebp),%edx
 8534b4a:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8534b4d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8534b51:	89 04 24             	mov    %eax,(%esp)
 8534b54:	e8 3f b7 f1 ff       	call   8450298 <_ZNSt3mapIjiSt4lessIjESaISt4pairIKjiEEE3endEv>
 8534b59:	83 ec 04             	sub    $0x4,%esp
 8534b5c:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8534b5f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8534b63:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8534b66:	89 04 24             	mov    %eax,(%esp)
 8534b69:	e8 1e bb d8 ff       	call   82c068c <_ZNKSt17_Rb_tree_iteratorISt4pairIKjiEEeqERKS3_>
 8534b6e:	84 c0                	test   %al,%al
 8534b70:	74 1d                	je     8534b8f <_ZN8WongWork17CItemGenRateTable10chooseItemENS_15eItemDropType_tE11ENUM_RARITYi+0x1eb>
 8534b72:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8534b75:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8534b7c:	00 
 8534b7d:	8d 55 c8             	lea    -0x38(%ebp),%edx
 8534b80:	89 54 24 04          	mov    %edx,0x4(%esp)
 8534b84:	89 04 24             	mov    %eax,(%esp)
 8534b87:	e8 f6 63 00 00       	call   853af82 <_ZNSt17_Rb_tree_iteratorISt4pairIKjiEEmmEi>
 8534b8c:	83 ec 04             	sub    $0x4,%esp
 8534b8f:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8534b92:	89 04 24             	mov    %eax,(%esp)
 8534b95:	e8 38 b7 f1 ff       	call   84502d2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKjiEEptEv>
 8534b9a:	8b 40 04             	mov    0x4(%eax),%eax
 8534b9d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8534ba0:	eb 6a                	jmp    8534c0c <_ZN8WongWork17CItemGenRateTable10chooseItemENS_15eItemDropType_tE11ENUM_RARITYi+0x268>
 8534ba2:	89 04 24             	mov    %eax,(%esp)
 8534ba5:	e8 36 11 1f 00       	call   8725ce0 <__cxa_begin_catch>
 8534baa:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8534bb1:	00 
 8534bb2:	c7 44 24 08 79 02 00 	movl   $0x279,0x8(%esp)
 8534bb9:	00 
 8534bba:	c7 44 24 04 40 a6 c9 	movl   $0x8c9a640,0x4(%esp)
 8534bc1:	08 
 8534bc2:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8534bc5:	89 04 24             	mov    %eax,(%esp)
 8534bc8:	e8 4b ab 01 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8534bcd:	c7 44 24 0c 79 02 00 	movl   $0x279,0xc(%esp)
 8534bd4:	00 
 8534bd5:	c7 44 24 08 40 a6 c9 	movl   $0x8c9a640,0x8(%esp)
 8534bdc:	08 
 8534bdd:	c7 44 24 04 a1 95 c9 	movl   $0x8c995a1,0x4(%esp)
 8534be4:	08 
 8534be5:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8534be8:	89 04 24             	mov    %eax,(%esp)
 8534beb:	e8 98 ab 01 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8534bf0:	eb 15                	jmp    8534c07 <_ZN8WongWork17CItemGenRateTable10chooseItemENS_15eItemDropType_tE11ENUM_RARITYi+0x263>
 8534bf2:	89 d3                	mov    %edx,%ebx
 8534bf4:	89 c6                	mov    %eax,%esi
 8534bf6:	e8 35 10 1f 00       	call   8725c30 <__cxa_end_catch>
 8534bfb:	89 f0                	mov    %esi,%eax
 8534bfd:	89 da                	mov    %ebx,%edx
 8534bff:	89 04 24             	mov    %eax,(%esp)
 8534c02:	e8 49 eb 5a 00       	call   8ae3750 <_Unwind_Resume>
 8534c07:	e8 24 10 1f 00       	call   8725c30 <__cxa_end_catch>
 8534c0c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8534c0f:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8534c12:	83 c4 00             	add    $0x0,%esp
 8534c15:	5b                   	pop    %ebx
 8534c16:	5e                   	pop    %esi
 8534c17:	5d                   	pop    %ebp
 8534c18:	c3                   	ret
 8534c19:	90                   	nop

```

```c
// WongWork::CItemGenRateTable::chooseItem @ 0x85349a4

/* WongWork::CItemGenRateTable::chooseItem(WongWork::eItemDropType_t, ENUM_RARITY, int) */

int __thiscall
WongWork::CItemGenRateTable::chooseItem(CItemGenRateTable *this,int param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  ulong *puVar3;
  undefined4 local_50 [4];
  undefined4 local_40;
  undefined4 local_3c;
  _Rb_tree_iterator<std::pair<unsigned_int_const,int>> local_38 [4];
  ulong local_34;
  map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
  local_30 [4];
  _Rb_tree_iterator<std::pair<unsigned_int_const,int>> local_2c [20];
  ulong local_18;
  undefined4 local_14;
  int local_10;
  
  if (param_2 == 2) {
    local_10 = 0xffffffff;
    local_10 = random_option::CRandomOptionItemHandle::choose_item
                         ((CRandomOptionItemHandle *)(this + 0x23554),(ENUM_RARITY *)&param_3,
                          param_4);
    if (local_10 != -1) {
      return local_10;
    }
  }
  iVar2 = std::
          map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
          ::size((map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
                  *)(this + param_4 * 0x18 + param_3 * 0x12d8 + param_2 * 0x7110));
  if (iVar2 == 0) {
    iVar2 = -1;
  }
  else {
    std::_Rb_tree_iterator<std::pair<unsigned_int_const,int>>::_Rb_tree_iterator
              ((_Rb_tree_iterator<std::pair<unsigned_int_const,int>> *)&local_3c);
    std::
    map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
    ::end((map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
           *)local_50);
    local_3c = local_50[0];
    std::_Rb_tree_iterator<std::pair<unsigned_int_const,int>>::operator--(local_38,(int)&local_3c);
    puVar3 = (ulong *)std::_Rb_tree_iterator<std::pair<unsigned_int_const,int>>::operator->
                                ((_Rb_tree_iterator<std::pair<unsigned_int_const,int>> *)&local_3c);
    local_34 = *puVar3;
    local_18 = local_34;
    local_40 = CMTRand::randInt(*(CMTRand **)(this + 0x23550),&local_34);
    local_14 = 0xffffffff;
                    /* try { // try from 08534b11 to 08534b8b has its CatchHandler @ 08534ba2 */
    std::
    map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
    ::lower_bound((map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
                   *)local_50,(uint *)(this + param_4 * 0x18 + param_3 * 0x12d8 + param_2 * 0x7110))
    ;
    local_3c = local_50[0];
    std::
    map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
    ::end(local_30);
    cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,int>>::operator==
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,int>> *)&local_3c,
                       (_Rb_tree_iterator *)local_30);
    if (cVar1 != '\0') {
      std::_Rb_tree_iterator<std::pair<unsigned_int_const,int>>::operator--(local_2c,(int)&local_3c)
      ;
    }
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,int>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,int>> *)&local_3c);
    iVar2 = *(int *)(iVar2 + 4);
  }
  return iVar2;
}

```

---

## destroy

```asm
// === 08534638 WongWork::CItemGenRateTable::destroy  [0x08534638-0x853466b] ===
 8534638:	55                   	push   %ebp
 8534639:	89 e5                	mov    %esp,%ebp
 853463b:	83 ec 18             	sub    $0x18,%esp
 853463e:	8b 45 08             	mov    0x8(%ebp),%eax
 8534641:	8b 80 50 35 02 00    	mov    0x23550(%eax),%eax
 8534647:	85 c0                	test   %eax,%eax
 8534649:	74 1e                	je     8534669 <_ZN8WongWork17CItemGenRateTable7destroyEv+0x31>
 853464b:	8b 45 08             	mov    0x8(%ebp),%eax
 853464e:	8b 80 50 35 02 00    	mov    0x23550(%eax),%eax
 8534654:	89 04 24             	mov    %eax,(%esp)
 8534657:	e8 94 fe 1e 00       	call   87244f0 <_ZdlPv>
 853465c:	8b 45 08             	mov    0x8(%ebp),%eax
 853465f:	c7 80 50 35 02 00 00 	movl   $0x0,0x23550(%eax)
 8534666:	00 00 00 
 8534669:	c9                   	leave
 853466a:	c3                   	ret
 853466b:	90                   	nop

```

```c
// WongWork::CItemGenRateTable::destroy @ 0x8534638

/* WongWork::CItemGenRateTable::destroy() */

void __thiscall WongWork::CItemGenRateTable::destroy(CItemGenRateTable *this)

{
  if (*(int *)(this + 0x23550) != 0) {
    operator_delete(*(void **)(this + 0x23550));
    *(undefined4 *)(this + 0x23550) = 0;
  }
  return;
}

```

---

## generateTable

```asm
// === 0853466c WongWork::CItemGenRateTable::generateTable  [0x0853466c-0x8534905] ===
 853466c:	55                   	push   %ebp
 853466d:	89 e5                	mov    %esp,%ebp
 853466f:	53                   	push   %ebx
 8534670:	83 ec 64             	sub    $0x64,%esp
 8534673:	8b 45 10             	mov    0x10(%ebp),%eax
 8534676:	88 45 b4             	mov    %al,-0x4c(%ebp)
 8534679:	e8 1d 7b b9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 853467e:	8b 40 0c             	mov    0xc(%eax),%eax
 8534681:	89 04 24             	mov    %eax,(%esp)
 8534684:	e8 af 57 00 00       	call   8539e38 <_ZNK9CItemList16getItemGradeListEv>
 8534689:	89 45 e0             	mov    %eax,-0x20(%ebp)
 853468c:	c7 45 e4 01 00 00 00 	movl   $0x1,-0x1c(%ebp)
 8534693:	e9 5a 02 00 00       	jmp    85348f2 <_ZN8WongWork17CItemGenRateTable13generateTableEPNS_16stGenItemRange_tEb+0x286>
 8534698:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 853469f:	e9 3b 02 00 00       	jmp    85348df <_ZN8WongWork17CItemGenRateTable13generateTableEPNS_16stGenItemRange_tEb+0x273>
 85346a4:	c7 45 ec 01 00 00 00 	movl   $0x1,-0x14(%ebp)
 85346ab:	e9 19 02 00 00       	jmp    85348c9 <_ZN8WongWork17CItemGenRateTable13generateTableEPNS_16stGenItemRange_tEb+0x25d>
 85346b0:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
 85346b7:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85346ba:	01 c0                	add    %eax,%eax
 85346bc:	03 45 0c             	add    0xc(%ebp),%eax
 85346bf:	0f b6 00             	movzbl (%eax),%eax
 85346c2:	0f b6 c0             	movzbl %al,%eax
 85346c5:	f7 d8                	neg    %eax
 85346c7:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85346ca:	e9 d6 01 00 00       	jmp    85348a5 <_ZN8WongWork17CItemGenRateTable13generateTableEPNS_16stGenItemRange_tEb+0x239>
 85346cf:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85346d2:	8b 55 ec             	mov    -0x14(%ebp),%edx
 85346d5:	8d 04 02             	lea    (%edx,%eax,1),%eax
 85346d8:	3d c8 00 00 00       	cmp    $0xc8,%eax
 85346dd:	0f 8f e1 01 00 00    	jg     85348c4 <_ZN8WongWork17CItemGenRateTable13generateTableEPNS_16stGenItemRange_tEb+0x258>
 85346e3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85346e6:	8b 55 ec             	mov    -0x14(%ebp),%edx
 85346e9:	8d 04 02             	lea    (%edx,%eax,1),%eax
 85346ec:	89 c2                	mov    %eax,%edx
 85346ee:	89 d0                	mov    %edx,%eax
 85346f0:	c1 e0 02             	shl    $0x2,%eax
 85346f3:	01 d0                	add    %edx,%eax
 85346f5:	c1 e0 02             	shl    $0x2,%eax
 85346f8:	89 c2                	mov    %eax,%edx
 85346fa:	03 55 e0             	add    -0x20(%ebp),%edx
 85346fd:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8534700:	89 54 24 04          	mov    %edx,0x4(%esp)
 8534704:	89 04 24             	mov    %eax,(%esp)
 8534707:	e8 da 67 00 00       	call   853aee6 <_ZNK9__gnu_cxx8hash_mapIiP5CItemNS_4hashIiEESt8equal_toIiESaIS2_EE5beginEv>
 853470c:	83 ec 04             	sub    $0x4,%esp
 853470f:	e9 47 01 00 00       	jmp    853485b <_ZN8WongWork17CItemGenRateTable13generateTableEPNS_16stGenItemRange_tEb+0x1ef>
 8534714:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8534717:	89 04 24             	mov    %eax,(%esp)
 853471a:	e8 cf ff e5 ff       	call   83946ee <_ZNK9__gnu_cxx25_Hashtable_const_iteratorISt4pairIKiP5CItemEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEptEv>
 853471f:	8b 40 04             	mov    0x4(%eax),%eax
 8534722:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8534725:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8534728:	89 04 24             	mov    %eax,(%esp)
 853472b:	e8 fa 98 df ff       	call   832e02a <_ZNK5CItem12get_gen_rateEv>
 8534730:	85 c0                	test   %eax,%eax
 8534732:	0f 94 c0             	sete   %al
 8534735:	84 c0                	test   %al,%al
 8534737:	0f 85 06 01 00 00    	jne    8534843 <_ZN8WongWork17CItemGenRateTable13generateTableEPNS_16stGenItemRange_tEb+0x1d7>
 853473d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8534740:	89 04 24             	mov    %eax,(%esp)
 8534743:	e8 8e cb bb ff       	call   80f12d6 <_ZNK5CItem10get_rarityEv>
 8534748:	3b 45 e8             	cmp    -0x18(%ebp),%eax
 853474b:	0f 95 c0             	setne  %al
 853474e:	84 c0                	test   %al,%al
 8534750:	0f 85 f0 00 00 00    	jne    8534846 <_ZN8WongWork17CItemGenRateTable13generateTableEPNS_16stGenItemRange_tEb+0x1da>
 8534756:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8534759:	89 44 24 08          	mov    %eax,0x8(%esp)
 853475d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8534760:	89 44 24 04          	mov    %eax,0x4(%esp)
 8534764:	8b 45 08             	mov    0x8(%ebp),%eax
 8534767:	89 04 24             	mov    %eax,(%esp)
 853476a:	e8 97 01 00 00       	call   8534906 <_ZN8WongWork17CItemGenRateTable15_itemTypeVerifyEiPK5CItem>
 853476f:	83 f0 01             	xor    $0x1,%eax
 8534772:	84 c0                	test   %al,%al
 8534774:	0f 85 cf 00 00 00    	jne    8534849 <_ZN8WongWork17CItemGenRateTable13generateTableEPNS_16stGenItemRange_tEb+0x1dd>
 853477a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 853477d:	89 04 24             	mov    %eax,(%esp)
 8534780:	e8 7b 56 00 00       	call   8539e00 <_ZN5CItem24isSpecialMonsterDropItemEv>
 8534785:	84 c0                	test   %al,%al
 8534787:	0f 85 bf 00 00 00    	jne    853484c <_ZN8WongWork17CItemGenRateTable13generateTableEPNS_16stGenItemRange_tEb+0x1e0>
 853478d:	0f b6 45 b4          	movzbl -0x4c(%ebp),%eax
 8534791:	83 f0 01             	xor    $0x1,%eax
 8534794:	84 c0                	test   %al,%al
 8534796:	74 1d                	je     85347b5 <_ZN8WongWork17CItemGenRateTable13generateTableEPNS_16stGenItemRange_tEb+0x149>
 8534798:	8b 45 f4             	mov    -0xc(%ebp),%eax
 853479b:	8b 00                	mov    (%eax),%eax
 853479d:	83 c0 4c             	add    $0x4c,%eax
 85347a0:	8b 10                	mov    (%eax),%edx
 85347a2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85347a5:	89 04 24             	mov    %eax,(%esp)
 85347a8:	ff d2                	call   *%edx
 85347aa:	84 c0                	test   %al,%al
 85347ac:	74 07                	je     85347b5 <_ZN8WongWork17CItemGenRateTable13generateTableEPNS_16stGenItemRange_tEb+0x149>
 85347ae:	b8 01 00 00 00       	mov    $0x1,%eax
 85347b3:	eb 05                	jmp    85347ba <_ZN8WongWork17CItemGenRateTable13generateTableEPNS_16stGenItemRange_tEb+0x14e>
 85347b5:	b8 00 00 00 00       	mov    $0x0,%eax
 85347ba:	84 c0                	test   %al,%al
 85347bc:	0f 85 8d 00 00 00    	jne    853484f <_ZN8WongWork17CItemGenRateTable13generateTableEPNS_16stGenItemRange_tEb+0x1e3>
 85347c2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85347c5:	89 04 24             	mov    %eax,(%esp)
 85347c8:	e8 5d 98 df ff       	call   832e02a <_ZNK5CItem12get_gen_rateEv>
 85347cd:	89 c2                	mov    %eax,%edx
 85347cf:	8b 45 c0             	mov    -0x40(%ebp),%eax
 85347d2:	8d 04 02             	lea    (%edx,%eax,1),%eax
 85347d5:	89 45 c0             	mov    %eax,-0x40(%ebp)
 85347d8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85347db:	89 04 24             	mov    %eax,(%esp)
 85347de:	e8 65 c4 bd ff       	call   8110c48 <_ZNK5CItem9get_indexEv>
 85347e3:	89 45 dc             	mov    %eax,-0x24(%ebp)
 85347e6:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85347e9:	89 44 24 08          	mov    %eax,0x8(%esp)
 85347ed:	8d 45 c0             	lea    -0x40(%ebp),%eax
 85347f0:	89 44 24 04          	mov    %eax,0x4(%esp)
 85347f4:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85347f7:	89 04 24             	mov    %eax,(%esp)
 85347fa:	e8 33 67 00 00       	call   853af32 <_ZNSt4pairIKjiEC1IRjiEEOT_OT0_>
 85347ff:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 8534802:	8b 5d e8             	mov    -0x18(%ebp),%ebx
 8534805:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8534808:	89 d0                	mov    %edx,%eax
 853480a:	01 c0                	add    %eax,%eax
 853480c:	01 d0                	add    %edx,%eax
 853480e:	c1 e0 03             	shl    $0x3,%eax
 8534811:	69 d3 d8 12 00 00    	imul   $0x12d8,%ebx,%edx
 8534817:	8d 14 10             	lea    (%eax,%edx,1),%edx
 853481a:	69 c1 10 71 00 00    	imul   $0x7110,%ecx,%eax
 8534820:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8534823:	89 c2                	mov    %eax,%edx
 8534825:	03 55 08             	add    0x8(%ebp),%edx
 8534828:	8d 45 cc             	lea    -0x34(%ebp),%eax
 853482b:	8d 4d d4             	lea    -0x2c(%ebp),%ecx
 853482e:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8534832:	89 54 24 04          	mov    %edx,0x4(%esp)
 8534836:	89 04 24             	mov    %eax,(%esp)
 8534839:	e8 8c 79 d7 ff       	call   82ac1ca <_ZNSt3mapIjiSt4lessIjESaISt4pairIKjiEEE6insertERKS4_>
 853483e:	83 ec 04             	sub    $0x4,%esp
 8534841:	eb 0d                	jmp    8534850 <_ZN8WongWork17CItemGenRateTable13generateTableEPNS_16stGenItemRange_tEb+0x1e4>
 8534843:	90                   	nop
 8534844:	eb 0a                	jmp    8534850 <_ZN8WongWork17CItemGenRateTable13generateTableEPNS_16stGenItemRange_tEb+0x1e4>
 8534846:	90                   	nop
 8534847:	eb 07                	jmp    8534850 <_ZN8WongWork17CItemGenRateTable13generateTableEPNS_16stGenItemRange_tEb+0x1e4>
 8534849:	90                   	nop
 853484a:	eb 04                	jmp    8534850 <_ZN8WongWork17CItemGenRateTable13generateTableEPNS_16stGenItemRange_tEb+0x1e4>
 853484c:	90                   	nop
 853484d:	eb 01                	jmp    8534850 <_ZN8WongWork17CItemGenRateTable13generateTableEPNS_16stGenItemRange_tEb+0x1e4>
 853484f:	90                   	nop
 8534850:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8534853:	89 04 24             	mov    %eax,(%esp)
 8534856:	e8 fb fd e5 ff       	call   8394656 <_ZN9__gnu_cxx25_Hashtable_const_iteratorISt4pairIKiP5CItemEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEppEv>
 853485b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 853485e:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8534861:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8534864:	89 c2                	mov    %eax,%edx
 8534866:	89 d0                	mov    %edx,%eax
 8534868:	c1 e0 02             	shl    $0x2,%eax
 853486b:	01 d0                	add    %edx,%eax
 853486d:	c1 e0 02             	shl    $0x2,%eax
 8534870:	89 c2                	mov    %eax,%edx
 8534872:	03 55 e0             	add    -0x20(%ebp),%edx
 8534875:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8534878:	89 54 24 04          	mov    %edx,0x4(%esp)
 853487c:	89 04 24             	mov    %eax,(%esp)
 853487f:	e8 88 66 00 00       	call   853af0c <_ZNK9__gnu_cxx8hash_mapIiP5CItemNS_4hashIiEESt8equal_toIiESaIS2_EE3endEv>
 8534884:	83 ec 04             	sub    $0x4,%esp
 8534887:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 853488a:	89 44 24 04          	mov    %eax,0x4(%esp)
 853488e:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8534891:	89 04 24             	mov    %eax,(%esp)
 8534894:	e8 a9 fd e5 ff       	call   8394642 <_ZNK9__gnu_cxx25_Hashtable_const_iteratorISt4pairIKiP5CItemEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEneERKSD_>
 8534899:	84 c0                	test   %al,%al
 853489b:	0f 85 73 fe ff ff    	jne    8534714 <_ZN8WongWork17CItemGenRateTable13generateTableEPNS_16stGenItemRange_tEb+0xa8>
 85348a1:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 85348a5:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85348a8:	01 c0                	add    %eax,%eax
 85348aa:	03 45 0c             	add    0xc(%ebp),%eax
 85348ad:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 85348b1:	0f b6 c0             	movzbl %al,%eax
 85348b4:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 85348b7:	0f 9f c0             	setg   %al
 85348ba:	84 c0                	test   %al,%al
 85348bc:	0f 85 0d fe ff ff    	jne    85346cf <_ZN8WongWork17CItemGenRateTable13generateTableEPNS_16stGenItemRange_tEb+0x63>
 85348c2:	eb 01                	jmp    85348c5 <_ZN8WongWork17CItemGenRateTable13generateTableEPNS_16stGenItemRange_tEb+0x259>
 85348c4:	90                   	nop
 85348c5:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 85348c9:	81 7d ec c8 00 00 00 	cmpl   $0xc8,-0x14(%ebp)
 85348d0:	0f 9e c0             	setle  %al
 85348d3:	84 c0                	test   %al,%al
 85348d5:	0f 85 d5 fd ff ff    	jne    85346b0 <_ZN8WongWork17CItemGenRateTable13generateTableEPNS_16stGenItemRange_tEb+0x44>
 85348db:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 85348df:	83 7d e8 05          	cmpl   $0x5,-0x18(%ebp)
 85348e3:	0f 9e c0             	setle  %al
 85348e6:	84 c0                	test   %al,%al
 85348e8:	0f 85 b6 fd ff ff    	jne    85346a4 <_ZN8WongWork17CItemGenRateTable13generateTableEPNS_16stGenItemRange_tEb+0x38>
 85348ee:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 85348f2:	83 7d e4 04          	cmpl   $0x4,-0x1c(%ebp)
 85348f6:	0f 9e c0             	setle  %al
 85348f9:	84 c0                	test   %al,%al
 85348fb:	0f 85 97 fd ff ff    	jne    8534698 <_ZN8WongWork17CItemGenRateTable13generateTableEPNS_16stGenItemRange_tEb+0x2c>
 8534901:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 8534904:	c9                   	leave
 8534905:	c3                   	ret

```

```c
// WongWork::CItemGenRateTable::generateTable @ 0x853466c

/* WongWork::CItemGenRateTable::generateTable(WongWork::stGenItemRange_t*, bool) */

void __thiscall
WongWork::CItemGenRateTable::generateTable
          (CItemGenRateTable *this,stGenItemRange_t *param_1,bool param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  hash_map<int,CItem*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CItem*>> local_4c [8];
  uint local_44;
  hash_map<int,CItem*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CItem*>> local_40 [8];
  pair local_38 [8];
  pair<unsigned_int_const,int> local_30 [8];
  int local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  CItem *local_10;
  
  iVar3 = G_CDataManager();
  local_24 = CItemList::getItemGradeList(*(CItemList **)(iVar3 + 0xc));
  for (local_20 = 1; local_20 < 5; local_20 = local_20 + 1) {
    for (local_1c = 0; local_1c < 6; local_1c = local_1c + 1) {
      for (local_18 = 1; local_18 < 0xc9; local_18 = local_18 + 1) {
        local_44 = 0;
        for (local_14 = -(uint)(byte)param_1[local_18 * 2];
            (local_14 < (int)(uint)(byte)param_1[local_18 * 2 + 1] && (local_18 + local_14 < 0xc9));
            local_14 = local_14 + 1) {
          __gnu_cxx::
          hash_map<int,CItem*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CItem*>>::begin
                    (local_4c);
          while( true ) {
            __gnu_cxx::
            hash_map<int,CItem*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CItem*>>::end
                      (local_40);
            cVar2 = __gnu_cxx::
                    _Hashtable_const_iterator<std::pair<int_const,CItem*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CItem*>>,std::equal_to<int>,std::allocator<CItem*>>
                    ::operator!=((_Hashtable_const_iterator<std::pair<int_const,CItem*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CItem*>>,std::equal_to<int>,std::allocator<CItem*>>
                                  *)local_4c,(_Hashtable_const_iterator *)local_40);
            if (cVar2 == '\0') break;
            iVar3 = __gnu_cxx::
                    _Hashtable_const_iterator<std::pair<int_const,CItem*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CItem*>>,std::equal_to<int>,std::allocator<CItem*>>
                    ::operator->((_Hashtable_const_iterator<std::pair<int_const,CItem*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CItem*>>,std::equal_to<int>,std::allocator<CItem*>>
                                  *)local_4c);
            local_10 = *(CItem **)(iVar3 + 4);
            iVar3 = CItem::get_gen_rate(local_10);
            if ((((iVar3 != 0) && (iVar3 = CItem::get_rarity(local_10), iVar3 == local_1c)) &&
                (cVar2 = _itemTypeVerify(this,local_20,local_10), cVar2 == '\x01')) &&
               (cVar2 = CItem::isSpecialMonsterDropItem(local_10), cVar2 == '\0')) {
              if ((param_2) ||
                 (cVar2 = (**(code **)(*(int *)local_10 + 0x4c))(local_10), cVar2 == '\0')) {
                bVar1 = false;
              }
              else {
                bVar1 = true;
              }
              if (!bVar1) {
                iVar3 = CItem::get_gen_rate(local_10);
                local_44 = iVar3 + local_44;
                local_28 = CItem::get_index(local_10);
                std::pair<unsigned_int_const,int>::pair<unsigned_int&,int>
                          (local_30,&local_44,&local_28);
                std::
                map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
                ::insert(local_38);
              }
            }
            __gnu_cxx::
            _Hashtable_const_iterator<std::pair<int_const,CItem*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CItem*>>,std::equal_to<int>,std::allocator<CItem*>>
            ::operator++((_Hashtable_const_iterator<std::pair<int_const,CItem*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CItem*>>,std::equal_to<int>,std::allocator<CItem*>>
                          *)local_4c);
          }
        }
      }
    }
  }
  return;
}

```

---

## init

```asm
// === 085345b6 WongWork::CItemGenRateTable::init  [0x085345b6-0x8534637] ===
 85345b6:	55                   	push   %ebp
 85345b7:	89 e5                	mov    %esp,%ebp
 85345b9:	57                   	push   %edi
 85345ba:	56                   	push   %esi
 85345bb:	53                   	push   %ebx
 85345bc:	83 ec 2c             	sub    $0x2c,%esp
 85345bf:	8b 45 08             	mov    0x8(%ebp),%eax
 85345c2:	8b 80 50 35 02 00    	mov    0x23550(%eax),%eax
 85345c8:	85 c0                	test   %eax,%eax
 85345ca:	74 11                	je     85345dd <_ZN8WongWork17CItemGenRateTable4initEv+0x27>
 85345cc:	8b 45 08             	mov    0x8(%ebp),%eax
 85345cf:	8b 80 50 35 02 00    	mov    0x23550(%eax),%eax
 85345d5:	89 04 24             	mov    %eax,(%esp)
 85345d8:	e8 13 ff 1e 00       	call   87244f0 <_ZdlPv>
 85345dd:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 85345e4:	e8 67 91 b4 ff       	call   807d750 <time@plt>
 85345e9:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 85345ec:	8d 75 e4             	lea    -0x1c(%ebp),%esi
 85345ef:	c7 04 24 c8 09 00 00 	movl   $0x9c8,(%esp)
 85345f6:	e8 55 fe 1e 00       	call   8724450 <_Znwj>
 85345fb:	89 c3                	mov    %eax,%ebx
 85345fd:	89 d8                	mov    %ebx,%eax
 85345ff:	89 74 24 04          	mov    %esi,0x4(%esp)
 8534603:	89 04 24             	mov    %eax,(%esp)
 8534606:	e8 1f 74 b9 ff       	call   80cba2a <_ZN7CMTRandC1ERKm>
 853460b:	eb 18                	jmp    8534625 <_ZN8WongWork17CItemGenRateTable4initEv+0x6f>
 853460d:	89 d6                	mov    %edx,%esi
 853460f:	89 c7                	mov    %eax,%edi
 8534611:	89 1c 24             	mov    %ebx,(%esp)
 8534614:	e8 d7 fe 1e 00       	call   87244f0 <_ZdlPv>
 8534619:	89 f8                	mov    %edi,%eax
 853461b:	89 f2                	mov    %esi,%edx
 853461d:	89 04 24             	mov    %eax,(%esp)
 8534620:	e8 2b f1 5a 00       	call   8ae3750 <_Unwind_Resume>
 8534625:	89 da                	mov    %ebx,%edx
 8534627:	8b 45 08             	mov    0x8(%ebp),%eax
 853462a:	89 90 50 35 02 00    	mov    %edx,0x23550(%eax)
 8534630:	83 c4 2c             	add    $0x2c,%esp
 8534633:	5b                   	pop    %ebx
 8534634:	5e                   	pop    %esi
 8534635:	5f                   	pop    %edi
 8534636:	5d                   	pop    %ebp
 8534637:	c3                   	ret

```

```c
// WongWork::CItemGenRateTable::init @ 0x85345b6

/* WongWork::CItemGenRateTable::init() */

void __thiscall WongWork::CItemGenRateTable::init(CItemGenRateTable *this)

{
  CMTRand *this_00;
  ulong local_20 [4];
  
  if (*(int *)(this + 0x23550) != 0) {
    operator_delete(*(void **)(this + 0x23550));
  }
  local_20[0] = time((time_t *)0x0);
  this_00 = operator_new(0x9c8);
                    /* try { // try from 08534606 to 0853460a has its CatchHandler @ 0853460d */
  CMTRand::CMTRand(this_00,local_20);
  *(CMTRand **)(this + 0x23550) = this_00;
  return;
}

```

