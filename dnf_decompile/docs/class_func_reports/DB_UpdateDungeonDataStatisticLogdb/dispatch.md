# dispatch

`_ZN34DB_UpdateDungeonDataStatisticLogdb8dispatchEiiP6Stream`

`DB_UpdateDungeonDataStatisticLogdb::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateDungeonDataStatisticLogdb` | `0x0842456a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0842456a  _ZN34DB_UpdateDungeonDataStatisticLogdb8dispatchEiiP6Stream
#           DB_UpdateDungeonDataStatisticLogdb::dispatch(int, int, Stream*)
# range [0x0842456a, 0x08424573]
0842456a +0x00:  push   %ebp
0842456b +0x01:  mov    %esp,%ebp
0842456d +0x03:  mov    $0x1,%eax
08424572 +0x08:  pop    %ebp
08424573 +0x09:  ret
```

## 反编译 C

```c
// DB_UpdateDungeonDataStatisticLogdb::dispatch @ 0x842456a

/* DB_UpdateDungeonDataStatisticLogdb::dispatch(int, int, Stream*) */

undefined4 DB_UpdateDungeonDataStatisticLogdb::dispatch(int param_1,int param_2,Stream *param_3)

{
  return 1;
}
```
