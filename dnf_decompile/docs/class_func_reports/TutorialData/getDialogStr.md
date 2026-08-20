# getDialogStr

`_ZN12TutorialData12getDialogStrEjj`

`TutorialData::getDialogStr(unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TutorialData` | `0x08ab852e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ab852e  _ZN12TutorialData12getDialogStrEjj
#           TutorialData::getDialogStr(unsigned int, unsigned int)
# range [0x08ab852e, 0x08ab85dd]
08ab852e +0x00:  push   %ebp
08ab852f +0x01:  mov    %esp,%ebp
08ab8531 +0x03:  sub    $0x28,%esp
08ab8534 +0x06:  mov    0x10(%ebp),%eax
08ab8537 +0x09:  mov    %eax,-0x10(%ebp)
08ab853a +0x0c:  mov    0x8(%ebp),%eax
08ab853d +0x0f:  lea    0x4(%eax),%ecx
08ab8540 +0x12:  lea    -0x14(%ebp),%eax
08ab8543 +0x15:  lea    -0x10(%ebp),%edx
08ab8546 +0x18:  mov    %edx,0x8(%esp)
08ab854a +0x1c:  mov    %ecx,0x4(%esp)
08ab854e +0x20:  mov    %eax,(%esp)
08ab8551 +0x23:  call   08ab9af2 <_GLOBAL__I__ZN12TutorialDataC2Ev+0x32d>  ; global constructors keyed to TutorialData::TutorialData()+0x32d
08ab8556 +0x28:  sub    $0x4,%esp
08ab8559 +0x2b:  mov    0x8(%ebp),%eax
08ab855c +0x2e:  lea    0x4(%eax),%edx
08ab855f +0x31:  lea    -0xc(%ebp),%eax
08ab8562 +0x34:  mov    %edx,0x4(%esp)
08ab8566 +0x38:  mov    %eax,(%esp)
08ab8569 +0x3b:  call   08ab9b1e <_GLOBAL__I__ZN12TutorialDataC2Ev+0x359>  ; global constructors keyed to TutorialData::TutorialData()+0x359
08ab856e +0x40:  sub    $0x4,%esp
08ab8571 +0x43:  lea    -0xc(%ebp),%eax
08ab8574 +0x46:  mov    %eax,0x4(%esp)
08ab8578 +0x4a:  lea    -0x14(%ebp),%eax
08ab857b +0x4d:  mov    %eax,(%esp)
08ab857e +0x50:  call   08ab9cf6 <_GLOBAL__I__ZN12TutorialDataC2Ev+0x531>  ; global constructors keyed to TutorialData::TutorialData()+0x531
08ab8583 +0x55:  test   %al,%al
08ab8585 +0x57:  je     08ab858e <+0x60>
08ab8587 +0x59:  mov    $0x0,%eax
08ab858c +0x5e:  jmp    08ab85dc <+0xae>
08ab858e +0x60:  lea    -0x14(%ebp),%eax
08ab8591 +0x63:  mov    %eax,(%esp)
08ab8594 +0x66:  call   08ab9b58 <_GLOBAL__I__ZN12TutorialDataC2Ev+0x393>  ; global constructors keyed to TutorialData::TutorialData()+0x393
08ab8599 +0x6b:  add    $0x4,%eax
08ab859c +0x6e:  mov    %eax,(%esp)
08ab859f +0x71:  call   08ab9d0a <_GLOBAL__I__ZN12TutorialDataC2Ev+0x545>  ; global constructors keyed to TutorialData::TutorialData()+0x545
08ab85a4 +0x76:  cmp    0xc(%ebp),%eax
08ab85a7 +0x79:  seta   %al
08ab85aa +0x7c:  test   %al,%al
08ab85ac +0x7e:  je     08ab85d7 <+0xa9>
08ab85ae +0x80:  lea    -0x14(%ebp),%eax
08ab85b1 +0x83:  mov    %eax,(%esp)
08ab85b4 +0x86:  call   08ab9b58 <_GLOBAL__I__ZN12TutorialDataC2Ev+0x393>  ; global constructors keyed to TutorialData::TutorialData()+0x393
08ab85b9 +0x8b:  lea    0x4(%eax),%edx
08ab85bc +0x8e:  mov    0xc(%ebp),%eax
08ab85bf +0x91:  mov    %eax,0x4(%esp)
08ab85c3 +0x95:  mov    %edx,(%esp)
08ab85c6 +0x98:  call   08ab9d26 <_GLOBAL__I__ZN12TutorialDataC2Ev+0x561>  ; global constructors keyed to TutorialData::TutorialData()+0x561
08ab85cb +0x9d:  mov    (%eax),%eax
08ab85cd +0x9f:  mov    %eax,(%esp)
08ab85d0 +0xa2:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08ab85d5 +0xa7:  jmp    08ab85dc <+0xae>
08ab85d7 +0xa9:  mov    $0x0,%eax
08ab85dc +0xae:  leave
08ab85dd +0xaf:  ret
```

## 反编译 C

```c
// TutorialData::getDialogStr @ 0x8ab852e

/* TutorialData::getDialogStr(unsigned int, unsigned int) */

undefined4 __thiscall TutorialData::getDialogStr(TutorialData *this,uint param_1,uint param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  _Rb_tree_iterator<std::pair<int_const,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>>>
  local_18 [4];
  uint local_14;
  map<int,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>>>>
  local_10 [12];
  
  local_14 = param_2;
  std::
  map<int,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>>>>
  ::find((int *)local_18);
  std::
  map<int,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>>>>
  ::end(local_10);
  cVar1 = std::
          _Rb_tree_iterator<std::pair<int_const,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>>>
          ::operator==(local_18,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    iVar3 = std::
            _Rb_tree_iterator<std::pair<int_const,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>>>
            ::operator->(local_18);
    uVar4 = std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>::size
                      ((vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>
                        *)(iVar3 + 4));
    if (param_1 < uVar4) {
      iVar3 = std::
              _Rb_tree_iterator<std::pair<int_const,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>>>
              ::operator->(local_18);
      puVar5 = (undefined4 *)
               std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>::at
                         ((vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>
                           *)(iVar3 + 4),param_1);
      uVar2 = std::string::c_str((string *)*puVar5);
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
