# CTitleBook

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 33

---

## CTitleBook

```asm
// === 0864103c CTitleBook::CTitleBook  [0x0864103c-0x86410b5] ===
 864103c:	55                   	push   %ebp
 864103d:	89 e5                	mov    %esp,%ebp
 864103f:	83 ec 18             	sub    $0x18,%esp
 8641042:	8b 45 08             	mov    0x8(%ebp),%eax
 8641045:	89 04 24             	mov    %eax,(%esp)
 8641048:	e8 6d 7c a8 ff       	call   80c8cba <_ZN13charac_expand5CDataC1Ev>
 864104d:	8b 45 08             	mov    0x8(%ebp),%eax
 8641050:	c7 00 48 b9 ce 08    	movl   $0x8ceb948,(%eax)
 8641056:	8b 45 08             	mov    0x8(%ebp),%eax
 8641059:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 8641060:	8b 45 08             	mov    0x8(%ebp),%eax
 8641063:	83 c0 0c             	add    $0xc,%eax
 8641066:	89 04 24             	mov    %eax,(%esp)
 8641069:	e8 bc e5 e4 ff       	call   848f62a <_ZN11stTitleBookC1Ev>
 864106e:	8b 45 08             	mov    0x8(%ebp),%eax
 8641071:	8d 50 0c             	lea    0xc(%eax),%edx
 8641074:	8b 45 08             	mov    0x8(%ebp),%eax
 8641077:	89 90 48 6b 00 00    	mov    %edx,0x6b48(%eax)
 864107d:	8b 45 08             	mov    0x8(%ebp),%eax
 8641080:	8d 90 ba 10 00 00    	lea    0x10ba(%eax),%edx
 8641086:	8b 45 08             	mov    0x8(%ebp),%eax
 8641089:	89 90 4c 6b 00 00    	mov    %edx,0x6b4c(%eax)
 864108f:	8b 45 08             	mov    0x8(%ebp),%eax
 8641092:	8d 90 62 40 00 00    	lea    0x4062(%eax),%edx
 8641098:	8b 45 08             	mov    0x8(%ebp),%eax
 864109b:	89 90 50 6b 00 00    	mov    %edx,0x6b50(%eax)
 86410a1:	8b 45 08             	mov    0x8(%ebp),%eax
 86410a4:	8d 90 fa 5c 00 00    	lea    0x5cfa(%eax),%edx
 86410aa:	8b 45 08             	mov    0x8(%ebp),%eax
 86410ad:	89 90 54 6b 00 00    	mov    %edx,0x6b54(%eax)
 86410b3:	c9                   	leave
 86410b4:	c3                   	ret
 86410b5:	90                   	nop

```

```c
// CTitleBook::CTitleBook @ 0x864103c

/* CTitleBook::CTitleBook() */

void __thiscall CTitleBook::CTitleBook(CTitleBook *this)

{
  charac_expand::CData::CData((CData *)this);
  *(undefined ***)this = &PTR_ResetDailyMidnight_08ceb948;
  *(undefined4 *)(this + 8) = 0;
  stTitleBook::stTitleBook((stTitleBook *)(this + 0xc));
  *(CTitleBook **)(this + 0x6b48) = this + 0xc;
  *(CTitleBook **)(this + 0x6b4c) = this + 0x10ba;
  *(CTitleBook **)(this + 0x6b50) = this + 0x4062;
  *(CTitleBook **)(this + 0x6b54) = this + 0x5cfa;
  return;
}

```

---

## _checkFitSlot

```asm
// === 08642d42 CTitleBook::_checkFitSlot  [0x08642d42-0x8642ec1] ===
 8642d42:	55                   	push   %ebp
 8642d43:	89 e5                	mov    %esp,%ebp
 8642d45:	83 ec 38             	sub    $0x38,%esp
 8642d48:	8b 45 0c             	mov    0xc(%ebp),%eax
 8642d4b:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8642d4e:	e8 48 94 a8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8642d53:	8d 88 a0 a7 00 00    	lea    0xa7a0(%eax),%ecx
 8642d59:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8642d5c:	8d 55 dc             	lea    -0x24(%ebp),%edx
 8642d5f:	89 54 24 08          	mov    %edx,0x8(%esp)
 8642d63:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8642d67:	89 04 24             	mov    %eax,(%esp)
 8642d6a:	e8 1d b2 c4 ff       	call   828df8c <_ZNSt3mapIiSt6vectorI14stTitleElementSaIS1_EESt4lessIiESaISt4pairIKiS3_EEE4findERS7_>
 8642d6f:	83 ec 04             	sub    $0x4,%esp
 8642d72:	e8 24 94 a8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8642d77:	8d 90 a0 a7 00 00    	lea    0xa7a0(%eax),%edx
 8642d7d:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8642d80:	89 54 24 04          	mov    %edx,0x4(%esp)
 8642d84:	89 04 24             	mov    %eax,(%esp)
 8642d87:	e8 2c b2 c4 ff       	call   828dfb8 <_ZNSt3mapIiSt6vectorI14stTitleElementSaIS1_EESt4lessIiESaISt4pairIKiS3_EEE3endEv>
 8642d8c:	83 ec 04             	sub    $0x4,%esp
 8642d8f:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8642d92:	89 44 24 04          	mov    %eax,0x4(%esp)
 8642d96:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8642d99:	89 04 24             	mov    %eax,(%esp)
 8642d9c:	e8 d9 c2 c4 ff       	call   828f07a <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt6vectorI14stTitleElementSaIS3_EEEEeqERKS7_>
 8642da1:	84 c0                	test   %al,%al
 8642da3:	74 0a                	je     8642daf <_ZN10CTitleBook13_checkFitSlotEi24ENUM_TITLE_BOOK_CATEGORYi+0x6d>
 8642da5:	b8 00 00 00 00       	mov    $0x0,%eax
 8642daa:	e9 10 01 00 00       	jmp    8642ebf <_ZN10CTitleBook13_checkFitSlotEi24ENUM_TITLE_BOOK_CATEGORYi+0x17d>
 8642daf:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8642db2:	89 04 24             	mov    %eax,(%esp)
 8642db5:	e8 38 b2 c4 ff       	call   828dff2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt6vectorI14stTitleElementSaIS3_EEEEptEv>
 8642dba:	83 c0 04             	add    $0x4,%eax
 8642dbd:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8642dc0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8642dc3:	89 04 24             	mov    %eax,(%esp)
 8642dc6:	e8 8d b4 c4 ff       	call   828e258 <_ZNKSt6vectorI14stTitleElementSaIS0_EE4sizeEv>
 8642dcb:	3b 45 10             	cmp    0x10(%ebp),%eax
 8642dce:	0f 9e c0             	setle  %al
 8642dd1:	84 c0                	test   %al,%al
 8642dd3:	74 0a                	je     8642ddf <_ZN10CTitleBook13_checkFitSlotEi24ENUM_TITLE_BOOK_CATEGORYi+0x9d>
 8642dd5:	b8 00 00 00 00       	mov    $0x0,%eax
 8642dda:	e9 e0 00 00 00       	jmp    8642ebf <_ZN10CTitleBook13_checkFitSlotEi24ENUM_TITLE_BOOK_CATEGORYi+0x17d>
 8642ddf:	8b 45 10             	mov    0x10(%ebp),%eax
 8642de2:	89 44 24 04          	mov    %eax,0x4(%esp)
 8642de6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8642de9:	89 04 24             	mov    %eax,(%esp)
 8642dec:	e8 71 03 00 00       	call   8643162 <_ZNKSt6vectorI14stTitleElementSaIS0_EEixEj>
 8642df1:	8d 50 04             	lea    0x4(%eax),%edx
 8642df4:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8642df7:	89 54 24 04          	mov    %edx,0x4(%esp)
 8642dfb:	89 04 24             	mov    %eax,(%esp)
 8642dfe:	e8 77 a5 a8 ff       	call   80cd37a <_ZNKSt6vectorIiSaIiEE3endEv>
 8642e03:	83 ec 04             	sub    $0x4,%esp
 8642e06:	8b 45 10             	mov    0x10(%ebp),%eax
 8642e09:	89 44 24 04          	mov    %eax,0x4(%esp)
 8642e0d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8642e10:	89 04 24             	mov    %eax,(%esp)
 8642e13:	e8 4a 03 00 00       	call   8643162 <_ZNKSt6vectorI14stTitleElementSaIS0_EEixEj>
 8642e18:	8d 50 04             	lea    0x4(%eax),%edx
 8642e1b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8642e1e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8642e22:	89 04 24             	mov    %eax,(%esp)
 8642e25:	e8 24 a5 a8 ff       	call   80cd34e <_ZNKSt6vectorIiSaIiEE5beginEv>
 8642e2a:	83 ec 04             	sub    $0x4,%esp
 8642e2d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8642e30:	8d 55 08             	lea    0x8(%ebp),%edx
 8642e33:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8642e37:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8642e3a:	89 54 24 08          	mov    %edx,0x8(%esp)
 8642e3e:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8642e41:	89 54 24 04          	mov    %edx,0x4(%esp)
 8642e45:	89 04 24             	mov    %eax,(%esp)
 8642e48:	e8 e6 1c d5 ff       	call   8394b33 <_ZSt4findIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEiET_S8_S8_RKT0_>
 8642e4d:	83 ec 04             	sub    $0x4,%esp
 8642e50:	8b 45 10             	mov    0x10(%ebp),%eax
 8642e53:	89 44 24 04          	mov    %eax,0x4(%esp)
 8642e57:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8642e5a:	89 04 24             	mov    %eax,(%esp)
 8642e5d:	e8 00 03 00 00       	call   8643162 <_ZNKSt6vectorI14stTitleElementSaIS0_EEixEj>
 8642e62:	8d 50 04             	lea    0x4(%eax),%edx
 8642e65:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8642e68:	89 54 24 04          	mov    %edx,0x4(%esp)
 8642e6c:	89 04 24             	mov    %eax,(%esp)
 8642e6f:	e8 06 a5 a8 ff       	call   80cd37a <_ZNKSt6vectorIiSaIiEE3endEv>
 8642e74:	83 ec 04             	sub    $0x4,%esp
 8642e77:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8642e7a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8642e7e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8642e81:	89 04 24             	mov    %eax,(%esp)
 8642e84:	e8 9d 6b ab ff       	call   80f9a26 <_ZN9__gnu_cxxneIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 8642e89:	84 c0                	test   %al,%al
 8642e8b:	74 07                	je     8642e94 <_ZN10CTitleBook13_checkFitSlotEi24ENUM_TITLE_BOOK_CATEGORYi+0x152>
 8642e8d:	b8 01 00 00 00       	mov    $0x1,%eax
 8642e92:	eb 2b                	jmp    8642ebf <_ZN10CTitleBook13_checkFitSlotEi24ENUM_TITLE_BOOK_CATEGORYi+0x17d>
 8642e94:	8b 45 10             	mov    0x10(%ebp),%eax
 8642e97:	89 44 24 04          	mov    %eax,0x4(%esp)
 8642e9b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8642e9e:	89 04 24             	mov    %eax,(%esp)
 8642ea1:	e8 bc 02 00 00       	call   8643162 <_ZNKSt6vectorI14stTitleElementSaIS0_EEixEj>
 8642ea6:	8b 40 1c             	mov    0x1c(%eax),%eax
 8642ea9:	83 f8 ff             	cmp    $0xffffffff,%eax
 8642eac:	0f 94 c0             	sete   %al
 8642eaf:	84 c0                	test   %al,%al
 8642eb1:	74 07                	je     8642eba <_ZN10CTitleBook13_checkFitSlotEi24ENUM_TITLE_BOOK_CATEGORYi+0x178>
 8642eb3:	b8 01 00 00 00       	mov    $0x1,%eax
 8642eb8:	eb 05                	jmp    8642ebf <_ZN10CTitleBook13_checkFitSlotEi24ENUM_TITLE_BOOK_CATEGORYi+0x17d>
 8642eba:	b8 00 00 00 00       	mov    $0x0,%eax
 8642ebf:	c9                   	leave
 8642ec0:	c3                   	ret
 8642ec1:	90                   	nop

```

```c
// CTitleBook::_checkFitSlot @ 0x8642d42

/* CTitleBook::_checkFitSlot(int, ENUM_TITLE_BOOK_CATEGORY, int) */

undefined4 CTitleBook::_checkFitSlot(undefined4 param_1,undefined4 param_2,uint param_3)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  _Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
  local_2c [4];
  undefined4 local_28;
  map<int,std::vector<stTitleElement,std::allocator<stTitleElement>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>>
  local_24 [4];
  undefined1 local_20 [4];
  undefined4 local_1c;
  undefined4 local_18;
  __normal_iterator local_14 [4];
  vector<stTitleElement,std::allocator<stTitleElement>> *local_10;
  
  local_28 = param_2;
  G_CDataManager();
  std::
  map<int,std::vector<stTitleElement,std::allocator<stTitleElement>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>>
  ::find((int *)local_2c);
  G_CDataManager();
  std::
  map<int,std::vector<stTitleElement,std::allocator<stTitleElement>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>>
  ::end(local_24);
  cVar1 = std::
          _Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
          ::operator==(local_2c,(_Rb_tree_iterator *)local_24);
  if (cVar1 == '\0') {
    iVar4 = std::
            _Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
            ::operator->(local_2c);
    local_10 = (vector<stTitleElement,std::allocator<stTitleElement>> *)(iVar4 + 4);
    iVar4 = std::vector<stTitleElement,std::allocator<stTitleElement>>::size(local_10);
    if ((int)param_3 < iVar4) {
      std::vector<stTitleElement,std::allocator<stTitleElement>>::operator[](local_10,param_3);
      std::vector<int,std::allocator<int>>::end();
      std::vector<stTitleElement,std::allocator<stTitleElement>>::operator[](local_10,param_3);
      std::vector<int,std::allocator<int>>::begin();
      std::find<__gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>,int>
                (local_20,local_18,local_1c,&param_1);
      std::vector<stTitleElement,std::allocator<stTitleElement>>::operator[](local_10,param_3);
      std::vector<int,std::allocator<int>>::end();
      bVar2 = __gnu_cxx::operator!=(local_14,local_20);
      if (bVar2) {
        uVar3 = 1;
      }
      else {
        iVar4 = std::vector<stTitleElement,std::allocator<stTitleElement>>::operator[]
                          (local_10,param_3);
        if (*(int *)(iVar4 + 0x1c) == -1) {
          uVar3 = 1;
        }
        else {
          uVar3 = 0;
        }
      }
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## _checkInsertTitle

```asm
// === 08641bdc CTitleBook::_checkInsertTitle  [0x08641bdc-0x8641c51] ===
 8641bdc:	55                   	push   %ebp
 8641bdd:	89 e5                	mov    %esp,%ebp
 8641bdf:	53                   	push   %ebx
 8641be0:	83 ec 24             	sub    $0x24,%esp
 8641be3:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 8641be7:	75 07                	jne    8641bf0 <_ZN10CTitleBook17_checkInsertTitleE24ENUM_TITLE_BOOK_CATEGORYiP10Inven_Item+0x14>
 8641be9:	b8 00 00 00 00       	mov    $0x0,%eax
 8641bee:	eb 5b                	jmp    8641c4b <_ZN10CTitleBook17_checkInsertTitleE24ENUM_TITLE_BOOK_CATEGORYiP10Inven_Item+0x6f>
 8641bf0:	8b 45 14             	mov    0x14(%ebp),%eax
 8641bf3:	8b 40 02             	mov    0x2(%eax),%eax
 8641bf6:	89 c3                	mov    %eax,%ebx
 8641bf8:	e8 9e a5 a8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8641bfd:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8641c01:	89 04 24             	mov    %eax,(%esp)
 8641c04:	e8 29 de d1 ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 8641c09:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8641c0c:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8641c10:	75 07                	jne    8641c19 <_ZN10CTitleBook17_checkInsertTitleE24ENUM_TITLE_BOOK_CATEGORYiP10Inven_Item+0x3d>
 8641c12:	b8 00 00 00 00       	mov    $0x0,%eax
 8641c17:	eb 32                	jmp    8641c4b <_ZN10CTitleBook17_checkInsertTitleE24ENUM_TITLE_BOOK_CATEGORYiP10Inven_Item+0x6f>
 8641c19:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8641c1c:	89 04 24             	mov    %eax,(%esp)
 8641c1f:	e8 d6 f6 aa ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 8641c24:	84 c0                	test   %al,%al
 8641c26:	74 07                	je     8641c2f <_ZN10CTitleBook17_checkInsertTitleE24ENUM_TITLE_BOOK_CATEGORYiP10Inven_Item+0x53>
 8641c28:	b8 00 00 00 00       	mov    $0x0,%eax
 8641c2d:	eb 1c                	jmp    8641c4b <_ZN10CTitleBook17_checkInsertTitleE24ENUM_TITLE_BOOK_CATEGORYiP10Inven_Item+0x6f>
 8641c2f:	83 7d 0c 03          	cmpl   $0x3,0xc(%ebp)
 8641c33:	75 11                	jne    8641c46 <_ZN10CTitleBook17_checkInsertTitleE24ENUM_TITLE_BOOK_CATEGORYiP10Inven_Item+0x6a>
 8641c35:	8b 45 14             	mov    0x14(%ebp),%eax
 8641c38:	0f b6 00             	movzbl (%eax),%eax
 8641c3b:	84 c0                	test   %al,%al
 8641c3d:	74 07                	je     8641c46 <_ZN10CTitleBook17_checkInsertTitleE24ENUM_TITLE_BOOK_CATEGORYiP10Inven_Item+0x6a>
 8641c3f:	b8 00 00 00 00       	mov    $0x0,%eax
 8641c44:	eb 05                	jmp    8641c4b <_ZN10CTitleBook17_checkInsertTitleE24ENUM_TITLE_BOOK_CATEGORYiP10Inven_Item+0x6f>
 8641c46:	b8 01 00 00 00       	mov    $0x1,%eax
 8641c4b:	83 c4 24             	add    $0x24,%esp
 8641c4e:	5b                   	pop    %ebx
 8641c4f:	5d                   	pop    %ebp
 8641c50:	c3                   	ret
 8641c51:	90                   	nop

```

```c
// CTitleBook::_checkInsertTitle @ 0x8641bdc

/* CTitleBook::_checkInsertTitle(ENUM_TITLE_BOOK_CATEGORY, int, Inven_Item*) */

