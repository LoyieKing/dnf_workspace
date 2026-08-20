# ActionDefine

`_ZN12advancealtar12ActionDefineC1Ev`

`advancealtar::ActionDefine::ActionDefine()`

| 类 | 地址 |
|---|---|
| `advancealtar::ActionDefine` | `0x08899c62` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08899c62  _ZN12advancealtar12ActionDefineC1Ev
#           advancealtar::ActionDefine::ActionDefine()
# range [0x08899c62, 0x08899c81]
08899c62 +0x00:  push   %ebp
08899c63 +0x01:  mov    %esp,%ebp
08899c65 +0x03:  sub    $0x18,%esp
08899c68 +0x06:  mov    0x8(%ebp),%eax
08899c6b +0x09:  movl   $0x0,(%eax)
08899c71 +0x0f:  mov    0x8(%ebp),%eax
08899c74 +0x12:  add    $0x4,%eax
08899c77 +0x15:  mov    %eax,(%esp)
08899c7a +0x18:  call   0889bbe8 <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0x2b1>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0x2b1
08899c7f +0x1d:  leave
08899c80 +0x1e:  ret
08899c81 +0x1f:  nop
```

## 反编译 C

```c
// advancealtar::ActionDefine::ActionDefine @ 0x8899c62

/* advancealtar::ActionDefine::ActionDefine() */

void __thiscall advancealtar::ActionDefine::ActionDefine(ActionDefine *this)

{
  *(undefined4 *)this = 0;
  std::vector<advancealtar::_Action,std::allocator<advancealtar::_Action>>::vector
            ((vector<advancealtar::_Action,std::allocator<advancealtar::_Action>> *)(this + 4));
  return;
}
```
