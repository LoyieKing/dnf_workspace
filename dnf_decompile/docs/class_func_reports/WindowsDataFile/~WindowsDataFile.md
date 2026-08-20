# ~WindowsDataFile

`_ZN15WindowsDataFileD1Ev`

`WindowsDataFile::~WindowsDataFile()`

| 类 | 地址 |
|---|---|
| `WindowsDataFile` | `0x08574e56` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08574e56  _ZN15WindowsDataFileD1Ev
#           WindowsDataFile::~WindowsDataFile()
# range [0x08574e56, 0x08574e7f]
08574e56 +0x00:  push   %ebp
08574e57 +0x01:  mov    %esp,%ebp
08574e59 +0x03:  sub    $0x18,%esp
08574e5c +0x06:  mov    0x8(%ebp),%eax
08574e5f +0x09:  mov    0x4(%eax),%eax
08574e62 +0x0c:  test   %eax,%eax
08574e64 +0x0e:  je     08574e7e <+0x28>
08574e66 +0x10:  mov    0x8(%ebp),%eax
08574e69 +0x13:  mov    0x4(%eax),%eax
08574e6c +0x16:  mov    %eax,(%esp)
08574e6f +0x19:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08574e74 +0x1e:  mov    0x8(%ebp),%eax
08574e77 +0x21:  movl   $0x0,0x4(%eax)
08574e7e +0x28:  leave
08574e7f +0x29:  ret
```

## 反编译 C

```c
// WindowsDataFile::~WindowsDataFile @ 0x8574e56

/* WindowsDataFile::~WindowsDataFile() */

void __thiscall WindowsDataFile::~WindowsDataFile(WindowsDataFile *this)

{
  if (*(int *)(this + 4) != 0) {
    operator_delete(*(void **)(this + 4));
    *(undefined4 *)(this + 4) = 0;
  }
  return;
}
```
