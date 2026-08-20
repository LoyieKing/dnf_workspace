# IsWinerSide

`_ZN13CPowerManager11IsWinerSideEc`

`CPowerManager::IsWinerSide(char)`

| 类 | 地址 |
|---|---|
| `CPowerManager` | `0x0847f8de` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0847f8de  _ZN13CPowerManager11IsWinerSideEc
#           CPowerManager::IsWinerSide(char)
# range [0x0847f8de, 0x0847f90f]
0847f8de +0x00:  push   %ebp
0847f8df +0x01:  mov    %esp,%ebp
0847f8e1 +0x03:  sub    $0x4,%esp
0847f8e4 +0x06:  mov    0xc(%ebp),%eax
0847f8e7 +0x09:  mov    %al,-0x4(%ebp)
0847f8ea +0x0c:  mov    0x8(%ebp),%eax
0847f8ed +0x0f:  movzbl (%eax),%eax
0847f8f0 +0x12:  test   %al,%al
0847f8f2 +0x14:  je     0847f8fa <+0x1c>
0847f8f4 +0x16:  cmpb   $0x0,-0x4(%ebp)
0847f8f8 +0x1a:  jne    0847f901 <+0x23>
0847f8fa +0x1c:  mov    $0x0,%eax
0847f8ff +0x21:  jmp    0847f90d <+0x2f>
0847f901 +0x23:  mov    0x8(%ebp),%eax
0847f904 +0x26:  movzbl (%eax),%eax
0847f907 +0x29:  cmp    -0x4(%ebp),%al
0847f90a +0x2c:  sete   %al
0847f90d +0x2f:  leave
0847f90e +0x30:  ret
0847f90f +0x31:  nop
```

## 反编译 C

```c
// CPowerManager::IsWinerSide @ 0x847f8de

/* CPowerManager::IsWinerSide(char) */

bool __thiscall CPowerManager::IsWinerSide(CPowerManager *this,char param_1)

{
  bool bVar1;
  
  if ((*this == (CPowerManager)0x0) || (param_1 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = *this == (CPowerManager)param_1;
  }
  return bVar1;
}
```
