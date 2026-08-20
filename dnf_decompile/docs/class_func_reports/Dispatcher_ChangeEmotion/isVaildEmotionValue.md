# isVaildEmotionValue

`_ZN24Dispatcher_ChangeEmotion19isVaildEmotionValueEs`

`Dispatcher_ChangeEmotion::isVaildEmotionValue(short)`

| 类 | 地址 |
|---|---|
| `Dispatcher_ChangeEmotion` | `0x081d1ebe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d1ebe  _ZN24Dispatcher_ChangeEmotion19isVaildEmotionValueEs
#           Dispatcher_ChangeEmotion::isVaildEmotionValue(short)
# range [0x081d1ebe, 0x081d1f73]
081d1ebe +0x00:  push   %ebp
081d1ebf +0x01:  mov    %esp,%ebp
081d1ec1 +0x03:  sub    $0x38,%esp
081d1ec4 +0x06:  mov    0xc(%ebp),%eax
081d1ec7 +0x09:  mov    %ax,-0x1c(%ebp)
081d1ecb +0x0d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081d1ed0 +0x12:  lea    0x4d44(%eax),%edx
081d1ed6 +0x18:  lea    -0x10(%ebp),%eax
081d1ed9 +0x1b:  mov    %edx,0x4(%esp)
081d1edd +0x1f:  mov    %eax,(%esp)
081d1ee0 +0x22:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
081d1ee5 +0x27:  sub    $0x4,%esp
081d1ee8 +0x2a:  lea    -0x10(%ebp),%eax
081d1eeb +0x2d:  mov    %eax,0x4(%esp)
081d1eef +0x31:  lea    -0x14(%ebp),%eax
081d1ef2 +0x34:  mov    %eax,(%esp)
081d1ef5 +0x37:  call   080f99ec <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x1f8>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x1f8
081d1efa +0x3c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081d1eff +0x41:  lea    0x4d44(%eax),%edx
081d1f05 +0x47:  lea    -0xc(%ebp),%eax
081d1f08 +0x4a:  mov    %edx,0x4(%esp)
081d1f0c +0x4e:  mov    %eax,(%esp)
081d1f0f +0x51:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
081d1f14 +0x56:  sub    $0x4,%esp
081d1f17 +0x59:  lea    -0xc(%ebp),%eax
081d1f1a +0x5c:  mov    %eax,0x4(%esp)
081d1f1e +0x60:  lea    -0x18(%ebp),%eax
081d1f21 +0x63:  mov    %eax,(%esp)
081d1f24 +0x66:  call   080f99ec <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x1f8>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x1f8
081d1f29 +0x6b:  jmp    081d1f57 <+0x99>
081d1f2b +0x6d:  lea    -0x14(%ebp),%eax
081d1f2e +0x70:  mov    %eax,(%esp)
081d1f31 +0x73:  call   080f9a1c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x228>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x228
081d1f36 +0x78:  mov    (%eax),%edx
081d1f38 +0x7a:  movswl -0x1c(%ebp),%eax
081d1f3c +0x7e:  cmp    %eax,%edx
081d1f3e +0x80:  sete   %al
081d1f41 +0x83:  test   %al,%al
081d1f43 +0x85:  je     081d1f4c <+0x8e>
081d1f45 +0x87:  mov    $0x1,%eax
081d1f4a +0x8c:  jmp    081d1f72 <+0xb4>
081d1f4c +0x8e:  lea    -0x14(%ebp),%eax
081d1f4f +0x91:  mov    %eax,(%esp)
081d1f52 +0x94:  call   080f9a06 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x212>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x212
081d1f57 +0x99:  lea    -0x18(%ebp),%eax
081d1f5a +0x9c:  mov    %eax,0x4(%esp)
081d1f5e +0xa0:  lea    -0x14(%ebp),%eax
081d1f61 +0xa3:  mov    %eax,(%esp)
081d1f64 +0xa6:  call   080f9a26 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x232>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x232
081d1f69 +0xab:  test   %al,%al
081d1f6b +0xad:  jne    081d1f2b <+0x6d>
081d1f6d +0xaf:  mov    $0x0,%eax
081d1f72 +0xb4:  leave
081d1f73 +0xb5:  ret
```

## 反编译 C

```c
// Dispatcher_ChangeEmotion::isVaildEmotionValue @ 0x81d1ebe

/* Dispatcher_ChangeEmotion::isVaildEmotionValue(short) */

undefined4 __thiscall
Dispatcher_ChangeEmotion::isVaildEmotionValue(Dispatcher_ChangeEmotion *this,short param_1)

{
  bool bVar1;
  int *piVar2;
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_1c [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_18 [4];
  __normal_iterator local_14 [4];
  __normal_iterator local_10 [12];
  
  G_CDataManager();
  std::vector<int,std::allocator<int>>::begin();
  __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
  __normal_iterator<int*>(local_18,local_14);
  G_CDataManager();
  std::vector<int,std::allocator<int>>::end();
  __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
  __normal_iterator<int*>(local_1c,local_10);
  while( true ) {
    bVar1 = __gnu_cxx::operator!=(local_18,local_1c);
    if (!bVar1) {
      return 0;
    }
    piVar2 = (int *)__gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
                    operator*(local_18);
    if (*piVar2 == (int)param_1) break;
    __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator++
              (local_18);
  }
  return 1;
}
```
