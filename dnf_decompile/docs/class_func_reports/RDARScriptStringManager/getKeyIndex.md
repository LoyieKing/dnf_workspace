# getKeyIndex

`_ZNK23RDARScriptStringManager11getKeyIndexEiPKw`

`RDARScriptStringManager::getKeyIndex(int, wchar_t const*) const`

| 类 | 地址 |
|---|---|
| `RDARScriptStringManager` | `0x08aa5cba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08aa5cba  _ZNK23RDARScriptStringManager11getKeyIndexEiPKw
#           RDARScriptStringManager::getKeyIndex(int, wchar_t const*) const
# range [0x08aa5cba, 0x08aa5d97]
08aa5cba +0x00:  push   %ebp
08aa5cbb +0x01:  mov    %esp,%ebp
08aa5cbd +0x03:  push   %ebx
08aa5cbe +0x04:  sub    $0x24,%esp
08aa5cc1 +0x07:  cmpl   $0x0,0x10(%ebp)
08aa5cc5 +0x0b:  jne    08aa5cd1 <+0x17>
08aa5cc7 +0x0d:  mov    $0xffffffff,%eax
08aa5ccc +0x12:  jmp    08aa5d92 <+0xd8>
08aa5cd1 +0x17:  mov    0xc(%ebp),%ebx
08aa5cd4 +0x1a:  mov    0x8(%ebp),%eax
08aa5cd7 +0x1d:  add    $0x18,%eax
08aa5cda +0x20:  mov    %eax,(%esp)
08aa5cdd +0x23:  call   08aa68b2 <_GLOBAL__I__ZN23RDARScriptStringManagerC2Ev+0x194>  ; global constructors keyed to RDARScriptStringManager::RDARScriptStringManager()+0x194
08aa5ce2 +0x28:  cmp    %eax,%ebx
08aa5ce4 +0x2a:  setb   %al
08aa5ce7 +0x2d:  test   %al,%al
08aa5ce9 +0x2f:  je     08aa5d8d <+0xd3>
08aa5cef +0x35:  mov    0xc(%ebp),%eax
08aa5cf2 +0x38:  mov    0x8(%ebp),%edx
08aa5cf5 +0x3b:  add    $0x18,%edx
08aa5cf8 +0x3e:  mov    %eax,0x4(%esp)
08aa5cfc +0x42:  mov    %edx,(%esp)
08aa5cff +0x45:  call   08aa69ea <_GLOBAL__I__ZN23RDARScriptStringManagerC2Ev+0x2cc>  ; global constructors keyed to RDARScriptStringManager::RDARScriptStringManager()+0x2cc
08aa5d04 +0x4a:  mov    %eax,-0x18(%ebp)
08aa5d07 +0x4d:  movl   $0x0,-0x14(%ebp)
08aa5d0e +0x54:  jmp    08aa5d76 <+0xbc>
08aa5d10 +0x56:  mov    -0x18(%ebp),%eax
08aa5d13 +0x59:  mov    (%eax),%eax
08aa5d15 +0x5b:  mov    -0x14(%ebp),%edx
08aa5d18 +0x5e:  mov    %edx,0x4(%esp)
08aa5d1c +0x62:  mov    %eax,(%esp)
08aa5d1f +0x65:  call   08ab2668 <_ZNK16StringDictionary8getValueEi>  ; StringDictionary::getValue(int) const
08aa5d24 +0x6a:  mov    %eax,-0x10(%ebp)
08aa5d27 +0x6d:  cmpl   $0x0,-0x10(%ebp)
08aa5d2b +0x71:  je     08aa5d72 <+0xb8>
08aa5d2d +0x73:  mov    -0x10(%ebp),%eax
08aa5d30 +0x76:  mov    %eax,(%esp)
08aa5d33 +0x79:  call   08adf1b3 <_Z9toUnicodePKc>  ; toUnicode(char const*)
08aa5d38 +0x7e:  mov    0x10(%ebp),%edx
08aa5d3b +0x81:  mov    %edx,0x4(%esp)
08aa5d3f +0x85:  mov    %eax,(%esp)
08aa5d42 +0x88:  call   0807e6b0 <_init+0xfa8>
08aa5d47 +0x8d:  test   %eax,%eax
08aa5d49 +0x8f:  sete   %al
08aa5d4c +0x92:  test   %al,%al
08aa5d4e +0x94:  je     08aa5d72 <+0xb8>
08aa5d50 +0x96:  mov    -0x18(%ebp),%eax
08aa5d53 +0x99:  mov    (%eax),%eax
08aa5d55 +0x9b:  mov    -0x14(%ebp),%edx
08aa5d58 +0x9e:  mov    %edx,0x4(%esp)
08aa5d5c +0xa2:  mov    %eax,(%esp)
08aa5d5f +0xa5:  call   08ab2628 <_ZNK16StringDictionary6getKeyEi>  ; StringDictionary::getKey(int) const
08aa5d64 +0xaa:  mov    %eax,-0xc(%ebp)
08aa5d67 +0xad:  cmpl   $0x0,-0xc(%ebp)
08aa5d6b +0xb1:  je     08aa5d72 <+0xb8>
08aa5d6d +0xb3:  mov    -0x14(%ebp),%eax
08aa5d70 +0xb6:  jmp    08aa5d92 <+0xd8>
08aa5d72 +0xb8:  addl   $0x1,-0x14(%ebp)
08aa5d76 +0xbc:  mov    -0x18(%ebp),%eax
08aa5d79 +0xbf:  mov    (%eax),%eax
08aa5d7b +0xc1:  mov    %eax,(%esp)
08aa5d7e +0xc4:  call   08ab2612 <_ZNK16StringDictionary8getCountEv>  ; StringDictionary::getCount() const
08aa5d83 +0xc9:  cmp    -0x14(%ebp),%eax
08aa5d86 +0xcc:  setg   %al
08aa5d89 +0xcf:  test   %al,%al
08aa5d8b +0xd1:  jne    08aa5d10 <+0x56>
08aa5d8d +0xd3:  mov    $0xffffffff,%eax
08aa5d92 +0xd8:  add    $0x24,%esp
08aa5d95 +0xdb:  pop    %ebx
08aa5d96 +0xdc:  pop    %ebp
08aa5d97 +0xdd:  ret
```

