# LoadWindowsExeFile

`_ZN14WindowsExeFile18LoadWindowsExeFileEPKc`

`WindowsExeFile::LoadWindowsExeFile(char const*)`

| 类 | 地址 |
|---|---|
| `WindowsExeFile` | `0x085740de` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085740de  _ZN14WindowsExeFile18LoadWindowsExeFileEPKc
#           WindowsExeFile::LoadWindowsExeFile(char const*)
# range [0x085740de, 0x0857415b]
085740de +0x00:  push   %ebp
085740df +0x01:  mov    %esp,%ebp
085740e1 +0x03:  sub    $0x18,%esp
085740e4 +0x06:  mov    0x8(%ebp),%eax
085740e7 +0x09:  add    $0x4,%eax
085740ea +0x0c:  mov    %eax,%edx
085740ec +0x0e:  mov    0x8(%ebp),%eax
085740ef +0x11:  mov    0xc(%ebp),%ecx
085740f2 +0x14:  mov    %ecx,0x8(%esp)
085740f6 +0x18:  mov    %edx,0x4(%esp)
085740fa +0x1c:  mov    %eax,(%esp)
085740fd +0x1f:  call   08572f3a <_Z14LoadClientFilePmPPvPKc>  ; LoadClientFile(unsigned long*, void**, char const*)
08574102 +0x24:  xor    $0x1,%eax
08574105 +0x27:  test   %al,%al
08574107 +0x29:  je     08574110 <+0x32>
08574109 +0x2b:  mov    $0x0,%eax
0857410e +0x30:  jmp    0857415a <+0x7c>
08574110 +0x32:  mov    0x8(%ebp),%eax
08574113 +0x35:  mov    %eax,(%esp)
08574116 +0x38:  call   085738f6 <_ZN14WindowsExeFile12ReadPeHeaderEv>  ; WindowsExeFile::ReadPeHeader()
0857411b +0x3d:  xor    $0x1,%eax
0857411e +0x40:  test   %al,%al
08574120 +0x42:  je     0857414a <+0x6c>
08574122 +0x44:  mov    0x8(%ebp),%eax
08574125 +0x47:  mov    0x4(%eax),%eax
08574128 +0x4a:  mov    %eax,(%esp)
0857412b +0x4d:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08574130 +0x52:  mov    0x8(%ebp),%eax
08574133 +0x55:  movl   $0x0,0x4(%eax)
0857413a +0x5c:  mov    0x8(%ebp),%eax
0857413d +0x5f:  movl   $0x0,(%eax)
08574143 +0x65:  mov    $0x0,%eax
08574148 +0x6a:  jmp    0857415a <+0x7c>
0857414a +0x6c:  mov    0x8(%ebp),%eax
0857414d +0x6f:  mov    %eax,(%esp)
08574150 +0x72:  call   0857415c <_ZN14WindowsExeFile4SortEv>  ; WindowsExeFile::Sort()
08574155 +0x77:  mov    $0x1,%eax
0857415a +0x7c:  leave
0857415b +0x7d:  ret
```

## 反编译 C

```c
// WindowsExeFile::LoadWindowsExeFile @ 0x85740de

/* WindowsExeFile::LoadWindowsExeFile(char const*) */

undefined4 __thiscall WindowsExeFile::LoadWindowsExeFile(WindowsExeFile *this,char *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = LoadClientFile((ulong *)this,(void **)(this + 4),param_1);
  if (cVar1 == '\x01') {
    cVar1 = ReadPeHeader(this);
    if (cVar1 == '\x01') {
      Sort(this);
      uVar2 = 1;
    }
    else {
      operator_delete(*(void **)(this + 4));
      *(undefined4 *)(this + 4) = 0;
      *(undefined4 *)this = 0;
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
