# ClearLayer

`_ZN13TOD_UserState10ClearLayerEv`

`TOD_UserState::ClearLayer()`

| 类 | 地址 |
|---|---|
| `TOD_UserState` | `0x0864390e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0864390e  _ZN13TOD_UserState10ClearLayerEv
#           TOD_UserState::ClearLayer()
# range [0x0864390e, 0x08643941]
0864390e +0x00:  push   %ebp
0864390f +0x01:  mov    %esp,%ebp
08643911 +0x03:  sub    $0x18,%esp
08643914 +0x06:  mov    0x8(%ebp),%eax
08643917 +0x09:  mov    %eax,(%esp)
0864391a +0x0c:  call   080c8bc4 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x1c>  ; global constructors keyed to BestClearTime::BestClearTime()+0x1c
0864391f +0x11:  mov    0x8(%ebp),%eax
08643922 +0x14:  add    $0x14,%eax
08643925 +0x17:  mov    %eax,(%esp)
08643928 +0x1a:  call   085fe824 <_ZN9TOD_Layer13increaseLayerEv>  ; TOD_Layer::increaseLayer()
0864392d +0x1f:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08643934 +0x26:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08643939 +0x2b:  mov    0x8(%ebp),%edx
0864393c +0x2e:  mov    %eax,0x1c(%edx)
0864393f +0x31:  leave
08643940 +0x32:  ret
08643941 +0x33:  nop
```

## 反编译 C

```c
// TOD_UserState::ClearLayer @ 0x864390e

/* TOD_UserState::ClearLayer() */

void __thiscall TOD_UserState::ClearLayer(TOD_UserState *this)

{
  undefined4 uVar1;
  
  charac_expand::CData::alter((CData *)this);
  TOD_Layer::increaseLayer((TOD_Layer *)(this + 0x14));
  uVar1 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  *(undefined4 *)(this + 0x1c) = uVar1;
  return;
}
```
