# AddEvent

`_ZN13CEventManager8AddEventEiP10CEventBase`

`CEventManager::AddEvent(int, CEventBase*)`

| 类 | 地址 |
|---|---|
| `CEventManager` | `0x08115982` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08115982  _ZN13CEventManager8AddEventEiP10CEventBase
#           CEventManager::AddEvent(int, CEventBase*)
# range [0x08115982, 0x08115997]
08115982 +0x00:  push   %ebp
08115983 +0x01:  mov    %esp,%ebp
08115985 +0x03:  mov    0xc(%ebp),%edx
08115988 +0x06:  mov    0x8(%ebp),%eax
0811598b +0x09:  mov    0x10(%ebp),%ecx
0811598e +0x0c:  mov    %ecx,(%eax,%edx,4)
08115991 +0x0f:  mov    $0x1,%eax
08115996 +0x14:  pop    %ebp
08115997 +0x15:  ret
```

## 反编译 C

```c
// CEventManager::AddEvent @ 0x8115982

/* CEventManager::AddEvent(int, CEventBase*) */

undefined4 __thiscall CEventManager::AddEvent(CEventManager *this,int param_1,CEventBase *param_2)

{
  *(CEventBase **)(this + param_1 * 4) = param_2;
  return 1;
}
```
