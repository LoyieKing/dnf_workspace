# NeedMaterialDataManager

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## NeedMaterialDataManager

```asm
// === 081b5a3c NeedMaterialDataManager::NeedMaterialDataManager  [0x081b5a3c-0x81b5a9d] ===
 81b5a3c:	55                   	push   %ebp
 81b5a3d:	89 e5                	mov    %esp,%ebp
 81b5a3f:	56                   	push   %esi
 81b5a40:	53                   	push   %ebx
 81b5a41:	83 ec 20             	sub    $0x20,%esp
 81b5a44:	8b 45 08             	mov    0x8(%ebp),%eax
 81b5a47:	89 04 24             	mov    %eax,(%esp)
 81b5a4a:	e8 57 02 00 00       	call   81b5ca6 <_ZNSt3mapIiSt4pairIiiESt4lessIiESaIS0_IKiS1_EEEC1Ev>
 81b5a4f:	8b 45 08             	mov    0x8(%ebp),%eax
 81b5a52:	8d 50 18             	lea    0x18(%eax),%edx
 81b5a55:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 81b5a5c:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
 81b5a63:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81b5a66:	89 44 24 08          	mov    %eax,0x8(%esp)
 81b5a6a:	8d 45 f4             	lea    -0xc(%ebp),%eax
 81b5a6d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81b5a71:	89 14 24             	mov    %edx,(%esp)
 81b5a74:	e8 5b cd fa ff       	call   81627d4 <_ZNSt4pairIiiEC1IiiEEOT_OT0_>
 81b5a79:	eb 1b                	jmp    81b5a96 <_ZN23NeedMaterialDataManagerC1Ev+0x5a>
 81b5a7b:	89 d3                	mov    %edx,%ebx
 81b5a7d:	89 c6                	mov    %eax,%esi
 81b5a7f:	8b 45 08             	mov    0x8(%ebp),%eax
 81b5a82:	89 04 24             	mov    %eax,(%esp)
 81b5a85:	e8 f0 01 00 00       	call   81b5c7a <_ZNSt3mapIiSt4pairIiiESt4lessIiESaIS0_IKiS1_EEED1Ev>
 81b5a8a:	89 f0                	mov    %esi,%eax
 81b5a8c:	89 da                	mov    %ebx,%edx
 81b5a8e:	89 04 24             	mov    %eax,(%esp)
 81b5a91:	e8 ba dc 92 00       	call   8ae3750 <_Unwind_Resume>
 81b5a96:	83 c4 20             	add    $0x20,%esp
 81b5a99:	5b                   	pop    %ebx
 81b5a9a:	5e                   	pop    %esi
 81b5a9b:	5d                   	pop    %ebp
 81b5a9c:	c3                   	ret
 81b5a9d:	90                   	nop

```

```c
// NeedMaterialDataManager::NeedMaterialDataManager @ 0x81b5a3c

/* NeedMaterialDataManager::NeedMaterialDataManager() */

void __thiscall NeedMaterialDataManager::NeedMaterialDataManager(NeedMaterialDataManager *this)

{
  int local_14 [2];
  
  std::
  map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
  ::map((map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
         *)this);
  local_14[0] = 0;
  local_14[1] = 0xffffffff;
                    /* try { // try from 081b5a74 to 081b5a78 has its CatchHandler @ 081b5a7b */
  std::pair<int,int>::pair<int,int>((pair<int,int> *)(this + 0x18),local_14 + 1,local_14);
  return;
}

```

---

## getInstance

