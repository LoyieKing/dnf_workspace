# getConvertHotKey

`_ZN12TutorialData16getConvertHotKeyEi`

`TutorialData::getConvertHotKey(int)`

| 类 | 地址 |
|---|---|
| `TutorialData` | `0x08ab885c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ab885c  _ZN12TutorialData16getConvertHotKeyEi
#           TutorialData::getConvertHotKey(int)
# range [0x08ab885c, 0x08ab8887]
08ab885c +0x00:  push   %ebp
08ab885d +0x01:  mov    %esp,%ebp
08ab885f +0x03:  cmpl   $0x0,0xc(%ebp)
08ab8863 +0x07:  js     08ab886b <+0xf>
08ab8865 +0x09:  cmpl   $0xc,0xc(%ebp)
08ab8869 +0x0d:  jle    08ab8872 <+0x16>
08ab886b +0x0f:  mov    $0xffffffff,%eax
08ab8870 +0x14:  jmp    08ab8885 <+0x29>
08ab8872 +0x16:  cmpl   $0x5,0xc(%ebp)
08ab8876 +0x1a:  jg     08ab887d <+0x21>
08ab8878 +0x1c:  mov    0xc(%ebp),%eax
08ab887b +0x1f:  jmp    08ab8885 <+0x29>
08ab887d +0x21:  mov    0xc(%ebp),%eax
08ab8880 +0x24:  add    $0xc0,%eax
08ab8885 +0x29:  pop    %ebp
08ab8886 +0x2a:  ret
08ab8887 +0x2b:  nop
```

## 反编译 C

```c
// TutorialData::getConvertHotKey @ 0x8ab885c

/* TutorialData::getConvertHotKey(int) */

int __thiscall TutorialData::getConvertHotKey(TutorialData *this,int param_1)

{
  if ((param_1 < 0) || (0xc < param_1)) {
    param_1 = -1;
  }
  else if (5 < param_1) {
    param_1 = param_1 + 0xc0;
  }
  return param_1;
}
```
