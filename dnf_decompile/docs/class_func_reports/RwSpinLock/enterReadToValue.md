# enterReadToValue

`_ZN10RwSpinLock16enterReadToValueEPVl`

`RwSpinLock::enterReadToValue(long volatile*)`

| 类 | 地址 |
|---|---|
| `RwSpinLock` | `0x08ad363a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad363a  _ZN10RwSpinLock16enterReadToValueEPVl
#           RwSpinLock::enterReadToValue(long volatile*)
# range [0x08ad363a, 0x08ad3679]
08ad363a +0x00:  push   %ebp
08ad363b +0x01:  mov    %esp,%ebp
08ad363d +0x03:  sub    $0x10,%esp
08ad3640 +0x06:  mov    0x8(%ebp),%eax
08ad3643 +0x09:  mov    (%eax),%eax
08ad3645 +0x0b:  mov    %eax,-0x4(%ebp)
08ad3648 +0x0e:  mov    -0x4(%ebp),%eax
08ad364b +0x11:  and    $0xc0000000,%eax
08ad3650 +0x16:  test   %eax,%eax
08ad3652 +0x18:  jne    08ad3670 <+0x36>
08ad3654 +0x1a:  mov    -0x4(%ebp),%eax
08ad3657 +0x1d:  add    $0x1,%eax
08ad365a +0x20:  mov    %eax,%ecx
08ad365c +0x22:  mov    -0x4(%ebp),%eax
08ad365f +0x25:  mov    0x8(%ebp),%edx
08ad3662 +0x28:  lock cmpxchg %ecx,(%edx)
08ad3666 +0x2c:  cmp    -0x4(%ebp),%eax
08ad3669 +0x2f:  sete   %al
08ad366c +0x32:  test   %al,%al
08ad366e +0x34:  jne    08ad3677 <+0x3d>
08ad3670 +0x36:  call   08ad351c <_ZL14YieldProcessorv>  ; YieldProcessor()
08ad3675 +0x3b:  jmp    08ad3640 <+0x6>
08ad3677 +0x3d:  nop
08ad3678 +0x3e:  leave
08ad3679 +0x3f:  ret
```

## 反编译 C

```c
// RwSpinLock::enterReadToValue @ 0x8ad363a

void RwSpinLock::enterReadToValue(long *state)

{
  uint uVar1;
  uint uVar2;
  
  do {
                    /* Unresolved local var: long ostate@[???] */
    uVar1 = *state;
    if ((uVar1 & 0xc0000000) == 0) {
      LOCK();
      uVar2 = *state;
      if (uVar1 == uVar2) {
        *state = uVar1 + 1;
        uVar2 = uVar1;
      }
      UNLOCK();
      if (uVar2 == uVar1) {
        return;
      }
    }
    YieldProcessor();
  } while( true );
}
```
