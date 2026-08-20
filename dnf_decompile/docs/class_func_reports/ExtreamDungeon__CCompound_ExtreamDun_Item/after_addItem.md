# after_addItem

`_ZN14ExtreamDungeon25CCompound_ExtreamDun_Item13after_addItemEv`

`ExtreamDungeon::CCompound_ExtreamDun_Item::after_addItem()`

| 类 | 地址 |
|---|---|
| `ExtreamDungeon::CCompound_ExtreamDun_Item` | `0x0832de18` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0832de18  _ZN14ExtreamDungeon25CCompound_ExtreamDun_Item13after_addItemEv
#           ExtreamDungeon::CCompound_ExtreamDun_Item::after_addItem()
# range [0x0832de18, 0x0832df61]
0832de18 +0x000:  push   %ebp
0832de19 +0x001:  mov    %esp,%ebp
0832de1b +0x003:  sub    $0x38,%esp
0832de1e +0x006:  movl   $0x1,-0x14(%ebp)
0832de25 +0x00d:  jmp    0832ded3 <+0xbb>
0832de2a +0x012:  movl   $0x0,-0x10(%ebp)
0832de31 +0x019:  jmp    0832dec0 <+0xa8>
0832de36 +0x01e:  mov    -0x14(%ebp),%edx
0832de39 +0x021:  mov    -0x10(%ebp),%ecx
0832de3c +0x024:  mov    %ecx,%eax
0832de3e +0x026:  add    %eax,%eax
0832de40 +0x028:  add    %ecx,%eax
0832de42 +0x02a:  lea    0x0(,%eax,4),%ecx
0832de49 +0x031:  mov    %edx,%eax
0832de4b +0x033:  add    %eax,%eax
0832de4d +0x035:  add    %edx,%eax
0832de4f +0x037:  shl    $0x4,%eax
0832de52 +0x03a:  lea    (%ecx,%eax,1),%eax
0832de55 +0x03d:  add    $0x30,%eax
0832de58 +0x040:  add    0x8(%ebp),%eax
0832de5b +0x043:  lea    0x4(%eax),%edx
0832de5e +0x046:  lea    -0x24(%ebp),%eax
0832de61 +0x049:  mov    %edx,0x4(%esp)
0832de65 +0x04d:  mov    %eax,(%esp)
0832de68 +0x050:  call   0832eada <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0xb38>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0xb38
0832de6d +0x055:  sub    $0x4,%esp
0832de70 +0x058:  mov    -0x14(%ebp),%edx
0832de73 +0x05b:  mov    -0x10(%ebp),%ecx
0832de76 +0x05e:  mov    %ecx,%eax
0832de78 +0x060:  add    %eax,%eax
0832de7a +0x062:  add    %ecx,%eax
0832de7c +0x064:  lea    0x0(,%eax,4),%ecx
0832de83 +0x06b:  mov    %edx,%eax
0832de85 +0x06d:  add    %eax,%eax
0832de87 +0x06f:  add    %edx,%eax
0832de89 +0x071:  shl    $0x4,%eax
0832de8c +0x074:  lea    (%ecx,%eax,1),%eax
0832de8f +0x077:  add    $0x30,%eax
0832de92 +0x07a:  add    0x8(%ebp),%eax
0832de95 +0x07d:  lea    0x4(%eax),%edx
0832de98 +0x080:  lea    -0x20(%ebp),%eax
0832de9b +0x083:  mov    %edx,0x4(%esp)
0832de9f +0x087:  mov    %eax,(%esp)
0832dea2 +0x08a:  call   0832eab6 <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0xb14>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0xb14
0832dea7 +0x08f:  sub    $0x4,%esp
0832deaa +0x092:  mov    -0x24(%ebp),%eax
0832dead +0x095:  mov    %eax,0x4(%esp)
0832deb1 +0x099:  mov    -0x20(%ebp),%eax
0832deb4 +0x09c:  mov    %eax,(%esp)
0832deb7 +0x09f:  call   0832eb00 <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0xb5e>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0xb5e
0832debc +0x0a4:  addl   $0x1,-0x10(%ebp)
0832dec0 +0x0a8:  cmpl   $0x3,-0x10(%ebp)
0832dec4 +0x0ac:  setle  %al
0832dec7 +0x0af:  test   %al,%al
0832dec9 +0x0b1:  jne    0832de36 <+0x1e>
0832decf +0x0b7:  addl   $0x1,-0x14(%ebp)
0832ded3 +0x0bb:  mov    -0x14(%ebp),%eax
0832ded6 +0x0be:  cmp    $0x3a,%eax
0832ded9 +0x0c1:  setbe  %al
0832dedc +0x0c4:  test   %al,%al
0832dede +0x0c6:  jne    0832de2a <+0x12>
0832dee4 +0x0cc:  movl   $0x0,-0xc(%ebp)
0832deeb +0x0d3:  jmp    0832df55 <+0x13d>
0832deed +0x0d5:  mov    -0xc(%ebp),%edx
0832def0 +0x0d8:  mov    %edx,%eax
0832def2 +0x0da:  add    %eax,%eax
0832def4 +0x0dc:  add    %edx,%eax
0832def6 +0x0de:  shl    $0x2,%eax
0832def9 +0x0e1:  add    $0xb40,%eax
0832defe +0x0e6:  add    0x8(%ebp),%eax
0832df01 +0x0e9:  lea    0x4(%eax),%edx
0832df04 +0x0ec:  lea    -0x1c(%ebp),%eax
0832df07 +0x0ef:  mov    %edx,0x4(%esp)
0832df0b +0x0f3:  mov    %eax,(%esp)
0832df0e +0x0f6:  call   0832eada <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0xb38>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0xb38
0832df13 +0x0fb:  sub    $0x4,%esp
0832df16 +0x0fe:  mov    -0xc(%ebp),%edx
0832df19 +0x101:  mov    %edx,%eax
0832df1b +0x103:  add    %eax,%eax
0832df1d +0x105:  add    %edx,%eax
0832df1f +0x107:  shl    $0x2,%eax
0832df22 +0x10a:  add    $0xb40,%eax
0832df27 +0x10f:  add    0x8(%ebp),%eax
0832df2a +0x112:  lea    0x4(%eax),%edx
0832df2d +0x115:  lea    -0x18(%ebp),%eax
0832df30 +0x118:  mov    %edx,0x4(%esp)
0832df34 +0x11c:  mov    %eax,(%esp)
0832df37 +0x11f:  call   0832eab6 <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0xb14>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0xb14
0832df3c +0x124:  sub    $0x4,%esp
0832df3f +0x127:  mov    -0x1c(%ebp),%eax
0832df42 +0x12a:  mov    %eax,0x4(%esp)
0832df46 +0x12e:  mov    -0x18(%ebp),%eax
0832df49 +0x131:  mov    %eax,(%esp)
0832df4c +0x134:  call   0832eb00 <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0xb5e>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0xb5e
0832df51 +0x139:  addl   $0x1,-0xc(%ebp)
0832df55 +0x13d:  cmpl   $0x3,-0xc(%ebp)
0832df59 +0x141:  setle  %al
0832df5c +0x144:  test   %al,%al
0832df5e +0x146:  jne    0832deed <+0xd5>
0832df60 +0x148:  leave
0832df61 +0x149:  ret
```

## 反编译 C

```c
// ExtreamDungeon::CCompound_ExtreamDun_Item::after_addItem @ 0x832de18

