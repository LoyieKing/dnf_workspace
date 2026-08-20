# RDARScriptStringManager

`_ZN23RDARScriptStringManagerC1Ev`

`RDARScriptStringManager::RDARScriptStringManager()`

| 类 | 地址 |
|---|---|
| `RDARScriptStringManager` | `0x08aa4e98` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08aa4e98  _ZN23RDARScriptStringManagerC1Ev
#           RDARScriptStringManager::RDARScriptStringManager()
# range [0x08aa4e98, 0x08aa4f03]
08aa4e98 +0x00:  push   %ebp
08aa4e99 +0x01:  mov    %esp,%ebp
08aa4e9b +0x03:  push   %esi
08aa4e9c +0x04:  push   %ebx
08aa4e9d +0x05:  sub    $0x10,%esp
08aa4ea0 +0x08:  mov    0x8(%ebp),%eax
08aa4ea3 +0x0b:  mov    %eax,(%esp)
08aa4ea6 +0x0e:  call   088bacf8 <_ZN16STScriptFileListC1Ev>  ; STScriptFileList::STScriptFileList()
08aa4eab +0x13:  mov    0x8(%ebp),%eax
08aa4eae +0x16:  add    $0x18,%eax
08aa4eb1 +0x19:  mov    %eax,(%esp)
08aa4eb4 +0x1c:  call   08aa673a <_GLOBAL__I__ZN23RDARScriptStringManagerC2Ev+0x1c>  ; global constructors keyed to RDARScriptStringManager::RDARScriptStringManager()+0x1c
08aa4eb9 +0x21:  mov    0x8(%ebp),%eax
08aa4ebc +0x24:  add    $0x24,%eax
08aa4ebf +0x27:  mov    %eax,(%esp)
08aa4ec2 +0x2a:  call   0871c130 <_GLOBAL__I_wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x6b14>  ; global constructors keyed to wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x6b14
08aa4ec7 +0x2f:  jmp    08aa4efc <+0x64>
08aa4ec9 +0x31:  mov    %edx,%ebx
08aa4ecb +0x33:  mov    %eax,%esi
08aa4ecd +0x35:  mov    0x8(%ebp),%eax
08aa4ed0 +0x38:  add    $0x18,%eax
08aa4ed3 +0x3b:  mov    %eax,(%esp)
08aa4ed6 +0x3e:  call   08aa674e <_GLOBAL__I__ZN23RDARScriptStringManagerC2Ev+0x30>  ; global constructors keyed to RDARScriptStringManager::RDARScriptStringManager()+0x30
08aa4edb +0x43:  mov    %esi,%eax
08aa4edd +0x45:  mov    %ebx,%edx
08aa4edf +0x47:  jmp    08aa4ee1 <+0x49>
08aa4ee1 +0x49:  mov    %edx,%ebx
08aa4ee3 +0x4b:  mov    %eax,%esi
08aa4ee5 +0x4d:  mov    0x8(%ebp),%eax
08aa4ee8 +0x50:  mov    %eax,(%esp)
08aa4eeb +0x53:  call   080f1352 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3d4>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3d4
08aa4ef0 +0x58:  mov    %esi,%eax
08aa4ef2 +0x5a:  mov    %ebx,%edx
08aa4ef4 +0x5c:  mov    %eax,(%esp)
08aa4ef7 +0x5f:  call   08ae3750 <_Unwind_Resume>
08aa4efc +0x64:  add    $0x10,%esp
08aa4eff +0x67:  pop    %ebx
08aa4f00 +0x68:  pop    %esi
08aa4f01 +0x69:  pop    %ebp
08aa4f02 +0x6a:  ret
08aa4f03 +0x6b:  nop
```

## 反编译 C

```c
// RDARScriptStringManager::RDARScriptStringManager @ 0x8aa4e98

/* RDARScriptStringManager::RDARScriptStringManager() */

void __thiscall RDARScriptStringManager::RDARScriptStringManager(RDARScriptStringManager *this)

{
  STScriptFileList::STScriptFileList((STScriptFileList *)this);
                    /* try { // try from 08aa4eb4 to 08aa4eb8 has its CatchHandler @ 08aa4ee1 */
  std::vector<StringDictionary*,std::allocator<StringDictionary*>>::vector
            ((vector<StringDictionary*,std::allocator<StringDictionary*>> *)(this + 0x18));
                    /* try { // try from 08aa4ec2 to 08aa4ec6 has its CatchHandler @ 08aa4ec9 */
  std::wstring::wstring((wstring *)(this + 0x24));
  return;
}
```
