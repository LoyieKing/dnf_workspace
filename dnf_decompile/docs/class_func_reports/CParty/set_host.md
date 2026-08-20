# set_host

`_ZN6CParty8set_hostEv`

`CParty::set_host()`

| 类 | 地址 |
|---|---|
| `CParty` | `0x0859cdbc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859cdbc  _ZN6CParty8set_hostEv
#           CParty::set_host()
# range [0x0859cdbc, 0x0859cdd1]
0859cdbc +0x00:  push   %ebp
0859cdbd +0x01:  mov    %esp,%ebp
0859cdbf +0x03:  mov    0x8(%ebp),%eax
0859cdc2 +0x06:  mov    0x74(%eax),%edx
0859cdc5 +0x09:  mov    0x8(%ebp),%eax
0859cdc8 +0x0c:  mov    %edx,0x70(%eax)
0859cdcb +0x0f:  mov    $0x1,%eax
0859cdd0 +0x14:  pop    %ebp
0859cdd1 +0x15:  ret
```

## 反编译 C

```c
// CParty::set_host @ 0x859cdbc

/* CParty::set_host() */

undefined4 __thiscall CParty::set_host(CParty *this)

{
  *(undefined4 *)(this + 0x70) = *(undefined4 *)(this + 0x74);
  return 1;
}
```
