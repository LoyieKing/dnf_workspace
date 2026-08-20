# find

`_ZN17Arad_GiftItem_Set4findEiii`

`Arad_GiftItem_Set::find(int, int, int)`

| 类 | 地址 |
|---|---|
| `Arad_GiftItem_Set` | `0x081a311e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081a311e  _ZN17Arad_GiftItem_Set4findEiii
#           Arad_GiftItem_Set::find(int, int, int)
# range [0x081a311e, 0x081a31c3]
081a311e +0x00:  push   %ebp
081a311f +0x01:  mov    %esp,%ebp
081a3121 +0x03:  push   %ebx
081a3122 +0x04:  sub    $0x34,%esp
081a3125 +0x07:  mov    0xc(%ebp),%eax
081a3128 +0x0a:  mov    %eax,%edx
081a312a +0x0c:  sar    $0x1f,%edx
081a312d +0x0f:  mov    %eax,%ecx
081a312f +0x11:  mov    %edx,%ebx
081a3131 +0x13:  mov    %ecx,%ebx
081a3133 +0x15:  mov    $0x0,%ecx
081a3138 +0x1a:  mov    0x10(%ebp),%eax
081a313b +0x1d:  movzwl %ax,%eax
081a313e +0x20:  shl    $0x10,%eax
081a3141 +0x23:  mov    %eax,%edx
081a3143 +0x25:  sar    $0x1f,%edx
081a3146 +0x28:  add    %eax,%ecx
081a3148 +0x2a:  adc    %edx,%ebx
081a314a +0x2c:  mov    0x14(%ebp),%eax
081a314d +0x2f:  mov    %eax,%edx
081a314f +0x31:  sar    $0x1f,%edx
081a3152 +0x34:  add    %ecx,%eax
081a3154 +0x36:  adc    %ebx,%edx
081a3156 +0x38:  mov    %eax,-0x18(%ebp)
081a3159 +0x3b:  mov    %edx,-0x14(%ebp)
081a315c +0x3e:  mov    0x8(%ebp),%eax
081a315f +0x41:  lea    0x4(%eax),%ecx
081a3162 +0x44:  lea    -0x1c(%ebp),%eax
081a3165 +0x47:  lea    -0x18(%ebp),%edx
081a3168 +0x4a:  mov    %edx,0x8(%esp)
081a316c +0x4e:  mov    %ecx,0x4(%esp)
081a3170 +0x52:  mov    %eax,(%esp)
081a3173 +0x55:  call   081a48ba <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x915>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x915
081a3178 +0x5a:  sub    $0x4,%esp
081a317b +0x5d:  mov    0x8(%ebp),%eax
081a317e +0x60:  lea    0x4(%eax),%edx
081a3181 +0x63:  lea    -0xc(%ebp),%eax
081a3184 +0x66:  mov    %edx,0x4(%esp)
081a3188 +0x6a:  mov    %eax,(%esp)
081a318b +0x6d:  call   081a48e6 <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x941>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x941
081a3190 +0x72:  sub    $0x4,%esp
081a3193 +0x75:  lea    -0xc(%ebp),%eax
081a3196 +0x78:  mov    %eax,0x4(%esp)
081a319a +0x7c:  lea    -0x1c(%ebp),%eax
081a319d +0x7f:  mov    %eax,(%esp)
081a31a0 +0x82:  call   081a490c <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x967>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x967
081a31a5 +0x87:  test   %al,%al
081a31a7 +0x89:  je     081a31b9 <+0x9b>
081a31a9 +0x8b:  lea    -0x1c(%ebp),%eax
081a31ac +0x8e:  mov    %eax,(%esp)
081a31af +0x91:  call   081a4920 <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x97b>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x97b
081a31b4 +0x96:  add    $0x8,%eax
081a31b7 +0x99:  jmp    081a31be <+0xa0>
081a31b9 +0x9b:  mov    $0x0,%eax
081a31be +0xa0:  mov    -0x4(%ebp),%ebx
081a31c1 +0xa3:  leave
081a31c2 +0xa4:  ret
081a31c3 +0xa5:  nop
```

## 反编译 C

```c
// Arad_GiftItem_Set::find @ 0x81a311e

/* Arad_GiftItem_Set::find(int, int, int) */

int __thiscall Arad_GiftItem_Set::find(Arad_GiftItem_Set *this,int param_1,int param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  _Rb_tree_iterator<std::pair<long_long_const,Arad_GiftItem_Set::Data>> local_20 [4];
  int local_1c;
  int local_18;
  map<long_long,Arad_GiftItem_Set::Data,std::less<long_long>,std::allocator<std::pair<long_long_const,Arad_GiftItem_Set::Data>>>
  local_10 [8];
  
  uVar2 = param_2 * 0x10000;
  local_1c = param_3 + uVar2;
  local_18 = (param_3 >> 0x1f) + param_1 + ((int)uVar2 >> 0x1f) + (uint)CARRY4(param_3,uVar2);
  std::
  map<long_long,Arad_GiftItem_Set::Data,std::less<long_long>,std::allocator<std::pair<long_long_const,Arad_GiftItem_Set::Data>>>
  ::find((longlong *)local_20);
  std::
  map<long_long,Arad_GiftItem_Set::Data,std::less<long_long>,std::allocator<std::pair<long_long_const,Arad_GiftItem_Set::Data>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<long_long_const,Arad_GiftItem_Set::Data>>::operator!=
                    (local_20,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    iVar3 = 0;
  }
  else {
    iVar3 = std::_Rb_tree_iterator<std::pair<long_long_const,Arad_GiftItem_Set::Data>>::operator->
                      (local_20);
    iVar3 = iVar3 + 8;
  }
  return iVar3;
}
```
