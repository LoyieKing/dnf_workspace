# exchangeSlot

`_ZN12advancealtar25CharacAdvanceAltarManager12exchangeSlotERN15CMDPacketStruct12_SetSlotDataES3_`

`advancealtar::CharacAdvanceAltarManager::exchangeSlot(CMDPacketStruct::_SetSlotData&, CMDPacketStruct::_SetSlotData&)`

| 类 | 地址 |
|---|---|
| `advancealtar::CharacAdvanceAltarManager` | `0x08131f0a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08131f0a  _ZN12advancealtar25CharacAdvanceAltarManager12exchangeSlotERN15CMDPacketStruct12_SetSlotDataES3_
#           advancealtar::CharacAdvanceAltarManager::exchangeSlot(CMDPacketStruct::_SetSlotData&, CMDPacketStruct::_SetSlotData&)
# range [0x08131f0a, 0x08132233]
08131f0a +0x000:  push   %ebp
08131f0b +0x001:  mov    %esp,%ebp
08131f0d +0x003:  sub    $0x48,%esp
08131f10 +0x006:  mov    0xc(%ebp),%eax
08131f13 +0x009:  mov    (%eax),%edx
08131f15 +0x00b:  mov    0x10(%ebp),%eax
08131f18 +0x00e:  mov    (%eax),%eax
08131f1a +0x010:  cmp    %eax,%edx
08131f1c +0x012:  je     08131f28 <+0x1e>
08131f1e +0x014:  mov    $0x2,%eax
08131f23 +0x019:  jmp    08132232 <+0x328>
08131f28 +0x01e:  mov    0x8(%ebp),%eax
08131f2b +0x021:  mov    (%eax),%eax
08131f2d +0x023:  mov    %eax,-0x10(%ebp)
08131f30 +0x026:  cmpl   $0x0,-0x10(%ebp)
08131f34 +0x02a:  jne    08131f40 <+0x36>
08131f36 +0x02c:  mov    $0x3,%eax
08131f3b +0x031:  jmp    08132232 <+0x328>
08131f40 +0x036:  mov    0xc(%ebp),%eax
08131f43 +0x039:  mov    (%eax),%eax
08131f45 +0x03b:  mov    %eax,0x4(%esp)
08131f49 +0x03f:  mov    -0x10(%ebp),%eax
08131f4c +0x042:  mov    %eax,(%esp)
08131f4f +0x045:  call   08899a0c <_ZN12advancealtar16AdvanceAltarData10getSlotMapENS_20AdvanceAltarSlotType1TE>  ; advancealtar::AdvanceAltarData::getSlotMap(advancealtar::AdvanceAltarSlotType::T)
08131f54 +0x04a:  mov    %eax,-0xc(%ebp)
08131f57 +0x04d:  cmpl   $0x0,-0xc(%ebp)
08131f5b +0x051:  jne    08131f67 <+0x5d>
08131f5d +0x053:  mov    $0x4,%eax
08131f62 +0x058:  jmp    08132232 <+0x328>
08131f67 +0x05d:  lea    -0x34(%ebp),%eax
08131f6a +0x060:  mov    -0xc(%ebp),%edx
08131f6d +0x063:  mov    %edx,0x4(%esp)
08131f71 +0x067:  mov    %eax,(%esp)
08131f74 +0x06a:  call   081361c2 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1dc9>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1dc9
08131f79 +0x06f:  sub    $0x4,%esp
08131f7c +0x072:  jmp    08131ff4 <+0xea>
08131f7e +0x074:  lea    -0x34(%ebp),%eax
08131f81 +0x077:  mov    %eax,(%esp)
08131f84 +0x07a:  call   08136260 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1e67>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1e67
08131f89 +0x07f:  movzbl 0x6(%eax),%edx
08131f8d +0x083:  mov    0xc(%ebp),%eax
08131f90 +0x086:  movzbl 0x4(%eax),%eax
08131f94 +0x08a:  cmp    %al,%dl
08131f96 +0x08c:  jne    08131fce <+0xc4>
08131f98 +0x08e:  lea    -0x34(%ebp),%eax
08131f9b +0x091:  mov    %eax,(%esp)
08131f9e +0x094:  call   08136260 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1e67>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1e67
08131fa3 +0x099:  mov    0x2(%eax),%edx
08131fa6 +0x09c:  mov    0xc(%ebp),%eax
08131fa9 +0x09f:  mov    (%eax),%eax
08131fab +0x0a1:  cmp    %eax,%edx
08131fad +0x0a3:  jne    08131fce <+0xc4>
08131faf +0x0a5:  lea    -0x34(%ebp),%eax
08131fb2 +0x0a8:  mov    %eax,(%esp)
08131fb5 +0x0ab:  call   08136260 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1e67>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1e67
08131fba +0x0b0:  mov    0x7(%eax),%edx
08131fbd +0x0b3:  mov    0xc(%ebp),%eax
08131fc0 +0x0b6:  mov    0x8(%eax),%eax
08131fc3 +0x0b9:  cmp    %eax,%edx
08131fc5 +0x0bb:  jne    08131fce <+0xc4>
08131fc7 +0x0bd:  mov    $0x1,%eax
08131fcc +0x0c2:  jmp    08131fd3 <+0xc9>
08131fce +0x0c4:  mov    $0x0,%eax
08131fd3 +0x0c9:  test   %al,%al
08131fd5 +0x0cb:  jne    08132025 <+0x11b>
08131fd7 +0x0cd:  lea    -0x2c(%ebp),%eax
08131fda +0x0d0:  movl   $0x0,0x8(%esp)
08131fe2 +0x0d8:  lea    -0x34(%ebp),%edx
08131fe5 +0x0db:  mov    %edx,0x4(%esp)
08131fe9 +0x0df:  mov    %eax,(%esp)
08131fec +0x0e2:  call   08136222 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1e29>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1e29
08131ff1 +0x0e7:  sub    $0x4,%esp
08131ff4 +0x0ea:  lea    -0x30(%ebp),%eax
08131ff7 +0x0ed:  mov    -0xc(%ebp),%edx
08131ffa +0x0f0:  mov    %edx,0x4(%esp)
08131ffe +0x0f4:  mov    %eax,(%esp)
08132001 +0x0f7:  call   081361e8 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1def>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1def
08132006 +0x0fc:  sub    $0x4,%esp
08132009 +0x0ff:  lea    -0x30(%ebp),%eax
0813200c +0x102:  mov    %eax,0x4(%esp)
08132010 +0x106:  lea    -0x34(%ebp),%eax
08132013 +0x109:  mov    %eax,(%esp)
08132016 +0x10c:  call   0813620e <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1e15>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1e15
0813201b +0x111:  test   %al,%al
0813201d +0x113:  jne    08131f7e <+0x74>
08132023 +0x119:  jmp    08132026 <+0x11c>
08132025 +0x11b:  nop
08132026 +0x11c:  lea    -0x38(%ebp),%eax
08132029 +0x11f:  mov    -0xc(%ebp),%edx
0813202c +0x122:  mov    %edx,0x4(%esp)
08132030 +0x126:  mov    %eax,(%esp)
08132033 +0x129:  call   081361c2 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1dc9>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1dc9
08132038 +0x12e:  sub    $0x4,%esp
0813203b +0x131:  jmp    081320b3 <+0x1a9>
0813203d +0x133:  lea    -0x38(%ebp),%eax
08132040 +0x136:  mov    %eax,(%esp)
08132043 +0x139:  call   08136260 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1e67>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1e67
08132048 +0x13e:  movzbl 0x6(%eax),%edx
0813204c +0x142:  mov    0x10(%ebp),%eax
0813204f +0x145:  movzbl 0x4(%eax),%eax
08132053 +0x149:  cmp    %al,%dl
08132055 +0x14b:  jne    0813208d <+0x183>
08132057 +0x14d:  lea    -0x38(%ebp),%eax
0813205a +0x150:  mov    %eax,(%esp)
0813205d +0x153:  call   08136260 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1e67>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1e67
08132062 +0x158:  mov    0x2(%eax),%edx
08132065 +0x15b:  mov    0x10(%ebp),%eax
08132068 +0x15e:  mov    (%eax),%eax
0813206a +0x160:  cmp    %eax,%edx
0813206c +0x162:  jne    0813208d <+0x183>
0813206e +0x164:  lea    -0x38(%ebp),%eax
08132071 +0x167:  mov    %eax,(%esp)
08132074 +0x16a:  call   08136260 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1e67>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1e67
08132079 +0x16f:  mov    0x7(%eax),%edx
0813207c +0x172:  mov    0x10(%ebp),%eax
0813207f +0x175:  mov    0x8(%eax),%eax
08132082 +0x178:  cmp    %eax,%edx
08132084 +0x17a:  jne    0813208d <+0x183>
08132086 +0x17c:  mov    $0x1,%eax
0813208b +0x181:  jmp    08132092 <+0x188>
0813208d +0x183:  mov    $0x0,%eax
08132092 +0x188:  test   %al,%al
08132094 +0x18a:  jne    081320e4 <+0x1da>
08132096 +0x18c:  lea    -0x24(%ebp),%eax
08132099 +0x18f:  movl   $0x0,0x8(%esp)
081320a1 +0x197:  lea    -0x38(%ebp),%edx
081320a4 +0x19a:  mov    %edx,0x4(%esp)
081320a8 +0x19e:  mov    %eax,(%esp)
081320ab +0x1a1:  call   08136222 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1e29>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1e29
081320b0 +0x1a6:  sub    $0x4,%esp
081320b3 +0x1a9:  lea    -0x28(%ebp),%eax
081320b6 +0x1ac:  mov    -0xc(%ebp),%edx
081320b9 +0x1af:  mov    %edx,0x4(%esp)
081320bd +0x1b3:  mov    %eax,(%esp)
081320c0 +0x1b6:  call   081361e8 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1def>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1def
081320c5 +0x1bb:  sub    $0x4,%esp
081320c8 +0x1be:  lea    -0x28(%ebp),%eax
081320cb +0x1c1:  mov    %eax,0x4(%esp)
081320cf +0x1c5:  lea    -0x38(%ebp),%eax
081320d2 +0x1c8:  mov    %eax,(%esp)
081320d5 +0x1cb:  call   0813620e <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1e15>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1e15
081320da +0x1d0:  test   %al,%al
081320dc +0x1d2:  jne    0813203d <+0x133>
081320e2 +0x1d8:  jmp    081320e5 <+0x1db>
081320e4 +0x1da:  nop
081320e5 +0x1db:  lea    -0x20(%ebp),%eax
081320e8 +0x1de:  mov    -0xc(%ebp),%edx
081320eb +0x1e1:  mov    %edx,0x4(%esp)
081320ef +0x1e5:  mov    %eax,(%esp)
081320f2 +0x1e8:  call   081361e8 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1def>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1def
081320f7 +0x1ed:  sub    $0x4,%esp
081320fa +0x1f0:  lea    -0x20(%ebp),%eax
081320fd +0x1f3:  mov    %eax,0x4(%esp)
08132101 +0x1f7:  lea    -0x34(%ebp),%eax
08132104 +0x1fa:  mov    %eax,(%esp)
08132107 +0x1fd:  call   0813626e <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1e75>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1e75
0813210c +0x202:  test   %al,%al
0813210e +0x204:  jne    0813213b <+0x231>
08132110 +0x206:  lea    -0x1c(%ebp),%eax
08132113 +0x209:  mov    -0xc(%ebp),%edx
08132116 +0x20c:  mov    %edx,0x4(%esp)
0813211a +0x210:  mov    %eax,(%esp)
0813211d +0x213:  call   081361e8 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1def>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1def
08132122 +0x218:  sub    $0x4,%esp
08132125 +0x21b:  lea    -0x1c(%ebp),%eax
08132128 +0x21e:  mov    %eax,0x4(%esp)
0813212c +0x222:  lea    -0x38(%ebp),%eax
0813212f +0x225:  mov    %eax,(%esp)
08132132 +0x228:  call   0813626e <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1e75>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1e75
08132137 +0x22d:  test   %al,%al
08132139 +0x22f:  je     08132142 <+0x238>
0813213b +0x231:  mov    $0x1,%eax
08132140 +0x236:  jmp    08132147 <+0x23d>
08132142 +0x238:  mov    $0x0,%eax
08132147 +0x23d:  test   %al,%al
08132149 +0x23f:  je     08132155 <+0x24b>
0813214b +0x241:  mov    $0x3,%eax
08132150 +0x246:  jmp    08132232 <+0x328>
08132155 +0x24b:  lea    -0x34(%ebp),%eax
08132158 +0x24e:  mov    %eax,(%esp)
0813215b +0x251:  call   08136260 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1e67>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1e67
08132160 +0x256:  movzbl 0x1(%eax),%eax
08132164 +0x25a:  test   %al,%al
08132166 +0x25c:  jne    0813217b <+0x271>
08132168 +0x25e:  lea    -0x38(%ebp),%eax
0813216b +0x261:  mov    %eax,(%esp)
0813216e +0x264:  call   08136260 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1e67>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1e67
08132173 +0x269:  movzbl 0x1(%eax),%eax
08132177 +0x26d:  test   %al,%al
08132179 +0x26f:  je     08132182 <+0x278>
0813217b +0x271:  mov    $0x1,%eax
08132180 +0x276:  jmp    08132187 <+0x27d>
08132182 +0x278:  mov    $0x0,%eax
08132187 +0x27d:  test   %al,%al
08132189 +0x27f:  je     08132195 <+0x28b>
0813218b +0x281:  mov    $0x3,%eax
08132190 +0x286:  jmp    08132232 <+0x328>
08132195 +0x28b:  lea    -0x18(%ebp),%eax
08132198 +0x28e:  mov    -0xc(%ebp),%edx
0813219b +0x291:  mov    %edx,0x4(%esp)
0813219f +0x295:  mov    %eax,(%esp)
081321a2 +0x298:  call   081361e8 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1def>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1def
081321a7 +0x29d:  sub    $0x4,%esp
081321aa +0x2a0:  lea    -0x18(%ebp),%eax
081321ad +0x2a3:  mov    %eax,0x4(%esp)
081321b1 +0x2a7:  lea    -0x34(%ebp),%eax
081321b4 +0x2aa:  mov    %eax,(%esp)
081321b7 +0x2ad:  call   0813620e <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1e15>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1e15
081321bc +0x2b2:  test   %al,%al
081321be +0x2b4:  je     081321f2 <+0x2e8>
081321c0 +0x2b6:  lea    -0x14(%ebp),%eax
081321c3 +0x2b9:  mov    -0xc(%ebp),%edx
081321c6 +0x2bc:  mov    %edx,0x4(%esp)
081321ca +0x2c0:  mov    %eax,(%esp)
081321cd +0x2c3:  call   081361e8 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1def>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1def
081321d2 +0x2c8:  sub    $0x4,%esp
081321d5 +0x2cb:  lea    -0x14(%ebp),%eax
081321d8 +0x2ce:  mov    %eax,0x4(%esp)
081321dc +0x2d2:  lea    -0x38(%ebp),%eax
081321df +0x2d5:  mov    %eax,(%esp)
081321e2 +0x2d8:  call   0813620e <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1e15>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1e15
081321e7 +0x2dd:  test   %al,%al
081321e9 +0x2df:  je     081321f2 <+0x2e8>
081321eb +0x2e1:  mov    $0x1,%eax
081321f0 +0x2e6:  jmp    081321f7 <+0x2ed>
081321f2 +0x2e8:  mov    $0x0,%eax
081321f7 +0x2ed:  test   %al,%al
081321f9 +0x2ef:  je     08132223 <+0x319>
081321fb +0x2f1:  lea    -0x34(%ebp),%eax
081321fe +0x2f4:  mov    %eax,(%esp)
08132201 +0x2f7:  call   08136260 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1e67>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1e67
08132206 +0x2fc:  mov    0x10(%ebp),%edx
08132209 +0x2ff:  mov    0x8(%edx),%edx
0813220c +0x302:  mov    %edx,0x7(%eax)
0813220f +0x305:  lea    -0x38(%ebp),%eax
08132212 +0x308:  mov    %eax,(%esp)
08132215 +0x30b:  call   08136260 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1e67>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1e67
0813221a +0x310:  mov    0xc(%ebp),%edx
0813221d +0x313:  mov    0x8(%edx),%edx
08132220 +0x316:  mov    %edx,0x7(%eax)
08132223 +0x319:  mov    -0x10(%ebp),%eax
08132226 +0x31c:  movb   $0x1,0xcc(%eax)
0813222d +0x323:  mov    $0x0,%eax
08132232 +0x328:  leave
08132233 +0x329:  ret
```

