# reset

`_ZN12advancealtar16AdvanceAltarData5resetEv`

`advancealtar::AdvanceAltarData::reset()`

| 类 | 地址 |
|---|---|
| `advancealtar::AdvanceAltarData` | `0x08899244` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08899244  _ZN12advancealtar16AdvanceAltarData5resetEv
#           advancealtar::AdvanceAltarData::reset()
# range [0x08899244, 0x088992d9]
08899244 +0x00:  push   %ebp
08899245 +0x01:  mov    %esp,%ebp
08899247 +0x03:  sub    $0x18,%esp
0889924a +0x06:  mov    0x8(%ebp),%eax
0889924d +0x09:  movl   $0x21,0x8(%esp)
08899255 +0x11:  movl   $0x0,0x4(%esp)
0889925d +0x19:  mov    %eax,(%esp)
08899260 +0x1c:  call   0807dcc0 <_init+0x5b8>
08899265 +0x21:  mov    0x8(%ebp),%eax
08899268 +0x24:  movb   $0x0,0xcc(%eax)
0889926f +0x2b:  mov    0x8(%ebp),%eax
08899272 +0x2e:  add    $0x24,%eax
08899275 +0x31:  mov    %eax,(%esp)
08899278 +0x34:  call   0889bab4 <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0x17d>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0x17d
0889927d +0x39:  mov    0x8(%ebp),%eax
08899280 +0x3c:  add    $0x3c,%eax
08899283 +0x3f:  mov    %eax,(%esp)
08899286 +0x42:  call   0813653a <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x2141>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x2141
0889928b +0x47:  mov    0x8(%ebp),%eax
0889928e +0x4a:  add    $0x54,%eax
08899291 +0x4d:  mov    %eax,(%esp)
08899294 +0x50:  call   0813653a <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x2141>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x2141
08899299 +0x55:  mov    0x8(%ebp),%eax
0889929c +0x58:  add    $0x6c,%eax
0889929f +0x5b:  mov    %eax,(%esp)
088992a2 +0x5e:  call   0813653a <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x2141>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x2141
088992a7 +0x63:  mov    0x8(%ebp),%eax
088992aa +0x66:  add    $0x84,%eax
088992af +0x6b:  mov    %eax,(%esp)
088992b2 +0x6e:  call   0889bac8 <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0x191>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0x191
088992b7 +0x73:  mov    0x8(%ebp),%eax
088992ba +0x76:  add    $0x9c,%eax
088992bf +0x7b:  mov    %eax,(%esp)
088992c2 +0x7e:  call   0889bac8 <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0x191>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0x191
088992c7 +0x83:  mov    0x8(%ebp),%eax
088992ca +0x86:  add    $0xb4,%eax
088992cf +0x8b:  mov    %eax,(%esp)
088992d2 +0x8e:  call   0889badc <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0x1a5>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0x1a5
088992d7 +0x93:  leave
088992d8 +0x94:  ret
088992d9 +0x95:  nop
```

## 反编译 C

```c
// advancealtar::AdvanceAltarData::reset @ 0x8899244

/* advancealtar::AdvanceAltarData::reset() */

void __thiscall advancealtar::AdvanceAltarData::reset(AdvanceAltarData *this)

{
  memset(this,0,0x21);
  this[0xcc] = (AdvanceAltarData)0x0;
  std::
  map<int,advancealtar::_Stage,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Stage>>>
  ::clear((map<int,advancealtar::_Stage,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Stage>>>
           *)(this + 0x24));
  std::
  map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
  ::clear((map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
           *)(this + 0x3c));
  std::
  map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
  ::clear((map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
           *)(this + 0x54));
  std::
  map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
  ::clear((map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
           *)(this + 0x6c));
  std::
  map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
  ::clear((map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
           *)(this + 0x84));
  std::
  map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
  ::clear((map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
           *)(this + 0x9c));
  std::
  map<int,advancealtar::_Reward,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Reward>>>
  ::clear((map<int,advancealtar::_Reward,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Reward>>>
           *)(this + 0xb4));
  return;
}
```
