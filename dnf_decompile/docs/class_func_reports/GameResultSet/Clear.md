# Clear

`_ZN13GameResultSet5ClearEv`

`GameResultSet::Clear()`

| 类 | 地址 |
|---|---|
| `GameResultSet` | `0x084b75fa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b75fa  _ZN13GameResultSet5ClearEv
#           GameResultSet::Clear()
# range [0x084b75fa, 0x084b760c]
084b75fa +0x00:  push   %ebp
084b75fb +0x01:  mov    %esp,%ebp
084b75fd +0x03:  sub    $0x18,%esp
084b7600 +0x06:  mov    0x8(%ebp),%eax
084b7603 +0x09:  mov    %eax,(%esp)
084b7606 +0x0c:  call   084b7442 <_ZN14GameResultType5ClearEv>  ; GameResultType::Clear()
084b760b +0x11:  leave
084b760c +0x12:  ret
```

## 反编译 C

```c
// GameResultSet::Clear @ 0x84b75fa

/* GameResultSet::Clear() */

void __thiscall GameResultSet::Clear(GameResultSet *this)

{
  GameResultType::Clear((GameResultType *)this);
  return;
}
```
