# IncreaseEnterCount

`_ZN13TOD_UserState18IncreaseEnterCountEv`

`TOD_UserState::IncreaseEnterCount()`

| 类 | 地址 |
|---|---|
| `TOD_UserState` | `0x0864388a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0864388a  _ZN13TOD_UserState18IncreaseEnterCountEv
#           TOD_UserState::IncreaseEnterCount()
# range [0x0864388a, 0x086438fb]
0864388a +0x00:  push   %ebp
0864388b +0x01:  mov    %esp,%ebp
0864388d +0x03:  sub    $0x18,%esp
08643890 +0x06:  mov    0x8(%ebp),%eax
08643893 +0x09:  mov    0x10(%eax),%eax
08643896 +0x0c:  lea    0x1(%eax),%edx
08643899 +0x0f:  mov    0x8(%ebp),%eax
0864389c +0x12:  mov    %edx,0x10(%eax)
0864389f +0x15:  mov    0x8(%ebp),%eax
086438a2 +0x18:  movzwl 0x16(%eax),%eax
086438a6 +0x1c:  add    $0x1,%eax
086438a9 +0x1f:  mov    %eax,%edx
086438ab +0x21:  mov    0x8(%ebp),%eax
086438ae +0x24:  mov    %dx,0x16(%eax)
086438b2 +0x28:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
086438b9 +0x2f:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
086438be +0x34:  mov    0x8(%ebp),%edx
086438c1 +0x37:  mov    %eax,0x18(%edx)
086438c4 +0x3a:  mov    0x8(%ebp),%eax
086438c7 +0x3d:  add    $0x14,%eax
086438ca +0x40:  mov    %eax,(%esp)
086438cd +0x43:  call   0822ec40 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x42ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x42ea
086438d2 +0x48:  test   %ax,%ax
086438d5 +0x4b:  sete   %al
086438d8 +0x4e:  test   %al,%al
086438da +0x50:  je     086438ee <+0x64>
086438dc +0x52:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
086438e3 +0x59:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
086438e8 +0x5e:  mov    0x8(%ebp),%edx
086438eb +0x61:  mov    %eax,0xc(%edx)
086438ee +0x64:  mov    0x8(%ebp),%eax
086438f1 +0x67:  mov    %eax,(%esp)
086438f4 +0x6a:  call   080c8bc4 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x1c>  ; global constructors keyed to BestClearTime::BestClearTime()+0x1c
086438f9 +0x6f:  leave
086438fa +0x70:  ret
086438fb +0x71:  nop
```

## 反编译 C

```c
// TOD_UserState::IncreaseEnterCount @ 0x864388a

/* TOD_UserState::IncreaseEnterCount() */

void __thiscall TOD_UserState::IncreaseEnterCount(TOD_UserState *this)

{
  short sVar1;
  undefined4 uVar2;
  
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
  *(short *)(this + 0x16) = *(short *)(this + 0x16) + 1;
  uVar2 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  *(undefined4 *)(this + 0x18) = uVar2;
  sVar1 = TOD_Layer::GetLayer((TOD_Layer *)(this + 0x14));
  if (sVar1 == 0) {
    uVar2 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    *(undefined4 *)(this + 0xc) = uVar2;
  }
  charac_expand::CData::alter((CData *)this);
  return;
}
```
