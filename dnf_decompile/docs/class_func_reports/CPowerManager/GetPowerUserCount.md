# GetPowerUserCount

`_ZN13CPowerManager17GetPowerUserCountEc`

`CPowerManager::GetPowerUserCount(char)`

| 类 | 地址 |
|---|---|
| `CPowerManager` | `0x084801da` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084801da  _ZN13CPowerManager17GetPowerUserCountEc
#           CPowerManager::GetPowerUserCount(char)
# range [0x084801da, 0x084801fb]
084801da +0x00:  push   %ebp
084801db +0x01:  mov    %esp,%ebp
084801dd +0x03:  sub    $0x4,%esp
084801e0 +0x06:  mov    0xc(%ebp),%eax
084801e3 +0x09:  mov    %al,-0x4(%ebp)
084801e6 +0x0c:  cmpb   $0x1,-0x4(%ebp)
084801ea +0x10:  jne    084801f4 <+0x1a>
084801ec +0x12:  mov    0x8(%ebp),%eax
084801ef +0x15:  mov    0x14(%eax),%eax
084801f2 +0x18:  jmp    084801fa <+0x20>
084801f4 +0x1a:  mov    0x8(%ebp),%eax
084801f7 +0x1d:  mov    0x18(%eax),%eax
084801fa +0x20:  leave
084801fb +0x21:  ret
```

## 反编译 C

```c
// CPowerManager::GetPowerUserCount @ 0x84801da

/* CPowerManager::GetPowerUserCount(char) */

undefined4 __thiscall CPowerManager::GetPowerUserCount(CPowerManager *this,char param_1)

{
  undefined4 uVar1;
  
  if (param_1 == '\x01') {
    uVar1 = *(undefined4 *)(this + 0x14);
  }
  else {
    uVar1 = *(undefined4 *)(this + 0x18);
  }
  return uVar1;
}
```
