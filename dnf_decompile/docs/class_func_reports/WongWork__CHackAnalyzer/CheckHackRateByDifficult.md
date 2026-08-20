# CheckHackRateByDifficult

`_ZN8WongWork13CHackAnalyzer24CheckHackRateByDifficultENS_13ENUM_HACKTYPEEii`

`WongWork::CHackAnalyzer::CheckHackRateByDifficult(WongWork::ENUM_HACKTYPE, int, int)`

| 类 | 地址 |
|---|---|
| `WongWork::CHackAnalyzer` | `0x080f842e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080f842e  _ZN8WongWork13CHackAnalyzer24CheckHackRateByDifficultENS_13ENUM_HACKTYPEEii
#           WongWork::CHackAnalyzer::CheckHackRateByDifficult(WongWork::ENUM_HACKTYPE, int, int)
# range [0x080f842e, 0x080f854f]
080f842e +0x000:  push   %ebp
080f842f +0x001:  mov    %esp,%ebp
080f8431 +0x003:  sub    $0x38,%esp
080f8434 +0x006:  mov    0xc(%ebp),%eax
080f8437 +0x009:  mov    %eax,-0x1c(%ebp)
080f843a +0x00c:  mov    0x8(%ebp),%eax
080f843d +0x00f:  lea    0x7a30(%eax),%edx
080f8443 +0x015:  lea    -0x18(%ebp),%eax
080f8446 +0x018:  mov    %edx,0x4(%esp)
080f844a +0x01c:  mov    %eax,(%esp)
080f844d +0x01f:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
080f8452 +0x024:  sub    $0x4,%esp
080f8455 +0x027:  mov    0x8(%ebp),%eax
080f8458 +0x02a:  lea    0x7a30(%eax),%edx
080f845e +0x030:  lea    -0x14(%ebp),%eax
080f8461 +0x033:  mov    %edx,0x4(%esp)
080f8465 +0x037:  mov    %eax,(%esp)
080f8468 +0x03a:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
080f846d +0x03f:  sub    $0x4,%esp
080f8470 +0x042:  lea    -0x20(%ebp),%eax
080f8473 +0x045:  lea    -0x1c(%ebp),%edx
080f8476 +0x048:  mov    %edx,0xc(%esp)
080f847a +0x04c:  mov    -0x18(%ebp),%edx
080f847d +0x04f:  mov    %edx,0x8(%esp)
080f8481 +0x053:  mov    -0x14(%ebp),%edx
080f8484 +0x056:  mov    %edx,0x4(%esp)
080f8488 +0x05a:  mov    %eax,(%esp)
080f848b +0x05d:  call   080f9997 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x1a3>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x1a3
080f8490 +0x062:  sub    $0x4,%esp
080f8493 +0x065:  lea    -0x20(%ebp),%eax
080f8496 +0x068:  mov    %eax,0x4(%esp)
080f849a +0x06c:  lea    -0x24(%ebp),%eax
080f849d +0x06f:  mov    %eax,(%esp)
080f84a0 +0x072:  call   080f99ec <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x1f8>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x1f8
080f84a5 +0x077:  mov    0x8(%ebp),%eax
080f84a8 +0x07a:  lea    0x7a30(%eax),%edx
080f84ae +0x080:  lea    -0x10(%ebp),%eax
080f84b1 +0x083:  mov    %edx,0x4(%esp)
080f84b5 +0x087:  mov    %eax,(%esp)
080f84b8 +0x08a:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
080f84bd +0x08f:  sub    $0x4,%esp
080f84c0 +0x092:  lea    -0x10(%ebp),%eax
080f84c3 +0x095:  mov    %eax,0x4(%esp)
080f84c7 +0x099:  lea    -0x24(%ebp),%eax
080f84ca +0x09c:  mov    %eax,(%esp)
080f84cd +0x09f:  call   080f9e18 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x624>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x624
080f84d2 +0x0a4:  test   %al,%al
080f84d4 +0x0a6:  je     080f84dd <+0xaf>
080f84d6 +0x0a8:  mov    $0x1,%eax
080f84db +0x0ad:  jmp    080f854e <+0x120>
080f84dd +0x0af:  cmpl   $0x86,0xc(%ebp)
080f84e4 +0x0b6:  jne    080f84e9 <+0xbb>
080f84e6 +0x0b8:  shll   0x10(%ebp)
080f84e9 +0x0bb:  mov    $0x64,%eax
080f84ee +0x0c0:  sub    0x10(%ebp),%eax
080f84f1 +0x0c3:  mov    %eax,-0xc(%ebp)
080f84f4 +0x0c6:  cmpl   $0x0,0x14(%ebp)
080f84f8 +0x0ca:  js     080f8500 <+0xd2>
080f84fa +0x0cc:  cmpl   $0x4,0x14(%ebp)
080f84fe +0x0d0:  jle    080f8507 <+0xd9>
080f8500 +0x0d2:  mov    $0x1,%eax
080f8505 +0x0d7:  jmp    080f854e <+0x120>
080f8507 +0x0d9:  mov    0x14(%ebp),%eax
080f850a +0x0dc:  movzwl &_ZL31_S_HACK_CHECK_RATE_BY_DIFFICULT(%eax,%eax,1),%eax
080f8512 +0x0e4:  cwtl
080f8513 +0x0e5:  sub    %eax,-0xc(%ebp)
080f8516 +0x0e8:  cmpl   $0x18,-0xc(%ebp)
080f851a +0x0ec:  jg     080f852c <+0xfe>
080f851c +0x0ee:  cmpl   $0x86,0xc(%ebp)
080f8523 +0x0f5:  je     080f852c <+0xfe>
080f8525 +0x0f7:  movl   $0x19,-0xc(%ebp)
080f852c +0x0fe:  movl   $0x64,(%esp)
080f8533 +0x105:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
080f8538 +0x10a:  cmp    -0xc(%ebp),%eax
080f853b +0x10d:  setle  %al
080f853e +0x110:  test   %al,%al
080f8540 +0x112:  je     080f8549 <+0x11b>
080f8542 +0x114:  mov    $0x1,%eax
080f8547 +0x119:  jmp    080f854e <+0x120>
080f8549 +0x11b:  mov    $0x0,%eax
080f854e +0x120:  leave
080f854f +0x121:  ret
```

