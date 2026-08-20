# findGameScript

`_ZN4ARAD16Arad_DataManager14findGameScriptESs`

`ARAD::Arad_DataManager::findGameScript(std::basic_string<char, std::char_traits<char>, std::allocator<char> >)`

| 类 | 地址 |
|---|---|
| `ARAD::Arad_DataManager` | `0x081882ac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081882ac  _ZN4ARAD16Arad_DataManager14findGameScriptESs
#           ARAD::Arad_DataManager::findGameScript(std::basic_string<char, std::char_traits<char>, std::allocator<char> >)
# range [0x081882ac, 0x081882cb]
081882ac +0x00:  push   %ebp
081882ad +0x01:  mov    %esp,%ebp
081882af +0x03:  sub    $0x18,%esp
081882b2 +0x06:  mov    0x8(%ebp),%eax
081882b5 +0x09:  lea    0x4(%eax),%edx
081882b8 +0x0c:  mov    0xc(%ebp),%eax
081882bb +0x0f:  mov    %eax,0x4(%esp)
081882bf +0x13:  mov    %edx,(%esp)
081882c2 +0x16:  call   081891c2 <_GLOBAL__I__ZN4ARAD16Arad_DataManagerC2Ev+0x6c7>  ; global constructors keyed to ARAD::Arad_DataManager::Arad_DataManager()+0x6c7
081882c7 +0x1b:  mov    (%eax),%eax
081882c9 +0x1d:  leave
081882ca +0x1e:  ret
081882cb +0x1f:  nop
```

## 反编译 C

```c
// ARAD::Arad_DataManager::findGameScript @ 0x81882ac

/* ARAD::Arad_DataManager::findGameScript(std::string) */

undefined4 __thiscall ARAD::Arad_DataManager::findGameScript(Arad_DataManager *this,string param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           std::
           map<std::string,ARAD::Arad_InterfaceGameScript*,std::less<std::string>,std::allocator<std::pair<std::string_const,ARAD::Arad_InterfaceGameScript*>>>
           ::operator[]((map<std::string,ARAD::Arad_InterfaceGameScript*,std::less<std::string>,std::allocator<std::pair<std::string_const,ARAD::Arad_InterfaceGameScript*>>>
                         *)(this + 4),(string *)param_1._M_dataplus._M_p);
  return *puVar1;
}
```
