# GetItemByDungeonIdx

`_ZN16SecretShopScript19GetItemByDungeonIdxEP7CMTRandRSt6vectorIN10secretshop9SALE_INFOESaIS4_EEiib`

`SecretShopScript::GetItemByDungeonIdx(CMTRand*, std::vector<secretshop::SALE_INFO, std::allocator<secretshop::SALE_INFO> >&, int, int, bool)`

| 类 | 地址 |
|---|---|
| `SecretShopScript` | `0x08a82a0e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a82a0e  _ZN16SecretShopScript19GetItemByDungeonIdxEP7CMTRandRSt6vectorIN10secretshop9SALE_INFOESaIS4_EEiib
#           SecretShopScript::GetItemByDungeonIdx(CMTRand*, std::vector<secretshop::SALE_INFO, std::allocator<secretshop::SALE_INFO> >&, int, int, bool)
# range [0x08a82a0e, 0x08a82b33]
08a82a0e +0x000:  push   %ebp
08a82a0f +0x001:  mov    %esp,%ebp
08a82a11 +0x003:  sub    $0x38,%esp
08a82a14 +0x006:  mov    0x1c(%ebp),%eax
08a82a17 +0x009:  mov    %al,-0x1c(%ebp)
08a82a1a +0x00c:  mov    0x8(%ebp),%eax
08a82a1d +0x00f:  lea    0x48(%eax),%ecx
08a82a20 +0x012:  lea    -0x14(%ebp),%eax
08a82a23 +0x015:  lea    0x14(%ebp),%edx
08a82a26 +0x018:  mov    %edx,0x8(%esp)
08a82a2a +0x01c:  mov    %ecx,0x4(%esp)
08a82a2e +0x020:  mov    %eax,(%esp)
08a82a31 +0x023:  call   08a837e2 <_GLOBAL__I__Z22importSecretShopScriptP16SecretShopScriptPKc+0x554>  ; global constructors keyed to importSecretShopScript(SecretShopScript*, char const*)+0x554
08a82a36 +0x028:  sub    $0x4,%esp
08a82a39 +0x02b:  mov    0x8(%ebp),%eax
08a82a3c +0x02e:  lea    0x48(%eax),%edx
08a82a3f +0x031:  lea    -0x10(%ebp),%eax
08a82a42 +0x034:  mov    %edx,0x4(%esp)
08a82a46 +0x038:  mov    %eax,(%esp)
08a82a49 +0x03b:  call   08a8380e <_GLOBAL__I__Z22importSecretShopScriptP16SecretShopScriptPKc+0x580>  ; global constructors keyed to importSecretShopScript(SecretShopScript*, char const*)+0x580
08a82a4e +0x040:  sub    $0x4,%esp
08a82a51 +0x043:  lea    -0x10(%ebp),%eax
08a82a54 +0x046:  mov    %eax,0x4(%esp)
08a82a58 +0x04a:  lea    -0x14(%ebp),%eax
08a82a5b +0x04d:  mov    %eax,(%esp)
08a82a5e +0x050:  call   08a83834 <_GLOBAL__I__Z22importSecretShopScriptP16SecretShopScriptPKc+0x5a6>  ; global constructors keyed to importSecretShopScript(SecretShopScript*, char const*)+0x5a6
08a82a63 +0x055:  test   %al,%al
08a82a65 +0x057:  je     08a82a71 <+0x63>
08a82a67 +0x059:  mov    $0x0,%eax
08a82a6c +0x05e:  jmp    08a82b32 <+0x124>
08a82a71 +0x063:  lea    -0x14(%ebp),%eax
08a82a74 +0x066:  mov    %eax,(%esp)
08a82a77 +0x069:  call   08a83848 <_GLOBAL__I__Z22importSecretShopScriptP16SecretShopScriptPKc+0x5ba>  ; global constructors keyed to importSecretShopScript(SecretShopScript*, char const*)+0x5ba
08a82a7c +0x06e:  lea    0x8(%eax),%ecx
08a82a7f +0x071:  lea    -0x18(%ebp),%eax
08a82a82 +0x074:  lea    0x18(%ebp),%edx
08a82a85 +0x077:  mov    %edx,0x8(%esp)
08a82a89 +0x07b:  mov    %ecx,0x4(%esp)
08a82a8d +0x07f:  mov    %eax,(%esp)
08a82a90 +0x082:  call   08a83856 <_GLOBAL__I__Z22importSecretShopScriptP16SecretShopScriptPKc+0x5c8>  ; global constructors keyed to importSecretShopScript(SecretShopScript*, char const*)+0x5c8
08a82a95 +0x087:  sub    $0x4,%esp
08a82a98 +0x08a:  lea    -0x14(%ebp),%eax
08a82a9b +0x08d:  mov    %eax,(%esp)
08a82a9e +0x090:  call   08a83848 <_GLOBAL__I__Z22importSecretShopScriptP16SecretShopScriptPKc+0x5ba>  ; global constructors keyed to importSecretShopScript(SecretShopScript*, char const*)+0x5ba
08a82aa3 +0x095:  lea    0x8(%eax),%edx
08a82aa6 +0x098:  lea    -0xc(%ebp),%eax
08a82aa9 +0x09b:  mov    %edx,0x4(%esp)
08a82aad +0x09f:  mov    %eax,(%esp)
08a82ab0 +0x0a2:  call   08a83882 <_GLOBAL__I__Z22importSecretShopScriptP16SecretShopScriptPKc+0x5f4>  ; global constructors keyed to importSecretShopScript(SecretShopScript*, char const*)+0x5f4
08a82ab5 +0x0a7:  sub    $0x4,%esp
08a82ab8 +0x0aa:  lea    -0xc(%ebp),%eax
08a82abb +0x0ad:  mov    %eax,0x4(%esp)
08a82abf +0x0b1:  lea    -0x18(%ebp),%eax
08a82ac2 +0x0b4:  mov    %eax,(%esp)
08a82ac5 +0x0b7:  call   08a838a8 <_GLOBAL__I__Z22importSecretShopScriptP16SecretShopScriptPKc+0x61a>  ; global constructors keyed to importSecretShopScript(SecretShopScript*, char const*)+0x61a
08a82aca +0x0bc:  test   %al,%al
08a82acc +0x0be:  je     08a82ad5 <+0xc7>
08a82ace +0x0c0:  mov    $0x0,%eax
08a82ad3 +0x0c5:  jmp    08a82b32 <+0x124>
08a82ad5 +0x0c7:  lea    -0x18(%ebp),%eax
08a82ad8 +0x0ca:  mov    %eax,(%esp)
08a82adb +0x0cd:  call   08a838bc <_GLOBAL__I__Z22importSecretShopScriptP16SecretShopScriptPKc+0x62e>  ; global constructors keyed to importSecretShopScript(SecretShopScript*, char const*)+0x62e
08a82ae0 +0x0d2:  add    $0x4,%eax
08a82ae3 +0x0d5:  mov    %eax,0xc(%esp)
08a82ae7 +0x0d9:  mov    0x10(%ebp),%eax
08a82aea +0x0dc:  mov    %eax,0x8(%esp)
08a82aee +0x0e0:  mov    0xc(%ebp),%eax
08a82af1 +0x0e3:  mov    %eax,0x4(%esp)
08a82af5 +0x0e7:  mov    0x8(%ebp),%eax
08a82af8 +0x0ea:  mov    %eax,(%esp)
08a82afb +0x0ed:  call   08a82d44 <_ZN16SecretShopScript8GetItemsEP7CMTRandRSt6vectorIN10secretshop9SALE_INFOESaIS4_EER14stDungeonSales>  ; SecretShopScript::GetItems(CMTRand*, std::vector<secretshop::SALE_INFO, std::allocator<secretshop::SALE_INFO> >&, stDungeonSales&)
08a82b00 +0x0f2:  xor    $0x1,%eax
08a82b03 +0x0f5:  test   %al,%al
08a82b05 +0x0f7:  je     08a82b0e <+0x100>
08a82b07 +0x0f9:  mov    $0x0,%eax
08a82b0c +0x0fe:  jmp    08a82b32 <+0x124>
08a82b0e +0x100:  cmpb   $0x0,-0x1c(%ebp)
08a82b12 +0x104:  je     08a82b2d <+0x11f>
08a82b14 +0x106:  mov    0x10(%ebp),%eax
08a82b17 +0x109:  mov    %eax,0x8(%esp)
08a82b1b +0x10d:  mov    0xc(%ebp),%eax
08a82b1e +0x110:  mov    %eax,0x4(%esp)
08a82b22 +0x114:  mov    0x8(%ebp),%eax
08a82b25 +0x117:  mov    %eax,(%esp)
08a82b28 +0x11a:  call   08a82c70 <_ZN16SecretShopScript14GetItemByEventEP7CMTRandRSt6vectorIN10secretshop9SALE_INFOESaIS4_EE>  ; SecretShopScript::GetItemByEvent(CMTRand*, std::vector<secretshop::SALE_INFO, std::allocator<secretshop::SALE_INFO> >&)
08a82b2d +0x11f:  mov    $0x1,%eax
08a82b32 +0x124:  leave
08a82b33 +0x125:  ret
```

