# GetCurrenTimeTable

`_ZN14WarAreaCounter18GetCurrenTimeTableEv`

`WarAreaCounter::GetCurrenTimeTable()`

| 类 | 地址 |
|---|---|
| `WarAreaCounter` | `0x089024c4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 089024c4  _ZN14WarAreaCounter18GetCurrenTimeTableEv
#           WarAreaCounter::GetCurrenTimeTable()
# range [0x089024c4, 0x08902542]
089024c4 +0x00:  push   %ebp
089024c5 +0x01:  mov    %esp,%ebp
089024c7 +0x03:  sub    $0x58,%esp
089024ca +0x06:  lea    -0x18(%ebp),%eax
089024cd +0x09:  mov    %eax,(%esp)
089024d0 +0x0c:  call   0807d750 <_init+0x48>
089024d5 +0x11:  lea    -0x44(%ebp),%eax
089024d8 +0x14:  mov    %eax,0x4(%esp)
089024dc +0x18:  lea    -0x18(%ebp),%eax
089024df +0x1b:  mov    %eax,(%esp)
089024e2 +0x1e:  call   0807e360 <_init+0xc58>
089024e7 +0x23:  mov    %eax,-0x14(%ebp)
089024ea +0x26:  mov    -0x14(%ebp),%eax
089024ed +0x29:  mov    0x8(%eax),%eax
089024f0 +0x2c:  mov    %eax,-0x10(%ebp)
089024f3 +0x2f:  movl   $0x0,-0xc(%ebp)
089024fa +0x36:  jmp    08902525 <+0x61>
089024fc +0x38:  mov    -0xc(%ebp),%edx
089024ff +0x3b:  mov    0x8(%ebp),%eax
08902502 +0x3e:  add    $0x18,%edx
08902505 +0x41:  mov    (%eax,%edx,4),%eax
08902508 +0x44:  cmp    -0x10(%ebp),%eax
0890250b +0x47:  jg     08902521 <+0x5d>
0890250d +0x49:  mov    -0xc(%ebp),%eax
08902510 +0x4c:  lea    0x1(%eax),%edx
08902513 +0x4f:  mov    0x8(%ebp),%eax
08902516 +0x52:  add    $0x18,%edx
08902519 +0x55:  mov    (%eax,%edx,4),%eax
0890251c +0x58:  cmp    -0x10(%ebp),%eax
0890251f +0x5b:  jg     0890253d <+0x79>
08902521 +0x5d:  addl   $0x1,-0xc(%ebp)
08902525 +0x61:  mov    0x8(%ebp),%eax
08902528 +0x64:  mov    0x140(%eax),%eax
0890252e +0x6a:  sub    $0x1,%eax
08902531 +0x6d:  cmp    -0xc(%ebp),%eax
08902534 +0x70:  setg   %al
08902537 +0x73:  test   %al,%al
08902539 +0x75:  jne    089024fc <+0x38>
0890253b +0x77:  jmp    0890253e <+0x7a>
0890253d +0x79:  nop
0890253e +0x7a:  mov    -0xc(%ebp),%eax
08902541 +0x7d:  leave
08902542 +0x7e:  ret
```

## 反编译 C

```c
// WarAreaCounter::GetCurrenTimeTable @ 0x89024c4

/* WarAreaCounter::GetCurrenTimeTable() */

int __thiscall WarAreaCounter::GetCurrenTimeTable(WarAreaCounter *this)

{
  tm *ptVar1;
  tm local_48;
  time_t local_1c [3];
  int local_10;
  
  time(local_1c);
  ptVar1 = localtime_r(local_1c,&local_48);
  local_10 = 0;
  while ((local_10 < *(int *)(this + 0x140) + -1 &&
         ((ptVar1->tm_hour < *(int *)(this + (local_10 + 0x18) * 4) ||
          (*(int *)(this + (local_10 + 0x19) * 4) <= ptVar1->tm_hour))))) {
    local_10 = local_10 + 1;
  }
  return local_10;
}
```
