# EventNewCharacterReward

`_GLOBAL__I__ZN23EventNewCharacterRewardC2Ev`

`global constructors keyed to EventNewCharacterReward::EventNewCharacterReward()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to EventNewCharacterReward` | `0x0816bd6d` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816bd6d  _GLOBAL__I__ZN23EventNewCharacterRewardC2Ev
#           global constructors keyed to EventNewCharacterReward::EventNewCharacterReward()
# range [0x0816bd6d, 0x0816bd8b]
0816bd6d +0x00:  push   %ebp
0816bd6e +0x01:  mov    %esp,%ebp
0816bd70 +0x03:  sub    $0x18,%esp
0816bd73 +0x06:  movl   $0xffff,0x4(%esp)
0816bd7b +0x0e:  movl   $0x1,(%esp)
0816bd82 +0x15:  call   0816bd2d <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0816bd87 +0x1a:  leave
0816bd88 +0x1b:  ret
0816bd89 +0x1c:  nop
0816bd8a +0x1d:  nop
0816bd8b +0x1e:  nop
```

## 反编译 C

```c
// <global>::global @ 0x816bd6d

/* EventNewCharacterReward::EventNewCharacterReward() */

void EventNewCharacterReward::_GLOBAL__I_EventNewCharacterReward(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
