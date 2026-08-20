# ResetEventDungeonClearPoint

`_ZN10BattleData27ResetEventDungeonClearPointEv`

`BattleData::ResetEventDungeonClearPoint()`

| 类 | 地址 |
|---|---|
| `BattleData` | `0x085be6ba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085be6ba  _ZN10BattleData27ResetEventDungeonClearPointEv
#           BattleData::ResetEventDungeonClearPoint()
# range [0x085be6ba, 0x085be6e1]
085be6ba +0x00:  push   %ebp
085be6bb +0x01:  mov    %esp,%ebp
085be6bd +0x03:  sub    $0x18,%esp
085be6c0 +0x06:  mov    0x8(%ebp),%eax
085be6c3 +0x09:  add    $0x62c,%eax
085be6c8 +0x0e:  movl   $0x60,0x8(%esp)
085be6d0 +0x16:  movl   $0x0,0x4(%esp)
085be6d8 +0x1e:  mov    %eax,(%esp)
085be6db +0x21:  call   0807dcc0 <_init+0x5b8>
085be6e0 +0x26:  leave
085be6e1 +0x27:  ret
```

## 反编译 C

```c
// BattleData::ResetEventDungeonClearPoint @ 0x85be6ba

/* BattleData::ResetEventDungeonClearPoint() */

void __thiscall BattleData::ResetEventDungeonClearPoint(BattleData *this)

{
  memset(this + 0x62c,0,0x60);
  return;
}
```
