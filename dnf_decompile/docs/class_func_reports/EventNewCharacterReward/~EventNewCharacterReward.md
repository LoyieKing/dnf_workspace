# ~EventNewCharacterReward

`_ZN23EventNewCharacterRewardD1Ev`

`EventNewCharacterReward::~EventNewCharacterReward()`

| 类 | 地址 |
|---|---|
| `EventNewCharacterReward` | `0x0816baf4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816baf4  _ZN23EventNewCharacterRewardD1Ev
#           EventNewCharacterReward::~EventNewCharacterReward()
# range [0x0816baf4, 0x0816bb23]
0816baf4 +0x00:  push   %ebp
0816baf5 +0x01:  mov    %esp,%ebp
0816baf7 +0x03:  sub    $0x18,%esp
0816bafa +0x06:  mov    0x8(%ebp),%eax
0816bafd +0x09:  movl   $&_ZTV23EventNewCharacterReward+0x8,(%eax)
0816bb03 +0x0f:  mov    0x8(%ebp),%eax
0816bb06 +0x12:  mov    %eax,(%esp)
0816bb09 +0x15:  call   0810ae52 <_ZN10CEventBaseD1Ev>  ; CEventBase::~CEventBase()
0816bb0e +0x1a:  mov    $0x0,%eax
0816bb13 +0x1f:  test   %al,%al
0816bb15 +0x21:  je     0816bb22 <+0x2e>
0816bb17 +0x23:  mov    0x8(%ebp),%eax
0816bb1a +0x26:  mov    %eax,(%esp)
0816bb1d +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0816bb22 +0x2e:  leave
0816bb23 +0x2f:  ret
```

## 反编译 C

```c
// EventNewCharacterReward::~EventNewCharacterReward @ 0x816baf4

/* WARNING: Removing unreachable block (ram,0x0816bb17) */
/* EventNewCharacterReward::~EventNewCharacterReward() */

void __thiscall EventNewCharacterReward::~EventNewCharacterReward(EventNewCharacterReward *this)

{
  *(undefined ***)this = &PTR__EventNewCharacterReward_08b80028;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}
```
