# InitializeStat

`_ZN8WongWork15CCalcCharacStat14InitializeStatEP15_Additioal_infoi`

`WongWork::CCalcCharacStat::InitializeStat(_Additioal_info*, int)`

| 类 | 地址 |
|---|---|
| `WongWork::CCalcCharacStat` | `0x0831e9ca` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0831e9ca  _ZN8WongWork15CCalcCharacStat14InitializeStatEP15_Additioal_infoi
#           WongWork::CCalcCharacStat::InitializeStat(_Additioal_info*, int)
# range [0x0831e9ca, 0x0831ec49]
0831e9ca +0x000:  push   %ebp
0831e9cb +0x001:  mov    %esp,%ebp
0831e9cd +0x003:  sub    $0x18,%esp
0831e9d0 +0x006:  mov    0x8(%ebp),%eax
0831e9d3 +0x009:  mov    %eax,(%esp)
0831e9d6 +0x00c:  call   08348268 <_ZN15_Additioal_info5clearEv>  ; _Additioal_info::clear()
0831e9db +0x011:  mov    0xc(%ebp),%eax
0831e9de +0x014:  cmp    $0x1,%eax
0831e9e1 +0x017:  je     0831eaa5 <+0xdb>
0831e9e7 +0x01d:  cmp    $0x1,%eax
0831e9ea +0x020:  jg     0831e9f5 <+0x2b>
0831e9ec +0x022:  test   %eax,%eax
0831e9ee +0x024:  je     0831ea0c <+0x42>
0831e9f0 +0x026:  jmp    0831ec47 <+0x27d>
0831e9f5 +0x02b:  cmp    $0x2,%eax
0831e9f8 +0x02e:  je     0831eb3e <+0x174>
0831e9fe +0x034:  cmp    $0x3,%eax
0831ea01 +0x037:  je     0831ebc5 <+0x1fb>
0831ea07 +0x03d:  jmp    0831ec47 <+0x27d>
0831ea0c +0x042:  mov    0x8(%ebp),%eax
0831ea0f +0x045:  movl   $0x5dc,(%eax)
0831ea15 +0x04b:  mov    0x8(%ebp),%eax
0831ea18 +0x04e:  movl   $0x5dc,0x4(%eax)
0831ea1f +0x055:  mov    0x8(%ebp),%eax
0831ea22 +0x058:  movw   $0x32,0x8(%eax)
0831ea28 +0x05e:  mov    0x8(%ebp),%eax
0831ea2b +0x061:  movw   $0x32,0xa(%eax)
0831ea31 +0x067:  mov    0x8(%ebp),%eax
0831ea34 +0x06a:  movw   $0x3c,0xc(%eax)
0831ea3a +0x070:  mov    0x8(%ebp),%eax
0831ea3d +0x073:  movw   $0x32,0xe(%eax)
0831ea43 +0x079:  mov    0x8(%ebp),%eax
0831ea46 +0x07c:  movw   $0xc8,0x14(%eax)
0831ea4c +0x082:  mov    0x8(%ebp),%eax
0831ea4f +0x085:  movw   $0xff38,0x16(%eax)
0831ea55 +0x08b:  mov    0x8(%ebp),%eax
0831ea58 +0x08e:  movl   $0x61a80,0x3a(%eax)
0831ea5f +0x095:  mov    0x8(%ebp),%eax
0831ea62 +0x098:  movw   $0x96,0x40(%eax)
0831ea68 +0x09e:  mov    0x8(%ebp),%eax
0831ea6b +0x0a1:  movl   $0x2134,0x42(%eax)
0831ea72 +0x0a8:  mov    0x8(%ebp),%eax
0831ea75 +0x0ab:  movw   $0x2134,0x46(%eax)
0831ea7b +0x0b1:  mov    0x8(%ebp),%eax
0831ea7e +0x0b4:  movw   $0x1b58,0x48(%eax)
0831ea84 +0x0ba:  mov    0x8(%ebp),%eax
0831ea87 +0x0bd:  movw   $0x1770,0x4a(%eax)
0831ea8d +0x0c3:  mov    0x8(%ebp),%eax
0831ea90 +0x0c6:  movw   $0x10cc,0x4c(%eax)
0831ea96 +0x0cc:  mov    0x8(%ebp),%eax
0831ea99 +0x0cf:  movl   $0xa6040,0x4e(%eax)
0831eaa0 +0x0d6:  jmp    0831ec47 <+0x27d>
0831eaa5 +0x0db:  mov    0x8(%ebp),%eax
0831eaa8 +0x0de:  movl   $0x708,(%eax)
0831eaae +0x0e4:  mov    0x8(%ebp),%eax
0831eab1 +0x0e7:  movl   $0x5dc,0x4(%eax)
0831eab8 +0x0ee:  mov    0x8(%ebp),%eax
0831eabb +0x0f1:  movw   $0x3c,0x8(%eax)
0831eac1 +0x0f7:  mov    0x8(%ebp),%eax
0831eac4 +0x0fa:  movw   $0x3c,0xa(%eax)
0831eaca +0x100:  mov    0x8(%ebp),%eax
0831eacd +0x103:  movw   $0x32,0xc(%eax)
0831ead3 +0x109:  mov    0x8(%ebp),%eax
0831ead6 +0x10c:  movw   $0x32,0xe(%eax)
0831eadc +0x112:  mov    0x8(%ebp),%eax
0831eadf +0x115:  movw   $0xff38,0x14(%eax)
0831eae5 +0x11b:  mov    0x8(%ebp),%eax
0831eae8 +0x11e:  movw   $0xc8,0x16(%eax)
0831eaee +0x124:  mov    0x8(%ebp),%eax
0831eaf1 +0x127:  movl   $0x493e0,0x3a(%eax)
0831eaf8 +0x12e:  mov    0x8(%ebp),%eax
0831eafb +0x131:  movw   $0x82,0x40(%eax)
0831eb01 +0x137:  mov    0x8(%ebp),%eax
0831eb04 +0x13a:  movl   $0x238c,0x42(%eax)
0831eb0b +0x141:  mov    0x8(%ebp),%eax
0831eb0e +0x144:  movw   $0x251c,0x46(%eax)
0831eb14 +0x14a:  mov    0x8(%ebp),%eax
0831eb17 +0x14d:  movw   $0x2710,0x48(%eax)
0831eb1d +0x153:  mov    0x8(%ebp),%eax
0831eb20 +0x156:  movw   $0x1770,0x4a(%eax)
0831eb26 +0x15c:  mov    0x8(%ebp),%eax
0831eb29 +0x15f:  movw   $0x125c,0x4c(%eax)
0831eb2f +0x165:  mov    0x8(%ebp),%eax
0831eb32 +0x168:  movl   $0x7a120,0x4e(%eax)
0831eb39 +0x16f:  jmp    0831ec47 <+0x27d>
0831eb3e +0x174:  mov    0x8(%ebp),%eax
0831eb41 +0x177:  movl   $0x4e2,(%eax)
0831eb47 +0x17d:  mov    0x8(%ebp),%eax
0831eb4a +0x180:  movl   $0x708,0x4(%eax)
0831eb51 +0x187:  mov    0x8(%ebp),%eax
0831eb54 +0x18a:  movw   $0x28,0x8(%eax)
0831eb5a +0x190:  mov    0x8(%ebp),%eax
0831eb5d +0x193:  movw   $0x28,0xa(%eax)
0831eb63 +0x199:  mov    0x8(%ebp),%eax
0831eb66 +0x19c:  movw   $0x46,0xc(%eax)
0831eb6c +0x1a2:  mov    0x8(%ebp),%eax
0831eb6f +0x1a5:  movw   $0x3c,0xe(%eax)
0831eb75 +0x1ab:  mov    0x8(%ebp),%eax
0831eb78 +0x1ae:  movl   $0x50910,0x3a(%eax)
0831eb7f +0x1b5:  mov    0x8(%ebp),%eax
0831eb82 +0x1b8:  movw   $0xaf,0x40(%eax)
0831eb88 +0x1be:  mov    0x8(%ebp),%eax
0831eb8b +0x1c1:  movl   $0x2008,0x42(%eax)
0831eb92 +0x1c8:  mov    0x8(%ebp),%eax
0831eb95 +0x1cb:  movw   $0x251c,0x46(%eax)
0831eb9b +0x1d1:  mov    0x8(%ebp),%eax
0831eb9e +0x1d4:  movw   $0x1f40,0x48(%eax)
0831eba4 +0x1da:  mov    0x8(%ebp),%eax
0831eba7 +0x1dd:  movw   $0x1770,0x4a(%eax)
0831ebad +0x1e3:  mov    0x8(%ebp),%eax
0831ebb0 +0x1e6:  movw   $0x1324,0x4c(%eax)
0831ebb6 +0x1ec:  mov    0x8(%ebp),%eax
0831ebb9 +0x1ef:  movl   $0x927c0,0x4e(%eax)
0831ebc0 +0x1f6:  jmp    0831ec47 <+0x27d>
0831ebc5 +0x1fb:  mov    0x8(%ebp),%eax
0831ebc8 +0x1fe:  movl   $0x3e8,(%eax)
0831ebce +0x204:  mov    0x8(%ebp),%eax
0831ebd1 +0x207:  movl   $0x7d0,0x4(%eax)
0831ebd8 +0x20e:  mov    0x8(%ebp),%eax
0831ebdb +0x211:  movw   $0x1e,0x8(%eax)
0831ebe1 +0x217:  mov    0x8(%ebp),%eax
0831ebe4 +0x21a:  movw   $0x1e,0xa(%eax)
0831ebea +0x220:  mov    0x8(%ebp),%eax
0831ebed +0x223:  movw   $0x50,0xc(%eax)
0831ebf3 +0x229:  mov    0x8(%ebp),%eax
0831ebf6 +0x22c:  movw   $0x46,0xe(%eax)
0831ebfc +0x232:  mov    0x8(%ebp),%eax
0831ebff +0x235:  movl   $0x445c0,0x3a(%eax)
0831ec06 +0x23c:  mov    0x8(%ebp),%eax
0831ec09 +0x23f:  movw   $0xc8,0x40(%eax)
0831ec0f +0x245:  mov    0x8(%ebp),%eax
0831ec12 +0x248:  movl   $0x1f40,0x42(%eax)
0831ec19 +0x24f:  mov    0x8(%ebp),%eax
0831ec1c +0x252:  movw   $0x2710,0x46(%eax)
0831ec22 +0x258:  mov    0x8(%ebp),%eax
0831ec25 +0x25b:  movw   $0x2710,0x48(%eax)
0831ec2b +0x261:  mov    0x8(%ebp),%eax
0831ec2e +0x264:  movw   $0x1388,0x4a(%eax)
0831ec34 +0x26a:  mov    0x8(%ebp),%eax
0831ec37 +0x26d:  movw   $0xdac,0x4c(%eax)
0831ec3d +0x273:  mov    0x8(%ebp),%eax
0831ec40 +0x276:  movl   $0x61a80,0x4e(%eax)
0831ec47 +0x27d:  leave
0831ec48 +0x27e:  ret
0831ec49 +0x27f:  nop
```

## 反编译 C

```c
// WongWork::CCalcCharacStat::InitializeStat @ 0x831e9ca

