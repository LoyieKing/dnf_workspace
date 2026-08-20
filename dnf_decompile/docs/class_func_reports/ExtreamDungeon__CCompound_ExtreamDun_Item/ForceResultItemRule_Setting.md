# ForceResultItemRule_Setting

`_ZN14ExtreamDungeon25CCompound_ExtreamDun_Item27ForceResultItemRule_SettingEibi`

`ExtreamDungeon::CCompound_ExtreamDun_Item::ForceResultItemRule_Setting(int, bool, int)`

| 类 | 地址 |
|---|---|
| `ExtreamDungeon::CCompound_ExtreamDun_Item` | `0x0832d784` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0832d784  _ZN14ExtreamDungeon25CCompound_ExtreamDun_Item27ForceResultItemRule_SettingEibi
#           ExtreamDungeon::CCompound_ExtreamDun_Item::ForceResultItemRule_Setting(int, bool, int)
# range [0x0832d784, 0x0832d7d5]
0832d784 +0x00:  push   %ebp
0832d785 +0x01:  mov    %esp,%ebp
0832d787 +0x03:  push   %ebx
0832d788 +0x04:  sub    $0x34,%esp
0832d78b +0x07:  mov    0x10(%ebp),%eax
0832d78e +0x0a:  mov    %al,-0x1c(%ebp)
0832d791 +0x0d:  mov    0x8(%ebp),%eax
0832d794 +0x10:  lea    0xb74(%eax),%edx
0832d79a +0x16:  lea    0xc(%ebp),%eax
0832d79d +0x19:  mov    %eax,0x4(%esp)
0832d7a1 +0x1d:  mov    %edx,(%esp)
0832d7a4 +0x20:  call   0832e98a <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x9e8>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x9e8
0832d7a9 +0x25:  mov    %eax,%ebx
0832d7ab +0x27:  movzbl -0x1c(%ebp),%eax
0832d7af +0x2b:  mov    0x14(%ebp),%edx
0832d7b2 +0x2e:  mov    %edx,0x8(%esp)
0832d7b6 +0x32:  mov    %eax,0x4(%esp)
0832d7ba +0x36:  lea    -0x10(%ebp),%eax
0832d7bd +0x39:  mov    %eax,(%esp)
0832d7c0 +0x3c:  call   0832e00a <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x68>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x68
0832d7c5 +0x41:  mov    -0x10(%ebp),%eax
0832d7c8 +0x44:  mov    -0xc(%ebp),%edx
0832d7cb +0x47:  mov    %eax,(%ebx)
0832d7cd +0x49:  mov    %edx,0x4(%ebx)
0832d7d0 +0x4c:  add    $0x34,%esp
0832d7d3 +0x4f:  pop    %ebx
0832d7d4 +0x50:  pop    %ebp
0832d7d5 +0x51:  ret
```

## 反编译 C

```c
// ExtreamDungeon::CCompound_ExtreamDun_Item::ForceResultItemRule_Setting @ 0x832d784

/* ExtreamDungeon::CCompound_ExtreamDun_Item::ForceResultItemRule_Setting(int, bool, int) */

void __thiscall
ExtreamDungeon::CCompound_ExtreamDun_Item::ForceResultItemRule_Setting
          (CCompound_ExtreamDun_Item *this,int param_1,bool param_2,int param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined3 in_stack_0000000d;
  undefined4 local_14;
  undefined4 local_10;
  
  bVar1 = param_2;
  puVar2 = (undefined4 *)
           std::
           map<int,ExtreamDungeon::forceRule_ResultItem,std::less<int>,std::allocator<std::pair<int_const,ExtreamDungeon::forceRule_ResultItem>>>
           ::operator[]((map<int,ExtreamDungeon::forceRule_ResultItem,std::less<int>,std::allocator<std::pair<int_const,ExtreamDungeon::forceRule_ResultItem>>>
                         *)(this + 0xb74),&param_1);
  forceRule_ResultItem::forceRule_ResultItem((forceRule_ResultItem *)&local_14,bVar1,param_3);
  *puVar2 = local_14;
  puVar2[1] = local_10;
  return;
}
```
