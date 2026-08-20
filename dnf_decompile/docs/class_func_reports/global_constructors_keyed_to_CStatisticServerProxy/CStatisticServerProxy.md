# CStatisticServerProxy

`_GLOBAL__I__ZN21CStatisticServerProxyC2ESsi`

`global constructors keyed to CStatisticServerProxy::CStatisticServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CStatisticServerProxy` | `0x08472162` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08472162  _GLOBAL__I__ZN21CStatisticServerProxyC2ESsi
#           global constructors keyed to CStatisticServerProxy::CStatisticServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int)
# range [0x08472162, 0x084721df]
08472162 +0x00:  push   %ebp
08472163 +0x01:  mov    %esp,%ebp
08472165 +0x03:  sub    $0x18,%esp
08472168 +0x06:  movl   $0xffff,0x4(%esp)
08472170 +0x0e:  movl   $0x1,(%esp)
08472177 +0x15:  call   08472122 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0847217c +0x1a:  leave
0847217d +0x1b:  ret
0847217e +0x1c:  push   %ebp
0847217f +0x1d:  mov    %esp,%ebp
08472181 +0x1f:  sub    $0x18,%esp
08472184 +0x22:  mov    0x8(%ebp),%eax
08472187 +0x25:  movl   $0x90a,0x8(%esp)
0847218f +0x2d:  movl   $0x27f3,0x4(%esp)
08472197 +0x35:  mov    %eax,(%esp)
0847219a +0x38:  call   08110b70 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82
0847219f +0x3d:  mov    0x8(%ebp),%eax
084721a2 +0x40:  add    $0xa,%eax
084721a5 +0x43:  movl   $0x100,0x8(%esp)
084721ad +0x4b:  movl   $0x0,0x4(%esp)
084721b5 +0x53:  mov    %eax,(%esp)
084721b8 +0x56:  call   0807dcc0 <_init+0x5b8>
084721bd +0x5b:  mov    0x8(%ebp),%eax
084721c0 +0x5e:  add    $0x10a,%eax
084721c5 +0x63:  movl   $0x800,0x8(%esp)
084721cd +0x6b:  movl   $0x0,0x4(%esp)
084721d5 +0x73:  mov    %eax,(%esp)
084721d8 +0x76:  call   0807dcc0 <_init+0x5b8>
084721dd +0x7b:  leave
084721de +0x7c:  ret
084721df +0x7d:  nop
```

## 反编译 C

```c
// <global>::global @ 0x8472162

/* CStatisticServerProxy::CStatisticServerProxy(std::basic_string<char, std::char_traits<char>,
   std::allocator<char> >, int) */

void CStatisticServerProxy::_GLOBAL__I_CStatisticServerProxy(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
