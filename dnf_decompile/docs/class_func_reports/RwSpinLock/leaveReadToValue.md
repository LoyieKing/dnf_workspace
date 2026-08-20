# leaveReadToValue

`_ZN10RwSpinLock16leaveReadToValueEPVl`

`RwSpinLock::leaveReadToValue(long volatile*)`

| 类 | 地址 |
|---|---|
| `RwSpinLock` | `0x08ad367a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad367a  _ZN10RwSpinLock16leaveReadToValueEPVl
#           RwSpinLock::leaveReadToValue(long volatile*)
# range [0x08ad367a, 0x08ad36bd]
08ad367a +0x00:  push   %ebp
08ad367b +0x01:  mov    %esp,%ebp
08ad367d +0x03:  sub    $0x10,%esp
08ad3680 +0x06:  mov    0x8(%ebp),%eax
08ad3683 +0x09:  mov    (%eax),%eax
08ad3685 +0x0b:  mov    %eax,-0x4(%ebp)
08ad3688 +0x0e:  mov    -0x4(%ebp),%eax
08ad368b +0x11:  and    $0x3fffffff,%eax
08ad3690 +0x16:  lea    -0x1(%eax),%edx
08ad3693 +0x19:  mov    -0x4(%ebp),%eax
08ad3696 +0x1c:  and    $0x40000000,%eax
08ad369b +0x21:  or     %edx,%eax
08ad369d +0x23:  mov    %eax,%ecx
08ad369f +0x25:  mov    -0x4(%ebp),%eax
08ad36a2 +0x28:  mov    0x8(%ebp),%edx
08ad36a5 +0x2b:  lock cmpxchg %ecx,(%edx)
08ad36a9 +0x2f:  cmp    -0x4(%ebp),%eax
08ad36ac +0x32:  sete   %al
08ad36af +0x35:  test   %al,%al
08ad36b1 +0x37:  jne    08ad36ba <+0x40>
08ad36b3 +0x39:  call   08ad351c <_ZL14YieldProcessorv>  ; YieldProcessor()
08ad36b8 +0x3e:  jmp    08ad3680 <+0x6>
08ad36ba +0x40:  nop
08ad36bb +0x41:  leave
08ad36bc +0x42:  ret
08ad36bd +0x43:  nop
```

## 反编译 C

```c
// RwSpinLock::leaveReadToValue @ 0x8ad367a

void RwSpinLock::leaveReadToValue(long *state)

{
  uint uVar1;
  uint uVar2;
  
  while( true ) {
                    /* Unresolved local var: long ostate@[???] */
    uVar1 = *state;
    LOCK();
    uVar2 = *state;
    if (uVar1 == uVar2) {
      *state = uVar1 & 0x40000000 | (uVar1 & 0x3fffffff) - 1;
      uVar2 = uVar1;
    }
    UNLOCK();
    if (uVar2 == uVar1) break;
    YieldProcessor();
  }
  return;
}
```
