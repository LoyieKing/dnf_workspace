# CreateDHServerKEA

`_ZN5yaSSL17CreateDHServerKEAEv`

`yaSSL::CreateDHServerKEA()`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x08747510` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08747510  _ZN5yaSSL17CreateDHServerKEAEv
#           yaSSL::CreateDHServerKEA()
# range [0x08747510, 0x0874754e]
08747510 +0x00:  push   %ebp
08747511 +0x01:  mov    %esp,%ebp
08747513 +0x03:  sub    $0x18,%esp
08747516 +0x06:  mov    %ebx,-0x8(%ebp)
08747519 +0x09:  mov    %esi,-0x4(%ebp)
0874751c +0x0c:  call   08722df8 <__i686.get_pc_thunk.bx>
08747521 +0x11:  add    $0xc25677,%ebx
08747527 +0x17:  movb   $0x0,0x4(%esp)
0874752c +0x1c:  movl   $0x28,(%esp)
08747533 +0x23:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
08747538 +0x28:  mov    %eax,%esi
0874753a +0x2a:  mov    %eax,(%esp)
0874753d +0x2d:  call   08746da0 <_ZN5yaSSL9DH_ServerC1Ev>  ; yaSSL::DH_Server::DH_Server()
08747542 +0x32:  mov    %esi,%eax
08747544 +0x34:  mov    -0x8(%ebp),%ebx
08747547 +0x37:  mov    -0x4(%ebp),%esi
0874754a +0x3a:  mov    %ebp,%esp
0874754c +0x3c:  pop    %ebp
0874754d +0x3d:  ret
0874754e +0x3e:  xchg   %ax,%ax
```

## 反编译 C

```c
// yaSSL::CreateDHServerKEA @ 0x8747510

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CreateDHServerKEA() */

DH_Server * yaSSL::CreateDHServerKEA(void)

{
  DH_Server *this;
  
  this = operator_new(0x28,0);
  DH_Server::DH_Server(this);
  return this;
}
```
