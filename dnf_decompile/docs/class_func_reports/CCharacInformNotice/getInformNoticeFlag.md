# getInformNoticeFlag

`_ZN19CCharacInformNotice19getInformNoticeFlagEi`

`CCharacInformNotice::getInformNoticeFlag(int)`

| 类 | 地址 |
|---|---|
| `CCharacInformNotice` | `0x080e48ec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080e48ec  _ZN19CCharacInformNotice19getInformNoticeFlagEi
#           CCharacInformNotice::getInformNoticeFlag(int)
# range [0x080e48ec, 0x080e48fb]
080e48ec +0x00:  push   %ebp
080e48ed +0x01:  mov    %esp,%ebp
080e48ef +0x03:  mov    0xc(%ebp),%eax
080e48f2 +0x06:  mov    0x8(%ebp),%edx
080e48f5 +0x09:  movzbl 0x5(%edx,%eax,1),%eax
080e48fa +0x0e:  pop    %ebp
080e48fb +0x0f:  ret
```

## 反编译 C

```c
// CCharacInformNotice::getInformNoticeFlag @ 0x80e48ec

/* CCharacInformNotice::getInformNoticeFlag(int) */

CCharacInformNotice __thiscall
CCharacInformNotice::getInformNoticeFlag(CCharacInformNotice *this,int param_1)

{
  return this[param_1 + 5];
}
```
