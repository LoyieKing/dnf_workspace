# time_out

`_ZN8PvP_Room8time_outEPi`

`PvP_Room::time_out(int*)`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085d9b0e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d9b0e  _ZN8PvP_Room8time_outEPi
#           PvP_Room::time_out(int*)
# range [0x085d9b0e, 0x085da045]
085d9b0e +0x000:  push   %ebp
085d9b0f +0x001:  mov    %esp,%ebp
085d9b11 +0x003:  push   %esi
085d9b12 +0x004:  push   %ebx
085d9b13 +0x005:  sub    $0xa0,%esp
085d9b19 +0x00b:  mov    0x8(%ebp),%eax
085d9b1c +0x00e:  movzbl 0x614(%eax),%eax
085d9b23 +0x015:  test   %al,%al
085d9b25 +0x017:  je     085d9b31 <+0x23>
085d9b27 +0x019:  mov    $0x0,%eax
085d9b2c +0x01e:  jmp    085da03c <+0x52e>
085d9b31 +0x023:  mov    0x8(%ebp),%eax
085d9b34 +0x026:  movb   $0x1,0x614(%eax)
085d9b3b +0x02d:  movl   $0x0,-0x48(%ebp)
085d9b42 +0x034:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085d9b47 +0x039:  mov    %eax,(%esp)
085d9b4a +0x03c:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
085d9b4f +0x041:  cmp    $0x7,%eax
085d9b52 +0x044:  sete   %al
085d9b55 +0x047:  test   %al,%al
085d9b57 +0x049:  je     085d9b60 <+0x52>
085d9b59 +0x04b:  movl   $0x1,-0x48(%ebp)
085d9b60 +0x052:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
085d9b67 +0x059:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
085d9b6c +0x05e:  mov    0x8(%ebp),%edx
085d9b6f +0x061:  mov    0x618(%edx),%edx
085d9b75 +0x067:  sub    %edx,%eax
085d9b77 +0x069:  mov    %eax,-0x44(%ebp)
085d9b7a +0x06c:  movl   $0x0,-0x40(%ebp)
085d9b81 +0x073:  mov    0x8(%ebp),%eax
085d9b84 +0x076:  mov    0x4(%eax),%eax
085d9b87 +0x079:  cmp    $0x1,%eax
085d9b8a +0x07c:  jl     085d9be5 <+0xd7>
085d9b8c +0x07e:  cmp    $0x2,%eax
085d9b8f +0x081:  jle    085d9b9b <+0x8d>
085d9b91 +0x083:  sub    $0x4,%eax
085d9b94 +0x086:  cmp    $0x1,%eax
085d9b97 +0x089:  ja     085d9be5 <+0xd7>
085d9b99 +0x08b:  jmp    085d9bc1 <+0xb3>
085d9b9b +0x08d:  mov    -0x48(%ebp),%eax
085d9b9e +0x090:  mov    &PVP_NORMAL_BATTLE_TIME(,%eax,4),%ecx
085d9ba5 +0x097:  mov    $0x10624dd3,%edx
085d9baa +0x09c:  mov    %ecx,%eax
085d9bac +0x09e:  imul   %edx
085d9bae +0x0a0:  sar    $0x6,%edx
085d9bb1 +0x0a3:  mov    %ecx,%eax
085d9bb3 +0x0a5:  sar    $0x1f,%eax
085d9bb6 +0x0a8:  mov    %edx,%ecx
085d9bb8 +0x0aa:  sub    %eax,%ecx
085d9bba +0x0ac:  mov    %ecx,%eax
085d9bbc +0x0ae:  mov    %eax,-0x40(%ebp)
085d9bbf +0x0b1:  jmp    085d9be5 <+0xd7>
085d9bc1 +0x0b3:  mov    -0x48(%ebp),%eax
085d9bc4 +0x0b6:  mov    &PVP_DM_BATTLE_TIME(,%eax,4),%ecx
085d9bcb +0x0bd:  mov    $0x10624dd3,%edx
085d9bd0 +0x0c2:  mov    %ecx,%eax
085d9bd2 +0x0c4:  imul   %edx
085d9bd4 +0x0c6:  sar    $0x6,%edx
085d9bd7 +0x0c9:  mov    %ecx,%eax
085d9bd9 +0x0cb:  sar    $0x1f,%eax
085d9bdc +0x0ce:  mov    %edx,%ecx
085d9bde +0x0d0:  sub    %eax,%ecx
085d9be0 +0x0d2:  mov    %ecx,%eax
085d9be2 +0x0d4:  mov    %eax,-0x40(%ebp)
085d9be5 +0x0d7:  mov    -0x44(%ebp),%eax
085d9be8 +0x0da:  mov    -0x40(%ebp),%edx
085d9beb +0x0dd:  mov    %edx,%ecx
085d9bed +0x0df:  sub    %eax,%ecx
085d9bef +0x0e1:  mov    %ecx,%eax
085d9bf1 +0x0e3:  test   %eax,%eax
085d9bf3 +0x0e5:  jle    085d9c39 <+0x12b>
085d9bf5 +0x0e7:  movl   $0x0,0xc(%esp)
085d9bfd +0x0ef:  movl   $0xa9a,0x8(%esp)
085d9c05 +0x0f7:  movl   $&_ZZN8PvP_Room8time_outEPiE19__PRETTY_FUNCTION__,0x4(%esp)
085d9c0d +0x0ff:  lea    -0x58(%ebp),%eax
085d9c10 +0x102:  mov    %eax,(%esp)
085d9c13 +0x105:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085d9c18 +0x10a:  mov    -0x44(%ebp),%eax
085d9c1b +0x10d:  mov    %eax,0xc(%esp)
085d9c1f +0x111:  mov    -0x40(%ebp),%eax
085d9c22 +0x114:  mov    %eax,0x8(%esp)
085d9c26 +0x118:  movl   $"PVP_TIMEOUT_CHECK end_time(%d), play_time(%d)",0x4(%esp)
085d9c2e +0x120:  lea    -0x58(%ebp),%eax
085d9c31 +0x123:  mov    %eax,(%esp)
085d9c34 +0x126:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085d9c39 +0x12b:  mov    0x8(%ebp),%eax
085d9c3c +0x12e:  mov    0xb8(%eax),%eax
085d9c42 +0x134:  cmp    $0x2,%eax
085d9c45 +0x137:  je     085d9c51 <+0x143>
085d9c47 +0x139:  mov    $0x13,%eax
085d9c4c +0x13e:  jmp    085da03c <+0x52e>
085d9c51 +0x143:  movb   $0x1,-0x39(%ebp)
085d9c55 +0x147:  movl   $0x0,-0x38(%ebp)
085d9c5c +0x14e:  jmp    085d9c85 <+0x177>
085d9c5e +0x150:  mov    -0x38(%ebp),%eax
085d9c61 +0x153:  shl    $0x2,%eax
085d9c64 +0x156:  add    0xc(%ebp),%eax
085d9c67 +0x159:  mov    (%eax),%edx
085d9c69 +0x15b:  mov    -0x38(%ebp),%eax
085d9c6c +0x15e:  add    $0x1,%eax
085d9c6f +0x161:  shl    $0x2,%eax
085d9c72 +0x164:  add    0xc(%ebp),%eax
085d9c75 +0x167:  mov    (%eax),%eax
085d9c77 +0x169:  cmp    %eax,%edx
085d9c79 +0x16b:  je     085d9c81 <+0x173>
085d9c7b +0x16d:  movb   $0x0,-0x39(%ebp)
085d9c7f +0x171:  jmp    085d9c90 <+0x182>
085d9c81 +0x173:  addl   $0x1,-0x38(%ebp)
085d9c85 +0x177:  cmpl   $0x6,-0x38(%ebp)
085d9c89 +0x17b:  setle  %al
085d9c8c +0x17e:  test   %al,%al
085d9c8e +0x180:  jne    085d9c5e <+0x150>
085d9c90 +0x182:  mov    0x8(%ebp),%eax
085d9c93 +0x185:  mov    0x4(%eax),%eax
085d9c96 +0x188:  cmp    $0x2,%eax
085d9c99 +0x18b:  je     085d9caa <+0x19c>
085d9c9b +0x18d:  mov    0x8(%ebp),%eax
085d9c9e +0x190:  mov    0x4(%eax),%eax
085d9ca1 +0x193:  cmp    $0x3,%eax
085d9ca4 +0x196:  jne    085d9e9a <+0x38c>
085d9caa +0x19c:  mov    0x8(%ebp),%eax
085d9cad +0x19f:  mov    %eax,(%esp)
085d9cb0 +0x1a2:  call   085df93a <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x1c1>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x1c1
085d9cb5 +0x1a7:  movzbl -0x39(%ebp),%eax
085d9cb9 +0x1ab:  xor    $0x1,%eax
085d9cbc +0x1ae:  test   %al,%al
085d9cbe +0x1b0:  je     085d9e64 <+0x356>
085d9cc4 +0x1b6:  movl   $0x0,-0x6c(%ebp)
085d9ccb +0x1bd:  movl   $0x0,-0x68(%ebp)
085d9cd2 +0x1c4:  movl   $0x0,-0x64(%ebp)
085d9cd9 +0x1cb:  movl   $0x0,-0x60(%ebp)
085d9ce0 +0x1d2:  movl   $0x0,-0x5c(%ebp)
085d9ce7 +0x1d9:  movl   $0x0,-0x80(%ebp)
085d9cee +0x1e0:  movl   $0x0,-0x7c(%ebp)
085d9cf5 +0x1e7:  movl   $0x0,-0x78(%ebp)
085d9cfc +0x1ee:  movl   $0x0,-0x74(%ebp)
085d9d03 +0x1f5:  movl   $0x0,-0x70(%ebp)
085d9d0a +0x1fc:  movl   $0x0,-0x2c(%ebp)
085d9d11 +0x203:  jmp    085d9da2 <+0x294>
085d9d16 +0x208:  mov    -0x2c(%ebp),%edx
085d9d19 +0x20b:  mov    0x8(%ebp),%eax
085d9d1c +0x20e:  add    $0xc,%edx
085d9d1f +0x211:  mov    (%eax,%edx,4),%eax
085d9d22 +0x214:  test   %eax,%eax
085d9d24 +0x216:  je     085d9d9e <+0x290>
085d9d26 +0x218:  mov    -0x2c(%ebp),%eax
085d9d29 +0x21b:  mov    0x8(%ebp),%edx
085d9d2c +0x21e:  movzbl 0x5d0(%edx,%eax,1),%eax
085d9d34 +0x226:  test   %al,%al
085d9d36 +0x228:  je     085d9d9e <+0x290>
085d9d38 +0x22a:  mov    -0x2c(%ebp),%eax
085d9d3b +0x22d:  mov    0x8(%ebp),%edx
085d9d3e +0x230:  movzbl 0x5d0(%edx,%eax,1),%eax
085d9d46 +0x238:  cmp    $0xfd,%al
085d9d48 +0x23a:  ja     085d9d9e <+0x290>
085d9d4a +0x23c:  mov    -0x2c(%ebp),%eax
085d9d4d +0x23f:  mov    0x8(%ebp),%edx
085d9d50 +0x242:  movzbl 0x5d0(%edx,%eax,1),%eax
085d9d58 +0x24a:  movzbl %al,%eax
085d9d5b +0x24d:  mov    -0x6c(%ebp,%eax,4),%edx
085d9d5f +0x251:  add    $0x1,%edx
085d9d62 +0x254:  mov    %edx,-0x6c(%ebp,%eax,4)
085d9d66 +0x258:  mov    -0x2c(%ebp),%eax
085d9d69 +0x25b:  mov    0x8(%ebp),%edx
085d9d6c +0x25e:  movzbl 0x5d0(%edx,%eax,1),%eax
085d9d74 +0x266:  movzbl %al,%eax
085d9d77 +0x269:  mov    -0x2c(%ebp),%edx
085d9d7a +0x26c:  mov    0x8(%ebp),%ecx
085d9d7d +0x26f:  movzbl 0x5d0(%ecx,%edx,1),%edx
085d9d85 +0x277:  movzbl %dl,%edx
085d9d88 +0x27a:  mov    -0x80(%ebp,%edx,4),%ecx
085d9d8c +0x27e:  mov    -0x2c(%ebp),%edx
085d9d8f +0x281:  shl    $0x2,%edx
085d9d92 +0x284:  add    0xc(%ebp),%edx
085d9d95 +0x287:  mov    (%edx),%edx
085d9d97 +0x289:  lea    (%ecx,%edx,1),%edx
085d9d9a +0x28c:  mov    %edx,-0x80(%ebp,%eax,4)
085d9d9e +0x290:  addl   $0x1,-0x2c(%ebp)
085d9da2 +0x294:  cmpl   $0x7,-0x2c(%ebp)
085d9da6 +0x298:  setle  %al
085d9da9 +0x29b:  test   %al,%al
085d9dab +0x29d:  jne    085d9d16 <+0x208>
085d9db1 +0x2a3:  movl   $0x0,-0x34(%ebp)
085d9db8 +0x2aa:  movl   $0x7fffffff,-0x30(%ebp)
085d9dbf +0x2b1:  movl   $0x1,-0x28(%ebp)
085d9dc6 +0x2b8:  jmp    085d9df3 <+0x2e5>
085d9dc8 +0x2ba:  mov    -0x28(%ebp),%eax
085d9dcb +0x2bd:  mov    -0x6c(%ebp,%eax,4),%eax
085d9dcf +0x2c1:  test   %eax,%eax
085d9dd1 +0x2c3:  jle    085d9def <+0x2e1>
085d9dd3 +0x2c5:  mov    -0x28(%ebp),%eax
085d9dd6 +0x2c8:  mov    -0x80(%ebp,%eax,4),%eax
085d9dda +0x2cc:  cmp    -0x30(%ebp),%eax
085d9ddd +0x2cf:  jge    085d9def <+0x2e1>
085d9ddf +0x2d1:  mov    -0x28(%ebp),%eax
085d9de2 +0x2d4:  mov    %eax,-0x34(%ebp)
085d9de5 +0x2d7:  mov    -0x28(%ebp),%eax
085d9de8 +0x2da:  mov    -0x80(%ebp,%eax,4),%eax
085d9dec +0x2de:  mov    %eax,-0x30(%ebp)
085d9def +0x2e1:  addl   $0x1,-0x28(%ebp)
085d9df3 +0x2e5:  cmpl   $0x4,-0x28(%ebp)
085d9df7 +0x2e9:  setle  %al
085d9dfa +0x2ec:  test   %al,%al
085d9dfc +0x2ee:  jne    085d9dc8 <+0x2ba>
085d9dfe +0x2f0:  movl   $0x0,-0x24(%ebp)
085d9e05 +0x2f7:  jmp    085d9e3f <+0x331>
085d9e07 +0x2f9:  mov    -0x24(%ebp),%eax
085d9e0a +0x2fc:  mov    0x8(%ebp),%edx
085d9e0d +0x2ff:  movzbl 0x5d0(%edx,%eax,1),%eax
085d9e15 +0x307:  movzbl %al,%eax
085d9e18 +0x30a:  cmp    -0x34(%ebp),%eax
085d9e1b +0x30d:  jne    085d9e2d <+0x31f>
085d9e1d +0x30f:  mov    -0x24(%ebp),%eax
085d9e20 +0x312:  mov    0x8(%ebp),%edx
085d9e23 +0x315:  movb   $0x1,0x5c8(%edx,%eax,1)
085d9e2b +0x31d:  jmp    085d9e3b <+0x32d>
085d9e2d +0x31f:  mov    -0x24(%ebp),%eax
085d9e30 +0x322:  mov    0x8(%ebp),%edx
085d9e33 +0x325:  movb   $0x0,0x5c8(%edx,%eax,1)
085d9e3b +0x32d:  addl   $0x1,-0x24(%ebp)
085d9e3f +0x331:  cmpl   $0x7,-0x24(%ebp)
085d9e43 +0x335:  setle  %al
085d9e46 +0x338:  test   %al,%al
085d9e48 +0x33a:  jne    085d9e07 <+0x2f9>
085d9e4a +0x33c:  mov    0x8(%ebp),%eax
085d9e4d +0x33f:  lea    0x268(%eax),%edx
085d9e53 +0x345:  mov    -0x34(%ebp),%eax
085d9e56 +0x348:  mov    %eax,0x4(%esp)
085d9e5a +0x34c:  mov    %edx,(%esp)
085d9e5d +0x34f:  call   085d585e <_ZN12PvpUserTable10SetWinTeamEi>  ; PvpUserTable::SetWinTeam(int)
085d9e62 +0x354:  jmp    085d9e8a <+0x37c>
085d9e64 +0x356:  movl   $0x0,-0x20(%ebp)
085d9e6b +0x35d:  jmp    085d9e7f <+0x371>
085d9e6d +0x35f:  mov    -0x20(%ebp),%eax
085d9e70 +0x362:  mov    0x8(%ebp),%edx
085d9e73 +0x365:  movb   $0x0,0x5c8(%edx,%eax,1)
085d9e7b +0x36d:  addl   $0x1,-0x20(%ebp)
085d9e7f +0x371:  cmpl   $0x7,-0x20(%ebp)
085d9e83 +0x375:  setle  %al
085d9e86 +0x378:  test   %al,%al
085d9e88 +0x37a:  jne    085d9e6d <+0x35f>
085d9e8a +0x37c:  mov    0x8(%ebp),%eax
085d9e8d +0x37f:  mov    %eax,(%esp)
085d9e90 +0x382:  call   085df940 <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x1c7>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x1c7
085d9e95 +0x387:  jmp    085da02c <+0x51e>
085d9e9a +0x38c:  mov    0x8(%ebp),%eax
085d9e9d +0x38f:  mov    0x4(%eax),%eax
085d9ea0 +0x392:  cmp    $0x5,%eax
085d9ea3 +0x395:  jne    085d9eeb <+0x3dd>
085d9ea5 +0x397:  mov    0x8(%ebp),%eax
085d9ea8 +0x39a:  lea    0x268(%eax),%esi
085d9eae +0x3a0:  mov    0x8(%ebp),%eax
085d9eb1 +0x3a3:  lea    0x5d0(%eax),%ebx
085d9eb7 +0x3a9:  mov    0x8(%ebp),%eax
085d9eba +0x3ac:  lea    0x5c8(%eax),%ecx
085d9ec0 +0x3b2:  mov    0x8(%ebp),%eax
085d9ec3 +0x3b5:  lea    0x30(%eax),%edx
085d9ec6 +0x3b8:  mov    0x8(%ebp),%eax
085d9ec9 +0x3bb:  add    $0x69c,%eax
085d9ece +0x3c0:  mov    %esi,0x10(%esp)
085d9ed2 +0x3c4:  mov    %ebx,0xc(%esp)
085d9ed6 +0x3c8:  mov    %ecx,0x8(%esp)
085d9eda +0x3cc:  mov    %edx,0x4(%esp)
085d9ede +0x3d0:  mov    %eax,(%esp)
085d9ee1 +0x3d3:  call   085df296 <_ZN20CDeathMatchBattleMgr22checkWinnerForTeamPlayEPP5CUserPbPhR12PvpUserTable>  ; CDeathMatchBattleMgr::checkWinnerForTeamPlay(CUser**, bool*, unsigned char*, PvpUserTable&)
085d9ee6 +0x3d8:  jmp    085da02c <+0x51e>
085d9eeb +0x3dd:  mov    0x8(%ebp),%eax
085d9eee +0x3e0:  mov    0x4(%eax),%eax
085d9ef1 +0x3e3:  cmp    $0x4,%eax
085d9ef4 +0x3e6:  jne    085d9f2f <+0x421>
085d9ef6 +0x3e8:  mov    0x8(%ebp),%eax
085d9ef9 +0x3eb:  lea    0x268(%eax),%ebx
085d9eff +0x3f1:  mov    0x8(%ebp),%eax
085d9f02 +0x3f4:  lea    0x5c8(%eax),%ecx
085d9f08 +0x3fa:  mov    0x8(%ebp),%eax
085d9f0b +0x3fd:  lea    0x30(%eax),%edx
085d9f0e +0x400:  mov    0x8(%ebp),%eax
085d9f11 +0x403:  add    $0x69c,%eax
085d9f16 +0x408:  mov    %ebx,0xc(%esp)
085d9f1a +0x40c:  mov    %ecx,0x8(%esp)
085d9f1e +0x410:  mov    %edx,0x4(%esp)
085d9f22 +0x414:  mov    %eax,(%esp)
085d9f25 +0x417:  call   085df48a <_ZN20CDeathMatchBattleMgr24checkWinnerForSinglePlayEPP5CUserPbR12PvpUserTable>  ; CDeathMatchBattleMgr::checkWinnerForSinglePlay(CUser**, bool*, PvpUserTable&)
085d9f2a +0x41c:  jmp    085da02c <+0x51e>
085d9f2f +0x421:  mov    0x8(%ebp),%eax
085d9f32 +0x424:  mov    %eax,(%esp)
085d9f35 +0x427:  call   085df93a <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x1c1>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x1c1
085d9f3a +0x42c:  movzbl -0x39(%ebp),%eax
085d9f3e +0x430:  xor    $0x1,%eax
085d9f41 +0x433:  test   %al,%al
085d9f43 +0x435:  je     085d9ffb <+0x4ed>
085d9f49 +0x43b:  movl   $0x0,-0x1c(%ebp)
085d9f50 +0x442:  movl   $0x7fffffff,-0x18(%ebp)
085d9f57 +0x449:  movl   $0x0,-0x14(%ebp)
085d9f5e +0x450:  jmp    085d9f98 <+0x48a>
085d9f60 +0x452:  mov    -0x14(%ebp),%edx
085d9f63 +0x455:  mov    0x8(%ebp),%eax
085d9f66 +0x458:  add    $0xc,%edx
085d9f69 +0x45b:  mov    (%eax,%edx,4),%eax
085d9f6c +0x45e:  test   %eax,%eax
085d9f6e +0x460:  je     085d9f94 <+0x486>
085d9f70 +0x462:  mov    -0x14(%ebp),%eax
085d9f73 +0x465:  shl    $0x2,%eax
085d9f76 +0x468:  add    0xc(%ebp),%eax
085d9f79 +0x46b:  mov    (%eax),%eax
085d9f7b +0x46d:  cmp    -0x18(%ebp),%eax
085d9f7e +0x470:  jge    085d9f94 <+0x486>
085d9f80 +0x472:  mov    -0x14(%ebp),%eax
085d9f83 +0x475:  mov    %eax,-0x1c(%ebp)
085d9f86 +0x478:  mov    -0x14(%ebp),%eax
085d9f89 +0x47b:  shl    $0x2,%eax
085d9f8c +0x47e:  add    0xc(%ebp),%eax
085d9f8f +0x481:  mov    (%eax),%eax
085d9f91 +0x483:  mov    %eax,-0x18(%ebp)
085d9f94 +0x486:  addl   $0x1,-0x14(%ebp)
085d9f98 +0x48a:  cmpl   $0x7,-0x14(%ebp)
085d9f9c +0x48e:  setle  %al
085d9f9f +0x491:  test   %al,%al
085d9fa1 +0x493:  jne    085d9f60 <+0x452>
085d9fa3 +0x495:  movl   $0x0,-0x10(%ebp)
085d9faa +0x49c:  jmp    085d9fd6 <+0x4c8>
085d9fac +0x49e:  mov    -0x1c(%ebp),%eax
085d9faf +0x4a1:  cmp    -0x10(%ebp),%eax
085d9fb2 +0x4a4:  jne    085d9fc4 <+0x4b6>
085d9fb4 +0x4a6:  mov    -0x10(%ebp),%eax
085d9fb7 +0x4a9:  mov    0x8(%ebp),%edx
085d9fba +0x4ac:  movb   $0x1,0x5c8(%edx,%eax,1)
085d9fc2 +0x4b4:  jmp    085d9fd2 <+0x4c4>
085d9fc4 +0x4b6:  mov    -0x10(%ebp),%eax
085d9fc7 +0x4b9:  mov    0x8(%ebp),%edx
085d9fca +0x4bc:  movb   $0x0,0x5c8(%edx,%eax,1)
085d9fd2 +0x4c4:  addl   $0x1,-0x10(%ebp)
085d9fd6 +0x4c8:  cmpl   $0x7,-0x10(%ebp)
085d9fda +0x4cc:  setle  %al
085d9fdd +0x4cf:  test   %al,%al
085d9fdf +0x4d1:  jne    085d9fac <+0x49e>
085d9fe1 +0x4d3:  mov    0x8(%ebp),%eax
085d9fe4 +0x4d6:  lea    0x268(%eax),%edx
085d9fea +0x4dc:  mov    -0x1c(%ebp),%eax
085d9fed +0x4df:  mov    %eax,0x4(%esp)
085d9ff1 +0x4e3:  mov    %edx,(%esp)
085d9ff4 +0x4e6:  call   085d585e <_ZN12PvpUserTable10SetWinTeamEi>  ; PvpUserTable::SetWinTeam(int)
085d9ff9 +0x4eb:  jmp    085da021 <+0x513>
085d9ffb +0x4ed:  movl   $0x0,-0xc(%ebp)
085da002 +0x4f4:  jmp    085da016 <+0x508>
085da004 +0x4f6:  mov    -0xc(%ebp),%eax
085da007 +0x4f9:  mov    0x8(%ebp),%edx
085da00a +0x4fc:  movb   $0x0,0x5c8(%edx,%eax,1)
085da012 +0x504:  addl   $0x1,-0xc(%ebp)
085da016 +0x508:  cmpl   $0x7,-0xc(%ebp)
085da01a +0x50c:  setle  %al
085da01d +0x50f:  test   %al,%al
085da01f +0x511:  jne    085da004 <+0x4f6>
085da021 +0x513:  mov    0x8(%ebp),%eax
085da024 +0x516:  mov    %eax,(%esp)
085da027 +0x519:  call   085df940 <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x1c7>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x1c7
085da02c +0x51e:  mov    0x8(%ebp),%eax
085da02f +0x521:  mov    %eax,(%esp)
085da032 +0x524:  call   085dcd7e <_ZN8PvP_Room20pvp_request_pvp_rankEv>  ; PvP_Room::pvp_request_pvp_rank()
085da037 +0x529:  mov    $0x0,%eax
085da03c +0x52e:  add    $0xa0,%esp
085da042 +0x534:  pop    %ebx
085da043 +0x535:  pop    %esi
085da044 +0x536:  pop    %ebp
085da045 +0x537:  ret
```

## 反编译 C

```c
// PvP_Room::time_out @ 0x85d9b0e

