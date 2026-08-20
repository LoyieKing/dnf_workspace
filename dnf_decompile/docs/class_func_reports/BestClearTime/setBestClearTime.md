# setBestClearTime

`_ZN13BestClearTime16setBestClearTimeEiii`

`BestClearTime::setBestClearTime(int, int, int)`

| 类 | 地址 |
|---|---|
| `BestClearTime` | `0x080c8928` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080c8928  _ZN13BestClearTime16setBestClearTimeEiii
#           BestClearTime::setBestClearTime(int, int, int)
# range [0x080c8928, 0x080c8abf]
080c8928 +0x000:  push   %ebp
080c8929 +0x001:  mov    %esp,%ebp
080c892b +0x003:  sub    $0x78,%esp
080c892e +0x006:  cmpl   $0x4,0x10(%ebp)
080c8932 +0x00a:  jg     080c8abc <+0x194>
080c8938 +0x010:  cmpl   $0x0,0x14(%ebp)
080c893c +0x014:  jns    080c8945 <+0x1d>
080c893e +0x016:  movl   $0x0,0x14(%ebp)
080c8945 +0x01d:  mov    0x8(%ebp),%eax
080c8948 +0x020:  lea    0x8(%eax),%ecx
080c894b +0x023:  lea    -0x48(%ebp),%eax
080c894e +0x026:  lea    0xc(%ebp),%edx
080c8951 +0x029:  mov    %edx,0x8(%esp)
080c8955 +0x02d:  mov    %ecx,0x4(%esp)
080c8959 +0x031:  mov    %eax,(%esp)
080c895c +0x034:  call   080c8ebe <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x316>  ; global constructors keyed to BestClearTime::BestClearTime()+0x316
080c8961 +0x039:  sub    $0x4,%esp
080c8964 +0x03c:  mov    0x8(%ebp),%eax
080c8967 +0x03f:  lea    0x8(%eax),%edx
080c896a +0x042:  lea    -0x44(%ebp),%eax
080c896d +0x045:  mov    %edx,0x4(%esp)
080c8971 +0x049:  mov    %eax,(%esp)
080c8974 +0x04c:  call   080c8eea <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x342>  ; global constructors keyed to BestClearTime::BestClearTime()+0x342
080c8979 +0x051:  sub    $0x4,%esp
080c897c +0x054:  lea    -0x44(%ebp),%eax
080c897f +0x057:  mov    %eax,0x4(%esp)
080c8983 +0x05b:  lea    -0x48(%ebp),%eax
080c8986 +0x05e:  mov    %eax,(%esp)
080c8989 +0x061:  call   080c8f10 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x368>  ; global constructors keyed to BestClearTime::BestClearTime()+0x368
080c898e +0x066:  test   %al,%al
080c8990 +0x068:  je     080c8a1b <+0xf3>
080c8996 +0x06e:  lea    -0x5c(%ebp),%eax
080c8999 +0x071:  mov    %eax,(%esp)
080c899c +0x074:  call   080c8c72 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xca>  ; global constructors keyed to BestClearTime::BestClearTime()+0xca
080c89a1 +0x079:  mov    0x10(%ebp),%eax
080c89a4 +0x07c:  mov    0x14(%ebp),%edx
080c89a7 +0x07f:  mov    %edx,-0x5c(%ebp,%eax,4)
080c89ab +0x083:  lea    -0x20(%ebp),%eax
080c89ae +0x086:  lea    -0x5c(%ebp),%edx
080c89b1 +0x089:  mov    %edx,0x8(%esp)
080c89b5 +0x08d:  lea    0xc(%ebp),%edx
080c89b8 +0x090:  mov    %edx,0x4(%esp)
080c89bc +0x094:  mov    %eax,(%esp)
080c89bf +0x097:  call   080c8d7f <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x1d7>  ; global constructors keyed to BestClearTime::BestClearTime()+0x1d7
080c89c4 +0x09c:  sub    $0x4,%esp
080c89c7 +0x09f:  lea    -0x20(%ebp),%eax
080c89ca +0x0a2:  mov    %eax,0x4(%esp)
080c89ce +0x0a6:  lea    -0x38(%ebp),%eax
080c89d1 +0x0a9:  mov    %eax,(%esp)
080c89d4 +0x0ac:  call   080c8dbe <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x216>  ; global constructors keyed to BestClearTime::BestClearTime()+0x216
080c89d9 +0x0b1:  mov    0x8(%ebp),%eax
080c89dc +0x0b4:  lea    0x8(%eax),%ecx
080c89df +0x0b7:  lea    -0x40(%ebp),%eax
080c89e2 +0x0ba:  lea    -0x38(%ebp),%edx
080c89e5 +0x0bd:  mov    %edx,0x8(%esp)
080c89e9 +0x0c1:  mov    %ecx,0x4(%esp)
080c89ed +0x0c5:  mov    %eax,(%esp)
080c89f0 +0x0c8:  call   080c8e06 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x25e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x25e
080c89f5 +0x0cd:  sub    $0x4,%esp
080c89f8 +0x0d0:  movl   $0x1,0x4(%esp)
080c8a00 +0x0d8:  mov    0x8(%ebp),%eax
080c8a03 +0x0db:  mov    %eax,(%esp)
080c8a06 +0x0de:  call   080c8b44 <_ZN13BestClearTime12setNewRecordEb>  ; BestClearTime::setNewRecord(bool)
080c8a0b +0x0e3:  mov    0x8(%ebp),%eax
080c8a0e +0x0e6:  mov    %eax,(%esp)
080c8a11 +0x0e9:  call   080c8bc4 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x1c>  ; global constructors keyed to BestClearTime::BestClearTime()+0x1c
080c8a16 +0x0ee:  jmp    080c8abd <+0x195>
080c8a1b +0x0f3:  lea    -0x48(%ebp),%eax
080c8a1e +0x0f6:  mov    %eax,(%esp)
080c8a21 +0x0f9:  call   080c8f24 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x37c>  ; global constructors keyed to BestClearTime::BestClearTime()+0x37c
080c8a26 +0x0fe:  mov    0x10(%ebp),%edx
080c8a29 +0x101:  mov    0x4(%eax,%edx,4),%eax
080c8a2d +0x105:  test   %eax,%eax
080c8a2f +0x107:  sete   %al
080c8a32 +0x10a:  test   %al,%al
080c8a34 +0x10c:  je     080c8a6b <+0x143>
080c8a36 +0x10e:  lea    -0x48(%ebp),%eax
080c8a39 +0x111:  mov    %eax,(%esp)
080c8a3c +0x114:  call   080c8f24 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x37c>  ; global constructors keyed to BestClearTime::BestClearTime()+0x37c
080c8a41 +0x119:  mov    0x10(%ebp),%edx
080c8a44 +0x11c:  mov    0x14(%ebp),%ecx
080c8a47 +0x11f:  mov    %ecx,0x4(%eax,%edx,4)
080c8a4b +0x123:  movl   $0x1,0x4(%esp)
080c8a53 +0x12b:  mov    0x8(%ebp),%eax
080c8a56 +0x12e:  mov    %eax,(%esp)
080c8a59 +0x131:  call   080c8b44 <_ZN13BestClearTime12setNewRecordEb>  ; BestClearTime::setNewRecord(bool)
080c8a5e +0x136:  mov    0x8(%ebp),%eax
080c8a61 +0x139:  mov    %eax,(%esp)
080c8a64 +0x13c:  call   080c8bc4 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x1c>  ; global constructors keyed to BestClearTime::BestClearTime()+0x1c
080c8a69 +0x141:  jmp    080c8abd <+0x195>
080c8a6b +0x143:  lea    -0x48(%ebp),%eax
080c8a6e +0x146:  mov    %eax,(%esp)
080c8a71 +0x149:  call   080c8f24 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x37c>  ; global constructors keyed to BestClearTime::BestClearTime()+0x37c
080c8a76 +0x14e:  mov    0x10(%ebp),%edx
080c8a79 +0x151:  mov    0x4(%eax,%edx,4),%eax
080c8a7d +0x155:  cmp    0x14(%ebp),%eax
080c8a80 +0x158:  setg   %al
080c8a83 +0x15b:  test   %al,%al
080c8a85 +0x15d:  je     080c8abd <+0x195>
080c8a87 +0x15f:  lea    -0x48(%ebp),%eax
080c8a8a +0x162:  mov    %eax,(%esp)
080c8a8d +0x165:  call   080c8f24 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x37c>  ; global constructors keyed to BestClearTime::BestClearTime()+0x37c
080c8a92 +0x16a:  mov    0x10(%ebp),%edx
080c8a95 +0x16d:  mov    0x14(%ebp),%ecx
080c8a98 +0x170:  mov    %ecx,0x4(%eax,%edx,4)
080c8a9c +0x174:  movl   $0x1,0x4(%esp)
080c8aa4 +0x17c:  mov    0x8(%ebp),%eax
080c8aa7 +0x17f:  mov    %eax,(%esp)
080c8aaa +0x182:  call   080c8b44 <_ZN13BestClearTime12setNewRecordEb>  ; BestClearTime::setNewRecord(bool)
080c8aaf +0x187:  mov    0x8(%ebp),%eax
080c8ab2 +0x18a:  mov    %eax,(%esp)
080c8ab5 +0x18d:  call   080c8bc4 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x1c>  ; global constructors keyed to BestClearTime::BestClearTime()+0x1c
080c8aba +0x192:  jmp    080c8abd <+0x195>
080c8abc +0x194:  nop
080c8abd +0x195:  leave
080c8abe +0x196:  ret
080c8abf +0x197:  nop
```

## 反编译 C

```c
// BestClearTime::setBestClearTime @ 0x80c8928

