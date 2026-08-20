# EventNewCharacterReward

`_ZN23EventNewCharacterRewardC1Ev`

`EventNewCharacterReward::EventNewCharacterReward()`

| 类 | 地址 |
|---|---|
| `EventNewCharacterReward` | `0x0816bac4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816bac4  _ZN23EventNewCharacterRewardC1Ev
#           EventNewCharacterReward::EventNewCharacterReward()
# range [0x0816bac4, 0x0816baf3]
0816bac4 +0x00:  push   %ebp
0816bac5 +0x01:  mov    %esp,%ebp
0816bac7 +0x03:  sub    $0x18,%esp
0816baca +0x06:  mov    0x8(%ebp),%eax
0816bacd +0x09:  mov    %eax,(%esp)
0816bad0 +0x0c:  call   0810ae2c <_ZN10CEventBaseC1Ev>  ; CEventBase::CEventBase()
0816bad5 +0x11:  mov    0x8(%ebp),%eax
0816bad8 +0x14:  movl   $&_ZTV23EventNewCharacterReward+0x8,(%eax)
0816bade +0x1a:  mov    0x8(%ebp),%eax
0816bae1 +0x1d:  movl   $0xffffffff,0xc(%eax)
0816bae8 +0x24:  mov    0x8(%ebp),%eax
0816baeb +0x27:  movl   $0x0,0x10(%eax)
0816baf2 +0x2e:  leave
0816baf3 +0x2f:  ret
```

## 反编译 C

```c
// EventNewCharacterReward::EventNewCharacterReward @ 0x816bac4

/* EventNewCharacterReward::EventNewCharacterReward() */

void __thiscall EventNewCharacterReward::EventNewCharacterReward(EventNewCharacterReward *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__EventNewCharacterReward_08b80028;
  *(undefined4 *)(this + 0xc) = 0xffffffff;
  *(undefined4 *)(this + 0x10) = 0;
  return;
}
```