/* PvP_Room::time_out(int*) */

undefined4 __thiscall PvP_Room::time_out(PvP_Room *this,int *param_1)

{
  undefined4 uVar1;
  GameWorld *this_00;
  int iVar2;
  int local_84 [10];
  cMyTrace local_5c [16];
  int local_4c;
  int local_48;
  int local_44;
  char local_3d;
  int local_3c;
  uint local_38;
  int local_34;
  int local_30;
  uint local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  if (this[0x614] == (PvP_Room)0x0) {
    this[0x614] = (PvP_Room)0x1;
    local_4c = 0;
    this_00 = (GameWorld *)G_GameWorld();
    iVar2 = GameWorld::GetChannelType(this_00);
    if (iVar2 == 7) {
      local_4c = 1;
    }
    local_48 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    local_48 = local_48 - *(int *)(this + 0x618);
    local_44 = 0;
    iVar2 = *(int *)(this + 4);
    if (0 < iVar2) {
      if (iVar2 < 3) {
        local_44 = *(int *)((int)&PVP_NORMAL_BATTLE_TIME + local_4c * 4) / 1000;
      }
      else if (iVar2 - 4U < 2) {
        local_44 = *(int *)((int)&PVP_DM_BATTLE_TIME + local_4c * 4) / 1000;
      }
    }
    if (local_44 != local_48 && -1 < local_44 - local_48) {
      cMyTrace::cMyTrace(local_5c,"int PvP_Room::time_out(int*)",0xa9a,0);
      cMyTrace::operator()
                (local_5c,"PVP_TIMEOUT_CHECK end_time(%d), play_time(%d)",local_44,local_48);
    }
    if (*(int *)(this + 0xb8) == 2) {
      local_3d = '\x01';
      for (local_3c = 0; local_3c < 7; local_3c = local_3c + 1) {
        if (param_1[local_3c] != param_1[local_3c + 1]) {
          local_3d = '\0';
          break;
        }
      }
      if ((*(int *)(this + 4) == 2) || (*(int *)(this + 4) == 3)) {
        lock();
        if (local_3d == '\x01') {
          for (local_24 = 0; local_24 < 8; local_24 = local_24 + 1) {
            this[local_24 + 0x5c8] = (PvP_Room)0x0;
          }
        }
        else {
          local_84[5] = 0;
          local_84[6] = 0;
          local_84[7] = 0;
          local_84[8] = 0;
          local_84[9] = 0;
          local_84[0] = 0;
          local_84[1] = 0;
          local_84[2] = 0;
          local_84[3] = 0;
          local_84[4] = 0;
          for (local_30 = 0; local_30 < 8; local_30 = local_30 + 1) {
            if (((*(int *)(this + (local_30 + 0xc) * 4) != 0) &&
                (this[local_30 + 0x5d0] != (PvP_Room)0x0)) && ((byte)this[local_30 + 0x5d0] < 0xfe))
            {
              local_84[(byte)this[local_30 + 0x5d0] + 5] =
                   local_84[(byte)this[local_30 + 0x5d0] + 5] + 1;
              local_84[(byte)this[local_30 + 0x5d0]] =
                   local_84[(byte)this[local_30 + 0x5d0]] + param_1[local_30];
            }
          }
          local_38 = 0;
          local_34 = 0x7fffffff;
          for (local_2c = 1; (int)local_2c < 5; local_2c = local_2c + 1) {
            if ((0 < local_84[local_2c + 5]) && (local_84[local_2c] < local_34)) {
              local_38 = local_2c;
              local_34 = local_84[local_2c];
            }
          }
          for (local_28 = 0; local_28 < 8; local_28 = local_28 + 1) {
            if ((byte)this[local_28 + 0x5d0] == local_38) {
              this[local_28 + 0x5c8] = (PvP_Room)0x1;
            }
            else {
              this[local_28 + 0x5c8] = (PvP_Room)0x0;
            }
          }
          PvpUserTable::SetWinTeam((PvpUserTable *)(this + 0x268),local_38);
        }
        unlock();
      }
      else if (*(int *)(this + 4) == 5) {
        CDeathMatchBattleMgr::checkWinnerForTeamPlay
                  ((CDeathMatchBattleMgr *)(this + 0x69c),(CUser **)(this + 0x30),
                   (bool *)(this + 0x5c8),(uchar *)(this + 0x5d0),(PvpUserTable *)(this + 0x268));
      }
      else if (*(int *)(this + 4) == 4) {
        CDeathMatchBattleMgr::checkWinnerForSinglePlay
                  ((CDeathMatchBattleMgr *)(this + 0x69c),(CUser **)(this + 0x30),
                   (bool *)(this + 0x5c8),(PvpUserTable *)(this + 0x268));
      }
      else {
        lock();
        if (local_3d == '\x01') {
          for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
            this[local_10 + 0x5c8] = (PvP_Room)0x0;
          }
        }
        else {
          local_20 = 0;
          local_1c = 0x7fffffff;
          for (local_18 = 0; local_18 < 8; local_18 = local_18 + 1) {
            if ((*(int *)(this + (local_18 + 0xc) * 4) != 0) && (param_1[local_18] < local_1c)) {
              local_20 = local_18;
              local_1c = param_1[local_18];
            }
          }
          for (local_14 = 0; local_14 < 8; local_14 = local_14 + 1) {
            if (local_20 == local_14) {
              this[local_14 + 0x5c8] = (PvP_Room)0x1;
            }
            else {
              this[local_14 + 0x5c8] = (PvP_Room)0x0;
            }
          }
          PvpUserTable::SetWinTeam((PvpUserTable *)(this + 0x268),local_20);
        }
        unlock();
      }
      pvp_request_pvp_rank(this);
      uVar1 = 0;
    }
    else {
      uVar1 = 0x13;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
