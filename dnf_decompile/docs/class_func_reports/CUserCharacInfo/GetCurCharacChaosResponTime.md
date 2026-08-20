# GetCurCharacChaosResponTime

`_ZN15CUserCharacInfo27GetCurCharacChaosResponTimeEv`

`CUserCharacInfo::GetCurCharacChaosResponTime()`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x0868eed2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868eed2  _ZN15CUserCharacInfo27GetCurCharacChaosResponTimeEv
#           CUserCharacInfo::GetCurCharacChaosResponTime()
# range [0x0868eed2, 0x0868eef3]
0868eed2 +0x00:  push   %ebp
0868eed3 +0x01:  mov    %esp,%ebp
0868eed5 +0x03:  mov    0x8(%ebp),%eax
0868eed8 +0x06:  mov    0x10(%eax),%eax
0868eedb +0x09:  test   %eax,%eax
0868eedd +0x0b:  je     0868eeed <+0x1b>
0868eedf +0x0d:  mov    0x8(%ebp),%eax
0868eee2 +0x10:  mov    0x10(%eax),%eax
0868eee5 +0x13:  mov    0x12ad(%eax),%eax
0868eeeb +0x19:  jmp    0868eef2 <+0x20>
0868eeed +0x1b:  mov    $0x0,%eax
0868eef2 +0x20:  pop    %ebp
0868eef3 +0x21:  ret
```

## 反编译 C

```c
// CUserCharacInfo::GetCurCharacChaosResponTime @ 0x868eed2

/* CUserCharacInfo::GetCurCharacChaosResponTime() */

undefined4 __thiscall CUserCharacInfo::GetCurCharacChaosResponTime(CUserCharacInfo *this)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 0x10) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(this + 0x10) + 0x12ad);
  }
  return uVar1;
}
```
