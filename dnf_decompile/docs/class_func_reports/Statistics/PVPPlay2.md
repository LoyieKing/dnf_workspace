# PVPPlay2

`_ZN10Statistics8PVPPlay2Eiii`

`Statistics::PVPPlay2(int, int, int)`

| 类 | 地址 |
|---|---|
| `Statistics` | `0x0860b8d8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860b8d8  _ZN10Statistics8PVPPlay2Eiii
#           Statistics::PVPPlay2(int, int, int)
# range [0x0860b8d8, 0x0860b909]
0860b8d8 +0x00:  push   %ebp
0860b8d9 +0x01:  mov    %esp,%ebp
0860b8db +0x03:  sub    $0x18,%esp
0860b8de +0x06:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0860b8e3 +0x0b:  mov    %eax,(%esp)
0860b8e6 +0x0e:  call   0844dc40 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x856>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x856
0860b8eb +0x13:  mov    0x10(%ebp),%edx
0860b8ee +0x16:  mov    %edx,0xc(%esp)
0860b8f2 +0x1a:  mov    0xc(%ebp),%edx
0860b8f5 +0x1d:  mov    %edx,0x8(%esp)
0860b8f9 +0x21:  mov    0x8(%ebp),%edx
0860b8fc +0x24:  mov    %edx,0x4(%esp)
0860b900 +0x28:  mov    %eax,(%esp)
0860b903 +0x2b:  call   0860c5da <_ZN13StatisticsPvP16incPvPRoomResultEiii>  ; StatisticsPvP::incPvPRoomResult(int, int, int)
0860b908 +0x30:  leave
0860b909 +0x31:  ret
```

## 反编译 C

```c
// Statistics::PVPPlay2 @ 0x860b8d8

/* Statistics::PVPPlay2(int, int, int) */

void Statistics::PVPPlay2(int param_1,int param_2,int param_3)

{
  GameWorld *this;
  StatisticsPvP *this_00;
  
  this = (GameWorld *)G_GameWorld();
  this_00 = (StatisticsPvP *)GameWorld::getStatisticsPvP(this);
  StatisticsPvP::incPvPRoomResult(this_00,param_1,param_2,param_3);
  return;
}
```
