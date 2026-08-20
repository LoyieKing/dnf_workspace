# _reset

`_ZN13BestClearTime6_resetEv`

`BestClearTime::_reset()`

| 类 | 地址 |
|---|---|
| `BestClearTime` | `0x080c8758` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080c8758  _ZN13BestClearTime6_resetEv
#           BestClearTime::_reset()
# range [0x080c8758, 0x080c8775]
080c8758 +0x00:  push   %ebp
080c8759 +0x01:  mov    %esp,%ebp
080c875b +0x03:  sub    $0x18,%esp
080c875e +0x06:  mov    0x8(%ebp),%eax
080c8761 +0x09:  add    $0x8,%eax
080c8764 +0x0c:  mov    %eax,(%esp)
080c8767 +0x0f:  call   080c8d56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x1ae>  ; global constructors keyed to BestClearTime::BestClearTime()+0x1ae
080c876c +0x14:  mov    0x8(%ebp),%eax
080c876f +0x17:  movb   $0x0,0x20(%eax)
080c8773 +0x1b:  leave
080c8774 +0x1c:  ret
080c8775 +0x1d:  nop
```

## 反编译 C

```c
// BestClearTime::_reset @ 0x80c8758

/* BestClearTime::_reset() */

void __thiscall BestClearTime::_reset(BestClearTime *this)

{
  std::
  map<int,SIG_BEST_CLEAR_TIME_DIFFICULTY,std::less<int>,std::allocator<std::pair<int_const,SIG_BEST_CLEAR_TIME_DIFFICULTY>>>
  ::clear((map<int,SIG_BEST_CLEAR_TIME_DIFFICULTY,std::less<int>,std::allocator<std::pair<int_const,SIG_BEST_CLEAR_TIME_DIFFICULTY>>>
           *)(this + 8));
  this[0x20] = (BestClearTime)0x0;
  return;
}
```
