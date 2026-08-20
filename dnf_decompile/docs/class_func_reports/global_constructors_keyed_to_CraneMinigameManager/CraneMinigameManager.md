# CraneMinigameManager

`_GLOBAL__I__ZN20CraneMinigameManagerC2Ev`

`global constructors keyed to CraneMinigameManager::CraneMinigameManager()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CraneMinigameManager` | `0x080ec009` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080ec009  _GLOBAL__I__ZN20CraneMinigameManagerC2Ev
#           global constructors keyed to CraneMinigameManager::CraneMinigameManager()
# range [0x080ec009, 0x080ec28b]
080ec009 +0x000:  push   %ebp
080ec00a +0x001:  mov    %esp,%ebp
080ec00c +0x003:  sub    $0x18,%esp
080ec00f +0x006:  movl   $0xffff,0x4(%esp)
080ec017 +0x00e:  movl   $0x1,(%esp)
080ec01e +0x015:  call   080ebfc9 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
080ec023 +0x01a:  leave
080ec024 +0x01b:  ret
080ec025 +0x01c:  nop
080ec026 +0x01d:  push   %ebp
080ec027 +0x01e:  mov    %esp,%ebp
080ec029 +0x020:  sub    $0x18,%esp
080ec02c +0x023:  mov    0x8(%ebp),%eax
080ec02f +0x026:  mov    %eax,(%esp)
080ec032 +0x029:  call   080ec0a4 <+0x9b>
080ec037 +0x02e:  mov    0x8(%ebp),%eax
080ec03a +0x031:  movl   $0x0,0x18(%eax)
080ec041 +0x038:  mov    0x8(%ebp),%eax
080ec044 +0x03b:  movb   $0x0,0x1c(%eax)
080ec048 +0x03f:  mov    0x8(%ebp),%eax
080ec04b +0x042:  movl   $0x0,0x24(%eax)
080ec052 +0x049:  mov    0x8(%ebp),%eax
080ec055 +0x04c:  movl   $0x0,0x20(%eax)
080ec05c +0x053:  mov    0x8(%ebp),%eax
080ec05f +0x056:  movl   $0x0,0x28(%eax)
080ec066 +0x05d:  mov    0x8(%ebp),%eax
080ec069 +0x060:  movb   $0x0,0x2c(%eax)
080ec06d +0x064:  mov    0x8(%ebp),%eax
080ec070 +0x067:  add    $0x30,%eax
080ec073 +0x06a:  mov    %eax,(%esp)
080ec076 +0x06d:  call   08708dd0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x29e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x29e0
080ec07b +0x072:  mov    0x8(%ebp),%eax
080ec07e +0x075:  add    $0x34,%eax
080ec081 +0x078:  mov    %eax,(%esp)
080ec084 +0x07b:  call   08708dd0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x29e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x29e0
080ec089 +0x080:  leave
080ec08a +0x081:  ret
080ec08b +0x082:  nop
080ec08c +0x083:  push   %ebp
080ec08d +0x084:  mov    %esp,%ebp
080ec08f +0x086:  mov    0x8(%ebp),%eax
080ec092 +0x089:  mov    0xc(%ebp),%edx
080ec095 +0x08c:  mov    %edx,0x20(%eax)
080ec098 +0x08f:  mov    0x8(%ebp),%eax
080ec09b +0x092:  mov    0x10(%ebp),%edx
080ec09e +0x095:  mov    %edx,0x24(%eax)
080ec0a1 +0x098:  pop    %ebp
080ec0a2 +0x099:  ret
080ec0a3 +0x09a:  nop
080ec0a4 +0x09b:  push   %ebp
080ec0a5 +0x09c:  mov    %esp,%ebp
080ec0a7 +0x09e:  sub    $0x18,%esp
080ec0aa +0x0a1:  mov    0x8(%ebp),%eax
080ec0ad +0x0a4:  mov    %eax,(%esp)
080ec0b0 +0x0a7:  call   080ec13a <+0x131>
080ec0b5 +0x0ac:  leave
080ec0b6 +0x0ad:  ret
080ec0b7 +0x0ae:  nop
080ec0b8 +0x0af:  push   %ebp
080ec0b9 +0x0b0:  mov    %esp,%ebp
080ec0bb +0x0b2:  sub    $0x18,%esp
080ec0be +0x0b5:  mov    0xc(%ebp),%eax
080ec0c1 +0x0b8:  mov    %eax,0x4(%esp)
080ec0c5 +0x0bc:  mov    0x8(%ebp),%eax
080ec0c8 +0x0bf:  mov    %eax,(%esp)
080ec0cb +0x0c2:  call   080ec1b0 <+0x1a7>
080ec0d0 +0x0c7:  mov    0xc(%ebp),%eax
080ec0d3 +0x0ca:  mov    %eax,0x4(%esp)
080ec0d7 +0x0ce:  mov    0x8(%ebp),%eax
080ec0da +0x0d1:  mov    %eax,(%esp)
080ec0dd +0x0d4:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
080ec0e2 +0x0d9:  leave
080ec0e3 +0x0da:  ret
080ec0e4 +0x0db:  push   %ebp
080ec0e5 +0x0dc:  mov    %esp,%ebp
080ec0e7 +0x0de:  sub    $0x28,%esp
080ec0ea +0x0e1:  jmp    080ec12c <+0x123>
080ec0ec +0x0e3:  mov    0xc(%ebp),%eax
080ec0ef +0x0e6:  mov    %eax,(%esp)
080ec0f2 +0x0e9:  call   080d119d <_GLOBAL__I__ZN10BingoEventC2Ev+0x5fea>  ; global constructors keyed to BingoEvent::BingoEvent()+0x5fea
080ec0f7 +0x0ee:  mov    %eax,0x4(%esp)
080ec0fb +0x0f2:  mov    0x8(%ebp),%eax
080ec0fe +0x0f5:  mov    %eax,(%esp)
080ec101 +0x0f8:  call   080ec0e4 <+0xdb>
080ec106 +0x0fd:  mov    0xc(%ebp),%eax
080ec109 +0x100:  mov    %eax,(%esp)
080ec10c +0x103:  call   080d11a8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x5ff5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x5ff5
080ec111 +0x108:  mov    %eax,-0xc(%ebp)
080ec114 +0x10b:  mov    0xc(%ebp),%eax
080ec117 +0x10e:  mov    %eax,0x4(%esp)
080ec11b +0x112:  mov    0x8(%ebp),%eax
080ec11e +0x115:  mov    %eax,(%esp)
080ec121 +0x118:  call   080ec1da <+0x1d1>
080ec126 +0x11d:  mov    -0xc(%ebp),%eax
080ec129 +0x120:  mov    %eax,0xc(%ebp)
080ec12c +0x123:  cmpl   $0x0,0xc(%ebp)
080ec130 +0x127:  setne  %al
080ec133 +0x12a:  test   %al,%al
080ec135 +0x12c:  jne    080ec0ec <+0xe3>
080ec137 +0x12e:  leave
080ec138 +0x12f:  ret
080ec139 +0x130:  nop
080ec13a +0x131:  push   %ebp
080ec13b +0x132:  mov    %esp,%ebp
080ec13d +0x134:  push   %ebx
080ec13e +0x135:  sub    $0x14,%esp
080ec141 +0x138:  mov    0x8(%ebp),%eax
080ec144 +0x13b:  mov    %eax,(%esp)
080ec147 +0x13e:  call   080ced26 <_GLOBAL__I__ZN10BingoEventC2Ev+0x3b73>  ; global constructors keyed to BingoEvent::BingoEvent()+0x3b73
080ec14c +0x143:  mov    %eax,0x4(%esp)
080ec150 +0x147:  mov    0x8(%ebp),%eax
080ec153 +0x14a:  mov    %eax,(%esp)
080ec156 +0x14d:  call   080ec0e4 <+0xdb>
080ec15b +0x152:  mov    0x8(%ebp),%eax
080ec15e +0x155:  mov    %eax,(%esp)
080ec161 +0x158:  call   080ec20e <+0x205>
080ec166 +0x15d:  mov    %eax,%ebx
080ec168 +0x15f:  mov    0x8(%ebp),%eax
080ec16b +0x162:  mov    %eax,(%esp)
080ec16e +0x165:  call   080d1252 <_GLOBAL__I__ZN10BingoEventC2Ev+0x609f>  ; global constructors keyed to BingoEvent::BingoEvent()+0x609f
080ec173 +0x16a:  mov    %eax,(%ebx)
080ec175 +0x16c:  mov    0x8(%ebp),%eax
080ec178 +0x16f:  mov    %eax,(%esp)
080ec17b +0x172:  call   080ec21a <+0x211>
080ec180 +0x177:  movl   $0x0,(%eax)
080ec186 +0x17d:  mov    0x8(%ebp),%eax
080ec189 +0x180:  mov    %eax,(%esp)
080ec18c +0x183:  call   080ec226 <+0x21d>
080ec191 +0x188:  mov    %eax,%ebx
080ec193 +0x18a:  mov    0x8(%ebp),%eax
080ec196 +0x18d:  mov    %eax,(%esp)
080ec199 +0x190:  call   080d1252 <_GLOBAL__I__ZN10BingoEventC2Ev+0x609f>  ; global constructors keyed to BingoEvent::BingoEvent()+0x609f
080ec19e +0x195:  mov    %eax,(%ebx)
080ec1a0 +0x197:  mov    0x8(%ebp),%eax
080ec1a3 +0x19a:  movl   $0x0,0x14(%eax)
080ec1aa +0x1a1:  add    $0x14,%esp
080ec1ad +0x1a4:  pop    %ebx
080ec1ae +0x1a5:  pop    %ebp
080ec1af +0x1a6:  ret
080ec1b0 +0x1a7:  push   %ebp
080ec1b1 +0x1a8:  mov    %esp,%ebp
080ec1b3 +0x1aa:  sub    $0x18,%esp
080ec1b6 +0x1ad:  mov    0x8(%ebp),%eax
080ec1b9 +0x1b0:  mov    %eax,(%esp)
080ec1bc +0x1b3:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
080ec1c1 +0x1b8:  cmp    0xc(%ebp),%eax
080ec1c4 +0x1bb:  setbe  %al
080ec1c7 +0x1be:  test   %al,%al
080ec1c9 +0x1c0:  je     080ec1d7 <+0x1ce>
080ec1cb +0x1c2:  movl   $"vector::_M_range_check",(%esp)
080ec1d2 +0x1c9:  call   086d9b70 <_ZSt20__throw_out_of_rangePKc>  ; std::__throw_out_of_range(char const*)
080ec1d7 +0x1ce:  leave
080ec1d8 +0x1cf:  ret
080ec1d9 +0x1d0:  nop
080ec1da +0x1d1:  push   %ebp
080ec1db +0x1d2:  mov    %esp,%ebp
080ec1dd +0x1d4:  sub    $0x18,%esp
080ec1e0 +0x1d7:  mov    0x8(%ebp),%eax
080ec1e3 +0x1da:  mov    %eax,(%esp)
080ec1e6 +0x1dd:  call   080ec232 <+0x229>
080ec1eb +0x1e2:  mov    0xc(%ebp),%edx
080ec1ee +0x1e5:  mov    %edx,0x4(%esp)
080ec1f2 +0x1e9:  mov    %eax,(%esp)
080ec1f5 +0x1ec:  call   080ec240 <+0x237>
080ec1fa +0x1f1:  mov    0xc(%ebp),%eax
080ec1fd +0x1f4:  mov    %eax,0x4(%esp)
080ec201 +0x1f8:  mov    0x8(%ebp),%eax
080ec204 +0x1fb:  mov    %eax,(%esp)
080ec207 +0x1fe:  call   080ec254 <+0x24b>
080ec20c +0x203:  leave
080ec20d +0x204:  ret
080ec20e +0x205:  push   %ebp
080ec20f +0x206:  mov    %esp,%ebp
080ec211 +0x208:  mov    0x8(%ebp),%eax
080ec214 +0x20b:  add    $0xc,%eax
080ec217 +0x20e:  pop    %ebp
080ec218 +0x20f:  ret
080ec219 +0x210:  nop
080ec21a +0x211:  push   %ebp
080ec21b +0x212:  mov    %esp,%ebp
080ec21d +0x214:  mov    0x8(%ebp),%eax
080ec220 +0x217:  add    $0x8,%eax
080ec223 +0x21a:  pop    %ebp
080ec224 +0x21b:  ret
080ec225 +0x21c:  nop
080ec226 +0x21d:  push   %ebp
080ec227 +0x21e:  mov    %esp,%ebp
080ec229 +0x220:  mov    0x8(%ebp),%eax
080ec22c +0x223:  add    $0x10,%eax
080ec22f +0x226:  pop    %ebp
080ec230 +0x227:  ret
080ec231 +0x228:  nop
080ec232 +0x229:  push   %ebp
080ec233 +0x22a:  mov    %esp,%ebp
080ec235 +0x22c:  mov    0x8(%ebp),%eax
080ec238 +0x22f:  pop    %ebp
080ec239 +0x230:  ret
080ec23a +0x231:  push   %ebp
080ec23b +0x232:  mov    %esp,%ebp
080ec23d +0x234:  pop    %ebp
080ec23e +0x235:  ret
080ec23f +0x236:  nop
080ec240 +0x237:  push   %ebp
080ec241 +0x238:  mov    %esp,%ebp
080ec243 +0x23a:  sub    $0x18,%esp
080ec246 +0x23d:  mov    0xc(%ebp),%eax
080ec249 +0x240:  mov    %eax,(%esp)
080ec24c +0x243:  call   080ec23a <+0x231>
080ec251 +0x248:  leave
080ec252 +0x249:  ret
080ec253 +0x24a:  nop
080ec254 +0x24b:  push   %ebp
080ec255 +0x24c:  mov    %esp,%ebp
080ec257 +0x24e:  sub    $0x18,%esp
080ec25a +0x251:  mov    0x8(%ebp),%eax
080ec25d +0x254:  movl   $0x1,0x8(%esp)
080ec265 +0x25c:  mov    0xc(%ebp),%edx
080ec268 +0x25f:  mov    %edx,0x4(%esp)
080ec26c +0x263:  mov    %eax,(%esp)
080ec26f +0x266:  call   080ec276 <+0x26d>
080ec274 +0x26b:  leave
080ec275 +0x26c:  ret
080ec276 +0x26d:  push   %ebp
080ec277 +0x26e:  mov    %esp,%ebp
080ec279 +0x270:  sub    $0x18,%esp
080ec27c +0x273:  mov    0xc(%ebp),%eax
080ec27f +0x276:  mov    %eax,(%esp)
080ec282 +0x279:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
080ec287 +0x27e:  leave
080ec288 +0x27f:  ret
080ec289 +0x280:  nop
080ec28a +0x281:  nop
080ec28b +0x282:  nop
```

## 反编译 C

```c
// <global>::global @ 0x80ec009

/* CraneMinigameManager::CraneMinigameManager() */

void CraneMinigameManager::_GLOBAL__I_CraneMinigameManager(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
