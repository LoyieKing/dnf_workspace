# ~DB_InsertChannel

`_ZN16DB_InsertChannelD0Ev`

`DB_InsertChannel::~DB_InsertChannel()`

| 类 | 地址 |
|---|---|
| `DB_InsertChannel` | `0x08403698` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08403698  _ZN16DB_InsertChannelD0Ev
#           DB_InsertChannel::~DB_InsertChannel()
# range [0x08403698, 0x084036b5]
08403698 +0x00:  push   %ebp
08403699 +0x01:  mov    %esp,%ebp
0840369b +0x03:  sub    $0x18,%esp
0840369e +0x06:  mov    0x8(%ebp),%eax
084036a1 +0x09:  mov    %eax,(%esp)
084036a4 +0x0c:  call   08403668 <_ZN16DB_InsertChannelD1Ev>  ; DB_InsertChannel::~DB_InsertChannel()
084036a9 +0x11:  mov    0x8(%ebp),%eax
084036ac +0x14:  mov    %eax,(%esp)
084036af +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
084036b4 +0x1c:  leave
084036b5 +0x1d:  ret
```

## 反编译 C

```c
// DB_InsertChannel::~DB_InsertChannel @ 0x8403698

/* DB_InsertChannel::~DB_InsertChannel() */

void __thiscall DB_InsertChannel::~DB_InsertChannel(DB_InsertChannel *this)

{
  ~DB_InsertChannel(this);
  operator_delete(this);
  return;
}
```
