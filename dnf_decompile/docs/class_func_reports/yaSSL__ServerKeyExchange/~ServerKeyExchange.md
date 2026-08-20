# ~ServerKeyExchange

`_ZN5yaSSL17ServerKeyExchangeD1Ev`

`yaSSL::ServerKeyExchange::~ServerKeyExchange()`

| 类 | 地址 |
|---|---|
| `yaSSL::ServerKeyExchange` | `0x08748690` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08748690  _ZN5yaSSL17ServerKeyExchangeD1Ev
#           yaSSL::ServerKeyExchange::~ServerKeyExchange()
# range [0x08748690, 0x087486ec]
08748690 +0x00:  push   %ebp
08748691 +0x01:  mov    %esp,%ebp
08748693 +0x03:  sub    $0x28,%esp
08748696 +0x06:  mov    %ebx,-0xc(%ebp)
08748699 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
0874869e +0x0e:  add    $0xc244fa,%ebx
087486a4 +0x14:  mov    %edi,-0x4(%ebp)
087486a7 +0x17:  mov    0x8(%ebp),%edi
087486aa +0x1a:  mov    %esi,-0x8(%ebp)
087486ad +0x1d:  mov    0x8(%edi),%esi
087486b0 +0x20:  mov    -0x440(%ebx),%eax
087486b6 +0x26:  add    $0x8,%eax
087486b9 +0x29:  test   %esi,%esi
087486bb +0x2b:  mov    %eax,(%edi)
087486bd +0x2d:  je     087486c6 <+0x36>
087486bf +0x2f:  mov    (%esi),%eax
087486c1 +0x31:  mov    %esi,(%esp)
087486c4 +0x34:  call   *(%eax)
087486c6 +0x36:  mov    %esi,(%esp)
087486c9 +0x39:  movb   $0x0,0x4(%esp)
087486ce +0x3e:  call   08750820 <_ZdlPvN5yaSSL5new_tE>  ; operator delete(void*, yaSSL::new_t)
087486d3 +0x43:  mov    -0x5b4(%ebx),%eax
087486d9 +0x49:  add    $0x8,%eax
087486dc +0x4c:  mov    %eax,(%edi)
087486de +0x4e:  mov    -0xc(%ebp),%ebx
087486e1 +0x51:  mov    -0x8(%ebp),%esi
087486e4 +0x54:  mov    -0x4(%ebp),%edi
087486e7 +0x57:  mov    %ebp,%esp
087486e9 +0x59:  pop    %ebp
087486ea +0x5a:  ret
087486eb +0x5b:  nop
087486ec +0x5c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::ServerKeyExchange::~ServerKeyExchange @ 0x8748690

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::ServerKeyExchange::~ServerKeyExchange() */

void __thiscall yaSSL::ServerKeyExchange::~ServerKeyExchange(ServerKeyExchange *this)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(this + 8);
  *(undefined **)this = PTR_vtable_0936c758 + 8;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1);
  }
  operator_delete(puVar1,0);
  *(undefined **)this = PTR_vtable_0936c5e4 + 8;
  return;
}
```
