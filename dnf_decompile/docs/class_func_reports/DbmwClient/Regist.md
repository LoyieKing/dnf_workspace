# Regist

`_ZN10DbmwClient6RegistEv`

`DbmwClient::Regist()`

| 类 | 地址 |
|---|---|
| `DbmwClient` | `0x081209ba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081209ba  _ZN10DbmwClient6RegistEv
#           DbmwClient::Regist()
# range [0x081209ba, 0x081209f9]
081209ba +0x00:  push   %ebp
081209bb +0x01:  mov    %esp,%ebp
081209bd +0x03:  sub    $0x18,%esp
081209c0 +0x06:  mov    0x8(%ebp),%eax
081209c3 +0x09:  mov    %eax,(%esp)
081209c6 +0x0c:  call   081206c6 <_ZN10DbmwClient18RegistToMiddlewareEv>  ; DbmwClient::RegistToMiddleware()
081209cb +0x11:  xor    $0x1,%eax
081209ce +0x14:  test   %al,%al
081209d0 +0x16:  je     081209d9 <+0x1f>
081209d2 +0x18:  mov    $0x0,%eax
081209d7 +0x1d:  jmp    081209f7 <+0x3d>
081209d9 +0x1f:  mov    0x8(%ebp),%eax
081209dc +0x22:  mov    %eax,(%esp)
081209df +0x25:  call   08120702 <_ZN10DbmwClient16ReceiveRegistAckEv>  ; DbmwClient::ReceiveRegistAck()
081209e4 +0x2a:  xor    $0x1,%eax
081209e7 +0x2d:  test   %al,%al
081209e9 +0x2f:  je     081209f2 <+0x38>
081209eb +0x31:  mov    $0x0,%eax
081209f0 +0x36:  jmp    081209f7 <+0x3d>
081209f2 +0x38:  mov    $0x1,%eax
081209f7 +0x3d:  leave
081209f8 +0x3e:  ret
081209f9 +0x3f:  nop
```

## 反编译 C

```c
// DbmwClient::Regist @ 0x81209ba

/* DbmwClient::Regist() */

undefined4 __thiscall DbmwClient::Regist(DbmwClient *this)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = RegistToMiddleware(this);
  if (cVar1 == '\x01') {
    cVar1 = ReceiveRegistAck(this);
    if (cVar1 == '\x01') {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
