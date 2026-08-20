# SpeedCtrlPassiveObjInfo

`_ZN23SpeedCtrlPassiveObjInfoC1Ev`

`SpeedCtrlPassiveObjInfo::SpeedCtrlPassiveObjInfo()`

| 类 | 地址 |
|---|---|
| `SpeedCtrlPassiveObjInfo` | `0x08a3ad5a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a3ad5a  _ZN23SpeedCtrlPassiveObjInfoC1Ev
#           SpeedCtrlPassiveObjInfo::SpeedCtrlPassiveObjInfo()
# range [0x08a3ad5a, 0x08a3ad6f]
08a3ad5a +0x00:  push   %ebp
08a3ad5b +0x01:  mov    %esp,%ebp
08a3ad5d +0x03:  mov    0x8(%ebp),%eax
08a3ad60 +0x06:  movl   $0xffffffff,(%eax)
08a3ad66 +0x0c:  mov    0x8(%ebp),%eax
08a3ad69 +0x0f:  movb   $0x0,0x4(%eax)
08a3ad6d +0x13:  pop    %ebp
08a3ad6e +0x14:  ret
08a3ad6f +0x15:  nop
```

## 反编译 C

```c
// SpeedCtrlPassiveObjInfo::SpeedCtrlPassiveObjInfo @ 0x8a3ad5a

/* SpeedCtrlPassiveObjInfo::SpeedCtrlPassiveObjInfo() */

void __thiscall SpeedCtrlPassiveObjInfo::SpeedCtrlPassiveObjInfo(SpeedCtrlPassiveObjInfo *this)

{
  *(undefined4 *)this = 0xffffffff;
  this[4] = (SpeedCtrlPassiveObjInfo)0x0;
  return;
}
```
