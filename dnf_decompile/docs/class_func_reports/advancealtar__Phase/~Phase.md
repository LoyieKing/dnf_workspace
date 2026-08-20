# ~Phase

`_ZN12advancealtar5PhaseD1Ev`

`advancealtar::Phase::~Phase()`

| 类 | 地址 |
|---|---|
| `advancealtar::Phase` | `0x08899ce2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08899ce2  _ZN12advancealtar5PhaseD1Ev
#           advancealtar::Phase::~Phase()
# range [0x08899ce2, 0x08899cf7]
08899ce2 +0x00:  push   %ebp
08899ce3 +0x01:  mov    %esp,%ebp
08899ce5 +0x03:  sub    $0x18,%esp
08899ce8 +0x06:  mov    0x8(%ebp),%eax
08899ceb +0x09:  add    $0x8,%eax
08899cee +0x0c:  mov    %eax,(%esp)
08899cf1 +0x0f:  call   0889bc8a <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0x353>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0x353
08899cf6 +0x14:  leave
08899cf7 +0x15:  ret
```

## 反编译 C

```c
// advancealtar::Phase::~Phase @ 0x8899ce2

/* advancealtar::Phase::~Phase() */

void __thiscall advancealtar::Phase::~Phase(Phase *this)

{
  std::vector<advancealtar::_ActionAssign,std::allocator<advancealtar::_ActionAssign>>::~vector
            ((vector<advancealtar::_ActionAssign,std::allocator<advancealtar::_ActionAssign>> *)
             (this + 8));
  return;
}
```