## 反编译 C

```c
// RDARScriptStringManager::getKeyIndex @ 0x8aa5cba

/* RDARScriptStringManager::getKeyIndex(int, wchar_t const*) const */

int __thiscall
RDARScriptStringManager::getKeyIndex(RDARScriptStringManager *this,int param_1,wchar_t *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  char *pszSrc;
  wchar_t *__s1;
  int iVar3;
  int local_18;
  
  if ((param_2 != (wchar_t *)0x0) &&
     (uVar1 = std::vector<StringDictionary*,std::allocator<StringDictionary*>>::size
                        ((vector<StringDictionary*,std::allocator<StringDictionary*>> *)
                         (this + 0x18)), (uint)param_1 < uVar1)) {
    puVar2 = (undefined4 *)
             std::vector<StringDictionary*,std::allocator<StringDictionary*>>::operator[]
                       ((vector<StringDictionary*,std::allocator<StringDictionary*>> *)(this + 0x18)
                        ,param_1);
    for (local_18 = 0; iVar3 = StringDictionary::getCount((StringDictionary *)*puVar2),
        local_18 < iVar3; local_18 = local_18 + 1) {
      pszSrc = (char *)StringDictionary::getValue((StringDictionary *)*puVar2,local_18);
      if (pszSrc != (char *)0x0) {
        __s1 = toUnicode(pszSrc);
        iVar3 = wcscmp(__s1,param_2);
        if ((iVar3 == 0) &&
           (iVar3 = StringDictionary::getKey((StringDictionary *)*puVar2,local_18), iVar3 != 0)) {
          return local_18;
        }
      }
    }
  }
  return -1;
}
```
