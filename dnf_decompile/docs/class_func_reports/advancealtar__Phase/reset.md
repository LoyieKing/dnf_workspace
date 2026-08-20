# reset

`_ZN12advancealtar5Phase5resetEv`

`advancealtar::Phase::reset()`

| 类 | 地址 |
|---|---|
| `advancealtar::Phase` | `0x08899cf8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08899cf8  _ZN12advancealtar5Phase5resetEv
#           advancealtar::Phase::reset()
# range [0x08899cf8, 0x08899d17]
08899cf8 +0x00:  push   %ebp
08899cf9 +0x01:  mov    %esp,%ebp
08899cfb +0x03:  sub    $0x18,%esp
08899cfe +0x06:  mov    0x8(%ebp),%eax
08899d01 +0x09:  movl   $0x0,(%eax)
08899d07 +0x0f:  mov    0x8(%ebp),%eax
08899d0a +0x12:  add    $0x8,%eax
08899d0d +0x15:  mov    %eax,(%esp)
08899d10 +0x18:  call   0889bce8 <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0x3b1>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0x3b1
08899d15 +0x1d:  leave
08899d16 +0x1e:  ret
08899d17 +0x1f:  nop
```

## 反编译 C

```c
// advancealtar::Phase::reset @ 0x8899cf8

/* advancealtar::Phase::reset() */

void __thiscall advancealtar::Phase::reset(Phase *this)

{
  *(undefined4 *)this = 0;
  std::vector<advancealtar::_ActionAssign,std::allocator<advancealtar::_ActionAssign>>::clear
            ((vector<advancealtar::_ActionAssign,std::allocator<advancealtar::_ActionAssign>> *)
             (this + 8));
  return;
}
```
