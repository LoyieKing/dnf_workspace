# CCompound_ExtreamDun_Item

`_ZN14ExtreamDungeon25CCompound_ExtreamDun_ItemC1Ev`

`ExtreamDungeon::CCompound_ExtreamDun_Item::CCompound_ExtreamDun_Item()`

| 类 | 地址 |
|---|---|
| `ExtreamDungeon::CCompound_ExtreamDun_Item` | `0x0832c402` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0832c402  _ZN14ExtreamDungeon25CCompound_ExtreamDun_ItemC1Ev
#           ExtreamDungeon::CCompound_ExtreamDun_Item::CCompound_ExtreamDun_Item()
# range [0x0832c402, 0x0832c523]
0832c402 +0x000:  push   %ebp
0832c403 +0x001:  mov    %esp,%ebp
0832c405 +0x003:  push   %edi
0832c406 +0x004:  push   %esi
0832c407 +0x005:  push   %ebx
0832c408 +0x006:  sub    $0x3c,%esp
0832c40b +0x009:  mov    0x8(%ebp),%eax
0832c40e +0x00c:  add    $0x4,%eax
0832c411 +0x00f:  mov    %eax,(%esp)
0832c414 +0x012:  call   0832e058 <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0xb6>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0xb6
0832c419 +0x017:  mov    0x8(%ebp),%eax
0832c41c +0x01a:  lea    0xb8c(%eax),%esi
0832c422 +0x020:  mov    %esi,%edi
0832c424 +0x022:  mov    $0x1,%ebx
0832c429 +0x027:  jmp    0832c439 <+0x37>
0832c42b +0x029:  mov    %edi,(%esp)
0832c42e +0x02c:  call   0832e318 <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x376>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x376
0832c433 +0x031:  add    $0x30,%edi
0832c436 +0x034:  sub    $0x1,%ebx
0832c439 +0x037:  cmp    $0xffffffff,%ebx
0832c43c +0x03a:  setne  %al
0832c43f +0x03d:  test   %al,%al
0832c441 +0x03f:  jne    0832c42b <+0x29>
0832c443 +0x041:  jmp    0832c47e <+0x7c>
0832c445 +0x043:  mov    %edx,%edi
0832c447 +0x045:  mov    %eax,-0x2c(%ebp)
0832c44a +0x048:  test   %esi,%esi
0832c44c +0x04a:  je     0832c474 <+0x72>
0832c44e +0x04c:  mov    $0x1,%eax
0832c453 +0x051:  sub    %ebx,%eax
0832c455 +0x053:  mov    %eax,%edx
0832c457 +0x055:  mov    %edx,%eax
0832c459 +0x057:  add    %eax,%eax
0832c45b +0x059:  add    %edx,%eax
0832c45d +0x05b:  shl    $0x4,%eax
0832c460 +0x05e:  lea    (%esi,%eax,1),%ebx
0832c463 +0x061:  cmp    %esi,%ebx
0832c465 +0x063:  je     0832c474 <+0x72>
0832c467 +0x065:  sub    $0x30,%ebx
0832c46a +0x068:  mov    %ebx,(%esp)
0832c46d +0x06b:  call   0832e3ac <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x40a>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x40a
0832c472 +0x070:  jmp    0832c463 <+0x61>
0832c474 +0x072:  mov    -0x2c(%ebp),%eax
0832c477 +0x075:  mov    %edi,%edx
0832c479 +0x077:  jmp    0832c505 <+0x103>
0832c47e +0x07c:  movl   $0x0,(%esp)
0832c485 +0x083:  call   0807d750 <_init+0x48>
0832c48a +0x088:  mov    %eax,-0x1c(%ebp)
0832c48d +0x08b:  lea    -0x1c(%ebp),%esi
0832c490 +0x08e:  movl   $0x9c8,(%esp)
0832c497 +0x095:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0832c49c +0x09a:  mov    %eax,%ebx
0832c49e +0x09c:  mov    %ebx,%eax
0832c4a0 +0x09e:  mov    %esi,0x4(%esp)
0832c4a4 +0x0a2:  mov    %eax,(%esp)
0832c4a7 +0x0a5:  call   080cba2a <_GLOBAL__I__ZN10BingoEventC2Ev+0x877>  ; global constructors keyed to BingoEvent::BingoEvent()+0x877
0832c4ac +0x0aa:  jmp    0832c4c0 <+0xbe>
0832c4ae +0x0ac:  mov    %edx,%esi
0832c4b0 +0x0ae:  mov    %eax,%edi
0832c4b2 +0x0b0:  mov    %ebx,(%esp)
0832c4b5 +0x0b3:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0832c4ba +0x0b8:  mov    %edi,%eax
0832c4bc +0x0ba:  mov    %esi,%edx
0832c4be +0x0bc:  jmp    0832c4cf <+0xcd>
0832c4c0 +0x0be:  mov    %ebx,%edx
0832c4c2 +0x0c0:  mov    0x8(%ebp),%eax
0832c4c5 +0x0c3:  mov    %edx,(%eax)
0832c4c7 +0x0c5:  add    $0x3c,%esp
0832c4ca +0x0c8:  pop    %ebx
0832c4cb +0x0c9:  pop    %esi
0832c4cc +0x0ca:  pop    %edi
0832c4cd +0x0cb:  pop    %ebp
0832c4ce +0x0cc:  ret
0832c4cf +0x0cd:  mov    %edx,%esi
0832c4d1 +0x0cf:  mov    %eax,%edi
0832c4d3 +0x0d1:  mov    0x8(%ebp),%eax
0832c4d6 +0x0d4:  add    $0xb8c,%eax
0832c4db +0x0d9:  test   %eax,%eax
0832c4dd +0x0db:  je     0832c501 <+0xff>
0832c4df +0x0dd:  mov    0x8(%ebp),%eax
0832c4e2 +0x0e0:  lea    0xbec(%eax),%ebx
0832c4e8 +0x0e6:  mov    0x8(%ebp),%eax
0832c4eb +0x0e9:  add    $0xb8c,%eax
0832c4f0 +0x0ee:  cmp    %eax,%ebx
0832c4f2 +0x0f0:  je     0832c501 <+0xff>
0832c4f4 +0x0f2:  sub    $0x30,%ebx
0832c4f7 +0x0f5:  mov    %ebx,(%esp)
0832c4fa +0x0f8:  call   0832e3ac <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x40a>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x40a
0832c4ff +0x0fd:  jmp    0832c4e8 <+0xe6>
0832c501 +0x0ff:  mov    %edi,%eax
0832c503 +0x101:  mov    %esi,%edx
0832c505 +0x103:  mov    %edx,%ebx
0832c507 +0x105:  mov    %eax,%esi
0832c509 +0x107:  mov    0x8(%ebp),%eax
0832c50c +0x10a:  add    $0x4,%eax
0832c50f +0x10d:  mov    %eax,(%esp)
0832c512 +0x110:  call   0832e220 <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x27e>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x27e
0832c517 +0x115:  mov    %esi,%eax
0832c519 +0x117:  mov    %ebx,%edx
0832c51b +0x119:  mov    %eax,(%esp)
0832c51e +0x11c:  call   08ae3750 <_Unwind_Resume>
0832c523 +0x121:  nop
```

## 反编译 C

```c
// ExtreamDungeon::CCompound_ExtreamDun_Item::CCompound_ExtreamDun_Item @ 0x832c402

