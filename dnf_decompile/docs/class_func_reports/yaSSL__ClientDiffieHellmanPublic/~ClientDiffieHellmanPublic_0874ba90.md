# ~ClientDiffieHellmanPublic

`_ZN5yaSSL25ClientDiffieHellmanPublicD0Ev`

`yaSSL::ClientDiffieHellmanPublic::~ClientDiffieHellmanPublic()`

| 类 | 地址 |
|---|---|
| `yaSSL::ClientDiffieHellmanPublic` | `0x0874ba90` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874ba90  _ZN5yaSSL25ClientDiffieHellmanPublicD0Ev
#           yaSSL::ClientDiffieHellmanPublic::~ClientDiffieHellmanPublic()
# range [0x0874ba90, 0x0874baba]
0874ba90 +0x00:  push   %ebp
0874ba91 +0x01:  mov    %esp,%ebp
0874ba93 +0x03:  push   %ebx
0874ba94 +0x04:  call   08722df8 <__i686.get_pc_thunk.bx>
0874ba99 +0x09:  add    $0xc210ff,%ebx
0874ba9f +0x0f:  sub    $0x14,%esp
0874baa2 +0x12:  mov    0x8(%ebp),%eax
0874baa5 +0x15:  mov    %eax,(%esp)
0874baa8 +0x18:  call   0874ba40 <_ZN5yaSSL25ClientDiffieHellmanPublicD1Ev>  ; yaSSL::ClientDiffieHellmanPublic::~ClientDiffieHellmanPublic()
0874baad +0x1d:  add    $0x14,%esp
0874bab0 +0x20:  pop    %ebx
0874bab1 +0x21:  pop    %ebp
0874bab2 +0x22:  ret
0874bab3 +0x23:  nop
0874bab4 +0x24:  lea    0x0(%esi),%esi
0874baba +0x2a:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// yaSSL::ClientDiffieHellmanPublic::~ClientDiffieHellmanPublic @ 0x874ba90

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::ClientDiffieHellmanPublic::~ClientDiffieHellmanPublic() */

void __thiscall
yaSSL::ClientDiffieHellmanPublic::~ClientDiffieHellmanPublic(ClientDiffieHellmanPublic *this)

{
  ~ClientDiffieHellmanPublic(this);
  return;
}
```
