# IncreaePowerWarPointInChannel

`_ZN13CPowerManager29IncreaePowerWarPointInChannelEci`

`CPowerManager::IncreaePowerWarPointInChannel(char, int)`

| 类 | 地址 |
|---|---|
| `CPowerManager` | `0x084801a2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084801a2  _ZN13CPowerManager29IncreaePowerWarPointInChannelEci
#           CPowerManager::IncreaePowerWarPointInChannel(char, int)
# range [0x084801a2, 0x084801d9]
084801a2 +0x00:  push   %ebp
084801a3 +0x01:  mov    %esp,%ebp
084801a5 +0x03:  sub    $0x4,%esp
084801a8 +0x06:  mov    0xc(%ebp),%eax
084801ab +0x09:  mov    %al,-0x4(%ebp)
084801ae +0x0c:  cmpb   $0x1,-0x4(%ebp)
084801b2 +0x10:  jne    084801c7 <+0x25>
084801b4 +0x12:  mov    0x8(%ebp),%eax
084801b7 +0x15:  mov    0xc(%eax),%eax
084801ba +0x18:  mov    %eax,%edx
084801bc +0x1a:  add    0x10(%ebp),%edx
084801bf +0x1d:  mov    0x8(%ebp),%eax
084801c2 +0x20:  mov    %edx,0xc(%eax)
084801c5 +0x23:  jmp    084801d8 <+0x36>
084801c7 +0x25:  mov    0x8(%ebp),%eax
084801ca +0x28:  mov    0x10(%eax),%eax
084801cd +0x2b:  mov    %eax,%edx
084801cf +0x2d:  add    0x10(%ebp),%edx
084801d2 +0x30:  mov    0x8(%ebp),%eax
084801d5 +0x33:  mov    %edx,0x10(%eax)
084801d8 +0x36:  leave
084801d9 +0x37:  ret
```

## 反编译 C

```c
// CPowerManager::IncreaePowerWarPointInChannel @ 0x84801a2

/* CPowerManager::IncreaePowerWarPointInChannel(char, int) */

void __thiscall
CPowerManager::IncreaePowerWarPointInChannel(CPowerManager *this,char param_1,int param_2)

{
  if (param_1 == '\x01') {
    *(int *)(this + 0xc) = *(int *)(this + 0xc) + param_2;
  }
  else {
    *(int *)(this + 0x10) = *(int *)(this + 0x10) + param_2;
  }
  return;
}
```
