# GetLogTargetDB

`_GLOBAL__I__ZN8WongWork15CLogGameChannel14GetLogTargetDBEv`

`global constructors keyed to WongWork::CLogGameChannel::GetLogTargetDB()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to WongWork::CLogGameChannel` | `0x08550763` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08550763  _GLOBAL__I__ZN8WongWork15CLogGameChannel14GetLogTargetDBEv
#           global constructors keyed to WongWork::CLogGameChannel::GetLogTargetDB()
# range [0x08550763, 0x085507ff]
08550763 +0x00:  push   %ebp
08550764 +0x01:  mov    %esp,%ebp
08550766 +0x03:  sub    $0x18,%esp
08550769 +0x06:  movl   $0xffff,0x4(%esp)
08550771 +0x0e:  movl   $0x1,(%esp)
08550778 +0x15:  call   08550723 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0855077d +0x1a:  leave
0855077e +0x1b:  ret
0855077f +0x1c:  nop
08550780 +0x1d:  push   %ebp
08550781 +0x1e:  mov    %esp,%ebp
08550783 +0x20:  sub    $0x18,%esp
08550786 +0x23:  mov    0x8(%ebp),%eax
08550789 +0x26:  mov    (%eax),%eax
0855078b +0x28:  mov    %eax,(%esp)
0855078e +0x2b:  call   08550796 <+0x33>
08550793 +0x30:  leave
08550794 +0x31:  ret
08550795 +0x32:  nop
08550796 +0x33:  push   %ebp
08550797 +0x34:  mov    %esp,%ebp
08550799 +0x36:  sub    $0x28,%esp
0855079c +0x39:  jmp    085507ba <+0x57>
0855079e +0x3b:  mov    0x8(%ebp),%eax
085507a1 +0x3e:  mov    %eax,(%esp)
085507a4 +0x41:  call   0861bdc8 <_ZN6Stream4sizeEv>  ; Stream::size()
085507a9 +0x46:  add    %eax,%eax
085507ab +0x48:  mov    %eax,0x4(%esp)
085507af +0x4c:  mov    0x8(%ebp),%eax
085507b2 +0x4f:  mov    %eax,(%esp)
085507b5 +0x52:  call   0861bee8 <_ZN6Stream6resizeEi>  ; Stream::resize(int)
085507ba +0x57:  movl   $0x3b,0x4(%esp)
085507c2 +0x5f:  mov    0x8(%ebp),%eax
085507c5 +0x62:  mov    %eax,(%esp)
085507c8 +0x65:  call   0861bf9e <_ZN6Stream9enable_inEi>  ; Stream::enable_in(int)
085507cd +0x6a:  xor    $0x1,%eax
085507d0 +0x6d:  test   %al,%al
085507d2 +0x6f:  jne    0855079e <+0x3b>
085507d4 +0x71:  mov    0x8(%ebp),%eax
085507d7 +0x74:  mov    0x8(%eax),%eax
085507da +0x77:  mov    %eax,%edx
085507dc +0x79:  mov    0x8(%ebp),%eax
085507df +0x7c:  mov    0xc(%eax),%eax
085507e2 +0x7f:  lea    (%edx,%eax,1),%eax
085507e5 +0x82:  mov    %eax,-0xc(%ebp)
085507e8 +0x85:  movl   $0x3b,0x4(%esp)
085507f0 +0x8d:  mov    0x8(%ebp),%eax
085507f3 +0x90:  mov    %eax,(%esp)
085507f6 +0x93:  call   0861be0c <_ZN6Stream6in_ptrEi>  ; Stream::in_ptr(int)
085507fb +0x98:  mov    -0xc(%ebp),%eax
085507fe +0x9b:  leave
085507ff +0x9c:  ret
```

## 反编译 C

```c
// <global>::global @ 0x8550763

/* WongWork::CLogGameChannel::GetLogTargetDB() */

void WongWork::CLogGameChannel::_GLOBAL__I_GetLogTargetDB(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
