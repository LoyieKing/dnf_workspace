# findString

`_ZNK23RDARScriptStringManager10findStringEiPKwPb`

`RDARScriptStringManager::findString(int, wchar_t const*, bool*) const`

| 类 | 地址 |
|---|---|
| `RDARScriptStringManager` | `0x08aa594c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08aa594c  _ZNK23RDARScriptStringManager10findStringEiPKwPb
#           RDARScriptStringManager::findString(int, wchar_t const*, bool*) const
# range [0x08aa594c, 0x08aa59ef]
08aa594c +0x00:  push   %ebp
08aa594d +0x01:  mov    %esp,%ebp
08aa594f +0x03:  push   %ebx
08aa5950 +0x04:  sub    $0x24,%esp
08aa5953 +0x07:  cmpl   $0x0,0x10(%ebp)
08aa5957 +0x0b:  jne    08aa5963 <+0x17>
08aa5959 +0x0d:  mov    $"RDARScriptStringManager::ERROR::input NULL string",%eax
08aa595e +0x12:  jmp    08aa59e9 <+0x9d>
08aa5963 +0x17:  mov    0x10(%ebp),%eax
08aa5966 +0x1a:  mov    %eax,(%esp)
08aa5969 +0x1d:  call   08adeb7d <_Z9toTStringPKw>  ; toTString(wchar_t const*)
08aa596e +0x22:  mov    %eax,%ebx
08aa5970 +0x24:  mov    0xc(%ebp),%eax
08aa5973 +0x27:  mov    0x8(%ebp),%edx
08aa5976 +0x2a:  add    $0x18,%edx
08aa5979 +0x2d:  mov    %eax,0x4(%esp)
08aa597d +0x31:  mov    %edx,(%esp)
08aa5980 +0x34:  call   08aa69ea <_GLOBAL__I__ZN23RDARScriptStringManagerC2Ev+0x2cc>  ; global constructors keyed to RDARScriptStringManager::RDARScriptStringManager()+0x2cc
08aa5985 +0x39:  mov    (%eax),%eax
08aa5987 +0x3b:  mov    %ebx,0x4(%esp)
08aa598b +0x3f:  mov    %eax,(%esp)
08aa598e +0x42:  call   08ab2528 <_ZNK16StringDictionary3getEPKc>  ; StringDictionary::get(char const*) const
08aa5993 +0x47:  mov    %eax,-0xc(%ebp)
08aa5996 +0x4a:  cmpl   $0x0,0x14(%ebp)
08aa599a +0x4e:  je     08aa59a8 <+0x5c>
08aa599c +0x50:  cmpl   $0x0,-0xc(%ebp)
08aa59a0 +0x54:  setne  %dl
08aa59a3 +0x57:  mov    0x14(%ebp),%eax
08aa59a6 +0x5a:  mov    %dl,(%eax)
08aa59a8 +0x5c:  cmpl   $0x0,-0xc(%ebp)
08aa59ac +0x60:  je     08aa59b3 <+0x67>
08aa59ae +0x62:  mov    -0xc(%ebp),%eax
08aa59b1 +0x65:  jmp    08aa59e9 <+0x9d>
08aa59b3 +0x67:  mov    0x8(%ebp),%eax
08aa59b6 +0x6a:  mov    0xc(%ebp),%edx
08aa59b9 +0x6d:  mov    %edx,0x4(%esp)
08aa59bd +0x71:  mov    %eax,(%esp)
08aa59c0 +0x74:  call   088bad4e <_ZNK16STScriptFileList11GetFileNameEi>  ; STScriptFileList::GetFileName(int) const
08aa59c5 +0x79:  mov    %eax,0xc(%esp)
08aa59c9 +0x7d:  mov    0x10(%ebp),%eax
08aa59cc +0x80:  mov    %eax,0x8(%esp)
08aa59d0 +0x84:  movl   $"%s == NULL, %s : ",0x4(%esp)
08aa59d8 +0x8c:  movl   $&_ZZNK23RDARScriptStringManager10findStringEiPKwPbE6errStr,(%esp)
08aa59df +0x93:  call   08aa69b4 <_GLOBAL__I__ZN23RDARScriptStringManagerC2Ev+0x296>  ; global constructors keyed to RDARScriptStringManager::RDARScriptStringManager()+0x296
08aa59e4 +0x98:  mov    $&_ZZNK23RDARScriptStringManager10findStringEiPKwPbE6errStr,%eax
08aa59e9 +0x9d:  add    $0x24,%esp
08aa59ec +0xa0:  pop    %ebx
08aa59ed +0xa1:  pop    %ebp
08aa59ee +0xa2:  ret
08aa59ef +0xa3:  nop
```

## 反编译 C

```c
// RDARScriptStringManager::findString @ 0x8aa594c

/* RDARScriptStringManager::findString(int, wchar_t const*, bool*) const */

char * __thiscall
RDARScriptStringManager::findString
          (RDARScriptStringManager *this,int param_1,wchar_t *param_2,bool *param_3)

{
  char *pcVar1;
  TCHAR *pTVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  if (param_2 == (wchar_t *)0x0) {
    pcVar1 = "RDARScriptStringManager::ERROR::input NULL string";
  }
  else {
    pTVar2 = toTString(param_2);
    puVar3 = (undefined4 *)
             std::vector<StringDictionary*,std::allocator<StringDictionary*>>::operator[]
                       ((vector<StringDictionary*,std::allocator<StringDictionary*>> *)(this + 0x18)
                        ,param_1);
    pcVar1 = (char *)StringDictionary::get((StringDictionary *)*puVar3,pTVar2);
    if (param_3 != (bool *)0x0) {
      *param_3 = pcVar1 != (char *)0x0;
    }
    if (pcVar1 == (char *)0x0) {
      uVar4 = STScriptFileList::GetFileName((int)this);
      ss_sprintf<256u>(findString(int,wchar_t_const*,bool*)::errStr,"%s == NULL, %s : ",param_2,
                       uVar4);
      pcVar1 = findString(int,wchar_t_const*,bool*)::errStr;
    }
  }
  return pcVar1;
}
```
