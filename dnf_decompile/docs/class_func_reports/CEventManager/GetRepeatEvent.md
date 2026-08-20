# GetRepeatEvent

`_ZN13CEventManager14GetRepeatEventEi`

`CEventManager::GetRepeatEvent(int)`

| 类 | 地址 |
|---|---|
| `CEventManager` | `0x08115998` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08115998  _ZN13CEventManager14GetRepeatEventEi
#           CEventManager::GetRepeatEvent(int)
# range [0x08115998, 0x081159b5]
08115998 +0x00:  push   %ebp
08115999 +0x01:  mov    %esp,%ebp
0811599b +0x03:  cmpl   $0xa5,0xc(%ebp)
081159a2 +0x0a:  jle    081159ab <+0x13>
081159a4 +0x0c:  mov    $0x0,%eax
081159a9 +0x11:  jmp    081159b4 <+0x1c>
081159ab +0x13:  mov    0xc(%ebp),%edx
081159ae +0x16:  mov    0x8(%ebp),%eax
081159b1 +0x19:  mov    (%eax,%edx,4),%eax
081159b4 +0x1c:  pop    %ebp
081159b5 +0x1d:  ret
```

## 反编译 C

```c
// CEventManager::GetRepeatEvent @ 0x8115998

/* CEventManager::GetRepeatEvent(int) */

undefined4 __thiscall CEventManager::GetRepeatEvent(CEventManager *this,int param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 0xa6) {
    uVar1 = *(undefined4 *)(this + param_1 * 4);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
