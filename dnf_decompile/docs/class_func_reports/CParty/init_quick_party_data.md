# init_quick_party_data

`_ZN6CParty21init_quick_party_dataEv`

`CParty::init_quick_party_data()`

| 类 | 地址 |
|---|---|
| `CParty` | `0x0859b3e4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859b3e4  _ZN6CParty21init_quick_party_dataEv
#           CParty::init_quick_party_data()
# range [0x0859b3e4, 0x0859b403]
0859b3e4 +0x00:  push   %ebp
0859b3e5 +0x01:  mov    %esp,%ebp
0859b3e7 +0x03:  mov    0x8(%ebp),%eax
0859b3ea +0x06:  movl   $0xffffffff,0x1ae0(%eax)
0859b3f4 +0x10:  mov    0x8(%ebp),%eax
0859b3f7 +0x13:  movl   $0xb,0x1ae8(%eax)
0859b401 +0x1d:  pop    %ebp
0859b402 +0x1e:  ret
0859b403 +0x1f:  nop
```

## 反编译 C

```c
// CParty::init_quick_party_data @ 0x859b3e4

/* CParty::init_quick_party_data() */

void __thiscall CParty::init_quick_party_data(CParty *this)

{
  *(undefined4 *)(this + 0x1ae0) = 0xffffffff;
  *(undefined4 *)(this + 0x1ae8) = 0xb;
  return;
}
```
