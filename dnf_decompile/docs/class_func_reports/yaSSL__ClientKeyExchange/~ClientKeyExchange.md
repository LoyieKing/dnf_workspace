# ~ClientKeyExchange

`_ZN5yaSSL17ClientKeyExchangeD1Ev`

`yaSSL::ClientKeyExchange::~ClientKeyExchange()`

| 类 | 地址 |
|---|---|
| `yaSSL::ClientKeyExchange` | `0x08748600` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08748600  _ZN5yaSSL17ClientKeyExchangeD1Ev
#           yaSSL::ClientKeyExchange::~ClientKeyExchange()
# range [0x08748600, 0x0874865c]
08748600 +0x00:  push   %ebp
08748601 +0x01:  mov    %esp,%ebp
08748603 +0x03:  sub    $0x28,%esp
08748606 +0x06:  mov    %ebx,-0xc(%ebp)
08748609 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
0874860e +0x0e:  add    $0xc2458a,%ebx
08748614 +0x14:  mov    %edi,-0x4(%ebp)
08748617 +0x17:  mov    0x8(%ebp),%edi
0874861a +0x1a:  mov    %esi,-0x8(%ebp)
0874861d +0x1d:  mov    0x8(%edi),%esi
08748620 +0x20:  mov    -0x38(%ebx),%eax
08748626 +0x26:  add    $0x8,%eax
08748629 +0x29:  test   %esi,%esi
0874862b +0x2b:  mov    %eax,(%edi)
0874862d +0x2d:  je     08748636 <+0x36>
0874862f +0x2f:  mov    (%esi),%eax
08748631 +0x31:  mov    %esi,(%esp)
08748634 +0x34:  call   *(%eax)
08748636 +0x36:  mov    %esi,(%esp)
08748639 +0x39:  movb   $0x0,0x4(%esp)
0874863e +0x3e:  call   08750820 <_ZdlPvN5yaSSL5new_tE>  ; operator delete(void*, yaSSL::new_t)
08748643 +0x43:  mov    -0x5b4(%ebx),%eax
08748649 +0x49:  add    $0x8,%eax
0874864c +0x4c:  mov    %eax,(%edi)
0874864e +0x4e:  mov    -0xc(%ebp),%ebx
08748651 +0x51:  mov    -0x8(%ebp),%esi
08748654 +0x54:  mov    -0x4(%ebp),%edi
08748657 +0x57:  mov    %ebp,%esp
08748659 +0x59:  pop    %ebp
0874865a +0x5a:  ret
0874865b +0x5b:  nop
0874865c +0x5c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::ClientKeyExchange::~ClientKeyExchange @ 0x8748600

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::ClientKeyExchange::~ClientKeyExchange() */

void __thiscall yaSSL::ClientKeyExchange::~ClientKeyExchange(ClientKeyExchange *this)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(this + 8);
  *(undefined **)this = PTR_vtable_0936cb60 + 8;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1);
  }
  operator_delete(puVar1,0);
  *(undefined **)this = PTR_vtable_0936c5e4 + 8;
  return;
}
```
