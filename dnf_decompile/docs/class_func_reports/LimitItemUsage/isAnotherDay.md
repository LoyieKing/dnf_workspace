# isAnotherDay

`_ZN14LimitItemUsage12isAnotherDayEv`

`LimitItemUsage::isAnotherDay()`

| 类 | 地址 |
|---|---|
| `LimitItemUsage` | `0x08688fba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08688fba  _ZN14LimitItemUsage12isAnotherDayEv
#           LimitItemUsage::isAnotherDay()
# range [0x08688fba, 0x0868900f]
08688fba +0x00:  push   %ebp
08688fbb +0x01:  mov    %esp,%ebp
08688fbd +0x03:  sub    $0x28,%esp
08688fc0 +0x06:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08688fc5 +0x0b:  mov    0x37c(%eax),%eax
08688fcb +0x11:  mov    %eax,-0x10(%ebp)
08688fce +0x14:  mov    0x8(%ebp),%eax
08688fd1 +0x17:  mov    %eax,(%esp)
08688fd4 +0x1a:  call   0822d1dc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2886>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2886
08688fd9 +0x1f:  mov    %eax,-0xc(%ebp)
08688fdc +0x22:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08688fe3 +0x29:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08688fe8 +0x2e:  mov    %eax,0x8(%esp)
08688fec +0x32:  mov    -0xc(%ebp),%eax
08688fef +0x35:  mov    %eax,0x4(%esp)
08688ff3 +0x39:  mov    -0x10(%ebp),%eax
08688ff6 +0x3c:  mov    %eax,(%esp)
08688ff9 +0x3f:  call   0846c0a8 <_Z22CheckDailyScheduleTimeill>  ; CheckDailyScheduleTime(int, long, long)
08688ffe +0x44:  test   %al,%al
08689000 +0x46:  je     08689009 <+0x4f>
08689002 +0x48:  mov    $0x1,%eax
08689007 +0x4d:  jmp    0868900e <+0x54>
08689009 +0x4f:  mov    $0x0,%eax
0868900e +0x54:  leave
0868900f +0x55:  ret
```

## 反编译 C

```c
// LimitItemUsage::isAnotherDay @ 0x8688fba

/* LimitItemUsage::isAnotherDay() */

bool __thiscall LimitItemUsage::isAnotherDay(LimitItemUsage *this)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  iVar2 = G_CEnvironment();
  iVar2 = *(int *)(iVar2 + 0x37c);
  lVar3 = CommonTime::operator_cast_to_long((CommonTime *)this);
  lVar4 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  cVar1 = CheckDailyScheduleTime(iVar2,lVar3,lVar4);
  return cVar1 != '\0';
}
```
