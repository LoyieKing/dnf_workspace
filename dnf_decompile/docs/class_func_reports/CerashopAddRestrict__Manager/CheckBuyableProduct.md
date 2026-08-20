# CheckBuyableProduct

`_ZN19CerashopAddRestrict7Manager19CheckBuyableProductEP5CUserjji`

`CerashopAddRestrict::Manager::CheckBuyableProduct(CUser*, unsigned int, unsigned int, int)`

| 类 | 地址 |
|---|---|
| `CerashopAddRestrict::Manager` | `0x080e0bee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080e0bee  _ZN19CerashopAddRestrict7Manager19CheckBuyableProductEP5CUserjji
#           CerashopAddRestrict::Manager::CheckBuyableProduct(CUser*, unsigned int, unsigned int, int)
# range [0x080e0bee, 0x080e0ce1]
080e0bee +0x00:  push   %ebp
080e0bef +0x01:  mov    %esp,%ebp
080e0bf1 +0x03:  push   %ebx
080e0bf2 +0x04:  sub    $0x34,%esp
080e0bf5 +0x07:  mov    0xc(%ebp),%eax
080e0bf8 +0x0a:  add    $0x8d1e4,%eax
080e0bfd +0x0f:  mov    %eax,-0x10(%ebp)
080e0c00 +0x12:  cmpl   $0x0,0x18(%ebp)
080e0c04 +0x16:  jne    080e0c22 <+0x34>
080e0c06 +0x18:  mov    -0x10(%ebp),%eax
080e0c09 +0x1b:  add    $0x30,%eax
080e0c0c +0x1e:  mov    %eax,(%esp)
080e0c0f +0x21:  call   080e273a <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x4e0>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x4e0
080e0c14 +0x26:  mov    -0x10(%ebp),%eax
080e0c17 +0x29:  add    $0x48,%eax
080e0c1a +0x2c:  mov    %eax,(%esp)
080e0c1d +0x2f:  call   080e273a <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x4e0>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x4e0
080e0c22 +0x34:  mov    0x8(%ebp),%eax
080e0c25 +0x37:  lea    0x4(%eax),%edx
080e0c28 +0x3a:  mov    0x10(%ebp),%eax
080e0c2b +0x3d:  mov    %eax,0x4(%esp)
080e0c2f +0x41:  mov    %edx,(%esp)
080e0c32 +0x44:  call   08abf766 <_ZN19CerashopAddRestrict12ScriptLoader15GetRestrictInfoEj>  ; CerashopAddRestrict::ScriptLoader::GetRestrictInfo(unsigned int)
080e0c37 +0x49:  mov    %eax,-0xc(%ebp)
080e0c3a +0x4c:  cmpl   $0x0,-0xc(%ebp)
080e0c3e +0x50:  jne    080e0c4a <+0x5c>
080e0c40 +0x52:  mov    $0x1,%eax
080e0c45 +0x57:  jmp    080e0cdc <+0xee>
080e0c4a +0x5c:  mov    -0xc(%ebp),%eax
080e0c4d +0x5f:  mov    0x10(%eax),%ebx
080e0c50 +0x62:  movl   $0x0,(%esp)
080e0c57 +0x69:  call   0807d750 <_init+0x48>
080e0c5c +0x6e:  cmp    %eax,%ebx
080e0c5e +0x70:  setl   %al
080e0c61 +0x73:  test   %al,%al
080e0c63 +0x75:  je     080e0c6c <+0x7e>
080e0c65 +0x77:  mov    $0x0,%eax
080e0c6a +0x7c:  jmp    080e0cdc <+0xee>
080e0c6c +0x7e:  mov    -0xc(%ebp),%eax
080e0c6f +0x81:  mov    (%eax),%eax
080e0c71 +0x83:  test   %eax,%eax
080e0c73 +0x85:  je     080e0c7c <+0x8e>
080e0c75 +0x87:  cmp    $0x1,%eax
080e0c78 +0x8a:  je     080e0ca8 <+0xba>
080e0c7a +0x8c:  jmp    080e0cd7 <+0xe9>
080e0c7c +0x8e:  mov    -0x10(%ebp),%eax
080e0c7f +0x91:  mov    -0x10(%ebp),%edx
080e0c82 +0x94:  lea    0x30(%edx),%ecx
080e0c85 +0x97:  mov    0x14(%ebp),%edx
080e0c88 +0x9a:  mov    %edx,0x10(%esp)
080e0c8c +0x9e:  mov    -0xc(%ebp),%edx
080e0c8f +0xa1:  mov    %edx,0xc(%esp)
080e0c93 +0xa5:  mov    0x10(%ebp),%edx
080e0c96 +0xa8:  mov    %edx,0x8(%esp)
080e0c9a +0xac:  mov    %eax,0x4(%esp)
080e0c9e +0xb0:  mov    %ecx,(%esp)
080e0ca1 +0xb3:  call   080e0a43 <_ZN19CerashopAddRestrictL18FindUserInfoDetailERSt3mapIjjSt4lessIjESaISt4pairIKjjEEERS0_IjPNS_10paramDailyES2_SaIS3_IS4_SA_EEEjPNS_9InfoDailyEj>  ; CerashopAddRestrict::FindUserInfoDetail(std::map<unsigned int, unsigned int, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, unsigned int> > >&, std::map<unsigned int, CerashopAddRestrict::paramDaily*, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, CerashopAddRestrict::paramDaily*> > >&, unsigned int, CerashopAddRestrict::InfoDaily*, unsigned int)
080e0ca6 +0xb8:  jmp    080e0cdc <+0xee>
080e0ca8 +0xba:  mov    -0x10(%ebp),%eax
080e0cab +0xbd:  lea    0x18(%eax),%ecx
080e0cae +0xc0:  mov    -0x10(%ebp),%eax
080e0cb1 +0xc3:  lea    0x48(%eax),%edx
080e0cb4 +0xc6:  mov    0x14(%ebp),%eax
080e0cb7 +0xc9:  mov    %eax,0x10(%esp)
080e0cbb +0xcd:  mov    -0xc(%ebp),%eax
080e0cbe +0xd0:  mov    %eax,0xc(%esp)
080e0cc2 +0xd4:  mov    0x10(%ebp),%eax
080e0cc5 +0xd7:  mov    %eax,0x8(%esp)
080e0cc9 +0xdb:  mov    %ecx,0x4(%esp)
080e0ccd +0xdf:  mov    %edx,(%esp)
080e0cd0 +0xe2:  call   080e0a43 <_ZN19CerashopAddRestrictL18FindUserInfoDetailERSt3mapIjjSt4lessIjESaISt4pairIKjjEEERS0_IjPNS_10paramDailyES2_SaIS3_IS4_SA_EEEjPNS_9InfoDailyEj>  ; CerashopAddRestrict::FindUserInfoDetail(std::map<unsigned int, unsigned int, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, unsigned int> > >&, std::map<unsigned int, CerashopAddRestrict::paramDaily*, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, CerashopAddRestrict::paramDaily*> > >&, unsigned int, CerashopAddRestrict::InfoDaily*, unsigned int)
080e0cd5 +0xe7:  jmp    080e0cdc <+0xee>
080e0cd7 +0xe9:  mov    $0x0,%eax
080e0cdc +0xee:  add    $0x34,%esp
080e0cdf +0xf1:  pop    %ebx
080e0ce0 +0xf2:  pop    %ebp
080e0ce1 +0xf3:  ret
```

