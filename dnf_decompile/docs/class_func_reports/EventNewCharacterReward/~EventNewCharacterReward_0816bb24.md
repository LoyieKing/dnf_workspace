# ~EventNewCharacterReward

`_ZN23EventNewCharacterRewardD0Ev`

`EventNewCharacterReward::~EventNewCharacterReward()`

| 类 | 地址 |
|---|---|
| `EventNewCharacterReward` | `0x0816bb24` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816bb24  _ZN23EventNewCharacterRewardD0Ev
#           EventNewCharacterReward::~EventNewCharacterReward()
# range [0x0816bb24, 0x0816bb41]
0816bb24 +0x00:  push   %ebp
0816bb25 +0x01:  mov    %esp,%ebp
0816bb27 +0x03:  sub    $0x18,%esp
0816bb2a +0x06:  mov    0x8(%ebp),%eax
0816bb2d +0x09:  mov    %eax,(%esp)
0816bb30 +0x0c:  call   0816baf4 <_ZN23EventNewCharacterRewardD1Ev>  ; EventNewCharacterReward::~EventNewCharacterReward()
0816bb35 +0x11:  mov    0x8(%ebp),%eax
0816bb38 +0x14:  mov    %eax,(%esp)
0816bb3b +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0816bb40 +0x1c:  leave
0816bb41 +0x1d:  ret
```

## 反编译 C

```c
// EventNewCharacterReward::~EventNewCharacterReward @ 0x816bb24

/* EventNewCharacterReward::~EventNewCharacterReward() */

void __thiscall EventNewCharacterReward::~EventNewCharacterReward(EventNewCharacterReward *this)

{
  ~EventNewCharacterReward(this);
  operator_delete(this);
  return;
}
```
