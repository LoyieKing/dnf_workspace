# WindowsDataFile

`_ZN15WindowsDataFileC1Ev`

`WindowsDataFile::WindowsDataFile()`

| 类 | 地址 |
|---|---|
| `WindowsDataFile` | `0x08574e3e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08574e3e  _ZN15WindowsDataFileC1Ev
#           WindowsDataFile::WindowsDataFile()
# range [0x08574e3e, 0x08574e55]
08574e3e +0x00:  push   %ebp
08574e3f +0x01:  mov    %esp,%ebp
08574e41 +0x03:  mov    0x8(%ebp),%eax
08574e44 +0x06:  movl   $0x0,(%eax)
08574e4a +0x0c:  mov    0x8(%ebp),%eax
08574e4d +0x0f:  movl   $0x0,0x4(%eax)
08574e54 +0x16:  pop    %ebp
08574e55 +0x17:  ret
```

## 反编译 C

```c
// WindowsDataFile::WindowsDataFile @ 0x8574e3e

/* WindowsDataFile::WindowsDataFile() */

void __thiscall WindowsDataFile::WindowsDataFile(WindowsDataFile *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  return;
}
```
