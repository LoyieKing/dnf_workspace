# check_timer_key

`_ZN6CParty15check_timer_keyE13TIMER_MESSAGEi`

`CParty::check_timer_key(TIMER_MESSAGE, int)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x0859aea4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859aea4  _ZN6CParty15check_timer_keyE13TIMER_MESSAGEi
#           CParty::check_timer_key(TIMER_MESSAGE, int)
# range [0x0859aea4, 0x0859aec1]
0859aea4 +0x00:  push   %ebp
0859aea5 +0x01:  mov    %esp,%ebp
0859aea7 +0x03:  mov    0xc(%ebp),%eax
0859aeaa +0x06:  lea    -0xb(%eax),%edx
0859aead +0x09:  mov    0x8(%ebp),%eax
0859aeb0 +0x0c:  add    $0x50,%edx
0859aeb3 +0x0f:  mov    0x8(%eax,%edx,4),%edx
0859aeb7 +0x13:  mov    0x10(%ebp),%eax
0859aeba +0x16:  cmp    %eax,%edx
0859aebc +0x18:  sete   %al
0859aebf +0x1b:  pop    %ebp
0859aec0 +0x1c:  ret
0859aec1 +0x1d:  nop
```

## 反编译 C

```c
// CParty::check_timer_key @ 0x859aea4

/* CParty::check_timer_key(TIMER_MESSAGE, int) */

bool __thiscall CParty::check_timer_key(CParty *this,int param_2,int param_3)

{
  return *(int *)(this + (param_2 + 0x45) * 4 + 8) == param_3;
}
```
