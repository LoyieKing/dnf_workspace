# find

`_ZN13AradBonusItem4findEjRNS_4DataE`

`AradBonusItem::find(unsigned int, AradBonusItem::Data&)`

| 类 | 地址 |
|---|---|
| `AradBonusItem` | `0x081a252c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081a252c  _ZN13AradBonusItem4findEjRNS_4DataE
#           AradBonusItem::find(unsigned int, AradBonusItem::Data&)
# range [0x081a252c, 0x081a25d1]
081a252c +0x00:  push   %ebp
081a252d +0x01:  mov    %esp,%ebp
081a252f +0x03:  sub    $0x38,%esp
081a2532 +0x06:  mov    0xc(%ebp),%eax
081a2535 +0x09:  mov    %eax,-0x1c(%ebp)
081a2538 +0x0c:  mov    0x8(%ebp),%eax
081a253b +0x0f:  lea    0x4(%eax),%ecx
081a253e +0x12:  lea    -0x20(%ebp),%eax
081a2541 +0x15:  lea    -0x1c(%ebp),%edx
081a2544 +0x18:  mov    %edx,0x8(%esp)
081a2548 +0x1c:  mov    %ecx,0x4(%esp)
081a254c +0x20:  mov    %eax,(%esp)
081a254f +0x23:  call   081a44bc <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x517>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x517
081a2554 +0x28:  sub    $0x4,%esp
081a2557 +0x2b:  mov    0x8(%ebp),%eax
081a255a +0x2e:  lea    0x4(%eax),%edx
081a255d +0x31:  lea    -0x18(%ebp),%eax
081a2560 +0x34:  mov    %edx,0x4(%esp)
081a2564 +0x38:  mov    %eax,(%esp)
081a2567 +0x3b:  call   081a44e8 <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x543>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x543
081a256c +0x40:  sub    $0x4,%esp
081a256f +0x43:  lea    -0x18(%ebp),%eax
081a2572 +0x46:  mov    %eax,0x4(%esp)
081a2576 +0x4a:  lea    -0x20(%ebp),%eax
081a2579 +0x4d:  mov    %eax,(%esp)
081a257c +0x50:  call   081a450e <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x569>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x569
081a2581 +0x55:  test   %al,%al
081a2583 +0x57:  je     081a25ca <+0x9e>
081a2585 +0x59:  lea    -0x20(%ebp),%eax
081a2588 +0x5c:  mov    %eax,(%esp)
081a258b +0x5f:  call   081a4522 <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x57d>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x57d
081a2590 +0x64:  mov    0x4(%eax),%edx
081a2593 +0x67:  mov    %edx,-0x14(%ebp)
081a2596 +0x6a:  mov    0x8(%eax),%edx
081a2599 +0x6d:  mov    %edx,-0x10(%ebp)
081a259c +0x70:  movzwl 0xc(%eax),%eax
081a25a0 +0x74:  mov    %ax,-0xc(%ebp)
081a25a4 +0x78:  lea    -0x14(%ebp),%eax
081a25a7 +0x7b:  cmp    %eax,0x10(%ebp)
081a25aa +0x7e:  je     081a25c3 <+0x97>
081a25ac +0x80:  movl   $0xa,0x8(%esp)
081a25b4 +0x88:  mov    %eax,0x4(%esp)
081a25b8 +0x8c:  mov    0x10(%ebp),%eax
081a25bb +0x8f:  mov    %eax,(%esp)
081a25be +0x92:  call   0807d8a0 <_init+0x198>
081a25c3 +0x97:  mov    $0x1,%eax
081a25c8 +0x9c:  jmp    081a25cf <+0xa3>
081a25ca +0x9e:  mov    $0x0,%eax
081a25cf +0xa3:  leave
081a25d0 +0xa4:  ret
081a25d1 +0xa5:  nop
```

## 反编译 C

```c
// AradBonusItem::find @ 0x81a252c

/* AradBonusItem::find(unsigned int, AradBonusItem::Data&) */

undefined4 __thiscall AradBonusItem::find(AradBonusItem *this,uint param_1,Data *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_iterator<std::pair<int_const,AradBonusItem::Data>> local_24 [4];
  uint local_20;
  map<int,AradBonusItem::Data,std::less<int>,std::allocator<std::pair<int_const,AradBonusItem::Data>>>
  local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  undefined2 local_10;
  
  local_20 = param_1;
  std::
  map<int,AradBonusItem::Data,std::less<int>,std::allocator<std::pair<int_const,AradBonusItem::Data>>>
  ::find((int *)local_24);
  std::
  map<int,AradBonusItem::Data,std::less<int>,std::allocator<std::pair<int_const,AradBonusItem::Data>>>
  ::end(local_1c);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,AradBonusItem::Data>>::operator!=
                    (local_24,(_Rb_tree_iterator *)local_1c);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,AradBonusItem::Data>>::operator->(local_24);
    local_18 = *(undefined4 *)(iVar2 + 4);
    local_14 = *(undefined4 *)(iVar2 + 8);
    local_10 = *(undefined2 *)(iVar2 + 0xc);
    if (param_2 != (Data *)&local_18) {
      memcpy(param_2,(Data *)&local_18,10);
    }
    uVar3 = 1;
  }
  return uVar3;
}
```
