# _analyzeMonsterDieHack

`_ZN8WongWork13CHackAnalyzer22_analyzeMonsterDieHackEv`

`WongWork::CHackAnalyzer::_analyzeMonsterDieHack()`

| 类 | 地址 |
|---|---|
| `WongWork::CHackAnalyzer` | `0x080f7eb6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080f7eb6  _ZN8WongWork13CHackAnalyzer22_analyzeMonsterDieHackEv
#           WongWork::CHackAnalyzer::_analyzeMonsterDieHack()
# range [0x080f7eb6, 0x080f7fd1]
080f7eb6 +0x000:  push   %ebp
080f7eb7 +0x001:  mov    %esp,%ebp
080f7eb9 +0x003:  sub    $0x28,%esp
080f7ebc +0x006:  movl   $0x80,0x4(%esp)
080f7ec4 +0x00e:  mov    0x8(%ebp),%eax
080f7ec7 +0x011:  mov    %eax,(%esp)
080f7eca +0x014:  call   080f9876 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x82>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x82
080f7ecf +0x019:  test   %al,%al
080f7ed1 +0x01b:  jne    080f7fce <+0x118>
080f7ed7 +0x021:  mov    0x8(%ebp),%eax
080f7eda +0x024:  mov    0x24(%eax),%edx
080f7edd +0x027:  mov    0x8(%ebp),%eax
080f7ee0 +0x02a:  mov    0x20(%eax),%eax
080f7ee3 +0x02d:  mov    %edx,%ecx
080f7ee5 +0x02f:  sub    %eax,%ecx
080f7ee7 +0x031:  mov    %ecx,%eax
080f7ee9 +0x033:  cmp    $0xa,%eax
080f7eec +0x036:  jg     080f7fcf <+0x119>
080f7ef2 +0x03c:  mov    0x8(%ebp),%eax
080f7ef5 +0x03f:  lea    0x14(%eax),%edx
080f7ef8 +0x042:  lea    -0x10(%ebp),%eax
080f7efb +0x045:  mov    %edx,0x4(%esp)
080f7eff +0x049:  mov    %eax,(%esp)
080f7f02 +0x04c:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
080f7f07 +0x051:  sub    $0x4,%esp
080f7f0a +0x054:  lea    -0x10(%ebp),%eax
080f7f0d +0x057:  mov    %eax,0x4(%esp)
080f7f11 +0x05b:  lea    -0x14(%ebp),%eax
080f7f14 +0x05e:  mov    %eax,(%esp)
080f7f17 +0x061:  call   080f99ec <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x1f8>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x1f8
080f7f1c +0x066:  mov    0x8(%ebp),%eax
080f7f1f +0x069:  lea    0x14(%eax),%edx
080f7f22 +0x06c:  lea    -0xc(%ebp),%eax
080f7f25 +0x06f:  mov    %edx,0x4(%esp)
080f7f29 +0x073:  mov    %eax,(%esp)
080f7f2c +0x076:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
080f7f31 +0x07b:  sub    $0x4,%esp
080f7f34 +0x07e:  lea    -0xc(%ebp),%eax
080f7f37 +0x081:  mov    %eax,0x4(%esp)
080f7f3b +0x085:  lea    -0x18(%ebp),%eax
080f7f3e +0x088:  mov    %eax,(%esp)
080f7f41 +0x08b:  call   080f99ec <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x1f8>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x1f8
080f7f46 +0x090:  jmp    080f7f6c <+0xb6>
080f7f48 +0x092:  lea    -0x14(%ebp),%eax
080f7f4b +0x095:  mov    %eax,(%esp)
080f7f4e +0x098:  call   080f9a1c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x228>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x228
080f7f53 +0x09d:  mov    (%eax),%eax
080f7f55 +0x09f:  cmp    $0xffff,%eax
080f7f5a +0x0a4:  setne  %al
080f7f5d +0x0a7:  test   %al,%al
080f7f5f +0x0a9:  jne    080f7f84 <+0xce>
080f7f61 +0x0ab:  lea    -0x14(%ebp),%eax
080f7f64 +0x0ae:  mov    %eax,(%esp)
080f7f67 +0x0b1:  call   080f9a06 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x212>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x212
080f7f6c +0x0b6:  lea    -0x18(%ebp),%eax
080f7f6f +0x0b9:  mov    %eax,0x4(%esp)
080f7f73 +0x0bd:  lea    -0x14(%ebp),%eax
080f7f76 +0x0c0:  mov    %eax,(%esp)
080f7f79 +0x0c3:  call   080f9a26 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x232>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x232
080f7f7e +0x0c8:  test   %al,%al
080f7f80 +0x0ca:  jne    080f7f48 <+0x92>
080f7f82 +0x0cc:  jmp    080f7f85 <+0xcf>
080f7f84 +0x0ce:  nop
080f7f85 +0x0cf:  lea    -0x18(%ebp),%eax
080f7f88 +0x0d2:  mov    %eax,0x4(%esp)
080f7f8c +0x0d6:  lea    -0x14(%ebp),%eax
080f7f8f +0x0d9:  mov    %eax,(%esp)
080f7f92 +0x0dc:  call   080f9b9c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x3a8>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x3a8
080f7f97 +0x0e1:  test   %al,%al
080f7f99 +0x0e3:  je     080f7fcf <+0x119>
080f7f9b +0x0e5:  mov    0x8(%ebp),%eax
080f7f9e +0x0e8:  mov    0x24(%eax),%edx
080f7fa1 +0x0eb:  mov    0x8(%ebp),%eax
080f7fa4 +0x0ee:  mov    0x20(%eax),%eax
080f7fa7 +0x0f1:  mov    %edx,%ecx
080f7fa9 +0x0f3:  sub    %eax,%ecx
080f7fab +0x0f5:  mov    %ecx,%eax
080f7fad +0x0f7:  mov    %eax,0xc(%esp)
080f7fb1 +0x0fb:  movl   $0x3c0,0x8(%esp)
080f7fb9 +0x103:  movl   $0x80,0x4(%esp)
080f7fc1 +0x10b:  mov    0x8(%ebp),%eax
080f7fc4 +0x10e:  mov    %eax,(%esp)
080f7fc7 +0x111:  call   080f7fd2 <_ZN8WongWork13CHackAnalyzer12_addHackInfoE23ENUM_REPORT_4_HACK_FLAGNS_13ENUM_HACKTYPEEi>  ; WongWork::CHackAnalyzer::_addHackInfo(ENUM_REPORT_4_HACK_FLAG, WongWork::ENUM_HACKTYPE, int)
080f7fcc +0x116:  jmp    080f7fcf <+0x119>
080f7fce +0x118:  nop
080f7fcf +0x119:  leave
080f7fd0 +0x11a:  ret
080f7fd1 +0x11b:  nop
```

