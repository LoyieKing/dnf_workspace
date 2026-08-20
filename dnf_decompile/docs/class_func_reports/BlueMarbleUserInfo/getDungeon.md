# getDungeon

`_ZNK18BlueMarbleUserInfo10getDungeonEv`

`BlueMarbleUserInfo::getDungeon() const`

| 类 | 地址 |
|---|---|
| `BlueMarbleUserInfo` | `0x080d6c38` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d6c38  _ZNK18BlueMarbleUserInfo10getDungeonEv
#           BlueMarbleUserInfo::getDungeon() const
# range [0x080d6c38, 0x080d6c43]
080d6c38 +0x00:  push   %ebp
080d6c39 +0x01:  mov    %esp,%ebp
080d6c3b +0x03:  mov    0x8(%ebp),%eax
080d6c3e +0x06:  mov    0x1c(%eax),%eax
080d6c41 +0x09:  pop    %ebp
080d6c42 +0x0a:  ret
080d6c43 +0x0b:  nop
```

## 反编译 C

```c
// BlueMarbleUserInfo::getDungeon @ 0x80d6c38

/* BlueMarbleUserInfo::getDungeon() const */

undefined4 __thiscall BlueMarbleUserInfo::getDungeon(BlueMarbleUserInfo *this)

{
  return *(undefined4 *)(this + 0x1c);
}
```
