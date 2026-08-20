# RemoveCandidatePoint

`_ZN11pvp_assault16CCandidateMatrix20RemoveCandidatePointEPSt6vectorI7MapAreaSaIS2_EE`

`pvp_assault::CCandidateMatrix::RemoveCandidatePoint(std::vector<MapArea, std::allocator<MapArea> >*)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CCandidateMatrix` | `0x082e5f36` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e5f36  _ZN11pvp_assault16CCandidateMatrix20RemoveCandidatePointEPSt6vectorI7MapAreaSaIS2_EE
#           pvp_assault::CCandidateMatrix::RemoveCandidatePoint(std::vector<MapArea, std::allocator<MapArea> >*)
# range [0x082e5f36, 0x082e5fed]
082e5f36 +0x00:  push   %ebp
082e5f37 +0x01:  mov    %esp,%ebp
082e5f39 +0x03:  push   %ebx
082e5f3a +0x04:  sub    $0x34,%esp
082e5f3d +0x07:  mov    0x8(%ebp),%edx
082e5f40 +0x0a:  lea    -0x10(%ebp),%eax
082e5f43 +0x0d:  mov    %edx,0x4(%esp)
082e5f47 +0x11:  mov    %eax,(%esp)
082e5f4a +0x14:  call   082f185c <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x15e0>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x15e0
082e5f4f +0x19:  sub    $0x4,%esp
082e5f52 +0x1c:  jmp    082e5fb9 <+0x83>
082e5f54 +0x1e:  lea    -0x10(%ebp),%eax
082e5f57 +0x21:  mov    %eax,(%esp)
082e5f5a +0x24:  call   082f18d2 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1656>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1656
082e5f5f +0x29:  mov    0x8(%eax),%ebx
082e5f62 +0x2c:  lea    -0x10(%ebp),%eax
082e5f65 +0x2f:  mov    %eax,(%esp)
082e5f68 +0x32:  call   082f18d2 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1656>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1656
082e5f6d +0x37:  mov    0x4(%eax),%eax
082e5f70 +0x3a:  mov    %ebx,0x8(%esp)
082e5f74 +0x3e:  mov    %eax,0x4(%esp)
082e5f78 +0x42:  mov    0xc(%ebp),%eax
082e5f7b +0x45:  mov    %eax,(%esp)
082e5f7e +0x48:  call   082e5ed1 <_Z25IsIncludeVirtualMoveAreasPSt6vectorI7MapAreaSaIS0_EEii>  ; IsIncludeVirtualMoveAreas(std::vector<MapArea, std::allocator<MapArea> >*, int, int)
082e5f83 +0x4d:  xor    $0x1,%eax
082e5f86 +0x50:  test   %al,%al
082e5f88 +0x52:  je     082e5fae <+0x78>
082e5f8a +0x54:  mov    0x8(%ebp),%edx
082e5f8d +0x57:  lea    -0x1c(%ebp),%eax
082e5f90 +0x5a:  mov    -0x10(%ebp),%ecx
082e5f93 +0x5d:  mov    %ecx,0x8(%esp)
082e5f97 +0x61:  mov    %edx,0x4(%esp)
082e5f9b +0x65:  mov    %eax,(%esp)
082e5f9e +0x68:  call   082f18dc <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1660>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1660
082e5fa3 +0x6d:  sub    $0x4,%esp
082e5fa6 +0x70:  mov    -0x1c(%ebp),%eax
082e5fa9 +0x73:  mov    %eax,-0x10(%ebp)
082e5fac +0x76:  jmp    082e5fb9 <+0x83>
082e5fae +0x78:  lea    -0x10(%ebp),%eax
082e5fb1 +0x7b:  mov    %eax,(%esp)
082e5fb4 +0x7e:  call   082f19c2 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1746>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1746
082e5fb9 +0x83:  mov    0x8(%ebp),%edx
082e5fbc +0x86:  lea    -0xc(%ebp),%eax
082e5fbf +0x89:  mov    %edx,0x4(%esp)
082e5fc3 +0x8d:  mov    %eax,(%esp)
082e5fc6 +0x90:  call   082f1880 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1604>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1604
082e5fcb +0x95:  sub    $0x4,%esp
082e5fce +0x98:  lea    -0xc(%ebp),%eax
082e5fd1 +0x9b:  mov    %eax,0x4(%esp)
082e5fd5 +0x9f:  lea    -0x10(%ebp),%eax
082e5fd8 +0xa2:  mov    %eax,(%esp)
082e5fdb +0xa5:  call   082f18a6 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x162a>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x162a
082e5fe0 +0xaa:  test   %al,%al
082e5fe2 +0xac:  jne    082e5f54 <+0x1e>
082e5fe8 +0xb2:  mov    -0x4(%ebp),%ebx
082e5feb +0xb5:  leave
082e5fec +0xb6:  ret
082e5fed +0xb7:  nop
```

## 反编译 C

```c
// pvp_assault::CCandidateMatrix::RemoveCandidatePoint @ 0x82e5f36

/* pvp_assault::CCandidateMatrix::RemoveCandidatePoint(std::vector<MapArea, std::allocator<MapArea>
   >*) */

void __thiscall
pvp_assault::CCandidateMatrix::RemoveCandidatePoint(CCandidateMatrix *this,vector *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 local_20 [3];
  undefined4 local_14;
  __normal_iterator local_10 [8];
  
  std::vector<pvp_assault::CandidatePoint,std::allocator<pvp_assault::CandidatePoint>>::begin();
  while( true ) {
    std::vector<pvp_assault::CandidatePoint,std::allocator<pvp_assault::CandidatePoint>>::end();
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_14,local_10);
    if (!bVar2) break;
    iVar3 = __gnu_cxx::
            __normal_iterator<pvp_assault::CandidatePoint*,std::vector<pvp_assault::CandidatePoint,std::allocator<pvp_assault::CandidatePoint>>>
            ::operator*((__normal_iterator<pvp_assault::CandidatePoint*,std::vector<pvp_assault::CandidatePoint,std::allocator<pvp_assault::CandidatePoint>>>
                         *)&local_14);
    iVar3 = *(int *)(iVar3 + 8);
    iVar4 = __gnu_cxx::
            __normal_iterator<pvp_assault::CandidatePoint*,std::vector<pvp_assault::CandidatePoint,std::allocator<pvp_assault::CandidatePoint>>>
            ::operator*((__normal_iterator<pvp_assault::CandidatePoint*,std::vector<pvp_assault::CandidatePoint,std::allocator<pvp_assault::CandidatePoint>>>
                         *)&local_14);
    cVar1 = ::IsIncludeVirtualMoveAreas(param_1,*(int *)(iVar4 + 4),iVar3);
    if (cVar1 == '\x01') {
      __gnu_cxx::
      __normal_iterator<pvp_assault::CandidatePoint*,std::vector<pvp_assault::CandidatePoint,std::allocator<pvp_assault::CandidatePoint>>>
      ::operator++((__normal_iterator<pvp_assault::CandidatePoint*,std::vector<pvp_assault::CandidatePoint,std::allocator<pvp_assault::CandidatePoint>>>
                    *)&local_14);
    }
    else {
      std::vector<pvp_assault::CandidatePoint,std::allocator<pvp_assault::CandidatePoint>>::erase
                (local_20,this,local_14);
      local_14 = local_20[0];
    }
  }
  return;
}
```