## 反编译 C

```c
// WongWork::CHackAnalyzer::_analyzeMonsterDieHack @ 0x80f7eb6

/* WongWork::CHackAnalyzer::_analyzeMonsterDieHack() */

void __thiscall WongWork::CHackAnalyzer::_analyzeMonsterDieHack(CHackAnalyzer *this)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_1c [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_18 [4];
  __normal_iterator local_14 [4];
  __normal_iterator local_10 [12];
  
  cVar1 = checkCollectedHack(this,0x80);
  if ((cVar1 == '\0') && (*(int *)(this + 0x24) - *(int *)(this + 0x20) < 0xb)) {
    std::vector<int,std::allocator<int>>::begin();
    __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
    __normal_iterator<int*>(local_18,local_14);
    std::vector<int,std::allocator<int>>::end();
    __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
    __normal_iterator<int*>(local_1c,local_10);
    while ((bVar2 = __gnu_cxx::operator!=(local_18,local_1c), bVar2 &&
           (piVar3 = (int *)__gnu_cxx::
                            __normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
                            operator*(local_18), *piVar3 == 0xffff))) {
      __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator++
                (local_18);
    }
    bVar2 = __gnu_cxx::operator==(local_18,local_1c);
    if (bVar2) {
      _addHackInfo(this,0x80,0x3c0,*(int *)(this + 0x24) - *(int *)(this + 0x20));
    }
  }
  return;
}
```
