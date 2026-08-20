# _checkFitSlot

`_ZN10CTitleBook13_checkFitSlotEi24ENUM_TITLE_BOOK_CATEGORYi`

`CTitleBook::_checkFitSlot(int, ENUM_TITLE_BOOK_CATEGORY, int)`

| 类 | 地址 |
|---|---|
| `CTitleBook` | `0x08642d42` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08642d42  _ZN10CTitleBook13_checkFitSlotEi24ENUM_TITLE_BOOK_CATEGORYi
#           CTitleBook::_checkFitSlot(int, ENUM_TITLE_BOOK_CATEGORY, int)
# range [0x08642d42, 0x08642ec1]
08642d42 +0x000:  push   %ebp
08642d43 +0x001:  mov    %esp,%ebp
08642d45 +0x003:  sub    $0x38,%esp
08642d48 +0x006:  mov    0xc(%ebp),%eax
08642d4b +0x009:  mov    %eax,-0x24(%ebp)
08642d4e +0x00c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08642d53 +0x011:  lea    0xa7a0(%eax),%ecx
08642d59 +0x017:  lea    -0x28(%ebp),%eax
08642d5c +0x01a:  lea    -0x24(%ebp),%edx
08642d5f +0x01d:  mov    %edx,0x8(%esp)
08642d63 +0x021:  mov    %ecx,0x4(%esp)
08642d67 +0x025:  mov    %eax,(%esp)
08642d6a +0x028:  call   0828df8c <_GLOBAL__I__ZN12CAchievementC2Ev+0x739>  ; global constructors keyed to CAchievement::CAchievement()+0x739
08642d6f +0x02d:  sub    $0x4,%esp
08642d72 +0x030:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08642d77 +0x035:  lea    0xa7a0(%eax),%edx
08642d7d +0x03b:  lea    -0x20(%ebp),%eax
08642d80 +0x03e:  mov    %edx,0x4(%esp)
08642d84 +0x042:  mov    %eax,(%esp)
08642d87 +0x045:  call   0828dfb8 <_GLOBAL__I__ZN12CAchievementC2Ev+0x765>  ; global constructors keyed to CAchievement::CAchievement()+0x765
08642d8c +0x04a:  sub    $0x4,%esp
08642d8f +0x04d:  lea    -0x20(%ebp),%eax
08642d92 +0x050:  mov    %eax,0x4(%esp)
08642d96 +0x054:  lea    -0x28(%ebp),%eax
08642d99 +0x057:  mov    %eax,(%esp)
08642d9c +0x05a:  call   0828f07a <_GLOBAL__I__ZN12CAchievementC2Ev+0x1827>  ; global constructors keyed to CAchievement::CAchievement()+0x1827
08642da1 +0x05f:  test   %al,%al
08642da3 +0x061:  je     08642daf <+0x6d>
08642da5 +0x063:  mov    $0x0,%eax
08642daa +0x068:  jmp    08642ebf <+0x17d>
08642daf +0x06d:  lea    -0x28(%ebp),%eax
08642db2 +0x070:  mov    %eax,(%esp)
08642db5 +0x073:  call   0828dff2 <_GLOBAL__I__ZN12CAchievementC2Ev+0x79f>  ; global constructors keyed to CAchievement::CAchievement()+0x79f
08642dba +0x078:  add    $0x4,%eax
08642dbd +0x07b:  mov    %eax,-0xc(%ebp)
08642dc0 +0x07e:  mov    -0xc(%ebp),%eax
08642dc3 +0x081:  mov    %eax,(%esp)
08642dc6 +0x084:  call   0828e258 <_GLOBAL__I__ZN12CAchievementC2Ev+0xa05>  ; global constructors keyed to CAchievement::CAchievement()+0xa05
08642dcb +0x089:  cmp    0x10(%ebp),%eax
08642dce +0x08c:  setle  %al
08642dd1 +0x08f:  test   %al,%al
08642dd3 +0x091:  je     08642ddf <+0x9d>
08642dd5 +0x093:  mov    $0x0,%eax
08642dda +0x098:  jmp    08642ebf <+0x17d>
08642ddf +0x09d:  mov    0x10(%ebp),%eax
08642de2 +0x0a0:  mov    %eax,0x4(%esp)
08642de6 +0x0a4:  mov    -0xc(%ebp),%eax
08642de9 +0x0a7:  mov    %eax,(%esp)
08642dec +0x0aa:  call   08643162 <_GLOBAL__I__ZN10CTitleBookC2Ev+0x33>  ; global constructors keyed to CTitleBook::CTitleBook()+0x33
08642df1 +0x0af:  lea    0x4(%eax),%edx
08642df4 +0x0b2:  lea    -0x18(%ebp),%eax
08642df7 +0x0b5:  mov    %edx,0x4(%esp)
08642dfb +0x0b9:  mov    %eax,(%esp)
08642dfe +0x0bc:  call   080cd37a <_GLOBAL__I__ZN10BingoEventC2Ev+0x21c7>  ; global constructors keyed to BingoEvent::BingoEvent()+0x21c7
08642e03 +0x0c1:  sub    $0x4,%esp
08642e06 +0x0c4:  mov    0x10(%ebp),%eax
08642e09 +0x0c7:  mov    %eax,0x4(%esp)
08642e0d +0x0cb:  mov    -0xc(%ebp),%eax
08642e10 +0x0ce:  mov    %eax,(%esp)
08642e13 +0x0d1:  call   08643162 <_GLOBAL__I__ZN10CTitleBookC2Ev+0x33>  ; global constructors keyed to CTitleBook::CTitleBook()+0x33
08642e18 +0x0d6:  lea    0x4(%eax),%edx
08642e1b +0x0d9:  lea    -0x14(%ebp),%eax
08642e1e +0x0dc:  mov    %edx,0x4(%esp)
08642e22 +0x0e0:  mov    %eax,(%esp)
08642e25 +0x0e3:  call   080cd34e <_GLOBAL__I__ZN10BingoEventC2Ev+0x219b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x219b
08642e2a +0x0e8:  sub    $0x4,%esp
08642e2d +0x0eb:  lea    -0x1c(%ebp),%eax
08642e30 +0x0ee:  lea    0x8(%ebp),%edx
08642e33 +0x0f1:  mov    %edx,0xc(%esp)
08642e37 +0x0f5:  mov    -0x18(%ebp),%edx
08642e3a +0x0f8:  mov    %edx,0x8(%esp)
08642e3e +0x0fc:  mov    -0x14(%ebp),%edx
08642e41 +0x0ff:  mov    %edx,0x4(%esp)
08642e45 +0x103:  mov    %eax,(%esp)
08642e48 +0x106:  call   08394b33 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x245d3>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x245d3
08642e4d +0x10b:  sub    $0x4,%esp
08642e50 +0x10e:  mov    0x10(%ebp),%eax
08642e53 +0x111:  mov    %eax,0x4(%esp)
08642e57 +0x115:  mov    -0xc(%ebp),%eax
08642e5a +0x118:  mov    %eax,(%esp)
08642e5d +0x11b:  call   08643162 <_GLOBAL__I__ZN10CTitleBookC2Ev+0x33>  ; global constructors keyed to CTitleBook::CTitleBook()+0x33
08642e62 +0x120:  lea    0x4(%eax),%edx
08642e65 +0x123:  lea    -0x10(%ebp),%eax
08642e68 +0x126:  mov    %edx,0x4(%esp)
08642e6c +0x12a:  mov    %eax,(%esp)
08642e6f +0x12d:  call   080cd37a <_GLOBAL__I__ZN10BingoEventC2Ev+0x21c7>  ; global constructors keyed to BingoEvent::BingoEvent()+0x21c7
08642e74 +0x132:  sub    $0x4,%esp
08642e77 +0x135:  lea    -0x1c(%ebp),%eax
08642e7a +0x138:  mov    %eax,0x4(%esp)
08642e7e +0x13c:  lea    -0x10(%ebp),%eax
08642e81 +0x13f:  mov    %eax,(%esp)
08642e84 +0x142:  call   080f9a26 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x232>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x232
08642e89 +0x147:  test   %al,%al
08642e8b +0x149:  je     08642e94 <+0x152>
08642e8d +0x14b:  mov    $0x1,%eax
08642e92 +0x150:  jmp    08642ebf <+0x17d>
08642e94 +0x152:  mov    0x10(%ebp),%eax
08642e97 +0x155:  mov    %eax,0x4(%esp)
08642e9b +0x159:  mov    -0xc(%ebp),%eax
08642e9e +0x15c:  mov    %eax,(%esp)
08642ea1 +0x15f:  call   08643162 <_GLOBAL__I__ZN10CTitleBookC2Ev+0x33>  ; global constructors keyed to CTitleBook::CTitleBook()+0x33
08642ea6 +0x164:  mov    0x1c(%eax),%eax
08642ea9 +0x167:  cmp    $0xffffffff,%eax
08642eac +0x16a:  sete   %al
08642eaf +0x16d:  test   %al,%al
08642eb1 +0x16f:  je     08642eba <+0x178>
08642eb3 +0x171:  mov    $0x1,%eax
08642eb8 +0x176:  jmp    08642ebf <+0x17d>
08642eba +0x178:  mov    $0x0,%eax
08642ebf +0x17d:  leave
08642ec0 +0x17e:  ret
08642ec1 +0x17f:  nop
```

## 反编译 C

```c
// CTitleBook::_checkFitSlot @ 0x8642d42

