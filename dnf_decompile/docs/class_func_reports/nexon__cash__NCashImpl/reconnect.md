# reconnect

`_ZN5nexon4cash9NCashImpl9reconnectEv`

`nexon::cash::NCashImpl::reconnect()`

| 类 | 地址 |
|---|---|
| `nexon::cash::NCashImpl` | `0x081ad080` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ad080  _ZN5nexon4cash9NCashImpl9reconnectEv
#           nexon::cash::NCashImpl::reconnect()
# range [0x081ad080, 0x081ad0e5]
081ad080 +0x00:  push   %ebp
081ad081 +0x01:  mov    %esp,%ebp
081ad083 +0x03:  sub    $0x18,%esp
081ad086 +0x06:  mov    0x8(%ebp),%eax
081ad089 +0x09:  movzbl 0xc(%eax),%eax
081ad08d +0x0d:  xor    $0x1,%eax
081ad090 +0x10:  test   %al,%al
081ad092 +0x12:  je     081ad0dc <+0x5c>
081ad094 +0x14:  mov    0x8(%ebp),%eax
081ad097 +0x17:  add    $0x20,%eax
081ad09a +0x1a:  mov    %eax,(%esp)
081ad09d +0x1d:  call   081af80c <_ZN5nexon4cash9TCPSocket5closeEv>  ; nexon::cash::TCPSocket::close()
081ad0a2 +0x22:  mov    0x8(%ebp),%eax
081ad0a5 +0x25:  add    $0x20,%eax
081ad0a8 +0x28:  mov    %eax,(%esp)
081ad0ab +0x2b:  call   081af532 <_ZN5nexon4cash9TCPSocket4openEv>  ; nexon::cash::TCPSocket::open()
081ad0b0 +0x30:  mov    0x8(%ebp),%eax
081ad0b3 +0x33:  movzwl 0x1e(%eax),%eax
081ad0b7 +0x37:  movzwl %ax,%eax
081ad0ba +0x3a:  mov    0x8(%ebp),%edx
081ad0bd +0x3d:  lea    0xd(%edx),%ecx
081ad0c0 +0x40:  mov    0x8(%ebp),%edx
081ad0c3 +0x43:  add    $0x20,%edx
081ad0c6 +0x46:  mov    %eax,0x8(%esp)
081ad0ca +0x4a:  mov    %ecx,0x4(%esp)
081ad0ce +0x4e:  mov    %edx,(%esp)
081ad0d1 +0x51:  call   081af9ea <_ZN5nexon4cash9TCPSocket7connectEPKct>  ; nexon::cash::TCPSocket::connect(char const*, unsigned short)
081ad0d6 +0x56:  mov    0x8(%ebp),%edx
081ad0d9 +0x59:  mov    %al,0xc(%edx)
081ad0dc +0x5c:  mov    0x8(%ebp),%eax
081ad0df +0x5f:  movzbl 0xc(%eax),%eax
081ad0e3 +0x63:  leave
081ad0e4 +0x64:  ret
081ad0e5 +0x65:  nop
```

## 反编译 C

```c
// nexon::cash::NCashImpl::reconnect @ 0x81ad080

/* nexon::cash::NCashImpl::reconnect() */

NCashImpl __thiscall nexon::cash::NCashImpl::reconnect(NCashImpl *this)

{
  NCashImpl NVar1;
  
  if (this[0xc] != (NCashImpl)0x1) {
    TCPSocket::close((TCPSocket *)(this + 0x20));
    TCPSocket::open((TCPSocket *)(this + 0x20));
    NVar1 = (NCashImpl)
            TCPSocket::connect((TCPSocket *)(this + 0x20),(char *)(this + 0xd),
                               *(ushort *)(this + 0x1e));
    this[0xc] = NVar1;
  }
  return this[0xc];
}
```
