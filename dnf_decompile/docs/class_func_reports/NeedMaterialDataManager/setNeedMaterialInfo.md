# setNeedMaterialInfo

`_ZN23NeedMaterialDataManager19setNeedMaterialInfoEiRKSt4pairIiiE`

`NeedMaterialDataManager::setNeedMaterialInfo(int, std::pair<int, int> const&)`

| 类 | 地址 |
|---|---|
| `NeedMaterialDataManager` | `0x081b5b46` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b5b46  _ZN23NeedMaterialDataManager19setNeedMaterialInfoEiRKSt4pairIiiE
#           NeedMaterialDataManager::setNeedMaterialInfo(int, std::pair<int, int> const&)
# range [0x081b5b46, 0x081b5b6f]
081b5b46 +0x00:  push   %ebp
081b5b47 +0x01:  mov    %esp,%ebp
081b5b49 +0x03:  sub    $0x18,%esp
081b5b4c +0x06:  mov    0x8(%ebp),%eax
081b5b4f +0x09:  lea    0xc(%ebp),%edx
081b5b52 +0x0c:  mov    %edx,0x4(%esp)
081b5b56 +0x10:  mov    %eax,(%esp)
081b5b59 +0x13:  call   081b5d2e <_GLOBAL__I__ZN23NeedMaterialDataManagerC2Ev+0xd1>  ; global constructors keyed to NeedMaterialDataManager::NeedMaterialDataManager()+0xd1
081b5b5e +0x18:  mov    %eax,%ecx
081b5b60 +0x1a:  mov    0x10(%ebp),%eax
081b5b63 +0x1d:  mov    0x4(%eax),%edx
081b5b66 +0x20:  mov    (%eax),%eax
081b5b68 +0x22:  mov    %eax,(%ecx)
081b5b6a +0x24:  mov    %edx,0x4(%ecx)
081b5b6d +0x27:  leave
081b5b6e +0x28:  ret
081b5b6f +0x29:  nop
```

## 反编译 C

```c
// NeedMaterialDataManager::setNeedMaterialInfo @ 0x81b5b46

/* NeedMaterialDataManager::setNeedMaterialInfo(int, std::pair<int, int> const&) */

void __thiscall
NeedMaterialDataManager::setNeedMaterialInfo
          (NeedMaterialDataManager *this,int param_1,pair *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)
           std::
           map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
           ::operator[]((map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
                         *)this,&param_1);
  uVar1 = *(undefined4 *)(param_2 + 4);
  *puVar2 = *(undefined4 *)param_2;
  puVar2[1] = uVar1;
  return;
}
```
