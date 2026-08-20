# get_dispatcher

`_ZN16PacketDispatcher14get_dispatcherEi`

`PacketDispatcher::get_dispatcher(int)`

| 类 | 地址 |
|---|---|
| `PacketDispatcher` | `0x085948e2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085948e2  _ZN16PacketDispatcher14get_dispatcherEi
#           PacketDispatcher::get_dispatcher(int)
# range [0x085948e2, 0x08594921]
085948e2 +0x00:  push   %ebp
085948e3 +0x01:  mov    %esp,%ebp
085948e5 +0x03:  cmpl   $0x25d,0xc(%ebp)
085948ec +0x0a:  jle    085948f5 <+0x13>
085948ee +0x0c:  mov    $0x0,%eax
085948f3 +0x11:  jmp    0859491f <+0x3d>
085948f5 +0x13:  cmpl   $0x0,0xc(%ebp)
085948f9 +0x17:  jns    08594902 <+0x20>
085948fb +0x19:  mov    $0x0,%eax
08594900 +0x1e:  jmp    0859491f <+0x3d>
08594902 +0x20:  mov    0xc(%ebp),%edx
08594905 +0x23:  mov    0x8(%ebp),%eax
08594908 +0x26:  mov    (%eax,%edx,4),%eax
0859490b +0x29:  test   %eax,%eax
0859490d +0x2b:  je     0859491a <+0x38>
0859490f +0x2d:  mov    0xc(%ebp),%edx
08594912 +0x30:  mov    0x8(%ebp),%eax
08594915 +0x33:  mov    (%eax,%edx,4),%eax
08594918 +0x36:  jmp    0859491f <+0x3d>
0859491a +0x38:  mov    $0x0,%eax
0859491f +0x3d:  pop    %ebp
08594920 +0x3e:  ret
08594921 +0x3f:  nop
```

## 反编译 C

```c
// PacketDispatcher::get_dispatcher @ 0x85948e2

/* PacketDispatcher::get_dispatcher(int) */

undefined4 __thiscall PacketDispatcher::get_dispatcher(PacketDispatcher *this,int param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 0x25e) {
    if (param_1 < 0) {
      uVar1 = 0;
    }
    else if (*(int *)(this + param_1 * 4) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(this + param_1 * 4);
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
