# CSchoolServerProxy

`_GLOBAL__I__ZN18CSchoolServerProxyC2ESsi`

`global constructors keyed to CSchoolServerProxy::CSchoolServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CSchoolServerProxy` | `0x08471f52` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08471f52  _GLOBAL__I__ZN18CSchoolServerProxyC2ESsi
#           global constructors keyed to CSchoolServerProxy::CSchoolServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int)
# range [0x08471f52, 0x08471f6f]
08471f52 +0x00:  push   %ebp
08471f53 +0x01:  mov    %esp,%ebp
08471f55 +0x03:  sub    $0x18,%esp
08471f58 +0x06:  movl   $0xffff,0x4(%esp)
08471f60 +0x0e:  movl   $0x1,(%esp)
08471f67 +0x15:  call   08471f12 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
08471f6c +0x1a:  leave
08471f6d +0x1b:  ret
08471f6e +0x1c:  nop
08471f6f +0x1d:  nop
```

## 反编译 C

```c
// <global>::global @ 0x8471f52

/* CSchoolServerProxy::CSchoolServerProxy(std::basic_string<char, std::char_traits<char>,
   std::allocator<char> >, int) */

void CSchoolServerProxy::_GLOBAL__I_CSchoolServerProxy(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