## 反编译 C

```c
// CerashopAddRestrict::Manager::CheckBuyableProduct @ 0x80e0bee

/* CerashopAddRestrict::Manager::CheckBuyableProduct(CUser*, unsigned int, unsigned int, int) */

undefined4 __thiscall
CerashopAddRestrict::Manager::CheckBuyableProduct
          (Manager *this,CUser *param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  InfoDaily *pIVar2;
  undefined4 uVar3;
  time_t tVar4;
  
  if (param_4 == 0) {
    std::
    map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
    ::clear((map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
             *)(param_1 + 0x8d214));
    std::
    map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
    ::clear((map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
             *)(param_1 + 0x8d22c));
  }
  pIVar2 = (InfoDaily *)ScriptLoader::GetRestrictInfo((uint)(this + 4));
  if (pIVar2 == (InfoDaily *)0x0) {
    uVar3 = 1;
  }
  else {
    iVar1 = *(int *)(pIVar2 + 0x10);
    tVar4 = time((time_t *)0x0);
    if (iVar1 < tVar4) {
      uVar3 = 0;
    }
    else if (*(int *)pIVar2 == 0) {
      uVar3 = FindUserInfoDetail((map *)(param_1 + 0x8d214),(map *)(param_1 + 0x8d1e4),param_2,
                                 pIVar2,param_3);
    }
    else if (*(int *)pIVar2 == 1) {
      uVar3 = FindUserInfoDetail((map *)(param_1 + 0x8d22c),(map *)(param_1 + 0x8d1fc),param_2,
                                 pIVar2,param_3);
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}
```
