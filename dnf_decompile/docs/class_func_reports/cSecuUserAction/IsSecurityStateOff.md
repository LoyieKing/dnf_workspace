# IsSecurityStateOff

`_ZN15cSecuUserAction18IsSecurityStateOffEv`

`cSecuUserAction::IsSecurityStateOff()`

| 类 | 地址 |
|---|---|
| `cSecuUserAction` | `0x0827b402` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0827b402  _ZN15cSecuUserAction18IsSecurityStateOffEv
#           cSecuUserAction::IsSecurityStateOff()
# range [0x0827b402, 0x0827b41c]
0827b402 +0x00:  push   %ebp
0827b403 +0x01:  mov    %esp,%ebp
0827b405 +0x03:  mov    0x8(%ebp),%eax
0827b408 +0x06:  mov    (%eax),%eax
0827b40a +0x08:  cmp    $0x1,%eax
0827b40d +0x0b:  jne    0827b416 <+0x14>
0827b40f +0x0d:  mov    $0x1,%eax
0827b414 +0x12:  jmp    0827b41b <+0x19>
0827b416 +0x14:  mov    $0x0,%eax
0827b41b +0x19:  pop    %ebp
0827b41c +0x1a:  ret
```

## 反编译 C

```c
// cSecuUserAction::IsSecurityStateOff @ 0x827b402

/* cSecuUserAction::IsSecurityStateOff() */

bool __thiscall cSecuUserAction::IsSecurityStateOff(cSecuUserAction *this)

{
  return *(int *)this == 1;
}
```
