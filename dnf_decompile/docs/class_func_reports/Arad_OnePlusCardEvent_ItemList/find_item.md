# find_item

`_ZN30Arad_OnePlusCardEvent_ItemList9find_itemEtRNS_4DataE`

`Arad_OnePlusCardEvent_ItemList::find_item(unsigned short, Arad_OnePlusCardEvent_ItemList::Data&)`

| 类 | 地址 |
|---|---|
| `Arad_OnePlusCardEvent_ItemList` | `0x081a398e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081a398e  _ZN30Arad_OnePlusCardEvent_ItemList9find_itemEtRNS_4DataE
#           Arad_OnePlusCardEvent_ItemList::find_item(unsigned short, Arad_OnePlusCardEvent_ItemList::Data&)
# range [0x081a398e, 0x081a3a6d]
081a398e +0x00:  push   %ebp
081a398f +0x01:  mov    %esp,%ebp
081a3991 +0x03:  sub    $0x48,%esp
081a3994 +0x06:  mov    0xc(%ebp),%eax
081a3997 +0x09:  mov    %ax,-0x2c(%ebp)
081a399b +0x0d:  movzwl -0x2c(%ebp),%eax
081a399f +0x11:  movl   $0x0,0x8(%esp)
081a39a7 +0x19:  mov    %eax,0x4(%esp)
081a39ab +0x1d:  lea    -0x1c(%ebp),%eax
081a39ae +0x20:  mov    %eax,(%esp)
081a39b1 +0x23:  call   081a41e8 <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x243>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x243
081a39b6 +0x28:  mov    0x8(%ebp),%eax
081a39b9 +0x2b:  lea    0x4(%eax),%edx
081a39bc +0x2e:  lea    -0x14(%ebp),%eax
081a39bf +0x31:  mov    %edx,0x4(%esp)
081a39c3 +0x35:  mov    %eax,(%esp)
081a39c6 +0x38:  call   081a4a2c <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0xa87>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0xa87
081a39cb +0x3d:  sub    $0x4,%esp
081a39ce +0x40:  mov    0x8(%ebp),%eax
081a39d1 +0x43:  lea    0x4(%eax),%edx
081a39d4 +0x46:  lea    -0x10(%ebp),%eax
081a39d7 +0x49:  mov    %edx,0x4(%esp)
081a39db +0x4d:  mov    %eax,(%esp)
081a39de +0x50:  call   081a4a08 <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0xa63>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0xa63
081a39e3 +0x55:  sub    $0x4,%esp
081a39e6 +0x58:  lea    -0x20(%ebp),%eax
081a39e9 +0x5b:  lea    -0x1c(%ebp),%edx
081a39ec +0x5e:  mov    %edx,0xc(%esp)
081a39f0 +0x62:  mov    -0x14(%ebp),%edx
081a39f3 +0x65:  mov    %edx,0x8(%esp)
081a39f7 +0x69:  mov    -0x10(%ebp),%edx
081a39fa +0x6c:  mov    %edx,0x4(%esp)
081a39fe +0x70:  mov    %eax,(%esp)
081a3a01 +0x73:  call   081a4a52 <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0xaad>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0xaad
081a3a06 +0x78:  sub    $0x4,%esp
081a3a09 +0x7b:  mov    0x8(%ebp),%eax
081a3a0c +0x7e:  lea    0x4(%eax),%edx
081a3a0f +0x81:  lea    -0xc(%ebp),%eax
081a3a12 +0x84:  mov    %edx,0x4(%esp)
081a3a16 +0x88:  mov    %eax,(%esp)
081a3a19 +0x8b:  call   081a4a2c <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0xa87>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0xa87
081a3a1e +0x90:  sub    $0x4,%esp
081a3a21 +0x93:  lea    -0xc(%ebp),%eax
081a3a24 +0x96:  mov    %eax,0x4(%esp)
081a3a28 +0x9a:  lea    -0x20(%ebp),%eax
081a3a2b +0x9d:  mov    %eax,(%esp)
081a3a2e +0xa0:  call   081a4aa6 <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0xb01>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0xb01
081a3a33 +0xa5:  test   %al,%al
081a3a35 +0xa7:  je     081a3a3e <+0xb0>
081a3a37 +0xa9:  mov    $0x0,%eax
081a3a3c +0xae:  jmp    081a3a6b <+0xdd>
081a3a3e +0xb0:  lea    -0x20(%ebp),%eax
081a3a41 +0xb3:  mov    %eax,(%esp)
081a3a44 +0xb6:  call   081a4ad2 <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0xb2d>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0xb2d
081a3a49 +0xbb:  movzwl (%eax),%edx
081a3a4c +0xbe:  mov    0x10(%ebp),%eax
081a3a4f +0xc1:  mov    %dx,(%eax)
081a3a52 +0xc4:  lea    -0x20(%ebp),%eax
081a3a55 +0xc7:  mov    %eax,(%esp)
081a3a58 +0xca:  call   081a4ad2 <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0xb2d>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0xb2d
081a3a5d +0xcf:  mov    0x4(%eax),%edx
081a3a60 +0xd2:  mov    0x10(%ebp),%eax
081a3a63 +0xd5:  mov    %edx,0x4(%eax)
081a3a66 +0xd8:  mov    $0x1,%eax
081a3a6b +0xdd:  leave
081a3a6c +0xde:  ret
081a3a6d +0xdf:  nop
```

