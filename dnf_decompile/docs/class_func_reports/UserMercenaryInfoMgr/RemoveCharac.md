# RemoveCharac

`_ZN20UserMercenaryInfoMgr12RemoveCharacEj`

`UserMercenaryInfoMgr::RemoveCharac(unsigned int)`

| 类 | 地址 |
|---|---|
| `UserMercenaryInfoMgr` | `0x081b441a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b441a  _ZN20UserMercenaryInfoMgr12RemoveCharacEj
#           UserMercenaryInfoMgr::RemoveCharac(unsigned int)
# range [0x081b441a, 0x081b44bf]
081b441a +0x00:  push   %ebp
081b441b +0x01:  mov    %esp,%ebp
081b441d +0x03:  sub    $0x28,%esp
081b4420 +0x06:  mov    0xc(%ebp),%eax
081b4423 +0x09:  mov    %eax,0x4(%esp)
081b4427 +0x0d:  mov    0x8(%ebp),%eax
081b442a +0x10:  mov    %eax,(%esp)
081b442d +0x13:  call   081b42ae <_ZNK20UserMercenaryInfoMgr19FindIndexByCharacNoEj>  ; UserMercenaryInfoMgr::FindIndexByCharacNo(unsigned int) const
081b4432 +0x18:  mov    %eax,-0x18(%ebp)
081b4435 +0x1b:  mov    -0x18(%ebp),%eax
081b4438 +0x1e:  cmp    $0xffffffff,%eax
081b443b +0x21:  je     081b4458 <+0x3e>
081b443d +0x23:  mov    0x8(%ebp),%eax
081b4440 +0x26:  mov    %eax,(%esp)
081b4443 +0x29:  call   081b4b24 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x398>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x398
081b4448 +0x2e:  mov    %eax,%edx
081b444a +0x30:  mov    -0x18(%ebp),%eax
081b444d +0x33:  cmp    %eax,%edx
081b444f +0x35:  jle    081b4458 <+0x3e>
081b4451 +0x37:  mov    $0x1,%eax
081b4456 +0x3c:  jmp    081b445d <+0x43>
081b4458 +0x3e:  mov    $0x0,%eax
081b445d +0x43:  test   %al,%al
081b445f +0x45:  je     081b44bd <+0xa3>
081b4461 +0x47:  mov    0x8(%ebp),%edx
081b4464 +0x4a:  lea    -0xc(%ebp),%eax
081b4467 +0x4d:  mov    %edx,0x4(%esp)
081b446b +0x51:  mov    %eax,(%esp)
081b446e +0x54:  call   081b4c26 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x49a>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x49a
081b4473 +0x59:  sub    $0x4,%esp
081b4476 +0x5c:  lea    -0x10(%ebp),%eax
081b4479 +0x5f:  lea    -0x18(%ebp),%edx
081b447c +0x62:  mov    %edx,0x8(%esp)
081b4480 +0x66:  lea    -0xc(%ebp),%edx
081b4483 +0x69:  mov    %edx,0x4(%esp)
081b4487 +0x6d:  mov    %eax,(%esp)
081b448a +0x70:  call   081b4c4a <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x4be>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x4be
081b448f +0x75:  sub    $0x4,%esp
081b4492 +0x78:  mov    0x8(%ebp),%edx
081b4495 +0x7b:  lea    -0x14(%ebp),%eax
081b4498 +0x7e:  mov    -0x10(%ebp),%ecx
081b449b +0x81:  mov    %ecx,0x8(%esp)
081b449f +0x85:  mov    %edx,0x4(%esp)
081b44a3 +0x89:  mov    %eax,(%esp)
081b44a6 +0x8c:  call   081b4c80 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x4f4>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x4f4
081b44ab +0x91:  sub    $0x4,%esp
081b44ae +0x94:  jmp    081b44bd <+0xa3>
081b44b0 +0x96:  mov    %eax,(%esp)
081b44b3 +0x99:  call   08725ce0 <__cxa_begin_catch>
081b44b8 +0x9e:  call   08725c30 <__cxa_end_catch>
081b44bd +0xa3:  leave
081b44be +0xa4:  ret
081b44bf +0xa5:  nop
```

## 反编译 C

```c
// UserMercenaryInfoMgr::RemoveCharac @ 0x81b441a

/* UserMercenaryInfoMgr::RemoveCharac(unsigned int) */

void __thiscall UserMercenaryInfoMgr::RemoveCharac(UserMercenaryInfoMgr *this,uint param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined1 local_18 [4];
  undefined4 local_14;
  int local_10 [3];
  
  iVar2 = FindIndexByCharacNo(this,param_1);
  if (iVar2 != -1) {
    iVar3 = std::vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>>::size
                      ((vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>> *)this);
    if (iVar2 < iVar3) {
      bVar1 = true;
      goto LAB_081b445d;
    }
  }
  bVar1 = false;
LAB_081b445d:
  if (bVar1) {
                    /* try { // try from 081b446e to 081b44aa has its CatchHandler @ 081b44b0 */
    std::vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>>::begin();
    __gnu_cxx::
    __normal_iterator<CHARAC_LOAD_MERCENARY*,std::vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>>>
    ::operator+((__normal_iterator<CHARAC_LOAD_MERCENARY*,std::vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>>>
                 *)&local_14,local_10);
    std::vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>>::erase
              (local_18,this,local_14);
  }
  return;
}
```
