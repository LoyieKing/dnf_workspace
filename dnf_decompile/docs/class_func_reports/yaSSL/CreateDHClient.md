# CreateDHClient

`_ZN5yaSSL14CreateDHClientEv`

`yaSSL::CreateDHClient()`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x08747450` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08747450  _ZN5yaSSL14CreateDHClientEv
#           yaSSL::CreateDHClient()
# range [0x08747450, 0x0874748e]
08747450 +0x00:  push   %ebp
08747451 +0x01:  mov    %esp,%ebp
08747453 +0x03:  sub    $0x18,%esp
08747456 +0x06:  mov    %ebx,-0x8(%ebp)
08747459 +0x09:  mov    %esi,-0x4(%ebp)
0874745c +0x0c:  call   08722df8 <__i686.get_pc_thunk.bx>
08747461 +0x11:  add    $0xc25737,%ebx
08747467 +0x17:  movb   $0x0,0x4(%esp)
0874746c +0x1c:  movl   $0x10,(%esp)
08747473 +0x23:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
08747478 +0x28:  mov    %eax,%esi
0874747a +0x2a:  mov    %eax,(%esp)
0874747d +0x2d:  call   087469c0 <_ZN5yaSSL25ClientDiffieHellmanPublicC1Ev>  ; yaSSL::ClientDiffieHellmanPublic::ClientDiffieHellmanPublic()
08747482 +0x32:  mov    %esi,%eax
08747484 +0x34:  mov    -0x8(%ebp),%ebx
08747487 +0x37:  mov    -0x4(%ebp),%esi
0874748a +0x3a:  mov    %ebp,%esp
0874748c +0x3c:  pop    %ebp
0874748d +0x3d:  ret
0874748e +0x3e:  xchg   %ax,%ax
```

## 反编译 C

```c
// yaSSL::CreateDHClient @ 0x8747450

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CreateDHClient() */

ClientDiffieHellmanPublic * yaSSL::CreateDHClient(void)

{
  ClientDiffieHellmanPublic *this;
  
  this = operator_new(0x10,0);
  ClientDiffieHellmanPublic::ClientDiffieHellmanPublic(this);
  return this;
}
```