## 反编译 C

```c
// Arad_OnePlusCardEvent_ItemList::find_item @ 0x81a398e

/* Arad_OnePlusCardEvent_ItemList::find_item(unsigned short, Arad_OnePlusCardEvent_ItemList::Data&)
    */

bool __thiscall
Arad_OnePlusCardEvent_ItemList::find_item
          (Arad_OnePlusCardEvent_ItemList *this,ushort param_1,Data *param_2)

{
  bool bVar1;
  undefined2 *puVar2;
  int iVar3;
  __normal_iterator<Arad_OnePlusCardEvent_ItemList::Data*,std::vector<Arad_OnePlusCardEvent_ItemList::Data,std::allocator<Arad_OnePlusCardEvent_ItemList::Data>>>
  local_24 [4];
  Data local_20 [8];
  undefined4 local_18;
  undefined4 local_14;
  __normal_iterator local_10 [12];
  
  Data::Data(local_20,param_1,0);
  std::
  vector<Arad_OnePlusCardEvent_ItemList::Data,std::allocator<Arad_OnePlusCardEvent_ItemList::Data>>
  ::end();
  std::
  vector<Arad_OnePlusCardEvent_ItemList::Data,std::allocator<Arad_OnePlusCardEvent_ItemList::Data>>
  ::begin();
  std::
  find<__gnu_cxx::__normal_iterator<Arad_OnePlusCardEvent_ItemList::Data*,std::vector<Arad_OnePlusCardEvent_ItemList::Data,std::allocator<Arad_OnePlusCardEvent_ItemList::Data>>>,Arad_OnePlusCardEvent_ItemList::Data>
            (local_24,local_14,local_18,local_20);
  std::
  vector<Arad_OnePlusCardEvent_ItemList::Data,std::allocator<Arad_OnePlusCardEvent_ItemList::Data>>
  ::end();
  bVar1 = __gnu_cxx::operator==(local_24,local_10);
  if (!bVar1) {
    puVar2 = (undefined2 *)
             __gnu_cxx::
             __normal_iterator<Arad_OnePlusCardEvent_ItemList::Data*,std::vector<Arad_OnePlusCardEvent_ItemList::Data,std::allocator<Arad_OnePlusCardEvent_ItemList::Data>>>
             ::operator->(local_24);
    *(undefined2 *)param_2 = *puVar2;
    iVar3 = __gnu_cxx::
            __normal_iterator<Arad_OnePlusCardEvent_ItemList::Data*,std::vector<Arad_OnePlusCardEvent_ItemList::Data,std::allocator<Arad_OnePlusCardEvent_ItemList::Data>>>
            ::operator->(local_24);
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(iVar3 + 4);
  }
  return !bVar1;
}
```
