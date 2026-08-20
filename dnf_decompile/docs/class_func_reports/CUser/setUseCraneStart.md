# setUseCraneStart

`_ZN5CUser16setUseCraneStartEb`

`CUser::setUseCraneStart(bool)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868dd18` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868dd18  _ZN5CUser16setUseCraneStartEb
#           CUser::setUseCraneStart(bool)
# range [0x0868dd18, 0x0868dd33]
0868dd18 +0x00:  push   %ebp
0868dd19 +0x01:  mov    %esp,%ebp
0868dd1b +0x03:  sub    $0x4,%esp
0868dd1e +0x06:  mov    0xc(%ebp),%eax
0868dd21 +0x09:  mov    %al,-0x4(%ebp)
0868dd24 +0x0c:  mov    0x8(%ebp),%eax
0868dd27 +0x0f:  movzbl -0x4(%ebp),%edx
0868dd2b +0x13:  mov    %dl,0x8eb98(%eax)
0868dd31 +0x19:  leave
0868dd32 +0x1a:  ret
0868dd33 +0x1b:  nop
```

## 反编译 C

```c
// CUser::setUseCraneStart @ 0x868dd18

/* CUser::setUseCraneStart(bool) */

void __thiscall CUser::setUseCraneStart(CUser *this,bool param_1)

{
  this[0x8eb98] = (CUser)param_1;
  return;
}
```
