# setDungeon

`_ZN18BlueMarbleUserInfo10setDungeonEi`

`BlueMarbleUserInfo::setDungeon(int)`

| 类 | 地址 |
|---|---|
| `BlueMarbleUserInfo` | `0x080d6c2a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d6c2a  _ZN18BlueMarbleUserInfo10setDungeonEi
#           BlueMarbleUserInfo::setDungeon(int)
# range [0x080d6c2a, 0x080d6c37]
080d6c2a +0x00:  push   %ebp
080d6c2b +0x01:  mov    %esp,%ebp
080d6c2d +0x03:  mov    0x8(%ebp),%eax
080d6c30 +0x06:  mov    0xc(%ebp),%edx
080d6c33 +0x09:  mov    %edx,0x1c(%eax)
080d6c36 +0x0c:  pop    %ebp
080d6c37 +0x0d:  ret
```

## 反编译 C

```c
// BlueMarbleUserInfo::setDungeon @ 0x80d6c2a

/* BlueMarbleUserInfo::setDungeon(int) */

void __thiscall BlueMarbleUserInfo::setDungeon(BlueMarbleUserInfo *this,int param_1)

{
  *(int *)(this + 0x1c) = param_1;
  return;
}
```
