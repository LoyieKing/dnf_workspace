# setGold

`_ZN18BlueMarbleUserInfo7setGoldEi`

`BlueMarbleUserInfo::setGold(int)`

| 类 | 地址 |
|---|---|
| `BlueMarbleUserInfo` | `0x080d6cac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d6cac  _ZN18BlueMarbleUserInfo7setGoldEi
#           BlueMarbleUserInfo::setGold(int)
# range [0x080d6cac, 0x080d6ced]
080d6cac +0x00:  push   %ebp
080d6cad +0x01:  mov    %esp,%ebp
080d6caf +0x03:  mov    0x8(%ebp),%eax
080d6cb2 +0x06:  mov    0x14(%eax),%eax
080d6cb5 +0x09:  mov    %eax,%edx
080d6cb7 +0x0b:  imul   0xc(%ebp),%edx
080d6cbb +0x0f:  mov    0x8(%ebp),%eax
080d6cbe +0x12:  mov    0x24(%eax),%eax
080d6cc1 +0x15:  mov    0x64(%eax),%eax
080d6cc4 +0x18:  cmp    %eax,%edx
080d6cc6 +0x1a:  jl     080d6cd9 <+0x2d>
080d6cc8 +0x1c:  mov    0x8(%ebp),%eax
080d6ccb +0x1f:  mov    0x24(%eax),%eax
080d6cce +0x22:  mov    0x64(%eax),%edx
080d6cd1 +0x25:  mov    0x8(%ebp),%eax
080d6cd4 +0x28:  mov    %edx,0x14(%eax)
080d6cd7 +0x2b:  jmp    080d6ceb <+0x3f>
080d6cd9 +0x2d:  mov    0x8(%ebp),%eax
080d6cdc +0x30:  mov    0x14(%eax),%eax
080d6cdf +0x33:  mov    %eax,%edx
080d6ce1 +0x35:  imul   0xc(%ebp),%edx
080d6ce5 +0x39:  mov    0x8(%ebp),%eax
080d6ce8 +0x3c:  mov    %edx,0x14(%eax)
080d6ceb +0x3f:  pop    %ebp
080d6cec +0x40:  ret
080d6ced +0x41:  nop
```

## 反编译 C

```c
// BlueMarbleUserInfo::setGold @ 0x80d6cac

/* BlueMarbleUserInfo::setGold(int) */

void __thiscall BlueMarbleUserInfo::setGold(BlueMarbleUserInfo *this,int param_1)

{
  if (*(int *)(this + 0x14) * param_1 < *(int *)(*(int *)(this + 0x24) + 100)) {
    *(int *)(this + 0x14) = *(int *)(this + 0x14) * param_1;
  }
  else {
    *(undefined4 *)(this + 0x14) = *(undefined4 *)(*(int *)(this + 0x24) + 100);
  }
  return;
}
```
