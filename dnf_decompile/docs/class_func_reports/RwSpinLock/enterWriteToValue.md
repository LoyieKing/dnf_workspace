# enterWriteToValue

`_ZN10RwSpinLock17enterWriteToValueEPVl`

`RwSpinLock::enterWriteToValue(long volatile*)`

| 类 | 地址 |
|---|---|
| `RwSpinLock` | `0x08ad36be` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad36be  _ZN10RwSpinLock17enterWriteToValueEPVl
#           RwSpinLock::enterWriteToValue(long volatile*)
# range [0x08ad36be, 0x08ad3729]
08ad36be +0x00:  push   %ebp
08ad36bf +0x01:  mov    %esp,%ebp
08ad36c1 +0x03:  sub    $0x10,%esp
08ad36c4 +0x06:  mov    0x8(%ebp),%eax
08ad36c7 +0x09:  mov    (%eax),%eax
08ad36c9 +0x0b:  mov    %eax,-0x4(%ebp)
08ad36cc +0x0e:  cmpl   $0x0,-0x4(%ebp)
08ad36d0 +0x12:  je     08ad36db <+0x1d>
08ad36d2 +0x14:  cmpl   $0x40000000,-0x4(%ebp)
08ad36d9 +0x1b:  jne    08ad36f6 <+0x38>
08ad36db +0x1d:  mov    -0x4(%ebp),%eax
08ad36de +0x20:  mov    0x8(%ebp),%edx
08ad36e1 +0x23:  mov    $0x80000000,%ecx
08ad36e6 +0x28:  lock cmpxchg %ecx,(%edx)
08ad36ea +0x2c:  cmp    -0x4(%ebp),%eax
08ad36ed +0x2f:  jne    08ad36f6 <+0x38>
08ad36ef +0x31:  mov    $0x1,%eax
08ad36f4 +0x36:  jmp    08ad36fb <+0x3d>
08ad36f6 +0x38:  mov    $0x0,%eax
08ad36fb +0x3d:  test   %al,%al
08ad36fd +0x3f:  jne    08ad3726 <+0x68>
08ad36ff +0x41:  mov    -0x4(%ebp),%eax
08ad3702 +0x44:  and    $0x40000000,%eax
08ad3707 +0x49:  test   %eax,%eax
08ad3709 +0x4b:  jne    08ad371f <+0x61>
08ad370b +0x4d:  mov    -0x4(%ebp),%eax
08ad370e +0x50:  or     $0x40000000,%eax
08ad3713 +0x55:  mov    %eax,%ecx
08ad3715 +0x57:  mov    -0x4(%ebp),%eax
08ad3718 +0x5a:  mov    0x8(%ebp),%edx
08ad371b +0x5d:  lock cmpxchg %ecx,(%edx)
08ad371f +0x61:  call   08ad351c <_ZL14YieldProcessorv>  ; YieldProcessor()
08ad3724 +0x66:  jmp    08ad36c4 <+0x6>
08ad3726 +0x68:  nop
08ad3727 +0x69:  leave
08ad3728 +0x6a:  ret
08ad3729 +0x6b:  nop
```

## 反编译 C

```c
// RwSpinLock::enterWriteToValue @ 0x8ad36be

void RwSpinLock::enterWriteToValue(long *state)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  
  do {
                    /* Unresolved local var: long ostate@[???] */
    uVar1 = *state;
    if ((uVar1 == 0) || (uVar1 == 0x40000000)) {
      LOCK();
      uVar3 = *state;
      if (uVar1 == uVar3) {
        *state = -0x80000000;
        uVar3 = uVar1;
      }
      UNLOCK();
      if (uVar3 != uVar1) goto LAB_08ad36f6;
      bVar2 = true;
    }
    else {
LAB_08ad36f6:
      bVar2 = false;
    }
    if (bVar2) {
      return;
    }
    if ((uVar1 & 0x40000000) == 0) {
      LOCK();
      if (uVar1 == *state) {
        *state = uVar1 | 0x40000000;
      }
      UNLOCK();
    }
    YieldProcessor();
  } while( true );
}
```
