# update

`_ZN5yaSSL3RMD6updateEPKhj`

`yaSSL::RMD::update(unsigned char const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `yaSSL::RMD` | `0x08799530` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08799530  _ZN5yaSSL3RMD6updateEPKhj
#           yaSSL::RMD::update(unsigned char const*, unsigned int)
# range [0x08799530, 0x0879956a]
08799530 +0x00:  push   %ebp
08799531 +0x01:  mov    %esp,%ebp
08799533 +0x03:  push   %ebx
08799534 +0x04:  sub    $0x14,%esp
08799537 +0x07:  mov    0x10(%ebp),%eax
0879953a +0x0a:  call   08722df8 <__i686.get_pc_thunk.bx>
0879953f +0x0f:  add    $0xbd3659,%ebx
08799545 +0x15:  mov    %eax,0x8(%esp)
08799549 +0x19:  mov    0xc(%ebp),%eax
0879954c +0x1c:  mov    %eax,0x4(%esp)
08799550 +0x20:  mov    0x8(%ebp),%eax
08799553 +0x23:  mov    0x4(%eax),%eax
08799556 +0x26:  mov    %eax,(%esp)
08799559 +0x29:  call   087ab3e0 <_ZN8TaoCrypt9RIPEMD1606UpdateEPKhj>  ; TaoCrypt::RIPEMD160::Update(unsigned char const*, unsigned int)
0879955e +0x2e:  add    $0x14,%esp
08799561 +0x31:  pop    %ebx
08799562 +0x32:  pop    %ebp
08799563 +0x33:  ret
08799564 +0x34:  lea    0x0(%esi),%esi
0879956a +0x3a:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// yaSSL::RMD::update @ 0x8799530

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::RMD::update(unsigned char const*, unsigned int) */

void __thiscall yaSSL::RMD::update(RMD *this,uchar *param_1,uint param_2)

{
  TaoCrypt::RIPEMD160::Update(*(RIPEMD160 **)(this + 4),param_1,param_2);
  return;
}
```
