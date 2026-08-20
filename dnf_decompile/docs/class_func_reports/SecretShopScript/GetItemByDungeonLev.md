# GetItemByDungeonLev

`_ZN16SecretShopScript19GetItemByDungeonLevEP7CMTRandRSt6vectorIN10secretshop9SALE_INFOESaIS4_EEiib`

`SecretShopScript::GetItemByDungeonLev(CMTRand*, std::vector<secretshop::SALE_INFO, std::allocator<secretshop::SALE_INFO> >&, int, int, bool)`

| 类 | 地址 |
|---|---|
| `SecretShopScript` | `0x08a82b34` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a82b34  _ZN16SecretShopScript19GetItemByDungeonLevEP7CMTRandRSt6vectorIN10secretshop9SALE_INFOESaIS4_EEiib
#           SecretShopScript::GetItemByDungeonLev(CMTRand*, std::vector<secretshop::SALE_INFO, std::allocator<secretshop::SALE_INFO> >&, int, int, bool)
# range [0x08a82b34, 0x08a82c6f]
08a82b34 +0x000:  push   %ebp
08a82b35 +0x001:  mov    %esp,%ebp
08a82b37 +0x003:  sub    $0x48,%esp
08a82b3a +0x006:  mov    0x1c(%ebp),%eax
08a82b3d +0x009:  mov    %al,-0x2c(%ebp)
08a82b40 +0x00c:  mov    0x8(%ebp),%eax
08a82b43 +0x00f:  lea    0x48(%eax),%ecx
08a82b46 +0x012:  lea    -0x14(%ebp),%eax
08a82b49 +0x015:  lea    0x14(%ebp),%edx
08a82b4c +0x018:  mov    %edx,0x8(%esp)
08a82b50 +0x01c:  mov    %ecx,0x4(%esp)
08a82b54 +0x020:  mov    %eax,(%esp)
08a82b57 +0x023:  call   08a837e2 <_GLOBAL__I__Z22importSecretShopScriptP16SecretShopScriptPKc+0x554>  ; global constructors keyed to importSecretShopScript(SecretShopScript*, char const*)+0x554
08a82b5c +0x028:  sub    $0x4,%esp
08a82b5f +0x02b:  mov    0x8(%ebp),%eax
08a82b62 +0x02e:  lea    0x48(%eax),%edx
08a82b65 +0x031:  lea    -0x10(%ebp),%eax
08a82b68 +0x034:  mov    %edx,0x4(%esp)
08a82b6c +0x038:  mov    %eax,(%esp)
08a82b6f +0x03b:  call   08a8380e <_GLOBAL__I__Z22importSecretShopScriptP16SecretShopScriptPKc+0x580>  ; global constructors keyed to importSecretShopScript(SecretShopScript*, char const*)+0x580
08a82b74 +0x040:  sub    $0x4,%esp
08a82b77 +0x043:  lea    -0x10(%ebp),%eax
08a82b7a +0x046:  mov    %eax,0x4(%esp)
08a82b7e +0x04a:  lea    -0x14(%ebp),%eax
08a82b81 +0x04d:  mov    %eax,(%esp)
08a82b84 +0x050:  call   08a83834 <_GLOBAL__I__Z22importSecretShopScriptP16SecretShopScriptPKc+0x5a6>  ; global constructors keyed to importSecretShopScript(SecretShopScript*, char const*)+0x5a6
08a82b89 +0x055:  test   %al,%al
08a82b8b +0x057:  je     08a82b97 <+0x63>
08a82b8d +0x059:  mov    $0x0,%eax
08a82b92 +0x05e:  jmp    08a82c6d <+0x139>
08a82b97 +0x063:  mov    0x18(%ebp),%eax
08a82b9a +0x066:  mov    %eax,0x4(%esp)
08a82b9e +0x06a:  mov    0x8(%ebp),%eax
08a82ba1 +0x06d:  mov    %eax,(%esp)
08a82ba4 +0x070:  call   08a830e2 <_ZN16SecretShopScript11GetLevelIdxEi>  ; SecretShopScript::GetLevelIdx(int)
08a82ba9 +0x075:  mov    %eax,-0x18(%ebp)
08a82bac +0x078:  lea    -0x14(%ebp),%eax
08a82baf +0x07b:  mov    %eax,(%esp)
08a82bb2 +0x07e:  call   08a83848 <_GLOBAL__I__Z22importSecretShopScriptP16SecretShopScriptPKc+0x5ba>  ; global constructors keyed to importSecretShopScript(SecretShopScript*, char const*)+0x5ba
08a82bb7 +0x083:  lea    0x20(%eax),%ecx
08a82bba +0x086:  lea    -0x1c(%ebp),%eax
08a82bbd +0x089:  lea    -0x18(%ebp),%edx
08a82bc0 +0x08c:  mov    %edx,0x8(%esp)
08a82bc4 +0x090:  mov    %ecx,0x4(%esp)
08a82bc8 +0x094:  mov    %eax,(%esp)
08a82bcb +0x097:  call   08a83856 <_GLOBAL__I__Z22importSecretShopScriptP16SecretShopScriptPKc+0x5c8>  ; global constructors keyed to importSecretShopScript(SecretShopScript*, char const*)+0x5c8
08a82bd0 +0x09c:  sub    $0x4,%esp
08a82bd3 +0x09f:  lea    -0x14(%ebp),%eax
08a82bd6 +0x0a2:  mov    %eax,(%esp)
08a82bd9 +0x0a5:  call   08a83848 <_GLOBAL__I__Z22importSecretShopScriptP16SecretShopScriptPKc+0x5ba>  ; global constructors keyed to importSecretShopScript(SecretShopScript*, char const*)+0x5ba
08a82bde +0x0aa:  lea    0x20(%eax),%edx
08a82be1 +0x0ad:  lea    -0xc(%ebp),%eax
08a82be4 +0x0b0:  mov    %edx,0x4(%esp)
08a82be8 +0x0b4:  mov    %eax,(%esp)
08a82beb +0x0b7:  call   08a83882 <_GLOBAL__I__Z22importSecretShopScriptP16SecretShopScriptPKc+0x5f4>  ; global constructors keyed to importSecretShopScript(SecretShopScript*, char const*)+0x5f4
08a82bf0 +0x0bc:  sub    $0x4,%esp
08a82bf3 +0x0bf:  lea    -0xc(%ebp),%eax
08a82bf6 +0x0c2:  mov    %eax,0x4(%esp)
08a82bfa +0x0c6:  lea    -0x1c(%ebp),%eax
08a82bfd +0x0c9:  mov    %eax,(%esp)
08a82c00 +0x0cc:  call   08a838a8 <_GLOBAL__I__Z22importSecretShopScriptP16SecretShopScriptPKc+0x61a>  ; global constructors keyed to importSecretShopScript(SecretShopScript*, char const*)+0x61a
08a82c05 +0x0d1:  test   %al,%al
08a82c07 +0x0d3:  je     08a82c10 <+0xdc>
08a82c09 +0x0d5:  mov    $0x0,%eax
08a82c0e +0x0da:  jmp    08a82c6d <+0x139>
08a82c10 +0x0dc:  lea    -0x1c(%ebp),%eax
08a82c13 +0x0df:  mov    %eax,(%esp)
08a82c16 +0x0e2:  call   08a838bc <_GLOBAL__I__Z22importSecretShopScriptP16SecretShopScriptPKc+0x62e>  ; global constructors keyed to importSecretShopScript(SecretShopScript*, char const*)+0x62e
08a82c1b +0x0e7:  add    $0x4,%eax
08a82c1e +0x0ea:  mov    %eax,0xc(%esp)
08a82c22 +0x0ee:  mov    0x10(%ebp),%eax
08a82c25 +0x0f1:  mov    %eax,0x8(%esp)
08a82c29 +0x0f5:  mov    0xc(%ebp),%eax
08a82c2c +0x0f8:  mov    %eax,0x4(%esp)
08a82c30 +0x0fc:  mov    0x8(%ebp),%eax
08a82c33 +0x0ff:  mov    %eax,(%esp)
08a82c36 +0x102:  call   08a82d44 <_ZN16SecretShopScript8GetItemsEP7CMTRandRSt6vectorIN10secretshop9SALE_INFOESaIS4_EER14stDungeonSales>  ; SecretShopScript::GetItems(CMTRand*, std::vector<secretshop::SALE_INFO, std::allocator<secretshop::SALE_INFO> >&, stDungeonSales&)
08a82c3b +0x107:  xor    $0x1,%eax
08a82c3e +0x10a:  test   %al,%al
08a82c40 +0x10c:  je     08a82c49 <+0x115>
08a82c42 +0x10e:  mov    $0x0,%eax
08a82c47 +0x113:  jmp    08a82c6d <+0x139>
08a82c49 +0x115:  cmpb   $0x0,-0x2c(%ebp)
08a82c4d +0x119:  je     08a82c68 <+0x134>
08a82c4f +0x11b:  mov    0x10(%ebp),%eax
08a82c52 +0x11e:  mov    %eax,0x8(%esp)
08a82c56 +0x122:  mov    0xc(%ebp),%eax
08a82c59 +0x125:  mov    %eax,0x4(%esp)
08a82c5d +0x129:  mov    0x8(%ebp),%eax
08a82c60 +0x12c:  mov    %eax,(%esp)
08a82c63 +0x12f:  call   08a82c70 <_ZN16SecretShopScript14GetItemByEventEP7CMTRandRSt6vectorIN10secretshop9SALE_INFOESaIS4_EE>  ; SecretShopScript::GetItemByEvent(CMTRand*, std::vector<secretshop::SALE_INFO, std::allocator<secretshop::SALE_INFO> >&)
08a82c68 +0x134:  mov    $0x1,%eax
08a82c6d +0x139:  leave
08a82c6e +0x13a:  ret
08a82c6f +0x13b:  nop
```

## 反编译 C

```c
// SecretShopScript::GetItemByDungeonLev @ 0x8a82b34