/* ExtreamDungeon::CCompound_ExtreamDun_Item::after_addItem() */

void ExtreamDungeon::CCompound_ExtreamDun_Item::after_addItem(void)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  for (local_18 = 1; local_18 < 0x3b; local_18 = local_18 + 1) {
    for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
      std::vector<ExtreamDungeon::OUTPUT_ITEM_STR,std::allocator<ExtreamDungeon::OUTPUT_ITEM_STR>>::
      end();
      std::vector<ExtreamDungeon::OUTPUT_ITEM_STR,std::allocator<ExtreamDungeon::OUTPUT_ITEM_STR>>::
      begin();
      std::
      sort<__gnu_cxx::__normal_iterator<ExtreamDungeon::OUTPUT_ITEM_STR*,std::vector<ExtreamDungeon::OUTPUT_ITEM_STR,std::allocator<ExtreamDungeon::OUTPUT_ITEM_STR>>>>
                (local_24,local_28);
    }
  }
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    std::vector<ExtreamDungeon::OUTPUT_ITEM_STR,std::allocator<ExtreamDungeon::OUTPUT_ITEM_STR>>::
    end();
    std::vector<ExtreamDungeon::OUTPUT_ITEM_STR,std::allocator<ExtreamDungeon::OUTPUT_ITEM_STR>>::
    begin();
    std::
    sort<__gnu_cxx::__normal_iterator<ExtreamDungeon::OUTPUT_ITEM_STR*,std::vector<ExtreamDungeon::OUTPUT_ITEM_STR,std::allocator<ExtreamDungeon::OUTPUT_ITEM_STR>>>>
              (local_1c,local_20);
  }
  return;
}
```
