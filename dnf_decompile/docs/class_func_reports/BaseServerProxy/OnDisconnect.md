# OnDisconnect

`_ZN15BaseServerProxy12OnDisconnectEv`

`BaseServerProxy::OnDisconnect()`

| 类 | 地址 |
|---|---|
| `BaseServerProxy` | `0x082fd82a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082fd82a  _ZN15BaseServerProxy12OnDisconnectEv
#           BaseServerProxy::OnDisconnect()
# range [0x082fd82a, 0x082fd82f]
082fd82a +0x00:  push   %ebp
082fd82b +0x01:  mov    %esp,%ebp
082fd82d +0x03:  pop    %ebp
082fd82e +0x04:  ret
082fd82f +0x05:  nop
```

## 反编译 C

```c
// BaseServerProxy::OnDisconnect @ 0x82fd82a

/* BaseServerProxy::OnDisconnect() */

void BaseServerProxy::OnDisconnect(void)

{
  return;
}
```
