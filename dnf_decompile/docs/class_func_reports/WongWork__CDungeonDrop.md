# WongWork__CDungeonDrop

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## generateSpecificItem

```asm
// === 08539c3e WongWork::CDungeonDrop::generateSpecificItem  [0x08539c3e-0x8539d33] ===
 8539c3e:	55                   	push   %ebp
 8539c3f:	89 e5                	mov    %esp,%ebp
 8539c41:	83 ec 68             	sub    $0x68,%esp
 8539c44:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8539c4b:	8b 45 08             	mov    0x8(%ebp),%eax
 8539c4e:	83 c0 08             	add    $0x8,%eax
 8539c51:	c7 44 24 08 10 27 00 	movl   $0x2710,0x8(%esp)
 8539c58:	00 
 8539c59:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8539c60:	00 
 8539c61:	89 04 24             	mov    %eax,(%esp)
 8539c64:	e8 3b 98 ff ff       	call   85334a4 <_ZN8WongWork21CGenerateRandomNumber14generateNumberEii>
 8539c69:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8539c6c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8539c6f:	8b 50 34             	mov    0x34(%eax),%edx
 8539c72:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8539c75:	89 54 24 04          	mov    %edx,0x4(%esp)
 8539c79:	89 04 24             	mov    %eax,(%esp)
 8539c7c:	e8 9f 75 bd ff       	call   8111220 <_ZNKSt6vectorISt4pairIiiESaIS1_EE5beginEv>
 8539c81:	83 ec 04             	sub    $0x4,%esp
 8539c84:	eb 7a                	jmp    8539d00 <_ZN8WongWork12CDungeonDrop20generateSpecificItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE+0xc2>
 8539c86:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8539c89:	89 04 24             	mov    %eax,(%esp)
 8539c8c:	e8 81 9c c5 ff       	call   8193912 <_ZNK9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEptEv>
 8539c91:	8b 40 04             	mov    0x4(%eax),%eax
 8539c94:	01 45 f0             	add    %eax,-0x10(%ebp)
 8539c97:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8539c9a:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 8539c9d:	7d 56                	jge    8539cf5 <_ZN8WongWork12CDungeonDrop20generateSpecificItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE+0xb7>
 8539c9f:	8d 45 ab             	lea    -0x55(%ebp),%eax
 8539ca2:	89 04 24             	mov    %eax,(%esp)
 8539ca5:	e8 aa 1b b9 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 8539caa:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8539cad:	89 04 24             	mov    %eax,(%esp)
 8539cb0:	e8 5d 9c c5 ff       	call   8193912 <_ZNK9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEptEv>
 8539cb5:	8b 00                	mov    (%eax),%eax
 8539cb7:	89 45 ad             	mov    %eax,-0x53(%ebp)
 8539cba:	e8 dc 24 b9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8539cbf:	8b 40 0c             	mov    0xc(%eax),%eax
 8539cc2:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8539cc9:	00 
 8539cca:	8d 55 ab             	lea    -0x55(%ebp),%edx
 8539ccd:	89 54 24 08          	mov    %edx,0x8(%esp)
 8539cd1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8539cd8:	00 
 8539cd9:	89 04 24             	mov    %eax,(%esp)
 8539cdc:	e8 d7 82 fd ff       	call   8511fb8 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi>
 8539ce1:	8b 45 10             	mov    0x10(%ebp),%eax
 8539ce4:	8d 55 ab             	lea    -0x55(%ebp),%edx
 8539ce7:	89 54 24 04          	mov    %edx,0x4(%esp)
 8539ceb:	89 04 24             	mov    %eax,(%esp)
 8539cee:	e8 6f d5 cf ff       	call   8237262 <_ZNSt6vectorI10Inven_ItemSaIS0_EE9push_backERKS0_>
 8539cf3:	eb 3d                	jmp    8539d32 <_ZN8WongWork12CDungeonDrop20generateSpecificItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE+0xf4>
 8539cf5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8539cf8:	89 04 24             	mov    %eax,(%esp)
 8539cfb:	e8 d0 3f d0 ff       	call   823dcd0 <_ZN9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEppEv>
 8539d00:	8b 45 0c             	mov    0xc(%ebp),%eax
 8539d03:	8b 50 34             	mov    0x34(%eax),%edx
 8539d06:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8539d09:	89 54 24 04          	mov    %edx,0x4(%esp)
 8539d0d:	89 04 24             	mov    %eax,(%esp)
 8539d10:	e8 37 75 bd ff       	call   811124c <_ZNKSt6vectorISt4pairIiiESaIS1_EE3endEv>
 8539d15:	83 ec 04             	sub    $0x4,%esp
 8539d18:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8539d1b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8539d1f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8539d22:	89 04 24             	mov    %eax,(%esp)
 8539d25:	e8 bb 9b c5 ff       	call   81938e5 <_ZN9__gnu_cxxneIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
 8539d2a:	84 c0                	test   %al,%al
 8539d2c:	0f 85 54 ff ff ff    	jne    8539c86 <_ZN8WongWork12CDungeonDrop20generateSpecificItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE+0x48>
 8539d32:	c9                   	leave
 8539d33:	c3                   	ret

```

```c
// WongWork::CDungeonDrop::generateSpecificItem @ 0x8539c3e

/* WongWork::CDungeonDrop::generateSpecificItem(WongWork::stGenerateRefData_t const&,
   WongWork::stGenerateResult_t&) */

void __thiscall
WongWork::CDungeonDrop::generateSpecificItem
          (CDungeonDrop *this,stGenerateRefData_t *param_1,stGenerateResult_t *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  Inven_Item local_59 [2];
  undefined4 local_57;
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_1c [4];
  __normal_iterator local_18 [4];
  int local_14;
  int local_10;
  
  local_14 = 0;
  local_10 = CGenerateRandomNumber::generateNumber((CGenerateRandomNumber *)(this + 8),1,10000);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
  while( true ) {
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
    bVar1 = __gnu_cxx::operator!=(local_1c,local_18);
    if (!bVar1) {
      return;
    }
    iVar2 = __gnu_cxx::
            __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
            ::operator->(local_1c);
    local_14 = local_14 + *(int *)(iVar2 + 4);
    if (local_10 < local_14) break;
    __gnu_cxx::
    __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
    ::operator++(local_1c);
  }
  Inven_Item::Inven_Item(local_59);
  puVar3 = (undefined4 *)
           __gnu_cxx::
           __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
           ::operator->(local_1c);
  local_57 = *puVar3;
  iVar2 = G_CDataManager();
  CItemList::create_item(*(CItemList **)(iVar2 + 0xc),1,local_59,1);
  std::vector<Inven_Item,std::allocator<Inven_Item>>::push_back
            ((vector<Inven_Item,std::allocator<Inven_Item>> *)param_2,local_59);
  return;
}

```