```asm
// === 081b5ab2 NeedMaterialDataManager::getInstance  [0x081b5ab2-0x81b5b45] ===
 81b5ab2:	55                   	push   %ebp
 81b5ab3:	89 e5                	mov    %esp,%ebp
 81b5ab5:	57                   	push   %edi
 81b5ab6:	56                   	push   %esi
 81b5ab7:	53                   	push   %ebx
 81b5ab8:	83 ec 1c             	sub    $0x1c,%esp
 81b5abb:	b8 20 a1 40 09       	mov    $0x940a120,%eax
 81b5ac0:	0f b6 00             	movzbl (%eax),%eax
 81b5ac3:	84 c0                	test   %al,%al
 81b5ac5:	75 71                	jne    81b5b38 <_ZN23NeedMaterialDataManager11getInstanceEv+0x86>
 81b5ac7:	c7 04 24 20 a1 40 09 	movl   $0x940a120,(%esp)
 81b5ace:	e8 5d f8 56 00       	call   8725330 <__cxa_guard_acquire>
 81b5ad3:	85 c0                	test   %eax,%eax
 81b5ad5:	0f 95 c0             	setne  %al
 81b5ad8:	84 c0                	test   %al,%al
 81b5ada:	74 5c                	je     81b5b38 <_ZN23NeedMaterialDataManager11getInstanceEv+0x86>
 81b5adc:	bb 00 00 00 00       	mov    $0x0,%ebx
 81b5ae1:	c7 04 24 40 a1 40 09 	movl   $0x940a140,(%esp)
 81b5ae8:	e8 4f ff ff ff       	call   81b5a3c <_ZN23NeedMaterialDataManagerC1Ev>
 81b5aed:	c7 04 24 20 a1 40 09 	movl   $0x940a120,(%esp)
 81b5af4:	e8 57 f7 56 00       	call   8725250 <__cxa_guard_release>
 81b5af9:	b8 9e 5a 1b 08       	mov    $0x81b5a9e,%eax
 81b5afe:	c7 44 24 08 48 58 ae 	movl   $0x8ae5848,0x8(%esp)
 81b5b05:	08 
 81b5b06:	c7 44 24 04 40 a1 40 	movl   $0x940a140,0x4(%esp)
 81b5b0d:	09 
 81b5b0e:	89 04 24             	mov    %eax,(%esp)
 81b5b11:	e8 ba 82 ec ff       	call   807ddd0 <__cxa_atexit@plt>
 81b5b16:	eb 20                	jmp    81b5b38 <_ZN23NeedMaterialDataManager11getInstanceEv+0x86>
 81b5b18:	89 d6                	mov    %edx,%esi
 81b5b1a:	89 c7                	mov    %eax,%edi
 81b5b1c:	84 db                	test   %bl,%bl
 81b5b1e:	75 0c                	jne    81b5b2c <_ZN23NeedMaterialDataManager11getInstanceEv+0x7a>
 81b5b20:	c7 04 24 20 a1 40 09 	movl   $0x940a120,(%esp)
 81b5b27:	e8 94 f7 56 00       	call   87252c0 <__cxa_guard_abort>
 81b5b2c:	89 f8                	mov    %edi,%eax
 81b5b2e:	89 f2                	mov    %esi,%edx
 81b5b30:	89 04 24             	mov    %eax,(%esp)
 81b5b33:	e8 18 dc 92 00       	call   8ae3750 <_Unwind_Resume>
 81b5b38:	b8 40 a1 40 09       	mov    $0x940a140,%eax
 81b5b3d:	83 c4 1c             	add    $0x1c,%esp
 81b5b40:	5b                   	pop    %ebx
 81b5b41:	5e                   	pop    %esi
 81b5b42:	5f                   	pop    %edi
 81b5b43:	5d                   	pop    %ebp
 81b5b44:	c3                   	ret
 81b5b45:	90                   	nop

```

```c
// NeedMaterialDataManager::getInstance @ 0x81b5ab2

/* NeedMaterialDataManager::getInstance() */

undefined1 * NeedMaterialDataManager::getInstance(void)

{
  int iVar1;
  
  if (getInstance()::inst == '\0') {
    iVar1 = __cxa_guard_acquire(&getInstance()::inst);
    if (iVar1 != 0) {
                    /* try { // try from 081b5ae8 to 081b5aec has its CatchHandler @ 081b5b18 */
      NeedMaterialDataManager((NeedMaterialDataManager *)getInstance()::inst);
      __cxa_guard_release(&getInstance()::inst);
      __cxa_atexit(~NeedMaterialDataManager,getInstance()::inst,&__dso_handle);
    }
  }
  return getInstance()::inst;
}

```

---

## getNeedMaterial

