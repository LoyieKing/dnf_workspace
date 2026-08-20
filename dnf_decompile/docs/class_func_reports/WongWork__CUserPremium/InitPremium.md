# InitPremium

`_ZN8WongWork12CUserPremium11InitPremiumEv`

`WongWork::CUserPremium::InitPremium()`

| 类 | 地址 |
|---|---|
| `WongWork::CUserPremium` | `0x086ad9e8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086ad9e8  _ZN8WongWork12CUserPremium11InitPremiumEv
#           WongWork::CUserPremium::InitPremium()
# range [0x086ad9e8, 0x086adad1]
086ad9e8 +0x00:  push   %ebp
086ad9e9 +0x01:  mov    %esp,%ebp
086ad9eb +0x03:  sub    $0x18,%esp
086ad9ee +0x06:  mov    0x8(%ebp),%eax
086ad9f1 +0x09:  movl   $0x848,0x8(%esp)
086ad9f9 +0x11:  movl   $0x0,0x4(%esp)
086ada01 +0x19:  mov    %eax,(%esp)
086ada04 +0x1c:  call   0807dcc0 <_init+0x5b8>
086ada09 +0x21:  mov    0x8(%ebp),%eax
086ada0c +0x24:  movl   $0x0,0x848(%eax)
086ada16 +0x2e:  mov    0x8(%ebp),%eax
086ada19 +0x31:  movl   $0x0,0x84c(%eax)
086ada23 +0x3b:  mov    0x8(%ebp),%eax
086ada26 +0x3e:  movw   $0x0,0x850(%eax)
086ada2f +0x47:  mov    0x8(%ebp),%eax
086ada32 +0x4a:  movl   $0x0,0x854(%eax)
086ada3c +0x54:  mov    0x8(%ebp),%eax
086ada3f +0x57:  movl   $0x0,0x858(%eax)
086ada49 +0x61:  mov    0x8(%ebp),%eax
086ada4c +0x64:  movb   $0x0,0x85c(%eax)
086ada53 +0x6b:  mov    0x8(%ebp),%eax
086ada56 +0x6e:  movw   $0x0,0x85e(%eax)
086ada5f +0x77:  mov    0x8(%ebp),%eax
086ada62 +0x7a:  movw   $0x0,0x860(%eax)
086ada6b +0x83:  mov    0x8(%ebp),%eax
086ada6e +0x86:  movb   $0x0,0x862(%eax)
086ada75 +0x8d:  mov    0x8(%ebp),%eax
086ada78 +0x90:  add    $0x864,%eax
086ada7d +0x95:  movl   $0x58,0x8(%esp)
086ada85 +0x9d:  movl   $0x0,0x4(%esp)
086ada8d +0xa5:  mov    %eax,(%esp)
086ada90 +0xa8:  call   0807dcc0 <_init+0x5b8>
086ada95 +0xad:  mov    0x8(%ebp),%eax
086ada98 +0xb0:  movb   $0x0,0x8bc(%eax)
086ada9f +0xb7:  mov    0x8(%ebp),%eax
086adaa2 +0xba:  add    $0x8bd,%eax
086adaa7 +0xbf:  mov    %eax,(%esp)
086adaaa +0xc2:  call   08348268 <_ZN15_Additioal_info5clearEv>  ; _Additioal_info::clear()
086adaaf +0xc7:  mov    0x8(%ebp),%eax
086adab2 +0xca:  add    $0x90f,%eax
086adab7 +0xcf:  mov    %eax,(%esp)
086adaba +0xd2:  call   08348268 <_ZN15_Additioal_info5clearEv>  ; _Additioal_info::clear()
086adabf +0xd7:  mov    0x8(%ebp),%eax
086adac2 +0xda:  add    $0x964,%eax
086adac7 +0xdf:  mov    %eax,(%esp)
086adaca +0xe2:  call   080c6cde <_GLOBAL__I_g_ServerString_+0x249>  ; global constructors keyed to g_ServerString_+0x249
086adacf +0xe7:  leave
086adad0 +0xe8:  ret
086adad1 +0xe9:  nop
```

## 反编译 C

```c
// WongWork::CUserPremium::InitPremium @ 0x86ad9e8

/* WongWork::CUserPremium::InitPremium() */

void __thiscall WongWork::CUserPremium::InitPremium(CUserPremium *this)

{
  memset(this,0,0x848);
  *(undefined4 *)(this + 0x848) = 0;
  *(undefined4 *)(this + 0x84c) = 0;
  *(undefined2 *)(this + 0x850) = 0;
  *(undefined4 *)(this + 0x854) = 0;
  *(undefined4 *)(this + 0x858) = 0;
  this[0x85c] = (CUserPremium)0x0;
  *(undefined2 *)(this + 0x85e) = 0;
  *(undefined2 *)(this + 0x860) = 0;
  this[0x862] = (CUserPremium)0x0;
  memset(this + 0x864,0,0x58);
  this[0x8bc] = (CUserPremium)0x0;
  _Additioal_info::clear((_Additioal_info *)(this + 0x8bd));
  _Additioal_info::clear((_Additioal_info *)(this + 0x90f));
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x964))
  ;
  return;
}
```
