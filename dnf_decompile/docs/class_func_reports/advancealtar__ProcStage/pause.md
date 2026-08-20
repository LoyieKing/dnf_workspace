# pause

`_ZN12advancealtar9ProcStage5pauseEb`

`advancealtar::ProcStage::pause(bool)`

| 类 | 地址 |
|---|---|
| `advancealtar::ProcStage` | `0x0812eaa6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812eaa6  _ZN12advancealtar9ProcStage5pauseEb
#           advancealtar::ProcStage::pause(bool)
# range [0x0812eaa6, 0x0812eb03]
0812eaa6 +0x00:  push   %ebp
0812eaa7 +0x01:  mov    %esp,%ebp
0812eaa9 +0x03:  sub    $0x4,%esp
0812eaac +0x06:  mov    0xc(%ebp),%eax
0812eaaf +0x09:  mov    %al,-0x4(%ebp)
0812eab2 +0x0c:  cmpb   $0x0,-0x4(%ebp)
0812eab6 +0x10:  je     0812ead6 <+0x30>
0812eab8 +0x12:  mov    0x8(%ebp),%eax
0812eabb +0x15:  mov    0x4(%eax),%eax
0812eabe +0x18:  cmp    $0x3,%eax
0812eac1 +0x1b:  je     0812eaca <+0x24>
0812eac3 +0x1d:  mov    $0x0,%eax
0812eac8 +0x22:  jmp    0812eb02 <+0x5c>
0812eaca +0x24:  mov    0x8(%ebp),%eax
0812eacd +0x27:  movl   $0x2,0x4(%eax)
0812ead4 +0x2e:  jmp    0812eafd <+0x57>
0812ead6 +0x30:  mov    0x8(%ebp),%eax
0812ead9 +0x33:  mov    0x4(%eax),%eax
0812eadc +0x36:  cmp    $0x2,%eax
0812eadf +0x39:  je     0812eaf3 <+0x4d>
0812eae1 +0x3b:  mov    0x8(%ebp),%eax
0812eae4 +0x3e:  mov    0x4(%eax),%eax
0812eae7 +0x41:  cmp    $0x1,%eax
0812eaea +0x44:  je     0812eaf3 <+0x4d>
0812eaec +0x46:  mov    $0x0,%eax
0812eaf1 +0x4b:  jmp    0812eb02 <+0x5c>
0812eaf3 +0x4d:  mov    0x8(%ebp),%eax
0812eaf6 +0x50:  movl   $0x3,0x4(%eax)
0812eafd +0x57:  mov    $0x1,%eax
0812eb02 +0x5c:  leave
0812eb03 +0x5d:  ret
```

## 反编译 C

```c
// advancealtar::ProcStage::pause @ 0x812eaa6

/* advancealtar::ProcStage::pause(bool) */

undefined4 __thiscall advancealtar::ProcStage::pause(ProcStage *this,bool param_1)

{
  if (param_1) {
    if (*(int *)(this + 4) != 3) {
      return 0;
    }
    *(undefined4 *)(this + 4) = 2;
  }
  else {
    if ((*(int *)(this + 4) != 2) && (*(int *)(this + 4) != 1)) {
      return 0;
    }
    *(undefined4 *)(this + 4) = 3;
  }
  return 1;
}
```
