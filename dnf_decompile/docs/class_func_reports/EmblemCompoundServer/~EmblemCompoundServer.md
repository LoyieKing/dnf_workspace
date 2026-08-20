# ~EmblemCompoundServer

`_ZN20EmblemCompoundServerD1Ev`

`EmblemCompoundServer::~EmblemCompoundServer()`

| 类 | 地址 |
|---|---|
| `EmblemCompoundServer` | `0x08191594` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08191594  _ZN20EmblemCompoundServerD1Ev
#           EmblemCompoundServer::~EmblemCompoundServer()
# range [0x08191594, 0x081915b3]
08191594 +0x00:  push   %ebp
08191595 +0x01:  mov    %esp,%ebp
08191597 +0x03:  sub    $0x18,%esp
0819159a +0x06:  mov    0x8(%ebp),%eax
0819159d +0x09:  movl   $&_ZTV20EmblemCompoundServer+0x8,(%eax)
081915a3 +0x0f:  mov    0x8(%ebp),%eax
081915a6 +0x12:  add    $0x4,%eax
081915a9 +0x15:  mov    %eax,(%esp)
081915ac +0x18:  call   088b14c2 <_ZN4ARAD6SCRIPT14EmblemCompoundD1Ev>  ; ARAD::SCRIPT::EmblemCompound::~EmblemCompound()
081915b1 +0x1d:  leave
081915b2 +0x1e:  ret
081915b3 +0x1f:  nop
```

## 反编译 C

```c
// EmblemCompoundServer::~EmblemCompoundServer @ 0x8191594

/* EmblemCompoundServer::~EmblemCompoundServer() */

void __thiscall EmblemCompoundServer::~EmblemCompoundServer(EmblemCompoundServer *this)

{
  *(undefined ***)this = &PTR_Load_08b9b948;
  ARAD::SCRIPT::EmblemCompound::~EmblemCompound((EmblemCompound *)(this + 4));
  return;
}
```
