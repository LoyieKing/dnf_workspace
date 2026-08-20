# init

`_ZN6Taiwan22SigLoadHeroMissionData4initEv`

`Taiwan::SigLoadHeroMissionData::init()`

| 类 | 地址 |
|---|---|
| `Taiwan::SigLoadHeroMissionData` | `0x08163a04` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08163a04  _ZN6Taiwan22SigLoadHeroMissionData4initEv
#           Taiwan::SigLoadHeroMissionData::init()
# range [0x08163a04, 0x08163a32]
08163a04 +0x00:  push   %ebp
08163a05 +0x01:  mov    %esp,%ebp
08163a07 +0x03:  sub    $0x18,%esp
08163a0a +0x06:  mov    0x8(%ebp),%eax
08163a0d +0x09:  movl   $0x0,(%eax)
08163a13 +0x0f:  mov    0x8(%ebp),%eax
08163a16 +0x12:  add    $0x4,%eax
08163a19 +0x15:  movl   $0x100,0x8(%esp)
08163a21 +0x1d:  movl   $0x0,0x4(%esp)
08163a29 +0x25:  mov    %eax,(%esp)
08163a2c +0x28:  call   0807dcc0 <_init+0x5b8>
08163a31 +0x2d:  leave
08163a32 +0x2e:  ret
```

## 反编译 C

```c
// Taiwan::SigLoadHeroMissionData::init @ 0x8163a04

/* Taiwan::SigLoadHeroMissionData::init() */

void __thiscall Taiwan::SigLoadHeroMissionData::init(SigLoadHeroMissionData *this)

{
  *(undefined4 *)this = 0;
  memset(this + 4,0,0x100);
  return;
}
```
