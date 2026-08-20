# OnReady

`_ZN18online_preliminary18COnlinePreliminary7OnReadyEP5CUserb`

`online_preliminary::COnlinePreliminary::OnReady(CUser*, bool)`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminary` | `0x08561ff2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08561ff2  _ZN18online_preliminary18COnlinePreliminary7OnReadyEP5CUserb
#           online_preliminary::COnlinePreliminary::OnReady(CUser*, bool)
# range [0x08561ff2, 0x08562021]
08561ff2 +0x00:  push   %ebp
08561ff3 +0x01:  mov    %esp,%ebp
08561ff5 +0x03:  sub    $0x4,%esp
08561ff8 +0x06:  mov    0x10(%ebp),%eax
08561ffb +0x09:  mov    %al,-0x4(%ebp)
08561ffe +0x0c:  movzbl -0x4(%ebp),%eax
08562002 +0x10:  xor    $0x1,%eax
08562005 +0x13:  test   %al,%al
08562007 +0x15:  je     0856201b <+0x29>
08562009 +0x17:  mov    0x8(%ebp),%eax
0856200c +0x1a:  mov    0x4(%eax),%eax
0856200f +0x1d:  cmp    $0x4,%eax
08562012 +0x20:  jne    0856201b <+0x29>
08562014 +0x22:  mov    $0x0,%eax
08562019 +0x27:  jmp    08562020 <+0x2e>
0856201b +0x29:  mov    $0x1,%eax
08562020 +0x2e:  leave
08562021 +0x2f:  ret
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminary::OnReady @ 0x8561ff2

/* online_preliminary::COnlinePreliminary::OnReady(CUser*, bool) */

undefined4 __thiscall
online_preliminary::COnlinePreliminary::OnReady
          (COnlinePreliminary *this,CUser *param_1,bool param_2)

{
  undefined4 uVar1;
  
  if ((param_2) || (*(int *)(this + 4) != 4)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