/* WongWork::CCalcCharacStat::InitializeStat(_Additioal_info*, int) */

void WongWork::CCalcCharacStat::InitializeStat(_Additioal_info *param_1,int param_2)

{
  _Additioal_info::clear(param_1);
  if (param_2 == 1) {
    *(undefined4 *)param_1 = 0x708;
    *(undefined4 *)(param_1 + 4) = 0x5dc;
    *(undefined2 *)(param_1 + 8) = 0x3c;
    *(undefined2 *)(param_1 + 10) = 0x3c;
    *(undefined2 *)(param_1 + 0xc) = 0x32;
    *(undefined2 *)(param_1 + 0xe) = 0x32;
    *(undefined2 *)(param_1 + 0x14) = 0xff38;
    *(undefined2 *)(param_1 + 0x16) = 200;
    *(undefined4 *)(param_1 + 0x3a) = 300000;
    *(undefined2 *)(param_1 + 0x40) = 0x82;
    *(undefined4 *)(param_1 + 0x42) = 0x238c;
    *(undefined2 *)(param_1 + 0x46) = 0x251c;
    *(undefined2 *)(param_1 + 0x48) = 10000;
    *(undefined2 *)(param_1 + 0x4a) = 6000;
    *(undefined2 *)(param_1 + 0x4c) = 0x125c;
    *(undefined4 *)(param_1 + 0x4e) = 500000;
  }
  else if (param_2 < 2) {
    if (param_2 == 0) {
      *(undefined4 *)param_1 = 0x5dc;
      *(undefined4 *)(param_1 + 4) = 0x5dc;
      *(undefined2 *)(param_1 + 8) = 0x32;
      *(undefined2 *)(param_1 + 10) = 0x32;
      *(undefined2 *)(param_1 + 0xc) = 0x3c;
      *(undefined2 *)(param_1 + 0xe) = 0x32;
      *(undefined2 *)(param_1 + 0x14) = 200;
      *(undefined2 *)(param_1 + 0x16) = 0xff38;
      *(undefined4 *)(param_1 + 0x3a) = 400000;
      *(undefined2 *)(param_1 + 0x40) = 0x96;
      *(undefined4 *)(param_1 + 0x42) = 0x2134;
      *(undefined2 *)(param_1 + 0x46) = 0x2134;
      *(undefined2 *)(param_1 + 0x48) = 7000;
      *(undefined2 *)(param_1 + 0x4a) = 6000;
      *(undefined2 *)(param_1 + 0x4c) = 0x10cc;
      *(undefined4 *)(param_1 + 0x4e) = 680000;
    }
  }
  else if (param_2 == 2) {
    *(undefined4 *)param_1 = 0x4e2;
    *(undefined4 *)(param_1 + 4) = 0x708;
    *(undefined2 *)(param_1 + 8) = 0x28;
    *(undefined2 *)(param_1 + 10) = 0x28;
    *(undefined2 *)(param_1 + 0xc) = 0x46;
    *(undefined2 *)(param_1 + 0xe) = 0x3c;
    *(undefined4 *)(param_1 + 0x3a) = 330000;
    *(undefined2 *)(param_1 + 0x40) = 0xaf;
    *(undefined4 *)(param_1 + 0x42) = 0x2008;
    *(undefined2 *)(param_1 + 0x46) = 0x251c;
    *(undefined2 *)(param_1 + 0x48) = 8000;
    *(undefined2 *)(param_1 + 0x4a) = 6000;
    *(undefined2 *)(param_1 + 0x4c) = 0x1324;
    *(undefined4 *)(param_1 + 0x4e) = 600000;
  }
  else if (param_2 == 3) {
    *(undefined4 *)param_1 = 1000;
    *(undefined4 *)(param_1 + 4) = 2000;
    *(undefined2 *)(param_1 + 8) = 0x1e;
    *(undefined2 *)(param_1 + 10) = 0x1e;
    *(undefined2 *)(param_1 + 0xc) = 0x50;
    *(undefined2 *)(param_1 + 0xe) = 0x46;
    *(undefined4 *)(param_1 + 0x3a) = 280000;
    *(undefined2 *)(param_1 + 0x40) = 200;
    *(undefined4 *)(param_1 + 0x42) = 8000;
    *(undefined2 *)(param_1 + 0x46) = 10000;
    *(undefined2 *)(param_1 + 0x48) = 10000;
    *(undefined2 *)(param_1 + 0x4a) = 5000;
    *(undefined2 *)(param_1 + 0x4c) = 0xdac;
    *(undefined4 *)(param_1 + 0x4e) = 400000;
  }
  return;
}
```
