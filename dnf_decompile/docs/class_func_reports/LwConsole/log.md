# log

`_ZN9LwConsole3logEPKcS1_iS1_`

`LwConsole::log(char const*, char const*, int, char const*)`

| 类 | 地址 |
|---|---|
| `LwConsole` | `0x08ad3a2a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad3a2a  _ZN9LwConsole3logEPKcS1_iS1_
#           LwConsole::log(char const*, char const*, int, char const*)
# range [0x08ad3a2a, 0x08ad3a69]
08ad3a2a +0x00:  push   %ebp
08ad3a2b +0x01:  mov    %esp,%ebp
08ad3a2d +0x03:  sub    $0x18,%esp
08ad3a30 +0x06:  mov    0x8(%ebp),%eax
08ad3a33 +0x09:  movzbl 0x4(%eax),%eax
08ad3a37 +0x0d:  test   %al,%al
08ad3a39 +0x0f:  je     08ad3a5c <+0x32>
08ad3a3b +0x11:  mov    0x10(%ebp),%eax
08ad3a3e +0x14:  mov    %eax,0xc(%esp)
08ad3a42 +0x18:  mov    0x14(%ebp),%eax
08ad3a45 +0x1b:  mov    %eax,0x8(%esp)
08ad3a49 +0x1f:  mov    0xc(%ebp),%eax
08ad3a4c +0x22:  mov    %eax,0x4(%esp)
08ad3a50 +0x26:  movl   $"%s(%d) %s: ",(%esp)
08ad3a57 +0x2d:  call   0807db60 <_init+0x458>
08ad3a5c +0x32:  mov    0x18(%ebp),%eax
08ad3a5f +0x35:  mov    %eax,(%esp)
08ad3a62 +0x38:  call   0807e570 <_init+0xe68>
08ad3a67 +0x3d:  leave
08ad3a68 +0x3e:  ret
08ad3a69 +0x3f:  nop
```

## 反编译 C

```c
// LwConsole::log @ 0x8ad3a2a

/* LwConsole::log(char const*, char const*, int, char const*) */

void __thiscall
LwConsole::log(LwConsole *this,char *param_1,char *param_2,int param_3,char *param_4)

{
  if (this[4] != (LwConsole)0x0) {
    printf("%s(%d) %s: ",param_1,param_3,param_2);
  }
  puts(param_4);
  return;
}
```
