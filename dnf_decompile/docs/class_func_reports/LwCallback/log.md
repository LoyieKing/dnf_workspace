# log

`_ZN10LwCallback3logEPKcS1_iS1_`

`LwCallback::log(char const*, char const*, int, char const*)`

| 类 | 地址 |
|---|---|
| `LwCallback` | `0x08ad3b56` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad3b56  _ZN10LwCallback3logEPKcS1_iS1_
#           LwCallback::log(char const*, char const*, int, char const*)
# range [0x08ad3b56, 0x08ad3b9f]
08ad3b56 +0x00:  push   %ebp
08ad3b57 +0x01:  mov    %esp,%ebp
08ad3b59 +0x03:  sub    $0x28,%esp
08ad3b5c +0x06:  mov    0x8(%ebp),%eax
08ad3b5f +0x09:  add    $0x4,%eax
08ad3b62 +0x0c:  mov    %eax,(%esp)
08ad3b65 +0x0f:  call   08ad4240 <_GLOBAL__I__ZN9LogWriterC2Ev+0x289>  ; global constructors keyed to LogWriter::LogWriter()+0x289
08ad3b6a +0x14:  cmp    $0xffffffff,%eax
08ad3b6d +0x17:  setne  %al
08ad3b70 +0x1a:  test   %al,%al
08ad3b72 +0x1c:  je     08ad3b9e <+0x48>
08ad3b74 +0x1e:  mov    0x8(%ebp),%eax
08ad3b77 +0x21:  lea    0x4(%eax),%edx
08ad3b7a +0x24:  mov    0x18(%ebp),%eax
08ad3b7d +0x27:  mov    %eax,0x10(%esp)
08ad3b81 +0x2b:  mov    0x14(%ebp),%eax
08ad3b84 +0x2e:  mov    %eax,0xc(%esp)
08ad3b88 +0x32:  mov    0x10(%ebp),%eax
08ad3b8b +0x35:  mov    %eax,0x8(%esp)
08ad3b8f +0x39:  mov    0xc(%ebp),%eax
08ad3b92 +0x3c:  mov    %eax,0x4(%esp)
08ad3b96 +0x40:  mov    %edx,(%esp)
08ad3b99 +0x43:  call   08ad42ce <_GLOBAL__I__ZN9LogWriterC2Ev+0x317>  ; global constructors keyed to LogWriter::LogWriter()+0x317
08ad3b9e +0x48:  leave
08ad3b9f +0x49:  ret
```

## 反编译 C

```c
// LwCallback::log @ 0x8ad3b56

/* LwCallback::log(char const*, char const*, int, char const*) */

void __thiscall
LwCallback::log(LwCallback *this,char *param_1,char *param_2,int param_3,char *param_4)

{
  function<void *pfVar1;
  
  pfVar1 = std::function::operator_cast_to__((function *)(this + 4));
  if (pfVar1 != (function<void *)0xffffffff) {
    std::function<void(char_const*,char_const*,int,char_const*)>::operator()
              ((function<void(char_const*,char_const*,int,char_const*)> *)(this + 4),param_1,param_2
               ,param_3,param_4);
  }
  return;
}
```
