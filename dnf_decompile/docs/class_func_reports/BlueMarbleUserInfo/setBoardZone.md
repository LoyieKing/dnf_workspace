# setBoardZone

`_ZN18BlueMarbleUserInfo12setBoardZoneEii`

`BlueMarbleUserInfo::setBoardZone(int, int)`

| 类 | 地址 |
|---|---|
| `BlueMarbleUserInfo` | `0x080d6bba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d6bba  _ZN18BlueMarbleUserInfo12setBoardZoneEii
#           BlueMarbleUserInfo::setBoardZone(int, int)
# range [0x080d6bba, 0x080d6c03]
080d6bba +0x00:  push   %ebp
080d6bbb +0x01:  mov    %esp,%ebp
080d6bbd +0x03:  mov    0x8(%ebp),%eax
080d6bc0 +0x06:  mov    0x8(%eax),%eax
080d6bc3 +0x09:  add    0xc(%ebp),%eax
080d6bc6 +0x0c:  cmp    0x10(%ebp),%eax
080d6bc9 +0x0f:  jl     080d6bd6 <+0x1c>
080d6bcb +0x11:  mov    0x8(%ebp),%eax
080d6bce +0x14:  mov    0x10(%ebp),%edx
080d6bd1 +0x17:  mov    %edx,0x8(%eax)
080d6bd4 +0x1a:  jmp    080d6c01 <+0x47>
080d6bd6 +0x1c:  mov    0x8(%ebp),%eax
080d6bd9 +0x1f:  mov    0x8(%eax),%eax
080d6bdc +0x22:  add    0xc(%ebp),%eax
080d6bdf +0x25:  cmp    $0x1,%eax
080d6be2 +0x28:  jg     080d6bf0 <+0x36>
080d6be4 +0x2a:  mov    0x8(%ebp),%eax
080d6be7 +0x2d:  movl   $0x1,0x8(%eax)
080d6bee +0x34:  jmp    080d6c01 <+0x47>
080d6bf0 +0x36:  mov    0x8(%ebp),%eax
080d6bf3 +0x39:  mov    0x8(%eax),%eax
080d6bf6 +0x3c:  mov    %eax,%edx
080d6bf8 +0x3e:  add    0xc(%ebp),%edx
080d6bfb +0x41:  mov    0x8(%ebp),%eax
080d6bfe +0x44:  mov    %edx,0x8(%eax)
080d6c01 +0x47:  pop    %ebp
080d6c02 +0x48:  ret
080d6c03 +0x49:  nop
```

## 反编译 C

```c
// BlueMarbleUserInfo::setBoardZone @ 0x80d6bba

/* BlueMarbleUserInfo::setBoardZone(int, int) */

void __thiscall BlueMarbleUserInfo::setBoardZone(BlueMarbleUserInfo *this,int param_1,int param_2)

{
  if (*(int *)(this + 8) + param_1 < param_2) {
    if (*(int *)(this + 8) + param_1 < 2) {
      *(undefined4 *)(this + 8) = 1;
    }
    else {
      *(int *)(this + 8) = *(int *)(this + 8) + param_1;
    }
  }
  else {
    *(int *)(this + 8) = param_2;
  }
  return;
}
```
