# find

`_ZN17Arad_Mileage_Data4findEi`

`Arad_Mileage_Data::find(int)`

| 类 | 地址 |
|---|---|
| `Arad_Mileage_Data` | `0x081a3668` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081a3668  _ZN17Arad_Mileage_Data4findEi
#           Arad_Mileage_Data::find(int)
# range [0x081a3668, 0x081a36ef]
081a3668 +0x00:  push   %ebp
081a3669 +0x01:  mov    %esp,%ebp
081a366b +0x03:  sub    $0x28,%esp
081a366e +0x06:  mov    0x8(%ebp),%eax
081a3671 +0x09:  lea    0x8(%eax),%edx
081a3674 +0x0c:  lea    -0x10(%ebp),%eax
081a3677 +0x0f:  mov    %edx,0x4(%esp)
081a367b +0x13:  mov    %eax,(%esp)
081a367e +0x16:  call   081a4950 <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x9ab>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x9ab
081a3683 +0x1b:  sub    $0x4,%esp
081a3686 +0x1e:  jmp    081a36ba <+0x52>
081a3688 +0x20:  lea    -0x10(%ebp),%eax
081a368b +0x23:  mov    %eax,(%esp)
081a368e +0x26:  call   081a49dc <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0xa37>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0xa37
081a3693 +0x2b:  mov    (%eax),%eax
081a3695 +0x2d:  cmp    0xc(%ebp),%eax
081a3698 +0x30:  sete   %al
081a369b +0x33:  test   %al,%al
081a369d +0x35:  je     081a36af <+0x47>
081a369f +0x37:  lea    -0x10(%ebp),%eax
081a36a2 +0x3a:  mov    %eax,(%esp)
081a36a5 +0x3d:  call   081a49dc <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0xa37>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0xa37
081a36aa +0x42:  mov    0x4(%eax),%eax
081a36ad +0x45:  jmp    081a36ed <+0x85>
081a36af +0x47:  lea    -0x10(%ebp),%eax
081a36b2 +0x4a:  mov    %eax,(%esp)
081a36b5 +0x4d:  call   081a49c6 <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0xa21>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0xa21
081a36ba +0x52:  mov    0x8(%ebp),%eax
081a36bd +0x55:  lea    0x8(%eax),%edx
081a36c0 +0x58:  lea    -0xc(%ebp),%eax
081a36c3 +0x5b:  mov    %edx,0x4(%esp)
081a36c7 +0x5f:  mov    %eax,(%esp)
081a36ca +0x62:  call   081a4974 <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x9cf>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x9cf
081a36cf +0x67:  sub    $0x4,%esp
081a36d2 +0x6a:  lea    -0xc(%ebp),%eax
081a36d5 +0x6d:  mov    %eax,0x4(%esp)
081a36d9 +0x71:  lea    -0x10(%ebp),%eax
081a36dc +0x74:  mov    %eax,(%esp)
081a36df +0x77:  call   081a499a <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x9f5>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x9f5
081a36e4 +0x7c:  test   %al,%al
081a36e6 +0x7e:  jne    081a3688 <+0x20>
081a36e8 +0x80:  mov    $0xffffffff,%eax
081a36ed +0x85:  leave
081a36ee +0x86:  ret
081a36ef +0x87:  nop
```

## 反编译 C

```c
// Arad_Mileage_Data::find @ 0x81a3668

/* Arad_Mileage_Data::find(int) */

undefined4 __thiscall Arad_Mileage_Data::find(Arad_Mileage_Data *this,int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  __normal_iterator<Arad_Mileage_Data::Data*,std::vector<Arad_Mileage_Data::Data,std::allocator<Arad_Mileage_Data::Data>>>
  local_14 [4];
  __normal_iterator local_10 [12];
  
  std::vector<Arad_Mileage_Data::Data,std::allocator<Arad_Mileage_Data::Data>>::begin();
  while( true ) {
    std::vector<Arad_Mileage_Data::Data,std::allocator<Arad_Mileage_Data::Data>>::end();
    bVar1 = __gnu_cxx::operator!=(local_14,local_10);
    if (!bVar1) {
      return 0xffffffff;
    }
    piVar2 = (int *)__gnu_cxx::
                    __normal_iterator<Arad_Mileage_Data::Data*,std::vector<Arad_Mileage_Data::Data,std::allocator<Arad_Mileage_Data::Data>>>
                    ::operator->(local_14);
    if (*piVar2 == param_1) break;
    __gnu_cxx::
    __normal_iterator<Arad_Mileage_Data::Data*,std::vector<Arad_Mileage_Data::Data,std::allocator<Arad_Mileage_Data::Data>>>
    ::operator++(local_14);
  }
  iVar3 = __gnu_cxx::
          __normal_iterator<Arad_Mileage_Data::Data*,std::vector<Arad_Mileage_Data::Data,std::allocator<Arad_Mileage_Data::Data>>>
          ::operator->(local_14);
  return *(undefined4 *)(iVar3 + 4);
}
```
