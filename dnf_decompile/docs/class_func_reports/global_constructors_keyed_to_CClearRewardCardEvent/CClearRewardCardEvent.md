# CClearRewardCardEvent

`_GLOBAL__I__ZN21CClearRewardCardEventC2Ev`

`global constructors keyed to CClearRewardCardEvent::CClearRewardCardEvent()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CClearRewardCardEvent` | `0x0810a873` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810a873  _GLOBAL__I__ZN21CClearRewardCardEventC2Ev
#           global constructors keyed to CClearRewardCardEvent::CClearRewardCardEvent()
# range [0x0810a873, 0x0810a88f]
0810a873 +0x00:  push   %ebp
0810a874 +0x01:  mov    %esp,%ebp
0810a876 +0x03:  sub    $0x18,%esp
0810a879 +0x06:  movl   $0xffff,0x4(%esp)
0810a881 +0x0e:  movl   $0x1,(%esp)
0810a888 +0x15:  call   0810a833 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0810a88d +0x1a:  leave
0810a88e +0x1b:  ret
0810a88f +0x1c:  nop
```

## 反编译 C

```c
// <global>::global @ 0x810a873

/* CClearRewardCardEvent::CClearRewardCardEvent() */

void CClearRewardCardEvent::_GLOBAL__I_CClearRewardCardEvent(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
