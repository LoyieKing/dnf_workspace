# get

`_ZNK14StringResource3getEiPPK10CharString`

`StringResource::get(int, CharString const**) const`

| 类 | 地址 |
|---|---|
| `StringResource` | `0x08ad4878` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad4878  _ZNK14StringResource3getEiPPK10CharString
#           StringResource::get(int, CharString const**) const
# range [0x08ad4878, 0x08ad48e5]
08ad4878 +0x00:  push   %ebp
08ad4879 +0x01:  mov    %esp,%ebp
08ad487b +0x03:  sub    $0x28,%esp
08ad487e +0x06:  mov    0x8(%ebp),%edx
08ad4881 +0x09:  lea    -0x10(%ebp),%eax
08ad4884 +0x0c:  lea    0xc(%ebp),%ecx
08ad4887 +0x0f:  mov    %ecx,0x8(%esp)
08ad488b +0x13:  mov    %edx,0x4(%esp)
08ad488f +0x17:  mov    %eax,(%esp)
08ad4892 +0x1a:  call   08ad56a4 <_ZN3app6getStrEi+0x1d8>  ; app::getStr(int)+0x1d8
08ad4897 +0x1f:  sub    $0x4,%esp
08ad489a +0x22:  mov    0x8(%ebp),%edx
08ad489d +0x25:  lea    -0xc(%ebp),%eax
08ad48a0 +0x28:  mov    %edx,0x4(%esp)
08ad48a4 +0x2c:  mov    %eax,(%esp)
08ad48a7 +0x2f:  call   08ad56d0 <_ZN3app6getStrEi+0x204>  ; app::getStr(int)+0x204
08ad48ac +0x34:  sub    $0x4,%esp
08ad48af +0x37:  lea    -0xc(%ebp),%eax
08ad48b2 +0x3a:  mov    %eax,0x4(%esp)
08ad48b6 +0x3e:  lea    -0x10(%ebp),%eax
08ad48b9 +0x41:  mov    %eax,(%esp)
08ad48bc +0x44:  call   08ad56f6 <_ZN3app6getStrEi+0x22a>  ; app::getStr(int)+0x22a
08ad48c1 +0x49:  test   %al,%al
08ad48c3 +0x4b:  je     08ad48df <+0x67>
08ad48c5 +0x4d:  lea    -0x10(%ebp),%eax
08ad48c8 +0x50:  mov    %eax,(%esp)
08ad48cb +0x53:  call   08ad570a <_ZN3app6getStrEi+0x23e>  ; app::getStr(int)+0x23e
08ad48d0 +0x58:  lea    0x4(%eax),%edx
08ad48d3 +0x5b:  mov    0x10(%ebp),%eax
08ad48d6 +0x5e:  mov    %edx,(%eax)
08ad48d8 +0x60:  mov    $0x1,%eax
08ad48dd +0x65:  jmp    08ad48e4 <+0x6c>
08ad48df +0x67:  mov    $0x0,%eax
08ad48e4 +0x6c:  leave
08ad48e5 +0x6d:  ret
```

## 反编译 C

```c
// StringResource::get @ 0x8ad4878

/* StringResource::get(int, CharString const**) const */

bool __thiscall StringResource::get(StringResource *this,int param_1,CharString **param_2)

{
  char cVar1;
  int iVar2;
  _Rb_tree_const_iterator<std::pair<int_const,CharString>> local_14 [4];
  map<int,CharString,std::less<int>,std::allocator<std::pair<int_const,CharString>>> local_10 [12];
  
  std::map<int,CharString,std::less<int>,std::allocator<std::pair<int_const,CharString>>>::find
            ((int *)local_14);
  std::map<int,CharString,std::less<int>,std::allocator<std::pair<int_const,CharString>>>::end
            (local_10);
  cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,CharString>>::operator!=
                    (local_14,(_Rb_tree_const_iterator *)local_10);
  if (cVar1 != '\0') {
    iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,CharString>>::operator->(local_14);
    *param_2 = (CharString *)(iVar2 + 4);
  }
  return cVar1 != '\0';
}
```
