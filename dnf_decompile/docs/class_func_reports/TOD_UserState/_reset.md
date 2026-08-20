# _reset

`_ZN13TOD_UserState6_resetEv`

`TOD_UserState::_reset()`

| 类 | 地址 |
|---|---|
| `TOD_UserState` | `0x086437ec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086437ec  _ZN13TOD_UserState6_resetEv
#           TOD_UserState::_reset()
# range [0x086437ec, 0x0864383d]
086437ec +0x00:  push   %ebp
086437ed +0x01:  mov    %esp,%ebp
086437ef +0x03:  sub    $0x18,%esp
086437f2 +0x06:  mov    0x8(%ebp),%eax
086437f5 +0x09:  movl   $0x0,0x8(%eax)
086437fc +0x10:  mov    0x8(%ebp),%eax
086437ff +0x13:  movl   $0x0,0xc(%eax)
08643806 +0x1a:  mov    0x8(%ebp),%eax
08643809 +0x1d:  movl   $0x0,0x10(%eax)
08643810 +0x24:  mov    0x8(%ebp),%eax
08643813 +0x27:  add    $0x14,%eax
08643816 +0x2a:  mov    %eax,(%esp)
08643819 +0x2d:  call   085fe852 <_ZN9TOD_Layer10resetLayerEv>  ; TOD_Layer::resetLayer()
0864381e +0x32:  mov    0x8(%ebp),%eax
08643821 +0x35:  movw   $0x0,0x16(%eax)
08643827 +0x3b:  mov    0x8(%ebp),%eax
0864382a +0x3e:  movl   $0x0,0x18(%eax)
08643831 +0x45:  mov    0x8(%ebp),%eax
08643834 +0x48:  movl   $0x0,0x1c(%eax)
0864383b +0x4f:  leave
0864383c +0x50:  ret
0864383d +0x51:  nop
```

## 反编译 C

```c
// TOD_UserState::_reset @ 0x86437ec

/* TOD_UserState::_reset() */

void __thiscall TOD_UserState::_reset(TOD_UserState *this)

{
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  TOD_Layer::resetLayer((TOD_Layer *)(this + 0x14));
  *(undefined2 *)(this + 0x16) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  return;
}
```
