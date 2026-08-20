# set_charac_visible_values

`_ZN15CUserCharacInfo25set_charac_visible_valuesEc`

`CUserCharacInfo::set_charac_visible_values(char)`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x0868be08` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868be08  _ZN15CUserCharacInfo25set_charac_visible_valuesEc
#           CUserCharacInfo::set_charac_visible_values(char)
# range [0x0868be08, 0x0868be2f]
0868be08 +0x00:  push   %ebp
0868be09 +0x01:  mov    %esp,%ebp
0868be0b +0x03:  sub    $0x4,%esp
0868be0e +0x06:  mov    0xc(%ebp),%eax
0868be11 +0x09:  mov    %al,-0x4(%ebp)
0868be14 +0x0c:  mov    0x8(%ebp),%eax
0868be17 +0x0f:  mov    0x10(%eax),%eax
0868be1a +0x12:  test   %eax,%eax
0868be1c +0x14:  je     0868be2e <+0x26>
0868be1e +0x16:  mov    0x8(%ebp),%eax
0868be21 +0x19:  mov    0x10(%eax),%eax
0868be24 +0x1c:  movzbl -0x4(%ebp),%edx
0868be28 +0x20:  mov    %dl,0xe40(%eax)
0868be2e +0x26:  leave
0868be2f +0x27:  ret
```

## 反编译 C

```c
// CUserCharacInfo::set_charac_visible_values @ 0x868be08

/* CUserCharacInfo::set_charac_visible_values(char) */

void __thiscall CUserCharacInfo::set_charac_visible_values(CUserCharacInfo *this,char param_1)

{
  if (*(int *)(this + 0x10) != 0) {
    *(char *)(*(int *)(this + 0x10) + 0xe40) = param_1;
  }
  return;
}
```
