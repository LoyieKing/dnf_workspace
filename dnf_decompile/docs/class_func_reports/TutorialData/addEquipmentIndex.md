# addEquipmentIndex

`_ZN12TutorialData17addEquipmentIndexEiii`

`TutorialData::addEquipmentIndex(int, int, int)`

| 类 | 地址 |
|---|---|
| `TutorialData` | `0x08ab86e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ab86e0  _ZN12TutorialData17addEquipmentIndexEiii
#           TutorialData::addEquipmentIndex(int, int, int)
# range [0x08ab86e0, 0x08ab874d]
08ab86e0 +0x00:  push   %ebp
08ab86e1 +0x01:  mov    %esp,%ebp
08ab86e3 +0x03:  sub    $0x38,%esp
08ab86e6 +0x06:  cmpl   $0x3,0x14(%ebp)
08ab86ea +0x0a:  jg     08ab874a <+0x6a>
08ab86ec +0x0c:  lea    -0x10(%ebp),%eax
08ab86ef +0x0f:  lea    0x10(%ebp),%edx
08ab86f2 +0x12:  mov    %edx,0x8(%esp)
08ab86f6 +0x16:  lea    0xc(%ebp),%edx
08ab86f9 +0x19:  mov    %edx,0x4(%esp)
08ab86fd +0x1d:  mov    %eax,(%esp)
08ab8700 +0x20:  call   081112b2 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x7c4>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x7c4
08ab8705 +0x25:  sub    $0x4,%esp
08ab8708 +0x28:  lea    -0x10(%ebp),%eax
08ab870b +0x2b:  mov    %eax,0x4(%esp)
08ab870f +0x2f:  lea    -0x18(%ebp),%eax
08ab8712 +0x32:  mov    %eax,(%esp)
08ab8715 +0x35:  call   080c6d20 <_GLOBAL__I_g_ServerString_+0x28b>  ; global constructors keyed to g_ServerString_+0x28b
08ab871a +0x3a:  mov    0x14(%ebp),%edx
08ab871d +0x3d:  mov    %edx,%eax
08ab871f +0x3f:  add    %eax,%eax
08ab8721 +0x41:  add    %edx,%eax
08ab8723 +0x43:  shl    $0x3,%eax
08ab8726 +0x46:  add    $0x30,%eax
08ab8729 +0x49:  add    0x8(%ebp),%eax
08ab872c +0x4c:  lea    0x4(%eax),%ecx
08ab872f +0x4f:  lea    -0x20(%ebp),%eax
08ab8732 +0x52:  lea    -0x18(%ebp),%edx
08ab8735 +0x55:  mov    %edx,0x8(%esp)
08ab8739 +0x59:  mov    %ecx,0x4(%esp)
08ab873d +0x5d:  mov    %eax,(%esp)
08ab8740 +0x60:  call   080c6d50 <_GLOBAL__I_g_ServerString_+0x2bb>  ; global constructors keyed to g_ServerString_+0x2bb
08ab8745 +0x65:  sub    $0x4,%esp
08ab8748 +0x68:  jmp    08ab874b <+0x6b>
08ab874a +0x6a:  nop
08ab874b +0x6b:  leave
08ab874c +0x6c:  ret
08ab874d +0x6d:  nop
```

## 反编译 C

```c
// TutorialData::addEquipmentIndex @ 0x8ab86e0

/* TutorialData::addEquipmentIndex(int, int, int) */

void TutorialData::addEquipmentIndex(int param_1,int param_2,int param_3)

{
  int in_stack_00000010;
  pair local_24 [8];
  pair<int_const,int> local_1c [8];
  int local_14 [4];
  
  if (in_stack_00000010 < 4) {
    std::make_pair<int&,int&>(local_14,&param_2);
    std::pair<int_const,int>::pair<int,int>(local_1c,(pair *)local_14);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert(local_24);
  }
  return;
}
```
