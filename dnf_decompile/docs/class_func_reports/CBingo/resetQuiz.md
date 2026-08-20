# resetQuiz

`_ZN6CBingo9resetQuizEi`

`CBingo::resetQuiz(int)`

| 类 | 地址 |
|---|---|
| `CBingo` | `0x080caa64` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080caa64  _ZN6CBingo9resetQuizEi
#           CBingo::resetQuiz(int)
# range [0x080caa64, 0x080caaf9]
080caa64 +0x00:  push   %ebp
080caa65 +0x01:  mov    %esp,%ebp
080caa67 +0x03:  sub    $0x28,%esp
080caa6a +0x06:  mov    0xc(%ebp),%eax
080caa6d +0x09:  test   %eax,%eax
080caa6f +0x0b:  jg     080caa80 <+0x1c>
080caa71 +0x0d:  mov    0xc(%ebp),%eax
080caa74 +0x10:  cmp    $0x1f,%eax
080caa77 +0x13:  jle    080caa80 <+0x1c>
080caa79 +0x15:  mov    $0x0,%eax
080caa7e +0x1a:  jmp    080caaf7 <+0x93>
080caa80 +0x1c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
080caa85 +0x21:  lea    0xb568(%eax),%ecx
080caa8b +0x27:  lea    -0x10(%ebp),%eax
080caa8e +0x2a:  lea    0xc(%ebp),%edx
080caa91 +0x2d:  mov    %edx,0x8(%esp)
080caa95 +0x31:  mov    %ecx,0x4(%esp)
080caa99 +0x35:  mov    %eax,(%esp)
080caa9c +0x38:  call   080cd2ee <_GLOBAL__I__ZN10BingoEventC2Ev+0x213b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x213b
080caaa1 +0x3d:  sub    $0x4,%esp
080caaa4 +0x40:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
080caaa9 +0x45:  lea    0xb568(%eax),%edx
080caaaf +0x4b:  lea    -0xc(%ebp),%eax
080caab2 +0x4e:  mov    %edx,0x4(%esp)
080caab6 +0x52:  mov    %eax,(%esp)
080caab9 +0x55:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
080caabe +0x5a:  sub    $0x4,%esp
080caac1 +0x5d:  lea    -0xc(%ebp),%eax
080caac4 +0x60:  mov    %eax,0x4(%esp)
080caac8 +0x64:  lea    -0x10(%ebp),%eax
080caacb +0x67:  mov    %eax,(%esp)
080caace +0x6a:  call   080c78f0 <_GLOBAL__I_g_ServerString_+0xe5b>  ; global constructors keyed to g_ServerString_+0xe5b
080caad3 +0x6f:  test   %al,%al
080caad5 +0x71:  je     080caade <+0x7a>
080caad7 +0x73:  mov    $0x0,%eax
080caadc +0x78:  jmp    080caaf7 <+0x93>
080caade +0x7a:  lea    -0x10(%ebp),%eax
080caae1 +0x7d:  mov    %eax,(%esp)
080caae4 +0x80:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
080caae9 +0x85:  mov    0x4(%eax),%edx
080caaec +0x88:  mov    0x8(%ebp),%eax
080caaef +0x8b:  mov    %edx,0xc(%eax)
080caaf2 +0x8e:  mov    $0x1,%eax
080caaf7 +0x93:  leave
080caaf8 +0x94:  ret
080caaf9 +0x95:  nop
```

## 反编译 C

```c
// CBingo::resetQuiz @ 0x80caa64

/* CBingo::resetQuiz(int) */

undefined4 __thiscall CBingo::resetQuiz(CBingo *this,int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  _Rb_tree_iterator<std::pair<int_const,int>> local_14 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_10 [12];
  
  if ((param_1 < 1) && (0x1f < param_1)) {
    uVar2 = 0;
  }
  else {
    G_CDataManager();
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find((int *)local_14)
    ;
    G_CDataManager();
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_10);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator==
                      (local_14,(_Rb_tree_iterator *)local_10);
    if (cVar1 == '\0') {
      iVar3 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_14);
      *(undefined4 *)(this + 0xc) = *(undefined4 *)(iVar3 + 4);
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}
```
