# sslFactory

`_ZN5yaSSL10sslFactoryC1Ev`

`yaSSL::sslFactory::sslFactory()`

| 类 | 地址 |
|---|---|
| `yaSSL::sslFactory` | `0x08750780` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08750780  _ZN5yaSSL10sslFactoryC1Ev
#           yaSSL::sslFactory::sslFactory()
# range [0x08750780, 0x08750819]
08750780 +0x00:  push   %ebp
08750781 +0x01:  mov    %esp,%ebp
08750783 +0x03:  push   %esi
08750784 +0x04:  push   %ebx
08750785 +0x05:  call   08722df8 <__i686.get_pc_thunk.bx>
0875078a +0x0a:  add    $0xc1c40e,%ebx
08750790 +0x10:  sub    $0x10,%esp
08750793 +0x13:  mov    0x8(%ebp),%esi
08750796 +0x16:  movl   $0x0,(%esi)
0875079c +0x1c:  movl   $0x0,0x4(%esi)
087507a3 +0x23:  movl   $0x0,0x8(%esi)
087507aa +0x2a:  mov    %esi,(%esp)
087507ad +0x2d:  call   0874c5a0 <_ZN5yaSSL18InitMessageFactoryERNS_7FactoryINS_7MessageEiPFPS1_vEEE>  ; yaSSL::InitMessageFactory(yaSSL::Factory<yaSSL::Message, int, yaSSL::Message* (*)()>&)
087507b2 +0x32:  lea    0xc(%esi),%eax
087507b5 +0x35:  movl   $0x0,0xc(%esi)
087507bc +0x3c:  movl   $0x0,0x10(%esi)
087507c3 +0x43:  movl   $0x0,0x14(%esi)
087507ca +0x4a:  mov    %eax,(%esp)
087507cd +0x4d:  call   0874d120 <_ZN5yaSSL20InitHandShakeFactoryERNS_7FactoryINS_13HandShakeBaseEiPFPS1_vEEE>  ; yaSSL::InitHandShakeFactory(yaSSL::Factory<yaSSL::HandShakeBase, int, yaSSL::HandShakeBase* (*)()>&)
087507d2 +0x52:  lea    0x18(%esi),%eax
087507d5 +0x55:  movl   $0x0,0x18(%esi)
087507dc +0x5c:  movl   $0x0,0x1c(%esi)
087507e3 +0x63:  movl   $0x0,0x20(%esi)
087507ea +0x6a:  mov    %eax,(%esp)
087507ed +0x6d:  call   0874c020 <_ZN5yaSSL20InitServerKeyFactoryERNS_7FactoryINS_13ServerKeyBaseEiPFPS1_vEEE>  ; yaSSL::InitServerKeyFactory(yaSSL::Factory<yaSSL::ServerKeyBase, int, yaSSL::ServerKeyBase* (*)()>&)
087507f2 +0x72:  movl   $0x0,0x24(%esi)
087507f9 +0x79:  movl   $0x0,0x28(%esi)
08750800 +0x80:  movl   $0x0,0x2c(%esi)
08750807 +0x87:  add    $0x24,%esi
0875080a +0x8a:  mov    %esi,(%esp)
0875080d +0x8d:  call   0874c2e0 <_ZN5yaSSL20InitClientKeyFactoryERNS_7FactoryINS_13ClientKeyBaseEiPFPS1_vEEE>  ; yaSSL::InitClientKeyFactory(yaSSL::Factory<yaSSL::ClientKeyBase, int, yaSSL::ClientKeyBase* (*)()>&)
08750812 +0x92:  add    $0x10,%esp
08750815 +0x95:  pop    %ebx
08750816 +0x96:  pop    %esi
08750817 +0x97:  pop    %ebp
08750818 +0x98:  ret
08750819 +0x99:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::sslFactory::sslFactory @ 0x8750780

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::sslFactory::sslFactory() */

void __thiscall yaSSL::sslFactory::sslFactory(sslFactory *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  InitMessageFactory((Factory *)this);
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  InitHandShakeFactory((Factory *)(this + 0xc));
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  InitServerKeyFactory((Factory *)(this + 0x18));
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  InitClientKeyFactory((Factory *)(this + 0x24));
  return;
}
```
