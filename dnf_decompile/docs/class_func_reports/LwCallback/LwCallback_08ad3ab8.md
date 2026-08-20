# LwCallback

`_ZN10LwCallbackC1ESt8functionIFvPKcS2_iS2_EE`

`LwCallback::LwCallback(std::function<void (char const*, char const*, int, char const*)>)`

| 类 | 地址 |
|---|---|
| `LwCallback` | `0x08ad3ab8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad3ab8  _ZN10LwCallbackC1ESt8functionIFvPKcS2_iS2_EE
#           LwCallback::LwCallback(std::function<void (char const*, char const*, int, char const*)>)
# range [0x08ad3ab8, 0x08ad3b0d]
08ad3ab8 +0x00:  push   %ebp
08ad3ab9 +0x01:  mov    %esp,%ebp
08ad3abb +0x03:  push   %esi
08ad3abc +0x04:  push   %ebx
08ad3abd +0x05:  sub    $0x10,%esp
08ad3ac0 +0x08:  mov    0x8(%ebp),%eax
08ad3ac3 +0x0b:  mov    %eax,(%esp)
08ad3ac6 +0x0e:  call   08ad3990 <_ZN9LogWriterC1Ev>  ; LogWriter::LogWriter()
08ad3acb +0x13:  mov    0x8(%ebp),%eax
08ad3ace +0x16:  movl   $&_ZTV10LwCallback+0x8,(%eax)
08ad3ad4 +0x1c:  mov    0x8(%ebp),%eax
08ad3ad7 +0x1f:  lea    0x4(%eax),%edx
08ad3ada +0x22:  mov    0xc(%ebp),%eax
08ad3add +0x25:  mov    %eax,0x4(%esp)
08ad3ae1 +0x29:  mov    %edx,(%esp)
08ad3ae4 +0x2c:  call   08ad417a <_GLOBAL__I__ZN9LogWriterC2Ev+0x1c3>  ; global constructors keyed to LogWriter::LogWriter()+0x1c3
08ad3ae9 +0x31:  jmp    08ad3b06 <+0x4e>
08ad3aeb +0x33:  mov    %edx,%ebx
08ad3aed +0x35:  mov    %eax,%esi
08ad3aef +0x37:  mov    0x8(%ebp),%eax
08ad3af2 +0x3a:  mov    %eax,(%esp)
08ad3af5 +0x3d:  call   08ad399e <_ZN9LogWriterD1Ev>  ; LogWriter::~LogWriter()
08ad3afa +0x42:  mov    %esi,%eax
08ad3afc +0x44:  mov    %ebx,%edx
08ad3afe +0x46:  mov    %eax,(%esp)
08ad3b01 +0x49:  call   08ae3750 <_Unwind_Resume>
08ad3b06 +0x4e:  add    $0x10,%esp
08ad3b09 +0x51:  pop    %ebx
08ad3b0a +0x52:  pop    %esi
08ad3b0b +0x53:  pop    %ebp
08ad3b0c +0x54:  ret
08ad3b0d +0x55:  nop
```

## 反编译 C

```c
// LwCallback::LwCallback @ 0x8ad3ab8

/* LwCallback::LwCallback(std::function<void (char const*, char const*, int, char const*)>) */

void __thiscall LwCallback::LwCallback(LwCallback *this,function *param_2)

{
  LogWriter::LogWriter((LogWriter *)this);
  *(undefined ***)this = &PTR__LwCallback_08e32b38;
                    /* try { // try from 08ad3ae4 to 08ad3ae8 has its CatchHandler @ 08ad3aeb */
  std::function<void(char_const*,char_const*,int,char_const*)>::function
            ((function<void(char_const*,char_const*,int,char_const*)> *)(this + 4),param_2);
  return;
}
```
