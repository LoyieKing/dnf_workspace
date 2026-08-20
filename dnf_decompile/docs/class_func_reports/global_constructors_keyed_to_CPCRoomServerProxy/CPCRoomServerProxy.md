# CPCRoomServerProxy

`_GLOBAL__I__ZN18CPCRoomServerProxyC2EPci`

`global constructors keyed to CPCRoomServerProxy::CPCRoomServerProxy(char*, int)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CPCRoomServerProxy` | `0x08471dec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08471dec  _GLOBAL__I__ZN18CPCRoomServerProxyC2EPci
#           global constructors keyed to CPCRoomServerProxy::CPCRoomServerProxy(char*, int)
# range [0x08471dec, 0x08471e0f]
08471dec +0x00:  push   %ebp
08471ded +0x01:  mov    %esp,%ebp
08471def +0x03:  sub    $0x18,%esp
08471df2 +0x06:  movl   $0xffff,0x4(%esp)
08471dfa +0x0e:  movl   $0x1,(%esp)
08471e01 +0x15:  call   08471dac <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
08471e06 +0x1a:  leave
08471e07 +0x1b:  ret
08471e08 +0x1c:  push   %ebp
08471e09 +0x1d:  mov    %esp,%ebp
08471e0b +0x1f:  mov    0x8(%ebp),%eax
08471e0e +0x22:  pop    %ebp
08471e0f +0x23:  ret
```

## 反编译 C

```c
// <global>::global @ 0x8471dec

/* CPCRoomServerProxy::CPCRoomServerProxy(char*, int) */

void CPCRoomServerProxy::_GLOBAL__I_CPCRoomServerProxy(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
