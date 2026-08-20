# find_item

`_ZN30Arad_OnePlusCardEvent_ItemList9find_itemEt`

`Arad_OnePlusCardEvent_ItemList::find_item(unsigned short)`

| 类 | 地址 |
|---|---|
| `Arad_OnePlusCardEvent_ItemList` | `0x081a3a6e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081a3a6e  _ZN30Arad_OnePlusCardEvent_ItemList9find_itemEt
#           Arad_OnePlusCardEvent_ItemList::find_item(unsigned short)
# range [0x081a3a6e, 0x081a3ab1]
081a3a6e +0x00:  push   %ebp
081a3a6f +0x01:  mov    %esp,%ebp
081a3a71 +0x03:  sub    $0x38,%esp
081a3a74 +0x06:  mov    0xc(%ebp),%eax
081a3a77 +0x09:  mov    %ax,-0x1c(%ebp)
081a3a7b +0x0d:  movl   $0x0,0x8(%esp)
081a3a83 +0x15:  movl   $0x0,0x4(%esp)
081a3a8b +0x1d:  lea    -0x10(%ebp),%eax
081a3a8e +0x20:  mov    %eax,(%esp)
081a3a91 +0x23:  call   081a41e8 <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x243>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x243
081a3a96 +0x28:  movzwl -0x1c(%ebp),%eax
081a3a9a +0x2c:  lea    -0x10(%ebp),%edx
081a3a9d +0x2f:  mov    %edx,0x8(%esp)
081a3aa1 +0x33:  mov    %eax,0x4(%esp)
081a3aa5 +0x37:  mov    0x8(%ebp),%eax
081a3aa8 +0x3a:  mov    %eax,(%esp)
081a3aab +0x3d:  call   081a398e <_ZN30Arad_OnePlusCardEvent_ItemList9find_itemEtRNS_4DataE>  ; Arad_OnePlusCardEvent_ItemList::find_item(unsigned short, Arad_OnePlusCardEvent_ItemList::Data&)
081a3ab0 +0x42:  leave
081a3ab1 +0x43:  ret
```

## 反编译 C

```c
// Arad_OnePlusCardEvent_ItemList::find_item @ 0x81a3a6e

/* Arad_OnePlusCardEvent_ItemList::find_item(unsigned short) */

void __thiscall
Arad_OnePlusCardEvent_ItemList::find_item(Arad_OnePlusCardEvent_ItemList *this,ushort param_1)

{
  Data local_14 [16];
  
  Data::Data(local_14,0,0);
  find_item(this,param_1,local_14);
  return;
}
```
