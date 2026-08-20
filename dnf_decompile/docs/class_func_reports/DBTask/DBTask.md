# DBTask

`_ZN6DBTaskC1Ev`

`DBTask::DBTask()`

| 类 | 地址 |
|---|---|
| `DBTask` | `0x083fbfc6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083fbfc6  _ZN6DBTaskC1Ev
#           DBTask::DBTask()
# range [0x083fbfc6, 0x083fbfd9]
083fbfc6 +0x00:  push   %ebp
083fbfc7 +0x01:  mov    %esp,%ebp
083fbfc9 +0x03:  sub    $0x18,%esp
083fbfcc +0x06:  mov    0x8(%ebp),%eax
083fbfcf +0x09:  mov    %eax,(%esp)
083fbfd2 +0x0c:  call   083fbfee <_ZN6DBTask16RegistDispatcherEv>  ; DBTask::RegistDispatcher()
083fbfd7 +0x11:  leave
083fbfd8 +0x12:  ret
083fbfd9 +0x13:  nop
```

## 反编译 C

```c
// DBTask::DBTask @ 0x83fbfc6

/* DBTask::DBTask() */

void __thiscall DBTask::DBTask(DBTask *this)

{
  RegistDispatcher(this);
  return;
}
```
