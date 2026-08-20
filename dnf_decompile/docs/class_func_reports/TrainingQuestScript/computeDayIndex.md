# computeDayIndex

`_ZN19TrainingQuestScript15computeDayIndexEv`

`TrainingQuestScript::computeDayIndex()`

| 类 | 地址 |
|---|---|
| `TrainingQuestScript` | `0x08aafc64` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08aafc64  _ZN19TrainingQuestScript15computeDayIndexEv
#           TrainingQuestScript::computeDayIndex()
# range [0x08aafc64, 0x08aafc8f]
08aafc64 +0x00:  push   %ebp
08aafc65 +0x01:  mov    %esp,%ebp
08aafc67 +0x03:  sub    $0x28,%esp
08aafc6a +0x06:  movl   $0x0,(%esp)
08aafc71 +0x0d:  call   0807d750 <_init+0x48>
08aafc76 +0x12:  mov    %eax,-0x10(%ebp)
08aafc79 +0x15:  lea    -0x10(%ebp),%eax
08aafc7c +0x18:  mov    %eax,(%esp)
08aafc7f +0x1b:  call   0807e330 <_init+0xc28>
08aafc84 +0x20:  mov    %eax,-0xc(%ebp)
08aafc87 +0x23:  mov    -0xc(%ebp),%eax
08aafc8a +0x26:  mov    0x1c(%eax),%eax
08aafc8d +0x29:  leave
08aafc8e +0x2a:  ret
08aafc8f +0x2b:  nop
```

## 反编译 C

```c
// TrainingQuestScript::computeDayIndex @ 0x8aafc64

/* TrainingQuestScript::computeDayIndex() */

int TrainingQuestScript::computeDayIndex(void)

{
  tm *ptVar1;
  time_t local_14 [4];
  
  local_14[0] = time((time_t *)0x0);
  ptVar1 = localtime(local_14);
  return ptVar1->tm_yday;
}
```
