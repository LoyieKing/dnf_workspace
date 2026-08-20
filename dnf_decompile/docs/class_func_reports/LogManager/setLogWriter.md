# setLogWriter

`_ZN10LogManager12setLogWriterEiSt10shared_ptrI9LogWriterE`

`LogManager::setLogWriter(int, std::shared_ptr<LogWriter>)`

| 类 | 地址 |
|---|---|
| `LogManager` | `0x08ad3f64` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad3f64  _ZN10LogManager12setLogWriterEiSt10shared_ptrI9LogWriterE
#           LogManager::setLogWriter(int, std::shared_ptr<LogWriter>)
# range [0x08ad3f64, 0x08ad3f93]
08ad3f64 +0x00:  push   %ebp
08ad3f65 +0x01:  mov    %esp,%ebp
08ad3f67 +0x03:  sub    $0x18,%esp
08ad3f6a +0x06:  call   08ad3ba0 <_ZL11prepareDatav>  ; prepareData()
08ad3f6f +0x0b:  mov    0x8(%ebp),%edx
08ad3f72 +0x0e:  mov    &_ZL6s_data,%eax
08ad3f77 +0x13:  mov    %edx,0x4(%esp)
08ad3f7b +0x17:  mov    %eax,(%esp)
08ad3f7e +0x1a:  call   08ad435e <_GLOBAL__I__ZN9LogWriterC2Ev+0x3a7>  ; global constructors keyed to LogWriter::LogWriter()+0x3a7
08ad3f83 +0x1f:  mov    0xc(%ebp),%edx
08ad3f86 +0x22:  mov    %edx,0x4(%esp)
08ad3f8a +0x26:  mov    %eax,(%esp)
08ad3f8d +0x29:  call   08ad4138 <_GLOBAL__I__ZN9LogWriterC2Ev+0x181>  ; global constructors keyed to LogWriter::LogWriter()+0x181
08ad3f92 +0x2e:  leave
08ad3f93 +0x2f:  ret
```

## 反编译 C

```c
// LogManager::setLogWriter @ 0x8ad3f64

/* LogManager::setLogWriter(int, std::shared_ptr<LogWriter>) */

void LogManager::setLogWriter(uint param_1,shared_ptr *param_2)

{
  shared_ptr<LogWriter> *this;
  
  prepareData();
  this = (shared_ptr<LogWriter> *)
         std::array<std::shared_ptr<LogWriter>,64u>::operator[](s_data,param_1);
  std::shared_ptr<LogWriter>::operator=(this,param_2);
  return;
}
```
