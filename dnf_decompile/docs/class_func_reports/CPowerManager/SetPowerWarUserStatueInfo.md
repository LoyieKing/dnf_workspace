# SetPowerWarUserStatueInfo

`_ZN13CPowerManager25SetPowerWarUserStatueInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFO`

`CPowerManager::SetPowerWarUserStatueInfo(SIG_LOAD_POWER_WAR_STATUE_INFO*)`

| 类 | 地址 |
|---|---|
| `CPowerManager` | `0x0847ed4e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0847ed4e  _ZN13CPowerManager25SetPowerWarUserStatueInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFO
#           CPowerManager::SetPowerWarUserStatueInfo(SIG_LOAD_POWER_WAR_STATUE_INFO*)
# range [0x0847ed4e, 0x0847f1af]
0847ed4e +0x000:  push   %ebp
0847ed4f +0x001:  mov    %esp,%ebp
0847ed51 +0x003:  push   %edi
0847ed52 +0x004:  push   %esi
0847ed53 +0x005:  push   %ebx
0847ed54 +0x006:  sub    $0xbc,%esp
0847ed5a +0x00c:  movl   $0x0,-0x1c(%ebp)
0847ed61 +0x013:  jmp    0847f171 <+0x423>
0847ed66 +0x018:  mov    -0x1c(%ebp),%eax
0847ed69 +0x01b:  mov    0x8(%ebp),%edx
0847ed6c +0x01e:  shl    $0x2,%eax
0847ed6f +0x021:  mov    %eax,%ecx
0847ed71 +0x023:  shl    $0x5,%ecx
0847ed74 +0x026:  add    %ecx,%eax
0847ed76 +0x028:  lea    (%edx,%eax,1),%eax
0847ed79 +0x02b:  add    $0x2c,%eax
0847ed7c +0x02e:  mov    (%eax),%edx
0847ed7e +0x030:  mov    0xc(%ebp),%eax
0847ed81 +0x033:  mov    (%eax),%eax
0847ed83 +0x035:  cmp    %eax,%edx
0847ed85 +0x037:  jne    0847f16d <+0x41f>
0847ed8b +0x03d:  mov    -0x1c(%ebp),%ebx
0847ed8e +0x040:  mov    0xc(%ebp),%eax
0847ed91 +0x043:  movzbl 0x22(%eax),%edx
0847ed95 +0x047:  mov    0x8(%ebp),%ecx
0847ed98 +0x04a:  mov    %ebx,%eax
0847ed9a +0x04c:  shl    $0x2,%eax
0847ed9d +0x04f:  mov    %eax,%ebx
0847ed9f +0x051:  shl    $0x5,%ebx
0847eda2 +0x054:  add    %ebx,%eax
0847eda4 +0x056:  lea    (%ecx,%eax,1),%eax
0847eda7 +0x059:  add    $0x40,%eax
0847edaa +0x05c:  mov    %dl,0xe(%eax)
0847edad +0x05f:  mov    -0x1c(%ebp),%ebx
0847edb0 +0x062:  mov    0xc(%ebp),%eax
0847edb3 +0x065:  movzbl 0x23(%eax),%edx
0847edb7 +0x069:  mov    0x8(%ebp),%ecx
0847edba +0x06c:  mov    %ebx,%eax
0847edbc +0x06e:  shl    $0x2,%eax
0847edbf +0x071:  mov    %eax,%ebx
0847edc1 +0x073:  shl    $0x5,%ebx
0847edc4 +0x076:  add    %ebx,%eax
0847edc6 +0x078:  lea    (%ecx,%eax,1),%eax
0847edc9 +0x07b:  add    $0x40,%eax
0847edcc +0x07e:  mov    %dl,0xf(%eax)
0847edcf +0x081:  mov    -0x1c(%ebp),%ebx
0847edd2 +0x084:  mov    0xc(%ebp),%eax
0847edd5 +0x087:  movzbl 0x24(%eax),%edx
0847edd9 +0x08b:  mov    0x8(%ebp),%ecx
0847eddc +0x08e:  mov    %ebx,%eax
0847edde +0x090:  shl    $0x2,%eax
0847ede1 +0x093:  mov    %eax,%ebx
0847ede3 +0x095:  shl    $0x5,%ebx
0847ede6 +0x098:  add    %ebx,%eax
0847ede8 +0x09a:  lea    (%ecx,%eax,1),%eax
0847edeb +0x09d:  add    $0x40,%eax
0847edee +0x0a0:  mov    %dl,0x10(%eax)
0847edf1 +0x0a3:  mov    -0x1c(%ebp),%ebx
0847edf4 +0x0a6:  mov    0xc(%ebp),%eax
0847edf7 +0x0a9:  mov    0x50(%eax),%edx
0847edfa +0x0ac:  mov    0x8(%ebp),%ecx
0847edfd +0x0af:  mov    %ebx,%eax
0847edff +0x0b1:  shl    $0x2,%eax
0847ee02 +0x0b4:  mov    %eax,%ebx
0847ee04 +0x0b6:  shl    $0x5,%ebx
0847ee07 +0x0b9:  add    %ebx,%eax
0847ee09 +0x0bb:  lea    (%ecx,%eax,1),%eax
0847ee0c +0x0be:  add    $0x7c,%eax
0847ee0f +0x0c1:  mov    %edx,(%eax)
0847ee11 +0x0c3:  mov    0xc(%ebp),%eax
0847ee14 +0x0c6:  lea    0x4(%eax),%edx
0847ee17 +0x0c9:  mov    -0x1c(%ebp),%eax
0847ee1a +0x0cc:  shl    $0x2,%eax
0847ee1d +0x0cf:  mov    %eax,%ecx
0847ee1f +0x0d1:  shl    $0x5,%ecx
0847ee22 +0x0d4:  add    %ecx,%eax
0847ee24 +0x0d6:  add    $0x20,%eax
0847ee27 +0x0d9:  add    0x8(%ebp),%eax
0847ee2a +0x0dc:  add    $0x10,%eax
0847ee2d +0x0df:  movl   $0x1e,0x8(%esp)
0847ee35 +0x0e7:  mov    %edx,0x4(%esp)
0847ee39 +0x0eb:  mov    %eax,(%esp)
0847ee3c +0x0ee:  call   0807d8d0 <_init+0x1c8>
0847ee41 +0x0f3:  mov    0xc(%ebp),%eax
0847ee44 +0x0f6:  lea    0x25(%eax),%edx
0847ee47 +0x0f9:  mov    -0x1c(%ebp),%eax
0847ee4a +0x0fc:  shl    $0x2,%eax
0847ee4d +0x0ff:  mov    %eax,%ecx
0847ee4f +0x101:  shl    $0x5,%ecx
0847ee52 +0x104:  add    %ecx,%eax
0847ee54 +0x106:  add    $0x40,%eax
0847ee57 +0x109:  add    0x8(%ebp),%eax
0847ee5a +0x10c:  add    $0x11,%eax
0847ee5d +0x10f:  movl   $0x28,0x8(%esp)
0847ee65 +0x117:  mov    %edx,0x4(%esp)
0847ee69 +0x11b:  mov    %eax,(%esp)
0847ee6c +0x11e:  call   0807d8d0 <_init+0x1c8>
0847ee71 +0x123:  mov    0xc(%ebp),%eax
0847ee74 +0x126:  lea    0x54(%eax),%edx
0847ee77 +0x129:  mov    -0x1c(%ebp),%eax
0847ee7a +0x12c:  shl    $0x2,%eax
0847ee7d +0x12f:  mov    %eax,%ecx
0847ee7f +0x131:  shl    $0x5,%ecx
0847ee82 +0x134:  add    %ecx,%eax
0847ee84 +0x136:  add    $0x70,%eax
0847ee87 +0x139:  add    0x8(%ebp),%eax
0847ee8a +0x13c:  add    $0x10,%eax
0847ee8d +0x13f:  movl   $0x2c,0x8(%esp)
0847ee95 +0x147:  mov    %edx,0x4(%esp)
0847ee99 +0x14b:  mov    %eax,(%esp)
0847ee9c +0x14e:  call   0807d8a0 <_init+0x198>
0847eea1 +0x153:  mov    -0x1c(%ebp),%eax
0847eea4 +0x156:  mov    0x8(%ebp),%edx
0847eea7 +0x159:  shl    $0x2,%eax
0847eeaa +0x15c:  mov    %eax,%ecx
0847eeac +0x15e:  shl    $0x5,%ecx
0847eeaf +0x161:  add    %ecx,%eax
0847eeb1 +0x163:  lea    (%edx,%eax,1),%eax
0847eeb4 +0x166:  add    $0x20,%eax
0847eeb7 +0x169:  movb   $0x1,0x8(%eax)
0847eebb +0x16d:  mov    -0x1c(%ebp),%eax
0847eebe +0x170:  mov    0x8(%ebp),%edx
0847eec1 +0x173:  shl    $0x2,%eax
0847eec4 +0x176:  mov    %eax,%ecx
0847eec6 +0x178:  shl    $0x5,%ecx
0847eec9 +0x17b:  add    %ecx,%eax
0847eecb +0x17d:  lea    (%edx,%eax,1),%eax
0847eece +0x180:  add    $0xa8,%eax
0847eed3 +0x185:  mov    (%eax),%eax
0847eed5 +0x187:  mov    %eax,-0x70(%ebp)
0847eed8 +0x18a:  mov    -0x1c(%ebp),%eax
0847eedb +0x18d:  mov    0x8(%ebp),%edx
0847eede +0x190:  shl    $0x2,%eax
0847eee1 +0x193:  mov    %eax,%ecx
0847eee3 +0x195:  shl    $0x5,%ecx
0847eee6 +0x198:  add    %ecx,%eax
0847eee8 +0x19a:  lea    (%edx,%eax,1),%eax
0847eeeb +0x19d:  add    $0xa0,%eax
0847eef0 +0x1a2:  mov    (%eax),%eax
0847eef2 +0x1a4:  mov    %eax,-0x6c(%ebp)
0847eef5 +0x1a7:  mov    -0x1c(%ebp),%eax
0847eef8 +0x1aa:  mov    0x8(%ebp),%edx
0847eefb +0x1ad:  shl    $0x2,%eax
0847eefe +0x1b0:  mov    %eax,%ecx
0847ef00 +0x1b2:  shl    $0x5,%ecx
0847ef03 +0x1b5:  add    %ecx,%eax
0847ef05 +0x1b7:  lea    (%edx,%eax,1),%eax
0847ef08 +0x1ba:  add    $0x9c,%eax
0847ef0d +0x1bf:  mov    (%eax),%eax
0847ef0f +0x1c1:  mov    %eax,-0x68(%ebp)
0847ef12 +0x1c4:  mov    -0x1c(%ebp),%eax
0847ef15 +0x1c7:  mov    0x8(%ebp),%edx
0847ef18 +0x1ca:  shl    $0x2,%eax
0847ef1b +0x1cd:  mov    %eax,%ecx
0847ef1d +0x1cf:  shl    $0x5,%ecx
0847ef20 +0x1d2:  add    %ecx,%eax
0847ef22 +0x1d4:  lea    (%edx,%eax,1),%eax
0847ef25 +0x1d7:  add    $0x98,%eax
0847ef2a +0x1dc:  mov    (%eax),%eax
0847ef2c +0x1de:  mov    %eax,-0x64(%ebp)
0847ef2f +0x1e1:  mov    -0x1c(%ebp),%eax
0847ef32 +0x1e4:  mov    0x8(%ebp),%edx
0847ef35 +0x1e7:  add    $0x1,%eax
0847ef38 +0x1ea:  shl    $0x2,%eax
0847ef3b +0x1ed:  mov    %eax,%ecx
0847ef3d +0x1ef:  shl    $0x5,%ecx
0847ef40 +0x1f2:  add    %ecx,%eax
0847ef42 +0x1f4:  lea    (%edx,%eax,1),%eax
0847ef45 +0x1f7:  add    $0x10,%eax
0847ef48 +0x1fa:  mov    (%eax),%eax
0847ef4a +0x1fc:  mov    %eax,-0x60(%ebp)
0847ef4d +0x1ff:  mov    -0x1c(%ebp),%eax
0847ef50 +0x202:  mov    0x8(%ebp),%ecx
0847ef53 +0x205:  shl    $0x2,%eax
0847ef56 +0x208:  mov    %eax,%edx
0847ef58 +0x20a:  shl    $0x5,%edx
0847ef5b +0x20d:  add    %edx,%eax
0847ef5d +0x20f:  lea    (%ecx,%eax,1),%eax
0847ef60 +0x212:  add    $0x90,%eax
0847ef65 +0x217:  mov    (%eax),%eax
0847ef67 +0x219:  mov    %eax,-0x5c(%ebp)
0847ef6a +0x21c:  mov    -0x1c(%ebp),%eax
0847ef6d +0x21f:  mov    0x8(%ebp),%ecx
0847ef70 +0x222:  lea    0x0(,%eax,4),%edx
0847ef77 +0x229:  mov    %edx,%eax
0847ef79 +0x22b:  shl    $0x5,%eax
0847ef7c +0x22e:  add    %eax,%edx
0847ef7e +0x230:  lea    (%ecx,%edx,1),%eax
0847ef81 +0x233:  add    $0x8c,%eax
0847ef86 +0x238:  mov    (%eax),%eax
0847ef88 +0x23a:  mov    %eax,-0x58(%ebp)
0847ef8b +0x23d:  mov    -0x1c(%ebp),%eax
0847ef8e +0x240:  mov    0x8(%ebp),%ecx
0847ef91 +0x243:  lea    0x0(,%eax,4),%edx
0847ef98 +0x24a:  mov    %edx,%eax
0847ef9a +0x24c:  shl    $0x5,%eax
0847ef9d +0x24f:  add    %eax,%edx
0847ef9f +0x251:  lea    (%ecx,%edx,1),%eax
0847efa2 +0x254:  add    $0x88,%eax
0847efa7 +0x259:  mov    (%eax),%eax
0847efa9 +0x25b:  mov    %eax,-0x54(%ebp)
0847efac +0x25e:  mov    -0x1c(%ebp),%eax
0847efaf +0x261:  mov    0x8(%ebp),%ecx
0847efb2 +0x264:  lea    0x0(,%eax,4),%edx
0847efb9 +0x26b:  mov    %edx,%eax
0847efbb +0x26d:  shl    $0x5,%eax
0847efbe +0x270:  add    %eax,%edx
0847efc0 +0x272:  lea    (%ecx,%edx,1),%eax
0847efc3 +0x275:  add    $0x84,%eax
0847efc8 +0x27a:  mov    (%eax),%eax
0847efca +0x27c:  mov    %eax,-0x50(%ebp)
0847efcd +0x27f:  mov    -0x1c(%ebp),%eax
0847efd0 +0x282:  mov    0x8(%ebp),%ecx
0847efd3 +0x285:  lea    0x0(,%eax,4),%edx
0847efda +0x28c:  mov    %edx,%eax
0847efdc +0x28e:  shl    $0x5,%eax
0847efdf +0x291:  add    %eax,%edx
0847efe1 +0x293:  lea    (%ecx,%edx,1),%eax
0847efe4 +0x296:  sub    $0xffffff80,%eax
0847efe7 +0x299:  mov    (%eax),%eax
0847efe9 +0x29b:  mov    %eax,-0x4c(%ebp)
0847efec +0x29e:  mov    -0x1c(%ebp),%eax
0847efef +0x2a1:  mov    0x8(%ebp),%ecx
0847eff2 +0x2a4:  lea    0x0(,%eax,4),%edx
0847eff9 +0x2ab:  mov    %edx,%eax
0847effb +0x2ad:  shl    $0x5,%eax
0847effe +0x2b0:  add    %eax,%edx
0847f000 +0x2b2:  lea    (%ecx,%edx,1),%eax
0847f003 +0x2b5:  add    $0x7c,%eax
0847f006 +0x2b8:  mov    (%eax),%eax
0847f008 +0x2ba:  mov    %eax,-0x48(%ebp)
0847f00b +0x2bd:  mov    -0x1c(%ebp),%eax
0847f00e +0x2c0:  lea    0x0(,%eax,4),%edx
0847f015 +0x2c7:  mov    %edx,%eax
0847f017 +0x2c9:  shl    $0x5,%eax
0847f01a +0x2cc:  add    %eax,%edx
0847f01c +0x2ce:  lea    0x40(%edx),%eax
0847f01f +0x2d1:  add    0x8(%ebp),%eax
0847f022 +0x2d4:  add    $0x11,%eax
0847f025 +0x2d7:  mov    %eax,-0x44(%ebp)
0847f028 +0x2da:  mov    -0x1c(%ebp),%eax
0847f02b +0x2dd:  mov    0x8(%ebp),%ecx
0847f02e +0x2e0:  lea    0x0(,%eax,4),%edx
0847f035 +0x2e7:  mov    %edx,%eax
0847f037 +0x2e9:  shl    $0x5,%eax
0847f03a +0x2ec:  add    %eax,%edx
0847f03c +0x2ee:  lea    (%ecx,%edx,1),%eax
0847f03f +0x2f1:  add    $0x40,%eax
0847f042 +0x2f4:  movzbl 0x10(%eax),%eax
0847f046 +0x2f8:  movsbl %al,%eax
0847f049 +0x2fb:  mov    %eax,-0x40(%ebp)
0847f04c +0x2fe:  mov    -0x1c(%ebp),%eax
0847f04f +0x301:  mov    0x8(%ebp),%ecx
0847f052 +0x304:  lea    0x0(,%eax,4),%edx
0847f059 +0x30b:  mov    %edx,%eax
0847f05b +0x30d:  shl    $0x5,%eax
0847f05e +0x310:  add    %eax,%edx
0847f060 +0x312:  lea    (%ecx,%edx,1),%eax
0847f063 +0x315:  add    $0x40,%eax
0847f066 +0x318:  movzbl 0xe(%eax),%eax
0847f06a +0x31c:  movsbl %al,%eax
0847f06d +0x31f:  mov    %eax,-0x3c(%ebp)
0847f070 +0x322:  mov    -0x1c(%ebp),%eax
0847f073 +0x325:  mov    0x8(%ebp),%ecx
0847f076 +0x328:  lea    0x0(,%eax,4),%edx
0847f07d +0x32f:  mov    %edx,%eax
0847f07f +0x331:  shl    $0x5,%eax
0847f082 +0x334:  add    %eax,%edx
0847f084 +0x336:  lea    (%ecx,%edx,1),%eax
0847f087 +0x339:  add    $0x40,%eax
0847f08a +0x33c:  movzbl 0xf(%eax),%eax
0847f08e +0x340:  movsbl %al,%edi
0847f091 +0x343:  mov    -0x1c(%ebp),%eax
0847f094 +0x346:  mov    0x8(%ebp),%ecx
0847f097 +0x349:  lea    0x0(,%eax,4),%edx
0847f09e +0x350:  mov    %edx,%eax
0847f0a0 +0x352:  shl    $0x5,%eax
0847f0a3 +0x355:  add    %eax,%edx
0847f0a5 +0x357:  lea    (%ecx,%edx,1),%eax
0847f0a8 +0x35a:  add    $0x2c,%eax
0847f0ab +0x35d:  mov    (%eax),%esi
0847f0ad +0x35f:  mov    -0x1c(%ebp),%eax
0847f0b0 +0x362:  lea    0x0(,%eax,4),%edx
0847f0b7 +0x369:  mov    %edx,%eax
0847f0b9 +0x36b:  shl    $0x5,%eax
0847f0bc +0x36e:  add    %eax,%edx
0847f0be +0x370:  lea    0x20(%edx),%eax
0847f0c1 +0x373:  add    0x8(%ebp),%eax
0847f0c4 +0x376:  lea    0x10(%eax),%ebx
0847f0c7 +0x379:  movl   $0x0,0xc(%esp)
0847f0cf +0x381:  movl   $0xa4,0x8(%esp)
0847f0d7 +0x389:  movl   $&_ZZN13CPowerManager25SetPowerWarUserStatueInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOE19__PRETTY_FUNCTION__,0x4(%esp)
0847f0df +0x391:  lea    -0x2c(%ebp),%eax
0847f0e2 +0x394:  mov    %eax,(%esp)
0847f0e5 +0x397:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0847f0ea +0x39c:  mov    -0x70(%ebp),%eax
0847f0ed +0x39f:  mov    %eax,0x48(%esp)
0847f0f1 +0x3a3:  mov    -0x6c(%ebp),%eax
0847f0f4 +0x3a6:  mov    %eax,0x44(%esp)
0847f0f8 +0x3aa:  mov    -0x68(%ebp),%eax
0847f0fb +0x3ad:  mov    %eax,0x40(%esp)
0847f0ff +0x3b1:  mov    -0x64(%ebp),%eax
0847f102 +0x3b4:  mov    %eax,0x3c(%esp)
0847f106 +0x3b8:  mov    -0x60(%ebp),%eax
0847f109 +0x3bb:  mov    %eax,0x38(%esp)
0847f10d +0x3bf:  mov    -0x5c(%ebp),%eax
0847f110 +0x3c2:  mov    %eax,0x34(%esp)
0847f114 +0x3c6:  mov    -0x58(%ebp),%eax
0847f117 +0x3c9:  mov    %eax,0x30(%esp)
0847f11b +0x3cd:  mov    -0x54(%ebp),%eax
0847f11e +0x3d0:  mov    %eax,0x2c(%esp)
0847f122 +0x3d4:  mov    -0x50(%ebp),%eax
0847f125 +0x3d7:  mov    %eax,0x28(%esp)
0847f129 +0x3db:  mov    -0x4c(%ebp),%eax
0847f12c +0x3de:  mov    %eax,0x24(%esp)
0847f130 +0x3e2:  mov    -0x48(%ebp),%eax
0847f133 +0x3e5:  mov    %eax,0x20(%esp)
0847f137 +0x3e9:  mov    -0x44(%ebp),%eax
0847f13a +0x3ec:  mov    %eax,0x1c(%esp)
0847f13e +0x3f0:  mov    -0x40(%ebp),%eax
0847f141 +0x3f3:  mov    %eax,0x18(%esp)
0847f145 +0x3f7:  mov    -0x3c(%ebp),%eax
0847f148 +0x3fa:  mov    %eax,0x14(%esp)
0847f14c +0x3fe:  mov    %edi,0x10(%esp)
0847f150 +0x402:  mov    %esi,0xc(%esp)
0847f154 +0x406:  mov    %ebx,0x8(%esp)
0847f158 +0x40a:  movl   $"Set Statue Ranker %s(%d), job:%d, lev:%d, grow:%d, guild_name:%s, guild_id:%d, EQUP [head:%d][hair:%d][face:%d][jacket:%d][pants:%d][shoes:%d][breast:%d][waist:%d][skin:%d][weapon:%d]",0x4(%esp)
0847f160 +0x412:  lea    -0x2c(%ebp),%eax
0847f163 +0x415:  mov    %eax,(%esp)
0847f166 +0x418:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0847f16b +0x41d:  jmp    0847f182 <+0x434>
0847f16d +0x41f:  addl   $0x1,-0x1c(%ebp)
0847f171 +0x423:  mov    -0x1c(%ebp),%eax
0847f174 +0x426:  cmp    $0x2,%eax
0847f177 +0x429:  setbe  %al
0847f17a +0x42c:  test   %al,%al
0847f17c +0x42e:  jne    0847ed66 <+0x18>
0847f182 +0x434:  mov    0x8(%ebp),%eax
0847f185 +0x437:  mov    %eax,(%esp)
0847f188 +0x43a:  call   0847f1b0 <_ZN13CPowerManager29CheckCompleteDBLoadStatueInfoEv>  ; CPowerManager::CheckCompleteDBLoadStatueInfo()
0847f18d +0x43f:  test   %al,%al
0847f18f +0x441:  je     0847f1a4 <+0x456>
0847f191 +0x443:  movl   $0x0,0x4(%esp)
0847f199 +0x44b:  mov    0x8(%ebp),%eax
0847f19c +0x44e:  mov    %eax,(%esp)
0847f19f +0x451:  call   0847f200 <_ZN13CPowerManager26SendPowerWarUserStatueInfoEP5CUser>  ; CPowerManager::SendPowerWarUserStatueInfo(CUser*)
0847f1a4 +0x456:  add    $0xbc,%esp
0847f1aa +0x45c:  pop    %ebx
0847f1ab +0x45d:  pop    %esi
0847f1ac +0x45e:  pop    %edi
0847f1ad +0x45f:  pop    %ebp
0847f1ae +0x460:  ret
0847f1af +0x461:  nop
```

