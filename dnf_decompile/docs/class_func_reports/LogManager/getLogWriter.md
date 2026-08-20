# getLogWriter

`_ZN10LogManager12getLogWriterEi`

`LogManager::getLogWriter(int)`

| 类 | 地址 |
|---|---|
| `LogManager` | `0x08ad3f24` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad3f24  _ZN10LogManager12getLogWriterEi
#           LogManager::getLogWriter(int)
# range [0x08ad3f24, 0x08ad3f63]
08ad3f24 +0x00:  push   %ebp
08ad3f25 +0x01:  mov    %esp,%ebp
08ad3f27 +0x03:  push   %esi
08ad3f28 +0x04:  push   %ebx
08ad3f29 +0x05:  sub    $0x10,%esp
08ad3f2c +0x08:  mov    0x8(%ebp),%ebx
08ad3f2f +0x0b:  call   08ad3ba0 <_ZL11prepareDatav>  ; prepareData()
08ad3f34 +0x10:  mov    %ebx,%esi
08ad3f36 +0x12:  mov    0xc(%ebp),%edx
08ad3f39 +0x15:  mov    &_ZL6s_data,%eax
08ad3f3e +0x1a:  mov    %edx,0x4(%esp)
08ad3f42 +0x1e:  mov    %eax,(%esp)
08ad3f45 +0x21:  call   08ad435e <_GLOBAL__I__ZN9LogWriterC2Ev+0x3a7>  ; global constructors keyed to LogWriter::LogWriter()+0x3a7
08ad3f4a +0x26:  mov    %eax,0x4(%esp)
08ad3f4e +0x2a:  mov    %esi,(%esp)
08ad3f51 +0x2d:  call   08ad40f0 <_GLOBAL__I__ZN9LogWriterC2Ev+0x139>  ; global constructors keyed to LogWriter::LogWriter()+0x139
08ad3f56 +0x32:  mov    %ebx,%eax
08ad3f58 +0x34:  mov    %ebx,%eax
08ad3f5a +0x36:  add    $0x10,%esp
08ad3f5d +0x39:  pop    %ebx
08ad3f5e +0x3a:  pop    %esi
08ad3f5f +0x3b:  pop    %ebp
08ad3f60 +0x3c:  ret    $0x4
08ad3f63 +0x3f:  nop
```

## 反编译 C

```c
// LogManager::getLogWriter @ 0x8ad3f24

/* LogManager::getLogWriter(int) */

LogManager * __thiscall LogManager::getLogWriter(LogManager *this,int param_1)

{
  shared_ptr *psVar1;
  
  prepareData();
  psVar1 = (shared_ptr *)std::array<std::shared_ptr<LogWriter>,64u>::operator[](s_data,param_1);
  std::shared_ptr<LogWriter>::shared_ptr((shared_ptr<LogWriter> *)this,psVar1);
  return this;
}
```
