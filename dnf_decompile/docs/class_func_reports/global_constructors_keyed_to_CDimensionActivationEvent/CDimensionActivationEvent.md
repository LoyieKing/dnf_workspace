# CDimensionActivationEvent

`_GLOBAL__I__ZN25CDimensionActivationEventC2Ev`

`global constructors keyed to CDimensionActivationEvent::CDimensionActivationEvent()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CDimensionActivationEvent` | `0x080eed65` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080eed65  _GLOBAL__I__ZN25CDimensionActivationEventC2Ev
#           global constructors keyed to CDimensionActivationEvent::CDimensionActivationEvent()
# range [0x080eed65, 0x080ef03b]
080eed65 +0x000:  push   %ebp
080eed66 +0x001:  mov    %esp,%ebp
080eed68 +0x003:  sub    $0x18,%esp
080eed6b +0x006:  movl   $0xffff,0x4(%esp)
080eed73 +0x00e:  movl   $0x1,(%esp)
080eed7a +0x015:  call   080eed25 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
080eed7f +0x01a:  leave
080eed80 +0x01b:  ret
080eed81 +0x01c:  nop
080eed82 +0x01d:  push   %ebp
080eed83 +0x01e:  mov    %esp,%ebp
080eed85 +0x020:  sub    $0x4,%esp
080eed88 +0x023:  mov    0x10(%ebp),%eax
080eed8b +0x026:  mov    %al,-0x4(%ebp)
080eed8e +0x029:  cmpl   $0x5,0xc(%ebp)
080eed92 +0x02d:  jg     080eedad <+0x48>
080eed94 +0x02f:  cmpl   $0x0,0xc(%ebp)
080eed98 +0x033:  js     080eedb0 <+0x4b>
080eed9a +0x035:  mov    0xc(%ebp),%eax
080eed9d +0x038:  mov    0x8(%ebp),%edx
080eeda0 +0x03b:  movzbl -0x4(%ebp),%ecx
080eeda4 +0x03f:  mov    %cl,0xaa74(%edx,%eax,1)
080eedab +0x046:  jmp    080eedb1 <+0x4c>
080eedad +0x048:  nop
080eedae +0x049:  jmp    080eedb1 <+0x4c>
080eedb0 +0x04b:  nop
080eedb1 +0x04c:  leave
080eedb2 +0x04d:  ret
080eedb3 +0x04e:  nop
080eedb4 +0x04f:  push   %ebp
080eedb5 +0x050:  mov    %esp,%ebp
080eedb7 +0x052:  push   %ebx
080eedb8 +0x053:  sub    $0x14,%esp
080eedbb +0x056:  mov    0x8(%ebp),%ebx
080eedbe +0x059:  mov    0xc(%ebp),%eax
080eedc1 +0x05c:  mov    0x10(%ebp),%edx
080eedc4 +0x05f:  mov    %edx,0x8(%esp)
080eedc8 +0x063:  mov    %eax,0x4(%esp)
080eedcc +0x067:  mov    %ebx,(%esp)
080eedcf +0x06a:  call   080eee34 <+0xcf>
080eedd4 +0x06f:  sub    $0x4,%esp
080eedd7 +0x072:  mov    %ebx,%eax
080eedd9 +0x074:  mov    -0x4(%ebp),%ebx
080eeddc +0x077:  leave
080eeddd +0x078:  ret    $0x4
080eede0 +0x07b:  push   %ebp
080eede1 +0x07c:  mov    %esp,%ebp
080eede3 +0x07e:  push   %ebx
080eede4 +0x07f:  sub    $0x14,%esp
080eede7 +0x082:  mov    0x8(%ebp),%ebx
080eedea +0x085:  mov    0xc(%ebp),%eax
080eeded +0x088:  mov    %eax,0x4(%esp)
080eedf1 +0x08c:  mov    %ebx,(%esp)
080eedf4 +0x08f:  call   080eeef2 <+0x18d>
080eedf9 +0x094:  sub    $0x4,%esp
080eedfc +0x097:  mov    %ebx,%eax
080eedfe +0x099:  mov    -0x4(%ebp),%ebx
080eee01 +0x09c:  leave
080eee02 +0x09d:  ret    $0x4
080eee05 +0x0a0:  nop
080eee06 +0x0a1:  push   %ebp
080eee07 +0x0a2:  mov    %esp,%ebp
080eee09 +0x0a4:  mov    0x8(%ebp),%eax
080eee0c +0x0a7:  mov    (%eax),%edx
080eee0e +0x0a9:  mov    0xc(%ebp),%eax
080eee11 +0x0ac:  mov    (%eax),%eax
080eee13 +0x0ae:  cmp    %eax,%edx
080eee15 +0x0b0:  setne  %al
080eee18 +0x0b3:  pop    %ebp
080eee19 +0x0b4:  ret
080eee1a +0x0b5:  push   %ebp
080eee1b +0x0b6:  mov    %esp,%ebp
080eee1d +0x0b8:  mov    0x8(%ebp),%eax
080eee20 +0x0bb:  mov    (%eax),%eax
080eee22 +0x0bd:  add    $0x10,%eax
080eee25 +0x0c0:  pop    %ebp
080eee26 +0x0c1:  ret
080eee27 +0x0c2:  nop
080eee28 +0x0c3:  push   %ebp
080eee29 +0x0c4:  mov    %esp,%ebp
080eee2b +0x0c6:  mov    0x8(%ebp),%eax
080eee2e +0x0c9:  mov    0x8(%eax),%eax
080eee31 +0x0cc:  pop    %ebp
080eee32 +0x0cd:  ret
080eee33 +0x0ce:  nop
080eee34 +0x0cf:  push   %ebp
080eee35 +0x0d0:  mov    %esp,%ebp
080eee37 +0x0d2:  push   %esi
080eee38 +0x0d3:  push   %ebx
080eee39 +0x0d4:  sub    $0x30,%esp
080eee3c +0x0d7:  mov    0x8(%ebp),%ebx
080eee3f +0x0da:  mov    0xc(%ebp),%eax
080eee42 +0x0dd:  mov    %eax,(%esp)
080eee45 +0x0e0:  call   080eef2e <+0x1c9>
080eee4a +0x0e5:  mov    %eax,%esi
080eee4c +0x0e7:  mov    0xc(%ebp),%eax
080eee4f +0x0ea:  mov    %eax,(%esp)
080eee52 +0x0ed:  call   080eee28 <+0xc3>
080eee57 +0x0f2:  lea    -0x10(%ebp),%edx
080eee5a +0x0f5:  mov    0x10(%ebp),%ecx
080eee5d +0x0f8:  mov    %ecx,0x10(%esp)
080eee61 +0x0fc:  mov    %esi,0xc(%esp)
080eee65 +0x100:  mov    %eax,0x8(%esp)
080eee69 +0x104:  mov    0xc(%ebp),%eax
080eee6c +0x107:  mov    %eax,0x4(%esp)
080eee70 +0x10b:  mov    %edx,(%esp)
080eee73 +0x10e:  call   080eef3a <+0x1d5>
080eee78 +0x113:  sub    $0x4,%esp
080eee7b +0x116:  lea    -0xc(%ebp),%eax
080eee7e +0x119:  mov    0xc(%ebp),%edx
080eee81 +0x11c:  mov    %edx,0x4(%esp)
080eee85 +0x120:  mov    %eax,(%esp)
080eee88 +0x123:  call   080eeef2 <+0x18d>
080eee8d +0x128:  sub    $0x4,%esp
080eee90 +0x12b:  lea    -0xc(%ebp),%eax
080eee93 +0x12e:  mov    %eax,0x4(%esp)
080eee97 +0x132:  lea    -0x10(%ebp),%eax
080eee9a +0x135:  mov    %eax,(%esp)
080eee9d +0x138:  call   080eefd8 <+0x273>
080eeea2 +0x13d:  test   %al,%al
080eeea4 +0x13f:  jne    080eeecb <+0x166>
080eeea6 +0x141:  mov    -0x10(%ebp),%eax
080eeea9 +0x144:  mov    %eax,(%esp)
080eeeac +0x147:  call   080eefb6 <+0x251>
080eeeb1 +0x14c:  mov    0xc(%ebp),%edx
080eeeb4 +0x14f:  mov    %eax,0x8(%esp)
080eeeb8 +0x153:  mov    0x10(%ebp),%eax
080eeebb +0x156:  mov    %eax,0x4(%esp)
080eeebf +0x15a:  mov    %edx,(%esp)
080eeec2 +0x15d:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
080eeec7 +0x162:  test   %al,%al
080eeec9 +0x164:  je     080eeedf <+0x17a>
080eeecb +0x166:  mov    0xc(%ebp),%eax
080eeece +0x169:  mov    %eax,0x4(%esp)
080eeed2 +0x16d:  mov    %ebx,(%esp)
080eeed5 +0x170:  call   080eeef2 <+0x18d>
080eeeda +0x175:  sub    $0x4,%esp
080eeedd +0x178:  jmp    080eeee4 <+0x17f>
080eeedf +0x17a:  mov    -0x10(%ebp),%eax
080eeee2 +0x17d:  mov    %eax,(%ebx)
080eeee4 +0x17f:  mov    %ebx,%eax
080eeee6 +0x181:  lea    -0x8(%ebp),%esp
080eeee9 +0x184:  add    $0x0,%esp
080eeeec +0x187:  pop    %ebx
080eeeed +0x188:  pop    %esi
080eeeee +0x189:  pop    %ebp
080eeeef +0x18a:  ret    $0x4
080eeef2 +0x18d:  push   %ebp
080eeef3 +0x18e:  mov    %esp,%ebp
080eeef5 +0x190:  push   %ebx
080eeef6 +0x191:  sub    $0x14,%esp
080eeef9 +0x194:  mov    0x8(%ebp),%ebx
080eeefc +0x197:  mov    0xc(%ebp),%eax
080eeeff +0x19a:  add    $0x4,%eax
080eef02 +0x19d:  mov    %eax,0x4(%esp)
080eef06 +0x1a1:  mov    %ebx,(%esp)
080eef09 +0x1a4:  call   080eefec <+0x287>
080eef0e +0x1a9:  mov    %ebx,%eax
080eef10 +0x1ab:  add    $0x14,%esp
080eef13 +0x1ae:  pop    %ebx
080eef14 +0x1af:  pop    %ebp
080eef15 +0x1b0:  ret    $0x4
080eef18 +0x1b3:  push   %ebp
080eef19 +0x1b4:  mov    %esp,%ebp
080eef1b +0x1b6:  mov    0x8(%ebp),%eax
080eef1e +0x1b9:  mov    0xc(%eax),%eax
080eef21 +0x1bc:  pop    %ebp
080eef22 +0x1bd:  ret
080eef23 +0x1be:  push   %ebp
080eef24 +0x1bf:  mov    %esp,%ebp
080eef26 +0x1c1:  mov    0x8(%ebp),%eax
080eef29 +0x1c4:  mov    0x8(%eax),%eax
080eef2c +0x1c7:  pop    %ebp
080eef2d +0x1c8:  ret
080eef2e +0x1c9:  push   %ebp
080eef2f +0x1ca:  mov    %esp,%ebp
080eef31 +0x1cc:  mov    0x8(%ebp),%eax
080eef34 +0x1cf:  add    $0x4,%eax
080eef37 +0x1d2:  pop    %ebp
080eef38 +0x1d3:  ret
080eef39 +0x1d4:  nop
080eef3a +0x1d5:  push   %ebp
080eef3b +0x1d6:  mov    %esp,%ebp
080eef3d +0x1d8:  push   %ebx
080eef3e +0x1d9:  sub    $0x14,%esp
080eef41 +0x1dc:  mov    0x8(%ebp),%ebx
080eef44 +0x1df:  jmp    080eef92 <+0x22d>
080eef46 +0x1e1:  mov    0x10(%ebp),%eax
080eef49 +0x1e4:  mov    %eax,(%esp)
080eef4c +0x1e7:  call   080eeff9 <+0x294>
080eef51 +0x1ec:  mov    0xc(%ebp),%edx
080eef54 +0x1ef:  mov    0x18(%ebp),%ecx
080eef57 +0x1f2:  mov    %ecx,0x8(%esp)
080eef5b +0x1f6:  mov    %eax,0x4(%esp)
080eef5f +0x1fa:  mov    %edx,(%esp)
080eef62 +0x1fd:  call   08096cd4 <_GLOBAL__I_g_maxTotalDefenseRate+0x2c4>  ; global constructors keyed to g_maxTotalDefenseRate+0x2c4
080eef67 +0x202:  xor    $0x1,%eax
080eef6a +0x205:  test   %al,%al
080eef6c +0x207:  je     080eef84 <+0x21f>
080eef6e +0x209:  mov    0x10(%ebp),%eax
080eef71 +0x20c:  mov    %eax,0x14(%ebp)
080eef74 +0x20f:  mov    0x10(%ebp),%eax
080eef77 +0x212:  mov    %eax,(%esp)
080eef7a +0x215:  call   080eef23 <+0x1be>
080eef7f +0x21a:  mov    %eax,0x10(%ebp)
080eef82 +0x21d:  jmp    080eef92 <+0x22d>
080eef84 +0x21f:  mov    0x10(%ebp),%eax
080eef87 +0x222:  mov    %eax,(%esp)
080eef8a +0x225:  call   080eef18 <+0x1b3>
080eef8f +0x22a:  mov    %eax,0x10(%ebp)
080eef92 +0x22d:  cmpl   $0x0,0x10(%ebp)
080eef96 +0x231:  setne  %al
080eef99 +0x234:  test   %al,%al
080eef9b +0x236:  jne    080eef46 <+0x1e1>
080eef9d +0x238:  mov    0x14(%ebp),%eax
080eefa0 +0x23b:  mov    %eax,0x4(%esp)
080eefa4 +0x23f:  mov    %ebx,(%esp)
080eefa7 +0x242:  call   080eefec <+0x287>
080eefac +0x247:  mov    %ebx,%eax
080eefae +0x249:  add    $0x14,%esp
080eefb1 +0x24c:  pop    %ebx
080eefb2 +0x24d:  pop    %ebp
080eefb3 +0x24e:  ret    $0x4
080eefb6 +0x251:  push   %ebp
080eefb7 +0x252:  mov    %esp,%ebp
080eefb9 +0x254:  sub    $0x28,%esp
080eefbc +0x257:  mov    0x8(%ebp),%eax
080eefbf +0x25a:  mov    %eax,(%esp)
080eefc2 +0x25d:  call   080ef01b <+0x2b6>
080eefc7 +0x262:  mov    %eax,0x4(%esp)
080eefcb +0x266:  lea    -0x9(%ebp),%eax
080eefce +0x269:  mov    %eax,(%esp)
080eefd1 +0x26c:  call   080ef026 <+0x2c1>
080eefd6 +0x271:  leave
080eefd7 +0x272:  ret
080eefd8 +0x273:  push   %ebp
080eefd9 +0x274:  mov    %esp,%ebp
080eefdb +0x276:  mov    0x8(%ebp),%eax
080eefde +0x279:  mov    (%eax),%edx
080eefe0 +0x27b:  mov    0xc(%ebp),%eax
080eefe3 +0x27e:  mov    (%eax),%eax
080eefe5 +0x280:  cmp    %eax,%edx
080eefe7 +0x282:  sete   %al
080eefea +0x285:  pop    %ebp
080eefeb +0x286:  ret
080eefec +0x287:  push   %ebp
080eefed +0x288:  mov    %esp,%ebp
080eefef +0x28a:  mov    0xc(%ebp),%edx
080eeff2 +0x28d:  mov    0x8(%ebp),%eax
080eeff5 +0x290:  mov    %edx,(%eax)
080eeff7 +0x292:  pop    %ebp
080eeff8 +0x293:  ret
080eeff9 +0x294:  push   %ebp
080eeffa +0x295:  mov    %esp,%ebp
080eeffc +0x297:  sub    $0x28,%esp
080eefff +0x29a:  mov    0x8(%ebp),%eax
080ef002 +0x29d:  mov    %eax,(%esp)
080ef005 +0x2a0:  call   080ef02e <+0x2c9>
080ef00a +0x2a5:  mov    %eax,0x4(%esp)
080ef00e +0x2a9:  lea    -0x9(%ebp),%eax
080ef011 +0x2ac:  mov    %eax,(%esp)
080ef014 +0x2af:  call   080ef026 <+0x2c1>
080ef019 +0x2b4:  leave
080ef01a +0x2b5:  ret
080ef01b +0x2b6:  push   %ebp
080ef01c +0x2b7:  mov    %esp,%ebp
080ef01e +0x2b9:  mov    0x8(%ebp),%eax
080ef021 +0x2bc:  add    $0x10,%eax
080ef024 +0x2bf:  pop    %ebp
080ef025 +0x2c0:  ret
080ef026 +0x2c1:  push   %ebp
080ef027 +0x2c2:  mov    %esp,%ebp
080ef029 +0x2c4:  mov    0xc(%ebp),%eax
080ef02c +0x2c7:  pop    %ebp
080ef02d +0x2c8:  ret
080ef02e +0x2c9:  push   %ebp
080ef02f +0x2ca:  mov    %esp,%ebp
080ef031 +0x2cc:  mov    0x8(%ebp),%eax
080ef034 +0x2cf:  add    $0x10,%eax
080ef037 +0x2d2:  pop    %ebp
080ef038 +0x2d3:  ret
080ef039 +0x2d4:  nop
080ef03a +0x2d5:  nop
080ef03b +0x2d6:  nop
```

## 反编译 C

```c
// <global>::global @ 0x80eed65

/* CDimensionActivationEvent::CDimensionActivationEvent() */

void CDimensionActivationEvent::_GLOBAL__I_CDimensionActivationEvent(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
