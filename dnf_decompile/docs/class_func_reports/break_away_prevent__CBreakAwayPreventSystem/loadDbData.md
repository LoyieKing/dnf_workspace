# loadDbData

`_ZN18break_away_prevent23CBreakAwayPreventSystem10loadDbDataEP37SIG_BREAK_AWAY_PREVENT_SYSTEM_MANAGER`

`break_away_prevent::CBreakAwayPreventSystem::loadDbData(SIG_BREAK_AWAY_PREVENT_SYSTEM_MANAGER*)`

| 类 | 地址 |
|---|---|
| `break_away_prevent::CBreakAwayPreventSystem` | `0x0831c49e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0831c49e  _ZN18break_away_prevent23CBreakAwayPreventSystem10loadDbDataEP37SIG_BREAK_AWAY_PREVENT_SYSTEM_MANAGER
#           break_away_prevent::CBreakAwayPreventSystem::loadDbData(SIG_BREAK_AWAY_PREVENT_SYSTEM_MANAGER*)
# range [0x0831c49e, 0x0831c793]
0831c49e +0x000:  push   %ebp
0831c49f +0x001:  mov    %esp,%ebp
0831c4a1 +0x003:  push   %esi
0831c4a2 +0x004:  push   %ebx
0831c4a3 +0x005:  sub    $0x60,%esp
0831c4a6 +0x008:  movl   $0x0,-0x10(%ebp)
0831c4ad +0x00f:  mov    0x8(%ebp),%eax
0831c4b0 +0x012:  movl   $0x2e4,0x8(%esp)
0831c4b8 +0x01a:  mov    0xc(%ebp),%edx
0831c4bb +0x01d:  mov    %edx,0x4(%esp)
0831c4bf +0x021:  mov    %eax,(%esp)
0831c4c2 +0x024:  call   0807d8a0 <_init+0x198>
0831c4c7 +0x029:  mov    0x8(%ebp),%eax
0831c4ca +0x02c:  add    $0x2e4,%eax
0831c4cf +0x031:  mov    %eax,(%esp)
0831c4d2 +0x034:  call   0831d69e <_GLOBAL__I__ZN18break_away_prevent23CBreakAwayPreventSystemC2Ev+0x457>  ; global constructors keyed to break_away_prevent::CBreakAwayPreventSystem::CBreakAwayPreventSystem()+0x457
0831c4d7 +0x039:  movl   $0x0,-0xc(%ebp)
0831c4de +0x040:  jmp    0831c773 <+0x2d5>
0831c4e3 +0x045:  lea    -0x37(%ebp),%eax
0831c4e6 +0x048:  mov    %eax,(%esp)
0831c4e9 +0x04b:  call   0831d3ae <_GLOBAL__I__ZN18break_away_prevent23CBreakAwayPreventSystemC2Ev+0x167>  ; global constructors keyed to break_away_prevent::CBreakAwayPreventSystem::CBreakAwayPreventSystem()+0x167
0831c4ee +0x050:  lea    -0x4c(%ebp),%eax
0831c4f1 +0x053:  mov    %eax,(%esp)
0831c4f4 +0x056:  call   0831d3c8 <_GLOBAL__I__ZN18break_away_prevent23CBreakAwayPreventSystemC2Ev+0x181>  ; global constructors keyed to break_away_prevent::CBreakAwayPreventSystem::CBreakAwayPreventSystem()+0x181
0831c4f9 +0x05b:  mov    -0xc(%ebp),%edx
0831c4fc +0x05e:  mov    0x8(%ebp),%ecx
0831c4ff +0x061:  mov    %edx,%eax
0831c501 +0x063:  add    %eax,%eax
0831c503 +0x065:  add    %edx,%eax
0831c505 +0x067:  shl    $0x3,%eax
0831c508 +0x06a:  lea    (%ecx,%eax,1),%eax
0831c50b +0x06d:  add    $0x10,%eax
0831c50e +0x070:  movzbl 0x1(%eax),%eax
0831c512 +0x074:  mov    %al,-0x37(%ebp)
0831c515 +0x077:  mov    -0xc(%ebp),%edx
0831c518 +0x07a:  mov    0x8(%ebp),%ecx
0831c51b +0x07d:  mov    %edx,%eax
0831c51d +0x07f:  add    %eax,%eax
0831c51f +0x081:  add    %edx,%eax
0831c521 +0x083:  shl    $0x3,%eax
0831c524 +0x086:  lea    (%ecx,%eax,1),%eax
0831c527 +0x089:  add    $0x10,%eax
0831c52a +0x08c:  movzbl 0x2(%eax),%eax
0831c52e +0x090:  mov    %al,-0x36(%ebp)
0831c531 +0x093:  mov    -0xc(%ebp),%edx
0831c534 +0x096:  mov    0x8(%ebp),%ecx
0831c537 +0x099:  mov    %edx,%eax
0831c539 +0x09b:  add    %eax,%eax
0831c53b +0x09d:  add    %edx,%eax
0831c53d +0x09f:  shl    $0x3,%eax
0831c540 +0x0a2:  lea    (%ecx,%eax,1),%eax
0831c543 +0x0a5:  add    $0x10,%eax
0831c546 +0x0a8:  movzbl (%eax),%eax
0831c549 +0x0ab:  mov    %al,-0x35(%ebp)
0831c54c +0x0ae:  mov    -0xc(%ebp),%edx
0831c54f +0x0b1:  mov    0x8(%ebp),%ecx
0831c552 +0x0b4:  mov    %edx,%eax
0831c554 +0x0b6:  add    %eax,%eax
0831c556 +0x0b8:  add    %edx,%eax
0831c558 +0x0ba:  shl    $0x3,%eax
0831c55b +0x0bd:  lea    (%ecx,%eax,1),%eax
0831c55e +0x0c0:  add    $0x14,%eax
0831c561 +0x0c3:  mov    (%eax),%eax
0831c563 +0x0c5:  mov    %eax,-0x4c(%ebp)
0831c566 +0x0c8:  mov    -0xc(%ebp),%edx
0831c569 +0x0cb:  mov    0x8(%ebp),%ecx
0831c56c +0x0ce:  mov    %edx,%eax
0831c56e +0x0d0:  add    %eax,%eax
0831c570 +0x0d2:  add    %edx,%eax
0831c572 +0x0d4:  shl    $0x3,%eax
0831c575 +0x0d7:  lea    (%ecx,%eax,1),%eax
0831c578 +0x0da:  add    $0x18,%eax
0831c57b +0x0dd:  mov    (%eax),%eax
0831c57d +0x0df:  mov    %eax,-0x48(%ebp)
0831c580 +0x0e2:  mov    -0xc(%ebp),%edx
0831c583 +0x0e5:  mov    0x8(%ebp),%ecx
0831c586 +0x0e8:  mov    %edx,%eax
0831c588 +0x0ea:  add    %eax,%eax
0831c58a +0x0ec:  add    %edx,%eax
0831c58c +0x0ee:  shl    $0x3,%eax
0831c58f +0x0f1:  lea    (%ecx,%eax,1),%eax
0831c592 +0x0f4:  add    $0x1c,%eax
0831c595 +0x0f7:  mov    (%eax),%eax
0831c597 +0x0f9:  mov    %eax,-0x44(%ebp)
0831c59a +0x0fc:  mov    -0xc(%ebp),%edx
0831c59d +0x0ff:  mov    0x8(%ebp),%ecx
0831c5a0 +0x102:  mov    %edx,%eax
0831c5a2 +0x104:  add    %eax,%eax
0831c5a4 +0x106:  add    %edx,%eax
0831c5a6 +0x108:  shl    $0x3,%eax
0831c5a9 +0x10b:  lea    (%ecx,%eax,1),%eax
0831c5ac +0x10e:  add    $0x20,%eax
0831c5af +0x111:  mov    (%eax),%eax
0831c5b1 +0x113:  mov    %eax,-0x40(%ebp)
0831c5b4 +0x116:  mov    -0xc(%ebp),%edx
0831c5b7 +0x119:  mov    0x8(%ebp),%ecx
0831c5ba +0x11c:  mov    %edx,%eax
0831c5bc +0x11e:  add    %eax,%eax
0831c5be +0x120:  add    %edx,%eax
0831c5c0 +0x122:  shl    $0x3,%eax
0831c5c3 +0x125:  lea    (%ecx,%eax,1),%eax
0831c5c6 +0x128:  add    $0x24,%eax
0831c5c9 +0x12b:  mov    (%eax),%eax
0831c5cb +0x12d:  mov    %eax,-0x3c(%ebp)
0831c5ce +0x130:  mov    0x8(%ebp),%eax
0831c5d1 +0x133:  lea    0x2e4(%eax),%ecx
0831c5d7 +0x139:  lea    -0x50(%ebp),%eax
0831c5da +0x13c:  lea    -0x37(%ebp),%edx
0831c5dd +0x13f:  mov    %edx,0x8(%esp)
0831c5e1 +0x143:  mov    %ecx,0x4(%esp)
0831c5e5 +0x147:  mov    %eax,(%esp)
0831c5e8 +0x14a:  call   0831d6b2 <_GLOBAL__I__ZN18break_away_prevent23CBreakAwayPreventSystemC2Ev+0x46b>  ; global constructors keyed to break_away_prevent::CBreakAwayPreventSystem::CBreakAwayPreventSystem()+0x46b
0831c5ed +0x14f:  sub    $0x4,%esp
0831c5f0 +0x152:  mov    0x8(%ebp),%eax
0831c5f3 +0x155:  lea    0x2e4(%eax),%edx
0831c5f9 +0x15b:  lea    -0x34(%ebp),%eax
0831c5fc +0x15e:  mov    %edx,0x4(%esp)
0831c600 +0x162:  mov    %eax,(%esp)
0831c603 +0x165:  call   0831d6de <_GLOBAL__I__ZN18break_away_prevent23CBreakAwayPreventSystemC2Ev+0x497>  ; global constructors keyed to break_away_prevent::CBreakAwayPreventSystem::CBreakAwayPreventSystem()+0x497
0831c608 +0x16a:  sub    $0x4,%esp
0831c60b +0x16d:  lea    -0x34(%ebp),%eax
0831c60e +0x170:  mov    %eax,0x4(%esp)
0831c612 +0x174:  lea    -0x50(%ebp),%eax
0831c615 +0x177:  mov    %eax,(%esp)
0831c618 +0x17a:  call   0831d704 <_GLOBAL__I__ZN18break_away_prevent23CBreakAwayPreventSystemC2Ev+0x4bd>  ; global constructors keyed to break_away_prevent::CBreakAwayPreventSystem::CBreakAwayPreventSystem()+0x4bd
0831c61d +0x17f:  test   %al,%al
0831c61f +0x181:  je     0831c643 <+0x1a5>
0831c621 +0x183:  lea    -0x50(%ebp),%eax
0831c624 +0x186:  mov    %eax,(%esp)
0831c627 +0x189:  call   0831d718 <_GLOBAL__I__ZN18break_away_prevent23CBreakAwayPreventSystemC2Ev+0x4d1>  ; global constructors keyed to break_away_prevent::CBreakAwayPreventSystem::CBreakAwayPreventSystem()+0x4d1
0831c62c +0x18e:  lea    0x4(%eax),%edx
0831c62f +0x191:  lea    -0x4c(%ebp),%eax
0831c632 +0x194:  mov    %eax,0x4(%esp)
0831c636 +0x198:  mov    %edx,(%esp)
0831c639 +0x19b:  call   0831d726 <_GLOBAL__I__ZN18break_away_prevent23CBreakAwayPreventSystemC2Ev+0x4df>  ; global constructors keyed to break_away_prevent::CBreakAwayPreventSystem::CBreakAwayPreventSystem()+0x4df
0831c63e +0x1a0:  jmp    0831c76f <+0x2d1>
0831c643 +0x1a5:  lea    -0x58(%ebp),%eax
0831c646 +0x1a8:  mov    %eax,(%esp)
0831c649 +0x1ab:  call   0831d412 <_GLOBAL__I__ZN18break_away_prevent23CBreakAwayPreventSystemC2Ev+0x1cb>  ; global constructors keyed to break_away_prevent::CBreakAwayPreventSystem::CBreakAwayPreventSystem()+0x1cb
0831c64e +0x1b0:  lea    -0x4c(%ebp),%eax
0831c651 +0x1b3:  mov    %eax,0x4(%esp)
0831c655 +0x1b7:  lea    -0x58(%ebp),%eax
0831c658 +0x1ba:  mov    %eax,(%esp)
0831c65b +0x1bd:  call   0831d726 <_GLOBAL__I__ZN18break_away_prevent23CBreakAwayPreventSystemC2Ev+0x4df>  ; global constructors keyed to break_away_prevent::CBreakAwayPreventSystem::CBreakAwayPreventSystem()+0x4df
0831c660 +0x1c2:  lea    -0x1c(%ebp),%eax
0831c663 +0x1c5:  lea    -0x58(%ebp),%edx
0831c666 +0x1c8:  mov    %edx,0x8(%esp)
0831c66a +0x1cc:  lea    -0x37(%ebp),%edx
0831c66d +0x1cf:  mov    %edx,0x4(%esp)
0831c671 +0x1d3:  mov    %eax,(%esp)
0831c674 +0x1d6:  call   0831d75c <_GLOBAL__I__ZN18break_away_prevent23CBreakAwayPreventSystemC2Ev+0x515>  ; global constructors keyed to break_away_prevent::CBreakAwayPreventSystem::CBreakAwayPreventSystem()+0x515
0831c679 +0x1db:  sub    $0x4,%esp
0831c67c +0x1de:  lea    -0x1c(%ebp),%eax
0831c67f +0x1e1:  mov    %eax,0x4(%esp)
0831c683 +0x1e5:  lea    -0x28(%ebp),%eax
0831c686 +0x1e8:  mov    %eax,(%esp)
0831c689 +0x1eb:  call   0831d7ba <_GLOBAL__I__ZN18break_away_prevent23CBreakAwayPreventSystemC2Ev+0x573>  ; global constructors keyed to break_away_prevent::CBreakAwayPreventSystem::CBreakAwayPreventSystem()+0x573
0831c68e +0x1f0:  mov    0x8(%ebp),%eax
0831c691 +0x1f3:  lea    0x2e4(%eax),%ecx
0831c697 +0x1f9:  lea    -0x30(%ebp),%eax
0831c69a +0x1fc:  lea    -0x28(%ebp),%edx
0831c69d +0x1ff:  mov    %edx,0x8(%esp)
0831c6a1 +0x203:  mov    %ecx,0x4(%esp)
0831c6a5 +0x207:  mov    %eax,(%esp)
0831c6a8 +0x20a:  call   0831d802 <_GLOBAL__I__ZN18break_away_prevent23CBreakAwayPreventSystemC2Ev+0x5bb>  ; global constructors keyed to break_away_prevent::CBreakAwayPreventSystem::CBreakAwayPreventSystem()+0x5bb
0831c6ad +0x20f:  sub    $0x4,%esp
0831c6b0 +0x212:  lea    -0x28(%ebp),%eax
0831c6b3 +0x215:  mov    %eax,(%esp)
0831c6b6 +0x218:  call   0831d586 <_GLOBAL__I__ZN18break_away_prevent23CBreakAwayPreventSystemC2Ev+0x33f>  ; global constructors keyed to break_away_prevent::CBreakAwayPreventSystem::CBreakAwayPreventSystem()+0x33f
0831c6bb +0x21d:  jmp    0831c6e7 <+0x249>
0831c6bd +0x21f:  mov    %edx,%ebx
0831c6bf +0x221:  mov    %eax,%esi
0831c6c1 +0x223:  lea    -0x28(%ebp),%eax
0831c6c4 +0x226:  mov    %eax,(%esp)
0831c6c7 +0x229:  call   0831d586 <_GLOBAL__I__ZN18break_away_prevent23CBreakAwayPreventSystemC2Ev+0x33f>  ; global constructors keyed to break_away_prevent::CBreakAwayPreventSystem::CBreakAwayPreventSystem()+0x33f
0831c6cc +0x22e:  mov    %esi,%eax
0831c6ce +0x230:  mov    %ebx,%edx
0831c6d0 +0x232:  jmp    0831c6d2 <+0x234>
0831c6d2 +0x234:  mov    %edx,%ebx
0831c6d4 +0x236:  mov    %eax,%esi
0831c6d6 +0x238:  lea    -0x1c(%ebp),%eax
0831c6d9 +0x23b:  mov    %eax,(%esp)
0831c6dc +0x23e:  call   0831d570 <_GLOBAL__I__ZN18break_away_prevent23CBreakAwayPreventSystemC2Ev+0x329>  ; global constructors keyed to break_away_prevent::CBreakAwayPreventSystem::CBreakAwayPreventSystem()+0x329
0831c6e1 +0x243:  mov    %esi,%eax
0831c6e3 +0x245:  mov    %ebx,%edx
0831c6e5 +0x247:  jmp    0831c754 <+0x2b6>
0831c6e7 +0x249:  lea    -0x1c(%ebp),%eax
0831c6ea +0x24c:  mov    %eax,(%esp)
0831c6ed +0x24f:  call   0831d570 <_GLOBAL__I__ZN18break_away_prevent23CBreakAwayPreventSystemC2Ev+0x329>  ; global constructors keyed to break_away_prevent::CBreakAwayPreventSystem::CBreakAwayPreventSystem()+0x329
0831c6f2 +0x254:  mov    -0x10(%ebp),%edx
0831c6f5 +0x257:  movzbl -0x35(%ebp),%ecx
0831c6f9 +0x25b:  mov    0x8(%ebp),%ebx
0831c6fc +0x25e:  mov    %edx,%eax
0831c6fe +0x260:  add    %eax,%eax
0831c700 +0x262:  add    %edx,%eax
0831c702 +0x264:  lea    (%ebx,%eax,1),%eax
0831c705 +0x267:  add    $0x2f0,%eax
0831c70a +0x26c:  mov    %cl,0xe(%eax)
0831c70d +0x26f:  mov    -0x10(%ebp),%edx
0831c710 +0x272:  movzbl -0x37(%ebp),%ecx
0831c714 +0x276:  mov    0x8(%ebp),%ebx
0831c717 +0x279:  mov    %edx,%eax
0831c719 +0x27b:  add    %eax,%eax
0831c71b +0x27d:  add    %edx,%eax
0831c71d +0x27f:  lea    (%ebx,%eax,1),%eax
0831c720 +0x282:  add    $0x2f0,%eax
0831c725 +0x287:  mov    %cl,0xc(%eax)
0831c728 +0x28a:  mov    -0x10(%ebp),%edx
0831c72b +0x28d:  movzbl -0x36(%ebp),%ecx
0831c72f +0x291:  mov    0x8(%ebp),%ebx
0831c732 +0x294:  mov    %edx,%eax
0831c734 +0x296:  add    %eax,%eax
0831c736 +0x298:  add    %edx,%eax
0831c738 +0x29a:  lea    (%ebx,%eax,1),%eax
0831c73b +0x29d:  add    $0x2f0,%eax
0831c740 +0x2a2:  mov    %cl,0xd(%eax)
0831c743 +0x2a5:  addl   $0x1,-0x10(%ebp)
0831c747 +0x2a9:  lea    -0x58(%ebp),%eax
0831c74a +0x2ac:  mov    %eax,(%esp)
0831c74d +0x2af:  call   0831d55c <_GLOBAL__I__ZN18break_away_prevent23CBreakAwayPreventSystemC2Ev+0x315>  ; global constructors keyed to break_away_prevent::CBreakAwayPreventSystem::CBreakAwayPreventSystem()+0x315
0831c752 +0x2b4:  jmp    0831c76f <+0x2d1>
0831c754 +0x2b6:  mov    %edx,%ebx
0831c756 +0x2b8:  mov    %eax,%esi
0831c758 +0x2ba:  lea    -0x58(%ebp),%eax
0831c75b +0x2bd:  mov    %eax,(%esp)
0831c75e +0x2c0:  call   0831d55c <_GLOBAL__I__ZN18break_away_prevent23CBreakAwayPreventSystemC2Ev+0x315>  ; global constructors keyed to break_away_prevent::CBreakAwayPreventSystem::CBreakAwayPreventSystem()+0x315
0831c763 +0x2c5:  mov    %esi,%eax
0831c765 +0x2c7:  mov    %ebx,%edx
0831c767 +0x2c9:  mov    %eax,(%esp)
0831c76a +0x2cc:  call   08ae3750 <_Unwind_Resume>
0831c76f +0x2d1:  addl   $0x1,-0xc(%ebp)
0831c773 +0x2d5:  mov    0x8(%ebp),%eax
0831c776 +0x2d8:  mov    0x2e0(%eax),%eax
0831c77c +0x2de:  cmp    -0xc(%ebp),%eax
0831c77f +0x2e1:  setg   %al
0831c782 +0x2e4:  test   %al,%al
0831c784 +0x2e6:  jne    0831c4e3 <+0x45>
0831c78a +0x2ec:  lea    -0x8(%ebp),%esp
0831c78d +0x2ef:  add    $0x0,%esp
0831c790 +0x2f2:  pop    %ebx
0831c791 +0x2f3:  pop    %esi
0831c792 +0x2f4:  pop    %ebp
0831c793 +0x2f5:  ret
```

