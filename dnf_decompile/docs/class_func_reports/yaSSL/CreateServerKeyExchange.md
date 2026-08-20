# CreateServerKeyExchange

`_ZN5yaSSL23CreateServerKeyExchangeEv`

`yaSSL::CreateServerKeyExchange()`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x08747690` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08747690  _ZN5yaSSL23CreateServerKeyExchangeEv
#           yaSSL::CreateServerKeyExchange()
# range [0x08747690, 0x087476ce]
08747690 +0x00:  push   %ebp
08747691 +0x01:  mov    %esp,%ebp
08747693 +0x03:  sub    $0x18,%esp
08747696 +0x06:  mov    %ebx,-0x8(%ebp)
08747699 +0x09:  mov    %esi,-0x4(%ebp)
0874769c +0x0c:  call   08722df8 <__i686.get_pc_thunk.bx>
087476a1 +0x11:  add    $0xc254f7,%ebx
087476a7 +0x17:  movb   $0x0,0x4(%esp)
087476ac +0x1c:  movl   $0xc,(%esp)
087476b3 +0x23:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
087476b8 +0x28:  mov    %eax,%esi
087476ba +0x2a:  mov    %eax,(%esp)
087476bd +0x2d:  call   08746f40 <_ZN5yaSSL17ServerKeyExchangeC1Ev>  ; yaSSL::ServerKeyExchange::ServerKeyExchange()
087476c2 +0x32:  mov    %esi,%eax
087476c4 +0x34:  mov    -0x8(%ebp),%ebx
087476c7 +0x37:  mov    -0x4(%ebp),%esi
087476ca +0x3a:  mov    %ebp,%esp
087476cc +0x3c:  pop    %ebp
087476cd +0x3d:  ret
087476ce +0x3e:  xchg   %ax,%ax
```

## 反编译 C

```c
// yaSSL::CreateServerKeyExchange @ 0x8747690

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CreateServerKeyExchange() */

ServerKeyExchange * yaSSL::CreateServerKeyExchange(void)

{
  ServerKeyExchange *this;
  
  this = operator_new(0xc,0);
  ServerKeyExchange::ServerKeyExchange(this);
  return this;
}
```
