# CheckHackRateByPartyCount

`_ZN8WongWork13CHackAnalyzer25CheckHackRateByPartyCountENS_13ENUM_HACKTYPEEi`

`WongWork::CHackAnalyzer::CheckHackRateByPartyCount(WongWork::ENUM_HACKTYPE, int)`

| 类 | 地址 |
|---|---|
| `WongWork::CHackAnalyzer` | `0x080f8320` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080f8320  _ZN8WongWork13CHackAnalyzer25CheckHackRateByPartyCountENS_13ENUM_HACKTYPEEi
#           WongWork::CHackAnalyzer::CheckHackRateByPartyCount(WongWork::ENUM_HACKTYPE, int)
# range [0x080f8320, 0x080f842d]
080f8320 +0x000:  push   %ebp
080f8321 +0x001:  mov    %esp,%ebp
080f8323 +0x003:  sub    $0x38,%esp
080f8326 +0x006:  mov    0xc(%ebp),%eax
080f8329 +0x009:  mov    %eax,-0x1c(%ebp)
080f832c +0x00c:  mov    0x8(%ebp),%eax
080f832f +0x00f:  lea    0x7a24(%eax),%edx
080f8335 +0x015:  lea    -0x18(%ebp),%eax
080f8338 +0x018:  mov    %edx,0x4(%esp)
080f833c +0x01c:  mov    %eax,(%esp)
080f833f +0x01f:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
080f8344 +0x024:  sub    $0x4,%esp
080f8347 +0x027:  mov    0x8(%ebp),%eax
080f834a +0x02a:  lea    0x7a24(%eax),%edx
080f8350 +0x030:  lea    -0x14(%ebp),%eax
080f8353 +0x033:  mov    %edx,0x4(%esp)
080f8357 +0x037:  mov    %eax,(%esp)
080f835a +0x03a:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
080f835f +0x03f:  sub    $0x4,%esp
080f8362 +0x042:  lea    -0x20(%ebp),%eax
080f8365 +0x045:  lea    -0x1c(%ebp),%edx
080f8368 +0x048:  mov    %edx,0xc(%esp)
080f836c +0x04c:  mov    -0x18(%ebp),%edx
080f836f +0x04f:  mov    %edx,0x8(%esp)
080f8373 +0x053:  mov    -0x14(%ebp),%edx
080f8376 +0x056:  mov    %edx,0x4(%esp)
080f837a +0x05a:  mov    %eax,(%esp)
080f837d +0x05d:  call   080f9997 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x1a3>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x1a3
080f8382 +0x062:  sub    $0x4,%esp
080f8385 +0x065:  lea    -0x20(%ebp),%eax
080f8388 +0x068:  mov    %eax,0x4(%esp)
080f838c +0x06c:  lea    -0x24(%ebp),%eax
080f838f +0x06f:  mov    %eax,(%esp)
080f8392 +0x072:  call   080f99ec <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x1f8>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x1f8
080f8397 +0x077:  mov    0x8(%ebp),%eax
080f839a +0x07a:  lea    0x7a24(%eax),%edx
080f83a0 +0x080:  lea    -0x10(%ebp),%eax
080f83a3 +0x083:  mov    %edx,0x4(%esp)
080f83a7 +0x087:  mov    %eax,(%esp)
080f83aa +0x08a:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
080f83af +0x08f:  sub    $0x4,%esp
080f83b2 +0x092:  lea    -0x10(%ebp),%eax
080f83b5 +0x095:  mov    %eax,0x4(%esp)
080f83b9 +0x099:  lea    -0x24(%ebp),%eax
080f83bc +0x09c:  mov    %eax,(%esp)
080f83bf +0x09f:  call   080f9e18 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x624>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x624
080f83c4 +0x0a4:  test   %al,%al
080f83c6 +0x0a6:  je     080f83cf <+0xaf>
080f83c8 +0x0a8:  mov    $0x1,%eax
080f83cd +0x0ad:  jmp    080f842b <+0x10b>
080f83cf +0x0af:  mov    0x10(%ebp),%eax
080f83d2 +0x0b2:  sub    $0x1,%eax
080f83d5 +0x0b5:  mov    %eax,-0xc(%ebp)
080f83d8 +0x0b8:  cmpl   $0x0,-0xc(%ebp)
080f83dc +0x0bc:  js     080f83f5 <+0xd5>
080f83de +0x0be:  cmpl   $0x3,-0xc(%ebp)
080f83e2 +0x0c2:  jg     080f83f5 <+0xd5>
080f83e4 +0x0c4:  mov    -0xc(%ebp),%eax
080f83e7 +0x0c7:  movzwl &_ZL32_S_HACK_CHECK_RATE_BY_PARTYCOUNT(%eax,%eax,1),%eax
080f83ef +0x0cf:  cmp    $0x64,%ax
080f83f3 +0x0d3:  jne    080f83fc <+0xdc>
080f83f5 +0x0d5:  mov    $0x1,%eax
080f83fa +0x0da:  jmp    080f842b <+0x10b>
080f83fc +0x0dc:  movl   $0x64,(%esp)
080f8403 +0x0e3:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
080f8408 +0x0e8:  mov    -0xc(%ebp),%edx
080f840b +0x0eb:  movzwl &_ZL32_S_HACK_CHECK_RATE_BY_PARTYCOUNT(%edx,%edx,1),%edx
080f8413 +0x0f3:  movswl %dx,%edx
080f8416 +0x0f6:  cmp    %edx,%eax
080f8418 +0x0f8:  setle  %al
080f841b +0x0fb:  test   %al,%al
080f841d +0x0fd:  je     080f8426 <+0x106>
080f841f +0x0ff:  mov    $0x1,%eax
080f8424 +0x104:  jmp    080f842b <+0x10b>
080f8426 +0x106:  mov    $0x0,%eax
080f842b +0x10b:  leave
080f842c +0x10c:  ret
080f842d +0x10d:  nop
```

## 反编译 C

```c
// WongWork::CHackAnalyzer::CheckHackRateByPartyCount @ 0x80f8320

/* WongWork::CHackAnalyzer::CheckHackRateByPartyCount(WongWork::ENUM_HACKTYPE, int) */

undefined4 __thiscall
WongWork::CHackAnalyzer::CheckHackRateByPartyCount(undefined4 this,undefined4 param_2,int param_3)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_28 [4];
  undefined1 local_24 [4];
  undefined4 local_20;
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
    local_10 = param_3 + -1;
    if (((local_10 < 0) || (3 < local_10)) ||
       (*(short *)((int)&_S_HACK_CHECK_RATE_BY_PARTYCOUNT + local_10 * 2) == 100)) {
      uVar2 = 1;
    }
    else {
      iVar3 = get_rand_int(100);
      if (*(short *)((int)&_S_HACK_CHECK_RATE_BY_PARTYCOUNT + local_10 * 2) < iVar3) {
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
