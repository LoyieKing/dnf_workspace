# release

`_ZN23RDARScriptStringManager7releaseEv`

`RDARScriptStringManager::release()`

| 类 | 地址 |
|---|---|
| `RDARScriptStringManager` | `0x08aa5014` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08aa5014  _ZN23RDARScriptStringManager7releaseEv
#           RDARScriptStringManager::release()
# range [0x08aa5014, 0x08aa50b3]
08aa5014 +0x00:  push   %ebp
08aa5015 +0x01:  mov    %esp,%ebp
08aa5017 +0x03:  push   %ebx
08aa5018 +0x04:  sub    $0x24,%esp
08aa501b +0x07:  mov    0x8(%ebp),%eax
08aa501e +0x0a:  lea    0x18(%eax),%edx
08aa5021 +0x0d:  lea    -0x10(%ebp),%eax
08aa5024 +0x10:  mov    %edx,0x4(%esp)
08aa5028 +0x14:  mov    %eax,(%esp)
08aa502b +0x17:  call   08aa67ac <_GLOBAL__I__ZN23RDARScriptStringManagerC2Ev+0x8e>  ; global constructors keyed to RDARScriptStringManager::RDARScriptStringManager()+0x8e
08aa5030 +0x1c:  sub    $0x4,%esp
08aa5033 +0x1f:  mov    0x8(%ebp),%eax
08aa5036 +0x22:  lea    0x18(%eax),%edx
08aa5039 +0x25:  lea    -0x14(%ebp),%eax
08aa503c +0x28:  mov    %edx,0x4(%esp)
08aa5040 +0x2c:  mov    %eax,(%esp)
08aa5043 +0x2f:  call   08aa67d0 <_GLOBAL__I__ZN23RDARScriptStringManagerC2Ev+0xb2>  ; global constructors keyed to RDARScriptStringManager::RDARScriptStringManager()+0xb2
08aa5048 +0x34:  sub    $0x4,%esp
08aa504b +0x37:  jmp    08aa508b <+0x77>
08aa504d +0x39:  lea    -0x10(%ebp),%eax
08aa5050 +0x3c:  mov    %eax,(%esp)
08aa5053 +0x3f:  call   08aa6856 <_GLOBAL__I__ZN23RDARScriptStringManagerC2Ev+0x138>  ; global constructors keyed to RDARScriptStringManager::RDARScriptStringManager()+0x138
08aa5058 +0x44:  mov    (%eax),%ebx
08aa505a +0x46:  test   %ebx,%ebx
08aa505c +0x48:  je     08aa506e <+0x5a>
08aa505e +0x4a:  mov    %ebx,(%esp)
08aa5061 +0x4d:  call   08ab22be <_ZN16StringDictionaryD1Ev>  ; StringDictionary::~StringDictionary()
08aa5066 +0x52:  mov    %ebx,(%esp)
08aa5069 +0x55:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08aa506e +0x5a:  lea    -0xc(%ebp),%eax
08aa5071 +0x5d:  movl   $0x0,0x8(%esp)
08aa5079 +0x65:  lea    -0x10(%ebp),%edx
08aa507c +0x68:  mov    %edx,0x4(%esp)
08aa5080 +0x6c:  mov    %eax,(%esp)
08aa5083 +0x6f:  call   08aa6822 <_GLOBAL__I__ZN23RDARScriptStringManagerC2Ev+0x104>  ; global constructors keyed to RDARScriptStringManager::RDARScriptStringManager()+0x104
08aa5088 +0x74:  sub    $0x4,%esp
08aa508b +0x77:  lea    -0x14(%ebp),%eax
08aa508e +0x7a:  mov    %eax,0x4(%esp)
08aa5092 +0x7e:  lea    -0x10(%ebp),%eax
08aa5095 +0x81:  mov    %eax,(%esp)
08aa5098 +0x84:  call   08aa67f6 <_GLOBAL__I__ZN23RDARScriptStringManagerC2Ev+0xd8>  ; global constructors keyed to RDARScriptStringManager::RDARScriptStringManager()+0xd8
08aa509d +0x89:  test   %al,%al
08aa509f +0x8b:  jne    08aa504d <+0x39>
08aa50a1 +0x8d:  mov    0x8(%ebp),%eax
08aa50a4 +0x90:  add    $0x18,%eax
08aa50a7 +0x93:  mov    %eax,(%esp)
08aa50aa +0x96:  call   08aa6860 <_GLOBAL__I__ZN23RDARScriptStringManagerC2Ev+0x142>  ; global constructors keyed to RDARScriptStringManager::RDARScriptStringManager()+0x142
08aa50af +0x9b:  mov    -0x4(%ebp),%ebx
08aa50b2 +0x9e:  leave
08aa50b3 +0x9f:  ret
```

## 反编译 C

```c
// RDARScriptStringManager::release @ 0x8aa5014

/* RDARScriptStringManager::release() */

void __thiscall RDARScriptStringManager::release(RDARScriptStringManager *this)

{
  StringDictionary *this_00;
  bool bVar1;
  undefined4 *puVar2;
  __normal_iterator local_18 [4];
  __normal_iterator<StringDictionary**,std::vector<StringDictionary*,std::allocator<StringDictionary*>>>
  local_14 [4];
  __normal_iterator<StringDictionary**,std::vector<StringDictionary*,std::allocator<StringDictionary*>>>
  local_10 [8];
  
  std::vector<StringDictionary*,std::allocator<StringDictionary*>>::begin();
  std::vector<StringDictionary*,std::allocator<StringDictionary*>>::end();
  while( true ) {
    bVar1 = __gnu_cxx::operator!=(local_14,local_18);
    if (!bVar1) break;
    puVar2 = (undefined4 *)
             __gnu_cxx::
             __normal_iterator<StringDictionary**,std::vector<StringDictionary*,std::allocator<StringDictionary*>>>
             ::operator*(local_14);
    this_00 = (StringDictionary *)*puVar2;
    if (this_00 != (StringDictionary *)0x0) {
      StringDictionary::~StringDictionary(this_00);
      operator_delete(this_00);
    }
    __gnu_cxx::
    __normal_iterator<StringDictionary**,std::vector<StringDictionary*,std::allocator<StringDictionary*>>>
    ::operator++(local_10,(int)local_14);
  }
  std::vector<StringDictionary*,std::allocator<StringDictionary*>>::clear
            ((vector<StringDictionary*,std::allocator<StringDictionary*>> *)(this + 0x18));
  return;
}
```
