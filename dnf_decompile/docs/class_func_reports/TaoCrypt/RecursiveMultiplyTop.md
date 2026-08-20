# RecursiveMultiplyTop

`_ZN8TaoCrypt20RecursiveMultiplyTopEPjS0_PKjS2_S2_j`

`TaoCrypt::RecursiveMultiplyTop(unsigned int*, unsigned int*, unsigned int const*, unsigned int const*, unsigned int const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `TaoCrypt` | `0x0875d980` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0875d980  _ZN8TaoCrypt20RecursiveMultiplyTopEPjS0_PKjS2_S2_j
#           TaoCrypt::RecursiveMultiplyTop(unsigned int*, unsigned int*, unsigned int const*, unsigned int const*, unsigned int const*, unsigned int)
# range [0x0875d980, 0x0875dfc9]
0875d980 +0x000:  push   %ebp
0875d981 +0x001:  mov    %esp,%ebp
0875d983 +0x003:  push   %edi
0875d984 +0x004:  push   %esi
0875d985 +0x005:  push   %ebx
0875d986 +0x006:  sub    $0x5c,%esp
0875d989 +0x009:  call   08722df8 <__i686.get_pc_thunk.bx>
0875d98e +0x00e:  add    $0xc0f20a,%ebx
0875d994 +0x014:  cmpl   $0x4,0x1c(%ebp)
0875d998 +0x018:  je     0875df38 <+0x5b8>
0875d99e +0x01e:  cmpl   $0x2,0x1c(%ebp)
0875d9a2 +0x022:  je     0875df79 <+0x5f9>
0875d9a8 +0x028:  mov    0x1c(%ebp),%eax
0875d9ab +0x02b:  mov    0x14(%ebp),%edx
0875d9ae +0x02e:  mov    0x14(%ebp),%ecx
0875d9b1 +0x031:  shr    %eax
0875d9b3 +0x033:  mov    %eax,-0x20(%ebp)
0875d9b6 +0x036:  shl    $0x2,%eax
0875d9b9 +0x039:  add    %eax,%edx
0875d9bb +0x03b:  mov    %eax,-0x28(%ebp)
0875d9be +0x03e:  sub    $0x4,%eax
0875d9c1 +0x041:  mov    %edx,-0x3c(%ebp)
0875d9c4 +0x044:  add    %eax,%ecx
0875d9c6 +0x046:  add    %eax,%edx
0875d9c8 +0x048:  mov    %eax,-0x24(%ebp)
0875d9cb +0x04b:  mov    -0x20(%ebp),%eax
0875d9ce +0x04e:  xchg   %ax,%ax
0875d9d0 +0x050:  test   %eax,%eax
0875d9d2 +0x052:  je     0875df08 <+0x588>
0875d9d8 +0x058:  mov    (%ecx),%edi
0875d9da +0x05a:  sub    $0x1,%eax
0875d9dd +0x05d:  mov    (%edx),%esi
0875d9df +0x05f:  cmp    %esi,%edi
0875d9e1 +0x061:  ja     0875df28 <+0x5a8>
0875d9e7 +0x067:  sub    $0x4,%ecx
0875d9ea +0x06a:  sub    $0x4,%edx
0875d9ed +0x06d:  cmp    %esi,%edi
0875d9ef +0x06f:  jae    0875d9d0 <+0x50>
0875d9f1 +0x071:  movl   $0xfffffffd,-0x34(%ebp)
0875d9f8 +0x078:  mov    0x18(%ebp),%ecx
0875d9fb +0x07b:  add    -0x28(%ebp),%ecx
0875d9fe +0x07e:  mov    -0x20(%ebp),%eax
0875da01 +0x081:  mov    %ecx,-0x38(%ebp)
0875da04 +0x084:  mov    0x18(%ebp),%ecx
0875da07 +0x087:  mov    -0x38(%ebp),%edx
0875da0a +0x08a:  add    -0x24(%ebp),%ecx
0875da0d +0x08d:  add    -0x24(%ebp),%edx
0875da10 +0x090:  test   %eax,%eax
0875da12 +0x092:  je     0875da32 <+0xb2>
0875da14 +0x094:  mov    (%ecx),%edi
0875da16 +0x096:  sub    $0x1,%eax
0875da19 +0x099:  mov    (%edx),%esi
0875da1b +0x09b:  cmp    %esi,%edi
0875da1d +0x09d:  ja     0875df18 <+0x598>
0875da23 +0x0a3:  sub    $0x4,%ecx
0875da26 +0x0a6:  sub    $0x4,%edx
0875da29 +0x0a9:  cmp    %esi,%edi
0875da2b +0x0ab:  jae    0875da10 <+0x90>
0875da2d +0x0ad:  mov    $0xffffffff,%eax
0875da32 +0x0b2:  add    -0x34(%ebp),%eax
0875da35 +0x0b5:  cmp    $0xfffffffe,%eax
0875da38 +0x0b8:  je     0875de28 <+0x4a8>
0875da3e +0x0be:  jle    0875daf0 <+0x170>
0875da44 +0x0c4:  cmp    $0x2,%eax
0875da47 +0x0c7:  je     0875dda0 <+0x420>
0875da4d +0x0cd:  cmp    $0x4,%eax
0875da50 +0x0d0:  jne    0875daf9 <+0x179>
0875da56 +0x0d6:  mov    -0x20(%ebp),%eax
0875da59 +0x0d9:  mov    0x14(%ebp),%edx
0875da5c +0x0dc:  mov    -0x3c(%ebp),%ecx
0875da5f +0x0df:  mov    %eax,0xc(%esp)
0875da63 +0x0e3:  mov    0x8(%ebp),%eax
0875da66 +0x0e6:  mov    %edx,0x8(%esp)
0875da6a +0x0ea:  mov    %ecx,0x4(%esp)
0875da6e +0x0ee:  mov    %eax,(%esp)
0875da71 +0x0f1:  call   *0x124c90(%ebx)
0875da77 +0x0f7:  mov    -0x20(%ebp),%edx
0875da7a +0x0fa:  mov    -0x38(%ebp),%ecx
0875da7d +0x0fd:  mov    0x8(%ebp),%esi
0875da80 +0x100:  mov    0x18(%ebp),%eax
0875da83 +0x103:  add    -0x28(%ebp),%esi
0875da86 +0x106:  mov    %edx,0xc(%esp)
0875da8a +0x10a:  mov    %ecx,0x8(%esp)
0875da8e +0x10e:  mov    %eax,0x4(%esp)
0875da92 +0x112:  mov    %esi,(%esp)
0875da95 +0x115:  call   *0x124c90(%ebx)
0875da9b +0x11b:  mov    0xc(%ebp),%ecx
0875da9e +0x11e:  mov    0x1c(%ebp),%edx
0875daa1 +0x121:  mov    -0x20(%ebp),%eax
0875daa4 +0x124:  mov    %esi,0xc(%esp)
0875daa8 +0x128:  mov    %ecx,(%esp)
0875daab +0x12b:  lea    (%ecx,%edx,4),%edi
0875daae +0x12e:  mov    0x8(%ebp),%edx
0875dab1 +0x131:  mov    %eax,0x10(%esp)
0875dab5 +0x135:  mov    %edi,0x4(%esp)
0875dab9 +0x139:  mov    %edx,0x8(%esp)
0875dabd +0x13d:  call   0875bdc0 <_ZN8TaoCrypt17RecursiveMultiplyEPjS0_PKjS2_j>  ; TaoCrypt::RecursiveMultiply(unsigned int*, unsigned int*, unsigned int const*, unsigned int const*, unsigned int)
0875dac2 +0x142:  mov    0xc(%ebp),%ecx
0875dac5 +0x145:  mov    -0x20(%ebp),%eax
0875dac8 +0x148:  add    -0x28(%ebp),%ecx
0875dacb +0x14b:  mov    %esi,0x8(%esp)
0875dacf +0x14f:  mov    %ecx,-0x2c(%ebp)
0875dad2 +0x152:  mov    %eax,0xc(%esp)
0875dad6 +0x156:  mov    %ecx,0x4(%esp)
0875dada +0x15a:  mov    %ecx,(%esp)
0875dadd +0x15d:  call   *0x124c90(%ebx)
0875dae3 +0x163:  movl   $0xffffffff,-0x34(%ebp)
0875daea +0x16a:  jmp    0875db40 <+0x1c0>
0875daec +0x16c:  lea    0x0(%esi,%eiz,1),%esi
0875daf0 +0x170:  cmp    $0xfffffffc,%eax
0875daf3 +0x173:  je     0875de68 <+0x4e8>
0875daf9 +0x179:  mov    0x1c(%ebp),%ecx
0875dafc +0x17c:  xor    %eax,%eax
0875dafe +0x17e:  test   %ecx,%ecx
0875db00 +0x180:  je     0875dfa8 <+0x628>
0875db06 +0x186:  mov    0xc(%ebp),%edx
0875db09 +0x189:  mov    0x1c(%ebp),%ecx
0875db0c +0x18c:  lea    0x0(%esi,%eiz,1),%esi
0875db10 +0x190:  movl   $0x0,(%edx,%eax,4)
0875db17 +0x197:  add    $0x1,%eax
0875db1a +0x19a:  cmp    %eax,%ecx
0875db1c +0x19c:  ja     0875db10 <+0x190>
0875db1e +0x19e:  mov    0xc(%ebp),%ecx
0875db21 +0x1a1:  mov    0x1c(%ebp),%edx
0875db24 +0x1a4:  mov    0x8(%ebp),%esi
0875db27 +0x1a7:  add    -0x28(%ebp),%esi
0875db2a +0x1aa:  movl   $0x0,-0x34(%ebp)
0875db31 +0x1b1:  lea    (%ecx,%edx,4),%edi
0875db34 +0x1b4:  add    -0x28(%ebp),%ecx
0875db37 +0x1b7:  mov    %ecx,-0x2c(%ebp)
0875db3a +0x1ba:  lea    0x0(%esi),%esi
0875db40 +0x1c0:  mov    -0x20(%ebp),%eax
0875db43 +0x1c3:  mov    -0x38(%ebp),%edx
0875db46 +0x1c6:  mov    -0x3c(%ebp),%ecx
0875db49 +0x1c9:  mov    %edi,(%esp)
0875db4c +0x1cc:  mov    %eax,0x10(%esp)
0875db50 +0x1d0:  mov    0x8(%ebp),%eax
0875db53 +0x1d3:  mov    %edx,0xc(%esp)
0875db57 +0x1d7:  mov    %ecx,0x8(%esp)
0875db5b +0x1db:  mov    %eax,0x4(%esp)
0875db5f +0x1df:  call   0875bdc0 <_ZN8TaoCrypt17RecursiveMultiplyEPjS0_PKjS2_j>  ; TaoCrypt::RecursiveMultiply(unsigned int*, unsigned int*, unsigned int const*, unsigned int const*, unsigned int)
0875db64 +0x1e4:  mov    0x10(%ebp),%ecx
0875db67 +0x1e7:  mov    -0x28(%ebp),%eax
0875db6a +0x1ea:  mov    -0x20(%ebp),%edx
0875db6d +0x1ed:  mov    %ecx,0x8(%esp)
0875db71 +0x1f1:  add    %ecx,%eax
0875db73 +0x1f3:  mov    %eax,0x4(%esp)
0875db77 +0x1f7:  mov    0x8(%ebp),%eax
0875db7a +0x1fa:  mov    %edx,0xc(%esp)
0875db7e +0x1fe:  mov    %eax,(%esp)
0875db81 +0x201:  call   *0x124c90(%ebx)
0875db87 +0x207:  mov    -0x20(%ebp),%edx
0875db8a +0x20a:  mov    0xc(%ebp),%ecx
0875db8d +0x20d:  mov    %edx,0xc(%esp)
0875db91 +0x211:  mov    %ecx,0x8(%esp)
0875db95 +0x215:  mov    %eax,-0x28(%ebp)
0875db98 +0x218:  mov    0x8(%ebp),%eax
0875db9b +0x21b:  mov    %eax,0x4(%esp)
0875db9f +0x21f:  mov    %eax,(%esp)
0875dba2 +0x222:  call   *0x124c90(%ebx)
0875dba8 +0x228:  mov    -0x24(%ebp),%edx
0875dbab +0x22b:  mov    0x8(%ebp),%ecx
0875dbae +0x22e:  add    -0x24(%ebp),%ecx
0875dbb1 +0x231:  mov    %esi,-0x24(%ebp)
0875dbb4 +0x234:  lea    (%edi,%edx,1),%edx
0875dbb7 +0x237:  mov    %eax,-0x30(%ebp)
0875dbba +0x23a:  mov    -0x20(%ebp),%eax
0875dbbd +0x23d:  lea    0x0(%esi),%esi
0875dbc0 +0x240:  test   %eax,%eax
0875dbc2 +0x242:  je     0875dd80 <+0x400>
0875dbc8 +0x248:  mov    (%ecx),%edi
0875dbca +0x24a:  sub    $0x1,%eax
0875dbcd +0x24d:  mov    (%edx),%esi
0875dbcf +0x24f:  cmp    %esi,%edi
0875dbd1 +0x251:  ja     0875dd80 <+0x400>
0875dbd7 +0x257:  sub    $0x4,%ecx
0875dbda +0x25a:  sub    $0x4,%edx
0875dbdd +0x25d:  cmp    %esi,%edi
0875dbdf +0x25f:  jae    0875dbc0 <+0x240>
0875dbe1 +0x261:  mov    -0x24(%ebp),%esi
0875dbe4 +0x264:  movl   $0x1,-0x24(%ebp)
0875dbeb +0x26b:  mov    0x8(%ebp),%ecx
0875dbee +0x26e:  mov    -0x28(%ebp),%eax
0875dbf1 +0x271:  add    -0x30(%ebp),%eax
0875dbf4 +0x274:  movl   $0x0,-0x28(%ebp)
0875dbfb +0x27b:  mov    (%ecx),%edx
0875dbfd +0x27d:  add    %edx,%eax
0875dbff +0x27f:  add    -0x24(%ebp),%eax
0875dc02 +0x282:  cmp    %eax,%edx
0875dc04 +0x284:  mov    %eax,(%ecx)
0875dc06 +0x286:  jbe    0875dd20 <+0x3a0>
0875dc0c +0x28c:  cmpl   $0x1,-0x20(%ebp)
0875dc10 +0x290:  movl   $0x1,-0x28(%ebp)
0875dc17 +0x297:  jbe    0875dd20 <+0x3a0>
0875dc1d +0x29d:  mov    0x4(%ecx),%edx
0875dc20 +0x2a0:  mov    $0x1,%eax
0875dc25 +0x2a5:  add    $0x1,%edx
0875dc28 +0x2a8:  test   %edx,%edx
0875dc2a +0x2aa:  mov    %edx,0x4(%ecx)
0875dc2d +0x2ad:  jne    0875dd90 <+0x410>
0875dc33 +0x2b3:  mov    -0x20(%ebp),%edi
0875dc36 +0x2b6:  mov    0x8(%ebp),%ecx
0875dc39 +0x2b9:  jmp    0875dc51 <+0x2d1>
0875dc3b +0x2bb:  nop
0875dc3c +0x2bc:  lea    0x0(%esi,%eiz,1),%esi
0875dc40 +0x2c0:  mov    (%ecx,%eax,4),%edx
0875dc43 +0x2c3:  add    $0x1,%edx
0875dc46 +0x2c6:  test   %edx,%edx
0875dc48 +0x2c8:  mov    %edx,(%ecx,%eax,4)
0875dc4b +0x2cb:  jne    0875dd90 <+0x410>
0875dc51 +0x2d1:  add    $0x1,%eax
0875dc54 +0x2d4:  cmp    %eax,%edi
0875dc56 +0x2d6:  ja     0875dc40 <+0x2c0>
0875dc58 +0x2d8:  movl   $0x1,-0x28(%ebp)
0875dc5f +0x2df:  mov    -0x20(%ebp),%edx
0875dc62 +0x2e2:  mov    -0x2c(%ebp),%ecx
0875dc65 +0x2e5:  mov    0x8(%ebp),%eax
0875dc68 +0x2e8:  mov    %edx,0xc(%esp)
0875dc6c +0x2ec:  mov    %ecx,0x8(%esp)
0875dc70 +0x2f0:  mov    %eax,0x4(%esp)
0875dc74 +0x2f4:  mov    %eax,(%esp)
0875dc77 +0x2f7:  call   *0x124c8c(%ebx)
0875dc7d +0x2fd:  mov    0xc(%ebp),%edx
0875dc80 +0x300:  mov    -0x20(%ebp),%ecx
0875dc83 +0x303:  mov    %ecx,0xc(%esp)
0875dc87 +0x307:  mov    %eax,-0x2c(%ebp)
0875dc8a +0x30a:  mov    -0x20(%ebp),%eax
0875dc8d +0x30d:  add    0x1c(%ebp),%eax
0875dc90 +0x310:  lea    (%edx,%eax,4),%edi
0875dc93 +0x313:  mov    0x8(%ebp),%eax
0875dc96 +0x316:  mov    %edi,0x8(%esp)
0875dc9a +0x31a:  mov    %eax,0x4(%esp)
0875dc9e +0x31e:  mov    %eax,(%esp)
0875dca1 +0x321:  call   *0x124c8c(%ebx)
0875dca7 +0x327:  mov    %eax,%ecx
0875dca9 +0x329:  mov    %ecx,-0x1c(%ebp)
0875dcac +0x32c:  mov    -0x20(%ebp),%ecx
0875dcaf +0x32f:  xor    %eax,%eax
0875dcb1 +0x331:  lea    0x0(%esi,%eiz,1),%esi
0875dcb8 +0x338:  mov    (%edi,%eax,4),%edx
0875dcbb +0x33b:  mov    %edx,(%esi,%eax,4)
0875dcbe +0x33e:  add    $0x1,%eax
0875dcc1 +0x341:  cmp    %eax,%ecx
0875dcc3 +0x343:  ja     0875dcb8 <+0x338>
0875dcc5 +0x345:  mov    -0x1c(%ebp),%ecx
0875dcc8 +0x348:  mov    (%esi),%eax
0875dcca +0x34a:  mov    -0x34(%ebp),%edx
0875dccd +0x34d:  lea    (%eax,%edx,1),%edx
0875dcd0 +0x350:  add    -0x24(%ebp),%edx
0875dcd3 +0x353:  add    -0x28(%ebp),%edx
0875dcd6 +0x356:  add    -0x2c(%ebp),%edx
0875dcd9 +0x359:  lea    (%edx,%ecx,1),%ecx
0875dcdc +0x35c:  cmp    %ecx,%eax
0875dcde +0x35e:  mov    %ecx,(%esi)
0875dce0 +0x360:  jbe    0875dd14 <+0x394>
0875dce2 +0x362:  cmpl   $0x1,-0x20(%ebp)
0875dce6 +0x366:  jbe    0875dd14 <+0x394>
0875dce8 +0x368:  mov    0x4(%esi),%edx
0875dceb +0x36b:  mov    $0x1,%eax
0875dcf0 +0x370:  add    $0x1,%edx
0875dcf3 +0x373:  test   %edx,%edx
0875dcf5 +0x375:  mov    %edx,0x4(%esi)
0875dcf8 +0x378:  jne    0875dd14 <+0x394>
0875dcfa +0x37a:  mov    -0x20(%ebp),%ecx
0875dcfd +0x37d:  jmp    0875dd0d <+0x38d>
0875dcff +0x37f:  nop
0875dd00 +0x380:  mov    (%esi,%eax,4),%edx
0875dd03 +0x383:  add    $0x1,%edx
0875dd06 +0x386:  test   %edx,%edx
0875dd08 +0x388:  mov    %edx,(%esi,%eax,4)
0875dd0b +0x38b:  jne    0875dd14 <+0x394>
0875dd0d +0x38d:  add    $0x1,%eax
0875dd10 +0x390:  cmp    %eax,%ecx
0875dd12 +0x392:  ja     0875dd00 <+0x380>
0875dd14 +0x394:  add    $0x5c,%esp
0875dd17 +0x397:  pop    %ebx
0875dd18 +0x398:  pop    %esi
0875dd19 +0x399:  pop    %edi
0875dd1a +0x39a:  pop    %ebp
0875dd1b +0x39b:  ret
0875dd1c +0x39c:  lea    0x0(%esi,%eiz,1),%esi
0875dd20 +0x3a0:  mov    -0x20(%ebp),%edx
0875dd23 +0x3a3:  mov    -0x2c(%ebp),%ecx
0875dd26 +0x3a6:  mov    0x8(%ebp),%eax
0875dd29 +0x3a9:  mov    %edx,0xc(%esp)
0875dd2d +0x3ad:  mov    %ecx,0x8(%esp)
0875dd31 +0x3b1:  mov    %eax,0x4(%esp)
0875dd35 +0x3b5:  mov    %eax,(%esp)
0875dd38 +0x3b8:  call   *0x124c8c(%ebx)
0875dd3e +0x3be:  mov    0xc(%ebp),%edx
0875dd41 +0x3c1:  mov    -0x20(%ebp),%ecx
0875dd44 +0x3c4:  mov    %ecx,0xc(%esp)
0875dd48 +0x3c8:  mov    %eax,-0x2c(%ebp)
0875dd4b +0x3cb:  mov    -0x20(%ebp),%eax
0875dd4e +0x3ce:  add    0x1c(%ebp),%eax
0875dd51 +0x3d1:  lea    (%edx,%eax,4),%edi
0875dd54 +0x3d4:  mov    0x8(%ebp),%eax
0875dd57 +0x3d7:  mov    %edi,0x8(%esp)
0875dd5b +0x3db:  mov    %eax,0x4(%esp)
0875dd5f +0x3df:  mov    %eax,(%esp)
0875dd62 +0x3e2:  call   *0x124c8c(%ebx)
0875dd68 +0x3e8:  mov    -0x20(%ebp),%edx
0875dd6b +0x3eb:  test   %edx,%edx
0875dd6d +0x3ed:  mov    %eax,%ecx
0875dd6f +0x3ef:  jne    0875dca9 <+0x329>
0875dd75 +0x3f5:  jmp    0875dcc8 <+0x348>
0875dd7a +0x3fa:  lea    0x0(%esi),%esi
0875dd80 +0x400:  mov    -0x24(%ebp),%esi
0875dd83 +0x403:  movl   $0x0,-0x24(%ebp)
0875dd8a +0x40a:  jmp    0875dbeb <+0x26b>
0875dd8f +0x40f:  nop
0875dd90 +0x410:  movl   $0x0,-0x28(%ebp)
0875dd97 +0x417:  jmp    0875dc5f <+0x2df>
0875dd9c +0x41c:  lea    0x0(%esi,%eiz,1),%esi
0875dda0 +0x420:  mov    -0x20(%ebp),%eax
0875dda3 +0x423:  mov    -0x3c(%ebp),%edx
0875dda6 +0x426:  mov    0x14(%ebp),%ecx
0875dda9 +0x429:  mov    %eax,0xc(%esp)
0875ddad +0x42d:  mov    0x8(%ebp),%eax
0875ddb0 +0x430:  mov    %edx,0x8(%esp)
0875ddb4 +0x434:  mov    %ecx,0x4(%esp)
0875ddb8 +0x438:  mov    %eax,(%esp)
0875ddbb +0x43b:  call   *0x124c90(%ebx)
0875ddc1 +0x441:  mov    -0x20(%ebp),%edx
0875ddc4 +0x444:  mov    0x18(%ebp),%ecx
0875ddc7 +0x447:  mov    0x8(%ebp),%esi
0875ddca +0x44a:  mov    -0x38(%ebp),%eax
0875ddcd +0x44d:  add    -0x28(%ebp),%esi
0875ddd0 +0x450:  mov    %edx,0xc(%esp)
0875ddd4 +0x454:  mov    %ecx,0x8(%esp)
0875ddd8 +0x458:  mov    %eax,0x4(%esp)
0875dddc +0x45c:  mov    %esi,(%esp)
0875dddf +0x45f:  call   *0x124c90(%ebx)
0875dde5 +0x465:  mov    0xc(%ebp),%ecx
0875dde8 +0x468:  mov    0x1c(%ebp),%edx
0875ddeb +0x46b:  mov    -0x20(%ebp),%eax
0875ddee +0x46e:  mov    %esi,0xc(%esp)
0875ddf2 +0x472:  mov    %ecx,(%esp)
0875ddf5 +0x475:  lea    (%ecx,%edx,4),%edi
0875ddf8 +0x478:  mov    0x8(%ebp),%edx
0875ddfb +0x47b:  mov    %eax,0x10(%esp)
0875ddff +0x47f:  mov    %edi,0x4(%esp)
0875de03 +0x483:  mov    %edx,0x8(%esp)
0875de07 +0x487:  call   0875bdc0 <_ZN8TaoCrypt17RecursiveMultiplyEPjS0_PKjS2_j>  ; TaoCrypt::RecursiveMultiply(unsigned int*, unsigned int*, unsigned int const*, unsigned int const*, unsigned int)
0875de0c +0x48c:  mov    0xc(%ebp),%ecx
0875de0f +0x48f:  add    -0x28(%ebp),%ecx
0875de12 +0x492:  movl   $0x0,-0x34(%ebp)
0875de19 +0x499:  mov    %ecx,-0x2c(%ebp)
0875de1c +0x49c:  jmp    0875db40 <+0x1c0>
0875de21 +0x4a1:  lea    0x0(%esi,%eiz,1),%esi
0875de28 +0x4a8:  mov    -0x20(%ebp),%eax
0875de2b +0x4ab:  mov    0x14(%ebp),%edx
0875de2e +0x4ae:  mov    -0x3c(%ebp),%ecx
0875de31 +0x4b1:  mov    %eax,0xc(%esp)
0875de35 +0x4b5:  mov    0x8(%ebp),%eax
0875de38 +0x4b8:  mov    %edx,0x8(%esp)
0875de3c +0x4bc:  mov    %ecx,0x4(%esp)
0875de40 +0x4c0:  mov    %eax,(%esp)
0875de43 +0x4c3:  call   *0x124c90(%ebx)
0875de49 +0x4c9:  mov    -0x20(%ebp),%edx
0875de4c +0x4cc:  mov    -0x38(%ebp),%ecx
0875de4f +0x4cf:  mov    0x8(%ebp),%esi
0875de52 +0x4d2:  add    -0x28(%ebp),%esi
0875de55 +0x4d5:  mov    %edx,0xc(%esp)
0875de59 +0x4d9:  mov    0x18(%ebp),%eax
0875de5c +0x4dc:  mov    %ecx,0x8(%esp)
0875de60 +0x4e0:  jmp    0875ddd8 <+0x458>
0875de65 +0x4e5:  lea    0x0(%esi),%esi
0875de68 +0x4e8:  mov    -0x20(%ebp),%edx
0875de6b +0x4eb:  mov    0x14(%ebp),%ecx
0875de6e +0x4ee:  mov    -0x3c(%ebp),%eax
0875de71 +0x4f1:  mov    %edx,0xc(%esp)
0875de75 +0x4f5:  mov    0x8(%ebp),%edx
0875de78 +0x4f8:  mov    %ecx,0x8(%esp)
0875de7c +0x4fc:  mov    %eax,0x4(%esp)
0875de80 +0x500:  mov    %edx,(%esp)
0875de83 +0x503:  call   *0x124c90(%ebx)
0875de89 +0x509:  mov    -0x20(%ebp),%ecx
0875de8c +0x50c:  mov    0x18(%ebp),%edx
0875de8f +0x50f:  mov    0x8(%ebp),%esi
0875de92 +0x512:  mov    -0x38(%ebp),%eax
0875de95 +0x515:  add    -0x28(%ebp),%esi
0875de98 +0x518:  mov    %ecx,0xc(%esp)
0875de9c +0x51c:  mov    %edx,0x4(%esp)
0875dea0 +0x520:  mov    %eax,0x8(%esp)
0875dea4 +0x524:  mov    %esi,(%esp)
0875dea7 +0x527:  call   *0x124c90(%ebx)
0875dead +0x52d:  mov    0xc(%ebp),%eax
0875deb0 +0x530:  mov    0x1c(%ebp),%ecx
0875deb3 +0x533:  mov    -0x20(%ebp),%edx
0875deb6 +0x536:  mov    %esi,0xc(%esp)
0875deba +0x53a:  mov    %eax,(%esp)
0875debd +0x53d:  lea    (%eax,%ecx,4),%edi
0875dec0 +0x540:  mov    0x8(%ebp),%ecx
0875dec3 +0x543:  mov    %edx,0x10(%esp)
0875dec7 +0x547:  mov    %edi,0x4(%esp)
0875decb +0x54b:  mov    %ecx,0x8(%esp)
0875decf +0x54f:  call   0875bdc0 <_ZN8TaoCrypt17RecursiveMultiplyEPjS0_PKjS2_j>  ; TaoCrypt::RecursiveMultiply(unsigned int*, unsigned int*, unsigned int const*, unsigned int const*, unsigned int)
0875ded4 +0x554:  mov    0xc(%ebp),%eax
0875ded7 +0x557:  mov    -0x20(%ebp),%edx
0875deda +0x55a:  mov    0x8(%ebp),%ecx
0875dedd +0x55d:  add    -0x28(%ebp),%eax
0875dee0 +0x560:  mov    %edx,0xc(%esp)
0875dee4 +0x564:  mov    %eax,-0x2c(%ebp)
0875dee7 +0x567:  mov    %ecx,0x8(%esp)
0875deeb +0x56b:  mov    %eax,0x4(%esp)
0875deef +0x56f:  mov    %eax,(%esp)
0875def2 +0x572:  call   *0x124c90(%ebx)
0875def8 +0x578:  movl   $0xffffffff,-0x34(%ebp)
0875deff +0x57f:  jmp    0875db40 <+0x1c0>
0875df04 +0x584:  lea    0x0(%esi,%eiz,1),%esi
0875df08 +0x588:  movl   $0x0,-0x34(%ebp)
0875df0f +0x58f:  jmp    0875d9f8 <+0x78>
0875df14 +0x594:  lea    0x0(%esi,%eiz,1),%esi
0875df18 +0x598:  mov    $0x1,%eax
0875df1d +0x59d:  jmp    0875da32 <+0xb2>
0875df22 +0x5a2:  lea    0x0(%esi),%esi
0875df28 +0x5a8:  movl   $0x3,-0x34(%ebp)
0875df2f +0x5af:  jmp    0875d9f8 <+0x78>
0875df34 +0x5b4:  lea    0x0(%esi,%eiz,1),%esi
0875df38 +0x5b8:  mov    0x18(%ebp),%eax
0875df3b +0x5bb:  mov    0x14(%ebp),%edx
0875df3e +0x5be:  mov    0xc(%ebp),%ecx
0875df41 +0x5c1:  mov    %eax,0x8(%esp)
0875df45 +0x5c5:  mov    %edx,0x4(%esp)
0875df49 +0x5c9:  mov    %ecx,(%esp)
0875df4c +0x5cc:  call   0875b670 <_ZN8TaoCrypt16PentiumOptimized9Multiply4EPjPKjS3_>  ; TaoCrypt::PentiumOptimized::Multiply4(unsigned int*, unsigned int const*, unsigned int const*)
0875df51 +0x5d1:  mov    0xc(%ebp),%ecx
0875df54 +0x5d4:  mov    0xc(%ebp),%eax
0875df57 +0x5d7:  mov    0x10(%ecx),%edx
0875df5a +0x5da:  mov    0x8(%ebp),%ecx
0875df5d +0x5dd:  add    $0x10,%eax
0875df60 +0x5e0:  mov    %edx,(%ecx)
0875df62 +0x5e2:  mov    0x4(%eax),%edx
0875df65 +0x5e5:  mov    %edx,0x4(%ecx)
0875df68 +0x5e8:  mov    0x8(%eax),%edx
0875df6b +0x5eb:  mov    %edx,0x8(%ecx)
0875df6e +0x5ee:  mov    0xc(%eax),%eax
0875df71 +0x5f1:  mov    %eax,0xc(%ecx)
0875df74 +0x5f4:  jmp    0875dd14 <+0x394>
0875df79 +0x5f9:  mov    0x18(%ebp),%eax
0875df7c +0x5fc:  mov    0x14(%ebp),%edx
0875df7f +0x5ff:  mov    0xc(%ebp),%ecx
0875df82 +0x602:  mov    %eax,0x8(%esp)
0875df86 +0x606:  mov    %edx,0x4(%esp)
0875df8a +0x60a:  mov    %ecx,(%esp)
0875df8d +0x60d:  call   08759530 <_ZN8TaoCrypt8Portable9Multiply2EPjPKjS3_>  ; TaoCrypt::Portable::Multiply2(unsigned int*, unsigned int const*, unsigned int const*)
0875df92 +0x612:  mov    0xc(%ebp),%edx
0875df95 +0x615:  mov    0x8(%ebp),%ecx
0875df98 +0x618:  mov    0x8(%edx),%eax
0875df9b +0x61b:  mov    %eax,(%ecx)
0875df9d +0x61d:  mov    0xc(%edx),%eax
0875dfa0 +0x620:  mov    %eax,0x4(%ecx)
0875dfa3 +0x623:  jmp    0875dd14 <+0x394>
0875dfa8 +0x628:  mov    0xc(%ebp),%eax
0875dfab +0x62b:  add    -0x28(%ebp),%eax
0875dfae +0x62e:  mov    0x8(%ebp),%esi
0875dfb1 +0x631:  add    -0x28(%ebp),%esi
0875dfb4 +0x634:  mov    %eax,-0x2c(%ebp)
0875dfb7 +0x637:  mov    0xc(%ebp),%edi
0875dfba +0x63a:  movl   $0x0,-0x34(%ebp)
0875dfc1 +0x641:  jmp    0875db40 <+0x1c0>
0875dfc6 +0x646:  lea    0x0(%esi),%esi
0875dfc9 +0x649:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TaoCrypt::RecursiveMultiplyTop @ 0x875d980

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::RecursiveMultiplyTop(unsigned int*, unsigned int*, unsigned int const*, unsigned int
   const*, unsigned int const*, unsigned int) */

void TaoCrypt::RecursiveMultiplyTop
               (uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,uint param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  int local_38;
  uint *local_30;
  int local_2c;
  int local_28;
  
  if (param_6 == 4) {
    PentiumOptimized::Multiply4(param_2,param_4,param_5);
    *param_1 = param_2[4];
    param_1[1] = param_2[5];
    param_1[2] = param_2[6];
    param_1[3] = param_2[7];
    return;
  }
  if (param_6 == 2) {
    Portable::Multiply2(param_2,param_4,param_5);
    *param_1 = param_2[2];
    param_1[1] = param_2[3];
    return;
  }
  uVar2 = param_6 >> 1;
  puVar9 = param_4 + uVar2;
  puVar8 = param_4 + (uVar2 - 1);
  puVar7 = puVar9 + (uVar2 - 1);
  uVar3 = uVar2;
  do {
    if (uVar3 == 0) {
      local_38 = 0;
      goto LAB_0875d9f8;
    }
    uVar6 = *puVar8;
    uVar3 = uVar3 - 1;
    uVar1 = *puVar7;
    if (uVar1 < uVar6) {
      local_38 = 3;
      goto LAB_0875d9f8;
    }
    puVar8 = puVar8 + -1;
    puVar7 = puVar7 + -1;
  } while (uVar1 <= uVar6);
  local_38 = -3;
LAB_0875d9f8:
  puVar8 = param_5 + uVar2;
  puVar7 = param_5 + (uVar2 - 1);
  puVar10 = puVar8 + (uVar2 - 1);
  uVar3 = uVar2;
  do {
    iVar4 = 0;
    if (uVar3 == 0) goto LAB_0875da32;
    uVar6 = *puVar7;
    uVar3 = uVar3 - 1;
    uVar1 = *puVar10;
    if (uVar1 < uVar6) {
      iVar4 = 1;
      goto LAB_0875da32;
    }
    puVar7 = puVar7 + -1;
    puVar10 = puVar10 + -1;
  } while (uVar1 <= uVar6);
  iVar4 = -1;
LAB_0875da32:
  iVar4 = iVar4 + local_38;
  if (iVar4 == -2) {
    (*s_pSub)(param_1,puVar9,param_4,uVar2);
    puVar7 = param_5;
    param_5 = puVar8;
LAB_0875ddd8:
    (*s_pSub)(param_1 + uVar2,puVar7,param_5,uVar2);
    puVar7 = param_2 + param_6;
    RecursiveMultiply(param_2,puVar7,param_1,param_1 + uVar2,uVar2);
    local_38 = 0;
  }
  else if (iVar4 < -1) {
    if (iVar4 == -4) {
      (*s_pSub)(param_1,puVar9,param_4,uVar2);
      (*s_pSub)(param_1 + uVar2,param_5,puVar8,uVar2);
      puVar7 = param_2 + param_6;
      RecursiveMultiply(param_2,puVar7,param_1,param_1 + uVar2,uVar2);
      (*s_pSub)(param_2 + uVar2,param_2 + uVar2,param_1,uVar2);
      local_38 = -1;
    }
    else {
LAB_0875daf9:
      uVar3 = 0;
      if (param_6 == 0) {
        local_38 = 0;
        puVar7 = param_2;
      }
      else {
        do {
          param_2[uVar3] = 0;
          uVar3 = uVar3 + 1;
        } while (uVar3 < param_6);
        local_38 = 0;
        puVar7 = param_2 + param_6;
      }
    }
  }
  else {
    if (iVar4 == 2) {
      (*s_pSub)(param_1,param_4,puVar9,uVar2);
      puVar7 = puVar8;
      goto LAB_0875ddd8;
    }
    if (iVar4 != 4) goto LAB_0875daf9;
    (*s_pSub)(param_1,puVar9,param_4,uVar2);
    puVar7 = param_1 + uVar2;
    (*s_pSub)(puVar7,param_5,puVar8,uVar2);
    RecursiveMultiply(param_2,param_2 + param_6,param_1,puVar7,uVar2);
    (*s_pSub)(param_2 + uVar2,param_2 + uVar2,puVar7,uVar2);
    local_38 = -1;
    puVar7 = param_2 + param_6;
  }
  local_30 = param_2 + uVar2;
  puVar10 = param_1 + uVar2;
  RecursiveMultiply(puVar7,param_1,puVar9,puVar8,uVar2);
  iVar4 = (*s_pSub)(param_1,param_3 + uVar2,param_3,uVar2);
  iVar5 = (*s_pSub)(param_1,param_1,param_2,uVar2);
  puVar8 = param_1 + (uVar2 - 1);
  puVar7 = puVar7 + (uVar2 - 1);
  uVar3 = uVar2;
  do {
    if (uVar3 == 0) {
LAB_0875dd80:
      local_28 = 0;
      goto LAB_0875dbeb;
    }
    uVar6 = *puVar8;
    uVar3 = uVar3 - 1;
    uVar1 = *puVar7;
    if (uVar1 < uVar6) goto LAB_0875dd80;
    puVar8 = puVar8 + -1;
    puVar7 = puVar7 + -1;
  } while (uVar1 <= uVar6);
  local_28 = 1;
LAB_0875dbeb:
  local_2c = 0;
  uVar3 = *param_1;
  uVar6 = iVar4 + iVar5 + uVar3 + local_28;
  *param_1 = uVar6;
  if ((uVar6 < uVar3) && (local_2c = 1, 1 < uVar2)) {
    uVar3 = 1;
    uVar6 = param_1[1] + 1;
    param_1[1] = uVar6;
    while (uVar6 == 0) {
      uVar3 = uVar3 + 1;
      if (uVar2 <= uVar3) {
        local_2c = 1;
        goto LAB_0875dc5f;
      }
      uVar6 = param_1[uVar3] + 1;
      param_1[uVar3] = uVar6;
    }
    local_2c = 0;
LAB_0875dc5f:
    local_30 = (uint *)(*s_pAdd)(param_1,param_1,local_30,uVar2);
    puVar8 = param_2 + uVar2 + param_6;
    iVar4 = (*s_pAdd)(param_1,param_1,puVar8,uVar2);
  }
  else {
    local_30 = (uint *)(*s_pAdd)(param_1,param_1,local_30,uVar2);
    puVar8 = param_2 + uVar2 + param_6;
    iVar4 = (*s_pAdd)(param_1,param_1,puVar8,uVar2);
    if (uVar2 == 0) goto LAB_0875dcc8;
  }
  uVar3 = 0;
  do {
    puVar10[uVar3] = puVar8[uVar3];
    uVar3 = uVar3 + 1;
  } while (uVar3 < uVar2);
LAB_0875dcc8:
  uVar6 = *puVar10;
  uVar3 = uVar6 + local_38 + local_28 + local_2c + (int)local_30 + iVar4;
  *puVar10 = uVar3;
  if ((uVar3 < uVar6) && (1 < uVar2)) {
    uVar3 = 1;
    uVar6 = puVar10[1] + 1;
    puVar10[1] = uVar6;
    while ((uVar6 == 0 && (uVar3 = uVar3 + 1, uVar3 < uVar2))) {
      uVar6 = puVar10[uVar3] + 1;
      puVar10[uVar3] = uVar6;
    }
  }
  return;
}
```
