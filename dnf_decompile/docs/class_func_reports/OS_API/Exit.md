# Exit

`_ZN6OS_API4ExitEi`

`OS_API::Exit(int)`

| 类 | 地址 |
|---|---|
| `OS_API` | `0x0858c53a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0858c53a  _ZN6OS_API4ExitEi
#           OS_API::Exit(int)
# range [0x0858c53a, 0x0858c54b]
0858c53a +0x00:  push   %ebp
0858c53b +0x01:  mov    %esp,%ebp
0858c53d +0x03:  sub    $0x18,%esp
0858c540 +0x06:  mov    0x8(%ebp),%eax
0858c543 +0x09:  mov    %eax,(%esp)
0858c546 +0x0c:  call   0807e1c0 <_init+0xab8>
0858c54b +0x11:  nop
```

## 反编译 C

```c
// OS_API::Exit @ 0x858c53a

/* OS_API::Exit(int) */

void OS_API::Exit(int param_1)

{
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}
```