```asm
// === 081b5b70 NeedMaterialDataManager::getNeedMaterial  [0x081b5b70-0x81b5bf1] ===
 81b5b70:	55                   	push   %ebp
 81b5b71:	89 e5                	mov    %esp,%ebp
 81b5b73:	83 ec 28             	sub    $0x28,%esp
 81b5b76:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81b5b7a:	75 08                	jne    81b5b84 <_ZNK23NeedMaterialDataManager15getNeedMaterialEPK5CItem+0x14>
 81b5b7c:	8b 45 08             	mov    0x8(%ebp),%eax
 81b5b7f:	83 c0 18             	add    $0x18,%eax
 81b5b82:	eb 6b                	jmp    81b5bef <_ZNK23NeedMaterialDataManager15getNeedMaterialEPK5CItem+0x7f>
 81b5b84:	8b 45 0c             	mov    0xc(%ebp),%eax
 81b5b87:	89 04 24             	mov    %eax,(%esp)
 81b5b8a:	e8 b9 b0 f5 ff       	call   8110c48 <_ZNK5CItem9get_indexEv>
 81b5b8f:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81b5b92:	8b 55 08             	mov    0x8(%ebp),%edx
 81b5b95:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81b5b98:	8d 4d f0             	lea    -0x10(%ebp),%ecx
 81b5b9b:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 81b5b9f:	89 54 24 04          	mov    %edx,0x4(%esp)
 81b5ba3:	89 04 24             	mov    %eax,(%esp)
 81b5ba6:	e8 93 bd f5 ff       	call   811193e <_ZNKSt3mapIiSt4pairIiiESt4lessIiESaIS0_IKiS1_EEE4findERS4_>
 81b5bab:	83 ec 04             	sub    $0x4,%esp
 81b5bae:	8b 55 08             	mov    0x8(%ebp),%edx
 81b5bb1:	8d 45 f4             	lea    -0xc(%ebp),%eax
 81b5bb4:	89 54 24 04          	mov    %edx,0x4(%esp)
 81b5bb8:	89 04 24             	mov    %eax,(%esp)
 81b5bbb:	e8 aa bd f5 ff       	call   811196a <_ZNKSt3mapIiSt4pairIiiESt4lessIiESaIS0_IKiS1_EEE3endEv>
 81b5bc0:	83 ec 04             	sub    $0x4,%esp
 81b5bc3:	8d 45 f4             	lea    -0xc(%ebp),%eax
 81b5bc6:	89 44 24 04          	mov    %eax,0x4(%esp)
 81b5bca:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81b5bcd:	89 04 24             	mov    %eax,(%esp)
 81b5bd0:	e8 bb bd f5 ff       	call   8111990 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiS0_IiiEEEneERKS4_>
 81b5bd5:	84 c0                	test   %al,%al
 81b5bd7:	74 10                	je     81b5be9 <_ZNK23NeedMaterialDataManager15getNeedMaterialEPK5CItem+0x79>
 81b5bd9:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81b5bdc:	89 04 24             	mov    %eax,(%esp)
 81b5bdf:	e8 c0 bd f5 ff       	call   81119a4 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiS0_IiiEEEptEv>
 81b5be4:	83 c0 04             	add    $0x4,%eax
 81b5be7:	eb 06                	jmp    81b5bef <_ZNK23NeedMaterialDataManager15getNeedMaterialEPK5CItem+0x7f>
 81b5be9:	8b 45 08             	mov    0x8(%ebp),%eax
 81b5bec:	83 c0 18             	add    $0x18,%eax
 81b5bef:	c9                   	leave
 81b5bf0:	c3                   	ret
 81b5bf1:	90                   	nop

```

```c
// NeedMaterialDataManager::getNeedMaterial @ 0x81b5b70

/* NeedMaterialDataManager::getNeedMaterial(CItem const*) const */

NeedMaterialDataManager * __thiscall
NeedMaterialDataManager::getNeedMaterial(NeedMaterialDataManager *this,CItem *param_1)

{
  char cVar1;
  NeedMaterialDataManager *pNVar2;
  int iVar3;
  _Rb_tree_const_iterator<std::pair<int_const,std::pair<int,int>>> local_18 [4];
  undefined4 local_14;
  map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
  local_10 [12];
  
  if (param_1 == (CItem *)0x0) {
    pNVar2 = this + 0x18;
  }
  else {
    local_14 = CItem::get_index(param_1);
    std::
    map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
    ::find((int *)local_18);
    std::
    map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
    ::end(local_10);
    cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,std::pair<int,int>>>::operator!=
                      (local_18,(_Rb_tree_const_iterator *)local_10);
    if (cVar1 == '\0') {
      pNVar2 = this + 0x18;
    }
    else {
      iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,std::pair<int,int>>>::operator->
                        (local_18);
      pNVar2 = (NeedMaterialDataManager *)(iVar3 + 4);
    }
  }
  return pNVar2;
}

```

---

## getNeedMaterial_081b5bf2