## 反编译 C

```c
// advancealtar::CharacAdvanceAltarManager::exchangeSlot @ 0x8131f0a

/* advancealtar::CharacAdvanceAltarManager::exchangeSlot(CMDPacketStruct::_SetSlotData&,
   CMDPacketStruct::_SetSlotData&) */

undefined4 __thiscall
advancealtar::CharacAdvanceAltarManager::exchangeSlot
          (CharacAdvanceAltarManager *this,_SetSlotData *param_1,_SetSlotData *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
  local_3c [4];
  map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
  local_38 [4];
  map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
  local_34 [4];
  _Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>> local_30 [4];
  map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
  local_2c [4];
  _Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>> local_28 [4];
  map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
  local_24 [4];
  map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
  local_20 [4];
  map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
  local_1c [4];
  map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
  local_18 [4];
  AdvanceAltarData *local_14;
  int local_10;
  
  if (*(int *)param_1 != *(int *)param_2) {
    return 2;
  }
  local_14 = *(AdvanceAltarData **)this;
  if (local_14 == (AdvanceAltarData *)0x0) {
    return 3;
  }
  local_10 = AdvanceAltarData::getSlotMap(local_14,*(undefined4 *)param_1);
  if (local_10 == 0) {
    return 4;
  }
  std::
  map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
  ::begin(local_38);
  while( true ) {
    std::
    map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
    ::end(local_34);
    cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>> *)
                       local_38,(_Rb_tree_iterator *)local_34);
    if (cVar2 == '\0') break;
    iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>> *)
                       local_38);
    if (((*(_SetSlotData *)(iVar3 + 6) == param_1[4]) &&
        (iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::
                 operator->((_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>> *
                            )local_38), *(int *)(iVar3 + 2) == *(int *)param_1)) &&
       (iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::
                operator->((_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>> *)
                           local_38), *(int *)(iVar3 + 7) == *(int *)(param_1 + 8))) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) break;
    std::_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::operator++
              (local_30,(int)local_38);
  }
  std::
  map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
  ::begin(local_3c);
  while( true ) {
    std::
    map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
    ::end(local_2c);
    cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>> *)
                       local_3c,(_Rb_tree_iterator *)local_2c);
    if (cVar2 == '\0') break;
    iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>> *)
                       local_3c);
    if (((*(_SetSlotData *)(iVar3 + 6) == param_2[4]) &&
        (iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::
                 operator->((_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>> *
                            )local_3c), *(int *)(iVar3 + 2) == *(int *)param_2)) &&
       (iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::
                operator->((_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>> *)
                           local_3c), *(int *)(iVar3 + 7) == *(int *)(param_2 + 8))) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) break;
    std::_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::operator++
              (local_28,(int)local_3c);
  }
  std::
  map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
  ::end(local_24);
  cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::operator==
                    ((_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>> *)
                     local_38,(_Rb_tree_iterator *)local_24);
  if (cVar2 == '\0') {
    std::
    map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
    ::end(local_20);
    cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::operator==
                      ((_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>> *)
                       local_3c,(_Rb_tree_iterator *)local_20);
    if (cVar2 != '\0') goto LAB_0813213b;
    bVar1 = false;
  }
  else {
LAB_0813213b:
    bVar1 = true;
  }
  if (bVar1) {
    return 3;
  }
  iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::operator->
                    ((_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>> *)
                     local_38);
  if ((*(char *)(iVar3 + 1) == '\0') &&
     (iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>> *)
                         local_3c), *(char *)(iVar3 + 1) == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    return 3;
  }
  std::
  map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
  ::end(local_1c);
  cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::operator!=
                    ((_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>> *)
                     local_38,(_Rb_tree_iterator *)local_1c);
  if (cVar2 != '\0') {
    std::
    map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
    ::end(local_18);
    cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>> *)
                       local_3c,(_Rb_tree_iterator *)local_18);
    if (cVar2 != '\0') {
      bVar1 = true;
      goto LAB_081321f7;
    }
  }
  bVar1 = false;
LAB_081321f7:
  if (bVar1) {
    iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>> *)
                       local_38);
    *(undefined4 *)(iVar3 + 7) = *(undefined4 *)(param_2 + 8);
    iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>> *)
                       local_3c);
    *(undefined4 *)(iVar3 + 7) = *(undefined4 *)(param_1 + 8);
  }
  local_14[0xcc] = (AdvanceAltarData)0x1;
  return 0;
}
```
