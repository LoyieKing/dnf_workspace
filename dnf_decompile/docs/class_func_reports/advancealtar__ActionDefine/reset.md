# reset

`_ZN12advancealtar12ActionDefine5resetEv`

`advancealtar::ActionDefine::reset()`

| 类 | 地址 |
|---|---|
| `advancealtar::ActionDefine` | `0x08899c98` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08899c98  _ZN12advancealtar12ActionDefine5resetEv
#           advancealtar::ActionDefine::reset()
# range [0x08899c98, 0x08899cb7]
08899c98 +0x00:  push   %ebp
08899c99 +0x01:  mov    %esp,%ebp
08899c9b +0x03:  sub    $0x18,%esp
08899c9e +0x06:  mov    0x8(%ebp),%eax
08899ca1 +0x09:  movl   $0x0,(%eax)
08899ca7 +0x0f:  mov    0x8(%ebp),%eax
08899caa +0x12:  add    $0x4,%eax
08899cad +0x15:  mov    %eax,(%esp)
08899cb0 +0x18:  call   0889bc5a <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0x323>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0x323
08899cb5 +0x1d:  leave
08899cb6 +0x1e:  ret
08899cb7 +0x1f:  nop
```

## 反编译 C

```c
// advancealtar::ActionDefine::reset @ 0x8899c98

/* advancealtar::ActionDefine::reset() */

void __thiscall advancealtar::ActionDefine::reset(ActionDefine *this)

{
  *(undefined4 *)this = 0;
  std::vector<advancealtar::_Action,std::allocator<advancealtar::_Action>>::clear
            ((vector<advancealtar::_Action,std::allocator<advancealtar::_Action>> *)(this + 4));
  return;
}
```
