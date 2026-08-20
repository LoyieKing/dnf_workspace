# gen_timer_key

`_ZN6CParty13gen_timer_keyE13TIMER_MESSAGE`

`CParty::gen_timer_key(TIMER_MESSAGE)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x0859ae76` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859ae76  _ZN6CParty13gen_timer_keyE13TIMER_MESSAGE
#           CParty::gen_timer_key(TIMER_MESSAGE)
# range [0x0859ae76, 0x0859aea3]
0859ae76 +0x00:  push   %ebp
0859ae77 +0x01:  mov    %esp,%ebp
0859ae79 +0x03:  push   %ebx
0859ae7a +0x04:  mov    0xc(%ebp),%eax
0859ae7d +0x07:  sub    $0xb,%eax
0859ae80 +0x0a:  mov    0x8(%ebp),%edx
0859ae83 +0x0d:  lea    0x50(%eax),%ecx
0859ae86 +0x10:  mov    0x8(%edx,%ecx,4),%edx
0859ae8a +0x14:  lea    0x1(%edx),%ebx
0859ae8d +0x17:  mov    0x8(%ebp),%edx
0859ae90 +0x1a:  lea    0x50(%eax),%ecx
0859ae93 +0x1d:  mov    %ebx,0x8(%edx,%ecx,4)
0859ae97 +0x21:  mov    0x8(%ebp),%edx
0859ae9a +0x24:  add    $0x50,%eax
0859ae9d +0x27:  mov    0x8(%edx,%eax,4),%eax
0859aea1 +0x2b:  pop    %ebx
0859aea2 +0x2c:  pop    %ebp
0859aea3 +0x2d:  ret
```

## 反编译 C

```c
// CParty::gen_timer_key @ 0x859ae76

/* CParty::gen_timer_key(TIMER_MESSAGE) */

undefined4 __thiscall CParty::gen_timer_key(CParty *this,int param_2)

{
  *(int *)(this + (param_2 + 0x45) * 4 + 8) = *(int *)(this + (param_2 + 0x45) * 4 + 8) + 1;
  return *(undefined4 *)(this + (param_2 + 0x45) * 4 + 8);
}
```