```asm
// === 081b5bf2 NeedMaterialDataManager::getNeedMaterial  [0x081b5bf2-0x81b5c1c] ===
 81b5bf2:	55                   	push   %ebp
 81b5bf3:	89 e5                	mov    %esp,%ebp
 81b5bf5:	83 ec 18             	sub    $0x18,%esp
 81b5bf8:	e8 9e 65 f1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 81b5bfd:	8b 55 0c             	mov    0xc(%ebp),%edx
 81b5c00:	89 54 24 04          	mov    %edx,0x4(%esp)
 81b5c04:	89 04 24             	mov    %eax,(%esp)
 81b5c07:	e8 26 9e 1a 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 81b5c0c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81b5c10:	8b 45 08             	mov    0x8(%ebp),%eax
 81b5c13:	89 04 24             	mov    %eax,(%esp)
 81b5c16:	e8 55 ff ff ff       	call   81b5b70 <_ZNK23NeedMaterialDataManager15getNeedMaterialEPK5CItem>
 81b5c1b:	c9                   	leave
 81b5c1c:	c3                   	ret

```

```c
// NeedMaterialDataManager::getNeedMaterial @ 0x81b5bf2

/* NeedMaterialDataManager::getNeedMaterial(int) const */

void __thiscall NeedMaterialDataManager::getNeedMaterial(NeedMaterialDataManager *this,int param_1)

{
  CDataManager *this_00;
  CItem *pCVar1;
  
  this_00 = (CDataManager *)G_CDataManager();
  pCVar1 = (CItem *)CDataManager::find_item(this_00,param_1);
  getNeedMaterial(this,pCVar1);
  return;
}

```

---

## setNeedMaterialInfo

```asm
// === 081b5b46 NeedMaterialDataManager::setNeedMaterialInfo  [0x081b5b46-0x81b5b6f] ===
 81b5b46:	55                   	push   %ebp
 81b5b47:	89 e5                	mov    %esp,%ebp
 81b5b49:	83 ec 18             	sub    $0x18,%esp
 81b5b4c:	8b 45 08             	mov    0x8(%ebp),%eax
 81b5b4f:	8d 55 0c             	lea    0xc(%ebp),%edx
 81b5b52:	89 54 24 04          	mov    %edx,0x4(%esp)
 81b5b56:	89 04 24             	mov    %eax,(%esp)
 81b5b59:	e8 d0 01 00 00       	call   81b5d2e <_ZNSt3mapIiSt4pairIiiESt4lessIiESaIS0_IKiS1_EEEixERS4_>
 81b5b5e:	89 c1                	mov    %eax,%ecx
 81b5b60:	8b 45 10             	mov    0x10(%ebp),%eax
 81b5b63:	8b 50 04             	mov    0x4(%eax),%edx
 81b5b66:	8b 00                	mov    (%eax),%eax
 81b5b68:	89 01                	mov    %eax,(%ecx)
 81b5b6a:	89 51 04             	mov    %edx,0x4(%ecx)
 81b5b6d:	c9                   	leave
 81b5b6e:	c3                   	ret
 81b5b6f:	90                   	nop

```

```c
// NeedMaterialDataManager::setNeedMaterialInfo @ 0x81b5b46

/* NeedMaterialDataManager::setNeedMaterialInfo(int, std::pair<int, int> const&) */

void __thiscall
NeedMaterialDataManager::setNeedMaterialInfo
          (NeedMaterialDataManager *this,int param_1,pair *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)
           std::
           map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
           ::operator[]((map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
                         *)this,&param_1);
  uVar1 = *(undefined4 *)(param_2 + 4);
  *puVar2 = *(undefined4 *)param_2;
  puVar2[1] = uVar1;
  return;
}

```

---

## ~NeedMaterialDataManager

```asm
// === 081b5a9e NeedMaterialDataManager::~NeedMaterialDataManager  [0x081b5a9e-0x81b5ab1] ===
 81b5a9e:	55                   	push   %ebp
 81b5a9f:	89 e5                	mov    %esp,%ebp
 81b5aa1:	83 ec 18             	sub    $0x18,%esp
 81b5aa4:	8b 45 08             	mov    0x8(%ebp),%eax
 81b5aa7:	89 04 24             	mov    %eax,(%esp)
 81b5aaa:	e8 cb 01 00 00       	call   81b5c7a <_ZNSt3mapIiSt4pairIiiESt4lessIiESaIS0_IKiS1_EEED1Ev>
 81b5aaf:	c9                   	leave
 81b5ab0:	c3                   	ret
 81b5ab1:	90                   	nop

```

```c
// NeedMaterialDataManager::~NeedMaterialDataManager @ 0x81b5a9e

/* NeedMaterialDataManager::~NeedMaterialDataManager() */

void __thiscall NeedMaterialDataManager::~NeedMaterialDataManager(NeedMaterialDataManager *this)

{
  std::
  map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
  ::~map((map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
          *)this);
  return;
}

```

