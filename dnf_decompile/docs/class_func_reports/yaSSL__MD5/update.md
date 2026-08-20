# update

`_ZN5yaSSL3MD56updateEPKhj`

`yaSSL::MD5::update(unsigned char const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `yaSSL::MD5` | `0x08799c50` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08799c50  _ZN5yaSSL3MD56updateEPKhj
#           yaSSL::MD5::update(unsigned char const*, unsigned int)
# range [0x08799c50, 0x08799c8a]
08799c50 +0x00:  push   %ebp
08799c51 +0x01:  mov    %esp,%ebp
08799c53 +0x03:  push   %ebx
08799c54 +0x04:  sub    $0x14,%esp
08799c57 +0x07:  mov    0x10(%ebp),%eax
08799c5a +0x0a:  call   08722df8 <__i686.get_pc_thunk.bx>
08799c5f +0x0f:  add    $0xbd2f39,%ebx
08799c65 +0x15:  mov    %eax,0x8(%esp)
08799c69 +0x19:  mov    0xc(%ebp),%eax
08799c6c +0x1c:  mov    %eax,0x4(%esp)
08799c70 +0x20:  mov    0x8(%ebp),%eax
08799c73 +0x23:  mov    0x4(%eax),%eax
08799c76 +0x26:  mov    %eax,(%esp)
08799c79 +0x29:  call   08767100 <_ZN8TaoCrypt3MD56UpdateEPKhj>  ; TaoCrypt::MD5::Update(unsigned char const*, unsigned int)
08799c7e +0x2e:  add    $0x14,%esp
08799c81 +0x31:  pop    %ebx
08799c82 +0x32:  pop    %ebp
08799c83 +0x33:  ret
08799c84 +0x34:  lea    0x0(%esi),%esi
08799c8a +0x3a:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// yaSSL::MD5::update @ 0x8799c50

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::MD5::update(unsigned char const*, unsigned int) */

void __thiscall yaSSL::MD5::update(MD5 *this,uchar *param_1,uint param_2)

{
  TaoCrypt::MD5::Update(*(MD5 **)(this + 4),param_1,param_2);
  return;
}
```
