# get_dispatcher

`_ZN15TimerDispatcher14get_dispatcherEi`

`TimerDispatcher::get_dispatcher(int)`

| 类 | 地址 |
|---|---|
| `TimerDispatcher` | `0x086329f6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086329f6  _ZN15TimerDispatcher14get_dispatcherEi
#           TimerDispatcher::get_dispatcher(int)
# range [0x086329f6, 0x08632a17]
086329f6 +0x00:  push   %ebp
086329f7 +0x01:  mov    %esp,%ebp
086329f9 +0x03:  mov    0xc(%ebp),%edx
086329fc +0x06:  mov    0x8(%ebp),%eax
086329ff +0x09:  mov    (%eax,%edx,4),%eax
08632a02 +0x0c:  test   %eax,%eax
08632a04 +0x0e:  je     08632a11 <+0x1b>
08632a06 +0x10:  mov    0xc(%ebp),%edx
08632a09 +0x13:  mov    0x8(%ebp),%eax
08632a0c +0x16:  mov    (%eax,%edx,4),%eax
08632a0f +0x19:  jmp    08632a16 <+0x20>
08632a11 +0x1b:  mov    $0x0,%eax
08632a16 +0x20:  pop    %ebp
08632a17 +0x21:  ret
```

## 反编译 C

```c
// TimerDispatcher::get_dispatcher @ 0x86329f6

/* TimerDispatcher::get_dispatcher(int) */

undefined4 __thiscall TimerDispatcher::get_dispatcher(TimerDispatcher *this,int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(this + param_1 * 4) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(this + param_1 * 4);
  }
  return uVar1;
}
```
