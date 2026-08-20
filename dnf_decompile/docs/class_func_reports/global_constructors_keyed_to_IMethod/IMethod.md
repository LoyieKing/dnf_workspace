# IMethod

`_GLOBAL__I__ZN7IMethodC2Ev`

`global constructors keyed to IMethod::IMethod()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to IMethod` | `0x080b4698` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080b4698  _GLOBAL__I__ZN7IMethodC2Ev
#           global constructors keyed to IMethod::IMethod()
# range [0x080b4698, 0x080b46b3]
080b4698 +0x00:  push   %ebp
080b4699 +0x01:  mov    %esp,%ebp
080b469b +0x03:  sub    $0x18,%esp
080b469e +0x06:  movl   $0xffff,0x4(%esp)
080b46a6 +0x0e:  movl   $0x1,(%esp)
080b46ad +0x15:  call   080b4658 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
080b46b2 +0x1a:  leave
080b46b3 +0x1b:  ret
```

## 反编译 C

```c
// <global>::global @ 0x80b4698

/* IMethod::IMethod() */

void IMethod::_GLOBAL__I_IMethod(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