/* BestClearTime::setBestClearTime(int, int, int) */

void __thiscall
BestClearTime::setBestClearTime(BestClearTime *this,int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  SIG_BEST_CLEAR_TIME_DIFFICULTY local_60 [20];
  _Rb_tree_iterator<std::pair<int_const,SIG_BEST_CLEAR_TIME_DIFFICULTY>> local_4c [4];
  map<int,SIG_BEST_CLEAR_TIME_DIFFICULTY,std::less<int>,std::allocator<std::pair<int_const,SIG_BEST_CLEAR_TIME_DIFFICULTY>>>
  local_48 [4];
  pair local_44 [8];
  pair<int_const,SIG_BEST_CLEAR_TIME_DIFFICULTY> local_3c [24];
  int local_24 [8];
  
  if (param_2 < 5) {
    if (param_3 < 0) {
      param_3 = 0;
    }
    std::
    map<int,SIG_BEST_CLEAR_TIME_DIFFICULTY,std::less<int>,std::allocator<std::pair<int_const,SIG_BEST_CLEAR_TIME_DIFFICULTY>>>
    ::find((int *)local_4c);
    std::
    map<int,SIG_BEST_CLEAR_TIME_DIFFICULTY,std::less<int>,std::allocator<std::pair<int_const,SIG_BEST_CLEAR_TIME_DIFFICULTY>>>
    ::end(local_48);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,SIG_BEST_CLEAR_TIME_DIFFICULTY>>::operator==
                      (local_4c,(_Rb_tree_iterator *)local_48);
    if (cVar1 == '\0') {
      iVar2 = std::_Rb_tree_iterator<std::pair<int_const,SIG_BEST_CLEAR_TIME_DIFFICULTY>>::
              operator->(local_4c);
      if (*(int *)(iVar2 + 4 + param_2 * 4) == 0) {
        iVar2 = std::_Rb_tree_iterator<std::pair<int_const,SIG_BEST_CLEAR_TIME_DIFFICULTY>>::
                operator->(local_4c);
        *(int *)(iVar2 + 4 + param_2 * 4) = param_3;
        setNewRecord(this,true);
        charac_expand::CData::alter((CData *)this);
      }
      else {
        iVar2 = std::_Rb_tree_iterator<std::pair<int_const,SIG_BEST_CLEAR_TIME_DIFFICULTY>>::
                operator->(local_4c);
        if (param_3 < *(int *)(iVar2 + 4 + param_2 * 4)) {
          iVar2 = std::_Rb_tree_iterator<std::pair<int_const,SIG_BEST_CLEAR_TIME_DIFFICULTY>>::
                  operator->(local_4c);
          *(int *)(iVar2 + 4 + param_2 * 4) = param_3;
          setNewRecord(this,true);
          charac_expand::CData::alter((CData *)this);
        }
      }
    }
    else {
      SIG_BEST_CLEAR_TIME_DIFFICULTY::SIG_BEST_CLEAR_TIME_DIFFICULTY(local_60);
      *(int *)(local_60 + param_2 * 4) = param_3;
      std::make_pair<int&,SIG_BEST_CLEAR_TIME_DIFFICULTY&>
                (local_24,(SIG_BEST_CLEAR_TIME_DIFFICULTY *)&param_1);
      std::pair<int_const,SIG_BEST_CLEAR_TIME_DIFFICULTY>::pair<int,SIG_BEST_CLEAR_TIME_DIFFICULTY>
                (local_3c,(pair *)local_24);
      std::
      map<int,SIG_BEST_CLEAR_TIME_DIFFICULTY,std::less<int>,std::allocator<std::pair<int_const,SIG_BEST_CLEAR_TIME_DIFFICULTY>>>
      ::insert(local_44);
      setNewRecord(this,true);
      charac_expand::CData::alter((CData *)this);
    }
  }
  return;
}
```
