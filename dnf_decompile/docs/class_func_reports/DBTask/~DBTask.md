# ~DBTask

`_ZN6DBTaskD1Ev`

`DBTask::~DBTask()`

| 类 | 地址 |
|---|---|
| `DBTask` | `0x083fbfda` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083fbfda  _ZN6DBTaskD1Ev
#           DBTask::~DBTask()
# range [0x083fbfda, 0x083fbfed]
083fbfda +0x00:  push   %ebp
083fbfdb +0x01:  mov    %esp,%ebp
083fbfdd +0x03:  sub    $0x18,%esp
083fbfe0 +0x06:  mov    0x8(%ebp),%eax
083fbfe3 +0x09:  mov    %eax,(%esp)
083fbfe6 +0x0c:  call   083ff156 <_ZN6DBTask18UnregistDispatcherEv>  ; DBTask::UnregistDispatcher()
083fbfeb +0x11:  leave
083fbfec +0x12:  ret
083fbfed +0x13:  nop
```

## 反编译 C

```c
// DBTask::~DBTask @ 0x83fbfda

/* DBTask::~DBTask() */

void __thiscall DBTask::~DBTask(DBTask *this)

{
  UnregistDispatcher(this);
  return;
}
```
