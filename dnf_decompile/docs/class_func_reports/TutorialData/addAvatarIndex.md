# addAvatarIndex

`_ZN12TutorialData14addAvatarIndexEii`

`TutorialData::addAvatarIndex(int, int)`

| 类 | 地址 |
|---|---|
| `TutorialData` | `0x08ab868a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ab868a  _ZN12TutorialData14addAvatarIndexEii
#           TutorialData::addAvatarIndex(int, int)
# range [0x08ab868a, 0x08ab86df]
08ab868a +0x00:  push   %ebp
08ab868b +0x01:  mov    %esp,%ebp
08ab868d +0x03:  sub    $0x38,%esp
08ab8690 +0x06:  lea    -0x10(%ebp),%eax
08ab8693 +0x09:  lea    0x10(%ebp),%edx
08ab8696 +0x0c:  mov    %edx,0x8(%esp)
08ab869a +0x10:  lea    0xc(%ebp),%edx
08ab869d +0x13:  mov    %edx,0x4(%esp)
08ab86a1 +0x17:  mov    %eax,(%esp)
08ab86a4 +0x1a:  call   081112b2 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x7c4>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x7c4
08ab86a9 +0x1f:  sub    $0x4,%esp
08ab86ac +0x22:  lea    -0x10(%ebp),%eax
08ab86af +0x25:  mov    %eax,0x4(%esp)
08ab86b3 +0x29:  lea    -0x18(%ebp),%eax
08ab86b6 +0x2c:  mov    %eax,(%esp)
08ab86b9 +0x2f:  call   080c6d20 <_GLOBAL__I_g_ServerString_+0x28b>  ; global constructors keyed to g_ServerString_+0x28b
08ab86be +0x34:  mov    0x8(%ebp),%eax
08ab86c1 +0x37:  lea    0x1c(%eax),%ecx
08ab86c4 +0x3a:  lea    -0x20(%ebp),%eax
08ab86c7 +0x3d:  lea    -0x18(%ebp),%edx
08ab86ca +0x40:  mov    %edx,0x8(%esp)
08ab86ce +0x44:  mov    %ecx,0x4(%esp)
08ab86d2 +0x48:  mov    %eax,(%esp)
08ab86d5 +0x4b:  call   080c6d50 <_GLOBAL__I_g_ServerString_+0x2bb>  ; global constructors keyed to g_ServerString_+0x2bb
08ab86da +0x50:  sub    $0x4,%esp
08ab86dd +0x53:  leave
08ab86de +0x54:  ret
08ab86df +0x55:  nop
```

## 反编译 C

```c
// TutorialData::addAvatarIndex @ 0x8ab868a

/* TutorialData::addAvatarIndex(int, int) */

void TutorialData::addAvatarIndex(int param_1,int param_2)

{
  pair local_24 [8];
  pair<int_const,int> local_1c [8];
  int local_14 [4];
  
  std::make_pair<int&,int&>(local_14,&param_2);
  std::pair<int_const,int>::pair<int,int>(local_1c,(pair *)local_14);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert(local_24);
  return;
}
```
