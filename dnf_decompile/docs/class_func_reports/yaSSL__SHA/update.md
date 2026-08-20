# update

`_ZN5yaSSL3SHA6updateEPKhj`

`yaSSL::SHA::update(unsigned char const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `yaSSL::SHA` | `0x08799980` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08799980  _ZN5yaSSL3SHA6updateEPKhj
#           yaSSL::SHA::update(unsigned char const*, unsigned int)
# range [0x08799980, 0x087999ba]
08799980 +0x00:  push   %ebp
08799981 +0x01:  mov    %esp,%ebp
08799983 +0x03:  push   %ebx
08799984 +0x04:  sub    $0x14,%esp
08799987 +0x07:  mov    0x10(%ebp),%eax
0879998a +0x0a:  call   08722df8 <__i686.get_pc_thunk.bx>
0879998f +0x0f:  add    $0xbd3209,%ebx
08799995 +0x15:  mov    %eax,0x8(%esp)
08799999 +0x19:  mov    0xc(%ebp),%eax
0879999c +0x1c:  mov    %eax,0x4(%esp)
087999a0 +0x20:  mov    0x8(%ebp),%eax
087999a3 +0x23:  mov    0x4(%eax),%eax
087999a6 +0x26:  mov    %eax,(%esp)
087999a9 +0x29:  call   0876fc60 <_ZN8TaoCrypt3SHA6UpdateEPKhj>  ; TaoCrypt::SHA::Update(unsigned char const*, unsigned int)
087999ae +0x2e:  add    $0x14,%esp
087999b1 +0x31:  pop    %ebx
087999b2 +0x32:  pop    %ebp
087999b3 +0x33:  ret
087999b4 +0x34:  lea    0x0(%esi),%esi
087999ba +0x3a:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// yaSSL::SHA::update @ 0x8799980

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SHA::update(unsigned char const*, unsigned int) */

void __thiscall yaSSL::SHA::update(SHA *this,uchar *param_1,uint param_2)

{
  TaoCrypt::SHA::Update(*(SHA **)(this + 4),param_1,param_2);
  return;
}
```
