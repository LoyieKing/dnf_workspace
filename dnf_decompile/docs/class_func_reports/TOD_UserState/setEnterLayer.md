# setEnterLayer

`_ZN13TOD_UserState13setEnterLayerERK9TOD_Layer`

`TOD_UserState::setEnterLayer(TOD_Layer const&)`

| 类 | 地址 |
|---|---|
| `TOD_UserState` | `0x086438fc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086438fc  _ZN13TOD_UserState13setEnterLayerERK9TOD_Layer
#           TOD_UserState::setEnterLayer(TOD_Layer const&)
# range [0x086438fc, 0x0864390d]
086438fc +0x00:  push   %ebp
086438fd +0x01:  mov    %esp,%ebp
086438ff +0x03:  mov    0x8(%ebp),%eax
08643902 +0x06:  mov    0xc(%ebp),%edx
08643905 +0x09:  movzwl (%edx),%edx
08643908 +0x0c:  mov    %dx,0x14(%eax)
0864390c +0x10:  pop    %ebp
0864390d +0x11:  ret
```

## 反编译 C

```c
// TOD_UserState::setEnterLayer @ 0x86438fc

/* TOD_UserState::setEnterLayer(TOD_Layer const&) */

void __thiscall TOD_UserState::setEnterLayer(TOD_UserState *this,TOD_Layer *param_1)

{
  *(undefined2 *)(this + 0x14) = *(undefined2 *)param_1;
  return;
}
```
