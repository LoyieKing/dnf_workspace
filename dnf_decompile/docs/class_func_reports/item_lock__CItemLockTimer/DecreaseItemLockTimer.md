# DecreaseItemLockTimer

`_ZN9item_lock14CItemLockTimer21DecreaseItemLockTimerEv`

`item_lock::CItemLockTimer::DecreaseItemLockTimer()`

| 类 | 地址 |
|---|---|
| `item_lock::CItemLockTimer` | `0x085414f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085414f0  _ZN9item_lock14CItemLockTimer21DecreaseItemLockTimerEv
#           item_lock::CItemLockTimer::DecreaseItemLockTimer()
# range [0x085414f0, 0x08541501]
085414f0 +0x00:  push   %ebp
085414f1 +0x01:  mov    %esp,%ebp
085414f3 +0x03:  mov    0x8(%ebp),%eax
085414f6 +0x06:  mov    (%eax),%eax
085414f8 +0x08:  lea    -0x1(%eax),%edx
085414fb +0x0b:  mov    0x8(%ebp),%eax
085414fe +0x0e:  mov    %edx,(%eax)
08541500 +0x10:  pop    %ebp
08541501 +0x11:  ret
```

## 反编译 C

```c
// item_lock::CItemLockTimer::DecreaseItemLockTimer @ 0x85414f0

/* item_lock::CItemLockTimer::DecreaseItemLockTimer() */

void __thiscall item_lock::CItemLockTimer::DecreaseItemLockTimer(CItemLockTimer *this)

{
  *(int *)this = *(int *)this + -1;
  return;
}
```
