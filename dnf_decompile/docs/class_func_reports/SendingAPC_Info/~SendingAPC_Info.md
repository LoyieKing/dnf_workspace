# ~SendingAPC_Info

`_ZN15SendingAPC_InfoD1Ev`

`SendingAPC_Info::~SendingAPC_Info()`

| 类 | 地址 |
|---|---|
| `SendingAPC_Info` | `0x085fe8ca` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085fe8ca  _ZN15SendingAPC_InfoD1Ev
#           SendingAPC_Info::~SendingAPC_Info()
# range [0x085fe8ca, 0x085fe8df]
085fe8ca +0x00:  push   %ebp
085fe8cb +0x01:  mov    %esp,%ebp
085fe8cd +0x03:  sub    $0x18,%esp
085fe8d0 +0x06:  mov    0x8(%ebp),%eax
085fe8d3 +0x09:  add    $0x4,%eax
085fe8d6 +0x0c:  mov    %eax,(%esp)
085fe8d9 +0x0f:  call   0858c8dc <_ZN9PacketBufD1Ev>  ; PacketBuf::~PacketBuf()
085fe8de +0x14:  leave
085fe8df +0x15:  ret
```

## 反编译 C

```c
// SendingAPC_Info::~SendingAPC_Info @ 0x85fe8ca

/* SendingAPC_Info::~SendingAPC_Info() */

void __thiscall SendingAPC_Info::~SendingAPC_Info(SendingAPC_Info *this)

{
  PacketBuf::~PacketBuf((PacketBuf *)(this + 4));
  return;
}
```
