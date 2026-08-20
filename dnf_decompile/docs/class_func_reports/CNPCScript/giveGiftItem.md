# giveGiftItem

`_ZNK10CNPCScript12giveGiftItemEjPK5CItemjR32ENUM_NPC_FAVOR_GIFT_RESULT_CONST`

`CNPCScript::giveGiftItem(unsigned int, CItem const*, unsigned int, ENUM_NPC_FAVOR_GIFT_RESULT_CONST&) const`

| 类 | 地址 |
|---|---|
| `CNPCScript` | `0x085809e4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085809e4  _ZNK10CNPCScript12giveGiftItemEjPK5CItemjR32ENUM_NPC_FAVOR_GIFT_RESULT_CONST
#           CNPCScript::giveGiftItem(unsigned int, CItem const*, unsigned int, ENUM_NPC_FAVOR_GIFT_RESULT_CONST&) const
# range [0x085809e4, 0x08580d2f]
085809e4 +0x000:  push   %ebp
085809e5 +0x001:  mov    %esp,%ebp
085809e7 +0x003:  sub    $0x58,%esp
085809ea +0x006:  movw   $0x0,-0x2a(%ebp)
085809f0 +0x00c:  lea    -0x30(%ebp),%eax
085809f3 +0x00f:  mov    %eax,(%esp)
085809f6 +0x012:  call   08582ab4 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x1246>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x1246
085809fb +0x017:  mov    0x10(%ebp),%eax
085809fe +0x01a:  mov    %eax,(%esp)
08580a01 +0x01d:  call   08110c48 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x15a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x15a
08580a06 +0x022:  mov    %eax,-0x28(%ebp)
08580a09 +0x025:  mov    0xc(%ebp),%edx
08580a0c +0x028:  mov    %edx,%eax
08580a0e +0x02a:  add    %eax,%eax
08580a10 +0x02c:  add    %edx,%eax
08580a12 +0x02e:  shl    $0x3,%eax
08580a15 +0x031:  add    $0x190,%eax
08580a1a +0x036:  add    0x8(%ebp),%eax
08580a1d +0x039:  lea    0xc(%eax),%ecx
08580a20 +0x03c:  lea    -0x3c(%ebp),%eax
08580a23 +0x03f:  lea    -0x28(%ebp),%edx
08580a26 +0x042:  mov    %edx,0x8(%esp)
08580a2a +0x046:  mov    %ecx,0x4(%esp)
08580a2e +0x04a:  mov    %eax,(%esp)
08580a31 +0x04d:  call   08582ac2 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x1254>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x1254
08580a36 +0x052:  sub    $0x4,%esp
08580a39 +0x055:  mov    -0x3c(%ebp),%eax
08580a3c +0x058:  mov    %eax,-0x30(%ebp)
08580a3f +0x05b:  mov    0xc(%ebp),%edx
08580a42 +0x05e:  mov    %edx,%eax
08580a44 +0x060:  add    %eax,%eax
08580a46 +0x062:  add    %edx,%eax
08580a48 +0x064:  shl    $0x3,%eax
08580a4b +0x067:  add    $0x190,%eax
08580a50 +0x06c:  add    0x8(%ebp),%eax
08580a53 +0x06f:  lea    0xc(%eax),%edx
08580a56 +0x072:  lea    -0x24(%ebp),%eax
08580a59 +0x075:  mov    %edx,0x4(%esp)
08580a5d +0x079:  mov    %eax,(%esp)
08580a60 +0x07c:  call   08582aee <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x1280>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x1280
08580a65 +0x081:  sub    $0x4,%esp
08580a68 +0x084:  lea    -0x24(%ebp),%eax
08580a6b +0x087:  mov    %eax,0x4(%esp)
08580a6f +0x08b:  lea    -0x30(%ebp),%eax
08580a72 +0x08e:  mov    %eax,(%esp)
08580a75 +0x091:  call   08582b14 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x12a6>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x12a6
08580a7a +0x096:  test   %al,%al
08580a7c +0x098:  je     08580ab8 <+0xd4>
08580a7e +0x09a:  lea    -0x30(%ebp),%eax
08580a81 +0x09d:  mov    %eax,(%esp)
08580a84 +0x0a0:  call   08582b28 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x12ba>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x12ba
08580a89 +0x0a5:  movzwl 0x8(%eax),%eax
08580a8d +0x0a9:  movzwl %ax,%eax
08580a90 +0x0ac:  cmp    0x14(%ebp),%eax
08580a93 +0x0af:  setbe  %al
08580a96 +0x0b2:  test   %al,%al
08580a98 +0x0b4:  je     08580aaf <+0xcb>
08580a9a +0x0b6:  lea    -0x30(%ebp),%eax
08580a9d +0x0b9:  mov    %eax,(%esp)
08580aa0 +0x0bc:  call   08582b28 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x12ba>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x12ba
08580aa5 +0x0c1:  movzwl 0xa(%eax),%eax
08580aa9 +0x0c5:  mov    %ax,-0x2a(%ebp)
08580aad +0x0c9:  jmp    08580ab8 <+0xd4>
08580aaf +0x0cb:  mov    0x18(%ebp),%eax
08580ab2 +0x0ce:  movl   $0x1,(%eax)
08580ab8 +0x0d4:  mov    0x10(%ebp),%eax
08580abb +0x0d7:  mov    %eax,(%esp)
08580abe +0x0da:  call   080f1312 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x394>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x394
08580ac3 +0x0df:  test   %eax,%eax
08580ac5 +0x0e1:  setne  %al
08580ac8 +0x0e4:  test   %al,%al
08580aca +0x0e6:  je     08580baa <+0x1c6>
08580ad0 +0x0ec:  mov    0x10(%ebp),%eax
08580ad3 +0x0ef:  mov    %eax,(%esp)
08580ad6 +0x0f2:  call   080f1312 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x394>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x394
08580adb +0x0f7:  mov    %eax,-0x20(%ebp)
08580ade +0x0fa:  mov    0xc(%ebp),%edx
08580ae1 +0x0fd:  mov    %edx,%eax
08580ae3 +0x0ff:  add    %eax,%eax
08580ae5 +0x101:  add    %edx,%eax
08580ae7 +0x103:  shl    $0x3,%eax
08580aea +0x106:  add    $0x210,%eax
08580aef +0x10b:  add    0x8(%ebp),%eax
08580af2 +0x10e:  lea    0x4(%eax),%ecx
08580af5 +0x111:  lea    -0x3c(%ebp),%eax
08580af8 +0x114:  lea    -0x20(%ebp),%edx
08580afb +0x117:  mov    %edx,0x8(%esp)
08580aff +0x11b:  mov    %ecx,0x4(%esp)
08580b03 +0x11f:  mov    %eax,(%esp)
08580b06 +0x122:  call   08582ac2 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x1254>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x1254
08580b0b +0x127:  sub    $0x4,%esp
08580b0e +0x12a:  mov    -0x3c(%ebp),%eax
08580b11 +0x12d:  mov    %eax,-0x30(%ebp)
08580b14 +0x130:  mov    0xc(%ebp),%edx
08580b17 +0x133:  mov    %edx,%eax
08580b19 +0x135:  add    %eax,%eax
08580b1b +0x137:  add    %edx,%eax
08580b1d +0x139:  shl    $0x3,%eax
08580b20 +0x13c:  add    $0x210,%eax
08580b25 +0x141:  add    0x8(%ebp),%eax
08580b28 +0x144:  lea    0x4(%eax),%edx
08580b2b +0x147:  lea    -0x1c(%ebp),%eax
08580b2e +0x14a:  mov    %edx,0x4(%esp)
08580b32 +0x14e:  mov    %eax,(%esp)
08580b35 +0x151:  call   08582aee <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x1280>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x1280
08580b3a +0x156:  sub    $0x4,%esp
08580b3d +0x159:  lea    -0x1c(%ebp),%eax
08580b40 +0x15c:  mov    %eax,0x4(%esp)
08580b44 +0x160:  lea    -0x30(%ebp),%eax
08580b47 +0x163:  mov    %eax,(%esp)
08580b4a +0x166:  call   08582b14 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x12a6>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x12a6
08580b4f +0x16b:  test   %al,%al
08580b51 +0x16d:  je     08580baa <+0x1c6>
08580b53 +0x16f:  lea    -0x30(%ebp),%eax
08580b56 +0x172:  mov    %eax,(%esp)
08580b59 +0x175:  call   08582b28 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x12ba>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x12ba
08580b5e +0x17a:  movzwl 0x8(%eax),%eax
08580b62 +0x17e:  movzwl %ax,%eax
08580b65 +0x181:  cmp    0x14(%ebp),%eax
08580b68 +0x184:  setbe  %al
08580b6b +0x187:  test   %al,%al
08580b6d +0x189:  je     08580ba1 <+0x1bd>
08580b6f +0x18b:  lea    -0x30(%ebp),%eax
08580b72 +0x18e:  mov    %eax,(%esp)
08580b75 +0x191:  call   08582b28 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x12ba>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x12ba
08580b7a +0x196:  movzwl 0xa(%eax),%edx
08580b7e +0x19a:  movzwl -0x2a(%ebp),%eax
08580b82 +0x19e:  cmp    %ax,%dx
08580b85 +0x1a1:  setg   %al
08580b88 +0x1a4:  test   %al,%al
08580b8a +0x1a6:  je     08580baa <+0x1c6>
08580b8c +0x1a8:  lea    -0x30(%ebp),%eax
08580b8f +0x1ab:  mov    %eax,(%esp)
08580b92 +0x1ae:  call   08582b28 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x12ba>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x12ba
08580b97 +0x1b3:  movzwl 0xa(%eax),%eax
08580b9b +0x1b7:  mov    %ax,-0x2a(%ebp)
08580b9f +0x1bb:  jmp    08580baa <+0x1c6>
08580ba1 +0x1bd:  mov    0x18(%ebp),%eax
08580ba4 +0x1c0:  movl   $0x1,(%eax)
08580baa +0x1c6:  movzwl -0x2a(%ebp),%eax
08580bae +0x1ca:  test   %ax,%ax
08580bb1 +0x1cd:  jne    08580d2a <+0x346>
08580bb7 +0x1d3:  mov    0x10(%ebp),%eax
08580bba +0x1d6:  mov    %eax,(%esp)
08580bbd +0x1d9:  call   08110c48 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x15a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x15a
08580bc2 +0x1de:  mov    %eax,-0x18(%ebp)
08580bc5 +0x1e1:  mov    0xc(%ebp),%edx
08580bc8 +0x1e4:  mov    %edx,%eax
08580bca +0x1e6:  add    %eax,%eax
08580bcc +0x1e8:  add    %edx,%eax
08580bce +0x1ea:  shl    $0x3,%eax
08580bd1 +0x1ed:  add    $0x280,%eax
08580bd6 +0x1f2:  add    0x8(%ebp),%eax
08580bd9 +0x1f5:  lea    0xc(%eax),%ecx
08580bdc +0x1f8:  lea    -0x3c(%ebp),%eax
08580bdf +0x1fb:  lea    -0x18(%ebp),%edx
08580be2 +0x1fe:  mov    %edx,0x8(%esp)
08580be6 +0x202:  mov    %ecx,0x4(%esp)
08580bea +0x206:  mov    %eax,(%esp)
08580bed +0x209:  call   08582ac2 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x1254>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x1254
08580bf2 +0x20e:  sub    $0x4,%esp
08580bf5 +0x211:  mov    -0x3c(%ebp),%eax
08580bf8 +0x214:  mov    %eax,-0x30(%ebp)
08580bfb +0x217:  mov    0xc(%ebp),%edx
08580bfe +0x21a:  mov    %edx,%eax
08580c00 +0x21c:  add    %eax,%eax
08580c02 +0x21e:  add    %edx,%eax
08580c04 +0x220:  shl    $0x3,%eax
08580c07 +0x223:  add    $0x280,%eax
08580c0c +0x228:  add    0x8(%ebp),%eax
08580c0f +0x22b:  lea    0xc(%eax),%edx
08580c12 +0x22e:  lea    -0x14(%ebp),%eax
08580c15 +0x231:  mov    %edx,0x4(%esp)
08580c19 +0x235:  mov    %eax,(%esp)
08580c1c +0x238:  call   08582aee <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x1280>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x1280
08580c21 +0x23d:  sub    $0x4,%esp
08580c24 +0x240:  lea    -0x14(%ebp),%eax
08580c27 +0x243:  mov    %eax,0x4(%esp)
08580c2b +0x247:  lea    -0x30(%ebp),%eax
08580c2e +0x24a:  mov    %eax,(%esp)
08580c31 +0x24d:  call   08582b14 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x12a6>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x12a6
08580c36 +0x252:  test   %al,%al
08580c38 +0x254:  je     08580c4d <+0x269>
08580c3a +0x256:  lea    -0x30(%ebp),%eax
08580c3d +0x259:  mov    %eax,(%esp)
08580c40 +0x25c:  call   08582b28 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x12ba>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x12ba
08580c45 +0x261:  movzwl 0xa(%eax),%eax
08580c49 +0x265:  mov    %ax,-0x2a(%ebp)
08580c4d +0x269:  mov    0x10(%ebp),%eax
08580c50 +0x26c:  mov    %eax,(%esp)
08580c53 +0x26f:  call   080f1312 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x394>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x394
08580c58 +0x274:  test   %eax,%eax
08580c5a +0x276:  setne  %al
08580c5d +0x279:  test   %al,%al
08580c5f +0x27b:  je     08580d2a <+0x346>
08580c65 +0x281:  mov    0x10(%ebp),%eax
08580c68 +0x284:  mov    %eax,(%esp)
08580c6b +0x287:  call   080f1312 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x394>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x394
08580c70 +0x28c:  mov    %eax,-0x10(%ebp)
08580c73 +0x28f:  mov    0xc(%ebp),%edx
08580c76 +0x292:  mov    %edx,%eax
08580c78 +0x294:  add    %eax,%eax
08580c7a +0x296:  add    %edx,%eax
08580c7c +0x298:  shl    $0x3,%eax
08580c7f +0x29b:  add    $0x300,%eax
08580c84 +0x2a0:  add    0x8(%ebp),%eax
08580c87 +0x2a3:  lea    0x4(%eax),%ecx
08580c8a +0x2a6:  lea    -0x3c(%ebp),%eax
08580c8d +0x2a9:  lea    -0x10(%ebp),%edx
08580c90 +0x2ac:  mov    %edx,0x8(%esp)
08580c94 +0x2b0:  mov    %ecx,0x4(%esp)
08580c98 +0x2b4:  mov    %eax,(%esp)
08580c9b +0x2b7:  call   08582ac2 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x1254>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x1254
08580ca0 +0x2bc:  sub    $0x4,%esp
08580ca3 +0x2bf:  mov    -0x3c(%ebp),%eax
08580ca6 +0x2c2:  mov    %eax,-0x30(%ebp)
08580ca9 +0x2c5:  mov    0xc(%ebp),%edx
08580cac +0x2c8:  mov    %edx,%eax
08580cae +0x2ca:  add    %eax,%eax
08580cb0 +0x2cc:  add    %edx,%eax
08580cb2 +0x2ce:  shl    $0x3,%eax
08580cb5 +0x2d1:  add    $0x300,%eax
08580cba +0x2d6:  add    0x8(%ebp),%eax
08580cbd +0x2d9:  lea    0x4(%eax),%edx
08580cc0 +0x2dc:  lea    -0xc(%ebp),%eax
08580cc3 +0x2df:  mov    %edx,0x4(%esp)
08580cc7 +0x2e3:  mov    %eax,(%esp)
08580cca +0x2e6:  call   08582aee <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x1280>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x1280
08580ccf +0x2eb:  sub    $0x4,%esp
08580cd2 +0x2ee:  lea    -0xc(%ebp),%eax
08580cd5 +0x2f1:  mov    %eax,0x4(%esp)
08580cd9 +0x2f5:  lea    -0x30(%ebp),%eax
08580cdc +0x2f8:  mov    %eax,(%esp)
08580cdf +0x2fb:  call   08582b14 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x12a6>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x12a6
08580ce4 +0x300:  test   %al,%al
08580ce6 +0x302:  je     08580d2a <+0x346>
08580ce8 +0x304:  movzwl -0x2a(%ebp),%eax
08580cec +0x308:  test   %ax,%ax
08580cef +0x30b:  je     08580d17 <+0x333>
08580cf1 +0x30d:  lea    -0x30(%ebp),%eax
08580cf4 +0x310:  mov    %eax,(%esp)
08580cf7 +0x313:  call   08582b28 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x12ba>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x12ba
08580cfc +0x318:  add    $0xa,%eax
08580cff +0x31b:  mov    %eax,0x4(%esp)
08580d03 +0x31f:  lea    -0x2a(%ebp),%eax
08580d06 +0x322:  mov    %eax,(%esp)
08580d09 +0x325:  call   08582b35 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x12c7>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x12c7
08580d0e +0x32a:  movzwl (%eax),%eax
08580d11 +0x32d:  mov    %ax,-0x2a(%ebp)
08580d15 +0x331:  jmp    08580d2a <+0x346>
08580d17 +0x333:  lea    -0x30(%ebp),%eax
08580d1a +0x336:  mov    %eax,(%esp)
08580d1d +0x339:  call   08582b28 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x12ba>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x12ba
08580d22 +0x33e:  movzwl 0xa(%eax),%eax
08580d26 +0x342:  mov    %ax,-0x2a(%ebp)
08580d2a +0x346:  movzwl -0x2a(%ebp),%eax
08580d2e +0x34a:  leave
08580d2f +0x34b:  ret
```

