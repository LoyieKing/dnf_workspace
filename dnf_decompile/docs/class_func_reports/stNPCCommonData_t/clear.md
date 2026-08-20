# clear

`_ZN17stNPCCommonData_t5clearEv`

`stNPCCommonData_t::clear()`

| 类 | 地址 |
|---|---|
| `stNPCCommonData_t` | `0x089fae9e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 089fae9e  _ZN17stNPCCommonData_t5clearEv
#           stNPCCommonData_t::clear()
# range [0x089fae9e, 0x089faeed]
089fae9e +0x00:  push   %ebp
089fae9f +0x01:  mov    %esp,%ebp
089faea1 +0x03:  sub    $0x10,%esp
089faea4 +0x06:  movl   $0x0,-0x4(%ebp)
089faeab +0x0d:  jmp    089faebe <+0x20>
089faead +0x0f:  mov    -0x4(%ebp),%edx
089faeb0 +0x12:  mov    0x8(%ebp),%eax
089faeb3 +0x15:  movw   $0x0,0x2(%eax,%edx,2)
089faeba +0x1c:  addl   $0x1,-0x4(%ebp)
089faebe +0x20:  cmpl   $0x9,-0x4(%ebp)
089faec2 +0x24:  setle  %al
089faec5 +0x27:  test   %al,%al
089faec7 +0x29:  jne    089faead <+0xf>
089faec9 +0x2b:  mov    0x8(%ebp),%eax
089faecc +0x2e:  movw   $0x0,(%eax)
089faed1 +0x33:  mov    0x8(%ebp),%eax
089faed4 +0x36:  movw   $0x0,0x34(%eax)
089faeda +0x3c:  mov    0x8(%ebp),%eax
089faedd +0x3f:  movw   $0x0,0x30(%eax)
089faee3 +0x45:  mov    0x8(%ebp),%eax
089faee6 +0x48:  movw   $0x0,0x32(%eax)
089faeec +0x4e:  leave
089faeed +0x4f:  ret
```

## 反编译 C

```c
// stNPCCommonData_t::clear @ 0x89fae9e

/* stNPCCommonData_t::clear() */

void __thiscall stNPCCommonData_t::clear(stNPCCommonData_t *this)

{
  int local_8;
  
  for (local_8 = 0; local_8 < 10; local_8 = local_8 + 1) {
    *(undefined2 *)(this + local_8 * 2 + 2) = 0;
  }
  *(undefined2 *)this = 0;
  *(undefined2 *)(this + 0x34) = 0;
  *(undefined2 *)(this + 0x30) = 0;
  *(undefined2 *)(this + 0x32) = 0;
  return;
}
```
