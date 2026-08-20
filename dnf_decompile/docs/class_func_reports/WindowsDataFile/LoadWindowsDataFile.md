# LoadWindowsDataFile

`_ZN15WindowsDataFile19LoadWindowsDataFileEPKc`

`WindowsDataFile::LoadWindowsDataFile(char const*)`

| 类 | 地址 |
|---|---|
| `WindowsDataFile` | `0x08574e80` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08574e80  _ZN15WindowsDataFile19LoadWindowsDataFileEPKc
#           WindowsDataFile::LoadWindowsDataFile(char const*)
# range [0x08574e80, 0x08574eb9]
08574e80 +0x00:  push   %ebp
08574e81 +0x01:  mov    %esp,%ebp
08574e83 +0x03:  sub    $0x18,%esp
08574e86 +0x06:  mov    0x8(%ebp),%eax
08574e89 +0x09:  add    $0x4,%eax
08574e8c +0x0c:  mov    %eax,%edx
08574e8e +0x0e:  mov    0x8(%ebp),%eax
08574e91 +0x11:  mov    0xc(%ebp),%ecx
08574e94 +0x14:  mov    %ecx,0x8(%esp)
08574e98 +0x18:  mov    %edx,0x4(%esp)
08574e9c +0x1c:  mov    %eax,(%esp)
08574e9f +0x1f:  call   08572f3a <_Z14LoadClientFilePmPPvPKc>  ; LoadClientFile(unsigned long*, void**, char const*)
08574ea4 +0x24:  xor    $0x1,%eax
08574ea7 +0x27:  test   %al,%al
08574ea9 +0x29:  je     08574eb2 <+0x32>
08574eab +0x2b:  mov    $0x0,%eax
08574eb0 +0x30:  jmp    08574eb7 <+0x37>
08574eb2 +0x32:  mov    $0x1,%eax
08574eb7 +0x37:  leave
08574eb8 +0x38:  ret
08574eb9 +0x39:  nop
```

## 反编译 C

```c
// WindowsDataFile::LoadWindowsDataFile @ 0x8574e80

/* WindowsDataFile::LoadWindowsDataFile(char const*) */

bool __thiscall WindowsDataFile::LoadWindowsDataFile(WindowsDataFile *this,char *param_1)

{
  char cVar1;
  
  cVar1 = LoadClientFile((ulong *)this,(void **)(this + 4),param_1);
  return cVar1 == '\x01';
}
```
