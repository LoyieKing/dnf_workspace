# resetBuff

`_ZN18BlueMarbleUserInfo9resetBuffEv`

`BlueMarbleUserInfo::resetBuff()`

| 类 | 地址 |
|---|---|
| `BlueMarbleUserInfo` | `0x080d6b4e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d6b4e  _ZN18BlueMarbleUserInfo9resetBuffEv
#           BlueMarbleUserInfo::resetBuff()
# range [0x080d6b4e, 0x080d6b63]
080d6b4e +0x00:  push   %ebp
080d6b4f +0x01:  mov    %esp,%ebp
080d6b51 +0x03:  sub    $0x18,%esp
080d6b54 +0x06:  mov    0x8(%ebp),%eax
080d6b57 +0x09:  add    $0x10,%eax
080d6b5a +0x0c:  mov    %eax,(%esp)
080d6b5d +0x0f:  call   080d9ee2 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x7f>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x7f
080d6b62 +0x14:  leave
080d6b63 +0x15:  ret
```

## 反编译 C

```c
// BlueMarbleUserInfo::resetBuff @ 0x80d6b4e

/* BlueMarbleUserInfo::resetBuff() */

void __thiscall BlueMarbleUserInfo::resetBuff(BlueMarbleUserInfo *this)

{
  BuffInfo::reset((BuffInfo *)(this + 0x10));
  return;
}
```
