# getExchangeServerThreadID

`_ZN15exchange_server25getExchangeServerThreadIDEv`

`exchange_server::getExchangeServerThreadID()`

| 类 | 地址 |
|---|---|
| `exchange_server` | `0x0848f2cd` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0848f2cd  _ZN15exchange_server25getExchangeServerThreadIDEv
#           exchange_server::getExchangeServerThreadID()
# range [0x0848f2cd, 0x0848f2e1]
0848f2cd +0x00:  push   %ebp
0848f2ce +0x01:  mov    %esp,%ebp
0848f2d0 +0x03:  sub    $0x18,%esp
0848f2d3 +0x06:  call   08493e8d <_GLOBAL__I__ZN15exchange_server22AcquireCharacterMemoryEi+0x4b6b>  ; global constructors keyed to exchange_server::AcquireCharacterMemory(int)+0x4b6b
0848f2d8 +0x0b:  mov    %eax,(%esp)
0848f2db +0x0e:  call   082a4218 <_GLOBAL__I__ZN4CLog5this_E+0x63f>  ; global constructors keyed to CLog::this_+0x63f
0848f2e0 +0x13:  leave
0848f2e1 +0x14:  ret
```

## 反编译 C

```c
// exchange_server::getExchangeServerThreadID @ 0x848f2cd

/* exchange_server::getExchangeServerThreadID() */

void exchange_server::getExchangeServerThreadID(void)

{
  ThreadInterface *this;
  
  this = (ThreadInterface *)GetInstanceExchangeServerThread();
  ThreadInterface::getThreadID(this);
  return;
}
```
