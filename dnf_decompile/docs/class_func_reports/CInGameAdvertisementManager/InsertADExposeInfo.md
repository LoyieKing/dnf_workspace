# InsertADExposeInfo

`_ZN27CInGameAdvertisementManager18InsertADExposeInfoER25stInGameADExposeCondition`

`CInGameAdvertisementManager::InsertADExposeInfo(stInGameADExposeCondition&)`

| 类 | 地址 |
|---|---|
| `CInGameAdvertisementManager` | `0x080fd8e4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080fd8e4  _ZN27CInGameAdvertisementManager18InsertADExposeInfoER25stInGameADExposeCondition
#           CInGameAdvertisementManager::InsertADExposeInfo(stInGameADExposeCondition&)
# range [0x080fd8e4, 0x080fd95d]
080fd8e4 +0x00:  push   %ebp
080fd8e5 +0x01:  mov    %esp,%ebp
080fd8e7 +0x03:  sub    $0x38,%esp
080fd8ea +0x06:  movl   $0x850,(%esp)
080fd8f1 +0x0d:  call   080fc998 <_ZN24CAdvertisementExposeInfonwEj>  ; CAdvertisementExposeInfo::operator new(unsigned int)
080fd8f6 +0x12:  mov    %eax,-0x20(%ebp)
080fd8f9 +0x15:  mov    -0x20(%ebp),%eax
080fd8fc +0x18:  mov    0xc(%ebp),%edx
080fd8ff +0x1b:  mov    %edx,0x4(%esp)
080fd903 +0x1f:  mov    %eax,(%esp)
080fd906 +0x22:  call   080fdd0a <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x36>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x36
080fd90b +0x27:  mov    0xc(%ebp),%eax
080fd90e +0x2a:  lea    0x204(%eax),%ecx
080fd914 +0x30:  lea    -0x10(%ebp),%eax
080fd917 +0x33:  lea    -0x20(%ebp),%edx
080fd91a +0x36:  mov    %edx,0x8(%esp)
080fd91e +0x3a:  mov    %ecx,0x4(%esp)
080fd922 +0x3e:  mov    %eax,(%esp)
080fd925 +0x41:  call   080fe521 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x84d>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x84d
080fd92a +0x46:  sub    $0x4,%esp
080fd92d +0x49:  lea    -0x10(%ebp),%eax
080fd930 +0x4c:  mov    %eax,0x4(%esp)
080fd934 +0x50:  lea    -0x18(%ebp),%eax
080fd937 +0x53:  mov    %eax,(%esp)
080fd93a +0x56:  call   080fe560 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x88c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x88c
080fd93f +0x5b:  mov    0x8(%ebp),%edx
080fd942 +0x5e:  lea    -0x1c(%ebp),%eax
080fd945 +0x61:  lea    -0x18(%ebp),%ecx
080fd948 +0x64:  mov    %ecx,0x8(%esp)
080fd94c +0x68:  mov    %edx,0x4(%esp)
080fd950 +0x6c:  mov    %eax,(%esp)
080fd953 +0x6f:  call   080fe592 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x8be>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x8be
080fd958 +0x74:  sub    $0x4,%esp
080fd95b +0x77:  leave
080fd95c +0x78:  ret
080fd95d +0x79:  nop
```

## 反编译 C

```c
// CInGameAdvertisementManager::InsertADExposeInfo @ 0x80fd8e4

/* CInGameAdvertisementManager::InsertADExposeInfo(stInGameADExposeCondition&) */

void __thiscall
CInGameAdvertisementManager::InsertADExposeInfo
          (CInGameAdvertisementManager *this,stInGameADExposeCondition *param_1)

{
  CAdvertisementExposeInfo *this_00;
  uint in_stack_ffffffc8;
  pair local_20 [4];
  pair<short_const,CAdvertisementExposeInfo*> local_1c [8];
  short local_14 [8];
  
  this_00 = CAdvertisementExposeInfo::operator_new
                      ((CAdvertisementExposeInfo *)0x850,in_stack_ffffffc8);
  CAdvertisementExposeInfo::SetAdvertisementExposeInfo(this_00,param_1);
  std::make_pair<short&,CAdvertisementExposeInfo*&>
            (local_14,(CAdvertisementExposeInfo **)(param_1 + 0x204));
  std::pair<short_const,CAdvertisementExposeInfo*>::pair<short,CAdvertisementExposeInfo*>
            (local_1c,(pair *)local_14);
  std::
  multimap<short,CAdvertisementExposeInfo*,std::less<short>,std::allocator<std::pair<short_const,CAdvertisementExposeInfo*>>>
  ::insert(local_20);
  return;
}
```
