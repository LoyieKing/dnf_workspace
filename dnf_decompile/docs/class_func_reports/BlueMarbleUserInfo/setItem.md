# setItem

`_ZN18BlueMarbleUserInfo7setItemEj`

`BlueMarbleUserInfo::setItem(unsigned int)`

| 类 | 地址 |
|---|---|
| `BlueMarbleUserInfo` | `0x080d6c44` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d6c44  _ZN18BlueMarbleUserInfo7setItemEj
#           BlueMarbleUserInfo::setItem(unsigned int)
# range [0x080d6c44, 0x080d6c51]
080d6c44 +0x00:  push   %ebp
080d6c45 +0x01:  mov    %esp,%ebp
080d6c47 +0x03:  mov    0x8(%ebp),%eax
080d6c4a +0x06:  mov    0xc(%ebp),%edx
080d6c4d +0x09:  mov    %edx,0x20(%eax)
080d6c50 +0x0c:  pop    %ebp
080d6c51 +0x0d:  ret
```

## 反编译 C

```c
// BlueMarbleUserInfo::setItem @ 0x80d6c44

/* BlueMarbleUserInfo::setItem(unsigned int) */

void __thiscall BlueMarbleUserInfo::setItem(BlueMarbleUserInfo *this,uint param_1)

{
  *(uint *)(this + 0x20) = param_1;
  return;
}
```
