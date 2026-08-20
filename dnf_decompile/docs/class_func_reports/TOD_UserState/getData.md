# getData

`_ZNK13TOD_UserState7getDataEPc`

`TOD_UserState::getData(char*) const`

| 类 | 地址 |
|---|---|
| `TOD_UserState` | `0x086435ca` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086435ca  _ZNK13TOD_UserState7getDataEPc
#           TOD_UserState::getData(char*) const
# range [0x086435ca, 0x08643623]
086435ca +0x00:  push   %ebp
086435cb +0x01:  mov    %esp,%ebp
086435cd +0x03:  sub    $0x10,%esp
086435d0 +0x06:  mov    0xc(%ebp),%eax
086435d3 +0x09:  mov    %eax,-0x4(%ebp)
086435d6 +0x0c:  mov    0x8(%ebp),%eax
086435d9 +0x0f:  movzwl 0x16(%eax),%edx
086435dd +0x13:  mov    -0x4(%ebp),%eax
086435e0 +0x16:  mov    %dx,0xe(%eax)
086435e4 +0x1a:  mov    -0x4(%ebp),%eax
086435e7 +0x1d:  mov    0x8(%ebp),%edx
086435ea +0x20:  movzwl 0x14(%edx),%edx
086435ee +0x24:  mov    %dx,0xc(%eax)
086435f2 +0x28:  mov    0x8(%ebp),%eax
086435f5 +0x2b:  mov    0xc(%eax),%edx
086435f8 +0x2e:  mov    -0x4(%ebp),%eax
086435fb +0x31:  mov    %edx,0x4(%eax)
086435fe +0x34:  mov    0x8(%ebp),%eax
08643601 +0x37:  mov    0x10(%eax),%edx
08643604 +0x3a:  mov    -0x4(%ebp),%eax
08643607 +0x3d:  mov    %edx,0x8(%eax)
0864360a +0x40:  mov    0x8(%ebp),%eax
0864360d +0x43:  mov    0x18(%eax),%edx
08643610 +0x46:  mov    -0x4(%ebp),%eax
08643613 +0x49:  mov    %edx,0x10(%eax)
08643616 +0x4c:  mov    0x8(%ebp),%eax
08643619 +0x4f:  mov    0x1c(%eax),%edx
0864361c +0x52:  mov    -0x4(%ebp),%eax
0864361f +0x55:  mov    %edx,0x14(%eax)
08643622 +0x58:  leave
08643623 +0x59:  ret
```

## 反编译 C

```c
// TOD_UserState::getData @ 0x86435ca

/* TOD_UserState::getData(char*) const */

void __thiscall TOD_UserState::getData(TOD_UserState *this,char *param_1)

{
  *(undefined2 *)(param_1 + 0xe) = *(undefined2 *)(this + 0x16);
  *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(this + 0x14);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 0xc);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(this + 0x10);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(this + 0x18);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(this + 0x1c);
  return;
}
```