## 反编译 C

```c
// CPowerManager::SetPowerWarUserStatueInfo @ 0x847ed4e

/* CPowerManager::SetPowerWarUserStatueInfo(SIG_LOAD_POWER_WAR_STATUE_INFO*) */

void __thiscall
CPowerManager::SetPowerWarUserStatueInfo
          (CPowerManager *this,SIG_LOAD_POWER_WAR_STATUE_INFO *param_1)

{
  CPowerManager CVar1;
  CPowerManager CVar2;
  CPowerManager CVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iVar16;
  int iVar17;
  char cVar18;
  cMyTrace local_30 [16];
  uint local_20;
  
  local_20 = 0;
  do {
    if (2 < local_20) {
LAB_0847f182:
      cVar18 = CheckCompleteDBLoadStatueInfo(this);
      if (cVar18 != '\0') {
        SendPowerWarUserStatueInfo(this,(CUser *)0x0);
      }
      return;
    }
    if (*(int *)(this + local_20 * 0x84 + 0x2c) == *(int *)param_1) {
      this[local_20 * 0x84 + 0x4e] = *(CPowerManager *)(param_1 + 0x22);
      this[local_20 * 0x84 + 0x4f] = *(CPowerManager *)(param_1 + 0x23);
      this[local_20 * 0x84 + 0x50] = *(CPowerManager *)(param_1 + 0x24);
      *(undefined4 *)(this + local_20 * 0x84 + 0x7c) = *(undefined4 *)(param_1 + 0x50);
      strncpy((char *)(this + local_20 * 0x84 + 0x30),(char *)(param_1 + 4),0x1e);
      strncpy((char *)(this + local_20 * 0x84 + 0x51),(char *)(param_1 + 0x25),0x28);
      memcpy(this + local_20 * 0x84 + 0x80,param_1 + 0x54,0x2c);
      this[local_20 * 0x84 + 0x28] = (CPowerManager)0x1;
      uVar4 = *(undefined4 *)(this + local_20 * 0x84 + 0xa8);
      uVar5 = *(undefined4 *)(this + local_20 * 0x84 + 0xa0);
      uVar6 = *(undefined4 *)(this + local_20 * 0x84 + 0x9c);
      uVar7 = *(undefined4 *)(this + local_20 * 0x84 + 0x98);
      uVar8 = *(undefined4 *)(this + (local_20 + 1) * 0x84 + 0x10);
      uVar9 = *(undefined4 *)(this + local_20 * 0x84 + 0x90);
      uVar10 = *(undefined4 *)(this + local_20 * 0x84 + 0x8c);
      uVar11 = *(undefined4 *)(this + local_20 * 0x84 + 0x88);
      uVar12 = *(undefined4 *)(this + local_20 * 0x84 + 0x84);
      uVar13 = *(undefined4 *)(this + local_20 * 0x84 + 0x80);
      uVar14 = *(undefined4 *)(this + local_20 * 0x84 + 0x7c);
      iVar16 = local_20 * 0x84;
      CVar1 = this[local_20 * 0x84 + 0x50];
      CVar2 = this[local_20 * 0x84 + 0x4e];
      CVar3 = this[local_20 * 0x84 + 0x4f];
      uVar15 = *(undefined4 *)(this + local_20 * 0x84 + 0x2c);
      iVar17 = local_20 * 0x84;
      cMyTrace::cMyTrace(local_30,
                         "void CPowerManager::SetPowerWarUserStatueInfo(SIG_LOAD_POWER_WAR_STATUE_INFO*)"
                         ,0xa4,0);
      cMyTrace::operator()
                (local_30,
                 "Set Statue Ranker %s(%d), job:%d, lev:%d, grow:%d, guild_name:%s, guild_id:%d, EQUP [head:%d][hair:%d][face:%d][jacket:%d][pants:%d][shoes:%d][breast:%d][waist:%d][skin:%d][weapon:%d]"
                 ,this + iVar17 + 0x30,uVar15,(int)(char)CVar3,(int)(char)CVar2,(int)(char)CVar1,
                 this + iVar16 + 0x51,uVar14,uVar13,uVar12,uVar11,uVar10,uVar9,uVar8,uVar7,uVar6,
                 uVar5,uVar4);
      goto LAB_0847f182;
    }
    local_20 = local_20 + 1;
  } while( true );
}
```
