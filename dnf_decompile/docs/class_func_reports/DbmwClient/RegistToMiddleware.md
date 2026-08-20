# RegistToMiddleware

`_ZN10DbmwClient18RegistToMiddlewareEv`

`DbmwClient::RegistToMiddleware()`

| 类 | 地址 |
|---|---|
| `DbmwClient` | `0x081206c6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081206c6  _ZN10DbmwClient18RegistToMiddlewareEv
#           DbmwClient::RegistToMiddleware()
# range [0x081206c6, 0x08120701]
081206c6 +0x00:  push   %ebp
081206c7 +0x01:  mov    %esp,%ebp
081206c9 +0x03:  sub    $0x28,%esp
081206cc +0x06:  movl   $0x0,-0xc(%ebp)
081206d3 +0x0d:  mov    -0xc(%ebp),%eax
081206d6 +0x10:  mov    %eax,0x8(%esp)
081206da +0x14:  movl   $0x0,0x4(%esp)
081206e2 +0x1c:  mov    0x8(%ebp),%eax
081206e5 +0x1f:  mov    %eax,(%esp)
081206e8 +0x22:  call   08120654 <_ZN10DbmwClient10SendHeaderEci>  ; DbmwClient::SendHeader(char, int)
081206ed +0x27:  xor    $0x1,%eax
081206f0 +0x2a:  test   %al,%al
081206f2 +0x2c:  je     081206fb <+0x35>
081206f4 +0x2e:  mov    $0x0,%eax
081206f9 +0x33:  jmp    08120700 <+0x3a>
081206fb +0x35:  mov    $0x1,%eax
08120700 +0x3a:  leave
08120701 +0x3b:  ret
```

## 反编译 C

```c
// DbmwClient::RegistToMiddleware @ 0x81206c6

/* DbmwClient::RegistToMiddleware() */

bool __thiscall DbmwClient::RegistToMiddleware(DbmwClient *this)

{
  char cVar1;
  
  cVar1 = SendHeader(this,'\0',0);
  return cVar1 == '\x01';
}
```
