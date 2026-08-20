# openSSLRSA_

`_GLOBAL__I__ZN6Taiwan15AuthGarenaToken11openSSLRSA_E`

`global constructors keyed to Taiwan::AuthGarenaToken::openSSLRSA_`

| 类 | 地址 |
|---|---|
| `global constructors keyed to Taiwan::AuthGarenaToken` | `0x081735d8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081735d8  _GLOBAL__I__ZN6Taiwan15AuthGarenaToken11openSSLRSA_E
#           global constructors keyed to Taiwan::AuthGarenaToken::openSSLRSA_
# range [0x081735d8, 0x081735f3]
081735d8 +0x00:  push   %ebp
081735d9 +0x01:  mov    %esp,%ebp
081735db +0x03:  sub    $0x18,%esp
081735de +0x06:  movl   $0xffff,0x4(%esp)
081735e6 +0x0e:  movl   $0x1,(%esp)
081735ed +0x15:  call   0817356f <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
081735f2 +0x1a:  leave
081735f3 +0x1b:  ret
```

## 反编译 C

```c
// <global>::global @ 0x81735d8

/* Taiwan::AuthGarenaToken::openSSLRSA_ */

void Taiwan::AuthGarenaToken::_GLOBAL__I_openSSLRSA_(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
