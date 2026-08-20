# setDefaultSlot

`_ZN12advancealtar25CharacAdvanceAltarManager14setDefaultSlotEv`

`advancealtar::CharacAdvanceAltarManager::setDefaultSlot()`

| 类 | 地址 |
|---|---|
| `advancealtar::CharacAdvanceAltarManager` | `0x08132f8e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08132f8e  _ZN12advancealtar25CharacAdvanceAltarManager14setDefaultSlotEv
#           advancealtar::CharacAdvanceAltarManager::setDefaultSlot()
# range [0x08132f8e, 0x081331d3]
08132f8e +0x000:  push   %ebp
08132f8f +0x001:  mov    %esp,%ebp
08132f91 +0x003:  sub    $0x98,%esp
08132f97 +0x009:  mov    0x8(%ebp),%eax
08132f9a +0x00c:  mov    (%eax),%eax
08132f9c +0x00e:  test   %eax,%eax
08132f9e +0x010:  je     081331d0 <+0x242>
08132fa4 +0x016:  movl   $0x0,-0x10(%ebp)
08132fab +0x01d:  jmp    081330aa <+0x11c>
08132fb0 +0x022:  mov    -0x10(%ebp),%eax
08132fb3 +0x025:  mov    %al,-0x59(%ebp)
08132fb6 +0x028:  mov    0x8(%ebp),%eax
08132fb9 +0x02b:  mov    (%eax),%eax
08132fbb +0x02d:  lea    0x84(%eax),%ecx
08132fc1 +0x033:  lea    -0x60(%ebp),%eax
08132fc4 +0x036:  lea    -0x59(%ebp),%edx
08132fc7 +0x039:  mov    %edx,0x8(%esp)
08132fcb +0x03d:  mov    %ecx,0x4(%esp)
08132fcf +0x041:  mov    %eax,(%esp)
08132fd2 +0x044:  call   0813650e <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x2115>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x2115
08132fd7 +0x049:  sub    $0x4,%esp
08132fda +0x04c:  mov    0x8(%ebp),%eax
08132fdd +0x04f:  mov    (%eax),%eax
08132fdf +0x051:  lea    0x84(%eax),%edx
08132fe5 +0x057:  lea    -0x58(%ebp),%eax
08132fe8 +0x05a:  mov    %edx,0x4(%esp)
08132fec +0x05e:  mov    %eax,(%esp)
08132fef +0x061:  call   081361e8 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1def>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1def
08132ff4 +0x066:  sub    $0x4,%esp
08132ff7 +0x069:  lea    -0x58(%ebp),%eax
08132ffa +0x06c:  mov    %eax,0x4(%esp)
08132ffe +0x070:  lea    -0x60(%ebp),%eax
08133001 +0x073:  mov    %eax,(%esp)
08133004 +0x076:  call   0813626e <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1e75>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1e75
08133009 +0x07b:  test   %al,%al
0813300b +0x07d:  je     08133094 <+0x106>
08133011 +0x083:  lea    -0x6a(%ebp),%eax
08133014 +0x086:  mov    %eax,(%esp)
08133017 +0x089:  call   0813449a <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0xa1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0xa1
0813301c +0x08e:  mov    -0x10(%ebp),%eax
0813301f +0x091:  movzbl &_ZN12advancealtarL15kUnitSlotNoLockE(%eax),%eax
08133026 +0x098:  mov    %al,-0x6a(%ebp)
08133029 +0x09b:  movl   $0x1,-0x69(%ebp)
08133030 +0x0a2:  movl   $0x0,-0x64(%ebp)
08133037 +0x0a9:  mov    -0x10(%ebp),%eax
0813303a +0x0ac:  mov    %al,-0x65(%ebp)
0813303d +0x0af:  lea    -0x40(%ebp),%eax
08133040 +0x0b2:  lea    -0x6a(%ebp),%edx
08133043 +0x0b5:  mov    %edx,0x8(%esp)
08133047 +0x0b9:  lea    -0x6a(%ebp),%edx
0813304a +0x0bc:  add    $0x5,%edx
0813304d +0x0bf:  mov    %edx,0x4(%esp)
08133051 +0x0c3:  mov    %eax,(%esp)
08133054 +0x0c6:  call   081365c1 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x21c8>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x21c8
08133059 +0x0cb:  sub    $0x4,%esp
0813305c +0x0ce:  lea    -0x40(%ebp),%eax
0813305f +0x0d1:  mov    %eax,0x4(%esp)
08133063 +0x0d5:  lea    -0x4b(%ebp),%eax
08133066 +0x0d8:  mov    %eax,(%esp)
08133069 +0x0db:  call   08136600 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x2207>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x2207
0813306e +0x0e0:  mov    0x8(%ebp),%eax
08133071 +0x0e3:  mov    (%eax),%eax
08133073 +0x0e5:  lea    0x84(%eax),%ecx
08133079 +0x0eb:  lea    -0x54(%ebp),%eax
0813307c +0x0ee:  lea    -0x4b(%ebp),%edx
0813307f +0x0f1:  mov    %edx,0x8(%esp)
08133083 +0x0f5:  mov    %ecx,0x4(%esp)
08133087 +0x0f9:  mov    %eax,(%esp)
0813308a +0x0fc:  call   08136640 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x2247>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x2247
0813308f +0x101:  sub    $0x4,%esp
08133092 +0x104:  jmp    081330a6 <+0x118>
08133094 +0x106:  lea    -0x60(%ebp),%eax
08133097 +0x109:  mov    %eax,(%esp)
0813309a +0x10c:  call   08136260 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1e67>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1e67
0813309f +0x111:  movl   $0x0,0x7(%eax)
081330a6 +0x118:  addl   $0x1,-0x10(%ebp)
081330aa +0x11c:  cmpl   $0x5,-0x10(%ebp)
081330ae +0x120:  setle  %al
081330b1 +0x123:  test   %al,%al
081330b3 +0x125:  jne    08132fb0 <+0x22>
081330b9 +0x12b:  movl   $0x0,-0xc(%ebp)
081330c0 +0x132:  jmp    081331bf <+0x231>
081330c5 +0x137:  mov    -0xc(%ebp),%eax
081330c8 +0x13a:  mov    %al,-0x35(%ebp)
081330cb +0x13d:  mov    0x8(%ebp),%eax
081330ce +0x140:  mov    (%eax),%eax
081330d0 +0x142:  lea    0x9c(%eax),%ecx
081330d6 +0x148:  lea    -0x70(%ebp),%eax
081330d9 +0x14b:  lea    -0x35(%ebp),%edx
081330dc +0x14e:  mov    %edx,0x8(%esp)
081330e0 +0x152:  mov    %ecx,0x4(%esp)
081330e4 +0x156:  mov    %eax,(%esp)
081330e7 +0x159:  call   0813650e <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x2115>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x2115
081330ec +0x15e:  sub    $0x4,%esp
081330ef +0x161:  mov    0x8(%ebp),%eax
081330f2 +0x164:  mov    (%eax),%eax
081330f4 +0x166:  lea    0x9c(%eax),%edx
081330fa +0x16c:  lea    -0x34(%ebp),%eax
081330fd +0x16f:  mov    %edx,0x4(%esp)
08133101 +0x173:  mov    %eax,(%esp)
08133104 +0x176:  call   081361e8 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1def>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1def
08133109 +0x17b:  sub    $0x4,%esp
0813310c +0x17e:  lea    -0x34(%ebp),%eax
0813310f +0x181:  mov    %eax,0x4(%esp)
08133113 +0x185:  lea    -0x70(%ebp),%eax
08133116 +0x188:  mov    %eax,(%esp)
08133119 +0x18b:  call   0813626e <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1e75>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1e75
0813311e +0x190:  test   %al,%al
08133120 +0x192:  je     081331a9 <+0x21b>
08133126 +0x198:  lea    -0x7a(%ebp),%eax
08133129 +0x19b:  mov    %eax,(%esp)
0813312c +0x19e:  call   0813449a <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0xa1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0xa1
08133131 +0x1a3:  mov    -0xc(%ebp),%eax
08133134 +0x1a6:  movzbl &_ZN12advancealtarL16kSkillSlotNoLockE(%eax),%eax
0813313b +0x1ad:  mov    %al,-0x7a(%ebp)
0813313e +0x1b0:  movl   $0x2,-0x79(%ebp)
08133145 +0x1b7:  movl   $0x0,-0x74(%ebp)
0813314c +0x1be:  mov    -0xc(%ebp),%eax
0813314f +0x1c1:  mov    %al,-0x75(%ebp)
08133152 +0x1c4:  lea    -0x1b(%ebp),%eax
08133155 +0x1c7:  lea    -0x7a(%ebp),%edx
08133158 +0x1ca:  mov    %edx,0x8(%esp)
0813315c +0x1ce:  lea    -0x7a(%ebp),%edx
0813315f +0x1d1:  add    $0x5,%edx
08133162 +0x1d4:  mov    %edx,0x4(%esp)
08133166 +0x1d8:  mov    %eax,(%esp)
08133169 +0x1db:  call   081365c1 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x21c8>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x21c8
0813316e +0x1e0:  sub    $0x4,%esp
08133171 +0x1e3:  lea    -0x1b(%ebp),%eax
08133174 +0x1e6:  mov    %eax,0x4(%esp)
08133178 +0x1ea:  lea    -0x26(%ebp),%eax
0813317b +0x1ed:  mov    %eax,(%esp)
0813317e +0x1f0:  call   08136600 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x2207>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x2207
08133183 +0x1f5:  mov    0x8(%ebp),%eax
08133186 +0x1f8:  mov    (%eax),%eax
08133188 +0x1fa:  lea    0x9c(%eax),%ecx
0813318e +0x200:  lea    -0x30(%ebp),%eax
08133191 +0x203:  lea    -0x26(%ebp),%edx
08133194 +0x206:  mov    %edx,0x8(%esp)
08133198 +0x20a:  mov    %ecx,0x4(%esp)
0813319c +0x20e:  mov    %eax,(%esp)
0813319f +0x211:  call   08136640 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x2247>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x2247
081331a4 +0x216:  sub    $0x4,%esp
081331a7 +0x219:  jmp    081331bb <+0x22d>
081331a9 +0x21b:  lea    -0x70(%ebp),%eax
081331ac +0x21e:  mov    %eax,(%esp)
081331af +0x221:  call   08136260 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1e67>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1e67
081331b4 +0x226:  movl   $0x0,0x7(%eax)
081331bb +0x22d:  addl   $0x1,-0xc(%ebp)
081331bf +0x231:  cmpl   $0x5,-0xc(%ebp)
081331c3 +0x235:  setle  %al
081331c6 +0x238:  test   %al,%al
081331c8 +0x23a:  jne    081330c5 <+0x137>
081331ce +0x240:  jmp    081331d1 <+0x243>
081331d0 +0x242:  nop
081331d1 +0x243:  leave
081331d2 +0x244:  ret
081331d3 +0x245:  nop
```

