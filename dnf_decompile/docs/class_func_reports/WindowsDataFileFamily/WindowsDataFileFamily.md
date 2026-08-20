# WindowsDataFileFamily

`_ZN21WindowsDataFileFamilyC1Ev`

`WindowsDataFileFamily::WindowsDataFileFamily()`

| 类 | 地址 |
|---|---|
| `WindowsDataFileFamily` | `0x08574f16` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08574f16  _ZN21WindowsDataFileFamilyC1Ev
#           WindowsDataFileFamily::WindowsDataFileFamily()
# range [0x08574f16, 0x08574f7b]
08574f16 +0x00:  push   %ebp
08574f17 +0x01:  mov    %esp,%ebp
08574f19 +0x03:  sub    $0x18,%esp
08574f1c +0x06:  mov    0x8(%ebp),%eax
08574f1f +0x09:  mov    %eax,(%esp)
08574f22 +0x0c:  call   08576b44 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0xd08>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0xd08
08574f27 +0x11:  mov    0x8(%ebp),%eax
08574f2a +0x14:  add    $0xc,%eax
08574f2d +0x17:  movl   $0x104,0x8(%esp)
08574f35 +0x1f:  movl   $0x0,0x4(%esp)
08574f3d +0x27:  mov    %eax,(%esp)
08574f40 +0x2a:  call   0807dcc0 <_init+0x5b8>
08574f45 +0x2f:  mov    0x8(%ebp),%eax
08574f48 +0x32:  movl   $0x0,0x110(%eax)
08574f52 +0x3c:  mov    0x8(%ebp),%eax
08574f55 +0x3f:  movl   $0x0,0x114(%eax)
08574f5f +0x49:  mov    0x8(%ebp),%eax
08574f62 +0x4c:  movl   $0x0,0x118(%eax)
08574f6c +0x56:  mov    0x8(%ebp),%eax
08574f6f +0x59:  movl   $0x0,0x11c(%eax)
08574f79 +0x63:  leave
08574f7a +0x64:  ret
08574f7b +0x65:  nop
```

## 反编译 C

```c
// WindowsDataFileFamily::WindowsDataFileFamily @ 0x8574f16

/* WindowsDataFileFamily::WindowsDataFileFamily() */

void __thiscall WindowsDataFileFamily::WindowsDataFileFamily(WindowsDataFileFamily *this)

{
  std::vector<WindowsDataFile*,std::allocator<WindowsDataFile*>>::vector
            ((vector<WindowsDataFile*,std::allocator<WindowsDataFile*>> *)this);
  memset(this + 0xc,0,0x104);
  *(undefined4 *)(this + 0x110) = 0;
  *(undefined4 *)(this + 0x114) = 0;
  *(undefined4 *)(this + 0x118) = 0;
  *(undefined4 *)(this + 0x11c) = 0;
  return;
}
```
