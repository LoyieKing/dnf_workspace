# GameResultType

`_GLOBAL__I__ZN14GameResultTypeC2Ev`

`global constructors keyed to GameResultType::GameResultType()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to GameResultType` | `0x084b764d` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b764d  _GLOBAL__I__ZN14GameResultTypeC2Ev
#           global constructors keyed to GameResultType::GameResultType()
# range [0x084b764d, 0x084b7697]
084b764d +0x00:  push   %ebp
084b764e +0x01:  mov    %esp,%ebp
084b7650 +0x03:  sub    $0x18,%esp
084b7653 +0x06:  movl   $0xffff,0x4(%esp)
084b765b +0x0e:  movl   $0x1,(%esp)
084b7662 +0x15:  call   084b760d <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
084b7667 +0x1a:  leave
084b7668 +0x1b:  ret
084b7669 +0x1c:  nop
084b766a +0x1d:  push   %ebp
084b766b +0x1e:  mov    %esp,%ebp
084b766d +0x20:  sub    $0x18,%esp
084b7670 +0x23:  mov    0x8(%ebp),%eax
084b7673 +0x26:  mov    %eax,(%esp)
084b7676 +0x29:  call   084b767e <+0x31>
084b767b +0x2e:  leave
084b767c +0x2f:  ret
084b767d +0x30:  nop
084b767e +0x31:  push   %ebp
084b767f +0x32:  mov    %esp,%ebp
084b7681 +0x34:  mov    0x8(%ebp),%eax
084b7684 +0x37:  movw   $0x0,(%eax)
084b7689 +0x3c:  mov    0x8(%ebp),%eax
084b768c +0x3f:  movl   $0x0,0x4(%eax)
084b7693 +0x46:  pop    %ebp
084b7694 +0x47:  ret
084b7695 +0x48:  nop
084b7696 +0x49:  nop
084b7697 +0x4a:  nop
```

## 反编译 C

```c
// <global>::global @ 0x84b764d

/* GameResultType::GameResultType() */

void GameResultType::_GLOBAL__I_GameResultType(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
