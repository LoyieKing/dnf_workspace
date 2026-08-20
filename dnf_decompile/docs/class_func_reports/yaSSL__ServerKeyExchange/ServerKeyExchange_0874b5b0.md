# ServerKeyExchange

`_ZN5yaSSL17ServerKeyExchangeC1ERNS_3SSLE`

`yaSSL::ServerKeyExchange::ServerKeyExchange(yaSSL::SSL&)`

| 类 | 地址 |
|---|---|
| `yaSSL::ServerKeyExchange` | `0x0874b5b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874b5b0  _ZN5yaSSL17ServerKeyExchangeC1ERNS_3SSLE
#           yaSSL::ServerKeyExchange::ServerKeyExchange(yaSSL::SSL&)
# range [0x0874b5b0, 0x0874b5e9]
0874b5b0 +0x00:  push   %ebp
0874b5b1 +0x01:  mov    %esp,%ebp
0874b5b3 +0x03:  push   %ebx
0874b5b4 +0x04:  call   08722df8 <__i686.get_pc_thunk.bx>
0874b5b9 +0x09:  add    $0xc215df,%ebx
0874b5bf +0x0f:  sub    $0x14,%esp
0874b5c2 +0x12:  mov    0x8(%ebp),%eax
0874b5c5 +0x15:  mov    -0x440(%ebx),%edx
0874b5cb +0x1b:  add    $0x8,%edx
0874b5ce +0x1e:  mov    %edx,(%eax)
0874b5d0 +0x20:  mov    0xc(%ebp),%edx
0874b5d3 +0x23:  mov    %eax,(%esp)
0874b5d6 +0x26:  mov    %edx,0x4(%esp)
0874b5da +0x2a:  call   0874b520 <_ZN5yaSSL17ServerKeyExchange9createKeyERNS_3SSLE>  ; yaSSL::ServerKeyExchange::createKey(yaSSL::SSL&)
0874b5df +0x2f:  add    $0x14,%esp
0874b5e2 +0x32:  pop    %ebx
0874b5e3 +0x33:  pop    %ebp
0874b5e4 +0x34:  ret
0874b5e5 +0x35:  nop
0874b5e6 +0x36:  lea    0x0(%esi),%esi
0874b5e9 +0x39:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::ServerKeyExchange::ServerKeyExchange @ 0x874b5b0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::ServerKeyExchange::ServerKeyExchange(yaSSL::SSL&) */

void __thiscall yaSSL::ServerKeyExchange::ServerKeyExchange(ServerKeyExchange *this,SSL *param_1)

{
  *(undefined **)this = PTR_vtable_0936c758 + 8;
  createKey(this,param_1);
  return;
}
```
