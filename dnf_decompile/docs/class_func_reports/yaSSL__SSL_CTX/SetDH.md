# SetDH

`_ZN5yaSSL7SSL_CTX5SetDHERKNS_2DHE`

`yaSSL::SSL_CTX::SetDH(yaSSL::DH const&)`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL_CTX` | `0x0874f600` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874f600  _ZN5yaSSL7SSL_CTX5SetDHERKNS_2DHE
#           yaSSL::SSL_CTX::SetDH(yaSSL::DH const&)
# range [0x0874f600, 0x0874f669]
0874f600 +0x00:  push   %ebp
0874f601 +0x01:  mov    %esp,%ebp
0874f603 +0x03:  sub    $0x28,%esp
0874f606 +0x06:  mov    %edi,-0x4(%ebp)
0874f609 +0x09:  mov    0xc(%ebp),%edi
0874f60c +0x0c:  mov    %ebx,-0xc(%ebp)
0874f60f +0x0f:  call   08722df8 <__i686.get_pc_thunk.bx>
0874f614 +0x14:  add    $0xc1d584,%ebx
0874f61a +0x1a:  mov    %esi,-0x8(%ebp)
0874f61d +0x1d:  mov    0x8(%ebp),%esi
0874f620 +0x20:  mov    (%edi),%eax
0874f622 +0x22:  mov    %eax,0x4(%esp)
0874f626 +0x26:  lea    0xa0(%esi),%eax
0874f62c +0x2c:  mov    %eax,(%esp)
0874f62f +0x2f:  call   08798f50 <_ZN5yaSSL7IntegeraSERKS0_>  ; yaSSL::Integer::operator=(yaSSL::Integer const&)
0874f634 +0x34:  mov    0x4(%edi),%eax
0874f637 +0x37:  mov    %eax,0x4(%esp)
0874f63b +0x3b:  lea    0xa4(%esi),%eax
0874f641 +0x41:  mov    %eax,(%esp)
0874f644 +0x44:  call   08798f50 <_ZN5yaSSL7IntegeraSERKS0_>  ; yaSSL::Integer::operator=(yaSSL::Integer const&)
0874f649 +0x49:  mov    $0x1,%eax
0874f64e +0x4e:  movb   $0x1,0xa8(%esi)
0874f655 +0x55:  mov    -0xc(%ebp),%ebx
0874f658 +0x58:  mov    -0x8(%ebp),%esi
0874f65b +0x5b:  mov    -0x4(%ebp),%edi
0874f65e +0x5e:  mov    %ebp,%esp
0874f660 +0x60:  pop    %ebp
0874f661 +0x61:  ret
0874f662 +0x62:  lea    0x0(%esi,%eiz,1),%esi
0874f669 +0x69:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::SSL_CTX::SetDH @ 0x874f600

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL_CTX::SetDH(yaSSL::DH const&) */

undefined4 __thiscall yaSSL::SSL_CTX::SetDH(SSL_CTX *this,DH *param_1)

{
  Integer::operator=((Integer *)(this + 0xa0),*(Integer **)param_1);
  Integer::operator=((Integer *)(this + 0xa4),*(Integer **)(param_1 + 4));
  this[0xa8] = (SSL_CTX)0x1;
  return 1;
}
```
