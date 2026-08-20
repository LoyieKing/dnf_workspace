# getUserState

`_ZNK18BlueMarbleUserInfo12getUserStateEv`

`BlueMarbleUserInfo::getUserState() const`

| 类 | 地址 |
|---|---|
| `BlueMarbleUserInfo` | `0x080d6bae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d6bae  _ZNK18BlueMarbleUserInfo12getUserStateEv
#           BlueMarbleUserInfo::getUserState() const
# range [0x080d6bae, 0x080d6bb9]
080d6bae +0x00:  push   %ebp
080d6baf +0x01:  mov    %esp,%ebp
080d6bb1 +0x03:  mov    0x8(%ebp),%eax
080d6bb4 +0x06:  mov    0x4(%eax),%eax
080d6bb7 +0x09:  pop    %ebp
080d6bb8 +0x0a:  ret
080d6bb9 +0x0b:  nop
```

## 反编译 C

```c
// BlueMarbleUserInfo::getUserState @ 0x80d6bae

/* BlueMarbleUserInfo::getUserState() const */

undefined4 __thiscall BlueMarbleUserInfo::getUserState(BlueMarbleUserInfo *this)

{
  return *(undefined4 *)(this + 4);
}
```
