# setTableValue

`_ZN23RDARScriptStringManager13setTableValueEiiPKc`

`RDARScriptStringManager::setTableValue(int, int, char const*)`

| 类 | 地址 |
|---|---|
| `RDARScriptStringManager` | `0x08aa5d98` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08aa5d98  _ZN23RDARScriptStringManager13setTableValueEiiPKc
#           RDARScriptStringManager::setTableValue(int, int, char const*)
# range [0x08aa5d98, 0x08aa5df1]
08aa5d98 +0x00:  push   %ebp
08aa5d99 +0x01:  mov    %esp,%ebp
08aa5d9b +0x03:  push   %ebx
08aa5d9c +0x04:  sub    $0x24,%esp
08aa5d9f +0x07:  mov    0xc(%ebp),%ebx
08aa5da2 +0x0a:  mov    0x8(%ebp),%eax
08aa5da5 +0x0d:  add    $0x18,%eax
08aa5da8 +0x10:  mov    %eax,(%esp)
08aa5dab +0x13:  call   08aa68b2 <_GLOBAL__I__ZN23RDARScriptStringManagerC2Ev+0x194>  ; global constructors keyed to RDARScriptStringManager::RDARScriptStringManager()+0x194
08aa5db0 +0x18:  cmp    %eax,%ebx
08aa5db2 +0x1a:  setb   %al
08aa5db5 +0x1d:  test   %al,%al
08aa5db7 +0x1f:  je     08aa5dec <+0x54>
08aa5db9 +0x21:  mov    0xc(%ebp),%eax
08aa5dbc +0x24:  mov    0x8(%ebp),%edx
08aa5dbf +0x27:  add    $0x18,%edx
08aa5dc2 +0x2a:  mov    %eax,0x4(%esp)
08aa5dc6 +0x2e:  mov    %edx,(%esp)
08aa5dc9 +0x31:  call   08aa68ce <_GLOBAL__I__ZN23RDARScriptStringManagerC2Ev+0x1b0>  ; global constructors keyed to RDARScriptStringManager::RDARScriptStringManager()+0x1b0
08aa5dce +0x36:  mov    %eax,-0xc(%ebp)
08aa5dd1 +0x39:  mov    -0xc(%ebp),%eax
08aa5dd4 +0x3c:  mov    (%eax),%eax
08aa5dd6 +0x3e:  mov    0x14(%ebp),%edx
08aa5dd9 +0x41:  mov    %edx,0x8(%esp)
08aa5ddd +0x45:  mov    0x10(%ebp),%edx
08aa5de0 +0x48:  mov    %edx,0x4(%esp)
08aa5de4 +0x4c:  mov    %eax,(%esp)
08aa5de7 +0x4f:  call   08ab26a8 <_ZN16StringDictionary8setValueEiPKc>  ; StringDictionary::setValue(int, char const*)
08aa5dec +0x54:  add    $0x24,%esp
08aa5def +0x57:  pop    %ebx
08aa5df0 +0x58:  pop    %ebp
08aa5df1 +0x59:  ret
```

## 反编译 C

```c
// RDARScriptStringManager::setTableValue @ 0x8aa5d98

/* RDARScriptStringManager::setTableValue(int, int, char const*) */

void __thiscall
RDARScriptStringManager::setTableValue
          (RDARScriptStringManager *this,int param_1,int param_2,char *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  
  uVar1 = std::vector<StringDictionary*,std::allocator<StringDictionary*>>::size
                    ((vector<StringDictionary*,std::allocator<StringDictionary*>> *)(this + 0x18));
  if ((uint)param_1 < uVar1) {
    puVar2 = (undefined4 *)
             std::vector<StringDictionary*,std::allocator<StringDictionary*>>::operator[]
                       ((vector<StringDictionary*,std::allocator<StringDictionary*>> *)(this + 0x18)
                        ,param_1);
    StringDictionary::setValue((StringDictionary *)*puVar2,param_2,param_3);
  }
  return;
}
```
