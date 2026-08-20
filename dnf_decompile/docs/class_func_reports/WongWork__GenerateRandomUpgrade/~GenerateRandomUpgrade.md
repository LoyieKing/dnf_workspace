# ~GenerateRandomUpgrade

`_ZN8WongWork21GenerateRandomUpgradeD1Ev`

`WongWork::GenerateRandomUpgrade::~GenerateRandomUpgrade()`

| 类 | 地址 |
|---|---|
| `WongWork::GenerateRandomUpgrade` | `0x0853364e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0853364e  _ZN8WongWork21GenerateRandomUpgradeD1Ev
#           WongWork::GenerateRandomUpgrade::~GenerateRandomUpgrade()
# range [0x0853364e, 0x08533675]
0853364e +0x00:  push   %ebp
0853364f +0x01:  mov    %esp,%ebp
08533651 +0x03:  sub    $0x18,%esp
08533654 +0x06:  mov    0x8(%ebp),%eax
08533657 +0x09:  mov    (%eax),%eax
08533659 +0x0b:  test   %eax,%eax
0853365b +0x0d:  je     0853366a <+0x1c>
0853365d +0x0f:  mov    0x8(%ebp),%eax
08533660 +0x12:  mov    (%eax),%eax
08533662 +0x14:  mov    %eax,(%esp)
08533665 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0853366a +0x1c:  mov    0x8(%ebp),%eax
0853366d +0x1f:  movl   $0x0,(%eax)
08533673 +0x25:  leave
08533674 +0x26:  ret
08533675 +0x27:  nop
```

## 反编译 C

```c
// WongWork::GenerateRandomUpgrade::~GenerateRandomUpgrade @ 0x853364e

/* WongWork::GenerateRandomUpgrade::~GenerateRandomUpgrade() */

void __thiscall WongWork::GenerateRandomUpgrade::~GenerateRandomUpgrade(GenerateRandomUpgrade *this)

{
  if (*(int *)this != 0) {
    operator_delete(*(void **)this);
  }
  *(undefined4 *)this = 0;
  return;
}
```
