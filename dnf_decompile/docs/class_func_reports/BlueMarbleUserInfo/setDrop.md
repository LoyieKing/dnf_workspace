# setDrop

`_ZN18BlueMarbleUserInfo7setDropEi`

`BlueMarbleUserInfo::setDrop(int)`

| 类 | 地址 |
|---|---|
| `BlueMarbleUserInfo` | `0x080d6cfa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d6cfa  _ZN18BlueMarbleUserInfo7setDropEi
#           BlueMarbleUserInfo::setDrop(int)
# range [0x080d6cfa, 0x080d6d3b]
080d6cfa +0x00:  push   %ebp
080d6cfb +0x01:  mov    %esp,%ebp
080d6cfd +0x03:  mov    0x8(%ebp),%eax
080d6d00 +0x06:  mov    0x18(%eax),%eax
080d6d03 +0x09:  mov    %eax,%edx
080d6d05 +0x0b:  imul   0xc(%ebp),%edx
080d6d09 +0x0f:  mov    0x8(%ebp),%eax
080d6d0c +0x12:  mov    0x24(%eax),%eax
080d6d0f +0x15:  mov    0x64(%eax),%eax
080d6d12 +0x18:  cmp    %eax,%edx
080d6d14 +0x1a:  jl     080d6d27 <+0x2d>
080d6d16 +0x1c:  mov    0x8(%ebp),%eax
080d6d19 +0x1f:  mov    0x24(%eax),%eax
080d6d1c +0x22:  mov    0x64(%eax),%edx
080d6d1f +0x25:  mov    0x8(%ebp),%eax
080d6d22 +0x28:  mov    %edx,0x18(%eax)
080d6d25 +0x2b:  jmp    080d6d39 <+0x3f>
080d6d27 +0x2d:  mov    0x8(%ebp),%eax
080d6d2a +0x30:  mov    0x18(%eax),%eax
080d6d2d +0x33:  mov    %eax,%edx
080d6d2f +0x35:  imul   0xc(%ebp),%edx
080d6d33 +0x39:  mov    0x8(%ebp),%eax
080d6d36 +0x3c:  mov    %edx,0x18(%eax)
080d6d39 +0x3f:  pop    %ebp
080d6d3a +0x40:  ret
080d6d3b +0x41:  nop
```

## 反编译 C

```c
// BlueMarbleUserInfo::setDrop @ 0x80d6cfa

/* BlueMarbleUserInfo::setDrop(int) */

void __thiscall BlueMarbleUserInfo::setDrop(BlueMarbleUserInfo *this,int param_1)

{
  if (*(int *)(this + 0x18) * param_1 < *(int *)(*(int *)(this + 0x24) + 100)) {
    *(int *)(this + 0x18) = *(int *)(this + 0x18) * param_1;
  }
  else {
    *(undefined4 *)(this + 0x18) = *(undefined4 *)(*(int *)(this + 0x24) + 100);
  }
  return;
}
```
