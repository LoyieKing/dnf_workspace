# setExp

`_ZN18BlueMarbleUserInfo6setExpEi`

`BlueMarbleUserInfo::setExp(int)`

| 类 | 地址 |
|---|---|
| `BlueMarbleUserInfo` | `0x080d6c5e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d6c5e  _ZN18BlueMarbleUserInfo6setExpEi
#           BlueMarbleUserInfo::setExp(int)
# range [0x080d6c5e, 0x080d6c9f]
080d6c5e +0x00:  push   %ebp
080d6c5f +0x01:  mov    %esp,%ebp
080d6c61 +0x03:  mov    0x8(%ebp),%eax
080d6c64 +0x06:  mov    0x10(%eax),%eax
080d6c67 +0x09:  mov    %eax,%edx
080d6c69 +0x0b:  imul   0xc(%ebp),%edx
080d6c6d +0x0f:  mov    0x8(%ebp),%eax
080d6c70 +0x12:  mov    0x24(%eax),%eax
080d6c73 +0x15:  mov    0x64(%eax),%eax
080d6c76 +0x18:  cmp    %eax,%edx
080d6c78 +0x1a:  jl     080d6c8b <+0x2d>
080d6c7a +0x1c:  mov    0x8(%ebp),%eax
080d6c7d +0x1f:  mov    0x24(%eax),%eax
080d6c80 +0x22:  mov    0x64(%eax),%edx
080d6c83 +0x25:  mov    0x8(%ebp),%eax
080d6c86 +0x28:  mov    %edx,0x10(%eax)
080d6c89 +0x2b:  jmp    080d6c9d <+0x3f>
080d6c8b +0x2d:  mov    0x8(%ebp),%eax
080d6c8e +0x30:  mov    0x10(%eax),%eax
080d6c91 +0x33:  mov    %eax,%edx
080d6c93 +0x35:  imul   0xc(%ebp),%edx
080d6c97 +0x39:  mov    0x8(%ebp),%eax
080d6c9a +0x3c:  mov    %edx,0x10(%eax)
080d6c9d +0x3f:  pop    %ebp
080d6c9e +0x40:  ret
080d6c9f +0x41:  nop
```

## 反编译 C

```c
// BlueMarbleUserInfo::setExp @ 0x80d6c5e

/* BlueMarbleUserInfo::setExp(int) */

void __thiscall BlueMarbleUserInfo::setExp(BlueMarbleUserInfo *this,int param_1)

{
  if (*(int *)(this + 0x10) * param_1 < *(int *)(*(int *)(this + 0x24) + 100)) {
    *(int *)(this + 0x10) = *(int *)(this + 0x10) * param_1;
  }
  else {
    *(undefined4 *)(this + 0x10) = *(undefined4 *)(*(int *)(this + 0x24) + 100);
  }
  return;
}
```
