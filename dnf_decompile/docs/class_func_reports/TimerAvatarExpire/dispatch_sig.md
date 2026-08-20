# dispatch_sig

`_ZN17TimerAvatarExpire12dispatch_sigEiij`

`TimerAvatarExpire::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerAvatarExpire` | `0x08632a78` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08632a78  _ZN17TimerAvatarExpire12dispatch_sigEiij
#           TimerAvatarExpire::dispatch_sig(int, int, unsigned int)
# range [0x08632a78, 0x08632a81]
08632a78 +0x00:  push   %ebp
08632a79 +0x01:  mov    %esp,%ebp
08632a7b +0x03:  mov    $0x1,%eax
08632a80 +0x08:  pop    %ebp
08632a81 +0x09:  ret
```

## 反编译 C

```c
// TimerAvatarExpire::dispatch_sig @ 0x8632a78

/* TimerAvatarExpire::dispatch_sig(int, int, unsigned int) */

undefined4 TimerAvatarExpire::dispatch_sig(int param_1,int param_2,uint param_3)

{
  return 1;
}
```
