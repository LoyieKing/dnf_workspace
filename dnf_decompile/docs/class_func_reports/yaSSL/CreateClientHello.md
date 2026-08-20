# CreateClientHello

`_ZN5yaSSL17CreateClientHelloEv`

`yaSSL::CreateClientHello()`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x08747aa0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08747aa0  _ZN5yaSSL17CreateClientHelloEv
#           yaSSL::CreateClientHello()
# range [0x08747aa0, 0x08747ade]
08747aa0 +0x00:  push   %ebp
08747aa1 +0x01:  mov    %esp,%ebp
08747aa3 +0x03:  sub    $0x18,%esp
08747aa6 +0x06:  mov    %ebx,-0x8(%ebp)
08747aa9 +0x09:  mov    %esi,-0x4(%ebp)
08747aac +0x0c:  call   08722df8 <__i686.get_pc_thunk.bx>
08747ab1 +0x11:  add    $0xc250e7,%ebx
08747ab7 +0x17:  movb   $0x0,0x4(%esp)
08747abc +0x1c:  movl   $0xd4,(%esp)
08747ac3 +0x23:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
08747ac8 +0x28:  mov    %eax,%esi
08747aca +0x2a:  mov    %eax,(%esp)
08747acd +0x2d:  call   08747a30 <_ZN5yaSSL11ClientHelloC1Ev>  ; yaSSL::ClientHello::ClientHello()
08747ad2 +0x32:  mov    %esi,%eax
08747ad4 +0x34:  mov    -0x8(%ebp),%ebx
08747ad7 +0x37:  mov    -0x4(%ebp),%esi
08747ada +0x3a:  mov    %ebp,%esp
08747adc +0x3c:  pop    %ebp
08747add +0x3d:  ret
08747ade +0x3e:  xchg   %ax,%ax
```

## 反编译 C

```c
// yaSSL::CreateClientHello @ 0x8747aa0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CreateClientHello() */

ClientHello * yaSSL::CreateClientHello(void)

{
  ClientHello *this;
  
  this = operator_new(0xd4,0);
  ClientHello::ClientHello(this);
  return this;
}
```