/* ExtreamDungeon::CCompound_ExtreamDun_Item::CCompound_ExtreamDun_Item() */

void __thiscall
ExtreamDungeon::CCompound_ExtreamDun_Item::CCompound_ExtreamDun_Item
          (CCompound_ExtreamDun_Item *this)

{
  CMTRand *this_00;
  int iVar1;
  BindCube_LvBonusScriptData *this_01;
  ulong local_20 [4];
  
  BindCube_ScriptData::BindCube_ScriptData((BindCube_ScriptData *)(this + 4));
  this_01 = (BindCube_LvBonusScriptData *)(this + 0xb8c);
  for (iVar1 = 1; iVar1 != -1; iVar1 = iVar1 + -1) {
                    /* try { // try from 0832c42e to 0832c432 has its CatchHandler @ 0832c445 */
    BindCube_LvBonusScriptData::BindCube_LvBonusScriptData(this_01);
    this_01 = this_01 + 0x30;
  }
  local_20[0] = time((time_t *)0x0);
                    /* try { // try from 0832c497 to 0832c49b has its CatchHandler @ 0832c4cf */
  this_00 = operator_new(0x9c8);
                    /* try { // try from 0832c4a7 to 0832c4ab has its CatchHandler @ 0832c4ae */
  CMTRand::CMTRand(this_00,local_20);
  *(CMTRand **)this = this_00;
  return;
}
```
