# _reset

`_ZN8fair_pvp13CFairPvPScore6_resetEv`

`fair_pvp::CFairPvPScore::_reset()`

| 类 | 地址 |
|---|---|
| `fair_pvp::CFairPvPScore` | `0x084a5942` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084a5942  _ZN8fair_pvp13CFairPvPScore6_resetEv
#           fair_pvp::CFairPvPScore::_reset()
# range [0x084a5942, 0x084a5a27]
084a5942 +0x00:  push   %ebp
084a5943 +0x01:  mov    %esp,%ebp
084a5945 +0x03:  sub    $0x28,%esp
084a5948 +0x06:  mov    0x8(%ebp),%eax
084a594b +0x09:  add    $0x8,%eax
084a594e +0x0c:  mov    %eax,(%esp)
084a5951 +0x0f:  call   084a6808 <_GLOBAL__I__ZN8fair_pvp13CFairPvPScoreC2Ev+0x7f0>  ; global constructors keyed to fair_pvp::CFairPvPScore::CFairPvPScore()+0x7f0
084a5956 +0x14:  mov    0x8(%ebp),%eax
084a5959 +0x17:  add    $0x20,%eax
084a595c +0x1a:  mov    %eax,(%esp)
084a595f +0x1d:  call   084a681c <_GLOBAL__I__ZN8fair_pvp13CFairPvPScoreC2Ev+0x804>  ; global constructors keyed to fair_pvp::CFairPvPScore::CFairPvPScore()+0x804
084a5964 +0x22:  movl   $0x0,-0xc(%ebp)
084a596b +0x29:  jmp    084a59c2 <+0x80>
084a596d +0x2b:  mov    -0xc(%ebp),%edx
084a5970 +0x2e:  mov    0x8(%ebp),%ecx
084a5973 +0x31:  mov    %edx,%eax
084a5975 +0x33:  add    %eax,%eax
084a5977 +0x35:  add    %edx,%eax
084a5979 +0x37:  shl    $0x2,%eax
084a597c +0x3a:  lea    (%ecx,%eax,1),%eax
084a597f +0x3d:  add    $0x28,%eax
084a5982 +0x40:  movl   $0x0,(%eax)
084a5988 +0x46:  mov    -0xc(%ebp),%edx
084a598b +0x49:  mov    0x8(%ebp),%ecx
084a598e +0x4c:  mov    %edx,%eax
084a5990 +0x4e:  add    %eax,%eax
084a5992 +0x50:  add    %edx,%eax
084a5994 +0x52:  shl    $0x2,%eax
084a5997 +0x55:  lea    (%ecx,%eax,1),%eax
084a599a +0x58:  add    $0x2c,%eax
084a599d +0x5b:  movl   $0x0,(%eax)
084a59a3 +0x61:  mov    -0xc(%ebp),%edx
084a59a6 +0x64:  mov    0x8(%ebp),%ecx
084a59a9 +0x67:  mov    %edx,%eax
084a59ab +0x69:  add    %eax,%eax
084a59ad +0x6b:  add    %edx,%eax
084a59af +0x6d:  shl    $0x2,%eax
084a59b2 +0x70:  lea    (%ecx,%eax,1),%eax
084a59b5 +0x73:  add    $0x30,%eax
084a59b8 +0x76:  movl   $0x0,(%eax)
084a59be +0x7c:  addl   $0x1,-0xc(%ebp)
084a59c2 +0x80:  cmpl   $0x1,-0xc(%ebp)
084a59c6 +0x84:  setle  %al
084a59c9 +0x87:  test   %al,%al
084a59cb +0x89:  jne    084a596d <+0x2b>
084a59cd +0x8b:  mov    0x8(%ebp),%eax
084a59d0 +0x8e:  movl   $0x0,0x40(%eax)
084a59d7 +0x95:  mov    0x8(%ebp),%eax
084a59da +0x98:  movl   $0x0,0x44(%eax)
084a59e1 +0x9f:  mov    0x8(%ebp),%eax
084a59e4 +0xa2:  movl   $0x0,0x48(%eax)
084a59eb +0xa9:  mov    0x8(%ebp),%eax
084a59ee +0xac:  movl   $0x0,0x4c(%eax)
084a59f5 +0xb3:  mov    0x8(%ebp),%eax
084a59f8 +0xb6:  movl   $0x0,0x50(%eax)
084a59ff +0xbd:  mov    0x8(%ebp),%eax
084a5a02 +0xc0:  movl   $0x0,0x54(%eax)
084a5a09 +0xc7:  mov    0x8(%ebp),%eax
084a5a0c +0xca:  movb   $0x0,0x58(%eax)
084a5a10 +0xce:  mov    0x8(%ebp),%eax
084a5a13 +0xd1:  movb   $0x0,0x59(%eax)
084a5a17 +0xd5:  mov    0x8(%ebp),%eax
084a5a1a +0xd8:  movb   $0x0,0x5a(%eax)
084a5a1e +0xdc:  mov    0x8(%ebp),%eax
084a5a21 +0xdf:  movb   $0x0,0x5b(%eax)
084a5a25 +0xe3:  leave
084a5a26 +0xe4:  ret
084a5a27 +0xe5:  nop
```

## 反编译 C

```c
// fair_pvp::CFairPvPScore::_reset @ 0x84a5942

/* fair_pvp::CFairPvPScore::_reset() */

void __thiscall fair_pvp::CFairPvPScore::_reset(CFairPvPScore *this)

{
  int local_10;
  
  std::
  map<fair_pvp::JobKey,FAIR_PVP_SCORE_MODE_COUNT,std::less<fair_pvp::JobKey>,std::allocator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>>
  ::clear((map<fair_pvp::JobKey,FAIR_PVP_SCORE_MODE_COUNT,std::less<fair_pvp::JobKey>,std::allocator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>>
           *)(this + 8));
  std::list<unsigned_char,std::allocator<unsigned_char>>::clear
            ((list<unsigned_char,std::allocator<unsigned_char>> *)(this + 0x20));
  for (local_10 = 0; local_10 < 2; local_10 = local_10 + 1) {
    *(undefined4 *)(this + local_10 * 0xc + 0x28) = 0;
    *(undefined4 *)(this + local_10 * 0xc + 0x2c) = 0;
    *(undefined4 *)(this + local_10 * 0xc + 0x30) = 0;
  }
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  this[0x58] = (CFairPvPScore)0x0;
  this[0x59] = (CFairPvPScore)0x0;
  this[0x5a] = (CFairPvPScore)0x0;
  this[0x5b] = (CFairPvPScore)0x0;
  return;
}
```
