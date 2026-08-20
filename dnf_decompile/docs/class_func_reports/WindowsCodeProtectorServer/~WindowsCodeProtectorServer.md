# ~WindowsCodeProtectorServer

`_ZN26WindowsCodeProtectorServerD1Ev`

`WindowsCodeProtectorServer::~WindowsCodeProtectorServer()`

| 类 | 地址 |
|---|---|
| `WindowsCodeProtectorServer` | `0x08575484` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08575484  _ZN26WindowsCodeProtectorServerD1Ev
#           WindowsCodeProtectorServer::~WindowsCodeProtectorServer()
# range [0x08575484, 0x085754cb]
08575484 +0x00:  push   %ebp
08575485 +0x01:  mov    %esp,%ebp
08575487 +0x03:  push   %esi
08575488 +0x04:  push   %ebx
08575489 +0x05:  sub    $0x10,%esp
0857548c +0x08:  mov    0x8(%ebp),%eax
0857548f +0x0b:  mov    %eax,(%esp)
08575492 +0x0e:  call   08575500 <_ZN26WindowsCodeProtectorServer7DestroyEv>  ; WindowsCodeProtectorServer::Destroy()
08575497 +0x13:  jmp    085754b7 <+0x33>
08575499 +0x15:  mov    %edx,%ebx
0857549b +0x17:  mov    %eax,%esi
0857549d +0x19:  mov    0x8(%ebp),%eax
085754a0 +0x1c:  add    $0x4,%eax
085754a3 +0x1f:  mov    %eax,(%esp)
085754a6 +0x22:  call   08576d42 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0xf06>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0xf06
085754ab +0x27:  mov    %esi,%eax
085754ad +0x29:  mov    %ebx,%edx
085754af +0x2b:  mov    %eax,(%esp)
085754b2 +0x2e:  call   08ae3750 <_Unwind_Resume>
085754b7 +0x33:  mov    0x8(%ebp),%eax
085754ba +0x36:  add    $0x4,%eax
085754bd +0x39:  mov    %eax,(%esp)
085754c0 +0x3c:  call   08576d42 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0xf06>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0xf06
085754c5 +0x41:  add    $0x10,%esp
085754c8 +0x44:  pop    %ebx
085754c9 +0x45:  pop    %esi
085754ca +0x46:  pop    %ebp
085754cb +0x47:  ret
```

## 反编译 C

```c
// WindowsCodeProtectorServer::~WindowsCodeProtectorServer @ 0x8575484

/* WindowsCodeProtectorServer::~WindowsCodeProtectorServer() */

void __thiscall
WindowsCodeProtectorServer::~WindowsCodeProtectorServer(WindowsCodeProtectorServer *this)

{
                    /* try { // try from 08575492 to 08575496 has its CatchHandler @ 08575499 */
  Destroy(this);
  std::vector<WindowsDataFileFamily*,std::allocator<WindowsDataFileFamily*>>::~vector
            ((vector<WindowsDataFileFamily*,std::allocator<WindowsDataFileFamily*>> *)(this + 4));
  return;
}
```
