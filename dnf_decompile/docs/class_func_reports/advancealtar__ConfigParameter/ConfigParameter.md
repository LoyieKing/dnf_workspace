# ConfigParameter

`_ZN12advancealtar15ConfigParameterC1Ev`

`advancealtar::ConfigParameter::ConfigParameter()`

| 类 | 地址 |
|---|---|
| `advancealtar::ConfigParameter` | `0x0889b662` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0889b662  _ZN12advancealtar15ConfigParameterC1Ev
#           advancealtar::ConfigParameter::ConfigParameter()
# range [0x0889b662, 0x0889b6c5]
0889b662 +0x00:  push   %ebp
0889b663 +0x01:  mov    %esp,%ebp
0889b665 +0x03:  sub    $0x18,%esp
0889b668 +0x06:  mov    0x8(%ebp),%eax
0889b66b +0x09:  movl   $0x0,(%eax)
0889b671 +0x0f:  mov    0x8(%ebp),%eax
0889b674 +0x12:  mov    $0x0,%edx
0889b679 +0x17:  mov    %edx,0x4(%eax)
0889b67c +0x1a:  mov    0x8(%ebp),%eax
0889b67f +0x1d:  lea    0x8(%eax),%edx
0889b682 +0x20:  mov    0x8(%ebp),%eax
0889b685 +0x23:  mov    %edx,0x18(%eax)
0889b688 +0x26:  mov    0x8(%ebp),%eax
0889b68b +0x29:  add    $0x8,%eax
0889b68e +0x2c:  movl   $0x10,0x8(%esp)
0889b696 +0x34:  movl   $0x0,0x4(%esp)
0889b69e +0x3c:  mov    %eax,(%esp)
0889b6a1 +0x3f:  call   0807dcc0 <_init+0x5b8>
0889b6a6 +0x44:  mov    0x8(%ebp),%eax
0889b6a9 +0x47:  add    $0x1c,%eax
0889b6ac +0x4a:  movl   $0x10,0x8(%esp)
0889b6b4 +0x52:  movl   $0x0,0x4(%esp)
0889b6bc +0x5a:  mov    %eax,(%esp)
0889b6bf +0x5d:  call   0807dcc0 <_init+0x5b8>
0889b6c4 +0x62:  leave
0889b6c5 +0x63:  ret
```

## 反编译 C

```c
// advancealtar::ConfigParameter::ConfigParameter @ 0x889b662

/* advancealtar::ConfigParameter::ConfigParameter() */

void __thiscall advancealtar::ConfigParameter::ConfigParameter(ConfigParameter *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(ConfigParameter **)(this + 0x18) = this + 8;
  memset(this + 8,0,0x10);
  memset(this + 0x1c,0,0x10);
  return;
}
```
