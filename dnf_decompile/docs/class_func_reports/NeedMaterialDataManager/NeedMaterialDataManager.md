# NeedMaterialDataManager

`_ZN23NeedMaterialDataManagerC1Ev`

`NeedMaterialDataManager::NeedMaterialDataManager()`

| 类 | 地址 |
|---|---|
| `NeedMaterialDataManager` | `0x081b5a3c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b5a3c  _ZN23NeedMaterialDataManagerC1Ev
#           NeedMaterialDataManager::NeedMaterialDataManager()
# range [0x081b5a3c, 0x081b5a9d]
081b5a3c +0x00:  push   %ebp
081b5a3d +0x01:  mov    %esp,%ebp
081b5a3f +0x03:  push   %esi
081b5a40 +0x04:  push   %ebx
081b5a41 +0x05:  sub    $0x20,%esp
081b5a44 +0x08:  mov    0x8(%ebp),%eax
081b5a47 +0x0b:  mov    %eax,(%esp)
081b5a4a +0x0e:  call   081b5ca6 <_GLOBAL__I__ZN23NeedMaterialDataManagerC2Ev+0x49>  ; global constructors keyed to NeedMaterialDataManager::NeedMaterialDataManager()+0x49
081b5a4f +0x13:  mov    0x8(%ebp),%eax
081b5a52 +0x16:  lea    0x18(%eax),%edx
081b5a55 +0x19:  movl   $0x0,-0x10(%ebp)
081b5a5c +0x20:  movl   $0xffffffff,-0xc(%ebp)
081b5a63 +0x27:  lea    -0x10(%ebp),%eax
081b5a66 +0x2a:  mov    %eax,0x8(%esp)
081b5a6a +0x2e:  lea    -0xc(%ebp),%eax
081b5a6d +0x31:  mov    %eax,0x4(%esp)
081b5a71 +0x35:  mov    %edx,(%esp)
081b5a74 +0x38:  call   081627d4 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0xa42>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0xa42
081b5a79 +0x3d:  jmp    081b5a96 <+0x5a>
081b5a7b +0x3f:  mov    %edx,%ebx
081b5a7d +0x41:  mov    %eax,%esi
081b5a7f +0x43:  mov    0x8(%ebp),%eax
081b5a82 +0x46:  mov    %eax,(%esp)
081b5a85 +0x49:  call   081b5c7a <_GLOBAL__I__ZN23NeedMaterialDataManagerC2Ev+0x1d>  ; global constructors keyed to NeedMaterialDataManager::NeedMaterialDataManager()+0x1d
081b5a8a +0x4e:  mov    %esi,%eax
081b5a8c +0x50:  mov    %ebx,%edx
081b5a8e +0x52:  mov    %eax,(%esp)
081b5a91 +0x55:  call   08ae3750 <_Unwind_Resume>
081b5a96 +0x5a:  add    $0x20,%esp
081b5a99 +0x5d:  pop    %ebx
081b5a9a +0x5e:  pop    %esi
081b5a9b +0x5f:  pop    %ebp
081b5a9c +0x60:  ret
081b5a9d +0x61:  nop
```

## 反编译 C

```c
// NeedMaterialDataManager::NeedMaterialDataManager @ 0x81b5a3c

/* NeedMaterialDataManager::NeedMaterialDataManager() */

void __thiscall NeedMaterialDataManager::NeedMaterialDataManager(NeedMaterialDataManager *this)

{
  int local_14 [2];
  
  std::
  map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
  ::map((map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
         *)this);
  local_14[0] = 0;
  local_14[1] = 0xffffffff;
                    /* try { // try from 081b5a74 to 081b5a78 has its CatchHandler @ 081b5a7b */
  std::pair<int,int>::pair<int,int>((pair<int,int> *)(this + 0x18),local_14 + 1,local_14);
  return;
}
```
