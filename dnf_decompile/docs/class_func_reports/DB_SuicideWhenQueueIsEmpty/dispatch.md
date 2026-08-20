# dispatch

`_ZN26DB_SuicideWhenQueueIsEmpty8dispatchEiiP6Stream`

`DB_SuicideWhenQueueIsEmpty::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_SuicideWhenQueueIsEmpty` | `0x0841b206` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0841b206  _ZN26DB_SuicideWhenQueueIsEmpty8dispatchEiiP6Stream
#           DB_SuicideWhenQueueIsEmpty::dispatch(int, int, Stream*)
# range [0x0841b206, 0x0841b20f]
0841b206 +0x00:  push   %ebp
0841b207 +0x01:  mov    %esp,%ebp
0841b209 +0x03:  mov    $0x1,%eax
0841b20e +0x08:  pop    %ebp
0841b20f +0x09:  ret
```

## 反编译 C

```c
// DB_SuicideWhenQueueIsEmpty::dispatch @ 0x841b206

/* DB_SuicideWhenQueueIsEmpty::dispatch(int, int, Stream*) */

undefined4 DB_SuicideWhenQueueIsEmpty::dispatch(int param_1,int param_2,Stream *param_3)

{
  return 1;
}
```
