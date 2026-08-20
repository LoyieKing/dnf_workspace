# init

`_ZN6Taiwan22SigSaveHeroMissionData4initEv`

`Taiwan::SigSaveHeroMissionData::init()`

| 类 | 地址 |
|---|---|
| `Taiwan::SigSaveHeroMissionData` | `0x081639c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081639c0  _ZN6Taiwan22SigSaveHeroMissionData4initEv
#           Taiwan::SigSaveHeroMissionData::init()
# range [0x081639c0, 0x081639ef]
081639c0 +0x00:  push   %ebp
081639c1 +0x01:  mov    %esp,%ebp
081639c3 +0x03:  sub    $0x18,%esp
081639c6 +0x06:  mov    0x8(%ebp),%eax
081639c9 +0x09:  movl   $0x0,(%eax)
081639cf +0x0f:  mov    0x8(%ebp),%eax
081639d2 +0x12:  add    $0x4,%eax
081639d5 +0x15:  movl   $0x100,0x8(%esp)
081639dd +0x1d:  movl   $0x0,0x4(%esp)
081639e5 +0x25:  mov    %eax,(%esp)
081639e8 +0x28:  call   0807dcc0 <_init+0x5b8>
081639ed +0x2d:  leave
081639ee +0x2e:  ret
081639ef +0x2f:  nop
```

## 反编译 C

```c
// Taiwan::SigSaveHeroMissionData::init @ 0x81639c0

/* Taiwan::SigSaveHeroMissionData::init() */

void __thiscall Taiwan::SigSaveHeroMissionData::init(SigSaveHeroMissionData *this)

{
  *(undefined4 *)this = 0;
  memset(this + 4,0,0x100);
  return;
}
```