## 反编译 C

```c
// break_away_prevent::CBreakAwayPreventSystem::loadDbData @ 0x831c49e

/* break_away_prevent::CBreakAwayPreventSystem::loadDbData(SIG_BREAK_AWAY_PREVENT_SYSTEM_MANAGER*)
    */

void __thiscall
break_away_prevent::CBreakAwayPreventSystem::loadDbData
          (CBreakAwayPreventSystem *this,SIG_BREAK_AWAY_PREVENT_SYSTEM_MANAGER *param_1)

{
  char cVar1;
  int iVar2;
  STRewardDataList local_5c [8];
  STRewardDataKey local_54 [4];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  CBreakAwayPreventSystem local_3b;
  CBreakAwayPreventSystem local_3a;
  CBreakAwayPreventSystem local_39;
  map<STRewardDataKey,STRewardDataList,std::less<STRewardDataKey>,std::allocator<std::pair<STRewardDataKey_const,STRewardDataList>>>
  local_38 [4];
  pair local_34 [8];
  pair<STRewardDataKey_const,STRewardDataList> local_2c [12];
  STRewardDataKey local_20 [12];
  int local_14;
  int local_10;
  
  local_14 = 0;
  memcpy(this,param_1,0x2e4);
  std::
  map<STRewardDataKey,STRewardDataList,std::less<STRewardDataKey>,std::allocator<std::pair<STRewardDataKey_const,STRewardDataList>>>
  ::clear((map<STRewardDataKey,STRewardDataList,std::less<STRewardDataKey>,std::allocator<std::pair<STRewardDataKey_const,STRewardDataList>>>
           *)(this + 0x2e4));
  for (local_10 = 0; local_10 < *(int *)(this + 0x2e0); local_10 = local_10 + 1) {
    STRewardDataKey::STRewardDataKey((STRewardDataKey *)&local_3b);
    STRewardData::STRewardData((STRewardData *)&local_50);
    local_3b = this[local_10 * 0x18 + 0x11];
    local_3a = this[local_10 * 0x18 + 0x12];
    local_39 = this[local_10 * 0x18 + 0x10];
    local_50 = *(undefined4 *)(this + local_10 * 0x18 + 0x14);
    local_4c = *(undefined4 *)(this + local_10 * 0x18 + 0x18);
    local_48 = *(undefined4 *)(this + local_10 * 0x18 + 0x1c);
    local_44 = *(undefined4 *)(this + local_10 * 0x18 + 0x20);
    local_40 = *(undefined4 *)(this + local_10 * 0x18 + 0x24);
    std::
    map<STRewardDataKey,STRewardDataList,std::less<STRewardDataKey>,std::allocator<std::pair<STRewardDataKey_const,STRewardDataList>>>
    ::find(local_54);
    std::
    map<STRewardDataKey,STRewardDataList,std::less<STRewardDataKey>,std::allocator<std::pair<STRewardDataKey_const,STRewardDataList>>>
    ::end(local_38);
    cVar1 = std::_Rb_tree_iterator<std::pair<STRewardDataKey_const,STRewardDataList>>::operator!=
                      ((_Rb_tree_iterator<std::pair<STRewardDataKey_const,STRewardDataList>> *)
                       local_54,(_Rb_tree_iterator *)local_38);
    if (cVar1 == '\0') {
      STRewardDataList::STRewardDataList(local_5c);
                    /* try { // try from 0831c65b to 0831c678 has its CatchHandler @ 0831c754 */
      std::list<STRewardData,std::allocator<STRewardData>>::push_back
                ((list<STRewardData,std::allocator<STRewardData>> *)local_5c,
                 (STRewardData *)&local_50);
      std::make_pair<STRewardDataKey&,STRewardDataList&>(local_20,(STRewardDataList *)&local_3b);
                    /* try { // try from 0831c689 to 0831c68d has its CatchHandler @ 0831c6d2 */
      std::pair<STRewardDataKey_const,STRewardDataList>::pair<STRewardDataKey,STRewardDataList>
                (local_2c,local_20);
                    /* try { // try from 0831c6a8 to 0831c6ac has its CatchHandler @ 0831c6bd */
      std::
      map<STRewardDataKey,STRewardDataList,std::less<STRewardDataKey>,std::allocator<std::pair<STRewardDataKey_const,STRewardDataList>>>
      ::insert(local_34);
                    /* try { // try from 0831c6b6 to 0831c6ba has its CatchHandler @ 0831c6d2 */
      std::pair<STRewardDataKey_const,STRewardDataList>::~pair(local_2c);
                    /* try { // try from 0831c6ed to 0831c6f1 has its CatchHandler @ 0831c754 */
      std::pair<STRewardDataKey,STRewardDataList>::~pair
                ((pair<STRewardDataKey,STRewardDataList> *)local_20);
      this[local_14 * 3 + 0x2fe] = local_39;
      this[local_14 * 3 + 0x2fc] = local_3b;
      this[local_14 * 3 + 0x2fd] = local_3a;
      local_14 = local_14 + 1;
      STRewardDataList::~STRewardDataList(local_5c);
    }
    else {
      iVar2 = std::_Rb_tree_iterator<std::pair<STRewardDataKey_const,STRewardDataList>>::operator->
                        ((_Rb_tree_iterator<std::pair<STRewardDataKey_const,STRewardDataList>> *)
                         local_54);
      std::list<STRewardData,std::allocator<STRewardData>>::push_back
                ((list<STRewardData,std::allocator<STRewardData>> *)(iVar2 + 4),
                 (STRewardData *)&local_50);
    }
  }
  return;
}
```