## 反编译 C

```c
// advancealtar::CharacAdvanceAltarManager::setDefaultSlot @ 0x8132f8e

/* advancealtar::CharacAdvanceAltarManager::setDefaultSlot() */

void __thiscall
advancealtar::CharacAdvanceAltarManager::setDefaultSlot(CharacAdvanceAltarManager *this)

{
  char cVar1;
  int iVar2;
  _Slot local_7e;
  undefined4 local_7d;
  _Slot local_79;
  undefined4 local_78;
  _Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>> local_74 [6];
  _Slot local_6e;
  undefined4 local_6d;
  _Slot local_69;
  undefined4 local_68;
  _Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>> local_64 [7];
  undefined1 local_5d;
  map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
  local_5c [4];
  pair local_58 [9];
  pair<unsigned_char_const,advancealtar::_Slot> local_4f [11];
  uchar local_44 [11];
  undefined1 local_39;
  map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
  local_38 [4];
  pair local_34 [10];
  pair<unsigned_char_const,advancealtar::_Slot> local_2a [11];
  uchar local_1f [11];
  int local_14;
  int local_10;
  
  if (*(int *)this != 0) {
    for (local_14 = 0; local_14 < 6; local_14 = local_14 + 1) {
      local_5d = (undefined1)local_14;
      std::
      map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
      ::find((uchar *)local_64);
      std::
      map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
      ::end(local_5c);
      cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::operator==
                        (local_64,(_Rb_tree_iterator *)local_5c);
      if (cVar1 == '\0') {
        iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::
                operator->(local_64);
        *(undefined4 *)(iVar2 + 7) = 0;
      }
      else {
        _Slot::_Slot(&local_6e);
        local_6e = *(_Slot *)((int)&advancealtar::kUnitSlotNoLock + local_14);
        local_6d = 1;
        local_68 = 0;
        local_69 = SUB41(local_14,0);
        std::make_pair<unsigned_char&,advancealtar::_Slot&>(local_44,&local_69);
        std::pair<unsigned_char_const,advancealtar::_Slot>::pair<unsigned_char,advancealtar::_Slot>
                  (local_4f,local_44);
        std::
        map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
        ::insert(local_58);
      }
    }
    for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
      local_39 = (undefined1)local_10;
      std::
      map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
      ::find((uchar *)local_74);
      std::
      map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
      ::end(local_38);
      cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::operator==
                        (local_74,(_Rb_tree_iterator *)local_38);
      if (cVar1 == '\0') {
        iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::
                operator->(local_74);
        *(undefined4 *)(iVar2 + 7) = 0;
      }
      else {
        _Slot::_Slot(&local_7e);
        local_7e = *(_Slot *)((int)&advancealtar::kSkillSlotNoLock + local_10);
        local_7d = 2;
        local_78 = 0;
        local_79 = SUB41(local_10,0);
        std::make_pair<unsigned_char&,advancealtar::_Slot&>(local_1f,&local_79);
        std::pair<unsigned_char_const,advancealtar::_Slot>::pair<unsigned_char,advancealtar::_Slot>
                  (local_2a,local_1f);
        std::
        map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
        ::insert(local_34);
      }
    }
  }
  return;
}
```
