# ~ActionDefine

`_ZN12advancealtar12ActionDefineD1Ev`

`advancealtar::ActionDefine::~ActionDefine()`

| 类 | 地址 |
|---|---|
| `advancealtar::ActionDefine` | `0x08899c82` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08899c82  _ZN12advancealtar12ActionDefineD1Ev
#           advancealtar::ActionDefine::~ActionDefine()
# range [0x08899c82, 0x08899c97]
08899c82 +0x00:  push   %ebp
08899c83 +0x01:  mov    %esp,%ebp
08899c85 +0x03:  sub    $0x18,%esp
08899c88 +0x06:  mov    0x8(%ebp),%eax
08899c8b +0x09:  add    $0x4,%eax
08899c8e +0x0c:  mov    %eax,(%esp)
08899c91 +0x0f:  call   0889bbfc <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0x2c5>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0x2c5
08899c96 +0x14:  leave
08899c97 +0x15:  ret
```

## 反编译 C

```c
// advancealtar::ActionDefine::~ActionDefine @ 0x8899c82

/* advancealtar::ActionDefine::~ActionDefine() */

void __thiscall advancealtar::ActionDefine::~ActionDefine(ActionDefine *this)

{
  std::vector<advancealtar::_Action,std::allocator<advancealtar::_Action>>::~vector
            ((vector<advancealtar::_Action,std::allocator<advancealtar::_Action>> *)(this + 4));
  return;
}
```
