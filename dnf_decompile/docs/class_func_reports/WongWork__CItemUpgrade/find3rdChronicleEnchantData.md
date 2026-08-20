# find3rdChronicleEnchantData

`_ZN8WongWork12CItemUpgrade27find3rdChronicleEnchantDataE21STEnchantSystemMapKeyi`

`WongWork::CItemUpgrade::find3rdChronicleEnchantData(STEnchantSystemMapKey, int)`

| 类 | 地址 |
|---|---|
| `WongWork::CItemUpgrade` | `0x0854a916` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0854a916  _ZN8WongWork12CItemUpgrade27find3rdChronicleEnchantDataE21STEnchantSystemMapKeyi
#           WongWork::CItemUpgrade::find3rdChronicleEnchantData(STEnchantSystemMapKey, int)
# range [0x0854a916, 0x0854a9a9]
0854a916 +0x00:  push   %ebp
0854a917 +0x01:  mov    %esp,%ebp
0854a919 +0x03:  sub    $0x28,%esp
0854a91c +0x06:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0854a921 +0x0b:  mov    0x10(%ebp),%edx
0854a924 +0x0e:  mov    %edx,0x4(%esp)
0854a928 +0x12:  mov    %eax,(%esp)
0854a92b +0x15:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0854a930 +0x1a:  mov    %eax,-0xc(%ebp)
0854a933 +0x1d:  cmpl   $0x0,-0xc(%ebp)
0854a937 +0x21:  jne    0854a940 <+0x2a>
0854a939 +0x23:  mov    $0x0,%eax
0854a93e +0x28:  jmp    0854a9a8 <+0x92>
0854a940 +0x2a:  mov    -0xc(%ebp),%eax
0854a943 +0x2d:  lea    0x2f4(%eax),%ecx
0854a949 +0x33:  lea    -0x14(%ebp),%eax
0854a94c +0x36:  mov    0xc(%ebp),%edx
0854a94f +0x39:  mov    %edx,0x8(%esp)
0854a953 +0x3d:  mov    %ecx,0x4(%esp)
0854a957 +0x41:  mov    %eax,(%esp)
0854a95a +0x44:  call   0854b990 <_GLOBAL__I__ZN8WongWork12CItemUpgradeC2Ev+0x818>  ; global constructors keyed to WongWork::CItemUpgrade::CItemUpgrade()+0x818
0854a95f +0x49:  sub    $0x4,%esp
0854a962 +0x4c:  mov    -0xc(%ebp),%eax
0854a965 +0x4f:  lea    0x2f4(%eax),%edx
0854a96b +0x55:  lea    -0x10(%ebp),%eax
0854a96e +0x58:  mov    %edx,0x4(%esp)
0854a972 +0x5c:  mov    %eax,(%esp)
0854a975 +0x5f:  call   0854b9bc <_GLOBAL__I__ZN8WongWork12CItemUpgradeC2Ev+0x844>  ; global constructors keyed to WongWork::CItemUpgrade::CItemUpgrade()+0x844
0854a97a +0x64:  sub    $0x4,%esp
0854a97d +0x67:  lea    -0x10(%ebp),%eax
0854a980 +0x6a:  mov    %eax,0x4(%esp)
0854a984 +0x6e:  lea    -0x14(%ebp),%eax
0854a987 +0x71:  mov    %eax,(%esp)
0854a98a +0x74:  call   0854b9e2 <_GLOBAL__I__ZN8WongWork12CItemUpgradeC2Ev+0x86a>  ; global constructors keyed to WongWork::CItemUpgrade::CItemUpgrade()+0x86a
0854a98f +0x79:  test   %al,%al
0854a991 +0x7b:  je     0854a9a3 <+0x8d>
0854a993 +0x7d:  lea    -0x14(%ebp),%eax
0854a996 +0x80:  mov    %eax,(%esp)
0854a999 +0x83:  call   0854b9f6 <_GLOBAL__I__ZN8WongWork12CItemUpgradeC2Ev+0x87e>  ; global constructors keyed to WongWork::CItemUpgrade::CItemUpgrade()+0x87e
0854a99e +0x88:  add    $0x10,%eax
0854a9a1 +0x8b:  jmp    0854a9a8 <+0x92>
0854a9a3 +0x8d:  mov    $0x0,%eax
0854a9a8 +0x92:  leave
0854a9a9 +0x93:  ret
```

## 反编译 C

```c
// WongWork::CItemUpgrade::find3rdChronicleEnchantData @ 0x854a916

/* WongWork::CItemUpgrade::find3rdChronicleEnchantData(STEnchantSystemMapKey, int) */

int __thiscall
WongWork::CItemUpgrade::find3rdChronicleEnchantData(undefined4 this,undefined4 param_2,int param_3)

{
  char cVar1;
  CDataManager *this_00;
  int iVar2;
  STEnchantSystemMapKey local_18 [4];
  map<STEnchantSystemMapKey,STEnchantSystemMapData,std::less<STEnchantSystemMapKey>,std::allocator<std::pair<STEnchantSystemMapKey_const,STEnchantSystemMapData>>>
  local_14 [4];
  int local_10;
  
  this_00 = (CDataManager *)G_CDataManager();
  local_10 = CDataManager::find_item(this_00,param_3);
  if (local_10 == 0) {
    iVar2 = 0;
  }
  else {
    std::
    map<STEnchantSystemMapKey,STEnchantSystemMapData,std::less<STEnchantSystemMapKey>,std::allocator<std::pair<STEnchantSystemMapKey_const,STEnchantSystemMapData>>>
    ::find(local_18);
    std::
    map<STEnchantSystemMapKey,STEnchantSystemMapData,std::less<STEnchantSystemMapKey>,std::allocator<std::pair<STEnchantSystemMapKey_const,STEnchantSystemMapData>>>
    ::end(local_14);
    cVar1 = std::_Rb_tree_iterator<std::pair<STEnchantSystemMapKey_const,STEnchantSystemMapData>>::
            operator!=((_Rb_tree_iterator<std::pair<STEnchantSystemMapKey_const,STEnchantSystemMapData>>
                        *)local_18,(_Rb_tree_iterator *)local_14);
    if (cVar1 == '\0') {
      iVar2 = 0;
    }
    else {
      iVar2 = std::_Rb_tree_iterator<std::pair<STEnchantSystemMapKey_const,STEnchantSystemMapData>>
              ::operator->((_Rb_tree_iterator<std::pair<STEnchantSystemMapKey_const,STEnchantSystemMapData>>
                            *)local_18);
      iVar2 = iVar2 + 0x10;
    }
  }
  return iVar2;
}
```
