# now

`_ZN4Tick3nowEv`

`Tick::now()`

| 类 | 地址 |
|---|---|
| `Tick` | `0x08ade844` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ade844  _ZN4Tick3nowEv
#           Tick::now()
# range [0x08ade844, 0x08ade869]
08ade844 +0x00:  push   %ebp
08ade845 +0x01:  mov    %esp,%ebp
08ade847 +0x03:  push   %ebx
08ade848 +0x04:  sub    $0x14,%esp
08ade84b +0x07:  mov    0x8(%ebp),%ebx
08ade84e +0x0a:  call   08ade86a <_ZN4Tick18nowAsInternalValueEv>  ; Tick::nowAsInternalValue()
08ade853 +0x0f:  mov    %eax,0x4(%esp)
08ade857 +0x13:  mov    %ebx,(%esp)
08ade85a +0x16:  call   08ade836 <_ZN4TickC1Ej>  ; Tick::Tick(unsigned int)
08ade85f +0x1b:  mov    %ebx,%eax
08ade861 +0x1d:  add    $0x14,%esp
08ade864 +0x20:  pop    %ebx
08ade865 +0x21:  pop    %ebp
08ade866 +0x22:  ret    $0x4
08ade869 +0x25:  nop
```

## 反编译 C

```c
// Tick::now @ 0x8ade844

Tick * Tick::now(Tick *__return_storage_ptr__)

{
  uint32 value;
  
  value = nowAsInternalValue();
  Tick(__return_storage_ptr__,value);
  return __return_storage_ptr__;
}
```
