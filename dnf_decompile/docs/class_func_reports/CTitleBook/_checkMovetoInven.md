# _checkMovetoInven

`_ZN10CTitleBook17_checkMovetoInvenE24ENUM_TITLE_BOOK_CATEGORYi`

`CTitleBook::_checkMovetoInven(ENUM_TITLE_BOOK_CATEGORY, int)`

| 类 | 地址 |
|---|---|
| `CTitleBook` | `0x08641c52` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08641c52  _ZN10CTitleBook17_checkMovetoInvenE24ENUM_TITLE_BOOK_CATEGORYi
#           CTitleBook::_checkMovetoInven(ENUM_TITLE_BOOK_CATEGORY, int)
# range [0x08641c52, 0x08641d15]
08641c52 +0x00:  push   %ebp
08641c53 +0x01:  mov    %esp,%ebp
08641c55 +0x03:  sub    $0x28,%esp
08641c58 +0x06:  mov    0x8(%ebp),%eax
08641c5b +0x09:  mov    %eax,-0x14(%ebp)
08641c5e +0x0c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08641c63 +0x11:  lea    0xa7a0(%eax),%ecx
08641c69 +0x17:  lea    -0x18(%ebp),%eax
08641c6c +0x1a:  lea    -0x14(%ebp),%edx
08641c6f +0x1d:  mov    %edx,0x8(%esp)
08641c73 +0x21:  mov    %ecx,0x4(%esp)
08641c77 +0x25:  mov    %eax,(%esp)
08641c7a +0x28:  call   0828df8c <_GLOBAL__I__ZN12CAchievementC2Ev+0x739>  ; global constructors keyed to CAchievement::CAchievement()+0x739
08641c7f +0x2d:  sub    $0x4,%esp
08641c82 +0x30:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08641c87 +0x35:  lea    0xa7a0(%eax),%edx
08641c8d +0x3b:  lea    -0x10(%ebp),%eax
08641c90 +0x3e:  mov    %edx,0x4(%esp)
08641c94 +0x42:  mov    %eax,(%esp)
08641c97 +0x45:  call   0828dfb8 <_GLOBAL__I__ZN12CAchievementC2Ev+0x765>  ; global constructors keyed to CAchievement::CAchievement()+0x765
08641c9c +0x4a:  sub    $0x4,%esp
08641c9f +0x4d:  lea    -0x10(%ebp),%eax
08641ca2 +0x50:  mov    %eax,0x4(%esp)
08641ca6 +0x54:  lea    -0x18(%ebp),%eax
08641ca9 +0x57:  mov    %eax,(%esp)
08641cac +0x5a:  call   0828f07a <_GLOBAL__I__ZN12CAchievementC2Ev+0x1827>  ; global constructors keyed to CAchievement::CAchievement()+0x1827
08641cb1 +0x5f:  test   %al,%al
08641cb3 +0x61:  je     08641cbc <+0x6a>
08641cb5 +0x63:  mov    $0x0,%eax
08641cba +0x68:  jmp    08641d14 <+0xc2>
08641cbc +0x6a:  lea    -0x18(%ebp),%eax
08641cbf +0x6d:  mov    %eax,(%esp)
08641cc2 +0x70:  call   0828dff2 <_GLOBAL__I__ZN12CAchievementC2Ev+0x79f>  ; global constructors keyed to CAchievement::CAchievement()+0x79f
08641cc7 +0x75:  add    $0x4,%eax
08641cca +0x78:  mov    %eax,-0xc(%ebp)
08641ccd +0x7b:  mov    -0xc(%ebp),%eax
08641cd0 +0x7e:  mov    %eax,(%esp)
08641cd3 +0x81:  call   0828e258 <_GLOBAL__I__ZN12CAchievementC2Ev+0xa05>  ; global constructors keyed to CAchievement::CAchievement()+0xa05
08641cd8 +0x86:  cmp    0xc(%ebp),%eax
08641cdb +0x89:  setle  %al
08641cde +0x8c:  test   %al,%al
08641ce0 +0x8e:  je     08641ce9 <+0x97>
08641ce2 +0x90:  mov    $0x0,%eax
08641ce7 +0x95:  jmp    08641d14 <+0xc2>
08641ce9 +0x97:  mov    0xc(%ebp),%eax
08641cec +0x9a:  mov    %eax,0x4(%esp)
08641cf0 +0x9e:  mov    -0xc(%ebp),%eax
08641cf3 +0xa1:  mov    %eax,(%esp)
08641cf6 +0xa4:  call   08643162 <_GLOBAL__I__ZN10CTitleBookC2Ev+0x33>  ; global constructors keyed to CTitleBook::CTitleBook()+0x33
08641cfb +0xa9:  mov    0x1c(%eax),%eax
08641cfe +0xac:  cmp    $0xffffffff,%eax
08641d01 +0xaf:  sete   %al
08641d04 +0xb2:  test   %al,%al
08641d06 +0xb4:  je     08641d0f <+0xbd>
08641d08 +0xb6:  mov    $0x1,%eax
08641d0d +0xbb:  jmp    08641d14 <+0xc2>
08641d0f +0xbd:  mov    $0x0,%eax
08641d14 +0xc2:  leave
08641d15 +0xc3:  ret
```

## 反编译 C

```c
// CTitleBook::_checkMovetoInven @ 0x8641c52

/* CTitleBook::_checkMovetoInven(ENUM_TITLE_BOOK_CATEGORY, int) */

undefined4 CTitleBook::_checkMovetoInven(undefined4 param_1,uint param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  _Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
  local_1c [4];
  undefined4 local_18;
  map<int,std::vector<stTitleElement,std::allocator<stTitleElement>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>>
  local_14 [4];
  vector<stTitleElement,std::allocator<stTitleElement>> *local_10;
  
  local_18 = param_1;
  G_CDataManager();
  std::
  map<int,std::vector<stTitleElement,std::allocator<stTitleElement>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>>
  ::find((int *)local_1c);
  G_CDataManager();
  std::
  map<int,std::vector<stTitleElement,std::allocator<stTitleElement>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>>
  ::end(local_14);
  cVar1 = std::
          _Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
          ::operator==(local_1c,(_Rb_tree_iterator *)local_14);
  if (cVar1 == '\0') {
    iVar3 = std::
            _Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
            ::operator->(local_1c);
    local_10 = (vector<stTitleElement,std::allocator<stTitleElement>> *)(iVar3 + 4);
    iVar3 = std::vector<stTitleElement,std::allocator<stTitleElement>>::size(local_10);
    if ((int)param_2 < iVar3) {
      iVar3 = std::vector<stTitleElement,std::allocator<stTitleElement>>::operator[]
                        (local_10,param_2);
      if (*(int *)(iVar3 + 0x1c) == -1) {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