/* SecretShopScript::GetItemByDungeonLev(CMTRand*, std::vector<secretshop::SALE_INFO,
   std::allocator<secretshop::SALE_INFO> >&, int, int, bool) */

undefined4 __thiscall
SecretShopScript::GetItemByDungeonLev
          (SecretShopScript *this,CMTRand *param_1,vector *param_2,int param_3,int param_4,
          bool param_5)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  _Rb_tree_iterator<std::pair<int_const,stDungeonSales>> local_20 [4];
  undefined4 local_1c;
  _Rb_tree_iterator<std::pair<int_const,stNpcSales>> local_18 [4];
  map<int,stNpcSales,std::less<int>,std::allocator<std::pair<int_const,stNpcSales>>> local_14 [4];
  map<int,stDungeonSales,std::less<int>,std::allocator<std::pair<int_const,stDungeonSales>>>
  local_10 [12];
  
  std::map<int,stNpcSales,std::less<int>,std::allocator<std::pair<int_const,stNpcSales>>>::find
            ((int *)local_18);
  std::map<int,stNpcSales,std::less<int>,std::allocator<std::pair<int_const,stNpcSales>>>::end
            (local_14);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,stNpcSales>>::operator==
                    (local_18,(_Rb_tree_iterator *)local_14);
  if (cVar1 == '\0') {
    local_1c = GetLevelIdx(this,param_4);
    std::_Rb_tree_iterator<std::pair<int_const,stNpcSales>>::operator->(local_18);
    std::map<int,stDungeonSales,std::less<int>,std::allocator<std::pair<int_const,stDungeonSales>>>
    ::find((int *)local_20);
    std::_Rb_tree_iterator<std::pair<int_const,stNpcSales>>::operator->(local_18);
    std::map<int,stDungeonSales,std::less<int>,std::allocator<std::pair<int_const,stDungeonSales>>>
    ::end(local_10);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,stDungeonSales>>::operator==
                      (local_20,(_Rb_tree_iterator *)local_10);
    if (cVar1 == '\0') {
      iVar3 = std::_Rb_tree_iterator<std::pair<int_const,stDungeonSales>>::operator->(local_20);
      cVar1 = GetItems(this,param_1,param_2,(stDungeonSales *)(iVar3 + 4));
      if (cVar1 == '\x01') {
        if (param_5) {
          GetItemByEvent(this,param_1,param_2);
        }
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
