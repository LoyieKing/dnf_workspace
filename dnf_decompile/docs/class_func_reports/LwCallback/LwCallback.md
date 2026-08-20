# LwCallback

`_ZN10LwCallbackC1Ev`

`LwCallback::LwCallback()`

| 类 | 地址 |
|---|---|
| `LwCallback` | `0x08ad3a6a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad3a6a  _ZN10LwCallbackC1Ev
#           LwCallback::LwCallback()
# range [0x08ad3a6a, 0x08ad3ab7]
08ad3a6a +0x00:  push   %ebp
08ad3a6b +0x01:  mov    %esp,%ebp
08ad3a6d +0x03:  push   %esi
08ad3a6e +0x04:  push   %ebx
08ad3a6f +0x05:  sub    $0x10,%esp
08ad3a72 +0x08:  mov    0x8(%ebp),%eax
08ad3a75 +0x0b:  mov    %eax,(%esp)
08ad3a78 +0x0e:  call   08ad3990 <_ZN9LogWriterC1Ev>  ; LogWriter::LogWriter()
08ad3a7d +0x13:  mov    0x8(%ebp),%eax
08ad3a80 +0x16:  movl   $&_ZTV10LwCallback+0x8,(%eax)
08ad3a86 +0x1c:  mov    0x8(%ebp),%eax
08ad3a89 +0x1f:  add    $0x4,%eax
08ad3a8c +0x22:  mov    %eax,(%esp)
08ad3a8f +0x25:  call   08ad415c <_GLOBAL__I__ZN9LogWriterC2Ev+0x1a5>  ; global constructors keyed to LogWriter::LogWriter()+0x1a5
08ad3a94 +0x2a:  jmp    08ad3ab1 <+0x47>
08ad3a96 +0x2c:  mov    %edx,%ebx
08ad3a98 +0x2e:  mov    %eax,%esi
08ad3a9a +0x30:  mov    0x8(%ebp),%eax
08ad3a9d +0x33:  mov    %eax,(%esp)
08ad3aa0 +0x36:  call   08ad399e <_ZN9LogWriterD1Ev>  ; LogWriter::~LogWriter()
08ad3aa5 +0x3b:  mov    %esi,%eax
08ad3aa7 +0x3d:  mov    %ebx,%edx
08ad3aa9 +0x3f:  mov    %eax,(%esp)
08ad3aac +0x42:  call   08ae3750 <_Unwind_Resume>
08ad3ab1 +0x47:  add    $0x10,%esp
08ad3ab4 +0x4a:  pop    %ebx
08ad3ab5 +0x4b:  pop    %esi
08ad3ab6 +0x4c:  pop    %ebp
08ad3ab7 +0x4d:  ret
```

## 反编译 C

```c
// LwCallback::LwCallback @ 0x8ad3a6a

/* LwCallback::LwCallback() */

void __thiscall LwCallback::LwCallback(LwCallback *this)

{
  LogWriter::LogWriter((LogWriter *)this);
  *(undefined ***)this = &PTR__LwCallback_08e32b38;
                    /* try { // try from 08ad3a8f to 08ad3a93 has its CatchHandler @ 08ad3a96 */
  std::function<void(char_const*,char_const*,int,char_const*)>::function
            ((function<void(char_const*,char_const*,int,char_const*)> *)(this + 4));
  return;
}
```
