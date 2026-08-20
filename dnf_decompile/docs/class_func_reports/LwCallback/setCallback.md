# setCallback

`_ZN10LwCallback11setCallbackESt8functionIFvPKcS2_iS2_EE`

`LwCallback::setCallback(std::function<void (char const*, char const*, int, char const*)>)`

| 类 | 地址 |
|---|---|
| `LwCallback` | `0x08ad3b38` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad3b38  _ZN10LwCallback11setCallbackESt8functionIFvPKcS2_iS2_EE
#           LwCallback::setCallback(std::function<void (char const*, char const*, int, char const*)>)
# range [0x08ad3b38, 0x08ad3b55]
08ad3b38 +0x00:  push   %ebp
08ad3b39 +0x01:  mov    %esp,%ebp
08ad3b3b +0x03:  sub    $0x18,%esp
08ad3b3e +0x06:  mov    0x8(%ebp),%eax
08ad3b41 +0x09:  lea    0x4(%eax),%edx
08ad3b44 +0x0c:  mov    0xc(%ebp),%eax
08ad3b47 +0x0f:  mov    %eax,0x4(%esp)
08ad3b4b +0x13:  mov    %edx,(%esp)
08ad3b4e +0x16:  call   08ad4206 <_GLOBAL__I__ZN9LogWriterC2Ev+0x24f>  ; global constructors keyed to LogWriter::LogWriter()+0x24f
08ad3b53 +0x1b:  leave
08ad3b54 +0x1c:  ret
08ad3b55 +0x1d:  nop
```

## 反编译 C

```c
// LwCallback::setCallback @ 0x8ad3b38

/* LwCallback::setCallback(std::function<void (char const*, char const*, int, char const*)>) */

void __thiscall LwCallback::setCallback(LwCallback *this,function *param_2)

{
  std::function<void(char_const*,char_const*,int,char_const*)>::operator=
            ((function<void(char_const*,char_const*,int,char_const*)> *)(this + 4),param_2);
  return;
}
```
