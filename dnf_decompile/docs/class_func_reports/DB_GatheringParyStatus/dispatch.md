# dispatch

`_ZN22DB_GatheringParyStatus8dispatchEiiP6Stream`

`DB_GatheringParyStatus::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_GatheringParyStatus` | `0x08421aea` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08421aea  _ZN22DB_GatheringParyStatus8dispatchEiiP6Stream
#           DB_GatheringParyStatus::dispatch(int, int, Stream*)
# range [0x08421aea, 0x08421af3]
08421aea +0x00:  push   %ebp
08421aeb +0x01:  mov    %esp,%ebp
08421aed +0x03:  mov    $0x1,%eax
08421af2 +0x08:  pop    %ebp
08421af3 +0x09:  ret
```

## 反编译 C

```c
// DB_GatheringParyStatus::dispatch @ 0x8421aea

/* DB_GatheringParyStatus::dispatch(int, int, Stream*) */

undefined4 DB_GatheringParyStatus::dispatch(int param_1,int param_2,Stream *param_3)

{
  return 1;
}
```
