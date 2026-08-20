# IsPvpObserver

`_ZN8PvP_Room13IsPvpObserverEi`

`PvP_Room::IsPvpObserver(int)`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085da046` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085da046  _ZN8PvP_Room13IsPvpObserverEi
#           PvP_Room::IsPvpObserver(int)
# range [0x085da046, 0x085da085]
085da046 +0x00:  push   %ebp
085da047 +0x01:  mov    %esp,%ebp
085da049 +0x03:  cmpl   $0x7,0xc(%ebp)
085da04d +0x07:  jle    085da056 <+0x10>
085da04f +0x09:  mov    $0x0,%eax
085da054 +0x0e:  jmp    085da084 <+0x3e>
085da056 +0x10:  mov    0xc(%ebp),%edx
085da059 +0x13:  mov    0x8(%ebp),%eax
085da05c +0x16:  add    $0x14,%edx
085da05f +0x19:  mov    (%eax,%edx,4),%eax
085da062 +0x1c:  cmp    $0x3,%eax
085da065 +0x1f:  je     085da078 <+0x32>
085da067 +0x21:  mov    0xc(%ebp),%edx
085da06a +0x24:  mov    0x8(%ebp),%eax
085da06d +0x27:  add    $0x14,%edx
085da070 +0x2a:  mov    (%eax,%edx,4),%eax
085da073 +0x2d:  cmp    $0x4,%eax
085da076 +0x30:  jne    085da07f <+0x39>
085da078 +0x32:  mov    $0x1,%eax
085da07d +0x37:  jmp    085da084 <+0x3e>
085da07f +0x39:  mov    $0x0,%eax
085da084 +0x3e:  pop    %ebp
085da085 +0x3f:  ret
```

## 反编译 C

```c
// PvP_Room::IsPvpObserver @ 0x85da046

/* PvP_Room::IsPvpObserver(int) */

undefined4 __thiscall PvP_Room::IsPvpObserver(PvP_Room *this,int param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 8) {
    if ((*(int *)(this + (param_1 + 0x14) * 4) == 3) || (*(int *)(this + (param_1 + 0x14) * 4) == 4)
       ) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
