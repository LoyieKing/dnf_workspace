# getDialogSize

`_ZN12TutorialData13getDialogSizeEj`

`TutorialData::getDialogSize(unsigned int)`

| 类 | 地址 |
|---|---|
| `TutorialData` | `0x08ab8486` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ab8486  _ZN12TutorialData13getDialogSizeEj
#           TutorialData::getDialogSize(unsigned int)
# range [0x08ab8486, 0x08ab84fd]
08ab8486 +0x00:  push   %ebp
08ab8487 +0x01:  mov    %esp,%ebp
08ab8489 +0x03:  sub    $0x28,%esp
08ab848c +0x06:  mov    0xc(%ebp),%eax
08ab848f +0x09:  mov    %eax,-0x10(%ebp)
08ab8492 +0x0c:  mov    0x8(%ebp),%eax
08ab8495 +0x0f:  lea    0x4(%eax),%ecx
08ab8498 +0x12:  lea    -0x14(%ebp),%eax
08ab849b +0x15:  lea    -0x10(%ebp),%edx
08ab849e +0x18:  mov    %edx,0x8(%esp)
08ab84a2 +0x1c:  mov    %ecx,0x4(%esp)
08ab84a6 +0x20:  mov    %eax,(%esp)
08ab84a9 +0x23:  call   08ab9af2 <_GLOBAL__I__ZN12TutorialDataC2Ev+0x32d>  ; global constructors keyed to TutorialData::TutorialData()+0x32d
08ab84ae +0x28:  sub    $0x4,%esp
08ab84b1 +0x2b:  mov    0x8(%ebp),%eax
08ab84b4 +0x2e:  lea    0x4(%eax),%edx
08ab84b7 +0x31:  lea    -0xc(%ebp),%eax
08ab84ba +0x34:  mov    %edx,0x4(%esp)
08ab84be +0x38:  mov    %eax,(%esp)
08ab84c1 +0x3b:  call   08ab9b1e <_GLOBAL__I__ZN12TutorialDataC2Ev+0x359>  ; global constructors keyed to TutorialData::TutorialData()+0x359
08ab84c6 +0x40:  sub    $0x4,%esp
08ab84c9 +0x43:  lea    -0xc(%ebp),%eax
08ab84cc +0x46:  mov    %eax,0x4(%esp)
08ab84d0 +0x4a:  lea    -0x14(%ebp),%eax
08ab84d3 +0x4d:  mov    %eax,(%esp)
08ab84d6 +0x50:  call   08ab9cf6 <_GLOBAL__I__ZN12TutorialDataC2Ev+0x531>  ; global constructors keyed to TutorialData::TutorialData()+0x531
08ab84db +0x55:  test   %al,%al
08ab84dd +0x57:  je     08ab84e6 <+0x60>
08ab84df +0x59:  mov    $0x0,%eax
08ab84e4 +0x5e:  jmp    08ab84fc <+0x76>
08ab84e6 +0x60:  lea    -0x14(%ebp),%eax
08ab84e9 +0x63:  mov    %eax,(%esp)
08ab84ec +0x66:  call   08ab9b58 <_GLOBAL__I__ZN12TutorialDataC2Ev+0x393>  ; global constructors keyed to TutorialData::TutorialData()+0x393
08ab84f1 +0x6b:  add    $0x4,%eax
08ab84f4 +0x6e:  mov    %eax,(%esp)
08ab84f7 +0x71:  call   08ab9d0a <_GLOBAL__I__ZN12TutorialDataC2Ev+0x545>  ; global constructors keyed to TutorialData::TutorialData()+0x545
08ab84fc +0x76:  leave
08ab84fd +0x77:  ret
```

## 反编译 C

```c
// TutorialData::getDialogSize @ 0x8ab8486

/* TutorialData::getDialogSize(unsigned int) */

undefined4 __thiscall TutorialData::getDialogSize(TutorialData *this,uint param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  _Rb_tree_iterator<std::pair<int_const,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>>>
  local_18 [4];
  uint local_14;
  map<int,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>>>>
  local_10 [12];
  
  local_14 = param_1;
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
    uVar2 = std::vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>::size
                      ((vector<TutorialData::DialogData*,std::allocator<TutorialData::DialogData*>>
                        *)(iVar3 + 4));
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
