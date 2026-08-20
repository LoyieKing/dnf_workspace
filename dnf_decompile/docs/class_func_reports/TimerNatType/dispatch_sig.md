# dispatch_sig

`_ZN12TimerNatType12dispatch_sigEiij`

`TimerNatType::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerNatType` | `0x08635c2c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08635c2c  _ZN12TimerNatType12dispatch_sigEiij
#           TimerNatType::dispatch_sig(int, int, unsigned int)
# range [0x08635c2c, 0x08635c59]
08635c2c +0x00:  push   %ebp
08635c2d +0x01:  mov    %esp,%ebp
08635c2f +0x03:  sub    $0x18,%esp
08635c32 +0x06:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08635c37 +0x0b:  mov    %eax,(%esp)
08635c3a +0x0e:  call   082343ba <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9a64>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9a64
08635c3f +0x13:  mov    %eax,(%esp)
08635c42 +0x16:  call   0860c968 <_ZN17StatisticsNatType13UpdateNatTypeEv>  ; StatisticsNatType::UpdateNatType()
08635c47 +0x1b:  mov    0x8(%ebp),%eax
08635c4a +0x1e:  mov    %eax,(%esp)
08635c4d +0x21:  call   08635c5a <_ZN12TimerNatType15RegistNextTimerEv>  ; TimerNatType::RegistNextTimer()
08635c52 +0x26:  mov    $0x1,%eax
08635c57 +0x2b:  leave
08635c58 +0x2c:  ret
08635c59 +0x2d:  nop
```

## 反编译 C

```c
// TimerNatType::dispatch_sig @ 0x8635c2c

/* TimerNatType::dispatch_sig(int, int, unsigned int) */

undefined4 TimerNatType::dispatch_sig(int param_1,int param_2,uint param_3)

{
  GameWorld *this;
  
  this = (GameWorld *)G_GameWorld();
  GameWorld::GetStatisticsNatType(this);
  StatisticsNatType::UpdateNatType();
  RegistNextTimer();
  return 1;
}
```
