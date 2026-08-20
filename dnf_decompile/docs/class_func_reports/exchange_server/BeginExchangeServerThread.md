# BeginExchangeServerThread

`_ZN15exchange_server25BeginExchangeServerThreadEv`

`exchange_server::BeginExchangeServerThread()`

| 类 | 地址 |
|---|---|
| `exchange_server` | `0x0848f2b8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0848f2b8  _ZN15exchange_server25BeginExchangeServerThreadEv
#           exchange_server::BeginExchangeServerThread()
# range [0x0848f2b8, 0x0848f2cc]
0848f2b8 +0x00:  push   %ebp
0848f2b9 +0x01:  mov    %esp,%ebp
0848f2bb +0x03:  sub    $0x18,%esp
0848f2be +0x06:  call   08493e8d <_GLOBAL__I__ZN15exchange_server22AcquireCharacterMemoryEi+0x4b6b>  ; global constructors keyed to exchange_server::AcquireCharacterMemory(int)+0x4b6b
0848f2c3 +0x0b:  mov    %eax,(%esp)
0848f2c6 +0x0e:  call   08630b8a <_ZN15ThreadInterface5beginEv>  ; ThreadInterface::begin()
0848f2cb +0x13:  leave
0848f2cc +0x14:  ret
```

## 反编译 C

```c
// exchange_server::BeginExchangeServerThread @ 0x848f2b8

/* exchange_server::BeginExchangeServerThread() */

void exchange_server::BeginExchangeServerThread(void)

{
  ThreadInterface *this;
  
  this = (ThreadInterface *)GetInstanceExchangeServerThread();
  ThreadInterface::begin(this);
  return;
}
```
