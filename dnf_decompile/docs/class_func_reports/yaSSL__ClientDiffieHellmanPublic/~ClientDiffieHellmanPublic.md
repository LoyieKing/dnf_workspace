# ~ClientDiffieHellmanPublic

`_ZN5yaSSL25ClientDiffieHellmanPublicD1Ev`

`yaSSL::ClientDiffieHellmanPublic::~ClientDiffieHellmanPublic()`

| 类 | 地址 |
|---|---|
| `yaSSL::ClientDiffieHellmanPublic` | `0x0874ba40` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874ba40  _ZN5yaSSL25ClientDiffieHellmanPublicD1Ev
#           yaSSL::ClientDiffieHellmanPublic::~ClientDiffieHellmanPublic()
# range [0x0874ba40, 0x0874ba8a]
0874ba40 +0x00:  push   %ebp
0874ba41 +0x01:  mov    %esp,%ebp
0874ba43 +0x03:  sub    $0x18,%esp
0874ba46 +0x06:  mov    %ebx,-0x8(%ebp)
0874ba49 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
0874ba4e +0x0e:  add    $0xc2114a,%ebx
0874ba54 +0x14:  mov    %esi,-0x4(%ebp)
0874ba57 +0x17:  mov    0x8(%ebp),%esi
0874ba5a +0x1a:  mov    -0x4dc(%ebx),%eax
0874ba60 +0x20:  add    $0x8,%eax
0874ba63 +0x23:  mov    %eax,(%esi)
0874ba65 +0x25:  movb   $0x0,0x4(%esp)
0874ba6a +0x2a:  mov    0xc(%esi),%eax
0874ba6d +0x2d:  mov    %eax,(%esp)
0874ba70 +0x30:  call   087508f0 <_ZdaPvN5yaSSL5new_tE>  ; operator delete[](void*, yaSSL::new_t)
0874ba75 +0x35:  mov    -0x18(%ebx),%eax
0874ba7b +0x3b:  add    $0x8,%eax
0874ba7e +0x3e:  mov    %eax,(%esi)
0874ba80 +0x40:  mov    -0x8(%ebp),%ebx
0874ba83 +0x43:  mov    -0x4(%ebp),%esi
0874ba86 +0x46:  mov    %ebp,%esp
0874ba88 +0x48:  pop    %ebp
0874ba89 +0x49:  ret
0874ba8a +0x4a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::ClientDiffieHellmanPublic::~ClientDiffieHellmanPublic @ 0x874ba40

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::ClientDiffieHellmanPublic::~ClientDiffieHellmanPublic() */

void __thiscall
yaSSL::ClientDiffieHellmanPublic::~ClientDiffieHellmanPublic(ClientDiffieHellmanPublic *this)

{
  *(undefined **)this = PTR_vtable_0936c6bc + 8;
  operator_delete__(*(undefined4 *)(this + 0xc),0);
  *(undefined **)this = PTR_vtable_0936cb80 + 8;
  return;
}
```
