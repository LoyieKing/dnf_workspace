# getTagSizeInFile

`_ZN23RDARScriptStringManager16getTagSizeInFileEi`

`RDARScriptStringManager::getTagSizeInFile(int)`

| 类 | 地址 |
|---|---|
| `RDARScriptStringManager` | `0x08aa5df2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08aa5df2  _ZN23RDARScriptStringManager16getTagSizeInFileEi
#           RDARScriptStringManager::getTagSizeInFile(int)
# range [0x08aa5df2, 0x08aa5e3f]
08aa5df2 +0x00:  push   %ebp
08aa5df3 +0x01:  mov    %esp,%ebp
08aa5df5 +0x03:  push   %ebx
08aa5df6 +0x04:  sub    $0x14,%esp
08aa5df9 +0x07:  mov    0xc(%ebp),%ebx
08aa5dfc +0x0a:  mov    0x8(%ebp),%eax
08aa5dff +0x0d:  add    $0x18,%eax
08aa5e02 +0x10:  mov    %eax,(%esp)
08aa5e05 +0x13:  call   08aa68b2 <_GLOBAL__I__ZN23RDARScriptStringManagerC2Ev+0x194>  ; global constructors keyed to RDARScriptStringManager::RDARScriptStringManager()+0x194
08aa5e0a +0x18:  cmp    %eax,%ebx
08aa5e0c +0x1a:  setb   %al
08aa5e0f +0x1d:  test   %al,%al
08aa5e11 +0x1f:  je     08aa5e34 <+0x42>
08aa5e13 +0x21:  mov    0xc(%ebp),%eax
08aa5e16 +0x24:  mov    0x8(%ebp),%edx
08aa5e19 +0x27:  add    $0x18,%edx
08aa5e1c +0x2a:  mov    %eax,0x4(%esp)
08aa5e20 +0x2e:  mov    %edx,(%esp)
08aa5e23 +0x31:  call   08aa68ce <_GLOBAL__I__ZN23RDARScriptStringManagerC2Ev+0x1b0>  ; global constructors keyed to RDARScriptStringManager::RDARScriptStringManager()+0x1b0
08aa5e28 +0x36:  mov    (%eax),%eax
08aa5e2a +0x38:  mov    %eax,(%esp)
08aa5e2d +0x3b:  call   08ab2612 <_ZNK16StringDictionary8getCountEv>  ; StringDictionary::getCount() const
08aa5e32 +0x40:  jmp    08aa5e39 <+0x47>
08aa5e34 +0x42:  mov    $0xffffffff,%eax
08aa5e39 +0x47:  add    $0x14,%esp
08aa5e3c +0x4a:  pop    %ebx
08aa5e3d +0x4b:  pop    %ebp
08aa5e3e +0x4c:  ret
08aa5e3f +0x4d:  nop
```

## 反编译 C

```c
// RDARScriptStringManager::getTagSizeInFile @ 0x8aa5df2

/* RDARScriptStringManager::getTagSizeInFile(int) */

undefined4 __thiscall
RDARScriptStringManager::getTagSizeInFile(RDARScriptStringManager *this,int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  uVar1 = std::vector<StringDictionary*,std::allocator<StringDictionary*>>::size
                    ((vector<StringDictionary*,std::allocator<StringDictionary*>> *)(this + 0x18));
  if ((uint)param_1 < uVar1) {
    puVar2 = (undefined4 *)
             std::vector<StringDictionary*,std::allocator<StringDictionary*>>::operator[]
                       ((vector<StringDictionary*,std::allocator<StringDictionary*>> *)(this + 0x18)
                        ,param_1);
    uVar3 = StringDictionary::getCount((StringDictionary *)*puVar2);
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}
```
