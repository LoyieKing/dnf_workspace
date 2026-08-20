# SSL_CTX

`_ZN5yaSSL7SSL_CTXC1EPNS_10SSL_METHODE`

`yaSSL::SSL_CTX::SSL_CTX(yaSSL::SSL_METHOD*)`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL_CTX` | `0x0874f670` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874f670  _ZN5yaSSL7SSL_CTXC1EPNS_10SSL_METHODE
#           yaSSL::SSL_CTX::SSL_CTX(yaSSL::SSL_METHOD*)
# range [0x0874f670, 0x0874f7a9]
0874f670 +0x000:  push   %ebp
0874f671 +0x001:  mov    %esp,%ebp
0874f673 +0x003:  push   %esi
0874f674 +0x004:  push   %ebx
0874f675 +0x005:  call   08722df8 <__i686.get_pc_thunk.bx>
0874f67a +0x00a:  add    $0xc1d51e,%ebx
0874f680 +0x010:  sub    $0x10,%esp
0874f683 +0x013:  mov    0x8(%ebp),%esi
0874f686 +0x016:  mov    0xc(%ebp),%eax
0874f689 +0x019:  movl   $0x0,0x4(%esi)
0874f690 +0x020:  mov    %eax,(%esi)
0874f692 +0x022:  lea    0xa0(%esi),%eax
0874f698 +0x028:  movl   $0x0,0x8(%esi)
0874f69f +0x02f:  movl   $0x0,0xc(%esi)
0874f6a6 +0x036:  movl   $0x0,0x10(%esi)
0874f6ad +0x03d:  movl   $0x0,0x14(%esi)
0874f6b4 +0x044:  movb   $0x0,0x18(%esi)
0874f6b8 +0x048:  movl   $0x0,0x9c(%esi)
0874f6c2 +0x052:  mov    %eax,(%esp)
0874f6c5 +0x055:  call   08798f00 <_ZN5yaSSL7IntegerC1Ev>  ; yaSSL::Integer::Integer()
0874f6ca +0x05a:  lea    0xa4(%esi),%eax
0874f6d0 +0x060:  mov    %eax,(%esp)
0874f6d3 +0x063:  call   08798f00 <_ZN5yaSSL7IntegerC1Ev>  ; yaSSL::Integer::Integer()
0874f6d8 +0x068:  movb   $0x0,0xa8(%esi)
0874f6df +0x06f:  movl   $0x0,0xac(%esi)
0874f6e9 +0x079:  movl   $0x0,0xb0(%esi)
0874f6f3 +0x083:  movb   $0x0,0xb4(%esi)
0874f6fa +0x08a:  movb   $0x0,0xb5(%esi)
0874f701 +0x091:  movl   $0x0,0xb8(%esi)
0874f70b +0x09b:  movl   $0x0,0xbc(%esi)
0874f715 +0x0a5:  movl   $0x0,0xc0(%esi)
0874f71f +0x0af:  movl   $0x0,0xc4(%esi)
0874f729 +0x0b9:  movl   $0x0,0xc8(%esi)
0874f733 +0x0c3:  movl   $0x0,0xcc(%esi)
0874f73d +0x0cd:  movl   $0x0,0xd0(%esi)
0874f747 +0x0d7:  movl   $0x0,0xd4(%esi)
0874f751 +0x0e1:  movl   $0x0,0xd8(%esi)
0874f75b +0x0eb:  movl   $0x0,0xdc(%esi)
0874f765 +0x0f5:  movl   $0x0,0xe0(%esi)
0874f76f +0x0ff:  movl   $0x0,0xe4(%esi)
0874f779 +0x109:  movl   $0x0,0xe8(%esi)
0874f783 +0x113:  movl   $0x0,0xec(%esi)
0874f78d +0x11d:  movl   $0x0,0xf0(%esi)
0874f797 +0x127:  movl   $0x0,0xf8(%esi)
0874f7a1 +0x131:  add    $0x10,%esp
0874f7a4 +0x134:  pop    %ebx
0874f7a5 +0x135:  pop    %esi
0874f7a6 +0x136:  pop    %ebp
0874f7a7 +0x137:  ret
0874f7a8 +0x138:  nop
0874f7a9 +0x139:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::SSL_CTX::SSL_CTX @ 0x874f670

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL_CTX::SSL_CTX(yaSSL::SSL_METHOD*) */

void __thiscall yaSSL::SSL_CTX::SSL_CTX(SSL_CTX *this,SSL_METHOD *param_1)

{
  *(undefined4 *)(this + 4) = 0;
  *(SSL_METHOD **)this = param_1;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  this[0x18] = (SSL_CTX)0x0;
  *(undefined4 *)(this + 0x9c) = 0;
  Integer::Integer((Integer *)(this + 0xa0));
  Integer::Integer((Integer *)(this + 0xa4));
  this[0xa8] = (SSL_CTX)0x0;
  *(undefined4 *)(this + 0xac) = 0;
  *(undefined4 *)(this + 0xb0) = 0;
  this[0xb4] = (SSL_CTX)0x0;
  this[0xb5] = (SSL_CTX)0x0;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xc0) = 0;
  *(undefined4 *)(this + 0xc4) = 0;
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xcc) = 0;
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 0xd4) = 0;
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined4 *)(this + 0xe8) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xf8) = 0;
  return;
}
```