undefined4 __thiscall
CTitleBook::_checkInsertTitle(undefined4 this,int param_2,undefined4 param_3,char *param_4)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  CDataManager *this_00;
  CItem *this_01;
  
  if (param_4 == (char *)0x0) {
    uVar3 = 0;
  }
  else {
    iVar1 = *(int *)(param_4 + 2);
    this_00 = (CDataManager *)G_CDataManager();
    this_01 = (CItem *)CDataManager::find_item(this_00,iVar1);
    if (this_01 == (CItem *)0x0) {
      uVar3 = 0;
    }
    else {
      cVar2 = CItem::is_stackable(this_01);
      if (cVar2 == '\0') {
        if ((param_2 == 3) && (*param_4 != '\0')) {
          uVar3 = 0;
        }
        else {
          uVar3 = 1;
        }
      }
      else {
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}

```

---

## _checkMovetoInven

```asm
// === 08641c52 CTitleBook::_checkMovetoInven  [0x08641c52-0x8641d15] ===
 8641c52:	55                   	push   %ebp
 8641c53:	89 e5                	mov    %esp,%ebp
 8641c55:	83 ec 28             	sub    $0x28,%esp
 8641c58:	8b 45 08             	mov    0x8(%ebp),%eax
 8641c5b:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8641c5e:	e8 38 a5 a8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8641c63:	8d 88 a0 a7 00 00    	lea    0xa7a0(%eax),%ecx
 8641c69:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8641c6c:	8d 55 ec             	lea    -0x14(%ebp),%edx
 8641c6f:	89 54 24 08          	mov    %edx,0x8(%esp)
 8641c73:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8641c77:	89 04 24             	mov    %eax,(%esp)
 8641c7a:	e8 0d c3 c4 ff       	call   828df8c <_ZNSt3mapIiSt6vectorI14stTitleElementSaIS1_EESt4lessIiESaISt4pairIKiS3_EEE4findERS7_>
 8641c7f:	83 ec 04             	sub    $0x4,%esp
 8641c82:	e8 14 a5 a8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8641c87:	8d 90 a0 a7 00 00    	lea    0xa7a0(%eax),%edx
 8641c8d:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8641c90:	89 54 24 04          	mov    %edx,0x4(%esp)
 8641c94:	89 04 24             	mov    %eax,(%esp)
 8641c97:	e8 1c c3 c4 ff       	call   828dfb8 <_ZNSt3mapIiSt6vectorI14stTitleElementSaIS1_EESt4lessIiESaISt4pairIKiS3_EEE3endEv>
 8641c9c:	83 ec 04             	sub    $0x4,%esp
 8641c9f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8641ca2:	89 44 24 04          	mov    %eax,0x4(%esp)
 8641ca6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8641ca9:	89 04 24             	mov    %eax,(%esp)
 8641cac:	e8 c9 d3 c4 ff       	call   828f07a <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt6vectorI14stTitleElementSaIS3_EEEEeqERKS7_>
 8641cb1:	84 c0                	test   %al,%al
 8641cb3:	74 07                	je     8641cbc <_ZN10CTitleBook17_checkMovetoInvenE24ENUM_TITLE_BOOK_CATEGORYi+0x6a>
 8641cb5:	b8 00 00 00 00       	mov    $0x0,%eax
 8641cba:	eb 58                	jmp    8641d14 <_ZN10CTitleBook17_checkMovetoInvenE24ENUM_TITLE_BOOK_CATEGORYi+0xc2>
 8641cbc:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8641cbf:	89 04 24             	mov    %eax,(%esp)
 8641cc2:	e8 2b c3 c4 ff       	call   828dff2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt6vectorI14stTitleElementSaIS3_EEEEptEv>
 8641cc7:	83 c0 04             	add    $0x4,%eax
 8641cca:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8641ccd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8641cd0:	89 04 24             	mov    %eax,(%esp)
 8641cd3:	e8 80 c5 c4 ff       	call   828e258 <_ZNKSt6vectorI14stTitleElementSaIS0_EE4sizeEv>
 8641cd8:	3b 45 0c             	cmp    0xc(%ebp),%eax
 8641cdb:	0f 9e c0             	setle  %al
 8641cde:	84 c0                	test   %al,%al
 8641ce0:	74 07                	je     8641ce9 <_ZN10CTitleBook17_checkMovetoInvenE24ENUM_TITLE_BOOK_CATEGORYi+0x97>
 8641ce2:	b8 00 00 00 00       	mov    $0x0,%eax
 8641ce7:	eb 2b                	jmp    8641d14 <_ZN10CTitleBook17_checkMovetoInvenE24ENUM_TITLE_BOOK_CATEGORYi+0xc2>
 8641ce9:	8b 45 0c             	mov    0xc(%ebp),%eax
 8641cec:	89 44 24 04          	mov    %eax,0x4(%esp)
 8641cf0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8641cf3:	89 04 24             	mov    %eax,(%esp)
 8641cf6:	e8 67 14 00 00       	call   8643162 <_ZNKSt6vectorI14stTitleElementSaIS0_EEixEj>
 8641cfb:	8b 40 1c             	mov    0x1c(%eax),%eax
 8641cfe:	83 f8 ff             	cmp    $0xffffffff,%eax
 8641d01:	0f 94 c0             	sete   %al
 8641d04:	84 c0                	test   %al,%al
 8641d06:	74 07                	je     8641d0f <_ZN10CTitleBook17_checkMovetoInvenE24ENUM_TITLE_BOOK_CATEGORYi+0xbd>
 8641d08:	b8 01 00 00 00       	mov    $0x1,%eax
 8641d0d:	eb 05                	jmp    8641d14 <_ZN10CTitleBook17_checkMovetoInvenE24ENUM_TITLE_BOOK_CATEGORYi+0xc2>
 8641d0f:	b8 00 00 00 00       	mov    $0x0,%eax
 8641d14:	c9                   	leave
 8641d15:	c3                   	ret

```

```c
// CTitleBook::_checkMovetoInven @ 0x8641c52

/* CTitleBook::_checkMovetoInven(ENUM_TITLE_BOOK_CATEGORY, int) */

undefined4 CTitleBook::_checkMovetoInven(undefined4 param_1,uint param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  _Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
  local_1c [4];
  undefined4 local_18;
  map<int,std::vector<stTitleElement,std::allocator<stTitleElement>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>>
  local_14 [4];
  vector<stTitleElement,std::allocator<stTitleElement>> *local_10;
  
  local_18 = param_1;
  G_CDataManager();
  std::
  map<int,std::vector<stTitleElement,std::allocator<stTitleElement>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>>
  ::find((int *)local_1c);
  G_CDataManager();
  std::
  map<int,std::vector<stTitleElement,std::allocator<stTitleElement>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>>
  ::end(local_14);
  cVar1 = std::
          _Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
          ::operator==(local_1c,(_Rb_tree_iterator *)local_14);
  if (cVar1 == '\0') {
    iVar3 = std::
            _Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
            ::operator->(local_1c);
    local_10 = (vector<stTitleElement,std::allocator<stTitleElement>> *)(iVar3 + 4);
    iVar3 = std::vector<stTitleElement,std::allocator<stTitleElement>>::size(local_10);
    if ((int)param_2 < iVar3) {
      iVar3 = std::vector<stTitleElement,std::allocator<stTitleElement>>::operator[]
                        (local_10,param_2);
      if (*(int *)(iVar3 + 0x1c) == -1) {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## _deleteTitle

```asm
// === 08641d50 CTitleBook::_deleteTitle  [0x08641d50-0x8641d83] ===
 8641d50:	55                   	push   %ebp
 8641d51:	89 e5                	mov    %esp,%ebp
 8641d53:	83 ec 18             	sub    $0x18,%esp
 8641d56:	8b 45 08             	mov    0x8(%ebp),%eax
 8641d59:	89 04 24             	mov    %eax,(%esp)
 8641d5c:	e8 63 6e a8 ff       	call   80c8bc4 <_ZN13charac_expand5CData5alterEv>
 8641d61:	8b 55 0c             	mov    0xc(%ebp),%edx
 8641d64:	8b 45 08             	mov    0x8(%ebp),%eax
 8641d67:	81 c2 d0 1a 00 00    	add    $0x1ad0,%edx
 8641d6d:	8b 54 90 08          	mov    0x8(%eax,%edx,4),%edx
 8641d71:	8b 45 10             	mov    0x10(%ebp),%eax
 8641d74:	6b c0 3d             	imul   $0x3d,%eax,%eax
 8641d77:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8641d7a:	89 04 24             	mov    %eax,(%esp)
 8641d7d:	e8 56 9a a8 ff       	call   80cb7d8 <_ZN10Inven_Item5resetEv>
 8641d82:	c9                   	leave
 8641d83:	c3                   	ret

```

```c
// CTitleBook::_deleteTitle @ 0x8641d50

/* CTitleBook::_deleteTitle(ENUM_TITLE_BOOK_CATEGORY, int) */

void __thiscall CTitleBook::_deleteTitle(CTitleBook *this,int param_2,int param_3)

{
  charac_expand::CData::alter((CData *)this);
  Inven_Item::reset((Inven_Item *)(*(int *)(this + (param_2 + 0x1ad0) * 4 + 8) + param_3 * 0x3d));
  return;
}

```

---

## _empty

```asm
// === 08641df2 CTitleBook::_empty  [0x08641df2-0x8641e5f] ===
 8641df2:	55                   	push   %ebp
 8641df3:	89 e5                	mov    %esp,%ebp
 8641df5:	83 ec 10             	sub    $0x10,%esp
 8641df8:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
 8641dff:	eb 4c                	jmp    8641e4d <_ZN10CTitleBook6_emptyEv+0x5b>
 8641e01:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 8641e08:	eb 2b                	jmp    8641e35 <_ZN10CTitleBook6_emptyEv+0x43>
 8641e0a:	8b 55 f8             	mov    -0x8(%ebp),%edx
 8641e0d:	8b 45 08             	mov    0x8(%ebp),%eax
 8641e10:	81 c2 d0 1a 00 00    	add    $0x1ad0,%edx
 8641e16:	8b 54 90 08          	mov    0x8(%eax,%edx,4),%edx
 8641e1a:	8b 45 fc             	mov    -0x4(%ebp),%eax
 8641e1d:	6b c0 3d             	imul   $0x3d,%eax,%eax
 8641e20:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8641e23:	8b 40 02             	mov    0x2(%eax),%eax
 8641e26:	85 c0                	test   %eax,%eax
 8641e28:	74 07                	je     8641e31 <_ZN10CTitleBook6_emptyEv+0x3f>
 8641e2a:	b8 00 00 00 00       	mov    $0x0,%eax
 8641e2f:	eb 2c                	jmp    8641e5d <_ZN10CTitleBook6_emptyEv+0x6b>
 8641e31:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 8641e35:	8b 45 f8             	mov    -0x8(%ebp),%eax
 8641e38:	8b 04 85 0c ae ce 08 	mov    0x8ceae0c(,%eax,4),%eax
 8641e3f:	3b 45 fc             	cmp    -0x4(%ebp),%eax
 8641e42:	0f 9f c0             	setg   %al
 8641e45:	84 c0                	test   %al,%al
 8641e47:	75 c1                	jne    8641e0a <_ZN10CTitleBook6_emptyEv+0x18>
 8641e49:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
 8641e4d:	83 7d f8 03          	cmpl   $0x3,-0x8(%ebp)
 8641e51:	0f 9e c0             	setle  %al
 8641e54:	84 c0                	test   %al,%al
 8641e56:	75 a9                	jne    8641e01 <_ZN10CTitleBook6_emptyEv+0xf>
 8641e58:	b8 01 00 00 00       	mov    $0x1,%eax
 8641e5d:	c9                   	leave
 8641e5e:	c3                   	ret
 8641e5f:	90                   	nop

```

```c
// CTitleBook::_empty @ 0x8641df2

/* CTitleBook::_empty() */

undefined4 __thiscall CTitleBook::_empty(CTitleBook *this)

{
  int local_c;
  int local_8;
  
  local_c = 0;
  do {
    if (3 < local_c) {
      return 1;
    }
    for (local_8 = 0; local_8 < *(int *)(::TITLE_BOOK_MAX + local_c * 4); local_8 = local_8 + 1) {
      if (*(int *)(*(int *)(this + (local_c + 0x1ad0) * 4 + 8) + local_8 * 0x3d + 2) != 0) {
        return 0;
      }
    }
    local_c = local_c + 1;
  } while( true );
}

```

---

## _getCategoryItemCount

```asm
// === 08641b84 CTitleBook::_getCategoryItemCount  [0x08641b84-0x8641bdb] ===
 8641b84:	55                   	push   %ebp
 8641b85:	89 e5                	mov    %esp,%ebp
 8641b87:	83 ec 10             	sub    $0x10,%esp
 8641b8a:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
 8641b91:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 8641b98:	eb 28                	jmp    8641bc2 <_ZN10CTitleBook21_getCategoryItemCountE24ENUM_TITLE_BOOK_CATEGORY+0x3e>
 8641b9a:	8b 55 0c             	mov    0xc(%ebp),%edx
 8641b9d:	8b 45 08             	mov    0x8(%ebp),%eax
 8641ba0:	81 c2 d0 1a 00 00    	add    $0x1ad0,%edx
 8641ba6:	8b 54 90 08          	mov    0x8(%eax,%edx,4),%edx
 8641baa:	8b 45 fc             	mov    -0x4(%ebp),%eax
 8641bad:	6b c0 3d             	imul   $0x3d,%eax,%eax
 8641bb0:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8641bb3:	8b 40 02             	mov    0x2(%eax),%eax
 8641bb6:	85 c0                	test   %eax,%eax
 8641bb8:	74 04                	je     8641bbe <_ZN10CTitleBook21_getCategoryItemCountE24ENUM_TITLE_BOOK_CATEGORY+0x3a>
 8641bba:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
 8641bbe:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 8641bc2:	8b 45 0c             	mov    0xc(%ebp),%eax
 8641bc5:	8b 04 85 0c ae ce 08 	mov    0x8ceae0c(,%eax,4),%eax
 8641bcc:	3b 45 fc             	cmp    -0x4(%ebp),%eax
 8641bcf:	0f 9f c0             	setg   %al
 8641bd2:	84 c0                	test   %al,%al
 8641bd4:	75 c4                	jne    8641b9a <_ZN10CTitleBook21_getCategoryItemCountE24ENUM_TITLE_BOOK_CATEGORY+0x16>
 8641bd6:	8b 45 f8             	mov    -0x8(%ebp),%eax
 8641bd9:	c9                   	leave
 8641bda:	c3                   	ret
 8641bdb:	90                   	nop

```

```c
// CTitleBook::_getCategoryItemCount @ 0x8641b84

/* CTitleBook::_getCategoryItemCount(ENUM_TITLE_BOOK_CATEGORY) */

int __thiscall CTitleBook::_getCategoryItemCount(CTitleBook *this,int param_2)

{
  int local_c;
  int local_8;
  
  local_c = 0;
  for (local_8 = 0; local_8 < *(int *)(::TITLE_BOOK_MAX + param_2 * 4); local_8 = local_8 + 1) {
    if (*(int *)(*(int *)(this + (param_2 + 0x1ad0) * 4 + 8) + local_8 * 0x3d + 2) != 0) {
      local_c = local_c + 1;
    }
  }
  return local_c;
}

```

---

## _getFitSlot

```asm
// === 08642baa CTitleBook::_getFitSlot  [0x08642baa-0x8642d41] ===
 8642baa:	55                   	push   %ebp
 8642bab:	89 e5                	mov    %esp,%ebp
 8642bad:	83 ec 38             	sub    $0x38,%esp
 8642bb0:	e8 e6 95 a8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8642bb5:	8d 90 a0 a7 00 00    	lea    0xa7a0(%eax),%edx
 8642bbb:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8642bbe:	89 54 24 04          	mov    %edx,0x4(%esp)
 8642bc2:	89 04 24             	mov    %eax,(%esp)
 8642bc5:	e8 68 b6 c4 ff       	call   828e232 <_ZNSt3mapIiSt6vectorI14stTitleElementSaIS1_EESt4lessIiESaISt4pairIKiS3_EEE5beginEv>
 8642bca:	83 ec 04             	sub    $0x4,%esp
 8642bcd:	e9 31 01 00 00       	jmp    8642d03 <_ZN10CTitleBook11_getFitSlotEiR24ENUM_TITLE_BOOK_CATEGORYRi+0x159>
 8642bd2:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8642bd9:	e9 f6 00 00 00       	jmp    8642cd4 <_ZN10CTitleBook11_getFitSlotEiR24ENUM_TITLE_BOOK_CATEGORYRi+0x12a>
 8642bde:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8642be1:	89 04 24             	mov    %eax,(%esp)
 8642be4:	e8 09 b4 c4 ff       	call   828dff2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt6vectorI14stTitleElementSaIS3_EEEEptEv>
 8642be9:	8d 50 04             	lea    0x4(%eax),%edx
 8642bec:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8642bef:	89 44 24 04          	mov    %eax,0x4(%esp)
 8642bf3:	89 14 24             	mov    %edx,(%esp)
 8642bf6:	e8 17 b5 c4 ff       	call   828e112 <_ZNSt6vectorI14stTitleElementSaIS0_EEixEj>
 8642bfb:	8d 50 04             	lea    0x4(%eax),%edx
 8642bfe:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8642c01:	89 54 24 04          	mov    %edx,0x4(%esp)
 8642c05:	89 04 24             	mov    %eax,(%esp)
 8642c08:	e8 5f b6 a4 ff       	call   808e26c <_ZNSt6vectorIiSaIiEE3endEv>
 8642c0d:	83 ec 04             	sub    $0x4,%esp
 8642c10:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8642c13:	89 04 24             	mov    %eax,(%esp)
 8642c16:	e8 d7 b3 c4 ff       	call   828dff2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt6vectorI14stTitleElementSaIS3_EEEEptEv>
 8642c1b:	8d 50 04             	lea    0x4(%eax),%edx
 8642c1e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8642c21:	89 44 24 04          	mov    %eax,0x4(%esp)
 8642c25:	89 14 24             	mov    %edx,(%esp)
 8642c28:	e8 e5 b4 c4 ff       	call   828e112 <_ZNSt6vectorI14stTitleElementSaIS0_EEixEj>
 8642c2d:	8d 50 04             	lea    0x4(%eax),%edx
 8642c30:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8642c33:	89 54 24 04          	mov    %edx,0x4(%esp)
 8642c37:	89 04 24             	mov    %eax,(%esp)
 8642c3a:	e8 09 b6 a4 ff       	call   808e248 <_ZNSt6vectorIiSaIiEE5beginEv>
 8642c3f:	83 ec 04             	sub    $0x4,%esp
 8642c42:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8642c45:	8d 55 08             	lea    0x8(%ebp),%edx
 8642c48:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8642c4c:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8642c4f:	89 54 24 08          	mov    %edx,0x8(%esp)
 8642c53:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8642c56:	89 54 24 04          	mov    %edx,0x4(%esp)
 8642c5a:	89 04 24             	mov    %eax,(%esp)
 8642c5d:	e8 35 6d ab ff       	call   80f9997 <_ZSt4findIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEiET_S7_S7_RKT0_>
 8642c62:	83 ec 04             	sub    $0x4,%esp
 8642c65:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8642c68:	89 04 24             	mov    %eax,(%esp)
 8642c6b:	e8 82 b3 c4 ff       	call   828dff2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt6vectorI14stTitleElementSaIS3_EEEEptEv>
 8642c70:	8d 50 04             	lea    0x4(%eax),%edx
 8642c73:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8642c76:	89 44 24 04          	mov    %eax,0x4(%esp)
 8642c7a:	89 14 24             	mov    %edx,(%esp)
 8642c7d:	e8 90 b4 c4 ff       	call   828e112 <_ZNSt6vectorI14stTitleElementSaIS0_EEixEj>
 8642c82:	8d 50 04             	lea    0x4(%eax),%edx
 8642c85:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8642c88:	89 54 24 04          	mov    %edx,0x4(%esp)
 8642c8c:	89 04 24             	mov    %eax,(%esp)
 8642c8f:	e8 d8 b5 a4 ff       	call   808e26c <_ZNSt6vectorIiSaIiEE3endEv>
 8642c94:	83 ec 04             	sub    $0x4,%esp
 8642c97:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8642c9a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8642c9e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8642ca1:	89 04 24             	mov    %eax,(%esp)
 8642ca4:	e8 b9 77 aa ff       	call   80ea462 <_ZN9__gnu_cxxneIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_>
 8642ca9:	84 c0                	test   %al,%al
 8642cab:	74 23                	je     8642cd0 <_ZN10CTitleBook11_getFitSlotEiR24ENUM_TITLE_BOOK_CATEGORYRi+0x126>
 8642cad:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8642cb0:	89 04 24             	mov    %eax,(%esp)
 8642cb3:	e8 3a b3 c4 ff       	call   828dff2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt6vectorI14stTitleElementSaIS3_EEEEptEv>
 8642cb8:	8b 00                	mov    (%eax),%eax
 8642cba:	89 c2                	mov    %eax,%edx
 8642cbc:	8b 45 0c             	mov    0xc(%ebp),%eax
 8642cbf:	89 10                	mov    %edx,(%eax)
 8642cc1:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8642cc4:	8b 45 10             	mov    0x10(%ebp),%eax
 8642cc7:	89 10                	mov    %edx,(%eax)
 8642cc9:	b8 01 00 00 00       	mov    $0x1,%eax
 8642cce:	eb 6f                	jmp    8642d3f <_ZN10CTitleBook11_getFitSlotEiR24ENUM_TITLE_BOOK_CATEGORYRi+0x195>
 8642cd0:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8642cd4:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8642cd7:	89 04 24             	mov    %eax,(%esp)
 8642cda:	e8 13 b3 c4 ff       	call   828dff2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt6vectorI14stTitleElementSaIS3_EEEEptEv>
 8642cdf:	83 c0 04             	add    $0x4,%eax
 8642ce2:	89 04 24             	mov    %eax,(%esp)
 8642ce5:	e8 6e b5 c4 ff       	call   828e258 <_ZNKSt6vectorI14stTitleElementSaIS0_EE4sizeEv>
 8642cea:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 8642ced:	0f 97 c0             	seta   %al
 8642cf0:	84 c0                	test   %al,%al
 8642cf2:	0f 85 e6 fe ff ff    	jne    8642bde <_ZN10CTitleBook11_getFitSlotEiR24ENUM_TITLE_BOOK_CATEGORYRi+0x34>
 8642cf8:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8642cfb:	89 04 24             	mov    %eax,(%esp)
 8642cfe:	e8 77 b5 c4 ff       	call   828e27a <_ZNSt17_Rb_tree_iteratorISt4pairIKiSt6vectorI14stTitleElementSaIS3_EEEEppEv>
 8642d03:	e8 93 94 a8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8642d08:	8d 90 a0 a7 00 00    	lea    0xa7a0(%eax),%edx
 8642d0e:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8642d11:	89 54 24 04          	mov    %edx,0x4(%esp)
 8642d15:	89 04 24             	mov    %eax,(%esp)
 8642d18:	e8 9b b2 c4 ff       	call   828dfb8 <_ZNSt3mapIiSt6vectorI14stTitleElementSaIS1_EESt4lessIiESaISt4pairIKiS3_EEE3endEv>
 8642d1d:	83 ec 04             	sub    $0x4,%esp
 8642d20:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8642d23:	89 44 24 04          	mov    %eax,0x4(%esp)
 8642d27:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8642d2a:	89 04 24             	mov    %eax,(%esp)
 8642d2d:	e8 ac b2 c4 ff       	call   828dfde <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt6vectorI14stTitleElementSaIS3_EEEEneERKS7_>
 8642d32:	84 c0                	test   %al,%al
 8642d34:	0f 85 98 fe ff ff    	jne    8642bd2 <_ZN10CTitleBook11_getFitSlotEiR24ENUM_TITLE_BOOK_CATEGORYRi+0x28>
 8642d3a:	b8 00 00 00 00       	mov    $0x0,%eax
 8642d3f:	c9                   	leave
 8642d40:	c3                   	ret
 8642d41:	90                   	nop

```

```c
// CTitleBook::_getFitSlot @ 0x8642baa

/* CTitleBook::_getFitSlot(int, ENUM_TITLE_BOOK_CATEGORY&, int&) */

undefined4 CTitleBook::_getFitSlot(int param_1,ENUM_TITLE_BOOK_CATEGORY *param_2,int *param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  int local_48 [3];
  int local_38;
  map<int,std::vector<stTitleElement,std::allocator<stTitleElement>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>>
  local_28 [4];
  undefined1 local_24 [4];
  undefined1 local_20 [4];
  uint local_1c;
  undefined4 local_18;
  undefined1 local_14 [4];
  uint local_10;
  
  puVar6 = (uint *)&stack0xffffffc4;
  local_38 = G_CDataManager();
  local_38 = local_38 + 0xa7a0;
  std::
  map<int,std::vector<stTitleElement,std::allocator<stTitleElement>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>>
  ::begin(local_28);
  do {
    puVar6[-1] = 0x8642d08;
    iVar5 = G_CDataManager();
    puVar6[1] = iVar5 + 0xa7a0;
    *puVar6 = (uint)local_24;
    puVar6[-1] = 0x8642d1d;
    std::
    map<int,std::vector<stTitleElement,std::allocator<stTitleElement>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>>
    ::end((map<int,std::vector<stTitleElement,std::allocator<stTitleElement>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>>
           *)*puVar6);
    puVar6[1] = (uint)local_24;
    *puVar6 = (uint)local_28;
    puVar6[-1] = 0x8642d32;
    cVar2 = std::
            _Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
            ::operator!=((_Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
                          *)*puVar6,(_Rb_tree_iterator *)puVar6[1]);
    if (cVar2 == '\0') {
      return 0;
    }
    local_10 = 0;
    while( true ) {
      *puVar6 = (uint)local_28;
      puVar6[-1] = 0x8642cdf;
      iVar5 = std::
              _Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
              ::operator->((_Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
                            *)*puVar6);
      *puVar6 = iVar5 + 4;
      puVar6[-1] = 0x8642cea;
      uVar4 = std::vector<stTitleElement,std::allocator<stTitleElement>>::size
                        ((vector<stTitleElement,std::allocator<stTitleElement>> *)*puVar6);
      if (uVar4 <= local_10) break;
      *puVar6 = (uint)local_28;
      puVar6[-1] = 0x8642be9;
      iVar5 = std::
              _Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
              ::operator->((_Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
                            *)*puVar6);
      puVar6[1] = local_10;
      *puVar6 = iVar5 + 4;
      puVar6[-1] = 0x8642bfb;
      iVar5 = std::vector<stTitleElement,std::allocator<stTitleElement>>::operator[]
                        ((vector<stTitleElement,std::allocator<stTitleElement>> *)*puVar6,puVar6[1])
      ;
      puVar6[1] = iVar5 + 4;
      *puVar6 = (uint)&local_1c;
      puVar6[-1] = 0x8642c0d;
      std::vector<int,std::allocator<int>>::end();
      *puVar6 = (uint)local_28;
      puVar6[-1] = 0x8642c1b;
      iVar5 = std::
              _Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
              ::operator->((_Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
                            *)*puVar6);
      puVar6[1] = local_10;
      *puVar6 = iVar5 + 4;
      puVar6[-1] = 0x8642c2d;
      iVar5 = std::vector<stTitleElement,std::allocator<stTitleElement>>::operator[]
                        ((vector<stTitleElement,std::allocator<stTitleElement>> *)*puVar6,puVar6[1])
      ;
      puVar6[1] = iVar5 + 4;
      *puVar6 = (uint)&local_18;
      puVar6[-1] = 0x8642c3f;
      std::vector<int,std::allocator<int>>::begin();
      puVar6[3] = (uint)&param_1;
      puVar6[2] = local_1c;
      puVar6[1] = local_18;
      *puVar6 = (uint)local_20;
      puVar6[-1] = 0x8642c62;
      std::find<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>();
      puVar6[-1] = (uint)local_28;
      puVar6[-2] = 0x8642c70;
      iVar5 = std::
              _Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
              ::operator->((_Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
                            *)puVar6[-1]);
      *puVar6 = local_10;
      puVar6[-1] = iVar5 + 4;
      puVar6[-2] = 0x8642c82;
      iVar5 = std::vector<stTitleElement,std::allocator<stTitleElement>>::operator[]
                        ((vector<stTitleElement,std::allocator<stTitleElement>> *)puVar6[-1],*puVar6
                        );
      *puVar6 = iVar5 + 4;
      puVar6[-1] = (uint)local_14;
      puVar6[-2] = 0x8642c94;
      std::vector<int,std::allocator<int>>::end();
      *puVar6 = (uint)local_20;
      puVar6[-1] = (uint)local_14;
      puVar6[-2] = 0x8642ca9;
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)puVar6[-1],(__normal_iterator *)*puVar6);
      if (bVar1) {
        puVar6[-1] = (uint)local_28;
        puVar6[-2] = 0x8642cb8;
        puVar3 = (undefined4 *)
                 std::
                 _Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
                 ::operator->((_Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
                               *)puVar6[-1]);
        *(undefined4 *)param_2 = *puVar3;
        *param_3 = local_10;
        return 1;
      }
      local_10 = local_10 + 1;
      puVar6 = puVar6 + -1;
    }
    *puVar6 = (uint)local_28;
    puVar6[-1] = 0x8642d03;
    std::
    _Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
    ::operator++((_Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
                  *)*puVar6);
  } while( true );
}

```

---

## _getOwnerTitleInfo

```asm
// === 08641994 CTitleBook::_getOwnerTitleInfo  [0x08641994-0x8641a69] ===
 8641994:	55                   	push   %ebp
 8641995:	89 e5                	mov    %esp,%ebp
 8641997:	53                   	push   %ebx
 8641998:	83 ec 54             	sub    $0x54,%esp
 864199b:	8b 45 08             	mov    0x8(%ebp),%eax
 864199e:	8b 40 08             	mov    0x8(%eax),%eax
 86419a1:	89 04 24             	mov    %eax,(%esp)
 86419a4:	e8 d5 88 a9 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 86419a9:	8b 5d 14             	mov    0x14(%ebp),%ebx
 86419ac:	8d 55 b8             	lea    -0x48(%ebp),%edx
 86419af:	c7 44 24 0c 0b 00 00 	movl   $0xb,0xc(%esp)
 86419b6:	00 
 86419b7:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 86419be:	00 
 86419bf:	89 44 24 04          	mov    %eax,0x4(%esp)
 86419c3:	89 14 24             	mov    %edx,(%esp)
 86419c6:	e8 4d 9f eb ff       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 86419cb:	83 ec 04             	sub    $0x4,%esp
 86419ce:	8b 45 b8             	mov    -0x48(%ebp),%eax
 86419d1:	89 03                	mov    %eax,(%ebx)
 86419d3:	8b 45 bc             	mov    -0x44(%ebp),%eax
 86419d6:	89 43 04             	mov    %eax,0x4(%ebx)
 86419d9:	8b 45 c0             	mov    -0x40(%ebp),%eax
 86419dc:	89 43 08             	mov    %eax,0x8(%ebx)
 86419df:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 86419e2:	89 43 0c             	mov    %eax,0xc(%ebx)
 86419e5:	8b 45 c8             	mov    -0x38(%ebp),%eax
 86419e8:	89 43 10             	mov    %eax,0x10(%ebx)
 86419eb:	8b 45 cc             	mov    -0x34(%ebp),%eax
 86419ee:	89 43 14             	mov    %eax,0x14(%ebx)
 86419f1:	8b 45 d0             	mov    -0x30(%ebp),%eax
 86419f4:	89 43 18             	mov    %eax,0x18(%ebx)
 86419f7:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 86419fa:	89 43 1c             	mov    %eax,0x1c(%ebx)
 86419fd:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8641a00:	89 43 20             	mov    %eax,0x20(%ebx)
 8641a03:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8641a06:	89 43 24             	mov    %eax,0x24(%ebx)
 8641a09:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8641a0c:	89 43 28             	mov    %eax,0x28(%ebx)
 8641a0f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8641a12:	89 43 2c             	mov    %eax,0x2c(%ebx)
 8641a15:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8641a18:	89 43 30             	mov    %eax,0x30(%ebx)
 8641a1b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8641a1e:	89 43 34             	mov    %eax,0x34(%ebx)
 8641a21:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8641a24:	89 43 38             	mov    %eax,0x38(%ebx)
 8641a27:	0f b6 45 f4          	movzbl -0xc(%ebp),%eax
 8641a2b:	88 43 3c             	mov    %al,0x3c(%ebx)
 8641a2e:	8b 45 14             	mov    0x14(%ebp),%eax
 8641a31:	8b 40 02             	mov    0x2(%eax),%eax
 8641a34:	85 c0                	test   %eax,%eax
 8641a36:	74 27                	je     8641a5f <_ZN10CTitleBook18_getOwnerTitleInfoER24ENUM_TITLE_BOOK_CATEGORYRiP10Inven_Item+0xcb>
 8641a38:	8b 45 14             	mov    0x14(%ebp),%eax
 8641a3b:	8b 40 02             	mov    0x2(%eax),%eax
 8641a3e:	8b 55 10             	mov    0x10(%ebp),%edx
 8641a41:	89 54 24 08          	mov    %edx,0x8(%esp)
 8641a45:	8b 55 0c             	mov    0xc(%ebp),%edx
 8641a48:	89 54 24 04          	mov    %edx,0x4(%esp)
 8641a4c:	89 04 24             	mov    %eax,(%esp)
 8641a4f:	e8 56 11 00 00       	call   8642baa <_ZN10CTitleBook11_getFitSlotEiR24ENUM_TITLE_BOOK_CATEGORYRi>
 8641a54:	84 c0                	test   %al,%al
 8641a56:	74 07                	je     8641a5f <_ZN10CTitleBook18_getOwnerTitleInfoER24ENUM_TITLE_BOOK_CATEGORYRiP10Inven_Item+0xcb>
 8641a58:	b8 01 00 00 00       	mov    $0x1,%eax
 8641a5d:	eb 05                	jmp    8641a64 <_ZN10CTitleBook18_getOwnerTitleInfoER24ENUM_TITLE_BOOK_CATEGORYRiP10Inven_Item+0xd0>
 8641a5f:	b8 00 00 00 00       	mov    $0x0,%eax
 8641a64:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 8641a67:	c9                   	leave
 8641a68:	c3                   	ret
 8641a69:	90                   	nop

```

```c
// CTitleBook::_getOwnerTitleInfo @ 0x8641994

/* CTitleBook::_getOwnerTitleInfo(ENUM_TITLE_BOOK_CATEGORY&, int&, Inven_Item*) */

undefined4 __thiscall
CTitleBook::_getOwnerTitleInfo
          (CTitleBook *this,ENUM_TITLE_BOOK_CATEGORY *param_1,int *param_2,Inven_Item *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  Inven_Item local_10;
  
  iVar2 = CUserCharacInfo::getCurCharacInvenR(*(CUserCharacInfo **)(this + 8));
  CInventory::GetInvenSlot((int)&local_4c,iVar2);
  *(undefined4 *)param_3 = local_4c;
  *(undefined4 *)(param_3 + 4) = local_48;
  *(undefined4 *)(param_3 + 8) = local_44;
  *(undefined4 *)(param_3 + 0xc) = local_40;
  *(undefined4 *)(param_3 + 0x10) = local_3c;
  *(undefined4 *)(param_3 + 0x14) = local_38;
  *(undefined4 *)(param_3 + 0x18) = local_34;
  *(undefined4 *)(param_3 + 0x1c) = local_30;
  *(undefined4 *)(param_3 + 0x20) = local_2c;
  *(undefined4 *)(param_3 + 0x24) = local_28;
  *(undefined4 *)(param_3 + 0x28) = local_24;
  *(undefined4 *)(param_3 + 0x2c) = local_20;
  *(undefined4 *)(param_3 + 0x30) = local_1c;
  *(undefined4 *)(param_3 + 0x34) = local_18;
  *(undefined4 *)(param_3 + 0x38) = local_14;
  param_3[0x3c] = local_10;
  if ((*(int *)(param_3 + 2) != 0) &&
     (cVar1 = _getFitSlot(*(int *)(param_3 + 2),param_1,param_2), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}

```

---

## _getTitle

```asm
// === 08641d84 CTitleBook::_getTitle  [0x08641d84-0x8641daf] ===
 8641d84:	55                   	push   %ebp
 8641d85:	89 e5                	mov    %esp,%ebp
 8641d87:	83 ec 18             	sub    $0x18,%esp
 8641d8a:	8b 45 08             	mov    0x8(%ebp),%eax
 8641d8d:	89 04 24             	mov    %eax,(%esp)
 8641d90:	e8 2f 6e a8 ff       	call   80c8bc4 <_ZN13charac_expand5CData5alterEv>
 8641d95:	8b 55 0c             	mov    0xc(%ebp),%edx
 8641d98:	8b 45 08             	mov    0x8(%ebp),%eax
 8641d9b:	81 c2 d0 1a 00 00    	add    $0x1ad0,%edx
 8641da1:	8b 54 90 08          	mov    0x8(%eax,%edx,4),%edx
 8641da5:	8b 45 10             	mov    0x10(%ebp),%eax
 8641da8:	6b c0 3d             	imul   $0x3d,%eax,%eax
 8641dab:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8641dae:	c9                   	leave
 8641daf:	c3                   	ret

```

```c
// CTitleBook::_getTitle @ 0x8641d84

/* CTitleBook::_getTitle(ENUM_TITLE_BOOK_CATEGORY, int) */

int __thiscall CTitleBook::_getTitle(CTitleBook *this,int param_2,int param_3)

{
  charac_expand::CData::alter((CData *)this);
  return *(int *)(this + (param_2 + 0x1ad0) * 4 + 8) + param_3 * 0x3d;
}

```

---

## _getTitleR

```asm
// === 08641db0 CTitleBook::_getTitleR  [0x08641db0-0x8641df1] ===
 8641db0:	55                   	push   %ebp
 8641db1:	89 e5                	mov    %esp,%ebp
 8641db3:	53                   	push   %ebx
 8641db4:	83 ec 14             	sub    $0x14,%esp
 8641db7:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8641dba:	8b 55 10             	mov    0x10(%ebp),%edx
 8641dbd:	8b 45 0c             	mov    0xc(%ebp),%eax
 8641dc0:	81 c2 d0 1a 00 00    	add    $0x1ad0,%edx
 8641dc6:	8b 54 90 08          	mov    0x8(%eax,%edx,4),%edx
 8641dca:	8b 45 14             	mov    0x14(%ebp),%eax
 8641dcd:	6b c0 3d             	imul   $0x3d,%eax,%eax
 8641dd0:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8641dd3:	c7 44 24 08 3d 00 00 	movl   $0x3d,0x8(%esp)
 8641dda:	00 
 8641ddb:	89 44 24 04          	mov    %eax,0x4(%esp)
 8641ddf:	89 1c 24             	mov    %ebx,(%esp)
 8641de2:	e8 99 ba a3 ff       	call   807d880 <memmove@plt>
 8641de7:	89 d8                	mov    %ebx,%eax
 8641de9:	83 c4 14             	add    $0x14,%esp
 8641dec:	5b                   	pop    %ebx
 8641ded:	5d                   	pop    %ebp
 8641dee:	c2 04 00             	ret    $0x4
 8641df1:	90                   	nop

```

```c
// CTitleBook::_getTitleR @ 0x8641db0

/* CTitleBook::_getTitleR(ENUM_TITLE_BOOK_CATEGORY, int) */

void * CTitleBook::_getTitleR(void *param_1,int param_2,int param_3,int param_4)

{
  memmove(param_1,(void *)(*(int *)(param_2 + 8 + (param_3 + 0x1ad0) * 4) + param_4 * 0x3d),0x3d);
  return param_1;
}

```

---

## _gm_clear

```asm
// === 086410d6 CTitleBook::_gm_clear  [0x086410d6-0x86410f7] ===
 86410d6:	55                   	push   %ebp
 86410d7:	89 e5                	mov    %esp,%ebp
 86410d9:	83 ec 18             	sub    $0x18,%esp
 86410dc:	8b 45 08             	mov    0x8(%ebp),%eax
 86410df:	89 04 24             	mov    %eax,(%esp)
 86410e2:	e8 dd 7a a8 ff       	call   80c8bc4 <_ZN13charac_expand5CData5alterEv>
 86410e7:	8b 45 08             	mov    0x8(%ebp),%eax
 86410ea:	83 c0 0c             	add    $0xc,%eax
 86410ed:	89 04 24             	mov    %eax,(%esp)
 86410f0:	e8 ef e5 e4 ff       	call   848f6e4 <_ZN11stTitleBook5clearEv>
 86410f5:	c9                   	leave
 86410f6:	c3                   	ret
 86410f7:	90                   	nop

```

```c
// CTitleBook::_gm_clear @ 0x86410d6

/* CTitleBook::_gm_clear() */

void __thiscall CTitleBook::_gm_clear(CTitleBook *this)

{
  charac_expand::CData::alter((CData *)this);
  stTitleBook::clear((stTitleBook *)(this + 0xc));
  return;
}

```

---

## _insertTitle

```asm
// === 08641d16 CTitleBook::_insertTitle  [0x08641d16-0x8641d4f] ===
 8641d16:	55                   	push   %ebp
 8641d17:	89 e5                	mov    %esp,%ebp
 8641d19:	83 ec 18             	sub    $0x18,%esp
 8641d1c:	8b 45 08             	mov    0x8(%ebp),%eax
 8641d1f:	89 04 24             	mov    %eax,(%esp)
 8641d22:	e8 9d 6e a8 ff       	call   80c8bc4 <_ZN13charac_expand5CData5alterEv>
 8641d27:	8b 55 0c             	mov    0xc(%ebp),%edx
 8641d2a:	8b 45 08             	mov    0x8(%ebp),%eax
 8641d2d:	81 c2 d0 1a 00 00    	add    $0x1ad0,%edx
 8641d33:	8b 54 90 08          	mov    0x8(%eax,%edx,4),%edx
 8641d37:	8b 45 10             	mov    0x10(%ebp),%eax
 8641d3a:	6b c0 3d             	imul   $0x3d,%eax,%eax
 8641d3d:	01 c2                	add    %eax,%edx
 8641d3f:	8b 45 14             	mov    0x14(%ebp),%eax
 8641d42:	89 44 24 04          	mov    %eax,0x4(%esp)
 8641d46:	89 14 24             	mov    %edx,(%esp)
 8641d49:	e8 e0 88 b0 ff       	call   814a62e <_ZN10Inven_Item7setCopyERKS_>
 8641d4e:	c9                   	leave
 8641d4f:	c3                   	ret

```

```c
// CTitleBook::_insertTitle @ 0x8641d16

/* CTitleBook::_insertTitle(ENUM_TITLE_BOOK_CATEGORY, int, Inven_Item*) */

void __thiscall
CTitleBook::_insertTitle(CTitleBook *this,int param_2,int param_3,Inven_Item *param_4)

{
  charac_expand::CData::alter((CData *)this);
  Inven_Item::setCopy((Inven_Item *)(*(int *)(this + (param_2 + 0x1ad0) * 4 + 8) + param_3 * 0x3d),
                      param_4);
  return;
}

```

---

## _isMatchedItem

```asm
// === 0864306e CTitleBook::_isMatchedItem  [0x0864306e-0x86430ee] ===
 864306e:	55                   	push   %ebp
 864306f:	89 e5                	mov    %esp,%ebp
 8643071:	83 ec 28             	sub    $0x28,%esp
 8643074:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8643077:	8b 55 10             	mov    0x10(%ebp),%edx
 864307a:	89 54 24 04          	mov    %edx,0x4(%esp)
 864307e:	89 04 24             	mov    %eax,(%esp)
 8643081:	e8 9a e1 ac ff       	call   8111220 <_ZNKSt6vectorISt4pairIiiESaIS1_EE5beginEv>
 8643086:	83 ec 04             	sub    $0x4,%esp
 8643089:	8d 45 f0             	lea    -0x10(%ebp),%eax
 864308c:	8b 55 10             	mov    0x10(%ebp),%edx
 864308f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8643093:	89 04 24             	mov    %eax,(%esp)
 8643096:	e8 b1 e1 ac ff       	call   811124c <_ZNKSt6vectorISt4pairIiiESaIS1_EE3endEv>
 864309b:	83 ec 04             	sub    $0x4,%esp
 864309e:	eb 32                	jmp    86430d2 <_ZN10CTitleBook14_isMatchedItemEiRKSt6vectorISt4pairIiiESaIS2_EE+0x64>
 86430a0:	8d 45 f4             	lea    -0xc(%ebp),%eax
 86430a3:	89 04 24             	mov    %eax,(%esp)
 86430a6:	e8 67 08 b5 ff       	call   8193912 <_ZNK9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEptEv>
 86430ab:	8b 00                	mov    (%eax),%eax
 86430ad:	3b 45 0c             	cmp    0xc(%ebp),%eax
 86430b0:	0f 94 c0             	sete   %al
 86430b3:	84 c0                	test   %al,%al
 86430b5:	74 10                	je     86430c7 <_ZN10CTitleBook14_isMatchedItemEiRKSt6vectorISt4pairIiiESaIS2_EE+0x59>
 86430b7:	8d 45 f4             	lea    -0xc(%ebp),%eax
 86430ba:	89 04 24             	mov    %eax,(%esp)
 86430bd:	e8 50 08 b5 ff       	call   8193912 <_ZNK9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEptEv>
 86430c2:	8b 40 04             	mov    0x4(%eax),%eax
 86430c5:	eb 26                	jmp    86430ed <_ZN10CTitleBook14_isMatchedItemEiRKSt6vectorISt4pairIiiESaIS2_EE+0x7f>
 86430c7:	8d 45 f4             	lea    -0xc(%ebp),%eax
 86430ca:	89 04 24             	mov    %eax,(%esp)
 86430cd:	e8 fe ab bf ff       	call   823dcd0 <_ZN9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEppEv>
 86430d2:	8d 45 f0             	lea    -0x10(%ebp),%eax
 86430d5:	89 44 24 04          	mov    %eax,0x4(%esp)
 86430d9:	8d 45 f4             	lea    -0xc(%ebp),%eax
 86430dc:	89 04 24             	mov    %eax,(%esp)
 86430df:	e8 01 08 b5 ff       	call   81938e5 <_ZN9__gnu_cxxneIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
 86430e4:	84 c0                	test   %al,%al
 86430e6:	75 b8                	jne    86430a0 <_ZN10CTitleBook14_isMatchedItemEiRKSt6vectorISt4pairIiiESaIS2_EE+0x32>
 86430e8:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 86430ed:	c9                   	leave
 86430ee:	c3                   	ret

```

```c
// CTitleBook::_isMatchedItem @ 0x864306e

/* CTitleBook::_isMatchedItem(int, std::vector<std::pair<int, int>, std::allocator<std::pair<int,
   int> > > const&) */

undefined4 CTitleBook::_isMatchedItem(int param_1,vector *param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  __normal_iterator local_14 [4];
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_10 [12];
  
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
  while( true ) {
    bVar1 = __gnu_cxx::operator!=(local_10,local_14);
    if (!bVar1) {
      return 0xffffffff;
    }
    piVar2 = (int *)__gnu_cxx::
                    __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                    ::operator->(local_10);
    if ((vector *)*piVar2 == param_2) break;
    __gnu_cxx::
    __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
    ::operator++(local_10);
  }
  iVar3 = __gnu_cxx::
          __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
          ::operator->(local_10);
  return *(undefined4 *)(iVar3 + 4);
}

```

---

## _putItemData

```asm
// === 08641a6a CTitleBook::_putItemData  [0x08641a6a-0x8641b83] ===
 8641a6a:	55                   	push   %ebp
 8641a6b:	89 e5                	mov    %esp,%ebp
 8641a6d:	83 ec 28             	sub    $0x28,%esp
 8641a70:	8b 45 10             	mov    0x10(%ebp),%eax
 8641a73:	66 89 45 f4          	mov    %ax,-0xc(%ebp)
 8641a77:	0f bf 55 f4          	movswl -0xc(%ebp),%edx
 8641a7b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8641a7e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8641a82:	89 04 24             	mov    %eax,(%esp)
 8641a85:	e8 1a 84 a9 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8641a8a:	8b 45 14             	mov    0x14(%ebp),%eax
 8641a8d:	8b 40 02             	mov    0x2(%eax),%eax
 8641a90:	89 c2                	mov    %eax,%edx
 8641a92:	8b 45 0c             	mov    0xc(%ebp),%eax
 8641a95:	89 54 24 04          	mov    %edx,0x4(%esp)
 8641a99:	89 04 24             	mov    %eax,(%esp)
 8641a9c:	e8 9b 9e a8 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8641aa1:	8b 45 14             	mov    0x14(%ebp),%eax
 8641aa4:	8b 50 07             	mov    0x7(%eax),%edx
 8641aa7:	8b 45 0c             	mov    0xc(%ebp),%eax
 8641aaa:	89 54 24 04          	mov    %edx,0x4(%esp)
 8641aae:	89 04 24             	mov    %eax,(%esp)
 8641ab1:	e8 86 9e a8 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8641ab6:	8b 45 14             	mov    0x14(%ebp),%eax
 8641ab9:	89 04 24             	mov    %eax,(%esp)
 8641abc:	e8 3e ab eb ff       	call   84fc5ff <_Z24GetIntegratedPvPItemAttrRK10Inven_Item>
 8641ac1:	0f b6 d0             	movzbl %al,%edx
 8641ac4:	8b 45 0c             	mov    0xc(%ebp),%eax
 8641ac7:	89 54 24 04          	mov    %edx,0x4(%esp)
 8641acb:	89 04 24             	mov    %eax,(%esp)
 8641ace:	e8 4d 9e a8 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8641ad3:	8b 45 14             	mov    0x14(%ebp),%eax
 8641ad6:	0f b7 40 0b          	movzwl 0xb(%eax),%eax
 8641ada:	0f b7 d0             	movzwl %ax,%edx
 8641add:	8b 45 0c             	mov    0xc(%ebp),%eax
 8641ae0:	89 54 24 04          	mov    %edx,0x4(%esp)
 8641ae4:	89 04 24             	mov    %eax,(%esp)
 8641ae7:	e8 b8 83 a9 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8641aec:	8b 45 14             	mov    0x14(%ebp),%eax
 8641aef:	0f b6 00             	movzbl (%eax),%eax
 8641af2:	0f b6 d0             	movzbl %al,%edx
 8641af5:	8b 45 0c             	mov    0xc(%ebp),%eax
 8641af8:	89 54 24 04          	mov    %edx,0x4(%esp)
 8641afc:	89 04 24             	mov    %eax,(%esp)
 8641aff:	e8 1c 9e a8 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8641b04:	e8 9e 88 a9 ff       	call   80da3a7 <_Z11G_GameWorldv>
 8641b09:	89 04 24             	mov    %eax,(%esp)
 8641b0c:	e8 eb 28 bf ff       	call   82343fc <_ZN9GameWorld24IsEnchantRevisionChannelEv>
 8641b11:	84 c0                	test   %al,%al
 8641b13:	74 15                	je     8641b2a <_ZN10CTitleBook12_putItemDataER11PacketGuardsR10Inven_Item+0xc0>
 8641b15:	8b 45 0c             	mov    0xc(%ebp),%eax
 8641b18:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8641b1f:	00 
 8641b20:	89 04 24             	mov    %eax,(%esp)
 8641b23:	e8 14 9e a8 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8641b28:	eb 17                	jmp    8641b41 <_ZN10CTitleBook12_putItemDataER11PacketGuardsR10Inven_Item+0xd7>
 8641b2a:	8b 45 14             	mov    0x14(%ebp),%eax
 8641b2d:	8b 40 0d             	mov    0xd(%eax),%eax
 8641b30:	89 c2                	mov    %eax,%edx
 8641b32:	8b 45 0c             	mov    0xc(%ebp),%eax
 8641b35:	89 54 24 04          	mov    %edx,0x4(%esp)
 8641b39:	89 04 24             	mov    %eax,(%esp)
 8641b3c:	e8 fb 9d a8 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8641b41:	8b 45 14             	mov    0x14(%ebp),%eax
 8641b44:	83 c0 11             	add    $0x11,%eax
 8641b47:	89 04 24             	mov    %eax,(%esp)
 8641b4a:	e8 e3 eb b0 ff       	call   8150732 <_ZNK17stAmplifyOption_t14getAbilityTypeEv>
 8641b4f:	0f b6 d0             	movzbl %al,%edx
 8641b52:	8b 45 0c             	mov    0xc(%ebp),%eax
 8641b55:	89 54 24 04          	mov    %edx,0x4(%esp)
 8641b59:	89 04 24             	mov    %eax,(%esp)
 8641b5c:	e8 bf 9d a8 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8641b61:	8b 45 14             	mov    0x14(%ebp),%eax
 8641b64:	83 c0 11             	add    $0x11,%eax
 8641b67:	89 04 24             	mov    %eax,(%esp)
 8641b6a:	e8 03 ec b0 ff       	call   8150772 <_ZNK17stAmplifyOption_t15getAbilityValueEv>
 8641b6f:	0f b7 d0             	movzwl %ax,%edx
 8641b72:	8b 45 0c             	mov    0xc(%ebp),%eax
 8641b75:	89 54 24 04          	mov    %edx,0x4(%esp)
 8641b79:	89 04 24             	mov    %eax,(%esp)
 8641b7c:	e8 23 83 a9 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8641b81:	c9                   	leave
 8641b82:	c3                   	ret
 8641b83:	90                   	nop

```

```c
// CTitleBook::_putItemData @ 0x8641a6a

/* CTitleBook::_putItemData(PacketGuard&, short, Inven_Item&) */

void __thiscall
CTitleBook::_putItemData(CTitleBook *this,PacketGuard *param_1,short param_2,Inven_Item *param_3)

{
  char cVar1;
  uint uVar2;
  GameWorld *this_00;
  
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,(int)param_2);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*(int *)(param_3 + 2));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*(int *)(param_3 + 7));
  uVar2 = GetIntegratedPvPItemAttr(param_3);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,uVar2 & 0xff);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,(uint)*(ushort *)(param_3 + 0xb));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,(uint)(byte)*param_3);
  this_00 = (GameWorld *)G_GameWorld();
  cVar1 = GameWorld::IsEnchantRevisionChannel(this_00);
  if (cVar1 == '\0') {
    InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*(int *)(param_3 + 0xd));
  }
  else {
    InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,0);
  }
  uVar2 = stAmplifyOption_t::getAbilityType((stAmplifyOption_t *)(param_3 + 0x11));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,uVar2 & 0xff);
  uVar2 = stAmplifyOption_t::getAbilityValue((stAmplifyOption_t *)(param_3 + 0x11));
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,uVar2 & 0xffff);
  return;
}

```

---

## _reset

```asm
// === 086410b6 CTitleBook::_reset  [0x086410b6-0x86410d5] ===
 86410b6:	55                   	push   %ebp
 86410b7:	89 e5                	mov    %esp,%ebp
 86410b9:	83 ec 18             	sub    $0x18,%esp
 86410bc:	8b 45 08             	mov    0x8(%ebp),%eax
 86410bf:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 86410c6:	8b 45 08             	mov    0x8(%ebp),%eax
 86410c9:	83 c0 0c             	add    $0xc,%eax
 86410cc:	89 04 24             	mov    %eax,(%esp)
 86410cf:	e8 10 e6 e4 ff       	call   848f6e4 <_ZN11stTitleBook5clearEv>
 86410d4:	c9                   	leave
 86410d5:	c3                   	ret

```

```c
// CTitleBook::_reset @ 0x86410b6

/* CTitleBook::_reset() */

void __thiscall CTitleBook::_reset(CTitleBook *this)

{
  *(undefined4 *)(this + 8) = 0;
  stTitleBook::clear((stTitleBook *)(this + 0xc));
  return;
}

```

---

## _saveData

```asm
// === 086414a8 CTitleBook::_saveData  [0x086414a8-0x864165d] ===
 86414a8:	55                   	push   %ebp
 86414a9:	89 e5                	mov    %esp,%ebp
 86414ab:	56                   	push   %esi
 86414ac:	53                   	push   %ebx
 86414ad:	83 ec 20             	sub    $0x20,%esp
 86414b0:	a1 a4 bd 40 09       	mov    0x940bda4,%eax
 86414b5:	c7 44 24 08 9c 00 00 	movl   $0x9c,0x8(%esp)
 86414bc:	00 
 86414bd:	c7 44 24 04 aa ab ce 	movl   $0x8ceabaa,0x4(%esp)
 86414c4:	08 
 86414c5:	89 04 24             	mov    %eax,(%esp)
 86414c8:	e8 95 ed c4 ff       	call   8290262 <_ZN13BigStreamPool7AcquireEPKci>
 86414cd:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 86414d4:	00 
 86414d5:	89 44 24 04          	mov    %eax,0x4(%esp)
 86414d9:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86414dc:	89 04 24             	mov    %eax,(%esp)
 86414df:	e8 42 77 a8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 86414e4:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86414e7:	89 04 24             	mov    %eax,(%esp)
 86414ea:	e8 57 77 a8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 86414ef:	c7 44 24 04 85 02 00 	movl   $0x285,0x4(%esp)
 86414f6:	00 
 86414f7:	89 04 24             	mov    %eax,(%esp)
 86414fa:	e8 57 77 a8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 86414ff:	8b 45 0c             	mov    0xc(%ebp),%eax
 8641502:	89 04 24             	mov    %eax,(%esp)
 8641505:	e8 8c 77 a8 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 864150a:	89 c3                	mov    %eax,%ebx
 864150c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 864150f:	89 04 24             	mov    %eax,(%esp)
 8641512:	e8 2f 77 a8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8641517:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 864151b:	89 04 24             	mov    %eax,(%esp)
 864151e:	e8 33 77 a8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8641523:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8641526:	89 04 24             	mov    %eax,(%esp)
 8641529:	e8 20 77 a8 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 864152e:	89 04 24             	mov    %eax,(%esp)
 8641531:	e8 16 1c 00 00       	call   864314c <_ZN12CStreamGuard11GetInBufferI16stTitleBook_SaveEEPT_v>
 8641536:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8641539:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 864153d:	75 0a                	jne    8641549 <_ZN10CTitleBook9_saveDataEP5CUser+0xa1>
 864153f:	bb 00 00 00 00       	mov    $0x0,%ebx
 8641544:	e9 01 01 00 00       	jmp    864164a <_ZN10CTitleBook9_saveDataEP5CUser+0x1a2>
 8641549:	c7 44 24 08 3e 6b 00 	movl   $0x6b3e,0x8(%esp)
 8641550:	00 
 8641551:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8641558:	00 
 8641559:	8b 45 f4             	mov    -0xc(%ebp),%eax
 864155c:	89 04 24             	mov    %eax,(%esp)
 864155f:	e8 5c c7 a3 ff       	call   807dcc0 <memset@plt>
 8641564:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 864156b:	ff 
 864156c:	8b 45 0c             	mov    0xc(%ebp),%eax
 864156f:	89 04 24             	mov    %eax,(%esp)
 8641572:	e8 29 ca 00 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 8641577:	8b 55 f4             	mov    -0xc(%ebp),%edx
 864157a:	89 82 3a 6b 00 00    	mov    %eax,0x6b3a(%edx)
 8641580:	8b 45 08             	mov    0x8(%ebp),%eax
 8641583:	8d 50 0c             	lea    0xc(%eax),%edx
 8641586:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8641589:	c7 44 24 08 ae 10 00 	movl   $0x10ae,0x8(%esp)
 8641590:	00 
 8641591:	89 54 24 04          	mov    %edx,0x4(%esp)
 8641595:	89 04 24             	mov    %eax,(%esp)
 8641598:	e8 03 c3 a3 ff       	call   807d8a0 <memcpy@plt>
 864159d:	8b 45 08             	mov    0x8(%ebp),%eax
 86415a0:	8d 90 ba 10 00 00    	lea    0x10ba(%eax),%edx
 86415a6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86415a9:	05 ae 10 00 00       	add    $0x10ae,%eax
 86415ae:	c7 44 24 08 a8 2f 00 	movl   $0x2fa8,0x8(%esp)
 86415b5:	00 
 86415b6:	89 54 24 04          	mov    %edx,0x4(%esp)
 86415ba:	89 04 24             	mov    %eax,(%esp)
 86415bd:	e8 de c2 a3 ff       	call   807d8a0 <memcpy@plt>
 86415c2:	8b 45 08             	mov    0x8(%ebp),%eax
 86415c5:	8d 90 62 40 00 00    	lea    0x4062(%eax),%edx
 86415cb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86415ce:	05 56 40 00 00       	add    $0x4056,%eax
 86415d3:	c7 44 24 08 98 1c 00 	movl   $0x1c98,0x8(%esp)
 86415da:	00 
 86415db:	89 54 24 04          	mov    %edx,0x4(%esp)
 86415df:	89 04 24             	mov    %eax,(%esp)
 86415e2:	e8 b9 c2 a3 ff       	call   807d8a0 <memcpy@plt>
 86415e7:	8b 45 08             	mov    0x8(%ebp),%eax
 86415ea:	8d 90 fa 5c 00 00    	lea    0x5cfa(%eax),%edx
 86415f0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86415f3:	05 ee 5c 00 00       	add    $0x5cee,%eax
 86415f8:	c7 44 24 08 4c 0e 00 	movl   $0xe4c,0x8(%esp)
 86415ff:	00 
 8641600:	89 54 24 04          	mov    %edx,0x4(%esp)
 8641604:	89 04 24             	mov    %eax,(%esp)
 8641607:	e8 94 c2 a3 ff       	call   807d8a0 <memcpy@plt>
 864160c:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8641611:	8d 55 ec             	lea    -0x14(%ebp),%edx
 8641614:	89 54 24 08          	mov    %edx,0x8(%esp)
 8641618:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 864161f:	00 
 8641620:	89 04 24             	mov    %eax,(%esp)
 8641623:	e8 b6 f9 f2 ff       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8641628:	bb 01 00 00 00       	mov    $0x1,%ebx
 864162d:	eb 1b                	jmp    864164a <_ZN10CTitleBook9_saveDataEP5CUser+0x1a2>
 864162f:	89 d3                	mov    %edx,%ebx
 8641631:	89 c6                	mov    %eax,%esi
 8641633:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8641636:	89 04 24             	mov    %eax,(%esp)
 8641639:	e8 94 b2 fd ff       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 864163e:	89 f0                	mov    %esi,%eax
 8641640:	89 da                	mov    %ebx,%edx
 8641642:	89 04 24             	mov    %eax,(%esp)
 8641645:	e8 06 21 4a 00       	call   8ae3750 <_Unwind_Resume>
 864164a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 864164d:	89 04 24             	mov    %eax,(%esp)
 8641650:	e8 7d b2 fd ff       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8641655:	89 d8                	mov    %ebx,%eax
 8641657:	83 c4 20             	add    $0x20,%esp
 864165a:	5b                   	pop    %ebx
 864165b:	5e                   	pop    %esi
 864165c:	5d                   	pop    %ebp
 864165d:	c3                   	ret

```

```c
// CTitleBook::_saveData @ 0x86414a8

/* CTitleBook::_saveData(CUser*) */

bool __thiscall CTitleBook::_saveData(CTitleBook *this,CUser *param_1)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  CStreamGuard local_18 [8];
  stTitleBook_Save *local_10;
  
  pSVar1 = (Stream *)BigStreamPool::Acquire(GlobalData::s_big_stream_pool,"TitleBook.cpp",0x9c);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 086414fa to 08641627 has its CatchHandler @ 0864162f */
  CStreamGuard::operator<<(pCVar2,0x285);
  iVar3 = CUser::GetUID(param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,iVar3);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<stTitleBook_Save>(pCVar2);
  bVar5 = local_10 != (stTitleBook_Save *)0x0;
  if (bVar5) {
    memset(local_10,0,0x6b3e);
    uVar4 = CUser::get_charac_no(param_1,-1);
    *(undefined4 *)(local_10 + 0x6b3a) = uVar4;
    memcpy(local_10,this + 0xc,0x10ae);
    memcpy(local_10 + 0x10ae,this + 0x10ba,0x2fa8);
    memcpy(local_10 + 0x4056,this + 0x4062,0x1c98);
    memcpy(local_10 + 0x5cee,this + 0x5cfa,0xe4c);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  }
  CStreamGuard::~CStreamGuard(local_18);
  return bVar5;
}

```

---

## _sendCategoryData

```asm
// === 086417aa CTitleBook::_sendCategoryData  [0x086417aa-0x8641993] ===
 86417aa:	55                   	push   %ebp
 86417ab:	89 e5                	mov    %esp,%ebp
 86417ad:	56                   	push   %esi
 86417ae:	53                   	push   %ebx
 86417af:	81 ec 90 00 00 00    	sub    $0x90,%esp
 86417b5:	8b 45 10             	mov    0x10(%ebp),%eax
 86417b8:	66 89 45 84          	mov    %ax,-0x7c(%ebp)
 86417bc:	c7 45 e4 04 00 00 00 	movl   $0x4,-0x1c(%ebp)
 86417c3:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 86417ca:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 86417d1:	8d 45 97             	lea    -0x69(%ebp),%eax
 86417d4:	89 04 24             	mov    %eax,(%esp)
 86417d7:	e8 78 a0 a8 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 86417dc:	8d 45 97             	lea    -0x69(%ebp),%eax
 86417df:	89 04 24             	mov    %eax,(%esp)
 86417e2:	e8 f1 9f a8 ff       	call   80cb7d8 <_ZN10Inven_Item5resetEv>
 86417e7:	c6 45 ef 00          	movb   $0x0,-0x11(%ebp)
 86417eb:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 86417ee:	89 04 24             	mov    %eax,(%esp)
 86417f1:	e8 56 c5 f4 ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 86417f6:	c7 44 24 08 65 01 00 	movl   $0x165,0x8(%esp)
 86417fd:	00 
 86417fe:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8641805:	00 
 8641806:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8641809:	89 04 24             	mov    %eax,(%esp)
 864180c:	e8 eb a0 a8 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8641811:	8b 45 18             	mov    0x18(%ebp),%eax
 8641814:	0f be c0             	movsbl %al,%eax
 8641817:	89 44 24 04          	mov    %eax,0x4(%esp)
 864181b:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 864181e:	89 04 24             	mov    %eax,(%esp)
 8641821:	e8 fa a0 a8 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8641826:	0f b7 45 84          	movzwl -0x7c(%ebp),%eax
 864182a:	89 44 24 04          	mov    %eax,0x4(%esp)
 864182e:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8641831:	89 04 24             	mov    %eax,(%esp)
 8641834:	e8 6b 86 a9 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8641839:	8b 45 14             	mov    0x14(%ebp),%eax
 864183c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8641840:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8641843:	89 04 24             	mov    %eax,(%esp)
 8641846:	e8 f1 a0 a8 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 864184b:	8b 45 14             	mov    0x14(%ebp),%eax
 864184e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8641852:	8b 45 08             	mov    0x8(%ebp),%eax
 8641855:	89 04 24             	mov    %eax,(%esp)
 8641858:	e8 27 03 00 00       	call   8641b84 <_ZN10CTitleBook21_getCategoryItemCountE24ENUM_TITLE_BOOK_CATEGORY>
 864185d:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8641860:	66 83 7d 84 00       	cmpw   $0x0,-0x7c(%ebp)
 8641865:	74 34                	je     864189b <_ZN10CTitleBook17_sendCategoryDataEP5CUsert24ENUM_TITLE_BOOK_CATEGORY25ENUM_TITLE_BOOK_INFO_TYPE+0xf1>
 8641867:	8d 45 97             	lea    -0x69(%ebp),%eax
 864186a:	89 44 24 0c          	mov    %eax,0xc(%esp)
 864186e:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8641871:	89 44 24 08          	mov    %eax,0x8(%esp)
 8641875:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8641878:	89 44 24 04          	mov    %eax,0x4(%esp)
 864187c:	8b 45 08             	mov    0x8(%ebp),%eax
 864187f:	89 04 24             	mov    %eax,(%esp)
 8641882:	e8 0d 01 00 00       	call   8641994 <_ZN10CTitleBook18_getOwnerTitleInfoER24ENUM_TITLE_BOOK_CATEGORYRiP10Inven_Item>
 8641887:	84 c0                	test   %al,%al
 8641889:	74 10                	je     864189b <_ZN10CTitleBook17_sendCategoryDataEP5CUsert24ENUM_TITLE_BOOK_CATEGORY25ENUM_TITLE_BOOK_INFO_TYPE+0xf1>
 864188b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 864188e:	39 45 14             	cmp    %eax,0x14(%ebp)
 8641891:	75 08                	jne    864189b <_ZN10CTitleBook17_sendCategoryDataEP5CUsert24ENUM_TITLE_BOOK_CATEGORY25ENUM_TITLE_BOOK_INFO_TYPE+0xf1>
 8641893:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 8641897:	c6 45 ef 01          	movb   $0x1,-0x11(%ebp)
 864189b:	8b 45 e8             	mov    -0x18(%ebp),%eax
 864189e:	89 44 24 04          	mov    %eax,0x4(%esp)
 86418a2:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 86418a5:	89 04 24             	mov    %eax,(%esp)
 86418a8:	e8 8f a0 a8 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 86418ad:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 86418b4:	eb 4b                	jmp    8641901 <_ZN10CTitleBook17_sendCategoryDataEP5CUsert24ENUM_TITLE_BOOK_CATEGORY25ENUM_TITLE_BOOK_INFO_TYPE+0x157>
 86418b6:	8b 55 14             	mov    0x14(%ebp),%edx
 86418b9:	8b 45 08             	mov    0x8(%ebp),%eax
 86418bc:	81 c2 d0 1a 00 00    	add    $0x1ad0,%edx
 86418c2:	8b 54 90 08          	mov    0x8(%eax,%edx,4),%edx
 86418c6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 86418c9:	6b c0 3d             	imul   $0x3d,%eax,%eax
 86418cc:	8d 04 02             	lea    (%edx,%eax,1),%eax
 86418cf:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86418d2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86418d5:	8b 40 02             	mov    0x2(%eax),%eax
 86418d8:	85 c0                	test   %eax,%eax
 86418da:	74 21                	je     86418fd <_ZN10CTitleBook17_sendCategoryDataEP5CUsert24ENUM_TITLE_BOOK_CATEGORY25ENUM_TITLE_BOOK_INFO_TYPE+0x153>
 86418dc:	8b 45 f0             	mov    -0x10(%ebp),%eax
 86418df:	98                   	cwtl
 86418e0:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86418e3:	89 54 24 0c          	mov    %edx,0xc(%esp)
 86418e7:	89 44 24 08          	mov    %eax,0x8(%esp)
 86418eb:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 86418ee:	89 44 24 04          	mov    %eax,0x4(%esp)
 86418f2:	8b 45 08             	mov    0x8(%ebp),%eax
 86418f5:	89 04 24             	mov    %eax,(%esp)
 86418f8:	e8 6d 01 00 00       	call   8641a6a <_ZN10CTitleBook12_putItemDataER11PacketGuardsR10Inven_Item>
 86418fd:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8641901:	8b 45 14             	mov    0x14(%ebp),%eax
 8641904:	8b 04 85 0c ae ce 08 	mov    0x8ceae0c(,%eax,4),%eax
 864190b:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 864190e:	0f 9f c0             	setg   %al
 8641911:	84 c0                	test   %al,%al
 8641913:	75 a1                	jne    86418b6 <_ZN10CTitleBook17_sendCategoryDataEP5CUsert24ENUM_TITLE_BOOK_CATEGORY25ENUM_TITLE_BOOK_INFO_TYPE+0x10c>
 8641915:	80 7d ef 00          	cmpb   $0x0,-0x11(%ebp)
 8641919:	74 21                	je     864193c <_ZN10CTitleBook17_sendCategoryDataEP5CUsert24ENUM_TITLE_BOOK_CATEGORY25ENUM_TITLE_BOOK_INFO_TYPE+0x192>
 864191b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 864191e:	98                   	cwtl
 864191f:	8d 55 97             	lea    -0x69(%ebp),%edx
 8641922:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8641926:	89 44 24 08          	mov    %eax,0x8(%esp)
 864192a:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 864192d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8641931:	8b 45 08             	mov    0x8(%ebp),%eax
 8641934:	89 04 24             	mov    %eax,(%esp)
 8641937:	e8 2e 01 00 00       	call   8641a6a <_ZN10CTitleBook12_putItemDataER11PacketGuardsR10Inven_Item>
 864193c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8641943:	00 
 8641944:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8641947:	89 04 24             	mov    %eax,(%esp)
 864194a:	e8 09 a0 a8 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 864194f:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8641952:	89 44 24 04          	mov    %eax,0x4(%esp)
 8641956:	8b 45 0c             	mov    0xc(%ebp),%eax
 8641959:	89 04 24             	mov    %eax,(%esp)
 864195c:	e8 59 6c 00 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8641961:	eb 1b                	jmp    864197e <_ZN10CTitleBook17_sendCategoryDataEP5CUsert24ENUM_TITLE_BOOK_CATEGORY25ENUM_TITLE_BOOK_INFO_TYPE+0x1d4>
 8641963:	89 d3                	mov    %edx,%ebx
 8641965:	89 c6                	mov    %eax,%esi
 8641967:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 864196a:	89 04 24             	mov    %eax,(%esp)
 864196d:	e8 0e c5 f4 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 8641972:	89 f0                	mov    %esi,%eax
 8641974:	89 da                	mov    %ebx,%edx
 8641976:	89 04 24             	mov    %eax,(%esp)
 8641979:	e8 d2 1d 4a 00       	call   8ae3750 <_Unwind_Resume>
 864197e:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8641981:	89 04 24             	mov    %eax,(%esp)
 8641984:	e8 f7 c4 f4 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 8641989:	81 c4 90 00 00 00    	add    $0x90,%esp
 864198f:	5b                   	pop    %ebx
 8641990:	5e                   	pop    %esi
 8641991:	5d                   	pop    %ebp
 8641992:	c3                   	ret
 8641993:	90                   	nop

```

```c
// CTitleBook::_sendCategoryData @ 0x86417aa

/* CTitleBook::_sendCategoryData(CUser*, unsigned short, ENUM_TITLE_BOOK_CATEGORY,
   ENUM_TITLE_BOOK_INFO_TYPE) */

void __thiscall
CTitleBook::_sendCategoryData
          (CTitleBook *this,CUser *param_1,ushort param_2,int param_4,char param_5)

{
  char cVar1;
  Inven_Item local_6d [61];
  PacketGuard local_30 [12];
  int local_24;
  int local_20;
  int local_1c;
  char local_15;
  int local_14;
  Inven_Item *local_10;
  
  local_20 = 4;
  local_24 = 0;
  local_1c = 0;
  Inven_Item::Inven_Item(local_6d);
  Inven_Item::reset(local_6d);
  local_15 = '\0';
  PacketGuard::PacketGuard(local_30);
                    /* try { // try from 0864180c to 08641960 has its CatchHandler @ 08641963 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,0,0x165);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,(int)param_5);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_30,(uint)param_2);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_30,param_4);
  local_1c = _getCategoryItemCount(this,param_4);
  if (param_2 != 0) {
    cVar1 = _getOwnerTitleInfo(this,(ENUM_TITLE_BOOK_CATEGORY *)&local_20,&local_24,local_6d);
    if ((cVar1 != '\0') && (param_4 == local_20)) {
      local_1c = local_1c + 1;
      local_15 = '\x01';
    }
  }
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_30,local_1c);
  for (local_14 = 0; local_14 < *(int *)(::TITLE_BOOK_MAX + param_4 * 4); local_14 = local_14 + 1) {
    local_10 = (Inven_Item *)(*(int *)(this + (param_4 + 0x1ad0) * 4 + 8) + local_14 * 0x3d);
    if (*(int *)(local_10 + 2) != 0) {
      _putItemData(this,local_30,(short)local_14,local_10);
    }
  }
  if (local_15 != '\0') {
    _putItemData(this,local_30,(short)local_24,local_6d);
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
  CUser::Send(param_1,local_30);
  PacketGuard::~PacketGuard(local_30);
  return;
}

```

---

## checkError

```asm
// === 08641fac CTitleBook::checkError  [0x08641fac-0x8642057] ===
 8641fac:	55                   	push   %ebp
 8641fad:	89 e5                	mov    %esp,%ebp
 8641faf:	83 ec 10             	sub    $0x10,%esp
 8641fb2:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
 8641fb6:	75 0a                	jne    8641fc2 <_ZN10CTitleBook10checkErrorEP5CUser24ENUM_TITLE_BOOK_CATEGORYi+0x16>
 8641fb8:	b8 03 00 00 00       	mov    $0x3,%eax
 8641fbd:	e9 93 00 00 00       	jmp    8642055 <_ZN10CTitleBook10checkErrorEP5CUser24ENUM_TITLE_BOOK_CATEGORYi+0xa9>
 8641fc2:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 8641fc9:	8b 45 0c             	mov    0xc(%ebp),%eax
 8641fcc:	83 f8 01             	cmp    $0x1,%eax
 8641fcf:	74 2c                	je     8641ffd <_ZN10CTitleBook10checkErrorEP5CUser24ENUM_TITLE_BOOK_CATEGORYi+0x51>
 8641fd1:	83 f8 01             	cmp    $0x1,%eax
 8641fd4:	7f 06                	jg     8641fdc <_ZN10CTitleBook10checkErrorEP5CUser24ENUM_TITLE_BOOK_CATEGORYi+0x30>
 8641fd6:	85 c0                	test   %eax,%eax
 8641fd8:	74 0e                	je     8641fe8 <_ZN10CTitleBook10checkErrorEP5CUser24ENUM_TITLE_BOOK_CATEGORYi+0x3c>
 8641fda:	eb 63                	jmp    864203f <_ZN10CTitleBook10checkErrorEP5CUser24ENUM_TITLE_BOOK_CATEGORYi+0x93>
 8641fdc:	83 f8 02             	cmp    $0x2,%eax
 8641fdf:	74 34                	je     8642015 <_ZN10CTitleBook10checkErrorEP5CUser24ENUM_TITLE_BOOK_CATEGORYi+0x69>
 8641fe1:	83 f8 03             	cmp    $0x3,%eax
 8641fe4:	74 44                	je     864202a <_ZN10CTitleBook10checkErrorEP5CUser24ENUM_TITLE_BOOK_CATEGORYi+0x7e>
 8641fe6:	eb 57                	jmp    864203f <_ZN10CTitleBook10checkErrorEP5CUser24ENUM_TITLE_BOOK_CATEGORYi+0x93>
 8641fe8:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 8641fec:	78 06                	js     8641ff4 <_ZN10CTitleBook10checkErrorEP5CUser24ENUM_TITLE_BOOK_CATEGORYi+0x48>
 8641fee:	83 7d 10 45          	cmpl   $0x45,0x10(%ebp)
 8641ff2:	7e 54                	jle    8642048 <_ZN10CTitleBook10checkErrorEP5CUser24ENUM_TITLE_BOOK_CATEGORYi+0x9c>
 8641ff4:	c7 45 fc 03 00 00 00 	movl   $0x3,-0x4(%ebp)
 8641ffb:	eb 55                	jmp    8642052 <_ZN10CTitleBook10checkErrorEP5CUser24ENUM_TITLE_BOOK_CATEGORYi+0xa6>
 8641ffd:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 8642001:	78 09                	js     864200c <_ZN10CTitleBook10checkErrorEP5CUser24ENUM_TITLE_BOOK_CATEGORYi+0x60>
 8642003:	81 7d 10 c7 00 00 00 	cmpl   $0xc7,0x10(%ebp)
 864200a:	7e 3f                	jle    864204b <_ZN10CTitleBook10checkErrorEP5CUser24ENUM_TITLE_BOOK_CATEGORYi+0x9f>
 864200c:	c7 45 fc 03 00 00 00 	movl   $0x3,-0x4(%ebp)
 8642013:	eb 3d                	jmp    8642052 <_ZN10CTitleBook10checkErrorEP5CUser24ENUM_TITLE_BOOK_CATEGORYi+0xa6>
 8642015:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 8642019:	78 06                	js     8642021 <_ZN10CTitleBook10checkErrorEP5CUser24ENUM_TITLE_BOOK_CATEGORYi+0x75>
 864201b:	83 7d 10 77          	cmpl   $0x77,0x10(%ebp)
 864201f:	7e 2d                	jle    864204e <_ZN10CTitleBook10checkErrorEP5CUser24ENUM_TITLE_BOOK_CATEGORYi+0xa2>
 8642021:	c7 45 fc 03 00 00 00 	movl   $0x3,-0x4(%ebp)
 8642028:	eb 28                	jmp    8642052 <_ZN10CTitleBook10checkErrorEP5CUser24ENUM_TITLE_BOOK_CATEGORYi+0xa6>
 864202a:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 864202e:	78 06                	js     8642036 <_ZN10CTitleBook10checkErrorEP5CUser24ENUM_TITLE_BOOK_CATEGORYi+0x8a>
 8642030:	83 7d 10 3b          	cmpl   $0x3b,0x10(%ebp)
 8642034:	7e 1b                	jle    8642051 <_ZN10CTitleBook10checkErrorEP5CUser24ENUM_TITLE_BOOK_CATEGORYi+0xa5>
 8642036:	c7 45 fc 03 00 00 00 	movl   $0x3,-0x4(%ebp)
 864203d:	eb 13                	jmp    8642052 <_ZN10CTitleBook10checkErrorEP5CUser24ENUM_TITLE_BOOK_CATEGORYi+0xa6>
 864203f:	c7 45 fc 03 00 00 00 	movl   $0x3,-0x4(%ebp)
 8642046:	eb 0a                	jmp    8642052 <_ZN10CTitleBook10checkErrorEP5CUser24ENUM_TITLE_BOOK_CATEGORYi+0xa6>
 8642048:	90                   	nop
 8642049:	eb 07                	jmp    8642052 <_ZN10CTitleBook10checkErrorEP5CUser24ENUM_TITLE_BOOK_CATEGORYi+0xa6>
 864204b:	90                   	nop
 864204c:	eb 04                	jmp    8642052 <_ZN10CTitleBook10checkErrorEP5CUser24ENUM_TITLE_BOOK_CATEGORYi+0xa6>
 864204e:	90                   	nop
 864204f:	eb 01                	jmp    8642052 <_ZN10CTitleBook10checkErrorEP5CUser24ENUM_TITLE_BOOK_CATEGORYi+0xa6>
 8642051:	90                   	nop
 8642052:	8b 45 fc             	mov    -0x4(%ebp),%eax
 8642055:	c9                   	leave
 8642056:	c3                   	ret
 8642057:	90                   	nop

```

```c
// CTitleBook::checkError @ 0x8641fac

/* CTitleBook::checkError(CUser*, ENUM_TITLE_BOOK_CATEGORY, int) */

undefined4 CTitleBook::checkError(int param_1,int param_2,int param_3)

{
  undefined4 local_8;
  
  if (param_1 == 0) {
    local_8 = 3;
  }
  else {
    local_8 = 0;
    if (param_2 == 1) {
      if ((param_3 < 0) || (199 < param_3)) {
        local_8 = 3;
      }
    }
    else {
      if (param_2 < 2) {
        if (param_2 == 0) {
          if ((-1 < param_3) && (param_3 < 0x46)) {
            return 0;
          }
          return 3;
        }
      }
      else {
        if (param_2 == 2) {
          if ((-1 < param_3) && (param_3 < 0x78)) {
            return 0;
          }
          return 3;
        }
        if (param_2 == 3) {
          if ((-1 < param_3) && (param_3 < 0x3c)) {
            return 0;
          }
          return 3;
        }
      }
      local_8 = 3;
    }
  }
  return local_8;
}

```

---

## deleteTimeoutItem

```asm
// === 0864125a CTitleBook::deleteTimeoutItem  [0x0864125a-0x86414a7] ===
 864125a:	55                   	push   %ebp
 864125b:	89 e5                	mov    %esp,%ebp
 864125d:	56                   	push   %esi
 864125e:	53                   	push   %ebx
 864125f:	83 ec 40             	sub    $0x40,%esp
 8641262:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8641265:	89 04 24             	mov    %eax,(%esp)
 8641268:	e8 69 37 af ff       	call   81349d6 <_ZNSt6vectorISt4pairIiiESaIS1_EEC1Ev>
 864126d:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8641274:	e9 5b 01 00 00       	jmp    86413d4 <_ZN10CTitleBook17deleteTimeoutItemERKSt6vectorISt4pairIiiESaIS2_EE+0x17a>
 8641279:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8641280:	e9 33 01 00 00       	jmp    86413b8 <_ZN10CTitleBook17deleteTimeoutItemERKSt6vectorISt4pairIiiESaIS2_EE+0x15e>
 8641285:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8641288:	8b 45 08             	mov    0x8(%ebp),%eax
 864128b:	81 c2 d0 1a 00 00    	add    $0x1ad0,%edx
 8641291:	8b 54 90 08          	mov    0x8(%eax,%edx,4),%edx
 8641295:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8641298:	6b c0 3d             	imul   $0x3d,%eax,%eax
 864129b:	8d 04 02             	lea    (%edx,%eax,1),%eax
 864129e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86412a1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86412a4:	8b 40 02             	mov    0x2(%eax),%eax
 86412a7:	85 c0                	test   %eax,%eax
 86412a9:	0f 84 05 01 00 00    	je     86413b4 <_ZN10CTitleBook17deleteTimeoutItemERKSt6vectorISt4pairIiiESaIS2_EE+0x15a>
 86412af:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86412b2:	89 04 24             	mov    %eax,(%esp)
 86412b5:	e8 d3 bc 03 00       	call   867cf8d <_Z17_checkTimeoutItemRK10Inven_Item>
 86412ba:	84 c0                	test   %al,%al
 86412bc:	75 21                	jne    86412df <_ZN10CTitleBook17deleteTimeoutItemERKSt6vectorISt4pairIiiESaIS2_EE+0x85>
 86412be:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86412c1:	8b 40 02             	mov    0x2(%eax),%eax
 86412c4:	8b 55 0c             	mov    0xc(%ebp),%edx
 86412c7:	89 54 24 08          	mov    %edx,0x8(%esp)
 86412cb:	89 44 24 04          	mov    %eax,0x4(%esp)
 86412cf:	8b 45 08             	mov    0x8(%ebp),%eax
 86412d2:	89 04 24             	mov    %eax,(%esp)
 86412d5:	e8 94 1d 00 00       	call   864306e <_ZN10CTitleBook14_isMatchedItemEiRKSt6vectorISt4pairIiiESaIS2_EE>
 86412da:	83 f8 ff             	cmp    $0xffffffff,%eax
 86412dd:	74 07                	je     86412e6 <_ZN10CTitleBook17deleteTimeoutItemERKSt6vectorISt4pairIiiESaIS2_EE+0x8c>
 86412df:	b8 01 00 00 00       	mov    $0x1,%eax
 86412e4:	eb 05                	jmp    86412eb <_ZN10CTitleBook17deleteTimeoutItemERKSt6vectorISt4pairIiiESaIS2_EE+0x91>
 86412e6:	b8 00 00 00 00       	mov    $0x0,%eax
 86412eb:	84 c0                	test   %al,%al
 86412ed:	74 31                	je     8641320 <_ZN10CTitleBook17deleteTimeoutItemERKSt6vectorISt4pairIiiESaIS2_EE+0xc6>
 86412ef:	8b 55 ec             	mov    -0x14(%ebp),%edx
 86412f2:	8b 45 08             	mov    0x8(%ebp),%eax
 86412f5:	81 c2 d0 1a 00 00    	add    $0x1ad0,%edx
 86412fb:	8b 54 90 08          	mov    0x8(%eax,%edx,4),%edx
 86412ff:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8641302:	6b c0 3d             	imul   $0x3d,%eax,%eax
 8641305:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8641308:	89 04 24             	mov    %eax,(%esp)
 864130b:	e8 c8 a4 a8 ff       	call   80cb7d8 <_ZN10Inven_Item5resetEv>
 8641310:	8b 45 08             	mov    0x8(%ebp),%eax
 8641313:	89 04 24             	mov    %eax,(%esp)
 8641316:	e8 a9 78 a8 ff       	call   80c8bc4 <_ZN13charac_expand5CData5alterEv>
 864131b:	e9 94 00 00 00       	jmp    86413b4 <_ZN10CTitleBook17deleteTimeoutItemERKSt6vectorISt4pairIiiESaIS2_EE+0x15a>
 8641320:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8641323:	8b 40 02             	mov    0x2(%eax),%eax
 8641326:	89 c3                	mov    %eax,%ebx
 8641328:	e8 6e ae a8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 864132d:	05 58 b6 00 00       	add    $0xb658,%eax
 8641332:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8641336:	89 04 24             	mov    %eax,(%esp)
 8641339:	e8 58 0d 48 00       	call   8ac2096 <_ZN23DeleteInvalidItemScript20IsInvalidItem2DeleteEi>
 864133e:	84 c0                	test   %al,%al
 8641340:	74 72                	je     86413b4 <_ZN10CTitleBook17deleteTimeoutItemERKSt6vectorISt4pairIiiESaIS2_EE+0x15a>
 8641342:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8641345:	8d 48 07             	lea    0x7(%eax),%ecx
 8641348:	8b 45 f4             	mov    -0xc(%ebp),%eax
 864134b:	8d 50 02             	lea    0x2(%eax),%edx
 864134e:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8641351:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8641355:	89 54 24 04          	mov    %edx,0x4(%esp)
 8641359:	89 04 24             	mov    %eax,(%esp)
 864135c:	e8 05 49 af ff       	call   8135c66 <_ZSt9make_pairIRKmRKiESt4pairINSt17__decay_and_stripIT_E6__typeENS5_IT0_E6__typeEEOS6_OS9_>
 8641361:	83 ec 04             	sub    $0x4,%esp
 8641364:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8641367:	89 44 24 04          	mov    %eax,0x4(%esp)
 864136b:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 864136e:	89 04 24             	mov    %eax,(%esp)
 8641371:	e8 00 07 ad ff       	call   8111a76 <_ZNSt4pairIiiEC1ImiEEOS_IT_T0_E>
 8641376:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8641379:	89 44 24 04          	mov    %eax,0x4(%esp)
 864137d:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8641380:	89 04 24             	mov    %eax,(%esp)
 8641383:	e8 7e c2 a9 ff       	call   80dd606 <_ZNSt6vectorISt4pairIiiESaIS1_EE9push_backEOS1_>
 8641388:	8b 55 ec             	mov    -0x14(%ebp),%edx
 864138b:	8b 45 08             	mov    0x8(%ebp),%eax
 864138e:	81 c2 d0 1a 00 00    	add    $0x1ad0,%edx
 8641394:	8b 54 90 08          	mov    0x8(%eax,%edx,4),%edx
 8641398:	8b 45 f0             	mov    -0x10(%ebp),%eax
 864139b:	6b c0 3d             	imul   $0x3d,%eax,%eax
 864139e:	8d 04 02             	lea    (%edx,%eax,1),%eax
 86413a1:	89 04 24             	mov    %eax,(%esp)
 86413a4:	e8 2f a4 a8 ff       	call   80cb7d8 <_ZN10Inven_Item5resetEv>
 86413a9:	8b 45 08             	mov    0x8(%ebp),%eax
 86413ac:	89 04 24             	mov    %eax,(%esp)
 86413af:	e8 10 78 a8 ff       	call   80c8bc4 <_ZN13charac_expand5CData5alterEv>
 86413b4:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 86413b8:	8b 45 ec             	mov    -0x14(%ebp),%eax
 86413bb:	8b 04 85 0c ae ce 08 	mov    0x8ceae0c(,%eax,4),%eax
 86413c2:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 86413c5:	0f 9f c0             	setg   %al
 86413c8:	84 c0                	test   %al,%al
 86413ca:	0f 85 b5 fe ff ff    	jne    8641285 <_ZN10CTitleBook17deleteTimeoutItemERKSt6vectorISt4pairIiiESaIS2_EE+0x2b>
 86413d0:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 86413d4:	83 7d ec 03          	cmpl   $0x3,-0x14(%ebp)
 86413d8:	0f 9e c0             	setle  %al
 86413db:	84 c0                	test   %al,%al
 86413dd:	0f 85 96 fe ff ff    	jne    8641279 <_ZN10CTitleBook17deleteTimeoutItemERKSt6vectorISt4pairIiiESaIS2_EE+0x1f>
 86413e3:	8b 45 08             	mov    0x8(%ebp),%eax
 86413e6:	8b 40 08             	mov    0x8(%eax),%eax
 86413e9:	85 c0                	test   %eax,%eax
 86413eb:	0f 84 a2 00 00 00    	je     8641493 <_ZN10CTitleBook17deleteTimeoutItemERKSt6vectorISt4pairIiiESaIS2_EE+0x239>
 86413f1:	8d 45 eb             	lea    -0x15(%ebp),%eax
 86413f4:	89 04 24             	mov    %eax,(%esp)
 86413f7:	e8 d4 ec 09 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 86413fc:	8d 45 eb             	lea    -0x15(%ebp),%eax
 86413ff:	89 44 24 08          	mov    %eax,0x8(%esp)
 8641403:	c7 44 24 04 a0 ab ce 	movl   $0x8ceaba0,0x4(%esp)
 864140a:	08 
 864140b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 864140e:	89 04 24             	mov    %eax,(%esp)
 8641411:	e8 1a 62 0c 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 8641416:	8b 45 08             	mov    0x8(%ebp),%eax
 8641419:	8b 40 08             	mov    0x8(%eax),%eax
 864141c:	8d 55 c8             	lea    -0x38(%ebp),%edx
 864141f:	89 54 24 08          	mov    %edx,0x8(%esp)
 8641423:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 8641426:	89 54 24 04          	mov    %edx,0x4(%esp)
 864142a:	89 04 24             	mov    %eax,(%esp)
 864142d:	e8 92 1d 05 00       	call   86931c4 <_ZN5CUser28RewardItem2DeleteInvalidItemERKSsRKSt6vectorISt4pairIiiESaIS4_EE>
 8641432:	eb 15                	jmp    8641449 <_ZN10CTitleBook17deleteTimeoutItemERKSt6vectorISt4pairIiiESaIS2_EE+0x1ef>
 8641434:	89 d3                	mov    %edx,%ebx
 8641436:	89 c6                	mov    %eax,%esi
 8641438:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 864143b:	89 04 24             	mov    %eax,(%esp)
 864143e:	e8 9d 67 0c 00       	call   8707be0 <_ZNSsD1Ev>
 8641443:	89 f0                	mov    %esi,%eax
 8641445:	89 da                	mov    %ebx,%edx
 8641447:	eb 0d                	jmp    8641456 <_ZN10CTitleBook17deleteTimeoutItemERKSt6vectorISt4pairIiiESaIS2_EE+0x1fc>
 8641449:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 864144c:	89 04 24             	mov    %eax,(%esp)
 864144f:	e8 8c 67 0c 00       	call   8707be0 <_ZNSsD1Ev>
 8641454:	eb 15                	jmp    864146b <_ZN10CTitleBook17deleteTimeoutItemERKSt6vectorISt4pairIiiESaIS2_EE+0x211>
 8641456:	89 d3                	mov    %edx,%ebx
 8641458:	89 c6                	mov    %eax,%esi
 864145a:	8d 45 eb             	lea    -0x15(%ebp),%eax
 864145d:	89 04 24             	mov    %eax,(%esp)
 8641460:	e8 8b ec 09 00       	call   86e00f0 <_ZNSaIcED1Ev>
 8641465:	89 f0                	mov    %esi,%eax
 8641467:	89 da                	mov    %ebx,%edx
 8641469:	eb 0d                	jmp    8641478 <_ZN10CTitleBook17deleteTimeoutItemERKSt6vectorISt4pairIiiESaIS2_EE+0x21e>
 864146b:	8d 45 eb             	lea    -0x15(%ebp),%eax
 864146e:	89 04 24             	mov    %eax,(%esp)
 8641471:	e8 7a ec 09 00       	call   86e00f0 <_ZNSaIcED1Ev>
 8641476:	eb 1b                	jmp    8641493 <_ZN10CTitleBook17deleteTimeoutItemERKSt6vectorISt4pairIiiESaIS2_EE+0x239>
 8641478:	89 d3                	mov    %edx,%ebx
 864147a:	89 c6                	mov    %eax,%esi
 864147c:	8d 45 c8             	lea    -0x38(%ebp),%eax
 864147f:	89 04 24             	mov    %eax,(%esp)
 8641482:	e8 63 35 af ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 8641487:	89 f0                	mov    %esi,%eax
 8641489:	89 da                	mov    %ebx,%edx
 864148b:	89 04 24             	mov    %eax,(%esp)
 864148e:	e8 bd 22 4a 00       	call   8ae3750 <_Unwind_Resume>
 8641493:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8641496:	89 04 24             	mov    %eax,(%esp)
 8641499:	e8 4c 35 af ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 864149e:	8d 65 f8             	lea    -0x8(%ebp),%esp
 86414a1:	83 c4 00             	add    $0x0,%esp
 86414a4:	5b                   	pop    %ebx
 86414a5:	5e                   	pop    %esi
 86414a6:	5d                   	pop    %ebp
 86414a7:	c3                   	ret

```

```c
// CTitleBook::deleteTimeoutItem @ 0x864125a

/* CTitleBook::deleteTimeoutItem(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int>
   > > const&) */

void CTitleBook::deleteTimeoutItem(vector *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_3c [12];
  pair<int,int> local_30 [8];
  ulong local_28 [2];
  string local_20;
  allocator<char> local_19;
  int local_18;
  int local_14;
  Inven_Item *local_10;
  
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_3c);
  local_18 = 0;
  do {
    if (3 < local_18) {
      if (*(int *)(param_1 + 8) != 0) {
        std::allocator<char>::allocator();
                    /* try { // try from 08641411 to 08641415 has its CatchHandler @ 08641456 */
        std::string::string((string *)&local_20,"TitleBook",(allocator *)&local_19);
                    /* try { // try from 0864142d to 08641431 has its CatchHandler @ 08641434 */
        CUser::RewardItem2DeleteInvalidItem(*(CUser **)(param_1 + 8),&local_20,(vector *)local_3c);
                    /* try { // try from 0864144f to 08641453 has its CatchHandler @ 08641456 */
        std::string::~string((string *)&local_20);
        std::allocator<char>::~allocator(&local_19);
      }
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_3c);
      return;
    }
    for (local_14 = 0; local_14 < *(int *)(::TITLE_BOOK_MAX + local_18 * 4); local_14 = local_14 + 1
        ) {
      local_10 = (Inven_Item *)(*(int *)(param_1 + (local_18 + 0x1ad0) * 4 + 8) + local_14 * 0x3d);
      if (*(int *)(local_10 + 2) != 0) {
                    /* try { // try from 086412b5 to 08641387 has its CatchHandler @ 08641478 */
        cVar2 = _checkTimeoutItem(local_10);
        if (cVar2 == '\0') {
          iVar3 = _isMatchedItem((int)param_1,*(vector **)(local_10 + 2));
          if (iVar3 != -1) goto LAB_086412df;
          bVar1 = false;
        }
        else {
LAB_086412df:
          bVar1 = true;
        }
        if (bVar1) {
          Inven_Item::reset((Inven_Item *)
                            (*(int *)(param_1 + (local_18 + 0x1ad0) * 4 + 8) + local_14 * 0x3d));
          charac_expand::CData::alter((CData *)param_1);
        }
        else {
          iVar3 = G_CDataManager();
          cVar2 = DeleteInvalidItemScript::IsInvalidItem2Delete(iVar3 + 0xb658);
          if (cVar2 != '\0') {
            std::make_pair<unsigned_long_const&,int_const&>(local_28,(int *)(local_10 + 2));
            std::pair<int,int>::pair<unsigned_long,int>(local_30,(pair *)local_28);
            std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                      (local_3c,local_30);
            Inven_Item::reset((Inven_Item *)
                              (*(int *)(param_1 + (local_18 + 0x1ad0) * 4 + 8) + local_14 * 0x3d));
            charac_expand::CData::alter((CData *)param_1);
          }
        }
      }
    }
    local_18 = local_18 + 1;
  } while( true );
}

```

---

## findItemLock

```asm
// === 08641124 CTitleBook::findItemLock  [0x08641124-0x86411b9] ===
 8641124:	55                   	push   %ebp
 8641125:	89 e5                	mov    %esp,%ebp
 8641127:	83 ec 38             	sub    $0x38,%esp
 864112a:	8b 45 0c             	mov    0xc(%ebp),%eax
 864112d:	88 45 e4             	mov    %al,-0x1c(%ebp)
 8641130:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8641137:	eb 6f                	jmp    86411a8 <_ZNK10CTitleBook12findItemLockEhR14ENUM_ITEMSPACERi+0x84>
 8641139:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8641140:	eb 4e                	jmp    8641190 <_ZNK10CTitleBook12findItemLockEhR14ENUM_ITEMSPACERi+0x6c>
 8641142:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8641145:	8b 45 08             	mov    0x8(%ebp),%eax
 8641148:	81 c2 d0 1a 00 00    	add    $0x1ad0,%edx
 864114e:	8b 54 90 08          	mov    0x8(%eax,%edx,4),%edx
 8641152:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8641155:	6b c0 3d             	imul   $0x3d,%eax,%eax
 8641158:	8d 04 02             	lea    (%edx,%eax,1),%eax
 864115b:	83 c0 11             	add    $0x11,%eax
 864115e:	89 04 24             	mov    %eax,(%esp)
 8641161:	e8 42 a4 c4 ff       	call   828b5a8 <_ZNK17stAmplifyOption_t7GetLockEv>
 8641166:	3a 45 e4             	cmp    -0x1c(%ebp),%al
 8641169:	0f 94 c0             	sete   %al
 864116c:	84 c0                	test   %al,%al
 864116e:	74 1c                	je     864118c <_ZNK10CTitleBook12findItemLockEhR14ENUM_ITEMSPACERi+0x68>
 8641170:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8641173:	83 c0 13             	add    $0x13,%eax
 8641176:	89 c2                	mov    %eax,%edx
 8641178:	8b 45 10             	mov    0x10(%ebp),%eax
 864117b:	89 10                	mov    %edx,(%eax)
 864117d:	8b 45 14             	mov    0x14(%ebp),%eax
 8641180:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8641183:	89 10                	mov    %edx,(%eax)
 8641185:	b8 01 00 00 00       	mov    $0x1,%eax
 864118a:	eb 2c                	jmp    86411b8 <_ZNK10CTitleBook12findItemLockEhR14ENUM_ITEMSPACERi+0x94>
 864118c:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8641190:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8641193:	8b 04 85 0c ae ce 08 	mov    0x8ceae0c(,%eax,4),%eax
 864119a:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 864119d:	0f 9f c0             	setg   %al
 86411a0:	84 c0                	test   %al,%al
 86411a2:	75 9e                	jne    8641142 <_ZNK10CTitleBook12findItemLockEhR14ENUM_ITEMSPACERi+0x1e>
 86411a4:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 86411a8:	83 7d f0 03          	cmpl   $0x3,-0x10(%ebp)
 86411ac:	0f 9e c0             	setle  %al
 86411af:	84 c0                	test   %al,%al
 86411b1:	75 86                	jne    8641139 <_ZNK10CTitleBook12findItemLockEhR14ENUM_ITEMSPACERi+0x15>
 86411b3:	b8 00 00 00 00       	mov    $0x0,%eax
 86411b8:	c9                   	leave
 86411b9:	c3                   	ret

```

```c
// CTitleBook::findItemLock @ 0x8641124

/* CTitleBook::findItemLock(unsigned char, ENUM_ITEMSPACE&, int&) const */

undefined4 __thiscall
CTitleBook::findItemLock(CTitleBook *this,uchar param_1,ENUM_ITEMSPACE *param_2,int *param_3)

{
  uchar uVar1;
  int local_14;
  int local_10;
  
  local_14 = 0;
  do {
    if (3 < local_14) {
      return 0;
    }
    for (local_10 = 0; local_10 < *(int *)(::TITLE_BOOK_MAX + local_14 * 4); local_10 = local_10 + 1
        ) {
      uVar1 = stAmplifyOption_t::GetLock
                        ((stAmplifyOption_t *)
                         (*(int *)(this + (local_14 + 0x1ad0) * 4 + 8) + local_10 * 0x3d + 0x11));
      if (uVar1 == param_1) {
        *(int *)param_2 = local_14 + 0x13;
        *param_3 = local_10;
        return 1;
      }
    }
    local_14 = local_14 + 1;
  } while( true );
}

```

---

## getData

```asm
// === 086410f8 CTitleBook::getData  [0x086410f8-0x8641123] ===
 86410f8:	55                   	push   %ebp
 86410f9:	89 e5                	mov    %esp,%ebp
 86410fb:	83 ec 28             	sub    $0x28,%esp
 86410fe:	8b 45 0c             	mov    0xc(%ebp),%eax
 8641101:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8641104:	8b 45 08             	mov    0x8(%ebp),%eax
 8641107:	83 c0 0c             	add    $0xc,%eax
 864110a:	c7 44 24 08 3a 6b 00 	movl   $0x6b3a,0x8(%esp)
 8641111:	00 
 8641112:	89 44 24 04          	mov    %eax,0x4(%esp)
 8641116:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8641119:	89 04 24             	mov    %eax,(%esp)
 864111c:	e8 7f c7 a3 ff       	call   807d8a0 <memcpy@plt>
 8641121:	c9                   	leave
 8641122:	c3                   	ret
 8641123:	90                   	nop

```

```c
// CTitleBook::getData @ 0x86410f8

/* CTitleBook::getData(char*) const */

void __thiscall CTitleBook::getData(CTitleBook *this,char *param_1)

{
  memcpy(param_1,this + 0xc,0x6b3a);
  return;
}

```

---

## getItemLockList

```asm
// === 086411ba CTitleBook::getItemLockList  [0x086411ba-0x8641259] ===
 86411ba:	55                   	push   %ebp
 86411bb:	89 e5                	mov    %esp,%ebp
 86411bd:	83 ec 28             	sub    $0x28,%esp
 86411c0:	c6 45 ef 00          	movb   $0x0,-0x11(%ebp)
 86411c4:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 86411cb:	eb 7b                	jmp    8641248 <_ZN10CTitleBook15getItemLockListERSt6vectorIN9item_lock13stItemLockRefESaIS2_EE+0x8e>
 86411cd:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 86411d4:	eb 5a                	jmp    8641230 <_ZN10CTitleBook15getItemLockListERSt6vectorIN9item_lock13stItemLockRefESaIS2_EE+0x76>
 86411d6:	8b 55 f0             	mov    -0x10(%ebp),%edx
 86411d9:	8b 45 08             	mov    0x8(%ebp),%eax
 86411dc:	81 c2 d0 1a 00 00    	add    $0x1ad0,%edx
 86411e2:	8b 54 90 08          	mov    0x8(%eax,%edx,4),%edx
 86411e6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86411e9:	6b c0 3d             	imul   $0x3d,%eax,%eax
 86411ec:	8d 04 02             	lea    (%edx,%eax,1),%eax
 86411ef:	83 c0 11             	add    $0x11,%eax
 86411f2:	89 04 24             	mov    %eax,(%esp)
 86411f5:	e8 ae a3 c4 ff       	call   828b5a8 <_ZNK17stAmplifyOption_t7GetLockEv>
 86411fa:	88 45 ef             	mov    %al,-0x11(%ebp)
 86411fd:	80 7d ef 00          	cmpb   $0x0,-0x11(%ebp)
 8641201:	74 29                	je     864122c <_ZN10CTitleBook15getItemLockListERSt6vectorIN9item_lock13stItemLockRefESaIS2_EE+0x72>
 8641203:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
 8641207:	88 45 ea             	mov    %al,-0x16(%ebp)
 864120a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 864120d:	66 89 45 ec          	mov    %ax,-0x14(%ebp)
 8641211:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8641214:	83 c0 13             	add    $0x13,%eax
 8641217:	88 45 eb             	mov    %al,-0x15(%ebp)
 864121a:	8d 45 ea             	lea    -0x16(%ebp),%eax
 864121d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8641221:	8b 45 0c             	mov    0xc(%ebp),%eax
 8641224:	89 04 24             	mov    %eax,(%esp)
 8641227:	e8 62 03 eb ff       	call   84f158e <_ZNSt6vectorIN9item_lock13stItemLockRefESaIS1_EE9push_backERKS1_>
 864122c:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8641230:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8641233:	8b 04 85 0c ae ce 08 	mov    0x8ceae0c(,%eax,4),%eax
 864123a:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 864123d:	0f 9f c0             	setg   %al
 8641240:	84 c0                	test   %al,%al
 8641242:	75 92                	jne    86411d6 <_ZN10CTitleBook15getItemLockListERSt6vectorIN9item_lock13stItemLockRefESaIS2_EE+0x1c>
 8641244:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8641248:	83 7d f0 03          	cmpl   $0x3,-0x10(%ebp)
 864124c:	0f 9e c0             	setle  %al
 864124f:	84 c0                	test   %al,%al
 8641251:	0f 85 76 ff ff ff    	jne    86411cd <_ZN10CTitleBook15getItemLockListERSt6vectorIN9item_lock13stItemLockRefESaIS2_EE+0x13>
 8641257:	c9                   	leave
 8641258:	c3                   	ret
 8641259:	90                   	nop

```

```c
// CTitleBook::getItemLockList @ 0x86411ba

/* CTitleBook::getItemLockList(std::vector<item_lock::stItemLockRef,
   std::allocator<item_lock::stItemLockRef> >&) */

void __thiscall CTitleBook::getItemLockList(CTitleBook *this,vector *param_1)

{
  stItemLockRef local_1a;
  char local_19;
  undefined2 local_18;
  stItemLockRef local_15;
  int local_14;
  int local_10;
  
  local_15 = (stItemLockRef)0x0;
  for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
    for (local_10 = 0; local_10 < *(int *)(::TITLE_BOOK_MAX + local_14 * 4); local_10 = local_10 + 1
        ) {
      local_15 = (stItemLockRef)
                 stAmplifyOption_t::GetLock
                           ((stAmplifyOption_t *)
                            (*(int *)(this + (local_14 + 0x1ad0) * 4 + 8) + local_10 * 0x3d + 0x11))
      ;
      if (local_15 != (stItemLockRef)0x0) {
        local_18 = (undefined2)local_10;
        local_19 = (char)local_14 + '\x13';
        local_1a = local_15;
        std::vector<item_lock::stItemLockRef,std::allocator<item_lock::stItemLockRef>>::push_back
                  ((vector<item_lock::stItemLockRef,std::allocator<item_lock::stItemLockRef>> *)
                   param_1,&local_1a);
      }
    }
  }
  return;
}

```

---

## getTitle

```asm
// === 086425c4 CTitleBook::getTitle  [0x086425c4-0x8642ba9] ===
 86425c4:	55                   	push   %ebp
 86425c5:	89 e5                	mov    %esp,%ebp
 86425c7:	57                   	push   %edi
 86425c8:	56                   	push   %esi
 86425c9:	53                   	push   %ebx
 86425ca:	81 ec dc 00 00 00    	sub    $0xdc,%esp
 86425d0:	c7 44 24 04 0e 00 00 	movl   $0xe,0x4(%esp)
 86425d7:	00 
 86425d8:	8b 45 08             	mov    0x8(%ebp),%eax
 86425db:	89 04 24             	mov    %eax,(%esp)
 86425de:	e8 a1 af a9 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 86425e3:	89 45 cc             	mov    %eax,-0x34(%ebp)
 86425e6:	83 7d cc 00          	cmpl   $0x0,-0x34(%ebp)
 86425ea:	75 0a                	jne    86425f6 <_ZN10CTitleBook8getTitleEP5CUser24ENUM_TITLE_BOOK_CATEGORYii14ENUM_ITEMSPACERi+0x32>
 86425ec:	b8 03 00 00 00       	mov    $0x3,%eax
 86425f1:	e9 a8 05 00 00       	jmp    8642b9e <_ZN10CTitleBook8getTitleEP5CUser24ENUM_TITLE_BOOK_CATEGORYii14ENUM_ITEMSPACERi+0x5da>
 86425f6:	83 7d 18 12          	cmpl   $0x12,0x18(%ebp)
 86425fa:	75 07                	jne    8642603 <_ZN10CTitleBook8getTitleEP5CUser24ENUM_TITLE_BOOK_CATEGORYii14ENUM_ITEMSPACERi+0x3f>
 86425fc:	c7 45 18 03 00 00 00 	movl   $0x3,0x18(%ebp)
 8642603:	8b 45 10             	mov    0x10(%ebp),%eax
 8642606:	89 44 24 08          	mov    %eax,0x8(%esp)
 864260a:	8b 45 0c             	mov    0xc(%ebp),%eax
 864260d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8642611:	8b 45 08             	mov    0x8(%ebp),%eax
 8642614:	89 04 24             	mov    %eax,(%esp)
 8642617:	e8 90 f9 ff ff       	call   8641fac <_ZN10CTitleBook10checkErrorEP5CUser24ENUM_TITLE_BOOK_CATEGORYi>
 864261c:	89 45 d0             	mov    %eax,-0x30(%ebp)
 864261f:	83 7d d0 00          	cmpl   $0x0,-0x30(%ebp)
 8642623:	74 08                	je     864262d <_ZN10CTitleBook8getTitleEP5CUser24ENUM_TITLE_BOOK_CATEGORYii14ENUM_ITEMSPACERi+0x69>
 8642625:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8642628:	e9 71 05 00 00       	jmp    8642b9e <_ZN10CTitleBook8getTitleEP5CUser24ENUM_TITLE_BOOK_CATEGORYii14ENUM_ITEMSPACERi+0x5da>
 864262d:	8b 45 08             	mov    0x8(%ebp),%eax
 8642630:	89 04 24             	mov    %eax,(%esp)
 8642633:	e8 56 7c a9 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8642638:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 864263b:	8b 45 18             	mov    0x18(%ebp),%eax
 864263e:	89 04 24             	mov    %eax,(%esp)
 8642641:	e8 ff 51 ab ff       	call   80f7845 <_Z25GetInvenTypeFromItemSpace14ENUM_ITEMSPACE>
 8642646:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8642649:	8b 45 10             	mov    0x10(%ebp),%eax
 864264c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8642650:	8b 45 0c             	mov    0xc(%ebp),%eax
 8642653:	89 44 24 04          	mov    %eax,0x4(%esp)
 8642657:	8b 45 cc             	mov    -0x34(%ebp),%eax
 864265a:	89 04 24             	mov    %eax,(%esp)
 864265d:	e8 22 f7 ff ff       	call   8641d84 <_ZN10CTitleBook9_getTitleE24ENUM_TITLE_BOOK_CATEGORYi>
 8642662:	8b 10                	mov    (%eax),%edx
 8642664:	89 95 6f ff ff ff    	mov    %edx,-0x91(%ebp)
 864266a:	8b 50 04             	mov    0x4(%eax),%edx
 864266d:	89 95 73 ff ff ff    	mov    %edx,-0x8d(%ebp)
 8642673:	8b 50 08             	mov    0x8(%eax),%edx
 8642676:	89 95 77 ff ff ff    	mov    %edx,-0x89(%ebp)
 864267c:	8b 50 0c             	mov    0xc(%eax),%edx
 864267f:	89 95 7b ff ff ff    	mov    %edx,-0x85(%ebp)
 8642685:	8b 50 10             	mov    0x10(%eax),%edx
 8642688:	89 95 7f ff ff ff    	mov    %edx,-0x81(%ebp)
 864268e:	8b 50 14             	mov    0x14(%eax),%edx
 8642691:	89 55 83             	mov    %edx,-0x7d(%ebp)
 8642694:	8b 50 18             	mov    0x18(%eax),%edx
 8642697:	89 55 87             	mov    %edx,-0x79(%ebp)
 864269a:	8b 50 1c             	mov    0x1c(%eax),%edx
 864269d:	89 55 8b             	mov    %edx,-0x75(%ebp)
 86426a0:	8b 50 20             	mov    0x20(%eax),%edx
 86426a3:	89 55 8f             	mov    %edx,-0x71(%ebp)
 86426a6:	8b 50 24             	mov    0x24(%eax),%edx
 86426a9:	89 55 93             	mov    %edx,-0x6d(%ebp)
 86426ac:	8b 50 28             	mov    0x28(%eax),%edx
 86426af:	89 55 97             	mov    %edx,-0x69(%ebp)
 86426b2:	8b 50 2c             	mov    0x2c(%eax),%edx
 86426b5:	89 55 9b             	mov    %edx,-0x65(%ebp)
 86426b8:	8b 50 30             	mov    0x30(%eax),%edx
 86426bb:	89 55 9f             	mov    %edx,-0x61(%ebp)
 86426be:	8b 50 34             	mov    0x34(%eax),%edx
 86426c1:	89 55 a3             	mov    %edx,-0x5d(%ebp)
 86426c4:	8b 50 38             	mov    0x38(%eax),%edx
 86426c7:	89 55 a7             	mov    %edx,-0x59(%ebp)
 86426ca:	0f b6 40 3c          	movzbl 0x3c(%eax),%eax
 86426ce:	88 45 ab             	mov    %al,-0x55(%ebp)
 86426d1:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 86426d5:	74 0d                	je     86426e4 <_ZN10CTitleBook8getTitleEP5CUser24ENUM_TITLE_BOOK_CATEGORYii14ENUM_ITEMSPACERi+0x120>
 86426d7:	8b 95 71 ff ff ff    	mov    -0x8f(%ebp),%edx
 86426dd:	8b 45 14             	mov    0x14(%ebp),%eax
 86426e0:	39 c2                	cmp    %eax,%edx
 86426e2:	74 0a                	je     86426ee <_ZN10CTitleBook8getTitleEP5CUser24ENUM_TITLE_BOOK_CATEGORYii14ENUM_ITEMSPACERi+0x12a>
 86426e4:	b8 02 00 00 00       	mov    $0x2,%eax
 86426e9:	e9 b0 04 00 00       	jmp    8642b9e <_ZN10CTitleBook8getTitleEP5CUser24ENUM_TITLE_BOOK_CATEGORYii14ENUM_ITEMSPACERi+0x5da>
 86426ee:	8b 85 71 ff ff ff    	mov    -0x8f(%ebp),%eax
 86426f4:	89 c3                	mov    %eax,%ebx
 86426f6:	e8 a0 9a a8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 86426fb:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 86426ff:	89 04 24             	mov    %eax,(%esp)
 8642702:	e8 2b d3 d1 ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 8642707:	89 45 dc             	mov    %eax,-0x24(%ebp)
 864270a:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 864270e:	75 0a                	jne    864271a <_ZN10CTitleBook8getTitleEP5CUser24ENUM_TITLE_BOOK_CATEGORYii14ENUM_ITEMSPACERi+0x156>
 8642710:	b8 02 00 00 00       	mov    $0x2,%eax
 8642715:	e9 84 04 00 00       	jmp    8642b9e <_ZN10CTitleBook8getTitleEP5CUser24ENUM_TITLE_BOOK_CATEGORYii14ENUM_ITEMSPACERi+0x5da>
 864271a:	83 7d d8 01          	cmpl   $0x1,-0x28(%ebp)
 864271e:	0f 85 03 02 00 00    	jne    8642927 <_ZN10CTitleBook8getTitleEP5CUser24ENUM_TITLE_BOOK_CATEGORYii14ENUM_ITEMSPACERi+0x363>
 8642724:	8b 45 10             	mov    0x10(%ebp),%eax
 8642727:	89 44 24 04          	mov    %eax,0x4(%esp)
 864272b:	8b 45 0c             	mov    0xc(%ebp),%eax
 864272e:	89 04 24             	mov    %eax,(%esp)
 8642731:	e8 1c f5 ff ff       	call   8641c52 <_ZN10CTitleBook17_checkMovetoInvenE24ENUM_TITLE_BOOK_CATEGORYi>
 8642736:	83 f0 01             	xor    $0x1,%eax
 8642739:	84 c0                	test   %al,%al
 864273b:	74 0a                	je     8642747 <_ZN10CTitleBook8getTitleEP5CUser24ENUM_TITLE_BOOK_CATEGORYii14ENUM_ITEMSPACERi+0x183>
 864273d:	b8 05 00 00 00       	mov    $0x5,%eax
 8642742:	e9 57 04 00 00       	jmp    8642b9e <_ZN10CTitleBook8getTitleEP5CUser24ENUM_TITLE_BOOK_CATEGORYii14ENUM_ITEMSPACERi+0x5da>
 8642747:	8b 85 6f ff ff ff    	mov    -0x91(%ebp),%eax
 864274d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8642751:	8b 85 73 ff ff ff    	mov    -0x8d(%ebp),%eax
 8642757:	89 44 24 08          	mov    %eax,0x8(%esp)
 864275b:	8b 85 77 ff ff ff    	mov    -0x89(%ebp),%eax
 8642761:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8642765:	8b 85 7b ff ff ff    	mov    -0x85(%ebp),%eax
 864276b:	89 44 24 10          	mov    %eax,0x10(%esp)
 864276f:	8b 85 7f ff ff ff    	mov    -0x81(%ebp),%eax
 8642775:	89 44 24 14          	mov    %eax,0x14(%esp)
 8642779:	8b 45 83             	mov    -0x7d(%ebp),%eax
 864277c:	89 44 24 18          	mov    %eax,0x18(%esp)
 8642780:	8b 45 87             	mov    -0x79(%ebp),%eax
 8642783:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 8642787:	8b 45 8b             	mov    -0x75(%ebp),%eax
 864278a:	89 44 24 20          	mov    %eax,0x20(%esp)
 864278e:	8b 45 8f             	mov    -0x71(%ebp),%eax
 8642791:	89 44 24 24          	mov    %eax,0x24(%esp)
 8642795:	8b 45 93             	mov    -0x6d(%ebp),%eax
 8642798:	89 44 24 28          	mov    %eax,0x28(%esp)
 864279c:	8b 45 97             	mov    -0x69(%ebp),%eax
 864279f:	89 44 24 2c          	mov    %eax,0x2c(%esp)
 86427a3:	8b 45 9b             	mov    -0x65(%ebp),%eax
 86427a6:	89 44 24 30          	mov    %eax,0x30(%esp)
 86427aa:	8b 45 9f             	mov    -0x61(%ebp),%eax
 86427ad:	89 44 24 34          	mov    %eax,0x34(%esp)
 86427b1:	8b 45 a3             	mov    -0x5d(%ebp),%eax
 86427b4:	89 44 24 38          	mov    %eax,0x38(%esp)
 86427b8:	8b 45 a7             	mov    -0x59(%ebp),%eax
 86427bb:	89 44 24 3c          	mov    %eax,0x3c(%esp)
 86427bf:	0f b6 45 ab          	movzbl -0x55(%ebp),%eax
 86427c3:	88 44 24 40          	mov    %al,0x40(%esp)
 86427c7:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 86427ca:	89 04 24             	mov    %eax,(%esp)
 86427cd:	e8 f8 f6 eb ff       	call   8501eca <_ZNK10CInventory26tryInsertItemIntoInventoryE10Inven_Item>
 86427d2:	c1 e8 1f             	shr    $0x1f,%eax
 86427d5:	84 c0                	test   %al,%al
 86427d7:	74 0a                	je     86427e3 <_ZN10CTitleBook8getTitleEP5CUser24ENUM_TITLE_BOOK_CATEGORYii14ENUM_ITEMSPACERi+0x21f>
 86427d9:	b8 0b 00 00 00       	mov    $0xb,%eax
 86427de:	e9 bb 03 00 00       	jmp    8642b9e <_ZN10CTitleBook8getTitleEP5CUser24ENUM_TITLE_BOOK_CATEGORYii14ENUM_ITEMSPACERi+0x5da>
 86427e3:	8b 45 10             	mov    0x10(%ebp),%eax
 86427e6:	89 44 24 08          	mov    %eax,0x8(%esp)
 86427ea:	8b 45 0c             	mov    0xc(%ebp),%eax
 86427ed:	89 44 24 04          	mov    %eax,0x4(%esp)
 86427f1:	8b 45 cc             	mov    -0x34(%ebp),%eax
 86427f4:	89 04 24             	mov    %eax,(%esp)
 86427f7:	e8 54 f5 ff ff       	call   8641d50 <_ZN10CTitleBook12_deleteTitleE24ENUM_TITLE_BOOK_CATEGORYi>
 86427fc:	c7 44 24 4c 00 00 00 	movl   $0x0,0x4c(%esp)
 8642803:	00 
 8642804:	c7 44 24 48 01 00 00 	movl   $0x1,0x48(%esp)
 864280b:	00 
 864280c:	c7 44 24 44 07 00 00 	movl   $0x7,0x44(%esp)
 8642813:	00 
 8642814:	8b 85 6f ff ff ff    	mov    -0x91(%ebp),%eax
 864281a:	89 44 24 04          	mov    %eax,0x4(%esp)
 864281e:	8b 85 73 ff ff ff    	mov    -0x8d(%ebp),%eax
 8642824:	89 44 24 08          	mov    %eax,0x8(%esp)
 8642828:	8b 85 77 ff ff ff    	mov    -0x89(%ebp),%eax
 864282e:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8642832:	8b 85 7b ff ff ff    	mov    -0x85(%ebp),%eax
 8642838:	89 44 24 10          	mov    %eax,0x10(%esp)
 864283c:	8b 85 7f ff ff ff    	mov    -0x81(%ebp),%eax
 8642842:	89 44 24 14          	mov    %eax,0x14(%esp)
 8642846:	8b 45 83             	mov    -0x7d(%ebp),%eax
 8642849:	89 44 24 18          	mov    %eax,0x18(%esp)
 864284d:	8b 45 87             	mov    -0x79(%ebp),%eax
 8642850:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 8642854:	8b 45 8b             	mov    -0x75(%ebp),%eax
 8642857:	89 44 24 20          	mov    %eax,0x20(%esp)
 864285b:	8b 45 8f             	mov    -0x71(%ebp),%eax
 864285e:	89 44 24 24          	mov    %eax,0x24(%esp)
 8642862:	8b 45 93             	mov    -0x6d(%ebp),%eax
 8642865:	89 44 24 28          	mov    %eax,0x28(%esp)
 8642869:	8b 45 97             	mov    -0x69(%ebp),%eax
 864286c:	89 44 24 2c          	mov    %eax,0x2c(%esp)
 8642870:	8b 45 9b             	mov    -0x65(%ebp),%eax
 8642873:	89 44 24 30          	mov    %eax,0x30(%esp)
 8642877:	8b 45 9f             	mov    -0x61(%ebp),%eax
 864287a:	89 44 24 34          	mov    %eax,0x34(%esp)
 864287e:	8b 45 a3             	mov    -0x5d(%ebp),%eax
 8642881:	89 44 24 38          	mov    %eax,0x38(%esp)
 8642885:	8b 45 a7             	mov    -0x59(%ebp),%eax
 8642888:	89 44 24 3c          	mov    %eax,0x3c(%esp)
 864288c:	0f b6 45 ab          	movzbl -0x55(%ebp),%eax
 8642890:	88 44 24 40          	mov    %al,0x40(%esp)
 8642894:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8642897:	89 04 24             	mov    %eax,(%esp)
 864289a:	e8 e7 04 ec ff       	call   8502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>
 864289f:	89 45 e0             	mov    %eax,-0x20(%ebp)
 86428a2:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 86428a6:	79 72                	jns    864291a <_ZN10CTitleBook8getTitleEP5CUser24ENUM_TITLE_BOOK_CATEGORYii14ENUM_ITEMSPACERi+0x356>
 86428a8:	8b bd 71 ff ff ff    	mov    -0x8f(%ebp),%edi
 86428ae:	8b 45 08             	mov    0x8(%ebp),%eax
 86428b1:	89 04 24             	mov    %eax,(%esp)
 86428b4:	e8 95 93 a8 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 86428b9:	89 c6                	mov    %eax,%esi
 86428bb:	8b 45 08             	mov    0x8(%ebp),%eax
 86428be:	89 04 24             	mov    %eax,(%esp)
 86428c1:	e8 a8 7a a9 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 86428c6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86428cd:	00 
 86428ce:	89 04 24             	mov    %eax,(%esp)
 86428d1:	e8 75 67 ac ff       	call   810904b <_Z14NumberToStringji>
 86428d6:	89 c3                	mov    %eax,%ebx
 86428d8:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 86428df:	00 
 86428e0:	c7 44 24 08 a5 02 00 	movl   $0x2a5,0x8(%esp)
 86428e7:	00 
 86428e8:	c7 44 24 04 40 b8 ce 	movl   $0x8ceb840,0x4(%esp)
 86428ef:	08 
 86428f0:	8d 45 ac             	lea    -0x54(%ebp),%eax
 86428f3:	89 04 24             	mov    %eax,(%esp)
 86428f6:	e8 1d ce f0 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 86428fb:	89 7c 24 10          	mov    %edi,0x10(%esp)
 86428ff:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8642903:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8642907:	c7 44 24 04 b8 ab ce 	movl   $0x8ceabb8,0x4(%esp)
 864290e:	08 
 864290f:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8642912:	89 04 24             	mov    %eax,(%esp)
 8642915:	e8 6e ce f0 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 864291a:	8b 45 1c             	mov    0x1c(%ebp),%eax
 864291d:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8642920:	89 10                	mov    %edx,(%eax)
 8642922:	e9 72 02 00 00       	jmp    8642b99 <_ZN10CTitleBook8getTitleEP5CUser24ENUM_TITLE_BOOK_CATEGORYii14ENUM_ITEMSPACERi+0x5d5>
 8642927:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 864292b:	0f 85 68 02 00 00    	jne    8642b99 <_ZN10CTitleBook8getTitleEP5CUser24ENUM_TITLE_BOOK_CATEGORYii14ENUM_ITEMSPACERi+0x5d5>
 8642931:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8642934:	8b 00                	mov    (%eax),%eax
 8642936:	83 f8 0b             	cmp    $0xb,%eax
 8642939:	74 0a                	je     8642945 <_ZN10CTitleBook8getTitleEP5CUser24ENUM_TITLE_BOOK_CATEGORYii14ENUM_ITEMSPACERi+0x381>
 864293b:	b8 07 00 00 00       	mov    $0x7,%eax
 8642940:	e9 59 02 00 00       	jmp    8642b9e <_ZN10CTitleBook8getTitleEP5CUser24ENUM_TITLE_BOOK_CATEGORYii14ENUM_ITEMSPACERi+0x5da>
 8642945:	8b 85 6f ff ff ff    	mov    -0x91(%ebp),%eax
 864294b:	89 44 24 04          	mov    %eax,0x4(%esp)
 864294f:	8b 85 73 ff ff ff    	mov    -0x8d(%ebp),%eax
 8642955:	89 44 24 08          	mov    %eax,0x8(%esp)
 8642959:	8b 85 77 ff ff ff    	mov    -0x89(%ebp),%eax
 864295f:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8642963:	8b 85 7b ff ff ff    	mov    -0x85(%ebp),%eax
 8642969:	89 44 24 10          	mov    %eax,0x10(%esp)
 864296d:	8b 85 7f ff ff ff    	mov    -0x81(%ebp),%eax
 8642973:	89 44 24 14          	mov    %eax,0x14(%esp)
 8642977:	8b 45 83             	mov    -0x7d(%ebp),%eax
 864297a:	89 44 24 18          	mov    %eax,0x18(%esp)
 864297e:	8b 45 87             	mov    -0x79(%ebp),%eax
 8642981:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 8642985:	8b 45 8b             	mov    -0x75(%ebp),%eax
 8642988:	89 44 24 20          	mov    %eax,0x20(%esp)
 864298c:	8b 45 8f             	mov    -0x71(%ebp),%eax
 864298f:	89 44 24 24          	mov    %eax,0x24(%esp)
 8642993:	8b 45 93             	mov    -0x6d(%ebp),%eax
 8642996:	89 44 24 28          	mov    %eax,0x28(%esp)
 864299a:	8b 45 97             	mov    -0x69(%ebp),%eax
 864299d:	89 44 24 2c          	mov    %eax,0x2c(%esp)
 86429a1:	8b 45 9b             	mov    -0x65(%ebp),%eax
 86429a4:	89 44 24 30          	mov    %eax,0x30(%esp)
 86429a8:	8b 45 9f             	mov    -0x61(%ebp),%eax
 86429ab:	89 44 24 34          	mov    %eax,0x34(%esp)
 86429af:	8b 45 a3             	mov    -0x5d(%ebp),%eax
 86429b2:	89 44 24 38          	mov    %eax,0x38(%esp)
 86429b6:	8b 45 a7             	mov    -0x59(%ebp),%eax
 86429b9:	89 44 24 3c          	mov    %eax,0x3c(%esp)
 86429bd:	0f b6 45 ab          	movzbl -0x55(%ebp),%eax
 86429c1:	88 44 24 40          	mov    %al,0x40(%esp)
 86429c5:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 86429c8:	89 04 24             	mov    %eax,(%esp)
 86429cb:	e8 2a f1 eb ff       	call   8501afa <_ZNK10CInventory26tryInsertItemIntoEquipmentE10Inven_Item>
 86429d0:	c1 e8 1f             	shr    $0x1f,%eax
 86429d3:	84 c0                	test   %al,%al
 86429d5:	74 0a                	je     86429e1 <_ZN10CTitleBook8getTitleEP5CUser24ENUM_TITLE_BOOK_CATEGORYii14ENUM_ITEMSPACERi+0x41d>
 86429d7:	b8 07 00 00 00       	mov    $0x7,%eax
 86429dc:	e9 bd 01 00 00       	jmp    8642b9e <_ZN10CTitleBook8getTitleEP5CUser24ENUM_TITLE_BOOK_CATEGORYii14ENUM_ITEMSPACERi+0x5da>
 86429e1:	8b 45 1c             	mov    0x1c(%ebp),%eax
 86429e4:	8b 00                	mov    (%eax),%eax
 86429e6:	89 44 24 08          	mov    %eax,0x8(%esp)
 86429ea:	8b 45 dc             	mov    -0x24(%ebp),%eax
 86429ed:	89 44 24 04          	mov    %eax,0x4(%esp)
 86429f1:	8b 45 08             	mov    0x8(%ebp),%eax
 86429f4:	89 04 24             	mov    %eax,(%esp)
 86429f7:	e8 c2 d9 eb ff       	call   85003be <_Z11IsEquipableP5CUserPK5CItemi>
 86429fc:	85 c0                	test   %eax,%eax
 86429fe:	0f 95 c0             	setne  %al
 8642a01:	84 c0                	test   %al,%al
 8642a03:	74 0a                	je     8642a0f <_ZN10CTitleBook8getTitleEP5CUser24ENUM_TITLE_BOOK_CATEGORYii14ENUM_ITEMSPACERi+0x44b>
 8642a05:	b8 06 00 00 00       	mov    $0x6,%eax
 8642a0a:	e9 8f 01 00 00       	jmp    8642b9e <_ZN10CTitleBook8getTitleEP5CUser24ENUM_TITLE_BOOK_CATEGORYii14ENUM_ITEMSPACERi+0x5da>
 8642a0f:	8d 85 6f ff ff ff    	lea    -0x91(%ebp),%eax
 8642a15:	83 c0 11             	add    $0x11,%eax
 8642a18:	89 04 24             	mov    %eax,(%esp)
 8642a1b:	e8 88 8b c4 ff       	call   828b5a8 <_ZNK17stAmplifyOption_t7GetLockEv>
 8642a20:	84 c0                	test   %al,%al
 8642a22:	74 12                	je     8642a36 <_ZN10CTitleBook8getTitleEP5CUser24ENUM_TITLE_BOOK_CATEGORYii14ENUM_ITEMSPACERi+0x472>
 8642a24:	0f b6 85 6f ff ff ff 	movzbl -0x91(%ebp),%eax
 8642a2b:	84 c0                	test   %al,%al
 8642a2d:	74 07                	je     8642a36 <_ZN10CTitleBook8getTitleEP5CUser24ENUM_TITLE_BOOK_CATEGORYii14ENUM_ITEMSPACERi+0x472>
 8642a2f:	b8 01 00 00 00       	mov    $0x1,%eax
 8642a34:	eb 05                	jmp    8642a3b <_ZN10CTitleBook8getTitleEP5CUser24ENUM_TITLE_BOOK_CATEGORYii14ENUM_ITEMSPACERi+0x477>
 8642a36:	b8 00 00 00 00       	mov    $0x0,%eax
 8642a3b:	84 c0                	test   %al,%al
 8642a3d:	74 0a                	je     8642a49 <_ZN10CTitleBook8getTitleEP5CUser24ENUM_TITLE_BOOK_CATEGORYii14ENUM_ITEMSPACERi+0x485>
 8642a3f:	b8 01 00 00 00       	mov    $0x1,%eax
 8642a44:	e9 55 01 00 00       	jmp    8642b9e <_ZN10CTitleBook8getTitleEP5CUser24ENUM_TITLE_BOOK_CATEGORYii14ENUM_ITEMSPACERi+0x5da>
 8642a49:	c6 85 6f ff ff ff 00 	movb   $0x0,-0x91(%ebp)
 8642a50:	8b 45 10             	mov    0x10(%ebp),%eax
 8642a53:	89 44 24 08          	mov    %eax,0x8(%esp)
 8642a57:	8b 45 0c             	mov    0xc(%ebp),%eax
 8642a5a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8642a5e:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8642a61:	89 04 24             	mov    %eax,(%esp)
 8642a64:	e8 e7 f2 ff ff       	call   8641d50 <_ZN10CTitleBook12_deleteTitleE24ENUM_TITLE_BOOK_CATEGORYi>
 8642a69:	c7 44 24 4c 00 00 00 	movl   $0x0,0x4c(%esp)
 8642a70:	00 
 8642a71:	c7 44 24 48 01 00 00 	movl   $0x1,0x48(%esp)
 8642a78:	00 
 8642a79:	c7 44 24 44 07 00 00 	movl   $0x7,0x44(%esp)
 8642a80:	00 
 8642a81:	8b 85 6f ff ff ff    	mov    -0x91(%ebp),%eax
 8642a87:	89 44 24 04          	mov    %eax,0x4(%esp)
 8642a8b:	8b 85 73 ff ff ff    	mov    -0x8d(%ebp),%eax
 8642a91:	89 44 24 08          	mov    %eax,0x8(%esp)
 8642a95:	8b 85 77 ff ff ff    	mov    -0x89(%ebp),%eax
 8642a9b:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8642a9f:	8b 85 7b ff ff ff    	mov    -0x85(%ebp),%eax
 8642aa5:	89 44 24 10          	mov    %eax,0x10(%esp)
 8642aa9:	8b 85 7f ff ff ff    	mov    -0x81(%ebp),%eax
 8642aaf:	89 44 24 14          	mov    %eax,0x14(%esp)
 8642ab3:	8b 45 83             	mov    -0x7d(%ebp),%eax
 8642ab6:	89 44 24 18          	mov    %eax,0x18(%esp)
 8642aba:	8b 45 87             	mov    -0x79(%ebp),%eax
 8642abd:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 8642ac1:	8b 45 8b             	mov    -0x75(%ebp),%eax
 8642ac4:	89 44 24 20          	mov    %eax,0x20(%esp)
 8642ac8:	8b 45 8f             	mov    -0x71(%ebp),%eax
 8642acb:	89 44 24 24          	mov    %eax,0x24(%esp)
 8642acf:	8b 45 93             	mov    -0x6d(%ebp),%eax
 8642ad2:	89 44 24 28          	mov    %eax,0x28(%esp)
 8642ad6:	8b 45 97             	mov    -0x69(%ebp),%eax
 8642ad9:	89 44 24 2c          	mov    %eax,0x2c(%esp)
 8642add:	8b 45 9b             	mov    -0x65(%ebp),%eax
 8642ae0:	89 44 24 30          	mov    %eax,0x30(%esp)
 8642ae4:	8b 45 9f             	mov    -0x61(%ebp),%eax
 8642ae7:	89 44 24 34          	mov    %eax,0x34(%esp)
 8642aeb:	8b 45 a3             	mov    -0x5d(%ebp),%eax
 8642aee:	89 44 24 38          	mov    %eax,0x38(%esp)
 8642af2:	8b 45 a7             	mov    -0x59(%ebp),%eax
 8642af5:	89 44 24 3c          	mov    %eax,0x3c(%esp)
 8642af9:	0f b6 45 ab          	movzbl -0x55(%ebp),%eax
 8642afd:	88 44 24 40          	mov    %al,0x40(%esp)
 8642b01:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8642b04:	89 04 24             	mov    %eax,(%esp)
 8642b07:	e8 38 f8 eb ff       	call   8502344 <_ZN10CInventory23insertItemIntoEquipmentE10Inven_Item14eItemAddReasonbb>
 8642b0c:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8642b0f:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 8642b13:	79 72                	jns    8642b87 <_ZN10CTitleBook8getTitleEP5CUser24ENUM_TITLE_BOOK_CATEGORYii14ENUM_ITEMSPACERi+0x5c3>
 8642b15:	8b bd 71 ff ff ff    	mov    -0x8f(%ebp),%edi
 8642b1b:	8b 45 08             	mov    0x8(%ebp),%eax
 8642b1e:	89 04 24             	mov    %eax,(%esp)
 8642b21:	e8 28 91 a8 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8642b26:	89 c6                	mov    %eax,%esi
 8642b28:	8b 45 08             	mov    0x8(%ebp),%eax
 8642b2b:	89 04 24             	mov    %eax,(%esp)
 8642b2e:	e8 3b 78 a9 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8642b33:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8642b3a:	00 
 8642b3b:	89 04 24             	mov    %eax,(%esp)
 8642b3e:	e8 08 65 ac ff       	call   810904b <_Z14NumberToStringji>
 8642b43:	89 c3                	mov    %eax,%ebx
 8642b45:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8642b4c:	00 
 8642b4d:	c7 44 24 08 c7 02 00 	movl   $0x2c7,0x8(%esp)
 8642b54:	00 
 8642b55:	c7 44 24 04 40 b8 ce 	movl   $0x8ceb840,0x4(%esp)
 8642b5c:	08 
 8642b5d:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8642b60:	89 04 24             	mov    %eax,(%esp)
 8642b63:	e8 b0 cb f0 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8642b68:	89 7c 24 10          	mov    %edi,0x10(%esp)
 8642b6c:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8642b70:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8642b74:	c7 44 24 04 e8 ab ce 	movl   $0x8ceabe8,0x4(%esp)
 8642b7b:	08 
 8642b7c:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8642b7f:	89 04 24             	mov    %eax,(%esp)
 8642b82:	e8 01 cc f0 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8642b87:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8642b8a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8642b8e:	8b 45 08             	mov    0x8(%ebp),%eax
 8642b91:	89 04 24             	mov    %eax,(%esp)
 8642b94:	e8 7b b1 01 00       	call   865dd14 <_ZN5CUser10send_equipEi>
 8642b99:	b8 00 00 00 00       	mov    $0x0,%eax
 8642b9e:	81 c4 dc 00 00 00    	add    $0xdc,%esp
 8642ba4:	5b                   	pop    %ebx
 8642ba5:	5e                   	pop    %esi
 8642ba6:	5f                   	pop    %edi
 8642ba7:	5d                   	pop    %ebp
 8642ba8:	c3                   	ret
 8642ba9:	90                   	nop

```

```c
// CTitleBook::getTitle @ 0x86425c4

/* CTitleBook::getTitle(CUser*, ENUM_TITLE_BOOK_CATEGORY, int, int, ENUM_ITEMSPACE, int&) */

int CTitleBook::getTitle
              (CUser *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
              int *param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  uint *puVar6;
  CDataManager *this;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  char local_95;
  undefined2 uStack_93;
  undefined2 local_91;
  undefined4 local_85;
  uint local_81;
  uint local_7d;
  uint local_79;
  uint local_75;
  uint local_71;
  uint local_6d;
  uint local_69;
  uint local_65;
  uint local_61;
  uint local_5d;
  undefined1 local_59;
  cMyTrace local_58 [16];
  cMyTrace local_48 [16];
  CTitleBook *local_38;
  int local_34;
  CInventory *local_30;
  int local_2c;
  CItem *local_28;
  int local_24;
  int local_20;
  
  local_38 = (CTitleBook *)CUser::GetCharacExpandData(param_1,0xe);
  if (local_38 == (CTitleBook *)0x0) {
    local_34 = 3;
  }
  else {
    if (param_5 == 0x12) {
      param_5 = 3;
    }
    local_34 = checkError(param_1,param_2,param_3);
    if (local_34 == 0) {
      local_30 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      local_2c = GetInvenTypeFromItemSpace(param_5);
      puVar6 = (uint *)_getTitle(local_38,param_2,param_3);
      uVar9 = *puVar6;
      local_95 = (char)uVar9;
      uStack_93 = (undefined2)(uVar9 >> 0x10);
      uVar1 = puVar6[1];
      local_91 = (undefined2)uVar1;
      uVar2 = puVar6[2];
      uVar3 = puVar6[3];
      local_85 = puVar6[4];
      local_81 = puVar6[5];
      local_7d = puVar6[6];
      local_79 = puVar6[7];
      local_75 = puVar6[8];
      local_71 = puVar6[9];
      local_6d = puVar6[10];
      local_69 = puVar6[0xb];
      local_65 = puVar6[0xc];
      local_61 = puVar6[0xd];
      local_5d = puVar6[0xe];
      local_59 = (undefined1)puVar6[0xf];
      if ((param_4 == 0) || (CONCAT22(local_91,uStack_93) != param_4)) {
        local_34 = 2;
      }
      else {
        this = (CDataManager *)G_CDataManager();
        local_28 = (CItem *)CDataManager::find_item(this,CONCAT22(local_91,uStack_93));
        if (local_28 == (CItem *)0x0) {
          local_34 = 2;
        }
        else {
          if (local_2c == 1) {
            cVar5 = _checkMovetoInven(param_2,param_3);
            if (cVar5 != '\x01') {
              return 5;
            }
            iVar7 = CInventory::tryInsertItemIntoInventory
                              (local_30,uVar9,uVar1,uVar2,uVar3,local_85,local_81,local_7d,local_79,
                               local_75,local_71,local_6d,local_69,local_65,local_61,local_5d,
                               local_59);
            if (iVar7 < 0) {
              return 0xb;
            }
            _deleteTitle(local_38,param_2,param_3);
            local_24 = CInventory::insertItemIntoInventory
                                 (local_30,uVar9,uVar1,uVar2,uVar3,local_85,local_81,local_7d,
                                  local_79,local_75,local_71,local_6d,local_69,local_65,local_61,
                                  local_5d,local_59,7,1,0);
            if (local_24 < 0) {
              uVar8 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
              uVar9 = CUser::get_acc_id(param_1);
              uVar10 = NumberToString(uVar9,0);
              cMyTrace::cMyTrace(local_58,
                                 "static int CTitleBook::getTitle(CUser*, ENUM_TITLE_BOOK_CATEGORY, int, int, ENUM_ITEMSPACE, int&)"
                                 ,0x2a5,5);
              cMyTrace::operator()
                        (local_58,"insertItemIntoInventory failed(title) %s %d %d",uVar10,uVar8,
                         CONCAT22(local_91,uStack_93));
            }
            *param_6 = local_24;
          }
          else if (local_2c == 0) {
            if (*param_6 != 0xb) {
              return 7;
            }
            iVar7 = CInventory::tryInsertItemIntoEquipment
                              (local_30,uVar9,uVar1,uVar2,uVar3,local_85,local_81,local_7d,local_79,
                               local_75,local_71,local_6d,local_69,local_65,local_61,local_5d,
                               local_59);
            if (iVar7 < 0) {
              return 7;
            }
            iVar7 = IsEquipable(param_1,local_28,*param_6);
            if (iVar7 != 0) {
              return 6;
            }
            cVar5 = stAmplifyOption_t::GetLock((stAmplifyOption_t *)((int)&local_85 + 1));
            if ((cVar5 == '\0') || (local_95 == '\0')) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (bVar4) {
              return 1;
            }
            _deleteTitle(local_38,param_2,param_3);
            local_20 = CInventory::insertItemIntoEquipment
                                 (local_30,uVar9 & 0xffffff00,uVar1,uVar2,uVar3,local_85,local_81,
                                  local_7d,local_79,local_75,local_71,local_6d,local_69,local_65,
                                  local_61,local_5d,local_59,7,1,0);
            if (local_20 < 0) {
              uVar8 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
              uVar9 = CUser::get_acc_id(param_1);
              uVar10 = NumberToString(uVar9,0);
              cMyTrace::cMyTrace(local_48,
                                 "static int CTitleBook::getTitle(CUser*, ENUM_TITLE_BOOK_CATEGORY, int, int, ENUM_ITEMSPACE, int&)"
                                 ,0x2c7,5);
              cMyTrace::operator()
                        (local_48,"insertItemIntoEquipment failed(title) %s %d %d",uVar10,uVar8,
                         CONCAT22(local_91,uStack_93));
            }
            CUser::send_equip(param_1,local_20);
          }
          local_34 = 0;
        }
      }
    }
  }
  return local_34;
}

```

---

## getTitleSlot

```asm
// === 086416d8 CTitleBook::getTitleSlot  [0x086416d8-0x8641703] ===
 86416d8:	55                   	push   %ebp
 86416d9:	89 e5                	mov    %esp,%ebp
 86416db:	83 ec 18             	sub    $0x18,%esp
 86416de:	8b 45 08             	mov    0x8(%ebp),%eax
 86416e1:	89 04 24             	mov    %eax,(%esp)
 86416e4:	e8 db 74 a8 ff       	call   80c8bc4 <_ZN13charac_expand5CData5alterEv>
 86416e9:	8b 55 0c             	mov    0xc(%ebp),%edx
 86416ec:	8b 45 08             	mov    0x8(%ebp),%eax
 86416ef:	81 c2 d0 1a 00 00    	add    $0x1ad0,%edx
 86416f5:	8b 54 90 08          	mov    0x8(%eax,%edx,4),%edx
 86416f9:	8b 45 10             	mov    0x10(%ebp),%eax
 86416fc:	6b c0 3d             	imul   $0x3d,%eax,%eax
 86416ff:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8641702:	c9                   	leave
 8641703:	c3                   	ret

```

```c
// CTitleBook::getTitleSlot @ 0x86416d8

/* CTitleBook::getTitleSlot(ENUM_TITLE_BOOK_CATEGORY, int) */

int __thiscall CTitleBook::getTitleSlot(CTitleBook *this,int param_2,int param_3)

{
  charac_expand::CData::alter((CData *)this);
  return *(int *)(this + (param_2 + 0x1ad0) * 4 + 8) + param_3 * 0x3d;
}

```

---

## getTitleSlotR

```asm
// === 086416a4 CTitleBook::getTitleSlotR  [0x086416a4-0x86416d7] ===
 86416a4:	55                   	push   %ebp
 86416a5:	89 e5                	mov    %esp,%ebp
 86416a7:	53                   	push   %ebx
 86416a8:	83 ec 14             	sub    $0x14,%esp
 86416ab:	8b 5d 08             	mov    0x8(%ebp),%ebx
 86416ae:	8b 45 14             	mov    0x14(%ebp),%eax
 86416b1:	89 44 24 0c          	mov    %eax,0xc(%esp)
 86416b5:	8b 45 10             	mov    0x10(%ebp),%eax
 86416b8:	89 44 24 08          	mov    %eax,0x8(%esp)
 86416bc:	8b 45 0c             	mov    0xc(%ebp),%eax
 86416bf:	89 44 24 04          	mov    %eax,0x4(%esp)
 86416c3:	89 1c 24             	mov    %ebx,(%esp)
 86416c6:	e8 e5 06 00 00       	call   8641db0 <_ZN10CTitleBook10_getTitleRE24ENUM_TITLE_BOOK_CATEGORYi>
 86416cb:	83 ec 04             	sub    $0x4,%esp
 86416ce:	89 d8                	mov    %ebx,%eax
 86416d0:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 86416d3:	c9                   	leave
 86416d4:	c2 04 00             	ret    $0x4
 86416d7:	90                   	nop

```

```c
// CTitleBook::getTitleSlotR @ 0x86416a4

/* CTitleBook::getTitleSlotR(ENUM_TITLE_BOOK_CATEGORY, int) */

undefined4
CTitleBook::getTitleSlotR
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  _getTitleR(param_1,param_2,param_3,param_4);
  return param_1;
}

```

---

## isAbleItemLock

```asm
// === 08642ec2 CTitleBook::isAbleItemLock  [0x08642ec2-0x864306d] ===
 8642ec2:	55                   	push   %ebp
 8642ec3:	89 e5                	mov    %esp,%ebp
 8642ec5:	83 ec 38             	sub    $0x38,%esp
 8642ec8:	e8 ce 92 a8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8642ecd:	8d 90 a0 a7 00 00    	lea    0xa7a0(%eax),%edx
 8642ed3:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8642ed6:	89 54 24 04          	mov    %edx,0x4(%esp)
 8642eda:	89 04 24             	mov    %eax,(%esp)
 8642edd:	e8 50 b3 c4 ff       	call   828e232 <_ZNSt3mapIiSt6vectorI14stTitleElementSaIS1_EESt4lessIiESaISt4pairIKiS3_EEE5beginEv>
 8642ee2:	83 ec 04             	sub    $0x4,%esp
 8642ee5:	e9 46 01 00 00       	jmp    8643030 <_ZN10CTitleBook14isAbleItemLockEm+0x16e>
 8642eea:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8642ef1:	e9 0b 01 00 00       	jmp    8643001 <_ZN10CTitleBook14isAbleItemLockEm+0x13f>
 8642ef6:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8642ef9:	89 04 24             	mov    %eax,(%esp)
 8642efc:	e8 f1 b0 c4 ff       	call   828dff2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt6vectorI14stTitleElementSaIS3_EEEEptEv>
 8642f01:	8d 50 04             	lea    0x4(%eax),%edx
 8642f04:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8642f07:	89 44 24 04          	mov    %eax,0x4(%esp)
 8642f0b:	89 14 24             	mov    %edx,(%esp)
 8642f0e:	e8 ff b1 c4 ff       	call   828e112 <_ZNSt6vectorI14stTitleElementSaIS0_EEixEj>
 8642f13:	8d 50 04             	lea    0x4(%eax),%edx
 8642f16:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8642f19:	89 54 24 04          	mov    %edx,0x4(%esp)
 8642f1d:	89 04 24             	mov    %eax,(%esp)
 8642f20:	e8 47 b3 a4 ff       	call   808e26c <_ZNSt6vectorIiSaIiEE3endEv>
 8642f25:	83 ec 04             	sub    $0x4,%esp
 8642f28:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8642f2b:	89 04 24             	mov    %eax,(%esp)
 8642f2e:	e8 bf b0 c4 ff       	call   828dff2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt6vectorI14stTitleElementSaIS3_EEEEptEv>
 8642f33:	8d 50 04             	lea    0x4(%eax),%edx
 8642f36:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8642f39:	89 44 24 04          	mov    %eax,0x4(%esp)
 8642f3d:	89 14 24             	mov    %edx,(%esp)
 8642f40:	e8 cd b1 c4 ff       	call   828e112 <_ZNSt6vectorI14stTitleElementSaIS0_EEixEj>
 8642f45:	8d 50 04             	lea    0x4(%eax),%edx
 8642f48:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8642f4b:	89 54 24 04          	mov    %edx,0x4(%esp)
 8642f4f:	89 04 24             	mov    %eax,(%esp)
 8642f52:	e8 f1 b2 a4 ff       	call   808e248 <_ZNSt6vectorIiSaIiEE5beginEv>
 8642f57:	83 ec 04             	sub    $0x4,%esp
 8642f5a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8642f5d:	8d 55 08             	lea    0x8(%ebp),%edx
 8642f60:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8642f64:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8642f67:	89 54 24 08          	mov    %edx,0x8(%esp)
 8642f6b:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8642f6e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8642f72:	89 04 24             	mov    %eax,(%esp)
 8642f75:	e8 02 02 00 00       	call   864317c <_ZSt4findIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEmET_S7_S7_RKT0_>
 8642f7a:	83 ec 04             	sub    $0x4,%esp
 8642f7d:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8642f80:	89 04 24             	mov    %eax,(%esp)
 8642f83:	e8 6a b0 c4 ff       	call   828dff2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt6vectorI14stTitleElementSaIS3_EEEEptEv>
 8642f88:	8d 50 04             	lea    0x4(%eax),%edx
 8642f8b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8642f8e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8642f92:	89 14 24             	mov    %edx,(%esp)
 8642f95:	e8 78 b1 c4 ff       	call   828e112 <_ZNSt6vectorI14stTitleElementSaIS0_EEixEj>
 8642f9a:	8d 50 04             	lea    0x4(%eax),%edx
 8642f9d:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8642fa0:	89 54 24 04          	mov    %edx,0x4(%esp)
 8642fa4:	89 04 24             	mov    %eax,(%esp)
 8642fa7:	e8 c0 b2 a4 ff       	call   808e26c <_ZNSt6vectorIiSaIiEE3endEv>
 8642fac:	83 ec 04             	sub    $0x4,%esp
 8642faf:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8642fb2:	89 44 24 04          	mov    %eax,0x4(%esp)
 8642fb6:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8642fb9:	89 04 24             	mov    %eax,(%esp)
 8642fbc:	e8 a1 74 aa ff       	call   80ea462 <_ZN9__gnu_cxxneIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_>
 8642fc1:	84 c0                	test   %al,%al
 8642fc3:	74 38                	je     8642ffd <_ZN10CTitleBook14isAbleItemLockEm+0x13b>
 8642fc5:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8642fc8:	89 04 24             	mov    %eax,(%esp)
 8642fcb:	e8 22 b0 c4 ff       	call   828dff2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt6vectorI14stTitleElementSaIS3_EEEEptEv>
 8642fd0:	8d 50 04             	lea    0x4(%eax),%edx
 8642fd3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8642fd6:	89 44 24 04          	mov    %eax,0x4(%esp)
 8642fda:	89 14 24             	mov    %edx,(%esp)
 8642fdd:	e8 30 b1 c4 ff       	call   828e112 <_ZNSt6vectorI14stTitleElementSaIS0_EEixEj>
 8642fe2:	8b 40 1c             	mov    0x1c(%eax),%eax
 8642fe5:	83 f8 ff             	cmp    $0xffffffff,%eax
 8642fe8:	0f 94 c0             	sete   %al
 8642feb:	84 c0                	test   %al,%al
 8642fed:	74 07                	je     8642ff6 <_ZN10CTitleBook14isAbleItemLockEm+0x134>
 8642fef:	b8 01 00 00 00       	mov    $0x1,%eax
 8642ff4:	eb 76                	jmp    864306c <_ZN10CTitleBook14isAbleItemLockEm+0x1aa>
 8642ff6:	b8 00 00 00 00       	mov    $0x0,%eax
 8642ffb:	eb 6f                	jmp    864306c <_ZN10CTitleBook14isAbleItemLockEm+0x1aa>
 8642ffd:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8643001:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8643004:	89 04 24             	mov    %eax,(%esp)
 8643007:	e8 e6 af c4 ff       	call   828dff2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt6vectorI14stTitleElementSaIS3_EEEEptEv>
 864300c:	83 c0 04             	add    $0x4,%eax
 864300f:	89 04 24             	mov    %eax,(%esp)
 8643012:	e8 41 b2 c4 ff       	call   828e258 <_ZNKSt6vectorI14stTitleElementSaIS0_EE4sizeEv>
 8643017:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 864301a:	0f 97 c0             	seta   %al
 864301d:	84 c0                	test   %al,%al
 864301f:	0f 85 d1 fe ff ff    	jne    8642ef6 <_ZN10CTitleBook14isAbleItemLockEm+0x34>
 8643025:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8643028:	89 04 24             	mov    %eax,(%esp)
 864302b:	e8 4a b2 c4 ff       	call   828e27a <_ZNSt17_Rb_tree_iteratorISt4pairIKiSt6vectorI14stTitleElementSaIS3_EEEEppEv>
 8643030:	e8 66 91 a8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8643035:	8d 90 a0 a7 00 00    	lea    0xa7a0(%eax),%edx
 864303b:	8d 45 e0             	lea    -0x20(%ebp),%eax
 864303e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8643042:	89 04 24             	mov    %eax,(%esp)
 8643045:	e8 6e af c4 ff       	call   828dfb8 <_ZNSt3mapIiSt6vectorI14stTitleElementSaIS1_EESt4lessIiESaISt4pairIKiS3_EEE3endEv>
 864304a:	83 ec 04             	sub    $0x4,%esp
 864304d:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8643050:	89 44 24 04          	mov    %eax,0x4(%esp)
 8643054:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8643057:	89 04 24             	mov    %eax,(%esp)
 864305a:	e8 7f af c4 ff       	call   828dfde <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt6vectorI14stTitleElementSaIS3_EEEEneERKS7_>
 864305f:	84 c0                	test   %al,%al
 8643061:	0f 85 83 fe ff ff    	jne    8642eea <_ZN10CTitleBook14isAbleItemLockEm+0x28>
 8643067:	b8 01 00 00 00       	mov    $0x1,%eax
 864306c:	c9                   	leave
 864306d:	c3                   	ret

```

```c
// CTitleBook::isAbleItemLock @ 0x8642ec2

/* CTitleBook::isAbleItemLock(unsigned long) */

undefined4 CTitleBook::isAbleItemLock(ulong param_1)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  int local_48 [3];
  int local_38;
  map<int,std::vector<stTitleElement,std::allocator<stTitleElement>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>>
  local_28 [4];
  undefined1 local_24 [4];
  undefined1 local_20 [4];
  uint local_1c;
  undefined4 local_18;
  undefined1 local_14 [4];
  uint local_10;
  
  puVar5 = (uint *)&stack0xffffffc4;
  local_38 = G_CDataManager();
  local_38 = local_38 + 0xa7a0;
  std::
  map<int,std::vector<stTitleElement,std::allocator<stTitleElement>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>>
  ::begin(local_28);
  do {
    puVar5[-1] = 0x8643035;
    iVar4 = G_CDataManager();
    puVar5[1] = iVar4 + 0xa7a0;
    *puVar5 = (uint)local_24;
    puVar5[-1] = 0x864304a;
    std::
    map<int,std::vector<stTitleElement,std::allocator<stTitleElement>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>>
    ::end((map<int,std::vector<stTitleElement,std::allocator<stTitleElement>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>>
           *)*puVar5);
    puVar5[1] = (uint)local_24;
    *puVar5 = (uint)local_28;
    puVar5[-1] = 0x864305f;
    cVar2 = std::
            _Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
            ::operator!=((_Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
                          *)*puVar5,(_Rb_tree_iterator *)puVar5[1]);
    if (cVar2 == '\0') {
      return 1;
    }
    local_10 = 0;
    while( true ) {
      *puVar5 = (uint)local_28;
      puVar5[-1] = 0x864300c;
      iVar4 = std::
              _Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
              ::operator->((_Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
                            *)*puVar5);
      *puVar5 = iVar4 + 4;
      puVar5[-1] = 0x8643017;
      uVar3 = std::vector<stTitleElement,std::allocator<stTitleElement>>::size
                        ((vector<stTitleElement,std::allocator<stTitleElement>> *)*puVar5);
      if (uVar3 <= local_10) break;
      *puVar5 = (uint)local_28;
      puVar5[-1] = 0x8642f01;
      iVar4 = std::
              _Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
              ::operator->((_Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
                            *)*puVar5);
      puVar5[1] = local_10;
      *puVar5 = iVar4 + 4;
      puVar5[-1] = 0x8642f13;
      iVar4 = std::vector<stTitleElement,std::allocator<stTitleElement>>::operator[]
                        ((vector<stTitleElement,std::allocator<stTitleElement>> *)*puVar5,puVar5[1])
      ;
      puVar5[1] = iVar4 + 4;
      *puVar5 = (uint)&local_1c;
      puVar5[-1] = 0x8642f25;
      std::vector<int,std::allocator<int>>::end();
      *puVar5 = (uint)local_28;
      puVar5[-1] = 0x8642f33;
      iVar4 = std::
              _Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
              ::operator->((_Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
                            *)*puVar5);
      puVar5[1] = local_10;
      *puVar5 = iVar4 + 4;
      puVar5[-1] = 0x8642f45;
      iVar4 = std::vector<stTitleElement,std::allocator<stTitleElement>>::operator[]
                        ((vector<stTitleElement,std::allocator<stTitleElement>> *)*puVar5,puVar5[1])
      ;
      puVar5[1] = iVar4 + 4;
      *puVar5 = (uint)&local_18;
      puVar5[-1] = 0x8642f57;
      std::vector<int,std::allocator<int>>::begin();
      puVar5[3] = (uint)&param_1;
      puVar5[2] = local_1c;
      puVar5[1] = local_18;
      *puVar5 = (uint)local_20;
      puVar5[-1] = 0x8642f7a;
      std::
      find<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,unsigned_long>();
      puVar5[-1] = (uint)local_28;
      puVar5[-2] = 0x8642f88;
      iVar4 = std::
              _Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
              ::operator->((_Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
                            *)puVar5[-1]);
      *puVar5 = local_10;
      puVar5[-1] = iVar4 + 4;
      puVar5[-2] = 0x8642f9a;
      iVar4 = std::vector<stTitleElement,std::allocator<stTitleElement>>::operator[]
                        ((vector<stTitleElement,std::allocator<stTitleElement>> *)puVar5[-1],*puVar5
                        );
      *puVar5 = iVar4 + 4;
      puVar5[-1] = (uint)local_14;
      puVar5[-2] = 0x8642fac;
      std::vector<int,std::allocator<int>>::end();
      *puVar5 = (uint)local_20;
      puVar5[-1] = (uint)local_14;
      puVar5[-2] = 0x8642fc1;
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)puVar5[-1],(__normal_iterator *)*puVar5);
      if (bVar1) {
        puVar5[-1] = (uint)local_28;
        puVar5[-2] = 0x8642fd0;
        iVar4 = std::
                _Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
                ::operator->((_Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
                              *)puVar5[-1]);
        *puVar5 = local_10;
        puVar5[-1] = iVar4 + 4;
        puVar5[-2] = 0x8642fe2;
        iVar4 = std::vector<stTitleElement,std::allocator<stTitleElement>>::operator[]
                          ((vector<stTitleElement,std::allocator<stTitleElement>> *)puVar5[-1],
                           *puVar5);
        if (*(int *)(iVar4 + 0x1c) == -1) {
          return 1;
        }
        return 0;
      }
      local_10 = local_10 + 1;
      puVar5 = puVar5 + -1;
    }
    *puVar5 = (uint)local_28;
    puVar5[-1] = 0x8643030;
    std::
    _Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
    ::operator++((_Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
                  *)*puVar5);
  } while( true );
}

```

---

## loadData

```asm
// === 0864165e CTitleBook::loadData  [0x0864165e-0x86416a3] ===
 864165e:	55                   	push   %ebp
 864165f:	89 e5                	mov    %esp,%ebp
 8641661:	83 ec 18             	sub    $0x18,%esp
 8641664:	8b 45 08             	mov    0x8(%ebp),%eax
 8641667:	8b 00                	mov    (%eax),%eax
 8641669:	83 c0 1c             	add    $0x1c,%eax
 864166c:	8b 10                	mov    (%eax),%edx
 864166e:	8b 45 08             	mov    0x8(%ebp),%eax
 8641671:	89 04 24             	mov    %eax,(%esp)
 8641674:	ff d2                	call   *%edx
 8641676:	8b 45 08             	mov    0x8(%ebp),%eax
 8641679:	8b 55 0c             	mov    0xc(%ebp),%edx
 864167c:	89 50 08             	mov    %edx,0x8(%eax)
 864167f:	8b 45 08             	mov    0x8(%ebp),%eax
 8641682:	8d 50 0c             	lea    0xc(%eax),%edx
 8641685:	c7 44 24 08 3a 6b 00 	movl   $0x6b3a,0x8(%esp)
 864168c:	00 
 864168d:	8b 45 10             	mov    0x10(%ebp),%eax
 8641690:	89 44 24 04          	mov    %eax,0x4(%esp)
 8641694:	89 14 24             	mov    %edx,(%esp)
 8641697:	e8 04 c2 a3 ff       	call   807d8a0 <memcpy@plt>
 864169c:	b8 01 00 00 00       	mov    $0x1,%eax
 86416a1:	c9                   	leave
 86416a2:	c3                   	ret
 86416a3:	90                   	nop

```

```c
// CTitleBook::loadData @ 0x864165e

/* CTitleBook::loadData(CUser*, char*) */

undefined4 __thiscall CTitleBook::loadData(CTitleBook *this,CUser *param_1,char *param_2)

{
  (**(code **)(*(int *)this + 0x1c))(this);
  *(CUser **)(this + 8) = param_1;
  memcpy(this + 0xc,param_2,0x6b3a);
  return 1;
}

```

---

## putTitle

```asm
// === 08642058 CTitleBook::putTitle  [0x08642058-0x86425c3] ===
 8642058:	55                   	push   %ebp
 8642059:	89 e5                	mov    %esp,%ebp
 864205b:	57                   	push   %edi
 864205c:	56                   	push   %esi
 864205d:	53                   	push   %ebx
 864205e:	81 ec 5c 01 00 00    	sub    $0x15c,%esp
 8642064:	c7 44 24 04 0e 00 00 	movl   $0xe,0x4(%esp)
 864206b:	00 
 864206c:	8b 45 08             	mov    0x8(%ebp),%eax
 864206f:	89 04 24             	mov    %eax,(%esp)
 8642072:	e8 0d b5 a9 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 8642077:	89 45 d0             	mov    %eax,-0x30(%ebp)
 864207a:	83 7d d0 00          	cmpl   $0x0,-0x30(%ebp)
 864207e:	75 0a                	jne    864208a <_ZN10CTitleBook8putTitleEP5CUser14ENUM_ITEMSPACEii24ENUM_TITLE_BOOK_CATEGORYi+0x32>
 8642080:	bb 03 00 00 00       	mov    $0x3,%ebx
 8642085:	e9 2d 05 00 00       	jmp    86425b7 <_ZN10CTitleBook8putTitleEP5CUser14ENUM_ITEMSPACEii24ENUM_TITLE_BOOK_CATEGORYi+0x55f>
 864208a:	83 7d 0c 12          	cmpl   $0x12,0xc(%ebp)
 864208e:	75 07                	jne    8642097 <_ZN10CTitleBook8putTitleEP5CUser14ENUM_ITEMSPACEii24ENUM_TITLE_BOOK_CATEGORYi+0x3f>
 8642090:	c7 45 0c 03 00 00 00 	movl   $0x3,0xc(%ebp)
 8642097:	8b 45 08             	mov    0x8(%ebp),%eax
 864209a:	89 04 24             	mov    %eax,(%esp)
 864209d:	e8 ec 81 a9 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 86420a2:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 86420a5:	8b 45 0c             	mov    0xc(%ebp),%eax
 86420a8:	89 04 24             	mov    %eax,(%esp)
 86420ab:	e8 95 57 ab ff       	call   80f7845 <_Z25GetInvenTypeFromItemSpace14ENUM_ITEMSPACE>
 86420b0:	89 45 d8             	mov    %eax,-0x28(%ebp)
 86420b3:	8b 55 d8             	mov    -0x28(%ebp),%edx
 86420b6:	8d 85 73 ff ff ff    	lea    -0x8d(%ebp),%eax
 86420bc:	8b 4d 10             	mov    0x10(%ebp),%ecx
 86420bf:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 86420c3:	89 54 24 08          	mov    %edx,0x8(%esp)
 86420c7:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 86420ca:	89 54 24 04          	mov    %edx,0x4(%esp)
 86420ce:	89 04 24             	mov    %eax,(%esp)
 86420d1:	e8 42 98 eb ff       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 86420d6:	83 ec 04             	sub    $0x4,%esp
 86420d9:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 86420dd:	74 0d                	je     86420ec <_ZN10CTitleBook8putTitleEP5CUser14ENUM_ITEMSPACEii24ENUM_TITLE_BOOK_CATEGORYi+0x94>
 86420df:	8b 95 75 ff ff ff    	mov    -0x8b(%ebp),%edx
 86420e5:	8b 45 14             	mov    0x14(%ebp),%eax
 86420e8:	39 c2                	cmp    %eax,%edx
 86420ea:	74 0a                	je     86420f6 <_ZN10CTitleBook8putTitleEP5CUser14ENUM_ITEMSPACEii24ENUM_TITLE_BOOK_CATEGORYi+0x9e>
 86420ec:	bb 02 00 00 00       	mov    $0x2,%ebx
 86420f1:	e9 c1 04 00 00       	jmp    86425b7 <_ZN10CTitleBook8putTitleEP5CUser14ENUM_ITEMSPACEii24ENUM_TITLE_BOOK_CATEGORYi+0x55f>
 86420f6:	8b 45 1c             	mov    0x1c(%ebp),%eax
 86420f9:	89 44 24 04          	mov    %eax,0x4(%esp)
 86420fd:	8b 45 18             	mov    0x18(%ebp),%eax
 8642100:	89 04 24             	mov    %eax,(%esp)
 8642103:	e8 b0 9b c4 ff       	call   828bcb8 <_ZN12CAchievement14_getSectionIdxE24ENUM_TITLE_BOOK_CATEGORYi>
 8642108:	89 45 dc             	mov    %eax,-0x24(%ebp)
 864210b:	83 7d dc ff          	cmpl   $0xffffffff,-0x24(%ebp)
 864210f:	0f 84 8a 00 00 00    	je     864219f <_ZN10CTitleBook8putTitleEP5CUser14ENUM_ITEMSPACEii24ENUM_TITLE_BOOK_CATEGORYi+0x147>
 8642115:	8b 75 dc             	mov    -0x24(%ebp),%esi
 8642118:	e8 7e a0 a8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 864211d:	05 94 a7 00 00       	add    $0xa794,%eax
 8642122:	89 74 24 04          	mov    %esi,0x4(%esp)
 8642126:	89 04 24             	mov    %eax,(%esp)
 8642129:	e8 04 bc c4 ff       	call   828dd32 <_ZNSt6vectorI14stTitleSectionSaIS0_EEixEj>
 864212e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8642132:	8d 85 f4 fe ff ff    	lea    -0x10c(%ebp),%eax
 8642138:	89 04 24             	mov    %eax,(%esp)
 864213b:	e8 82 b9 c4 ff       	call   828dac2 <_ZN14stTitleSectionC1ERKS_>
 8642140:	8d 85 f4 fe ff ff    	lea    -0x10c(%ebp),%eax
 8642146:	83 c0 30             	add    $0x30,%eax
 8642149:	89 04 24             	mov    %eax,(%esp)
 864214c:	e8 4f 45 0c 00       	call   87066a0 <_ZNKSs5emptyEv>
 8642151:	83 f0 01             	xor    $0x1,%eax
 8642154:	84 c0                	test   %al,%al
 8642156:	74 0c                	je     8642164 <_ZN10CTitleBook8putTitleEP5CUser14ENUM_ITEMSPACEii24ENUM_TITLE_BOOK_CATEGORYi+0x10c>
 8642158:	bb 0c 00 00 00       	mov    $0xc,%ebx
 864215d:	be 00 00 00 00       	mov    $0x0,%esi
 8642162:	eb 25                	jmp    8642189 <_ZN10CTitleBook8putTitleEP5CUser14ENUM_ITEMSPACEii24ENUM_TITLE_BOOK_CATEGORYi+0x131>
 8642164:	be 01 00 00 00       	mov    $0x1,%esi
 8642169:	eb 1e                	jmp    8642189 <_ZN10CTitleBook8putTitleEP5CUser14ENUM_ITEMSPACEii24ENUM_TITLE_BOOK_CATEGORYi+0x131>
 864216b:	89 d3                	mov    %edx,%ebx
 864216d:	89 c6                	mov    %eax,%esi
 864216f:	8d 85 f4 fe ff ff    	lea    -0x10c(%ebp),%eax
 8642175:	89 04 24             	mov    %eax,(%esp)
 8642178:	e8 f5 b7 c4 ff       	call   828d972 <_ZN14stTitleSectionD1Ev>
 864217d:	89 f0                	mov    %esi,%eax
 864217f:	89 da                	mov    %ebx,%edx
 8642181:	89 04 24             	mov    %eax,(%esp)
 8642184:	e8 c7 15 4a 00       	call   8ae3750 <_Unwind_Resume>
 8642189:	8d 85 f4 fe ff ff    	lea    -0x10c(%ebp),%eax
 864218f:	89 04 24             	mov    %eax,(%esp)
 8642192:	e8 db b7 c4 ff       	call   828d972 <_ZN14stTitleSectionD1Ev>
 8642197:	85 f6                	test   %esi,%esi
 8642199:	0f 84 18 04 00 00    	je     86425b7 <_ZN10CTitleBook8putTitleEP5CUser14ENUM_ITEMSPACEii24ENUM_TITLE_BOOK_CATEGORYi+0x55f>
 864219f:	8b 45 08             	mov    0x8(%ebp),%eax
 86421a2:	89 04 24             	mov    %eax,(%esp)
 86421a5:	e8 0e 81 a9 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 86421aa:	83 f8 09             	cmp    $0x9,%eax
 86421ad:	0f 9e c0             	setle  %al
 86421b0:	84 c0                	test   %al,%al
 86421b2:	74 0a                	je     86421be <_ZN10CTitleBook8putTitleEP5CUser14ENUM_ITEMSPACEii24ENUM_TITLE_BOOK_CATEGORYi+0x166>
 86421b4:	bb 08 00 00 00       	mov    $0x8,%ebx
 86421b9:	e9 f9 03 00 00       	jmp    86425b7 <_ZN10CTitleBook8putTitleEP5CUser14ENUM_ITEMSPACEii24ENUM_TITLE_BOOK_CATEGORYi+0x55f>
 86421be:	83 7d 18 02          	cmpl   $0x2,0x18(%ebp)
 86421c2:	75 17                	jne    86421db <_ZN10CTitleBook8putTitleEP5CUser14ENUM_ITEMSPACEii24ENUM_TITLE_BOOK_CATEGORYi+0x183>
 86421c4:	8b 45 08             	mov    0x8(%ebp),%eax
 86421c7:	89 04 24             	mov    %eax,(%esp)
 86421ca:	e8 e9 80 a9 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 86421cf:	83 f8 45             	cmp    $0x45,%eax
 86421d2:	7f 07                	jg     86421db <_ZN10CTitleBook8putTitleEP5CUser14ENUM_ITEMSPACEii24ENUM_TITLE_BOOK_CATEGORYi+0x183>
 86421d4:	b8 01 00 00 00       	mov    $0x1,%eax
 86421d9:	eb 05                	jmp    86421e0 <_ZN10CTitleBook8putTitleEP5CUser14ENUM_ITEMSPACEii24ENUM_TITLE_BOOK_CATEGORYi+0x188>
 86421db:	b8 00 00 00 00       	mov    $0x0,%eax
 86421e0:	84 c0                	test   %al,%al
 86421e2:	74 0a                	je     86421ee <_ZN10CTitleBook8putTitleEP5CUser14ENUM_ITEMSPACEii24ENUM_TITLE_BOOK_CATEGORYi+0x196>
 86421e4:	bb 09 00 00 00       	mov    $0x9,%ebx
 86421e9:	e9 c9 03 00 00       	jmp    86425b7 <_ZN10CTitleBook8putTitleEP5CUser14ENUM_ITEMSPACEii24ENUM_TITLE_BOOK_CATEGORYi+0x55f>
 86421ee:	8b 45 1c             	mov    0x1c(%ebp),%eax
 86421f1:	89 44 24 08          	mov    %eax,0x8(%esp)
 86421f5:	8b 45 18             	mov    0x18(%ebp),%eax
 86421f8:	89 44 24 04          	mov    %eax,0x4(%esp)
 86421fc:	8b 45 14             	mov    0x14(%ebp),%eax
 86421ff:	89 04 24             	mov    %eax,(%esp)
 8642202:	e8 3b 0b 00 00       	call   8642d42 <_ZN10CTitleBook13_checkFitSlotEi24ENUM_TITLE_BOOK_CATEGORYi>
 8642207:	83 f0 01             	xor    $0x1,%eax
 864220a:	84 c0                	test   %al,%al
 864220c:	74 0a                	je     8642218 <_ZN10CTitleBook8putTitleEP5CUser14ENUM_ITEMSPACEii24ENUM_TITLE_BOOK_CATEGORYi+0x1c0>
 864220e:	bb 02 00 00 00       	mov    $0x2,%ebx
 8642213:	e9 9f 03 00 00       	jmp    86425b7 <_ZN10CTitleBook8putTitleEP5CUser14ENUM_ITEMSPACEii24ENUM_TITLE_BOOK_CATEGORYi+0x55f>
 8642218:	8d 85 73 ff ff ff    	lea    -0x8d(%ebp),%eax
 864221e:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8642222:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8642225:	89 44 24 08          	mov    %eax,0x8(%esp)
 8642229:	8b 45 18             	mov    0x18(%ebp),%eax
 864222c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8642230:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8642233:	89 04 24             	mov    %eax,(%esp)
 8642236:	e8 a1 f9 ff ff       	call   8641bdc <_ZN10CTitleBook17_checkInsertTitleE24ENUM_TITLE_BOOK_CATEGORYiP10Inven_Item>
 864223b:	83 f0 01             	xor    $0x1,%eax
 864223e:	84 c0                	test   %al,%al
 8642240:	74 0a                	je     864224c <_ZN10CTitleBook8putTitleEP5CUser14ENUM_ITEMSPACEii24ENUM_TITLE_BOOK_CATEGORYi+0x1f4>
 8642242:	bb 02 00 00 00       	mov    $0x2,%ebx
 8642247:	e9 6b 03 00 00       	jmp    86425b7 <_ZN10CTitleBook8putTitleEP5CUser14ENUM_ITEMSPACEii24ENUM_TITLE_BOOK_CATEGORYi+0x55f>
 864224c:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 8642253:	00 
 8642254:	c7 44 24 10 2b 00 00 	movl   $0x2b,0x10(%esp)
 864225b:	00 
 864225c:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8642263:	00 
 8642264:	8b 45 10             	mov    0x10(%ebp),%eax
 8642267:	89 44 24 08          	mov    %eax,0x8(%esp)
 864226b:	8b 45 d8             	mov    -0x28(%ebp),%eax
 864226e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8642272:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8642275:	89 04 24             	mov    %eax,(%esp)
 8642278:	e8 8f 1d ec ff       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 864227d:	83 f0 01             	xor    $0x1,%eax
 8642280:	84 c0                	test   %al,%al
 8642282:	74 0a                	je     864228e <_ZN10CTitleBook8putTitleEP5CUser14ENUM_ITEMSPACEii24ENUM_TITLE_BOOK_CATEGORYi+0x236>
 8642284:	bb 02 00 00 00       	mov    $0x2,%ebx
 8642289:	e9 29 03 00 00       	jmp    86425b7 <_ZN10CTitleBook8putTitleEP5CUser14ENUM_ITEMSPACEii24ENUM_TITLE_BOOK_CATEGORYi+0x55f>
 864228e:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 8642292:	75 18                	jne    86422ac <_ZN10CTitleBook8putTitleEP5CUser14ENUM_ITEMSPACEii24ENUM_TITLE_BOOK_CATEGORYi+0x254>
 8642294:	83 7d 10 0b          	cmpl   $0xb,0x10(%ebp)
 8642298:	75 12                	jne    86422ac <_ZN10CTitleBook8putTitleEP5CUser14ENUM_ITEMSPACEii24ENUM_TITLE_BOOK_CATEGORYi+0x254>
 864229a:	8b 45 10             	mov    0x10(%ebp),%eax
 864229d:	89 44 24 04          	mov    %eax,0x4(%esp)
 86422a1:	8b 45 08             	mov    0x8(%ebp),%eax
 86422a4:	89 04 24             	mov    %eax,(%esp)
 86422a7:	e8 68 ba 01 00       	call   865dd14 <_ZN5CUser10send_equipEi>
 86422ac:	8d 85 36 ff ff ff    	lea    -0xca(%ebp),%eax
 86422b2:	8b 55 1c             	mov    0x1c(%ebp),%edx
 86422b5:	89 54 24 0c          	mov    %edx,0xc(%esp)
 86422b9:	8b 55 18             	mov    0x18(%ebp),%edx
 86422bc:	89 54 24 08          	mov    %edx,0x8(%esp)
 86422c0:	8b 55 d0             	mov    -0x30(%ebp),%edx
 86422c3:	89 54 24 04          	mov    %edx,0x4(%esp)
 86422c7:	89 04 24             	mov    %eax,(%esp)
 86422ca:	e8 d5 f3 ff ff       	call   86416a4 <_ZN10CTitleBook13getTitleSlotRE24ENUM_TITLE_BOOK_CATEGORYi>
 86422cf:	83 ec 04             	sub    $0x4,%esp
 86422d2:	8b 85 38 ff ff ff    	mov    -0xc8(%ebp),%eax
 86422d8:	85 c0                	test   %eax,%eax
 86422da:	0f 84 af 02 00 00    	je     864258f <_ZN10CTitleBook8putTitleEP5CUser14ENUM_ITEMSPACEii24ENUM_TITLE_BOOK_CATEGORYi+0x537>
 86422e0:	83 7d d8 01          	cmpl   $0x1,-0x28(%ebp)
 86422e4:	0f 85 48 01 00 00    	jne    8642432 <_ZN10CTitleBook8putTitleEP5CUser14ENUM_ITEMSPACEii24ENUM_TITLE_BOOK_CATEGORYi+0x3da>
 86422ea:	c7 44 24 4c 00 00 00 	movl   $0x0,0x4c(%esp)
 86422f1:	00 
 86422f2:	c7 44 24 48 01 00 00 	movl   $0x1,0x48(%esp)
 86422f9:	00 
 86422fa:	c7 44 24 44 07 00 00 	movl   $0x7,0x44(%esp)
 8642301:	00 
 8642302:	8b 85 36 ff ff ff    	mov    -0xca(%ebp),%eax
 8642308:	89 44 24 04          	mov    %eax,0x4(%esp)
 864230c:	8b 85 3a ff ff ff    	mov    -0xc6(%ebp),%eax
 8642312:	89 44 24 08          	mov    %eax,0x8(%esp)
 8642316:	8b 85 3e ff ff ff    	mov    -0xc2(%ebp),%eax
 864231c:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8642320:	8b 85 42 ff ff ff    	mov    -0xbe(%ebp),%eax
 8642326:	89 44 24 10          	mov    %eax,0x10(%esp)
 864232a:	8b 85 46 ff ff ff    	mov    -0xba(%ebp),%eax
 8642330:	89 44 24 14          	mov    %eax,0x14(%esp)
 8642334:	8b 85 4a ff ff ff    	mov    -0xb6(%ebp),%eax
 864233a:	89 44 24 18          	mov    %eax,0x18(%esp)
 864233e:	8b 85 4e ff ff ff    	mov    -0xb2(%ebp),%eax
 8642344:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 8642348:	8b 85 52 ff ff ff    	mov    -0xae(%ebp),%eax
 864234e:	89 44 24 20          	mov    %eax,0x20(%esp)
 8642352:	8b 85 56 ff ff ff    	mov    -0xaa(%ebp),%eax
 8642358:	89 44 24 24          	mov    %eax,0x24(%esp)
 864235c:	8b 85 5a ff ff ff    	mov    -0xa6(%ebp),%eax
 8642362:	89 44 24 28          	mov    %eax,0x28(%esp)
 8642366:	8b 85 5e ff ff ff    	mov    -0xa2(%ebp),%eax
 864236c:	89 44 24 2c          	mov    %eax,0x2c(%esp)
 8642370:	8b 85 62 ff ff ff    	mov    -0x9e(%ebp),%eax
 8642376:	89 44 24 30          	mov    %eax,0x30(%esp)
 864237a:	8b 85 66 ff ff ff    	mov    -0x9a(%ebp),%eax
 8642380:	89 44 24 34          	mov    %eax,0x34(%esp)
 8642384:	8b 85 6a ff ff ff    	mov    -0x96(%ebp),%eax
 864238a:	89 44 24 38          	mov    %eax,0x38(%esp)
 864238e:	8b 85 6e ff ff ff    	mov    -0x92(%ebp),%eax
 8642394:	89 44 24 3c          	mov    %eax,0x3c(%esp)
 8642398:	0f b6 85 72 ff ff ff 	movzbl -0x8e(%ebp),%eax
 864239f:	88 44 24 40          	mov    %al,0x40(%esp)
 86423a3:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 86423a6:	89 04 24             	mov    %eax,(%esp)
 86423a9:	e8 d8 09 ec ff       	call   8502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>
 86423ae:	89 45 e0             	mov    %eax,-0x20(%ebp)
 86423b1:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 86423b5:	0f 89 d4 01 00 00    	jns    864258f <_ZN10CTitleBook8putTitleEP5CUser14ENUM_ITEMSPACEii24ENUM_TITLE_BOOK_CATEGORYi+0x537>
 86423bb:	8b bd 38 ff ff ff    	mov    -0xc8(%ebp),%edi
 86423c1:	8b 45 08             	mov    0x8(%ebp),%eax
 86423c4:	89 04 24             	mov    %eax,(%esp)
 86423c7:	e8 82 98 a8 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 86423cc:	89 c6                	mov    %eax,%esi
 86423ce:	8b 45 08             	mov    0x8(%ebp),%eax
 86423d1:	89 04 24             	mov    %eax,(%esp)
 86423d4:	e8 95 7f a9 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 86423d9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86423e0:	00 
 86423e1:	89 04 24             	mov    %eax,(%esp)
 86423e4:	e8 62 6c ac ff       	call   810904b <_Z14NumberToStringji>
 86423e9:	89 c3                	mov    %eax,%ebx
 86423eb:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 86423f2:	00 
 86423f3:	c7 44 24 08 4f 02 00 	movl   $0x24f,0x8(%esp)
 86423fa:	00 
 86423fb:	c7 44 24 04 c0 b8 ce 	movl   $0x8ceb8c0,0x4(%esp)
 8642402:	08 
 8642403:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8642406:	89 04 24             	mov    %eax,(%esp)
 8642409:	e8 0a d3 f0 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 864240e:	89 7c 24 10          	mov    %edi,0x10(%esp)
 8642412:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8642416:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 864241a:	c7 44 24 04 b8 ab ce 	movl   $0x8ceabb8,0x4(%esp)
 8642421:	08 
 8642422:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8642425:	89 04 24             	mov    %eax,(%esp)
 8642428:	e8 5b d3 f0 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 864242d:	e9 5d 01 00 00       	jmp    864258f <_ZN10CTitleBook8putTitleEP5CUser14ENUM_ITEMSPACEii24ENUM_TITLE_BOOK_CATEGORYi+0x537>
 8642432:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 8642436:	0f 85 53 01 00 00    	jne    864258f <_ZN10CTitleBook8putTitleEP5CUser14ENUM_ITEMSPACEii24ENUM_TITLE_BOOK_CATEGORYi+0x537>
 864243c:	c7 44 24 4c 00 00 00 	movl   $0x0,0x4c(%esp)
 8642443:	00 
 8642444:	c7 44 24 48 01 00 00 	movl   $0x1,0x48(%esp)
 864244b:	00 
 864244c:	c7 44 24 44 07 00 00 	movl   $0x7,0x44(%esp)
 8642453:	00 
 8642454:	8b 85 36 ff ff ff    	mov    -0xca(%ebp),%eax
 864245a:	89 44 24 04          	mov    %eax,0x4(%esp)
 864245e:	8b 85 3a ff ff ff    	mov    -0xc6(%ebp),%eax
 8642464:	89 44 24 08          	mov    %eax,0x8(%esp)
 8642468:	8b 85 3e ff ff ff    	mov    -0xc2(%ebp),%eax
 864246e:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8642472:	8b 85 42 ff ff ff    	mov    -0xbe(%ebp),%eax
 8642478:	89 44 24 10          	mov    %eax,0x10(%esp)
 864247c:	8b 85 46 ff ff ff    	mov    -0xba(%ebp),%eax
 8642482:	89 44 24 14          	mov    %eax,0x14(%esp)
 8642486:	8b 85 4a ff ff ff    	mov    -0xb6(%ebp),%eax
 864248c:	89 44 24 18          	mov    %eax,0x18(%esp)
 8642490:	8b 85 4e ff ff ff    	mov    -0xb2(%ebp),%eax
 8642496:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 864249a:	8b 85 52 ff ff ff    	mov    -0xae(%ebp),%eax
 86424a0:	89 44 24 20          	mov    %eax,0x20(%esp)
 86424a4:	8b 85 56 ff ff ff    	mov    -0xaa(%ebp),%eax
 86424aa:	89 44 24 24          	mov    %eax,0x24(%esp)
 86424ae:	8b 85 5a ff ff ff    	mov    -0xa6(%ebp),%eax
 86424b4:	89 44 24 28          	mov    %eax,0x28(%esp)
 86424b8:	8b 85 5e ff ff ff    	mov    -0xa2(%ebp),%eax
 86424be:	89 44 24 2c          	mov    %eax,0x2c(%esp)
 86424c2:	8b 85 62 ff ff ff    	mov    -0x9e(%ebp),%eax
 86424c8:	89 44 24 30          	mov    %eax,0x30(%esp)
 86424cc:	8b 85 66 ff ff ff    	mov    -0x9a(%ebp),%eax
 86424d2:	89 44 24 34          	mov    %eax,0x34(%esp)
 86424d6:	8b 85 6a ff ff ff    	mov    -0x96(%ebp),%eax
 86424dc:	89 44 24 38          	mov    %eax,0x38(%esp)
 86424e0:	8b 85 6e ff ff ff    	mov    -0x92(%ebp),%eax
 86424e6:	89 44 24 3c          	mov    %eax,0x3c(%esp)
 86424ea:	0f b6 85 72 ff ff ff 	movzbl -0x8e(%ebp),%eax
 86424f1:	88 44 24 40          	mov    %al,0x40(%esp)
 86424f5:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 86424f8:	89 04 24             	mov    %eax,(%esp)
 86424fb:	e8 44 fe eb ff       	call   8502344 <_ZN10CInventory23insertItemIntoEquipmentE10Inven_Item14eItemAddReasonbb>
 8642500:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8642503:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 8642507:	79 74                	jns    864257d <_ZN10CTitleBook8putTitleEP5CUser14ENUM_ITEMSPACEii24ENUM_TITLE_BOOK_CATEGORYi+0x525>
 8642509:	8b bd 38 ff ff ff    	mov    -0xc8(%ebp),%edi
 864250f:	8b 45 08             	mov    0x8(%ebp),%eax
 8642512:	89 04 24             	mov    %eax,(%esp)
 8642515:	e8 34 97 a8 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 864251a:	89 c6                	mov    %eax,%esi
 864251c:	8b 45 08             	mov    0x8(%ebp),%eax
 864251f:	89 04 24             	mov    %eax,(%esp)
 8642522:	e8 47 7e a9 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8642527:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 864252e:	00 
 864252f:	89 04 24             	mov    %eax,(%esp)
 8642532:	e8 14 6b ac ff       	call   810904b <_Z14NumberToStringji>
 8642537:	89 c3                	mov    %eax,%ebx
 8642539:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8642540:	00 
 8642541:	c7 44 24 08 56 02 00 	movl   $0x256,0x8(%esp)
 8642548:	00 
 8642549:	c7 44 24 04 c0 b8 ce 	movl   $0x8ceb8c0,0x4(%esp)
 8642550:	08 
 8642551:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8642554:	89 04 24             	mov    %eax,(%esp)
 8642557:	e8 bc d1 f0 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 864255c:	89 7c 24 10          	mov    %edi,0x10(%esp)
 8642560:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8642564:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8642568:	c7 44 24 04 e8 ab ce 	movl   $0x8ceabe8,0x4(%esp)
 864256f:	08 
 8642570:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8642573:	89 04 24             	mov    %eax,(%esp)
 8642576:	e8 0d d2 f0 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 864257b:	eb 12                	jmp    864258f <_ZN10CTitleBook8putTitleEP5CUser14ENUM_ITEMSPACEii24ENUM_TITLE_BOOK_CATEGORYi+0x537>
 864257d:	8b 45 10             	mov    0x10(%ebp),%eax
 8642580:	89 44 24 04          	mov    %eax,0x4(%esp)
 8642584:	8b 45 08             	mov    0x8(%ebp),%eax
 8642587:	89 04 24             	mov    %eax,(%esp)
 864258a:	e8 85 b7 01 00       	call   865dd14 <_ZN5CUser10send_equipEi>
 864258f:	8d 85 73 ff ff ff    	lea    -0x8d(%ebp),%eax
 8642595:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8642599:	8b 45 1c             	mov    0x1c(%ebp),%eax
 864259c:	89 44 24 08          	mov    %eax,0x8(%esp)
 86425a0:	8b 45 18             	mov    0x18(%ebp),%eax
 86425a3:	89 44 24 04          	mov    %eax,0x4(%esp)
 86425a7:	8b 45 d0             	mov    -0x30(%ebp),%eax
 86425aa:	89 04 24             	mov    %eax,(%esp)
 86425ad:	e8 64 f7 ff ff       	call   8641d16 <_ZN10CTitleBook12_insertTitleE24ENUM_TITLE_BOOK_CATEGORYiP10Inven_Item>
 86425b2:	bb 00 00 00 00       	mov    $0x0,%ebx
 86425b7:	89 d8                	mov    %ebx,%eax
 86425b9:	8d 65 f4             	lea    -0xc(%ebp),%esp
 86425bc:	83 c4 00             	add    $0x0,%esp
 86425bf:	5b                   	pop    %ebx
 86425c0:	5e                   	pop    %esi
 86425c1:	5f                   	pop    %edi
 86425c2:	5d                   	pop    %ebp
 86425c3:	c3                   	ret

```

```c
// CTitleBook::putTitle @ 0x8642058

/* CTitleBook::putTitle(CUser*, ENUM_ITEMSPACE, int, int, ENUM_TITLE_BOOK_CATEGORY, int) */

undefined4
CTitleBook::putTitle
          (CUser *param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  stTitleSection *psVar6;
  undefined4 uVar7;
  undefined4 unaff_EBX;
  undefined4 uVar8;
  stTitleSection local_110 [48];
  string asStack_e0 [18];
  undefined2 local_ce;
  undefined2 uStack_cc;
  undefined2 uStack_ca;
  undefined2 uStack_c8;
  undefined4 local_c6;
  undefined4 local_c2;
  undefined4 local_be;
  undefined4 local_ba;
  undefined4 local_b6;
  undefined4 local_b2;
  undefined4 local_ae;
  undefined4 local_aa;
  undefined4 local_a6;
  undefined4 local_a2;
  undefined4 local_9e;
  undefined4 local_9a;
  undefined4 local_96;
  undefined1 local_92;
  undefined1 local_91 [2];
  int local_8f;
  cMyTrace local_54 [16];
  cMyTrace local_44 [16];
  CTitleBook *local_34;
  CInventory *local_30;
  int local_2c;
  uint local_28;
  int local_24;
  int local_20;
  
  local_34 = (CTitleBook *)CUser::GetCharacExpandData(param_1,0xe);
  if (local_34 == (CTitleBook *)0x0) {
    uVar8 = 3;
  }
  else {
    if (param_2 == 0x12) {
      param_2 = 3;
    }
    local_30 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    iVar3 = GetInvenTypeFromItemSpace(param_2);
    iVar5 = param_3;
    local_2c = iVar3;
    CInventory::GetInvenSlot((int)local_91,(int)local_30);
    if ((param_4 == 0) || (local_8f != param_4)) {
      uVar8 = 2;
    }
    else {
      uVar4 = CAchievement::_getSectionIdx(param_5,param_6,iVar3,iVar5);
      local_28 = uVar4;
      if (uVar4 != 0xffffffff) {
        iVar5 = G_CDataManager();
        psVar6 = (stTitleSection *)
                 std::vector<stTitleSection,std::allocator<stTitleSection>>::operator[]
                           ((vector<stTitleSection,std::allocator<stTitleSection>> *)
                            (iVar5 + 0xa794),uVar4);
        stTitleSection::stTitleSection(local_110,psVar6);
                    /* try { // try from 0864214c to 08642150 has its CatchHandler @ 0864216b */
        cVar2 = std::string::empty(asStack_e0);
        if (cVar2 != '\x01') {
          unaff_EBX = 0xc;
        }
        stTitleSection::~stTitleSection(local_110);
        if (cVar2 != '\x01') {
          return unaff_EBX;
        }
      }
      iVar5 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
      if (iVar5 < 10) {
        uVar8 = 8;
      }
      else {
        if ((param_5 == 2) &&
           (iVar5 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1), iVar5 < 0x46)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          uVar8 = 9;
        }
        else {
          cVar2 = _checkFitSlot(param_4,param_5,param_6);
          if (cVar2 == '\x01') {
            cVar2 = _checkInsertTitle(local_34,param_5,param_6,local_91);
            if (cVar2 == '\x01') {
              cVar2 = CInventory::delete_item(local_30,local_2c,param_3,1,0x2b,1);
              if (cVar2 == '\x01') {
                if ((local_2c == 0) && (param_3 == 0xb)) {
                  CUser::send_equip(param_1,0xb);
                }
                getTitleSlotR(&local_ce,local_34,param_5,param_6);
                if (CONCAT22(uStack_ca,uStack_cc) != 0) {
                  if (local_2c == 1) {
                    local_24 = CInventory::insertItemIntoInventory
                                         (local_30,CONCAT22(uStack_cc,local_ce),
                                          CONCAT22(uStack_c8,uStack_ca),local_c6,local_c2,local_be,
                                          local_ba,local_b6,local_b2,local_ae,local_aa,local_a6,
                                          local_a2,local_9e,local_9a,local_96,local_92,7,1,0);
                    if (local_24 < 0) {
                      uVar8 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
                      uVar4 = CUser::get_acc_id(param_1);
                      uVar7 = NumberToString(uVar4,0);
                      cMyTrace::cMyTrace(local_54,
                                         "static int CTitleBook::putTitle(CUser*, ENUM_ITEMSPACE, int, int, ENUM_TITLE_BOOK_CATEGORY, int)"
                                         ,0x24f,5);
                      cMyTrace::operator()
                                (local_54,"insertItemIntoInventory failed(title) %s %d %d",uVar7,
                                 uVar8,CONCAT22(uStack_ca,uStack_cc));
                    }
                  }
                  else if (local_2c == 0) {
                    local_20 = CInventory::insertItemIntoEquipment
                                         (local_30,CONCAT22(uStack_cc,local_ce),
                                          CONCAT22(uStack_c8,uStack_ca),local_c6,local_c2,local_be,
                                          local_ba,local_b6,local_b2,local_ae,local_aa,local_a6,
                                          local_a2,local_9e,local_9a,local_96,local_92,7,1,0);
                    if (local_20 < 0) {
                      uVar8 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
                      uVar4 = CUser::get_acc_id(param_1);
                      uVar7 = NumberToString(uVar4,0);
                      cMyTrace::cMyTrace(local_44,
                                         "static int CTitleBook::putTitle(CUser*, ENUM_ITEMSPACE, int, int, ENUM_TITLE_BOOK_CATEGORY, int)"
                                         ,0x256,5);
                      cMyTrace::operator()
                                (local_44,"insertItemIntoEquipment failed(title) %s %d %d",uVar7,
                                 uVar8,CONCAT22(uStack_ca,uStack_cc));
                    }
                    else {
                      CUser::send_equip(param_1,param_3);
                    }
                  }
                }
                _insertTitle(local_34,param_5,param_6,local_91);
                uVar8 = 0;
              }
              else {
                uVar8 = 2;
              }
            }
            else {
              uVar8 = 2;
            }
          }
          else {
            uVar8 = 2;
          }
        }
      }
    }
  }
  return uVar8;
}

```

---

## putTitleOnly

```asm
// === 08641e60 CTitleBook::putTitleOnly  [0x08641e60-0x8641e87] ===
 8641e60:	55                   	push   %ebp
 8641e61:	89 e5                	mov    %esp,%ebp
 8641e63:	83 ec 28             	sub    $0x28,%esp
 8641e66:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8641e69:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8641e6d:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8641e70:	89 44 24 08          	mov    %eax,0x8(%esp)
 8641e74:	8b 45 0c             	mov    0xc(%ebp),%eax
 8641e77:	89 44 24 04          	mov    %eax,0x4(%esp)
 8641e7b:	8b 45 08             	mov    0x8(%ebp),%eax
 8641e7e:	89 04 24             	mov    %eax,(%esp)
 8641e81:	e8 02 00 00 00       	call   8641e88 <_ZN10CTitleBook12putTitleOnlyEP5CUseriR24ENUM_TITLE_BOOK_CATEGORYRi>
 8641e86:	c9                   	leave
 8641e87:	c3                   	ret

```

```c
// CTitleBook::putTitleOnly @ 0x8641e60

/* CTitleBook::putTitleOnly(CUser*, int) */

void CTitleBook::putTitleOnly(CUser *param_1,int param_2)

{
  int local_14;
  ENUM_TITLE_BOOK_CATEGORY local_10 [12];
  
  putTitleOnly(param_1,param_2,local_10,&local_14);
  return;
}

```

---

## putTitleOnly_08641e88

```asm
// === 08641e88 CTitleBook::putTitleOnly  [0x08641e88-0x8641fab] ===
 8641e88:	55                   	push   %ebp
 8641e89:	89 e5                	mov    %esp,%ebp
 8641e8b:	83 ec 68             	sub    $0x68,%esp
 8641e8e:	c7 44 24 04 0e 00 00 	movl   $0xe,0x4(%esp)
 8641e95:	00 
 8641e96:	8b 45 08             	mov    0x8(%ebp),%eax
 8641e99:	89 04 24             	mov    %eax,(%esp)
 8641e9c:	e8 e3 b6 a9 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 8641ea1:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8641ea4:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8641ea8:	75 0a                	jne    8641eb4 <_ZN10CTitleBook12putTitleOnlyEP5CUseriR24ENUM_TITLE_BOOK_CATEGORYRi+0x2c>
 8641eaa:	b8 00 00 00 00       	mov    $0x0,%eax
 8641eaf:	e9 f6 00 00 00       	jmp    8641faa <_ZN10CTitleBook12putTitleOnlyEP5CUseriR24ENUM_TITLE_BOOK_CATEGORYRi+0x122>
 8641eb4:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8641eb8:	75 0a                	jne    8641ec4 <_ZN10CTitleBook12putTitleOnlyEP5CUseriR24ENUM_TITLE_BOOK_CATEGORYRi+0x3c>
 8641eba:	b8 00 00 00 00       	mov    $0x0,%eax
 8641ebf:	e9 e6 00 00 00       	jmp    8641faa <_ZN10CTitleBook12putTitleOnlyEP5CUseriR24ENUM_TITLE_BOOK_CATEGORYRi+0x122>
 8641ec4:	8d 45 b3             	lea    -0x4d(%ebp),%eax
 8641ec7:	89 04 24             	mov    %eax,(%esp)
 8641eca:	e8 85 99 a8 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 8641ecf:	8b 45 0c             	mov    0xc(%ebp),%eax
 8641ed2:	89 45 b5             	mov    %eax,-0x4b(%ebp)
 8641ed5:	e8 c1 a2 a8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8641eda:	8b 55 0c             	mov    0xc(%ebp),%edx
 8641edd:	89 54 24 04          	mov    %edx,0x4(%esp)
 8641ee1:	89 04 24             	mov    %eax,(%esp)
 8641ee4:	e8 49 db d1 ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 8641ee9:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8641eec:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8641ef0:	75 0a                	jne    8641efc <_ZN10CTitleBook12putTitleOnlyEP5CUseriR24ENUM_TITLE_BOOK_CATEGORYRi+0x74>
 8641ef2:	b8 00 00 00 00       	mov    $0x0,%eax
 8641ef7:	e9 ae 00 00 00       	jmp    8641faa <_ZN10CTitleBook12putTitleOnlyEP5CUseriR24ENUM_TITLE_BOOK_CATEGORYRi+0x122>
 8641efc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8641eff:	8b 00                	mov    (%eax),%eax
 8641f01:	83 c0 08             	add    $0x8,%eax
 8641f04:	8b 10                	mov    (%eax),%edx
 8641f06:	8d 45 b3             	lea    -0x4d(%ebp),%eax
 8641f09:	89 44 24 04          	mov    %eax,0x4(%esp)
 8641f0d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8641f10:	89 04 24             	mov    %eax,(%esp)
 8641f13:	ff d2                	call   *%edx
 8641f15:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8641f1c:	00 
 8641f1d:	8d 45 b3             	lea    -0x4d(%ebp),%eax
 8641f20:	89 04 24             	mov    %eax,(%esp)
 8641f23:	e8 5c 99 a8 ff       	call   80cb884 <_ZN10Inven_Item12set_add_infoEi>
 8641f28:	8b 45 b5             	mov    -0x4b(%ebp),%eax
 8641f2b:	8b 55 14             	mov    0x14(%ebp),%edx
 8641f2e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8641f32:	8b 55 10             	mov    0x10(%ebp),%edx
 8641f35:	89 54 24 04          	mov    %edx,0x4(%esp)
 8641f39:	89 04 24             	mov    %eax,(%esp)
 8641f3c:	e8 69 0c 00 00       	call   8642baa <_ZN10CTitleBook11_getFitSlotEiR24ENUM_TITLE_BOOK_CATEGORYRi>
 8641f41:	83 f0 01             	xor    $0x1,%eax
 8641f44:	84 c0                	test   %al,%al
 8641f46:	74 07                	je     8641f4f <_ZN10CTitleBook12putTitleOnlyEP5CUseriR24ENUM_TITLE_BOOK_CATEGORYRi+0xc7>
 8641f48:	b8 00 00 00 00       	mov    $0x0,%eax
 8641f4d:	eb 5b                	jmp    8641faa <_ZN10CTitleBook12putTitleOnlyEP5CUseriR24ENUM_TITLE_BOOK_CATEGORYRi+0x122>
 8641f4f:	8b 45 14             	mov    0x14(%ebp),%eax
 8641f52:	8b 10                	mov    (%eax),%edx
 8641f54:	8b 45 10             	mov    0x10(%ebp),%eax
 8641f57:	8b 00                	mov    (%eax),%eax
 8641f59:	8d 4d b3             	lea    -0x4d(%ebp),%ecx
 8641f5c:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8641f60:	89 54 24 08          	mov    %edx,0x8(%esp)
 8641f64:	89 44 24 04          	mov    %eax,0x4(%esp)
 8641f68:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8641f6b:	89 04 24             	mov    %eax,(%esp)
 8641f6e:	e8 69 fc ff ff       	call   8641bdc <_ZN10CTitleBook17_checkInsertTitleE24ENUM_TITLE_BOOK_CATEGORYiP10Inven_Item>
 8641f73:	83 f0 01             	xor    $0x1,%eax
 8641f76:	84 c0                	test   %al,%al
 8641f78:	74 07                	je     8641f81 <_ZN10CTitleBook12putTitleOnlyEP5CUseriR24ENUM_TITLE_BOOK_CATEGORYRi+0xf9>
 8641f7a:	b8 00 00 00 00       	mov    $0x0,%eax
 8641f7f:	eb 29                	jmp    8641faa <_ZN10CTitleBook12putTitleOnlyEP5CUseriR24ENUM_TITLE_BOOK_CATEGORYRi+0x122>
 8641f81:	8b 45 14             	mov    0x14(%ebp),%eax
 8641f84:	8b 10                	mov    (%eax),%edx
 8641f86:	8b 45 10             	mov    0x10(%ebp),%eax
 8641f89:	8b 00                	mov    (%eax),%eax
 8641f8b:	8d 4d b3             	lea    -0x4d(%ebp),%ecx
 8641f8e:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8641f92:	89 54 24 08          	mov    %edx,0x8(%esp)
 8641f96:	89 44 24 04          	mov    %eax,0x4(%esp)
 8641f9a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8641f9d:	89 04 24             	mov    %eax,(%esp)
 8641fa0:	e8 71 fd ff ff       	call   8641d16 <_ZN10CTitleBook12_insertTitleE24ENUM_TITLE_BOOK_CATEGORYiP10Inven_Item>
 8641fa5:	b8 01 00 00 00       	mov    $0x1,%eax
 8641faa:	c9                   	leave
 8641fab:	c3                   	ret

```

```c
// CTitleBook::putTitleOnly @ 0x8641e88

/* CTitleBook::putTitleOnly(CUser*, int, ENUM_TITLE_BOOK_CATEGORY&, int&) */

undefined4
CTitleBook::putTitleOnly(CUser *param_1,int param_2,ENUM_TITLE_BOOK_CATEGORY *param_3,int *param_4)

{
  char cVar1;
  undefined4 uVar2;
  CDataManager *this;
  Inven_Item local_51 [2];
  int local_4f;
  CTitleBook *local_14;
  int *local_10;
  
  local_14 = (CTitleBook *)CUser::GetCharacExpandData(param_1,0xe);
  if (local_14 == (CTitleBook *)0x0) {
    uVar2 = 0;
  }
  else if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    Inven_Item::Inven_Item(local_51);
    local_4f = param_2;
    this = (CDataManager *)G_CDataManager();
    local_10 = (int *)CDataManager::find_item(this,param_2);
    if (local_10 == (int *)0x0) {
      uVar2 = 0;
    }
    else {
      (**(code **)(*local_10 + 8))(local_10,local_51);
      Inven_Item::set_add_info(local_51,1);
      cVar1 = _getFitSlot(local_4f,param_3,param_4);
      if (cVar1 == '\x01') {
        cVar1 = _checkInsertTitle(local_14,*(undefined4 *)param_3,*param_4,local_51);
        if (cVar1 == '\x01') {
          _insertTitle(local_14,*(undefined4 *)param_3,*param_4,local_51);
          uVar2 = 1;
        }
        else {
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}

```

---

## sendList

```asm
// === 08641704 CTitleBook::sendList  [0x08641704-0x864174f] ===
 8641704:	55                   	push   %ebp
 8641705:	89 e5                	mov    %esp,%ebp
 8641707:	83 ec 38             	sub    $0x38,%esp
 864170a:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8641711:	eb 30                	jmp    8641743 <_ZN10CTitleBook8sendListEv+0x3f>
 8641713:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8641716:	8b 45 08             	mov    0x8(%ebp),%eax
 8641719:	8b 40 08             	mov    0x8(%eax),%eax
 864171c:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 8641723:	00 
 8641724:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8641728:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 864172f:	00 
 8641730:	89 44 24 04          	mov    %eax,0x4(%esp)
 8641734:	8b 45 08             	mov    0x8(%ebp),%eax
 8641737:	89 04 24             	mov    %eax,(%esp)
 864173a:	e8 6b 00 00 00       	call   86417aa <_ZN10CTitleBook17_sendCategoryDataEP5CUsert24ENUM_TITLE_BOOK_CATEGORY25ENUM_TITLE_BOOK_INFO_TYPE>
 864173f:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8641743:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 8641747:	0f 9e c0             	setle  %al
 864174a:	84 c0                	test   %al,%al
 864174c:	75 c5                	jne    8641713 <_ZN10CTitleBook8sendListEv+0xf>
 864174e:	c9                   	leave
 864174f:	c3                   	ret

```

```c
// CTitleBook::sendList @ 0x8641704

/* CTitleBook::sendList() */

void __thiscall CTitleBook::sendList(CTitleBook *this)

{
  int local_10;
  
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    _sendCategoryData(this,*(undefined4 *)(this + 8),0,local_10,0);
  }
  return;
}

```

---

## sendListOtherUser

```asm
// === 08641750 CTitleBook::sendListOtherUser  [0x08641750-0x86417a9] ===
 8641750:	55                   	push   %ebp
 8641751:	89 e5                	mov    %esp,%ebp
 8641753:	53                   	push   %ebx
 8641754:	83 ec 34             	sub    $0x34,%esp
 8641757:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 864175e:	eb 39                	jmp    8641799 <_ZN10CTitleBook17sendListOtherUserEP5CUser25ENUM_TITLE_BOOK_INFO_TYPE+0x49>
 8641760:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8641763:	8b 45 08             	mov    0x8(%ebp),%eax
 8641766:	8b 40 08             	mov    0x8(%eax),%eax
 8641769:	89 04 24             	mov    %eax,(%esp)
 864176c:	e8 0b 8c a9 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 8641771:	0f b7 c0             	movzwl %ax,%eax
 8641774:	8b 55 10             	mov    0x10(%ebp),%edx
 8641777:	89 54 24 10          	mov    %edx,0x10(%esp)
 864177b:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 864177f:	89 44 24 08          	mov    %eax,0x8(%esp)
 8641783:	8b 45 0c             	mov    0xc(%ebp),%eax
 8641786:	89 44 24 04          	mov    %eax,0x4(%esp)
 864178a:	8b 45 08             	mov    0x8(%ebp),%eax
 864178d:	89 04 24             	mov    %eax,(%esp)
 8641790:	e8 15 00 00 00       	call   86417aa <_ZN10CTitleBook17_sendCategoryDataEP5CUsert24ENUM_TITLE_BOOK_CATEGORY25ENUM_TITLE_BOOK_INFO_TYPE>
 8641795:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8641799:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 864179d:	0f 9e c0             	setle  %al
 86417a0:	84 c0                	test   %al,%al
 86417a2:	75 bc                	jne    8641760 <_ZN10CTitleBook17sendListOtherUserEP5CUser25ENUM_TITLE_BOOK_INFO_TYPE+0x10>
 86417a4:	83 c4 34             	add    $0x34,%esp
 86417a7:	5b                   	pop    %ebx
 86417a8:	5d                   	pop    %ebp
 86417a9:	c3                   	ret

```

```c
// CTitleBook::sendListOtherUser @ 0x8641750

/* CTitleBook::sendListOtherUser(CUser*, ENUM_TITLE_BOOK_INFO_TYPE) */

void __thiscall
CTitleBook::sendListOtherUser(CTitleBook *this,undefined4 param_1,undefined4 param_3)

{
  undefined2 uVar1;
  int local_10;
  
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    uVar1 = CUser::get_unique_id(*(CUser **)(this + 8));
    _sendCategoryData(this,param_1,uVar1,local_10,param_3);
  }
  return;
}

```

