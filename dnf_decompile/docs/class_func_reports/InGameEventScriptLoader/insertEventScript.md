# insertEventScript

`_ZN23InGameEventScriptLoader17insertEventScriptERKSsP17InGameEventScript`

`InGameEventScriptLoader::insertEventScript(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, InGameEventScript*)`

| 类 | 地址 |
|---|---|
| `InGameEventScriptLoader` | `0x08982f10` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08982f10  _ZN23InGameEventScriptLoader17insertEventScriptERKSsP17InGameEventScript
#           InGameEventScriptLoader::insertEventScript(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, InGameEventScript*)
# range [0x08982f10, 0x08982f37]
08982f10 +0x00:  push   %ebp
08982f11 +0x01:  mov    %esp,%ebp
08982f13 +0x03:  sub    $0x18,%esp
08982f16 +0x06:  cmpl   $0x0,0x10(%ebp)
08982f1a +0x0a:  je     08982f33 <+0x23>
08982f1c +0x0c:  mov    0x8(%ebp),%eax
08982f1f +0x0f:  mov    0xc(%ebp),%edx
08982f22 +0x12:  mov    %edx,0x4(%esp)
08982f26 +0x16:  mov    %eax,(%esp)
08982f29 +0x19:  call   089868f4 <_GLOBAL__I__ZN19InGameEventInfoList15insertEventInfoEiR15InGameEventInfo+0x110b>  ; global constructors keyed to InGameEventInfoList::insertEventInfo(int, InGameEventInfo&)+0x110b
08982f2e +0x1e:  mov    0x10(%ebp),%edx
08982f31 +0x21:  mov    %edx,(%eax)
08982f33 +0x23:  mov    0x10(%ebp),%eax
08982f36 +0x26:  leave
08982f37 +0x27:  ret
```

## 反编译 C

```c
// InGameEventScriptLoader::insertEventScript @ 0x8982f10

/* InGameEventScriptLoader::insertEventScript(std::string const&, InGameEventScript*) */

InGameEventScript * __thiscall
InGameEventScriptLoader::insertEventScript
          (InGameEventScriptLoader *this,string *param_1,InGameEventScript *param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != (InGameEventScript *)0x0) {
    puVar1 = (undefined4 *)
             std::
             map<std::string,InGameEventScript*,std::less<std::string>,std::allocator<std::pair<std::string_const,InGameEventScript*>>>
             ::operator[]((map<std::string,InGameEventScript*,std::less<std::string>,std::allocator<std::pair<std::string_const,InGameEventScript*>>>
                           *)this,param_1);
    *puVar1 = param_2;
  }
  return param_2;
}
```
