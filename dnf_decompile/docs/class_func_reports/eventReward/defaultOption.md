# defaultOption

`_ZN11eventReward13defaultOptionEcR8itemData`

`eventReward::defaultOption(char, itemData&)`

| 类 | 地址 |
|---|---|
| `eventReward` | `0x080ef25c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080ef25c  _ZN11eventReward13defaultOptionEcR8itemData
#           eventReward::defaultOption(char, itemData&)
# range [0x080ef25c, 0x080ef29b]
080ef25c +0x00:  push   %ebp
080ef25d +0x01:  mov    %esp,%ebp
080ef25f +0x03:  sub    $0x4,%esp
080ef262 +0x06:  mov    0xc(%ebp),%eax
080ef265 +0x09:  mov    %al,-0x4(%ebp)
080ef268 +0x0c:  movsbl -0x4(%ebp),%eax
080ef26c +0x10:  cmp    $0x2,%eax
080ef26f +0x13:  jne    080ef289 <+0x2d>
080ef271 +0x15:  mov    0x10(%ebp),%eax
080ef274 +0x18:  movl   $0x1,0x8(%eax)
080ef27b +0x1f:  mov    0x10(%ebp),%eax
080ef27e +0x22:  movb   $0x0,0x1(%eax)
080ef282 +0x26:  mov    0x10(%ebp),%eax
080ef285 +0x29:  movb   $0x0,0x2(%eax)
080ef289 +0x2d:  mov    0x10(%ebp),%eax
080ef28c +0x30:  movzbl (%eax),%eax
080ef28f +0x33:  test   %al,%al
080ef291 +0x35:  jne    080ef299 <+0x3d>
080ef293 +0x37:  mov    0x10(%ebp),%eax
080ef296 +0x3a:  movb   $0x1,(%eax)
080ef299 +0x3d:  leave
080ef29a +0x3e:  ret
080ef29b +0x3f:  nop
```

## 反编译 C

```c
// eventReward::defaultOption @ 0x80ef25c

/* eventReward::defaultOption(char, itemData&) */

void __thiscall eventReward::defaultOption(eventReward *this,char param_1,itemData *param_2)

{
  if (param_1 == '\x02') {
    *(undefined4 *)(param_2 + 8) = 1;
    param_2[1] = (itemData)0x0;
    param_2[2] = (itemData)0x0;
  }
  if (*param_2 == (itemData)0x0) {
    *param_2 = (itemData)0x1;
  }
  return;
}
```
