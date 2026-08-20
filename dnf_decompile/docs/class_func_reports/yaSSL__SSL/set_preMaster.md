# set_preMaster

`_ZN5yaSSL3SSL13set_preMasterEPKhj`

`yaSSL::SSL::set_preMaster(unsigned char const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL` | `0x08750710` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08750710  _ZN5yaSSL3SSL13set_preMasterEPKhj
#           yaSSL::SSL::set_preMaster(unsigned char const*, unsigned int)
# range [0x08750710, 0x08750779]
08750710 +0x00:  push   %ebp
08750711 +0x01:  mov    %esp,%ebp
08750713 +0x03:  sub    $0x28,%esp
08750716 +0x06:  mov    %ebx,-0xc(%ebp)
08750719 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
0875071e +0x0e:  add    $0xc1c47a,%ebx
08750724 +0x14:  mov    %edi,-0x4(%ebp)
08750727 +0x17:  mov    0x8(%ebp),%edi
0875072a +0x1a:  mov    %esi,-0x8(%ebp)
0875072d +0x1d:  mov    0x10(%ebp),%esi
08750730 +0x20:  add    $0x68,%edi
08750733 +0x23:  mov    %edi,(%esp)
08750736 +0x26:  call   0874ed00 <_ZN5yaSSL8Security14use_connectionEv>  ; yaSSL::Security::use_connection()
0875073b +0x2b:  mov    %esi,0x4(%esp)
0875073f +0x2f:  mov    %eax,(%esp)
08750742 +0x32:  call   08747280 <_ZN5yaSSL10Connection14AllocPreSecretEj>  ; yaSSL::Connection::AllocPreSecret(unsigned int)
08750747 +0x37:  mov    %edi,(%esp)
0875074a +0x3a:  call   0874ed00 <_ZN5yaSSL8Security14use_connectionEv>  ; yaSSL::Security::use_connection()
0875074f +0x3f:  mov    0xc(%ebp),%edx
08750752 +0x42:  mov    (%eax),%eax
08750754 +0x44:  mov    %esi,0x8(%esp)
08750758 +0x48:  mov    %edx,0x4(%esp)
0875075c +0x4c:  mov    %eax,(%esp)
0875075f +0x4f:  call   0807d8a0 <_init+0x198>
08750764 +0x54:  mov    -0xc(%ebp),%ebx
08750767 +0x57:  mov    -0x8(%ebp),%esi
0875076a +0x5a:  mov    -0x4(%ebp),%edi
0875076d +0x5d:  mov    %ebp,%esp
0875076f +0x5f:  pop    %ebp
08750770 +0x60:  ret
08750771 +0x61:  nop
08750772 +0x62:  lea    0x0(%esi,%eiz,1),%esi
08750779 +0x69:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::SSL::set_preMaster @ 0x8750710

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL::set_preMaster(unsigned char const*, unsigned int) */

void __thiscall yaSSL::SSL::set_preMaster(SSL *this,uchar *param_1,uint param_2)

{
  Connection *this_00;
  undefined4 *puVar1;
  
  this_00 = (Connection *)Security::use_connection((Security *)(this + 0x68));
  Connection::AllocPreSecret(this_00,param_2);
  puVar1 = (undefined4 *)Security::use_connection((Security *)(this + 0x68));
  memcpy((void *)*puVar1,param_1,param_2);
  return;
}
```
