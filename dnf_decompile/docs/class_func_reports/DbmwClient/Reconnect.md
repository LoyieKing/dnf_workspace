# Reconnect

`_ZN10DbmwClient9ReconnectEv`

`DbmwClient::Reconnect()`

| 类 | 地址 |
|---|---|
| `DbmwClient` | `0x08121156` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08121156  _ZN10DbmwClient9ReconnectEv
#           DbmwClient::Reconnect()
# range [0x08121156, 0x081211c3]
08121156 +0x00:  push   %ebp
08121157 +0x01:  mov    %esp,%ebp
08121159 +0x03:  sub    $0x28,%esp
0812115c +0x06:  mov    0x8(%ebp),%eax
0812115f +0x09:  mov    0x4(%eax),%eax
08121162 +0x0c:  lea    0x1(%eax),%edx
08121165 +0x0f:  mov    0x8(%ebp),%eax
08121168 +0x12:  mov    %edx,0x4(%eax)
0812116b +0x15:  mov    0x8(%ebp),%eax
0812116e +0x18:  mov    %eax,(%esp)
08121171 +0x1b:  call   081209fa <_ZN10DbmwClient7ConnectEv>  ; DbmwClient::Connect()
08121176 +0x20:  test   %eax,%eax
08121178 +0x22:  setne  %al
0812117b +0x25:  test   %al,%al
0812117d +0x27:  je     081211bc <+0x66>
0812117f +0x29:  mov    0x8(%ebp),%eax
08121182 +0x2c:  add    $0x34,%eax
08121185 +0x2f:  mov    %eax,0x14(%esp)
08121189 +0x33:  movl   $"AccountDBMW Reconnect() Error!! Query(%s)",0x10(%esp)
08121191 +0x3b:  movl   $0x2cd,0xc(%esp)
08121199 +0x43:  movl   $&_ZZN10DbmwClient9ReconnectEvE12__FUNCTION__,0x8(%esp)
081211a1 +0x4b:  movl   $"localchina/DbmwClient.cpp",0x4(%esp)
081211a9 +0x53:  movl   $0x1,(%esp)
081211b0 +0x5a:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
081211b5 +0x5f:  mov    $0x0,%eax
081211ba +0x64:  jmp    081211c1 <+0x6b>
081211bc +0x66:  mov    $0x1,%eax
081211c1 +0x6b:  leave
081211c2 +0x6c:  ret
081211c3 +0x6d:  nop
```

## 反编译 C

```c
// DbmwClient::Reconnect @ 0x8121156

/* DbmwClient::Reconnect() */

bool __thiscall DbmwClient::Reconnect(DbmwClient *this)

{
  int iVar1;
  
  *(int *)(this + 4) = *(int *)(this + 4) + 1;
  iVar1 = Connect(this);
  if (iVar1 != 0) {
    LogManager::logFormat
              (1,"localchina/DbmwClient.cpp","Reconnect",0x2cd,
               "AccountDBMW Reconnect() Error!! Query(%s)",this + 0x34);
  }
  return iVar1 == 0;
}
```
