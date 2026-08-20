# build

`_ZN5yaSSL17ClientKeyExchange5buildERNS_3SSLE`

`yaSSL::ClientKeyExchange::build(yaSSL::SSL&)`

| 类 | 地址 |
|---|---|
| `yaSSL::ClientKeyExchange` | `0x087470e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087470e0  _ZN5yaSSL17ClientKeyExchange5buildERNS_3SSLE
#           yaSSL::ClientKeyExchange::build(yaSSL::SSL&)
# range [0x087470e0, 0x0874712e]
087470e0 +0x00:  push   %ebp
087470e1 +0x01:  mov    %esp,%ebp
087470e3 +0x03:  sub    $0x18,%esp
087470e6 +0x06:  mov    %esi,-0x4(%ebp)
087470e9 +0x09:  mov    0x8(%ebp),%esi
087470ec +0x0c:  mov    %ebx,-0x8(%ebp)
087470ef +0x0f:  mov    0xc(%ebp),%ecx
087470f2 +0x12:  call   08722df8 <__i686.get_pc_thunk.bx>
087470f7 +0x17:  add    $0xc25aa1,%ebx
087470fd +0x1d:  mov    0x8(%esi),%eax
08747100 +0x20:  mov    (%eax),%edx
08747102 +0x22:  mov    %ecx,0x4(%esp)
08747106 +0x26:  mov    %eax,(%esp)
08747109 +0x29:  call   *0x8(%edx)
0874710c +0x2c:  mov    0x8(%esi),%eax
0874710f +0x2f:  mov    (%eax),%edx
08747111 +0x31:  mov    %eax,(%esp)
08747114 +0x34:  call   *0x10(%edx)
08747117 +0x37:  mov    %esi,(%esp)
0874711a +0x3a:  mov    %eax,0x4(%esp)
0874711e +0x3e:  call   08746ab0 <_ZN5yaSSL13HandShakeBase10set_lengthEi>  ; yaSSL::HandShakeBase::set_length(int)
08747123 +0x43:  mov    -0x8(%ebp),%ebx
08747126 +0x46:  mov    -0x4(%ebp),%esi
08747129 +0x49:  mov    %ebp,%esp
0874712b +0x4b:  pop    %ebp
0874712c +0x4c:  ret
0874712d +0x4d:  nop
0874712e +0x4e:  xchg   %ax,%ax
```

## 反编译 C

```c
// yaSSL::ClientKeyExchange::build @ 0x87470e0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::ClientKeyExchange::build(yaSSL::SSL&) */

void __thiscall yaSSL::ClientKeyExchange::build(ClientKeyExchange *this,SSL *param_1)

{
  int iVar1;
  
  (**(code **)(**(int **)(this + 8) + 8))(*(int **)(this + 8),param_1);
  iVar1 = (**(code **)(**(int **)(this + 8) + 0x10))(*(int **)(this + 8));
  HandShakeBase::set_length((HandShakeBase *)this,iVar1);
  return;
}
```
