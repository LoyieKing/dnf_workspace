# destroyAradData

`_ZN4ARAD16Arad_DataManager15destroyAradDataEv`

`ARAD::Arad_DataManager::destroyAradData()`

| 类 | 地址 |
|---|---|
| `ARAD::Arad_DataManager` | `0x08188952` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08188952  _ZN4ARAD16Arad_DataManager15destroyAradDataEv
#           ARAD::Arad_DataManager::destroyAradData()
# range [0x08188952, 0x081889bb]
08188952 +0x00:  push   %ebp
08188953 +0x01:  mov    %esp,%ebp
08188955 +0x03:  push   %ebx
08188956 +0x04:  sub    $0x24,%esp
08188959 +0x07:  mov    0x8(%ebp),%eax
0818895c +0x0a:  lea    0x4(%eax),%edx
0818895f +0x0d:  lea    -0x10(%ebp),%eax
08188962 +0x10:  mov    %edx,0x4(%esp)
08188966 +0x14:  mov    %eax,(%esp)
08188969 +0x17:  call   0818930c <_GLOBAL__I__ZN4ARAD16Arad_DataManagerC2Ev+0x811>  ; global constructors keyed to ARAD::Arad_DataManager::Arad_DataManager()+0x811
0818896e +0x1c:  sub    $0x4,%esp
08188971 +0x1f:  mov    0x8(%ebp),%eax
08188974 +0x22:  lea    0x4(%eax),%edx
08188977 +0x25:  lea    -0xc(%ebp),%eax
0818897a +0x28:  mov    %edx,0x4(%esp)
0818897e +0x2c:  mov    %eax,(%esp)
08188981 +0x2f:  call   081892e6 <_GLOBAL__I__ZN4ARAD16Arad_DataManagerC2Ev+0x7eb>  ; global constructors keyed to ARAD::Arad_DataManager::Arad_DataManager()+0x7eb
08188986 +0x34:  sub    $0x4,%esp
08188989 +0x37:  lea    -0x11(%ebp),%eax
0818898c +0x3a:  mov    %bl,0xc(%esp)
08188990 +0x3e:  mov    -0x10(%ebp),%edx
08188993 +0x41:  mov    %edx,0x8(%esp)
08188997 +0x45:  mov    -0xc(%ebp),%edx
0818899a +0x48:  mov    %edx,0x4(%esp)
0818899e +0x4c:  mov    %eax,(%esp)
081889a1 +0x4f:  call   08189331 <_GLOBAL__I__ZN4ARAD16Arad_DataManagerC2Ev+0x836>  ; global constructors keyed to ARAD::Arad_DataManager::Arad_DataManager()+0x836
081889a6 +0x54:  sub    $0x4,%esp
081889a9 +0x57:  mov    0x8(%ebp),%eax
081889ac +0x5a:  add    $0x4,%eax
081889af +0x5d:  mov    %eax,(%esp)
081889b2 +0x60:  call   08189382 <_GLOBAL__I__ZN4ARAD16Arad_DataManagerC2Ev+0x887>  ; global constructors keyed to ARAD::Arad_DataManager::Arad_DataManager()+0x887
081889b7 +0x65:  mov    -0x4(%ebp),%ebx
081889ba +0x68:  leave
081889bb +0x69:  ret
```

## 反编译 C

```c
// ARAD::Arad_DataManager::destroyAradData @ 0x8188952

/* ARAD::Arad_DataManager::destroyAradData() */

void __thiscall ARAD::Arad_DataManager::destroyAradData(Arad_DataManager *this)

{
  undefined1 local_15;
  undefined4 local_14;
  undefined4 local_10 [2];
  
  std::
  map<std::string,ARAD::Arad_InterfaceGameScript*,std::less<std::string>,std::allocator<std::pair<std::string_const,ARAD::Arad_InterfaceGameScript*>>>
  ::end((map<std::string,ARAD::Arad_InterfaceGameScript*,std::less<std::string>,std::allocator<std::pair<std::string_const,ARAD::Arad_InterfaceGameScript*>>>
         *)&local_14);
  std::
  map<std::string,ARAD::Arad_InterfaceGameScript*,std::less<std::string>,std::allocator<std::pair<std::string_const,ARAD::Arad_InterfaceGameScript*>>>
  ::begin((map<std::string,ARAD::Arad_InterfaceGameScript*,std::less<std::string>,std::allocator<std::pair<std::string_const,ARAD::Arad_InterfaceGameScript*>>>
           *)local_10);
  std::
  for_each<std::_Rb_tree_iterator<std::pair<std::string_const,ARAD::Arad_InterfaceGameScript*>>,ARAD::FN_DeleteGameScript>
            (&local_15,local_10[0],local_14);
  std::
  map<std::string,ARAD::Arad_InterfaceGameScript*,std::less<std::string>,std::allocator<std::pair<std::string_const,ARAD::Arad_InterfaceGameScript*>>>
  ::clear((map<std::string,ARAD::Arad_InterfaceGameScript*,std::less<std::string>,std::allocator<std::pair<std::string_const,ARAD::Arad_InterfaceGameScript*>>>
           *)(this + 4));
  return;
}
```
