# CTimeGate

`_ZN9CTimeGateC1Ev`

`CTimeGate::CTimeGate()`

| 类 | 地址 |
|---|---|
| `CTimeGate` | `0x08284512` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08284512  _ZN9CTimeGateC1Ev
#           CTimeGate::CTimeGate()
# range [0x08284512, 0x08284535]
08284512 +0x00:  push   %ebp
08284513 +0x01:  mov    %esp,%ebp
08284515 +0x03:  sub    $0x18,%esp
08284518 +0x06:  mov    0x8(%ebp),%eax
0828451b +0x09:  mov    %eax,(%esp)
0828451e +0x0c:  call   082845aa <_GLOBAL__I__ZN9CTimeGate15put_object_infoER11PacketGuard+0x26>  ; global constructors keyed to CTimeGate::put_object_info(PacketGuard&)+0x26
08284523 +0x11:  mov    0x8(%ebp),%eax
08284526 +0x14:  movl   $&_ZTV9CTimeGate+0x8,(%eax)
0828452c +0x1a:  mov    0x8(%ebp),%eax
0828452f +0x1d:  movb   $0x0,0x4(%eax)
08284533 +0x21:  leave
08284534 +0x22:  ret
08284535 +0x23:  nop
```

## 反编译 C

```c
// CTimeGate::CTimeGate @ 0x8284512

/* CTimeGate::CTimeGate() */

void __thiscall CTimeGate::CTimeGate(CTimeGate *this)

{
  village_object::IObject::IObject((IObject *)this);
  *(undefined ***)this = &PTR_include_08c0beb8;
  this[4] = (CTimeGate)0x0;
  return;
}
```
