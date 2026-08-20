# ~CCompound_ExtreamDun_Item

`_ZN14ExtreamDungeon25CCompound_ExtreamDun_ItemD1Ev`

`ExtreamDungeon::CCompound_ExtreamDun_Item::~CCompound_ExtreamDun_Item()`

| 类 | 地址 |
|---|---|
| `ExtreamDungeon::CCompound_ExtreamDun_Item` | `0x0832c524` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0832c524  _ZN14ExtreamDungeon25CCompound_ExtreamDun_ItemD1Ev
#           ExtreamDungeon::CCompound_ExtreamDun_Item::~CCompound_ExtreamDun_Item()
# range [0x0832c524, 0x0832c5ab]
0832c524 +0x00:  push   %ebp
0832c525 +0x01:  mov    %esp,%ebp
0832c527 +0x03:  push   %esi
0832c528 +0x04:  push   %ebx
0832c529 +0x05:  sub    $0x10,%esp
0832c52c +0x08:  mov    0x8(%ebp),%eax
0832c52f +0x0b:  mov    (%eax),%eax
0832c531 +0x0d:  test   %eax,%eax
0832c533 +0x0f:  je     0832c542 <+0x1e>
0832c535 +0x11:  mov    0x8(%ebp),%eax
0832c538 +0x14:  mov    (%eax),%eax
0832c53a +0x16:  mov    %eax,(%esp)
0832c53d +0x19:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0832c542 +0x1e:  mov    0x8(%ebp),%eax
0832c545 +0x21:  movl   $0x0,(%eax)
0832c54b +0x27:  mov    0x8(%ebp),%eax
0832c54e +0x2a:  add    $0xb8c,%eax
0832c553 +0x2f:  test   %eax,%eax
0832c555 +0x31:  je     0832c597 <+0x73>
0832c557 +0x33:  mov    0x8(%ebp),%eax
0832c55a +0x36:  lea    0xbec(%eax),%ebx
0832c560 +0x3c:  mov    0x8(%ebp),%eax
0832c563 +0x3f:  add    $0xb8c,%eax
0832c568 +0x44:  cmp    %eax,%ebx
0832c56a +0x46:  je     0832c597 <+0x73>
0832c56c +0x48:  sub    $0x30,%ebx
0832c56f +0x4b:  mov    %ebx,(%esp)
0832c572 +0x4e:  call   0832e3ac <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x40a>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x40a
0832c577 +0x53:  jmp    0832c560 <+0x3c>
0832c579 +0x55:  mov    %edx,%ebx
0832c57b +0x57:  mov    %eax,%esi
0832c57d +0x59:  mov    0x8(%ebp),%eax
0832c580 +0x5c:  add    $0x4,%eax
0832c583 +0x5f:  mov    %eax,(%esp)
0832c586 +0x62:  call   0832e220 <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x27e>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x27e
0832c58b +0x67:  mov    %esi,%eax
0832c58d +0x69:  mov    %ebx,%edx
0832c58f +0x6b:  mov    %eax,(%esp)
0832c592 +0x6e:  call   08ae3750 <_Unwind_Resume>
0832c597 +0x73:  mov    0x8(%ebp),%eax
0832c59a +0x76:  add    $0x4,%eax
0832c59d +0x79:  mov    %eax,(%esp)
0832c5a0 +0x7c:  call   0832e220 <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x27e>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x27e
0832c5a5 +0x81:  add    $0x10,%esp
0832c5a8 +0x84:  pop    %ebx
0832c5a9 +0x85:  pop    %esi
0832c5aa +0x86:  pop    %ebp
0832c5ab +0x87:  ret
```

## 反编译 C

```c
// ExtreamDungeon::CCompound_ExtreamDun_Item::~CCompound_ExtreamDun_Item @ 0x832c524

/* ExtreamDungeon::CCompound_ExtreamDun_Item::~CCompound_ExtreamDun_Item() */

void __thiscall
ExtreamDungeon::CCompound_ExtreamDun_Item::~CCompound_ExtreamDun_Item
          (CCompound_ExtreamDun_Item *this)

{
  BindCube_LvBonusScriptData *this_00;
  
  if (*(int *)this != 0) {
    operator_delete(*(void **)this);
  }
  *(undefined4 *)this = 0;
  if (this != (CCompound_ExtreamDun_Item *)0xfffff474) {
    this_00 = (BindCube_LvBonusScriptData *)(this + 0xbec);
    while (this_00 != (BindCube_LvBonusScriptData *)(this + 0xb8c)) {
      this_00 = this_00 + -0x30;
                    /* try { // try from 0832c572 to 0832c576 has its CatchHandler @ 0832c579 */
      BindCube_LvBonusScriptData::~BindCube_LvBonusScriptData(this_00);
    }
  }
  BindCube_ScriptData::~BindCube_ScriptData((BindCube_ScriptData *)(this + 4));
  return;
}
```
