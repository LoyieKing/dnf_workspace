# m_strEventName

`_GLOBAL__I__ZN8WongWork9CWebEvent14m_strEventNameE`

`global constructors keyed to WongWork::CWebEvent::m_strEventName`

| 类 | 地址 |
|---|---|
| `global constructors keyed to WongWork::CWebEvent` | `0x086c1c61` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c1c61  _GLOBAL__I__ZN8WongWork9CWebEvent14m_strEventNameE
#           global constructors keyed to WongWork::CWebEvent::m_strEventName
# range [0x086c1c61, 0x086c1cff]
086c1c61 +0x00:  push   %ebp
086c1c62 +0x01:  mov    %esp,%ebp
086c1c64 +0x03:  sub    $0x18,%esp
086c1c67 +0x06:  movl   $0xffff,0x4(%esp)
086c1c6f +0x0e:  movl   $0x1,(%esp)
086c1c76 +0x15:  call   086c1c21 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
086c1c7b +0x1a:  leave
086c1c7c +0x1b:  ret
086c1c7d +0x1c:  nop
086c1c7e +0x1d:  push   %ebp
086c1c7f +0x1e:  mov    %esp,%ebp
086c1c81 +0x20:  sub    $0x18,%esp
086c1c84 +0x23:  mov    0x8(%ebp),%eax
086c1c87 +0x26:  mov    (%eax),%eax
086c1c89 +0x28:  mov    %eax,(%esp)
086c1c8c +0x2b:  call   086c1c94 <+0x33>
086c1c91 +0x30:  leave
086c1c92 +0x31:  ret
086c1c93 +0x32:  nop
086c1c94 +0x33:  push   %ebp
086c1c95 +0x34:  mov    %esp,%ebp
086c1c97 +0x36:  sub    $0x28,%esp
086c1c9a +0x39:  jmp    086c1cb8 <+0x57>
086c1c9c +0x3b:  mov    0x8(%ebp),%eax
086c1c9f +0x3e:  mov    %eax,(%esp)
086c1ca2 +0x41:  call   0861bdc8 <_ZN6Stream4sizeEv>  ; Stream::size()
086c1ca7 +0x46:  add    %eax,%eax
086c1ca9 +0x48:  mov    %eax,0x4(%esp)
086c1cad +0x4c:  mov    0x8(%ebp),%eax
086c1cb0 +0x4f:  mov    %eax,(%esp)
086c1cb3 +0x52:  call   0861bee8 <_ZN6Stream6resizeEi>  ; Stream::resize(int)
086c1cb8 +0x57:  movl   $0x19,0x4(%esp)
086c1cc0 +0x5f:  mov    0x8(%ebp),%eax
086c1cc3 +0x62:  mov    %eax,(%esp)
086c1cc6 +0x65:  call   0861bf9e <_ZN6Stream9enable_inEi>  ; Stream::enable_in(int)
086c1ccb +0x6a:  xor    $0x1,%eax
086c1cce +0x6d:  test   %al,%al
086c1cd0 +0x6f:  jne    086c1c9c <+0x3b>
086c1cd2 +0x71:  mov    0x8(%ebp),%eax
086c1cd5 +0x74:  mov    0x8(%eax),%eax
086c1cd8 +0x77:  mov    %eax,%edx
086c1cda +0x79:  mov    0x8(%ebp),%eax
086c1cdd +0x7c:  mov    0xc(%eax),%eax
086c1ce0 +0x7f:  lea    (%edx,%eax,1),%eax
086c1ce3 +0x82:  mov    %eax,-0xc(%ebp)
086c1ce6 +0x85:  movl   $0x19,0x4(%esp)
086c1cee +0x8d:  mov    0x8(%ebp),%eax
086c1cf1 +0x90:  mov    %eax,(%esp)
086c1cf4 +0x93:  call   0861be0c <_ZN6Stream6in_ptrEi>  ; Stream::in_ptr(int)
086c1cf9 +0x98:  mov    -0xc(%ebp),%eax
086c1cfc +0x9b:  leave
086c1cfd +0x9c:  ret
086c1cfe +0x9d:  nop
086c1cff +0x9e:  nop
```

## 反编译 C

```c
// <global>::global @ 0x86c1c61

/* WongWork::CWebEvent::m_strEventName */

void WongWork::CWebEvent::_GLOBAL__I_m_strEventName(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