## 反编译 C

```c
// WongWork::CHackAnalyzer::CheckHackRateByDifficult @ 0x80f842e

/* WongWork::CHackAnalyzer::CheckHackRateByDifficult(WongWork::ENUM_HACKTYPE, int, int) */

undefined4 __thiscall
WongWork::CHackAnalyzer::CheckHackRateByDifficult
          (undefined4 this,int param_2,int param_3,int param_4)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_28 [4];
  undefined1 local_24 [4];
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  __normal_iterator local_14 [4];
  int local_10;
  
  local_20 = param_2;
  std::vector<int,std::allocator<int>>::end();
  std::vector<int,std::allocator<int>>::begin();
  std::find<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>
            (local_24,local_18,local_1c,&local_20);
  __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
  __normal_iterator<int*>(local_28,local_24);
  std::vector<int,std::allocator<int>>::end();
  bVar1 = __gnu_cxx::operator==(local_28,local_14);
  if (bVar1) {
    uVar2 = 1;
  }
  else {
    if (param_2 == 0x86) {
      param_3 = param_3 << 1;
    }
    if ((param_4 < 0) || (4 < param_4)) {
      uVar2 = 1;
    }
    else {
      local_10 = (100 - param_3) - (int)*(short *)(_S_HACK_CHECK_RATE_BY_DIFFICULT + param_4 * 2);
      if ((local_10 < 0x19) && (param_2 != 0x86)) {
        local_10 = 0x19;
      }
      iVar3 = get_rand_int(100);
      if (local_10 < iVar3) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}
```
