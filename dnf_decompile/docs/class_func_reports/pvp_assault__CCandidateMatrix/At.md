# At

`_ZN11pvp_assault16CCandidateMatrix2AtEjRiS1_`

`pvp_assault::CCandidateMatrix::At(unsigned int, int&, int&)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CCandidateMatrix` | `0x082e590c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e590c  _ZN11pvp_assault16CCandidateMatrix2AtEjRiS1_
#           pvp_assault::CCandidateMatrix::At(unsigned int, int&, int&)
# range [0x082e590c, 0x082e5961]
082e590c +0x00:  push   %ebp
082e590d +0x01:  mov    %esp,%ebp
082e590f +0x03:  sub    $0x18,%esp
082e5912 +0x06:  mov    0x8(%ebp),%eax
082e5915 +0x09:  mov    %eax,(%esp)
082e5918 +0x0c:  call   082f1680 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1404>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1404
082e591d +0x11:  cmp    0xc(%ebp),%eax
082e5920 +0x14:  seta   %al
082e5923 +0x17:  test   %al,%al
082e5925 +0x19:  je     082e595b <+0x4f>
082e5927 +0x1b:  mov    0x8(%ebp),%eax
082e592a +0x1e:  mov    0xc(%ebp),%edx
082e592d +0x21:  mov    %edx,0x4(%esp)
082e5931 +0x25:  mov    %eax,(%esp)
082e5934 +0x28:  call   082f16a2 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1426>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1426
082e5939 +0x2d:  mov    0x4(%eax),%edx
082e593c +0x30:  mov    0x10(%ebp),%eax
082e593f +0x33:  mov    %edx,(%eax)
082e5941 +0x35:  mov    0x8(%ebp),%eax
082e5944 +0x38:  mov    0xc(%ebp),%edx
082e5947 +0x3b:  mov    %edx,0x4(%esp)
082e594b +0x3f:  mov    %eax,(%esp)
082e594e +0x42:  call   082f16a2 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1426>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1426
082e5953 +0x47:  mov    0x8(%eax),%edx
082e5956 +0x4a:  mov    0x14(%ebp),%eax
082e5959 +0x4d:  mov    %edx,(%eax)
082e595b +0x4f:  mov    $0x0,%eax
082e5960 +0x54:  leave
082e5961 +0x55:  ret
```

## 反编译 C

```c
// pvp_assault::CCandidateMatrix::At @ 0x82e590c

/* pvp_assault::CCandidateMatrix::At(unsigned int, int&, int&) */

undefined4 __thiscall
pvp_assault::CCandidateMatrix::At(CCandidateMatrix *this,uint param_1,int *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = std::vector<pvp_assault::CandidatePoint,std::allocator<pvp_assault::CandidatePoint>>::size
                    ((vector<pvp_assault::CandidatePoint,std::allocator<pvp_assault::CandidatePoint>>
                      *)this);
  if (param_1 < uVar1) {
    iVar2 = std::vector<pvp_assault::CandidatePoint,std::allocator<pvp_assault::CandidatePoint>>::
            operator[]((vector<pvp_assault::CandidatePoint,std::allocator<pvp_assault::CandidatePoint>>
                        *)this,param_1);
    *param_2 = *(int *)(iVar2 + 4);
    iVar2 = std::vector<pvp_assault::CandidatePoint,std::allocator<pvp_assault::CandidatePoint>>::
            operator[]((vector<pvp_assault::CandidatePoint,std::allocator<pvp_assault::CandidatePoint>>
                        *)this,param_1);
    *param_3 = *(int *)(iVar2 + 8);
  }
  return 0;
}
```
