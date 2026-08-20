# getFaceIndex

`_ZN12TutorialData12getFaceIndexEjj`

`TutorialData::getFaceIndex(unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TutorialData` | `0x08ab85de` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ab85de  _ZN12TutorialData12getFaceIndexEjj
#           TutorialData::getFaceIndex(unsigned int, unsigned int)
# range [0x08ab85de, 0x08ab8689]
08ab85de +0x00:  push   %ebp
08ab85df +0x01:  mov    %esp,%ebp
08ab85e1 +0x03:  sub    $0x28,%esp
08ab85e4 +0x06:  mov    0x10(%ebp),%eax
08ab85e7 +0x09:  mov    %eax,-0x10(%ebp)
08ab85ea +0x0c:  mov    0x8(%ebp),%eax
08ab85ed +0x0f:  lea    0x4(%eax),%ecx
08ab85f0 +0x12:  lea    -0x14(%ebp),%eax
08ab85f3 +0x15:  lea    -0x10(%ebp),%edx
08ab85f6 +0x18:  mov    %edx,0x8(%esp)
08ab85fa +0x1c:  mov    %ecx,0x4(%esp)
08ab85fe +0x20:  mov    %eax,(%esp)
08ab8601 +0x23:  call   08ab9af2 <_GLOBAL__I__ZN12TutorialDataC2Ev+0x32d>  ; global constructors keyed to TutorialData::TutorialData()+0x32d
08ab8606 +0x28:  sub    $0x4,%esp
08ab8609 +0x2b:  mov    0x8(%ebp),%eax
08ab860c +0x2e:  lea    0x4(%eax),%edx
08ab860f +0x31:  lea    -0xc(%ebp),%eax
08ab8612 +0x34:  mov    %edx,0x4(%esp)
08ab8616 +0x38:  mov    %eax,(%esp)
08ab8619 +0x3b:  call   08ab9b1e <_GLOBAL__I__ZN12TutorialDataC2Ev+0x359>  ; global constructors keyed to TutorialData::TutorialData()+0x359
08ab861e +0x40:  sub    $0x4,%esp
08ab8621 +0x43:  lea    -0xc(%ebp),%eax
08ab8624 +0x46:  mov    %eax,0x4(%esp)
08ab8628 +0x4a:  lea    -0x14(%ebp),%eax
08ab862b +0x4d:  mov    %eax,(%esp)
08ab862e +0x50:  call   08ab9cf6 <_GLOBAL__I__ZN12TutorialDataC2Ev+0x531>  ; global constructors keyed to TutorialData::TutorialData()+0x531
08ab8633 +0x55:  test   %al,%al
08ab8635 +0x57:  je     08ab863e <+0x60>
08ab8637 +0x59:  mov    $0x0,%eax
08ab863c +0x5e:  jmp    08ab8687 <+0xa9>
08ab863e +0x60:  lea    -0x14(%ebp),%eax
08ab8641 +0x63:  mov    %eax,(%esp)
08ab8644 +0x66:  call   08ab9b58 <_GLOBAL__I__ZN12TutorialDataC2Ev+0x393>  ; global constructors keyed to TutorialData::TutorialData()+0x393
08ab8649 +0x6b:  add    $0x4,%eax
08ab864c +0x6e:  mov    %eax,(%esp)
08ab864f +0x71:  call   08ab9d0a <_GLOBAL__I__ZN12TutorialDataC2Ev+0x545>  ; global constructors keyed to TutorialData::TutorialData()+0x545
08ab8654 +0x76:  cmp    0xc(%ebp),%eax
08ab8657 +0x79:  seta   %al
08ab865a +0x7c:  test   %al,%al
08ab865c +0x7e:  je     08ab8682 <+0xa4>
08ab865e +0x80:  lea    -0x14(%ebp),%eax
08ab8661 +0x83:  mov    %eax,(%esp)
08ab8664 +0x86:  call   08ab9b58 <_GLOBAL__I__ZN12TutorialDataC2Ev+0x393>  ; global constructors keyed to TutorialData::TutorialData()+0x393
08ab8669 +0x8b:  lea    0x4(%eax),%edx
08ab866c +0x8e:  mov    0xc(%ebp),%eax
08ab866f +0x91:  mov    %eax,0x4(%esp)
08ab8673 +0x95:  mov    %edx,(%esp)
08ab8676 +0x98:  call   08ab9d26 <_GLOBAL__I__ZN12TutorialDataC2Ev+0x561>  ; global constructors keyed to TutorialData::TutorialData()+0x561
08ab867b +0x9d:  mov    (%eax),%eax
08ab867d +0x9f:  mov    0x4(%eax),%eax
08ab8680 +0xa2:  jmp    08ab8687 <+0xa9>
08ab8682 +0xa4:  mov    $0x0,%eax
08ab8687 +0xa9:  leave
08ab8688 +0xaa:  ret
08ab8689 +0xab:  nop
```

## 反编译 C

```c
// TutorialData::getFaceIndex @ 0x8ab85de

/* TutorialData::getFaceIndex(unsigned int, unsigned int) */

undefined4 __thiscall TutorialData::getFaceIndex(TutorialData *this,uint param_1,uint param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
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
      piVar5 = (int *)std::
                      vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>::
                      at((vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>
                          *)(iVar3 + 4),param_1);
      uVar2 = *(undefined4 *)(*piVar5 + 4);
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
