# dispatch_sig

`_ZN15Inter_Terminate12dispatch_sigEP5CUserPci`

`Inter_Terminate::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_Terminate` | `0x084c7dee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084c7dee  _ZN15Inter_Terminate12dispatch_sigEP5CUserPci
#           Inter_Terminate::dispatch_sig(CUser*, char*, int)
# range [0x084c7dee, 0x084c7e07]
084c7dee +0x00:  push   %ebp
084c7def +0x01:  mov    %esp,%ebp
084c7df1 +0x03:  sub    $0x18,%esp
084c7df4 +0x06:  movl   $"Game Server is Terminated",(%esp)
084c7dfb +0x0d:  call   0807e570 <_init+0xe68>
084c7e00 +0x12:  movl   $0x0,(%esp)
084c7e07 +0x19:  call   0807e1c0 <_init+0xab8>
```

## 反编译 C

```c
// Inter_Terminate::dispatch_sig @ 0x84c7dee

/* Inter_Terminate::dispatch_sig(CUser*, char*, int) */

void Inter_Terminate::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  puts("Game Server is Terminated");
                    /* WARNING: Subroutine does not return */
  exit(0);
}
```
