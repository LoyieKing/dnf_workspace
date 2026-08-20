# nowAsInternalValue

`_ZN4Tick18nowAsInternalValueEv`

`Tick::nowAsInternalValue()`

| 类 | 地址 |
|---|---|
| `Tick` | `0x08ade86a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ade86a  _ZN4Tick18nowAsInternalValueEv
#           Tick::nowAsInternalValue()
# range [0x08ade86a, 0x08ade8b5]
08ade86a +0x00:  push   %ebp
08ade86b +0x01:  mov    %esp,%ebp
08ade86d +0x03:  push   %ebx
08ade86e +0x04:  sub    $0x24,%esp
08ade871 +0x07:  lea    -0x10(%ebp),%eax
08ade874 +0x0a:  mov    %eax,0x4(%esp)
08ade878 +0x0e:  movl   $0x1,(%esp)
08ade87f +0x15:  call   0807e550 <_init+0xe48>
08ade884 +0x1a:  mov    -0x10(%ebp),%eax
08ade887 +0x1d:  mov    %eax,%edx
08ade889 +0x1f:  sar    $0x1f,%edx
08ade88c +0x22:  imul   $0x3e8,%eax,%ebx
08ade892 +0x28:  mov    -0xc(%ebp),%ecx
08ade895 +0x2b:  mov    $0x431bde83,%edx
08ade89a +0x30:  mov    %ecx,%eax
08ade89c +0x32:  imul   %edx
08ade89e +0x34:  sar    $0x12,%edx
08ade8a1 +0x37:  mov    %ecx,%eax
08ade8a3 +0x39:  sar    $0x1f,%eax
08ade8a6 +0x3c:  mov    %edx,%ecx
08ade8a8 +0x3e:  sub    %eax,%ecx
08ade8aa +0x40:  mov    %ecx,%eax
08ade8ac +0x42:  lea    (%ebx,%eax,1),%eax
08ade8af +0x45:  add    $0x24,%esp
08ade8b2 +0x48:  pop    %ebx
08ade8b3 +0x49:  pop    %ebp
08ade8b4 +0x4a:  ret
08ade8b5 +0x4b:  nop
```

## 反编译 C

```c
// Tick::nowAsInternalValue @ 0x8ade86a

uint32 Tick::nowAsInternalValue(void)

{
  timespec local_14;
  
                    /* Unresolved local var: timespec ts@[???] */
  clock_gettime(1,&local_14);
  return local_14.tv_sec * 1000 + local_14.tv_nsec / 1000000;
}
```
