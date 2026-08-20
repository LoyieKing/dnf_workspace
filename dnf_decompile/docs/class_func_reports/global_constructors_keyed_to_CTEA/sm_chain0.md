# sm_chain0

`_GLOBAL__I__ZN4CTEA9sm_chain0E`

`global constructors keyed to CTEA::sm_chain0`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CTEA` | `0x080c3d54` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080c3d54  _GLOBAL__I__ZN4CTEA9sm_chain0E
#           global constructors keyed to CTEA::sm_chain0
# range [0x080c3d54, 0x080c3dbf]
080c3d54 +0x00:  push   %ebp
080c3d55 +0x01:  mov    %esp,%ebp
080c3d57 +0x03:  sub    $0x18,%esp
080c3d5a +0x06:  movl   $0xffff,0x4(%esp)
080c3d62 +0x0e:  movl   $0x1,(%esp)
080c3d69 +0x15:  call   080c3d14 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
080c3d6e +0x1a:  leave
080c3d6f +0x1b:  ret
080c3d70 +0x1c:  push   %ebp
080c3d71 +0x1d:  mov    %esp,%ebp
080c3d73 +0x1f:  sub    $0x18,%esp
080c3d76 +0x22:  mov    0x8(%ebp),%eax
080c3d79 +0x25:  movl   $&_ZTV4CTEA+0x8,(%eax)
080c3d7f +0x2b:  mov    0x8(%ebp),%eax
080c3d82 +0x2e:  mov    %eax,(%esp)
080c3d85 +0x31:  call   080b42d2 <_ZN7IMethodD1Ev>  ; IMethod::~IMethod()
080c3d8a +0x36:  mov    $0x0,%eax
080c3d8f +0x3b:  test   %al,%al
080c3d91 +0x3d:  je     080c3d9e <+0x4a>
080c3d93 +0x3f:  mov    0x8(%ebp),%eax
080c3d96 +0x42:  mov    %eax,(%esp)
080c3d99 +0x45:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
080c3d9e +0x4a:  leave
080c3d9f +0x4b:  ret
080c3da0 +0x4c:  push   %ebp
080c3da1 +0x4d:  mov    %esp,%ebp
080c3da3 +0x4f:  sub    $0x18,%esp
080c3da6 +0x52:  mov    0x8(%ebp),%eax
080c3da9 +0x55:  mov    %eax,(%esp)
080c3dac +0x58:  call   080c3d70 <+0x1c>
080c3db1 +0x5d:  mov    0x8(%ebp),%eax
080c3db4 +0x60:  mov    %eax,(%esp)
080c3db7 +0x63:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
080c3dbc +0x68:  leave
080c3dbd +0x69:  ret
080c3dbe +0x6a:  nop
080c3dbf +0x6b:  nop
```

## 反编译 C

```c
// <global>::global @ 0x80c3d54

/* CTEA::sm_chain0 */

void CTEA::_GLOBAL__I_sm_chain0(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
