# getBestClearTime

`_ZN13BestClearTime16getBestClearTimeEii`

`BestClearTime::getBestClearTime(int, int)`

| 类 | 地址 |
|---|---|
| `BestClearTime` | `0x080c8ac0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080c8ac0  _ZN13BestClearTime16getBestClearTimeEii
#           BestClearTime::getBestClearTime(int, int)
# range [0x080c8ac0, 0x080c8b43]
080c8ac0 +0x00:  push   %ebp
080c8ac1 +0x01:  mov    %esp,%ebp
080c8ac3 +0x03:  sub    $0x28,%esp
080c8ac6 +0x06:  mov    0x8(%ebp),%eax
080c8ac9 +0x09:  lea    0x8(%eax),%ecx
080c8acc +0x0c:  lea    -0x10(%ebp),%eax
080c8acf +0x0f:  lea    0xc(%ebp),%edx
080c8ad2 +0x12:  mov    %edx,0x8(%esp)
080c8ad6 +0x16:  mov    %ecx,0x4(%esp)
080c8ada +0x1a:  mov    %eax,(%esp)
080c8add +0x1d:  call   080c8ebe <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x316>  ; global constructors keyed to BestClearTime::BestClearTime()+0x316
080c8ae2 +0x22:  sub    $0x4,%esp
080c8ae5 +0x25:  mov    0x8(%ebp),%eax
080c8ae8 +0x28:  lea    0x8(%eax),%edx
080c8aeb +0x2b:  lea    -0xc(%ebp),%eax
080c8aee +0x2e:  mov    %edx,0x4(%esp)
080c8af2 +0x32:  mov    %eax,(%esp)
080c8af5 +0x35:  call   080c8eea <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x342>  ; global constructors keyed to BestClearTime::BestClearTime()+0x342
080c8afa +0x3a:  sub    $0x4,%esp
080c8afd +0x3d:  lea    -0xc(%ebp),%eax
080c8b00 +0x40:  mov    %eax,0x4(%esp)
080c8b04 +0x44:  lea    -0x10(%ebp),%eax
080c8b07 +0x47:  mov    %eax,(%esp)
080c8b0a +0x4a:  call   080c8f10 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x368>  ; global constructors keyed to BestClearTime::BestClearTime()+0x368
080c8b0f +0x4f:  test   %al,%al
080c8b11 +0x51:  jne    080c8b19 <+0x59>
080c8b13 +0x53:  cmpl   $0x4,0x10(%ebp)
080c8b17 +0x57:  jle    080c8b20 <+0x60>
080c8b19 +0x59:  mov    $0x1,%eax
080c8b1e +0x5e:  jmp    080c8b25 <+0x65>
080c8b20 +0x60:  mov    $0x0,%eax
080c8b25 +0x65:  test   %al,%al
080c8b27 +0x67:  je     080c8b30 <+0x70>
080c8b29 +0x69:  mov    $0x0,%eax
080c8b2e +0x6e:  jmp    080c8b42 <+0x82>
080c8b30 +0x70:  lea    -0x10(%ebp),%eax
080c8b33 +0x73:  mov    %eax,(%esp)
080c8b36 +0x76:  call   080c8f24 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x37c>  ; global constructors keyed to BestClearTime::BestClearTime()+0x37c
080c8b3b +0x7b:  mov    0x10(%ebp),%edx
080c8b3e +0x7e:  mov    0x4(%eax,%edx,4),%eax
080c8b42 +0x82:  leave
080c8b43 +0x83:  ret
```

## 反编译 C

```c
// BestClearTime::getBestClearTime @ 0x80c8ac0

/* BestClearTime::getBestClearTime(int, int) */

undefined4 __thiscall BestClearTime::getBestClearTime(BestClearTime *this,int param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  _Rb_tree_iterator<std::pair<int_const,SIG_BEST_CLEAR_TIME_DIFFICULTY>> local_14 [4];
  map<int,SIG_BEST_CLEAR_TIME_DIFFICULTY,std::less<int>,std::allocator<std::pair<int_const,SIG_BEST_CLEAR_TIME_DIFFICULTY>>>
  local_10 [12];
  
  std::
  map<int,SIG_BEST_CLEAR_TIME_DIFFICULTY,std::less<int>,std::allocator<std::pair<int_const,SIG_BEST_CLEAR_TIME_DIFFICULTY>>>
  ::find((int *)local_14);
  std::
  map<int,SIG_BEST_CLEAR_TIME_DIFFICULTY,std::less<int>,std::allocator<std::pair<int_const,SIG_BEST_CLEAR_TIME_DIFFICULTY>>>
  ::end(local_10);
  cVar2 = std::_Rb_tree_iterator<std::pair<int_const,SIG_BEST_CLEAR_TIME_DIFFICULTY>>::operator==
                    (local_14,(_Rb_tree_iterator *)local_10);
  if ((cVar2 == '\0') && (param_2 < 5)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    uVar3 = 0;
  }
  else {
    iVar4 = std::_Rb_tree_iterator<std::pair<int_const,SIG_BEST_CLEAR_TIME_DIFFICULTY>>::operator->
                      (local_14);
    uVar3 = *(undefined4 *)(iVar4 + 4 + param_2 * 4);
  }
  return uVar3;
}
```
