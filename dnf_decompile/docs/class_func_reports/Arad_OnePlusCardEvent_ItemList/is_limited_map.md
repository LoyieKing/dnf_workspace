# is_limited_map

`_ZN30Arad_OnePlusCardEvent_ItemList14is_limited_mapEj`

`Arad_OnePlusCardEvent_ItemList::is_limited_map(unsigned int)`

| 类 | 地址 |
|---|---|
| `Arad_OnePlusCardEvent_ItemList` | `0x081a3ab2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081a3ab2  _ZN30Arad_OnePlusCardEvent_ItemList14is_limited_mapEj
#           Arad_OnePlusCardEvent_ItemList::is_limited_map(unsigned int)
# range [0x081a3ab2, 0x081a3b47]
081a3ab2 +0x00:  push   %ebp
081a3ab3 +0x01:  mov    %esp,%ebp
081a3ab5 +0x03:  sub    $0x28,%esp
081a3ab8 +0x06:  mov    0x8(%ebp),%eax
081a3abb +0x09:  lea    0x10(%eax),%edx
081a3abe +0x0c:  lea    -0x14(%ebp),%eax
081a3ac1 +0x0f:  mov    %edx,0x4(%esp)
081a3ac5 +0x13:  mov    %eax,(%esp)
081a3ac8 +0x16:  call   080e2a8a <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x830>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x830
081a3acd +0x1b:  sub    $0x4,%esp
081a3ad0 +0x1e:  mov    0x8(%ebp),%eax
081a3ad3 +0x21:  lea    0x10(%eax),%edx
081a3ad6 +0x24:  lea    -0x10(%ebp),%eax
081a3ad9 +0x27:  mov    %edx,0x4(%esp)
081a3add +0x2b:  mov    %eax,(%esp)
081a3ae0 +0x2e:  call   080e384e <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x15f4>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x15f4
081a3ae5 +0x33:  sub    $0x4,%esp
081a3ae8 +0x36:  lea    -0x18(%ebp),%eax
081a3aeb +0x39:  lea    0xc(%ebp),%edx
081a3aee +0x3c:  mov    %edx,0xc(%esp)
081a3af2 +0x40:  mov    -0x14(%ebp),%edx
081a3af5 +0x43:  mov    %edx,0x8(%esp)
081a3af9 +0x47:  mov    -0x10(%ebp),%edx
081a3afc +0x4a:  mov    %edx,0x4(%esp)
081a3b00 +0x4e:  mov    %eax,(%esp)
081a3b03 +0x51:  call   0815266b <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1fa0>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1fa0
081a3b08 +0x56:  sub    $0x4,%esp
081a3b0b +0x59:  mov    0x8(%ebp),%eax
081a3b0e +0x5c:  lea    0x10(%eax),%edx
081a3b11 +0x5f:  lea    -0xc(%ebp),%eax
081a3b14 +0x62:  mov    %edx,0x4(%esp)
081a3b18 +0x66:  mov    %eax,(%esp)
081a3b1b +0x69:  call   080e2a8a <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x830>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x830
081a3b20 +0x6e:  sub    $0x4,%esp
081a3b23 +0x71:  lea    -0xc(%ebp),%eax
081a3b26 +0x74:  mov    %eax,0x4(%esp)
081a3b2a +0x78:  lea    -0x18(%ebp),%eax
081a3b2d +0x7b:  mov    %eax,(%esp)
081a3b30 +0x7e:  call   081a4adc <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0xb37>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0xb37
081a3b35 +0x83:  test   %al,%al
081a3b37 +0x85:  je     081a3b40 <+0x8e>
081a3b39 +0x87:  mov    $0x0,%eax
081a3b3e +0x8c:  jmp    081a3b45 <+0x93>
081a3b40 +0x8e:  mov    $0x1,%eax
081a3b45 +0x93:  leave
081a3b46 +0x94:  ret
081a3b47 +0x95:  nop
```

## 反编译 C

```c
// Arad_OnePlusCardEvent_ItemList::is_limited_map @ 0x81a3ab2

/* Arad_OnePlusCardEvent_ItemList::is_limited_map(unsigned int) */

bool Arad_OnePlusCardEvent_ItemList::is_limited_map(uint param_1)

{
  bool bVar1;
  undefined1 local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  __normal_iterator local_10 [12];
  
  std::vector<unsigned_int,std::allocator<unsigned_int>>::end();
  std::vector<unsigned_int,std::allocator<unsigned_int>>::begin();
  std::
  find<__gnu_cxx::__normal_iterator<unsigned_int*,std::vector<unsigned_int,std::allocator<unsigned_int>>>,unsigned_int>
            (local_1c,local_14,local_18,&stack0x00000008);
  std::vector<unsigned_int,std::allocator<unsigned_int>>::end();
  bVar1 = __gnu_cxx::operator==(local_1c,local_10);
  return !bVar1;
}
```