## 反编译 C

```c
// CNPCScript::giveGiftItem @ 0x85809e4

/* CNPCScript::giveGiftItem(unsigned int, CItem const*, unsigned int,
   ENUM_NPC_FAVOR_GIFT_RESULT_CONST&) const */

short __thiscall
CNPCScript::giveGiftItem
          (CNPCScript *this,uint param_1,CItem *param_2,uint param_3,
          ENUM_NPC_FAVOR_GIFT_RESULT_CONST *param_4)

{
  char cVar1;
  int iVar2;
  short *psVar3;
  ulong local_40 [3];
  ulong local_34;
  short local_2e;
  undefined4 local_2c;
  map<unsigned_long,stFavorableRelationShip_t::stGiftItemInfo_t,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>>
  local_28 [4];
  undefined4 local_24;
  map<unsigned_long,stFavorableRelationShip_t::stGiftItemInfo_t,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>>
  local_20 [4];
  undefined4 local_1c;
  map<unsigned_long,stFavorableRelationShip_t::stGiftItemInfo_t,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>>
  local_18 [4];
  undefined4 local_14;
  map<unsigned_long,stFavorableRelationShip_t::stGiftItemInfo_t,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>>
  local_10 [12];
  
  local_2e = 0;
  std::
  _Rb_tree_const_iterator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>
  ::_Rb_tree_const_iterator
            ((_Rb_tree_const_iterator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>
              *)&local_34);
  local_2c = CItem::get_index(param_2);
  std::
  map<unsigned_long,stFavorableRelationShip_t::stGiftItemInfo_t,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>>
  ::find(local_40);
  local_34 = local_40[0];
  std::
  map<unsigned_long,stFavorableRelationShip_t::stGiftItemInfo_t,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>>
  ::end(local_28);
  cVar1 = std::
          _Rb_tree_const_iterator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>
          ::operator!=((_Rb_tree_const_iterator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>
                        *)&local_34,(_Rb_tree_const_iterator *)local_28);
  if (cVar1 != '\0') {
    iVar2 = std::
            _Rb_tree_const_iterator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>
            ::operator->((_Rb_tree_const_iterator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>
                          *)&local_34);
    if (param_3 < *(ushort *)(iVar2 + 8)) {
      *(undefined4 *)param_4 = 1;
    }
    else {
      iVar2 = std::
              _Rb_tree_const_iterator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>
              ::operator->((_Rb_tree_const_iterator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>
                            *)&local_34);
      local_2e = *(short *)(iVar2 + 10);
    }
  }
  iVar2 = CItem::getItemGroupName(param_2);
  if (iVar2 != 0) {
    local_24 = CItem::getItemGroupName(param_2);
    std::
    map<unsigned_long,stFavorableRelationShip_t::stGiftItemInfo_t,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>>
    ::find(local_40);
    local_34 = local_40[0];
    std::
    map<unsigned_long,stFavorableRelationShip_t::stGiftItemInfo_t,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>>
    ::end(local_20);
    cVar1 = std::
            _Rb_tree_const_iterator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>
            ::operator!=((_Rb_tree_const_iterator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>
                          *)&local_34,(_Rb_tree_const_iterator *)local_20);
    if (cVar1 != '\0') {
      iVar2 = std::
              _Rb_tree_const_iterator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>
              ::operator->((_Rb_tree_const_iterator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>
                            *)&local_34);
      if (param_3 < *(ushort *)(iVar2 + 8)) {
        *(undefined4 *)param_4 = 1;
      }
      else {
        iVar2 = std::
                _Rb_tree_const_iterator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>
                ::operator->((_Rb_tree_const_iterator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>
                              *)&local_34);
        if (local_2e < *(short *)(iVar2 + 10)) {
          iVar2 = std::
                  _Rb_tree_const_iterator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>
                  ::operator->((_Rb_tree_const_iterator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>
                                *)&local_34);
          local_2e = *(short *)(iVar2 + 10);
        }
      }
    }
  }
  if (local_2e == 0) {
    local_1c = CItem::get_index(param_2);
    std::
    map<unsigned_long,stFavorableRelationShip_t::stGiftItemInfo_t,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>>
    ::find(local_40);
    local_34 = local_40[0];
    std::
    map<unsigned_long,stFavorableRelationShip_t::stGiftItemInfo_t,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>>
    ::end(local_18);
    cVar1 = std::
            _Rb_tree_const_iterator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>
            ::operator!=((_Rb_tree_const_iterator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>
                          *)&local_34,(_Rb_tree_const_iterator *)local_18);
    if (cVar1 != '\0') {
      iVar2 = std::
              _Rb_tree_const_iterator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>
              ::operator->((_Rb_tree_const_iterator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>
                            *)&local_34);
      local_2e = *(short *)(iVar2 + 10);
    }
    iVar2 = CItem::getItemGroupName(param_2);
    if (iVar2 != 0) {
      local_14 = CItem::getItemGroupName(param_2);
      std::
      map<unsigned_long,stFavorableRelationShip_t::stGiftItemInfo_t,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>>
      ::find(local_40);
      local_34 = local_40[0];
      std::
      map<unsigned_long,stFavorableRelationShip_t::stGiftItemInfo_t,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>>
      ::end(local_10);
      cVar1 = std::
              _Rb_tree_const_iterator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>
              ::operator!=((_Rb_tree_const_iterator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>
                            *)&local_34,(_Rb_tree_const_iterator *)local_10);
      if (cVar1 != '\0') {
        if (local_2e == 0) {
          iVar2 = std::
                  _Rb_tree_const_iterator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>
                  ::operator->((_Rb_tree_const_iterator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>
                                *)&local_34);
          local_2e = *(short *)(iVar2 + 10);
        }
        else {
          iVar2 = std::
                  _Rb_tree_const_iterator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>
                  ::operator->((_Rb_tree_const_iterator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>
                                *)&local_34);
          psVar3 = std::max<short>(&local_2e,(short *)(iVar2 + 10));
          local_2e = *psVar3;
        }
      }
    }
  }
  return local_2e;
}
```
