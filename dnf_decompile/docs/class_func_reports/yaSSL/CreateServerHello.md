# CreateServerHello

`_ZN5yaSSL17CreateServerHelloEv`

`yaSSL::CreateServerHello()`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x08747bf0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08747bf0  _ZN5yaSSL17CreateServerHelloEv
#           yaSSL::CreateServerHello()
# range [0x08747bf0, 0x08747c2e]
08747bf0 +0x00:  push   %ebp
08747bf1 +0x01:  mov    %esp,%ebp
08747bf3 +0x03:  sub    $0x18,%esp
08747bf6 +0x06:  mov    %ebx,-0x8(%ebp)
08747bf9 +0x09:  mov    %esi,-0x4(%ebp)
08747bfc +0x0c:  call   08722df8 <__i686.get_pc_thunk.bx>
08747c01 +0x11:  add    $0xc24f97,%ebx
08747c07 +0x17:  movb   $0x0,0x4(%esp)
08747c0c +0x1c:  movl   $0x54,(%esp)
08747c13 +0x23:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
08747c18 +0x28:  mov    %eax,%esi
08747c1a +0x2a:  mov    %eax,(%esp)
08747c1d +0x2d:  call   08747b60 <_ZN5yaSSL11ServerHelloC1Ev>  ; yaSSL::ServerHello::ServerHello()
08747c22 +0x32:  mov    %esi,%eax
08747c24 +0x34:  mov    -0x8(%ebp),%ebx
08747c27 +0x37:  mov    -0x4(%ebp),%esi
08747c2a +0x3a:  mov    %ebp,%esp
08747c2c +0x3c:  pop    %ebp
08747c2d +0x3d:  ret
08747c2e +0x3e:  xchg   %ax,%ax
```

## 反编译 C

```c
// yaSSL::CreateServerHello @ 0x8747bf0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CreateServerHello() */

ServerHello * yaSSL::CreateServerHello(void)

{
  ServerHello *this;
  
  this = operator_new(0x54,0);
  ServerHello::ServerHello(this);
  return this;
}
```