/* CTitleBook::_checkFitSlot(int, ENUM_TITLE_BOOK_CATEGORY, int) */

undefined4 CTitleBook::_checkFitSlot(undefined4 param_1,undefined4 param_2,uint param_3)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  _Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
  local_2c [4];
  undefined4 local_28;
  map<int,std::vector<stTitleElement,std::allocator<stTitleElement>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>>
  local_24 [4];
  undefined1 local_20 [4];
  undefined4 local_1c;
  undefined4 local_18;
  __normal_iterator local_14 [4];
  vector<stTitleElement,std::allocator<stTitleElement>> *local_10;
  
  local_28 = param_2;
  G_CDataManager();
  std::
  map<int,std::vector<stTitleElement,std::allocator<stTitleElement>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>>
  ::find((int *)local_2c);
  G_CDataManager();
  std::
  map<int,std::vector<stTitleElement,std::allocator<stTitleElement>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>>
  ::end(local_24);
  cVar1 = std::
          _Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
          ::operator==(local_2c,(_Rb_tree_iterator *)local_24);
  if (cVar1 == '\0') {
    iVar4 = std::
            _Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
            ::operator->(local_2c);
    local_10 = (vector<stTitleElement,std::allocator<stTitleElement>> *)(iVar4 + 4);
    iVar4 = std::vector<stTitleElement,std::allocator<stTitleElement>>::size(local_10);
    if ((int)param_3 < iVar4) {
      std::vector<stTitleElement,std::allocator<stTitleElement>>::operator[](local_10,param_3);
      std::vector<int,std::allocator<int>>::end();
      std::vector<stTitleElement,std::allocator<stTitleElement>>::operator[](local_10,param_3);
      std::vector<int,std::allocator<int>>::begin();
      std::find<__gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>,int>
                (local_20,local_18,local_1c,&param_1);
      std::vector<stTitleElement,std::allocator<stTitleElement>>::operator[](local_10,param_3);
      std::vector<int,std::allocator<int>>::end();
      bVar2 = __gnu_cxx::operator!=(local_14,local_20);
      if (bVar2) {
        uVar3 = 1;
      }
      else {
        iVar4 = std::vector<stTitleElement,std::allocator<stTitleElement>>::operator[]
                          (local_10,param_3);
        if (*(int *)(iVar4 + 0x1c) == -1) {
          uVar3 = 1;
        }
        else {
          uVar3 = 0;
        }
      }
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```
