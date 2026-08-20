# ~NeedMaterialDataManager

`_ZN23NeedMaterialDataManagerD1Ev`

`NeedMaterialDataManager::~NeedMaterialDataManager()`

| 类 | 地址 |
|---|---|
| `NeedMaterialDataManager` | `0x081b5a9e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b5a9e  _ZN23NeedMaterialDataManagerD1Ev
#           NeedMaterialDataManager::~NeedMaterialDataManager()
# range [0x081b5a9e, 0x081b5ab1]
081b5a9e +0x00:  push   %ebp
081b5a9f +0x01:  mov    %esp,%ebp
081b5aa1 +0x03:  sub    $0x18,%esp
081b5aa4 +0x06:  mov    0x8(%ebp),%eax
081b5aa7 +0x09:  mov    %eax,(%esp)
081b5aaa +0x0c:  call   081b5c7a <_GLOBAL__I__ZN23NeedMaterialDataManagerC2Ev+0x1d>  ; global constructors keyed to NeedMaterialDataManager::NeedMaterialDataManager()+0x1d
081b5aaf +0x11:  leave
081b5ab0 +0x12:  ret
081b5ab1 +0x13:  nop
```

## 反编译 C

```c
// NeedMaterialDataManager::~NeedMaterialDataManager @ 0x81b5a9e

/* NeedMaterialDataManager::~NeedMaterialDataManager() */

void __thiscall NeedMaterialDataManager::~NeedMaterialDataManager(NeedMaterialDataManager *this)

{
  std::
  map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
  ::~map((map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
          *)this);
  return;
}
```
