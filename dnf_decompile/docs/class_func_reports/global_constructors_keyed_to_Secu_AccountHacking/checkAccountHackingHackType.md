# checkAccountHackingHackType

`_GLOBAL__I__ZN19Secu_AccountHacking27checkAccountHackingHackTypeEN8WongWork13ENUM_HACKTYPEE`

`global constructors keyed to Secu_AccountHacking::checkAccountHackingHackType(WongWork::ENUM_HACKTYPE)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to Secu_AccountHacking` | `0x0827931c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0827931c  _GLOBAL__I__ZN19Secu_AccountHacking27checkAccountHackingHackTypeEN8WongWork13ENUM_HACKTYPEE
#           global constructors keyed to Secu_AccountHacking::checkAccountHackingHackType(WongWork::ENUM_HACKTYPE)
# range [0x0827931c, 0x0827940b]
0827931c +0x00:  push   %ebp
0827931d +0x01:  mov    %esp,%ebp
0827931f +0x03:  sub    $0x18,%esp
08279322 +0x06:  movl   $0xffff,0x4(%esp)
0827932a +0x0e:  movl   $0x1,(%esp)
08279331 +0x15:  call   082792dc <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
08279336 +0x1a:  leave
08279337 +0x1b:  ret
08279338 +0x1c:  push   %ebp
08279339 +0x1d:  mov    %esp,%ebp
0827933b +0x1f:  push   %ebx
0827933c +0x20:  sub    $0x14,%esp
0827933f +0x23:  mov    0x8(%ebp),%ebx
08279342 +0x26:  mov    0xc(%ebp),%eax
08279345 +0x29:  mov    %eax,0x4(%esp)
08279349 +0x2d:  mov    %ebx,(%esp)
0827934c +0x30:  call   082793ea <+0xce>
08279351 +0x35:  mov    %ebx,%eax
08279353 +0x37:  add    $0x14,%esp
08279356 +0x3a:  pop    %ebx
08279357 +0x3b:  pop    %ebp
08279358 +0x3c:  ret    $0x4
0827935b +0x3f:  nop
0827935c +0x40:  push   %ebp
0827935d +0x41:  mov    %esp,%ebp
0827935f +0x43:  push   %ebx
08279360 +0x44:  sub    $0x14,%esp
08279363 +0x47:  mov    0x8(%ebp),%ebx
08279366 +0x4a:  mov    0xc(%ebp),%eax
08279369 +0x4d:  add    $0x4,%eax
0827936c +0x50:  mov    %eax,0x4(%esp)
08279370 +0x54:  mov    %ebx,(%esp)
08279373 +0x57:  call   082793ea <+0xce>
08279378 +0x5c:  mov    %ebx,%eax
0827937a +0x5e:  add    $0x14,%esp
0827937d +0x61:  pop    %ebx
0827937e +0x62:  pop    %ebp
0827937f +0x63:  ret    $0x4
08279382 +0x66:  push   %ebp
08279383 +0x67:  mov    %esp,%ebp
08279385 +0x69:  push   %ebx
08279386 +0x6a:  sub    $0x14,%esp
08279389 +0x6d:  mov    0x8(%ebp),%eax
0827938c +0x70:  mov    %eax,(%esp)
0827938f +0x73:  call   08279402 <+0xe6>
08279394 +0x78:  mov    (%eax),%ebx
08279396 +0x7a:  mov    0xc(%ebp),%eax
08279399 +0x7d:  mov    %eax,(%esp)
0827939c +0x80:  call   08279402 <+0xe6>
082793a1 +0x85:  mov    (%eax),%eax
082793a3 +0x87:  cmp    %eax,%ebx
082793a5 +0x89:  setne  %al
082793a8 +0x8c:  add    $0x14,%esp
082793ab +0x8f:  pop    %ebx
082793ac +0x90:  pop    %ebp
082793ad +0x91:  ret
082793ae +0x92:  push   %ebp
082793af +0x93:  mov    %esp,%ebp
082793b1 +0x95:  mov    0x8(%ebp),%eax
082793b4 +0x98:  mov    (%eax),%eax
082793b6 +0x9a:  lea    0x14d1(%eax),%edx
082793bc +0xa0:  mov    0x8(%ebp),%eax
082793bf +0xa3:  mov    %edx,(%eax)
082793c1 +0xa5:  mov    0x8(%ebp),%eax
082793c4 +0xa8:  pop    %ebp
082793c5 +0xa9:  ret
082793c6 +0xaa:  push   %ebp
082793c7 +0xab:  mov    %esp,%ebp
082793c9 +0xad:  mov    0x8(%ebp),%eax
082793cc +0xb0:  mov    (%eax),%eax
082793ce +0xb2:  pop    %ebp
082793cf +0xb3:  ret
082793d0 +0xb4:  push   %ebp
082793d1 +0xb5:  mov    %esp,%ebp
082793d3 +0xb7:  sub    $0x18,%esp
082793d6 +0xba:  mov    0xc(%ebp),%eax
082793d9 +0xbd:  mov    %eax,(%esp)
082793dc +0xc0:  call   082793fa <+0xde>
082793e1 +0xc5:  mov    (%eax),%edx
082793e3 +0xc7:  mov    0x8(%ebp),%eax
082793e6 +0xca:  mov    %edx,(%eax)
082793e8 +0xcc:  leave
082793e9 +0xcd:  ret
082793ea +0xce:  push   %ebp
082793eb +0xcf:  mov    %esp,%ebp
082793ed +0xd1:  mov    0xc(%ebp),%eax
082793f0 +0xd4:  mov    (%eax),%edx
082793f2 +0xd6:  mov    0x8(%ebp),%eax
082793f5 +0xd9:  mov    %edx,(%eax)
082793f7 +0xdb:  pop    %ebp
082793f8 +0xdc:  ret
082793f9 +0xdd:  nop
082793fa +0xde:  push   %ebp
082793fb +0xdf:  mov    %esp,%ebp
082793fd +0xe1:  mov    0x8(%ebp),%eax
08279400 +0xe4:  pop    %ebp
08279401 +0xe5:  ret
08279402 +0xe6:  push   %ebp
08279403 +0xe7:  mov    %esp,%ebp
08279405 +0xe9:  mov    0x8(%ebp),%eax
08279408 +0xec:  pop    %ebp
08279409 +0xed:  ret
0827940a +0xee:  nop
0827940b +0xef:  nop
```

## 反编译 C

```c
// <global>::global @ 0x827931c

/* Secu_AccountHacking::checkAccountHackingHackType(WongWork::ENUM_HACKTYPE) */

void Secu_AccountHacking::_GLOBAL__I_checkAccountHackingHackType(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
