# GetPowerWarPoint

`_ZN13CPowerManager16GetPowerWarPointE20ENUM_POWER_SIDE_TYPE`

`CPowerManager::GetPowerWarPoint(ENUM_POWER_SIDE_TYPE)`

| 类 | 地址 |
|---|---|
| `CPowerManager` | `0x08480e78` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08480e78  _ZN13CPowerManager16GetPowerWarPointE20ENUM_POWER_SIDE_TYPE
#           CPowerManager::GetPowerWarPoint(ENUM_POWER_SIDE_TYPE)
# range [0x08480e78, 0x08480e91]
08480e78 +0x00:  push   %ebp
08480e79 +0x01:  mov    %esp,%ebp
08480e7b +0x03:  cmpl   $0x1,0xc(%ebp)
08480e7f +0x07:  jne    08480e89 <+0x11>
08480e81 +0x09:  mov    0x8(%ebp),%eax
08480e84 +0x0c:  mov    0x4(%eax),%eax
08480e87 +0x0f:  jmp    08480e8f <+0x17>
08480e89 +0x11:  mov    0x8(%ebp),%eax
08480e8c +0x14:  mov    0x8(%eax),%eax
08480e8f +0x17:  pop    %ebp
08480e90 +0x18:  ret
08480e91 +0x19:  nop
```

## 反编译 C

```c
// CPowerManager::GetPowerWarPoint @ 0x8480e78

/* CPowerManager::GetPowerWarPoint(ENUM_POWER_SIDE_TYPE) */

undefined4 __thiscall CPowerManager::GetPowerWarPoint(CPowerManager *this,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 1) {
    uVar1 = *(undefined4 *)(this + 4);
  }
  else {
    uVar1 = *(undefined4 *)(this + 8);
  }
  return uVar1;
}
```
