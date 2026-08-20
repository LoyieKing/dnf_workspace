# _get_option_value

`_ZN13random_option23CRandomOptionItemHandle17_get_option_valueEii`

`random_option::CRandomOptionItemHandle::_get_option_value(int, int)`

| 类 | 地址 |
|---|---|
| `random_option::CRandomOptionItemHandle` | `0x085f2b02` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085f2b02  _ZN13random_option23CRandomOptionItemHandle17_get_option_valueEii
#           random_option::CRandomOptionItemHandle::_get_option_value(int, int)
# range [0x085f2b02, 0x085f2c49]
085f2b02 +0x000:  push   %ebp
085f2b03 +0x001:  mov    %esp,%ebp
085f2b05 +0x003:  sub    $0xa8,%esp
085f2b0b +0x009:  call   085f0eb0 <_ZN13random_option15GetRandomOptionEv>  ; random_option::GetRandomOption()
085f2b10 +0x00e:  mov    0xf0(%eax),%eax
085f2b16 +0x014:  mov    %eax,-0x54(%ebp)
085f2b19 +0x017:  mov    0x8(%ebp),%eax
085f2b1c +0x01a:  mov    0x4(%eax),%eax
085f2b1f +0x01d:  lea    0x4478(%eax),%edx
085f2b25 +0x023:  lea    -0x54(%ebp),%eax
085f2b28 +0x026:  mov    %eax,0x4(%esp)
085f2b2c +0x02a:  mov    %edx,(%esp)
085f2b2f +0x02d:  call   080cbabe <_GLOBAL__I__ZN10BingoEventC2Ev+0x90b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x90b
085f2b34 +0x032:  mov    %eax,-0x14(%ebp)
085f2b37 +0x035:  mov    -0x14(%ebp),%eax
085f2b3a +0x038:  mov    %eax,0x4(%esp)
085f2b3e +0x03c:  lea    -0x38(%ebp),%eax
085f2b41 +0x03f:  mov    %eax,(%esp)
085f2b44 +0x042:  call   085f4da6 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0xdc1>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0xdc1
085f2b49 +0x047:  call   085f0eb0 <_ZN13random_option15GetRandomOptionEv>  ; random_option::GetRandomOption()
085f2b4e +0x04c:  lea    0xe4(%eax),%edx
085f2b54 +0x052:  lea    -0x20(%ebp),%eax
085f2b57 +0x055:  mov    %edx,0x4(%esp)
085f2b5b +0x059:  mov    %eax,(%esp)
085f2b5e +0x05c:  call   085f4d7a <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0xd95>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0xd95
085f2b63 +0x061:  sub    $0x4,%esp
085f2b66 +0x064:  call   085f0eb0 <_ZN13random_option15GetRandomOptionEv>  ; random_option::GetRandomOption()
085f2b6b +0x069:  lea    0xe4(%eax),%edx
085f2b71 +0x06f:  lea    -0x1c(%ebp),%eax
085f2b74 +0x072:  mov    %edx,0x4(%esp)
085f2b78 +0x076:  mov    %eax,(%esp)
085f2b7b +0x079:  call   085f4d4e <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0xd69>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0xd69
085f2b80 +0x07e:  sub    $0x4,%esp
085f2b83 +0x081:  lea    -0x50(%ebp),%eax
085f2b86 +0x084:  mov    -0x38(%ebp),%edx
085f2b89 +0x087:  mov    %edx,0xc(%esp)
085f2b8d +0x08b:  mov    -0x34(%ebp),%edx
085f2b90 +0x08e:  mov    %edx,0x10(%esp)
085f2b94 +0x092:  mov    -0x30(%ebp),%edx
085f2b97 +0x095:  mov    %edx,0x14(%esp)
085f2b9b +0x099:  mov    -0x2c(%ebp),%edx
085f2b9e +0x09c:  mov    %edx,0x18(%esp)
085f2ba2 +0x0a0:  mov    -0x28(%ebp),%edx
085f2ba5 +0x0a3:  mov    %edx,0x1c(%esp)
085f2ba9 +0x0a7:  mov    -0x24(%ebp),%edx
085f2bac +0x0aa:  mov    %edx,0x20(%esp)
085f2bb0 +0x0ae:  mov    -0x20(%ebp),%edx
085f2bb3 +0x0b1:  mov    %edx,0x8(%esp)
085f2bb7 +0x0b5:  mov    -0x1c(%ebp),%edx
085f2bba +0x0b8:  mov    %edx,0x4(%esp)
085f2bbe +0x0bc:  mov    %eax,(%esp)
085f2bc1 +0x0bf:  call   085f4dd6 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0xdf1>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0xdf1
085f2bc6 +0x0c4:  sub    $0x4,%esp
085f2bc9 +0x0c7:  lea    -0x60(%ebp),%eax
085f2bcc +0x0ca:  lea    -0x50(%ebp),%edx
085f2bcf +0x0cd:  mov    %edx,0x4(%esp)
085f2bd3 +0x0d1:  mov    %eax,(%esp)
085f2bd6 +0x0d4:  call   085f4e5a <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0xe75>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0xe75
085f2bdb +0x0d9:  sub    $0x4,%esp
085f2bde +0x0dc:  mov    0xc(%ebp),%eax
085f2be1 +0x0df:  mov    0x10(%ebp),%edx
085f2be4 +0x0e2:  mov    %edx,%ecx
085f2be6 +0x0e4:  sub    %eax,%ecx
085f2be8 +0x0e6:  mov    %ecx,%eax
085f2bea +0x0e8:  mov    %eax,-0x6c(%ebp)
085f2bed +0x0eb:  fildl  -0x6c(%ebp)
085f2bf0 +0x0ee:  flds   -0x60(%ebp)
085f2bf3 +0x0f1:  fmulp  %st,%st(1)
085f2bf5 +0x0f3:  fnstcw -0x6e(%ebp)
085f2bf8 +0x0f6:  movzwl -0x6e(%ebp),%eax
085f2bfc +0x0fa:  mov    $0xc,%ah
085f2bfe +0x0fc:  mov    %ax,-0x70(%ebp)
085f2c02 +0x100:  fldcw  -0x70(%ebp)
085f2c05 +0x103:  fistpl -0x10(%ebp)
085f2c08 +0x106:  fldcw  -0x6e(%ebp)
085f2c0b +0x109:  fildl  0xc(%ebp)
085f2c0e +0x10c:  flds   -0x5c(%ebp)
085f2c11 +0x10f:  fmulp  %st,%st(1)
085f2c13 +0x111:  fldcw  -0x70(%ebp)
085f2c16 +0x114:  fistpl -0xc(%ebp)
085f2c19 +0x117:  fldcw  -0x6e(%ebp)
085f2c1c +0x11a:  mov    -0x10(%ebp),%eax
085f2c1f +0x11d:  mov    %eax,-0x18(%ebp)
085f2c22 +0x120:  mov    0x8(%ebp),%eax
085f2c25 +0x123:  mov    0x4(%eax),%eax
085f2c28 +0x126:  lea    0x4e40(%eax),%edx
085f2c2e +0x12c:  lea    -0x18(%ebp),%eax
085f2c31 +0x12f:  mov    %eax,0x4(%esp)
085f2c35 +0x133:  mov    %edx,(%esp)
085f2c38 +0x136:  call   080cbabe <_GLOBAL__I__ZN10BingoEventC2Ev+0x90b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x90b
085f2c3d +0x13b:  mov    -0xc(%ebp),%edx
085f2c40 +0x13e:  add    %edx,%eax
085f2c42 +0x140:  mov    %eax,-0x14(%ebp)
085f2c45 +0x143:  mov    -0x14(%ebp),%eax
085f2c48 +0x146:  leave
085f2c49 +0x147:  ret
```

## 反编译 C

```c
// random_option::CRandomOptionItemHandle::_get_option_value @ 0x85f2b02