## 反编译 C

```c
// SecretShopScript::GetItemByDungeonIdx @ 0x8a82a0e

/* SecretShopScript::GetItemByDungeonIdx(CMTRand*, std::vector<secretshop::SALE_INFO,
   std::allocator<secretshop::SALE_INFO> >&, int, int, bool) */

undefined4 __thiscall
SecretShopScript::GetItemByDungeonIdx
          (SecretShopScript *this,CMTRand *param_1,vector *param_2,int param_3,int param_4,
          bool param_5)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  _Rb_tree_iterator<std::pair<int_const,stDungeonSales>> local_1c [4];
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
    std::_Rb_tree_iterator<std::pair<int_const,stNpcSales>>::operator->(local_18);
    std::map<int,stDungeonSales,std::less<int>,std::allocator<std::pair<int_const,stDungeonSales>>>
    ::find((int *)local_1c);
    std::_Rb_tree_iterator<std::pair<int_const,stNpcSales>>::operator->(local_18);
    std::map<int,stDungeonSales,std::less<int>,std::allocator<std::pair<int_const,stDungeonSales>>>
    ::end(local_10);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,stDungeonSales>>::operator==
                      (local_1c,(_Rb_tree_iterator *)local_10);
    if (cVar1 == '\0') {
      iVar3 = std::_Rb_tree_iterator<std::pair<int_const,stDungeonSales>>::operator->(local_1c);
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
