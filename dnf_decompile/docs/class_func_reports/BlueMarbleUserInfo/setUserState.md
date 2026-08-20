# setUserState

`_ZN18BlueMarbleUserInfo12setUserStateEN19BlueMarbleUserState1TE`

`BlueMarbleUserInfo::setUserState(BlueMarbleUserState::T)`

| 类 | 地址 |
|---|---|
| `BlueMarbleUserInfo` | `0x080d6ba0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d6ba0  _ZN18BlueMarbleUserInfo12setUserStateEN19BlueMarbleUserState1TE
#           BlueMarbleUserInfo::setUserState(BlueMarbleUserState::T)
# range [0x080d6ba0, 0x080d6bad]
080d6ba0 +0x00:  push   %ebp
080d6ba1 +0x01:  mov    %esp,%ebp
080d6ba3 +0x03:  mov    0x8(%ebp),%eax
080d6ba6 +0x06:  mov    0xc(%ebp),%edx
080d6ba9 +0x09:  mov    %edx,0x4(%eax)
080d6bac +0x0c:  pop    %ebp
080d6bad +0x0d:  ret
```

## 反编译 C

```c
// BlueMarbleUserInfo::setUserState @ 0x80d6ba0

/* BlueMarbleUserInfo::setUserState(BlueMarbleUserState::T) */

void __thiscall BlueMarbleUserInfo::setUserState(BlueMarbleUserInfo *this,undefined4 param_2)

{
  *(undefined4 *)(this + 4) = param_2;
  return;
}
```
