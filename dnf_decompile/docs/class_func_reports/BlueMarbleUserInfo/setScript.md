# setScript

`_ZN18BlueMarbleUserInfo9setScriptEP23BlueMarbleScriptManager`

`BlueMarbleUserInfo::setScript(BlueMarbleScriptManager*)`

| 类 | 地址 |
|---|---|
| `BlueMarbleUserInfo` | `0x080d6b92` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d6b92  _ZN18BlueMarbleUserInfo9setScriptEP23BlueMarbleScriptManager
#           BlueMarbleUserInfo::setScript(BlueMarbleScriptManager*)
# range [0x080d6b92, 0x080d6b9f]
080d6b92 +0x00:  push   %ebp
080d6b93 +0x01:  mov    %esp,%ebp
080d6b95 +0x03:  mov    0x8(%ebp),%eax
080d6b98 +0x06:  mov    0xc(%ebp),%edx
080d6b9b +0x09:  mov    %edx,0x24(%eax)
080d6b9e +0x0c:  pop    %ebp
080d6b9f +0x0d:  ret
```

## 反编译 C

```c
// BlueMarbleUserInfo::setScript @ 0x80d6b92

/* BlueMarbleUserInfo::setScript(BlueMarbleScriptManager*) */

void __thiscall
BlueMarbleUserInfo::setScript(BlueMarbleUserInfo *this,BlueMarbleScriptManager *param_1)

{
  *(BlueMarbleScriptManager **)(this + 0x24) = param_1;
  return;
}
```
