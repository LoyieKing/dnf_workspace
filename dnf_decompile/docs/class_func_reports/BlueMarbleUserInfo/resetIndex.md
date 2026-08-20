# resetIndex

`_ZN18BlueMarbleUserInfo10resetIndexEv`

`BlueMarbleUserInfo::resetIndex()`

| 类 | 地址 |
|---|---|
| `BlueMarbleUserInfo` | `0x080d6b64` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d6b64  _ZN18BlueMarbleUserInfo10resetIndexEv
#           BlueMarbleUserInfo::resetIndex()
# range [0x080d6b64, 0x080d6b79]
080d6b64 +0x00:  push   %ebp
080d6b65 +0x01:  mov    %esp,%ebp
080d6b67 +0x03:  sub    $0x18,%esp
080d6b6a +0x06:  mov    0x8(%ebp),%eax
080d6b6d +0x09:  add    $0x1c,%eax
080d6b70 +0x0c:  mov    %eax,(%esp)
080d6b73 +0x0f:  call   080d9f1c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0xb9>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0xb9
080d6b78 +0x14:  leave
080d6b79 +0x15:  ret
```

## 反编译 C

```c
// BlueMarbleUserInfo::resetIndex @ 0x80d6b64

/* BlueMarbleUserInfo::resetIndex() */

void __thiscall BlueMarbleUserInfo::resetIndex(BlueMarbleUserInfo *this)

{
  TileIndexInfo::reset((TileIndexInfo *)(this + 0x1c));
  return;
}
```
