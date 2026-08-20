# CNoNeedGoldOnGuildCreateEvent

`_GLOBAL__I__ZN29CNoNeedGoldOnGuildCreateEventC2Ev`

`global constructors keyed to CNoNeedGoldOnGuildCreateEvent::CNoNeedGoldOnGuildCreateEvent()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CNoNeedGoldOnGuildCreateEvent` | `0x081b9d2b` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b9d2b  _GLOBAL__I__ZN29CNoNeedGoldOnGuildCreateEventC2Ev
#           global constructors keyed to CNoNeedGoldOnGuildCreateEvent::CNoNeedGoldOnGuildCreateEvent()
# range [0x081b9d2b, 0x081b9d47]
081b9d2b +0x00:  push   %ebp
081b9d2c +0x01:  mov    %esp,%ebp
081b9d2e +0x03:  sub    $0x18,%esp
081b9d31 +0x06:  movl   $0xffff,0x4(%esp)
081b9d39 +0x0e:  movl   $0x1,(%esp)
081b9d40 +0x15:  call   081b9ceb <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
081b9d45 +0x1a:  leave
081b9d46 +0x1b:  ret
081b9d47 +0x1c:  nop
```

## 反编译 C

```c
// <global>::global @ 0x81b9d2b

/* CNoNeedGoldOnGuildCreateEvent::CNoNeedGoldOnGuildCreateEvent() */

void CNoNeedGoldOnGuildCreateEvent::_GLOBAL__I_CNoNeedGoldOnGuildCreateEvent(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
