# internal_stream

`_GLOBAL__I__ZN6Taiwan15internal_streamER12CStreamGuardN18TaiwanInternalPack1TEi`

`global constructors keyed to Taiwan::internal_stream(CStreamGuard&, TaiwanInternalPack::T, int)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to Taiwan` | `0x08163a73` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08163a73  _GLOBAL__I__ZN6Taiwan15internal_streamER12CStreamGuardN18TaiwanInternalPack1TEi
#           global constructors keyed to Taiwan::internal_stream(CStreamGuard&, TaiwanInternalPack::T, int)
# range [0x08163a73, 0x08163a8f]
08163a73 +0x00:  push   %ebp
08163a74 +0x01:  mov    %esp,%ebp
08163a76 +0x03:  sub    $0x18,%esp
08163a79 +0x06:  movl   $0xffff,0x4(%esp)
08163a81 +0x0e:  movl   $0x1,(%esp)
08163a88 +0x15:  call   08163a33 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
08163a8d +0x1a:  leave
08163a8e +0x1b:  ret
08163a8f +0x1c:  nop
```

## 反编译 C

```c
// <global>::global @ 0x8163a73

/* Taiwan::internal_stream(CStreamGuard&, TaiwanInternalPack::T, int) */

void Taiwan::_GLOBAL__I_internal_stream(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