/* random_option::CRandomOptionItemHandle::_get_option_value(int, int) */

int __thiscall
random_option::CRandomOptionItemHandle::_get_option_value
          (CRandomOptionItemHandle *this,int param_1,int param_2)

{
  int iVar1;
  float local_64;
  float local_60;
  ulong local_58;
  undefined1 local_54 [24];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  ulong local_1c;
  uint local_18;
  ulong local_14;
  int local_10;
  
  iVar1 = GetRandomOption();
  local_58 = *(ulong *)(iVar1 + 0xf0);
  local_18 = CMTRand::randInt((CMTRand *)(*(int *)(this + 4) + 0x4478),&local_58);
  CRandomListEx<OptionValueRatio>::CRandomListEx
            ((CRandomListEx<OptionValueRatio> *)&local_3c,local_18);
  GetRandomOption();
  std::vector<OptionValueRatio,std::allocator<OptionValueRatio>>::end();
  GetRandomOption();
  std::vector<OptionValueRatio,std::allocator<OptionValueRatio>>::begin();
  std::
  for_each<__gnu_cxx::__normal_iterator<OptionValueRatio_const*,std::vector<OptionValueRatio,std::allocator<OptionValueRatio>>>,CRandomListEx<OptionValueRatio>>
            (local_54,local_20,local_24,local_3c,local_38,local_34,local_30,local_2c,local_28);
  CRandomListEx<OptionValueRatio>::get_value();
  local_1c = (ulong)ROUND(local_64 * (float)(param_2 - param_1));
  local_10 = (int)ROUND(local_60 * (float)param_1);
  local_14 = local_1c;
  iVar1 = CMTRand::randInt((CMTRand *)(*(int *)(this + 4) + 0x4e40),&local_1c);
  return iVar1 + local_10;
}
```
