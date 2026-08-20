# AdvanceAltarData

`_ZN12advancealtar16AdvanceAltarDataC1Ev`

`advancealtar::AdvanceAltarData::AdvanceAltarData()`

| 类 | 地址 |
|---|---|
| `advancealtar::AdvanceAltarData` | `0x0889911e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0889911e  _ZN12advancealtar16AdvanceAltarDataC1Ev
#           advancealtar::AdvanceAltarData::AdvanceAltarData()
# range [0x0889911e, 0x0889923f]
0889911e +0x000:  push   %ebp
0889911f +0x001:  mov    %esp,%ebp
08899121 +0x003:  push   %esi
08899122 +0x004:  push   %ebx
08899123 +0x005:  sub    $0x10,%esp
08899126 +0x008:  mov    0x8(%ebp),%eax
08899129 +0x00b:  mov    %eax,(%esp)
0889912c +0x00e:  call   0848f464 <_GLOBAL__I__ZN15exchange_server22AcquireCharacterMemoryEi+0x142>  ; global constructors keyed to exchange_server::AcquireCharacterMemory(int)+0x142
08899131 +0x013:  mov    0x8(%ebp),%eax
08899134 +0x016:  add    $0x24,%eax
08899137 +0x019:  mov    %eax,(%esp)
0889913a +0x01c:  call   0889ba78 <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0x141>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0x141
0889913f +0x021:  mov    0x8(%ebp),%eax
08899142 +0x024:  add    $0x3c,%eax
08899145 +0x027:  mov    %eax,(%esp)
08899148 +0x02a:  call   0889ba8c <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0x155>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0x155
0889914d +0x02f:  mov    0x8(%ebp),%eax
08899150 +0x032:  add    $0x54,%eax
08899153 +0x035:  mov    %eax,(%esp)
08899156 +0x038:  call   0889ba8c <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0x155>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0x155
0889915b +0x03d:  mov    0x8(%ebp),%eax
0889915e +0x040:  add    $0x6c,%eax
08899161 +0x043:  mov    %eax,(%esp)
08899164 +0x046:  call   0889ba8c <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0x155>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0x155
08899169 +0x04b:  mov    0x8(%ebp),%eax
0889916c +0x04e:  add    $0x84,%eax
08899171 +0x053:  mov    %eax,(%esp)
08899174 +0x056:  call   0889baa0 <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0x169>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0x169
08899179 +0x05b:  mov    0x8(%ebp),%eax
0889917c +0x05e:  add    $0x9c,%eax
08899181 +0x063:  mov    %eax,(%esp)
08899184 +0x066:  call   0889baa0 <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0x169>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0x169
08899189 +0x06b:  mov    0x8(%ebp),%eax
0889918c +0x06e:  add    $0xb4,%eax
08899191 +0x073:  mov    %eax,(%esp)
08899194 +0x076:  call   081356ac <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x12b3>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x12b3
08899199 +0x07b:  mov    0x8(%ebp),%eax
0889919c +0x07e:  movb   $0x0,0xcc(%eax)
088991a3 +0x085:  add    $0x10,%esp
088991a6 +0x088:  pop    %ebx
088991a7 +0x089:  pop    %esi
088991a8 +0x08a:  pop    %ebp
088991a9 +0x08b:  ret
088991aa +0x08c:  mov    %edx,%ebx
088991ac +0x08e:  mov    %eax,%esi
088991ae +0x090:  mov    0x8(%ebp),%eax
088991b1 +0x093:  add    $0x9c,%eax
088991b6 +0x098:  mov    %eax,(%esp)
088991b9 +0x09b:  call   0813450a <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x111>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x111
088991be +0x0a0:  mov    %esi,%eax
088991c0 +0x0a2:  mov    %ebx,%edx
088991c2 +0x0a4:  jmp    088991c4 <+0xa6>
088991c4 +0x0a6:  mov    %edx,%ebx
088991c6 +0x0a8:  mov    %eax,%esi
088991c8 +0x0aa:  mov    0x8(%ebp),%eax
088991cb +0x0ad:  add    $0x84,%eax
088991d0 +0x0b2:  mov    %eax,(%esp)
088991d3 +0x0b5:  call   0813450a <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x111>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x111
088991d8 +0x0ba:  mov    %esi,%eax
088991da +0x0bc:  mov    %ebx,%edx
088991dc +0x0be:  jmp    088991de <+0xc0>
088991de +0x0c0:  mov    %edx,%ebx
088991e0 +0x0c2:  mov    %eax,%esi
088991e2 +0x0c4:  mov    0x8(%ebp),%eax
088991e5 +0x0c7:  add    $0x6c,%eax
088991e8 +0x0ca:  mov    %eax,(%esp)
088991eb +0x0cd:  call   081344f6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0xfd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0xfd
088991f0 +0x0d2:  mov    %esi,%eax
088991f2 +0x0d4:  mov    %ebx,%edx
088991f4 +0x0d6:  jmp    088991f6 <+0xd8>
088991f6 +0x0d8:  mov    %edx,%ebx
088991f8 +0x0da:  mov    %eax,%esi
088991fa +0x0dc:  mov    0x8(%ebp),%eax
088991fd +0x0df:  add    $0x54,%eax
08899200 +0x0e2:  mov    %eax,(%esp)
08899203 +0x0e5:  call   081344f6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0xfd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0xfd
08899208 +0x0ea:  mov    %esi,%eax
0889920a +0x0ec:  mov    %ebx,%edx
0889920c +0x0ee:  jmp    0889920e <+0xf0>
0889920e +0x0f0:  mov    %edx,%ebx
08899210 +0x0f2:  mov    %eax,%esi
08899212 +0x0f4:  mov    0x8(%ebp),%eax
08899215 +0x0f7:  add    $0x3c,%eax
08899218 +0x0fa:  mov    %eax,(%esp)
0889921b +0x0fd:  call   081344f6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0xfd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0xfd
08899220 +0x102:  mov    %esi,%eax
08899222 +0x104:  mov    %ebx,%edx
08899224 +0x106:  jmp    08899226 <+0x108>
08899226 +0x108:  mov    %edx,%ebx
08899228 +0x10a:  mov    %eax,%esi
0889922a +0x10c:  mov    0x8(%ebp),%eax
0889922d +0x10f:  add    $0x24,%eax
08899230 +0x112:  mov    %eax,(%esp)
08899233 +0x115:  call   081344e2 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0xe9>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0xe9
08899238 +0x11a:  mov    %esi,%eax
0889923a +0x11c:  mov    %ebx,%edx
0889923c +0x11e:  mov    %eax,(%esp)
0889923f +0x121:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// advancealtar::AdvanceAltarData::AdvanceAltarData @ 0x889911e

/* advancealtar::AdvanceAltarData::AdvanceAltarData() */

void __thiscall advancealtar::AdvanceAltarData::AdvanceAltarData(AdvanceAltarData *this)

{
  _RidableBase::_RidableBase((_RidableBase *)this);
  std::
  map<int,advancealtar::_Stage,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Stage>>>
  ::map((map<int,advancealtar::_Stage,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Stage>>>
         *)(this + 0x24));
                    /* try { // try from 08899148 to 0889914c has its CatchHandler @ 08899226 */
  std::
  map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
  ::map((map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
         *)(this + 0x3c));
                    /* try { // try from 08899156 to 0889915a has its CatchHandler @ 0889920e */
  std::
  map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
  ::map((map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
         *)(this + 0x54));
                    /* try { // try from 08899164 to 08899168 has its CatchHandler @ 088991f6 */
  std::
  map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
  ::map((map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
         *)(this + 0x6c));
                    /* try { // try from 08899174 to 08899178 has its CatchHandler @ 088991de */
  std::
  map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
  ::map((map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
         *)(this + 0x84));
                    /* try { // try from 08899184 to 08899188 has its CatchHandler @ 088991c4 */
  std::
  map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
  ::map((map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
         *)(this + 0x9c));
                    /* try { // try from 08899194 to 08899198 has its CatchHandler @ 088991aa */
  std::
  map<int,advancealtar::_Reward,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Reward>>>
  ::map((map<int,advancealtar::_Reward,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Reward>>>
         *)(this + 0xb4));
  this[0xcc] = (AdvanceAltarData)0x0;
  return;
}
```
