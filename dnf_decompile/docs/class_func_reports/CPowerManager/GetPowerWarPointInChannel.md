# GetPowerWarPointInChannel

`_ZN13CPowerManager25GetPowerWarPointInChannelEc`

`CPowerManager::GetPowerWarPointInChannel(char)`

| 类 | 地址 |
|---|---|
| `CPowerManager` | `0x084801fc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084801fc  _ZN13CPowerManager25GetPowerWarPointInChannelEc
#           CPowerManager::GetPowerWarPointInChannel(char)
# range [0x084801fc, 0x0848021d]
084801fc +0x00:  push   %ebp
084801fd +0x01:  mov    %esp,%ebp
084801ff +0x03:  sub    $0x4,%esp
08480202 +0x06:  mov    0xc(%ebp),%eax
08480205 +0x09:  mov    %al,-0x4(%ebp)
08480208 +0x0c:  cmpb   $0x1,-0x4(%ebp)
0848020c +0x10:  jne    08480216 <+0x1a>
0848020e +0x12:  mov    0x8(%ebp),%eax
08480211 +0x15:  mov    0xc(%eax),%eax
08480214 +0x18:  jmp    0848021c <+0x20>
08480216 +0x1a:  mov    0x8(%ebp),%eax
08480219 +0x1d:  mov    0x10(%eax),%eax
0848021c +0x20:  leave
0848021d +0x21:  ret
```

## 反编译 C

```c
// CPowerManager::GetPowerWarPointInChannel @ 0x84801fc

/* CPowerManager::GetPowerWarPointInChannel(char) */

undefined4 __thiscall CPowerManager::GetPowerWarPointInChannel(CPowerManager *this,char param_1)

{
  undefined4 uVar1;
  
  if (param_1 == '\x01') {
    uVar1 = *(undefined4 *)(this + 0xc);
  }
  else {
    uVar1 = *(undefined4 *)(this + 0x10);
  }
  return uVar1;
}
```
