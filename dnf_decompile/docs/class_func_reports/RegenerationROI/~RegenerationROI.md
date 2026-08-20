# ~RegenerationROI

`_ZN15RegenerationROID1Ev`

`RegenerationROI::~RegenerationROI()`

| 类 | 地址 |
|---|---|
| `RegenerationROI` | `0x085f8506` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085f8506  _ZN15RegenerationROID1Ev
#           RegenerationROI::~RegenerationROI()
# range [0x085f8506, 0x085f853b]
085f8506 +0x00:  push   %ebp
085f8507 +0x01:  mov    %esp,%ebp
085f8509 +0x03:  sub    $0x18,%esp
085f850c +0x06:  mov    0x8(%ebp),%eax
085f850f +0x09:  mov    (%eax),%eax
085f8511 +0x0b:  test   %eax,%eax
085f8513 +0x0d:  je     085f8522 <+0x1c>
085f8515 +0x0f:  mov    0x8(%ebp),%eax
085f8518 +0x12:  mov    (%eax),%eax
085f851a +0x14:  mov    %eax,(%esp)
085f851d +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
085f8522 +0x1c:  mov    0x8(%ebp),%eax
085f8525 +0x1f:  movl   $0x0,(%eax)
085f852b +0x25:  mov    0x8(%ebp),%eax
085f852e +0x28:  add    $0x4,%eax
085f8531 +0x2b:  mov    %eax,(%esp)
085f8534 +0x2e:  call   085f97e2 <_GLOBAL__I__Z16_GetRandomOptionv+0x114>  ; global constructors keyed to _GetRandomOption()+0x114
085f8539 +0x33:  leave
085f853a +0x34:  ret
085f853b +0x35:  nop
```

## 反编译 C

```c
// RegenerationROI::~RegenerationROI @ 0x85f8506

/* RegenerationROI::~RegenerationROI() */

void __thiscall RegenerationROI::~RegenerationROI(RegenerationROI *this)

{
  if (*(int *)this != 0) {
    operator_delete(*(void **)this);
  }
  *(undefined4 *)this = 0;
  RandomOptionItem_Regenerator::~RandomOptionItem_Regenerator
            ((RandomOptionItem_Regenerator *)(this + 4));
  return;
}
```
