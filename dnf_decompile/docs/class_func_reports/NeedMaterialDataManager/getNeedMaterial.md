# getNeedMaterial

`_ZNK23NeedMaterialDataManager15getNeedMaterialEPK5CItem`

`NeedMaterialDataManager::getNeedMaterial(CItem const*) const`

| 类 | 地址 |
|---|---|
| `NeedMaterialDataManager` | `0x081b5b70` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b5b70  _ZNK23NeedMaterialDataManager15getNeedMaterialEPK5CItem
#           NeedMaterialDataManager::getNeedMaterial(CItem const*) const
# range [0x081b5b70, 0x081b5bf1]
081b5b70 +0x00:  push   %ebp
081b5b71 +0x01:  mov    %esp,%ebp
081b5b73 +0x03:  sub    $0x28,%esp
081b5b76 +0x06:  cmpl   $0x0,0xc(%ebp)
081b5b7a +0x0a:  jne    081b5b84 <+0x14>
081b5b7c +0x0c:  mov    0x8(%ebp),%eax
081b5b7f +0x0f:  add    $0x18,%eax
081b5b82 +0x12:  jmp    081b5bef <+0x7f>
081b5b84 +0x14:  mov    0xc(%ebp),%eax
081b5b87 +0x17:  mov    %eax,(%esp)
081b5b8a +0x1a:  call   08110c48 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x15a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x15a
081b5b8f +0x1f:  mov    %eax,-0x10(%ebp)
081b5b92 +0x22:  mov    0x8(%ebp),%edx
081b5b95 +0x25:  lea    -0x14(%ebp),%eax
081b5b98 +0x28:  lea    -0x10(%ebp),%ecx
081b5b9b +0x2b:  mov    %ecx,0x8(%esp)
081b5b9f +0x2f:  mov    %edx,0x4(%esp)
081b5ba3 +0x33:  mov    %eax,(%esp)
081b5ba6 +0x36:  call   0811193e <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xe50>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xe50
081b5bab +0x3b:  sub    $0x4,%esp
081b5bae +0x3e:  mov    0x8(%ebp),%edx
081b5bb1 +0x41:  lea    -0xc(%ebp),%eax
081b5bb4 +0x44:  mov    %edx,0x4(%esp)
081b5bb8 +0x48:  mov    %eax,(%esp)
081b5bbb +0x4b:  call   0811196a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xe7c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xe7c
081b5bc0 +0x50:  sub    $0x4,%esp
081b5bc3 +0x53:  lea    -0xc(%ebp),%eax
081b5bc6 +0x56:  mov    %eax,0x4(%esp)
081b5bca +0x5a:  lea    -0x14(%ebp),%eax
081b5bcd +0x5d:  mov    %eax,(%esp)
081b5bd0 +0x60:  call   08111990 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xea2>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xea2
081b5bd5 +0x65:  test   %al,%al
081b5bd7 +0x67:  je     081b5be9 <+0x79>
081b5bd9 +0x69:  lea    -0x14(%ebp),%eax
081b5bdc +0x6c:  mov    %eax,(%esp)
081b5bdf +0x6f:  call   081119a4 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xeb6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xeb6
081b5be4 +0x74:  add    $0x4,%eax
081b5be7 +0x77:  jmp    081b5bef <+0x7f>
081b5be9 +0x79:  mov    0x8(%ebp),%eax
081b5bec +0x7c:  add    $0x18,%eax
081b5bef +0x7f:  leave
081b5bf0 +0x80:  ret
081b5bf1 +0x81:  nop
```

## 反编译 C

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
