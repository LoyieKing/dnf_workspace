# SendHeader

`_ZN10DbmwClient10SendHeaderEci`

`DbmwClient::SendHeader(char, int)`

| 类 | 地址 |
|---|---|
| `DbmwClient` | `0x08120654` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08120654  _ZN10DbmwClient10SendHeaderEci
#           DbmwClient::SendHeader(char, int)
# range [0x08120654, 0x081206c5]
08120654 +0x00:  push   %ebp
08120655 +0x01:  mov    %esp,%ebp
08120657 +0x03:  sub    $0x48,%esp
0812065a +0x06:  mov    0xc(%ebp),%eax
0812065d +0x09:  mov    %al,-0x2c(%ebp)
08120660 +0x0c:  movb   $0x15,-0x1e(%ebp)
08120664 +0x10:  movzbl -0x2c(%ebp),%eax
08120668 +0x14:  mov    %al,-0x1d(%ebp)
0812066b +0x17:  mov    0x10(%ebp),%eax
0812066e +0x1a:  add    $0x12,%eax
08120671 +0x1d:  mov    %eax,-0x1c(%ebp)
08120674 +0x20:  movl   $0x0,-0x18(%ebp)
0812067b +0x27:  movl   $0x0,-0x14(%ebp)
08120682 +0x2e:  movl   $0x0,-0x10(%ebp)
08120689 +0x35:  mov    0x8(%ebp),%eax
0812068c +0x38:  mov    0x8(%eax),%eax
0812068f +0x3b:  movl   $0x0,0xc(%esp)
08120697 +0x43:  movl   $0x12,0x8(%esp)
0812069f +0x4b:  lea    -0x1e(%ebp),%edx
081206a2 +0x4e:  mov    %edx,0x4(%esp)
081206a6 +0x52:  mov    %eax,(%esp)
081206a9 +0x55:  call   0807db40 <_init+0x438>
081206ae +0x5a:  mov    %eax,-0xc(%ebp)
081206b1 +0x5d:  cmpl   $0x0,-0xc(%ebp)
081206b5 +0x61:  jg     081206be <+0x6a>
081206b7 +0x63:  mov    $0x0,%eax
081206bc +0x68:  jmp    081206c3 <+0x6f>
081206be +0x6a:  mov    $0x1,%eax
081206c3 +0x6f:  leave
081206c4 +0x70:  ret
081206c5 +0x71:  nop
```

## 反编译 C

```c
// DbmwClient::SendHeader @ 0x8120654

/* DbmwClient::SendHeader(char, int) */

bool __thiscall DbmwClient::SendHeader(DbmwClient *this,char param_1,int param_2)

{
  ssize_t sVar1;
  undefined1 local_22;
  char local_21;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_21 = param_1;
  local_22 = 0x15;
  local_20 = param_2 + 0x12;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  sVar1 = ::send(*(int *)(this + 8),&local_22,0x12,0);
  return 0 < sVar1;
}
```
