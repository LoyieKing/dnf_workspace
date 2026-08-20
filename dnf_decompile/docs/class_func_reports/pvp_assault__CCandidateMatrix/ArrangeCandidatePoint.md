# ArrangeCandidatePoint

`_ZN11pvp_assault16CCandidateMatrix21ArrangeCandidatePointEv`

`pvp_assault::CCandidateMatrix::ArrangeCandidatePoint()`

| 类 | 地址 |
|---|---|
| `pvp_assault::CCandidateMatrix` | `0x082e5fee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e5fee  _ZN11pvp_assault16CCandidateMatrix21ArrangeCandidatePointEv
#           pvp_assault::CCandidateMatrix::ArrangeCandidatePoint()
# range [0x082e5fee, 0x082e6031]
082e5fee +0x00:  push   %ebp
082e5fef +0x01:  mov    %esp,%ebp
082e5ff1 +0x03:  sub    $0x28,%esp
082e5ff4 +0x06:  mov    0x8(%ebp),%edx
082e5ff7 +0x09:  lea    -0x10(%ebp),%eax
082e5ffa +0x0c:  mov    %edx,0x4(%esp)
082e5ffe +0x10:  mov    %eax,(%esp)
082e6001 +0x13:  call   082f1880 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1604>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1604
082e6006 +0x18:  sub    $0x4,%esp
082e6009 +0x1b:  mov    0x8(%ebp),%edx
082e600c +0x1e:  lea    -0xc(%ebp),%eax
082e600f +0x21:  mov    %edx,0x4(%esp)
082e6013 +0x25:  mov    %eax,(%esp)
082e6016 +0x28:  call   082f185c <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x15e0>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x15e0
082e601b +0x2d:  sub    $0x4,%esp
082e601e +0x30:  mov    -0x10(%ebp),%eax
082e6021 +0x33:  mov    %eax,0x4(%esp)
082e6025 +0x37:  mov    -0xc(%ebp),%eax
082e6028 +0x3a:  mov    %eax,(%esp)
082e602b +0x3d:  call   082f19d7 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x175b>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x175b
082e6030 +0x42:  leave
082e6031 +0x43:  ret
```

## 反编译 C

```c
// pvp_assault::CCandidateMatrix::ArrangeCandidatePoint @ 0x82e5fee

/* pvp_assault::CCandidateMatrix::ArrangeCandidatePoint() */

void pvp_assault::CCandidateMatrix::ArrangeCandidatePoint(void)

{
  undefined4 local_14;
  undefined4 local_10;
  
  std::vector<pvp_assault::CandidatePoint,std::allocator<pvp_assault::CandidatePoint>>::end();
  std::vector<pvp_assault::CandidatePoint,std::allocator<pvp_assault::CandidatePoint>>::begin();
  std::
  sort<__gnu_cxx::__normal_iterator<pvp_assault::CandidatePoint*,std::vector<pvp_assault::CandidatePoint,std::allocator<pvp_assault::CandidatePoint>>>>
            (local_10,local_14);
  return;
}
```
