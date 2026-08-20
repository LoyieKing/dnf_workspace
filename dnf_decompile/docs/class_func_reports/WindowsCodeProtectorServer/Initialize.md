# Initialize

`_ZN26WindowsCodeProtectorServer10InitializeEv`

`WindowsCodeProtectorServer::Initialize()`

| 类 | 地址 |
|---|---|
| `WindowsCodeProtectorServer` | `0x085754cc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085754cc  _ZN26WindowsCodeProtectorServer10InitializeEv
#           WindowsCodeProtectorServer::Initialize()
# range [0x085754cc, 0x085754ff]
085754cc +0x00:  push   %ebp
085754cd +0x01:  mov    %esp,%ebp
085754cf +0x03:  mov    0x8(%ebp),%eax
085754d2 +0x06:  movl   $0x0,(%eax)
085754d8 +0x0c:  mov    0x8(%ebp),%eax
085754db +0x0f:  movl   $0x0,0x10(%eax)
085754e2 +0x16:  mov    0x8(%ebp),%eax
085754e5 +0x19:  movl   $0x0,0x14(%eax)
085754ec +0x20:  mov    0x8(%ebp),%eax
085754ef +0x23:  movb   $0x0,0x1c(%eax)
085754f3 +0x27:  mov    0x8(%ebp),%eax
085754f6 +0x2a:  movl   $0x0,0x18(%eax)
085754fd +0x31:  pop    %ebp
085754fe +0x32:  ret
085754ff +0x33:  nop
```

## 反编译 C

```c
// WindowsCodeProtectorServer::Initialize @ 0x85754cc

/* WindowsCodeProtectorServer::Initialize() */

void __thiscall WindowsCodeProtectorServer::Initialize(WindowsCodeProtectorServer *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  this[0x1c] = (WindowsCodeProtectorServer)0x0;
  *(undefined4 *)(this + 0x18) = 0;
  return;
}
```
