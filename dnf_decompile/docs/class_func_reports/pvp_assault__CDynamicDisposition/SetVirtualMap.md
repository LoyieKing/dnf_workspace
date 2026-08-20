# SetVirtualMap

`_ZN11pvp_assault19CDynamicDisposition13SetVirtualMapEPSt6vectorI7MapAreaSaIS2_EE`

`pvp_assault::CDynamicDisposition::SetVirtualMap(std::vector<MapArea, std::allocator<MapArea> >*)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CDynamicDisposition` | `0x082e624c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e624c  _ZN11pvp_assault19CDynamicDisposition13SetVirtualMapEPSt6vectorI7MapAreaSaIS2_EE
#           pvp_assault::CDynamicDisposition::SetVirtualMap(std::vector<MapArea, std::allocator<MapArea> >*)
# range [0x082e624c, 0x082e629f]
082e624c +0x00:  push   %ebp
082e624d +0x01:  mov    %esp,%ebp
082e624f +0x03:  sub    $0x18,%esp
082e6252 +0x06:  mov    0x8(%ebp),%eax
082e6255 +0x09:  lea    0x14(%eax),%edx
082e6258 +0x0c:  mov    0xc(%ebp),%eax
082e625b +0x0f:  mov    %eax,0x4(%esp)
082e625f +0x13:  mov    %edx,(%esp)
082e6262 +0x16:  call   082e5f36 <_ZN11pvp_assault16CCandidateMatrix20RemoveCandidatePointEPSt6vectorI7MapAreaSaIS2_EE>  ; pvp_assault::CCandidateMatrix::RemoveCandidatePoint(std::vector<MapArea, std::allocator<MapArea> >*)
082e6267 +0x1b:  mov    0x8(%ebp),%eax
082e626a +0x1e:  lea    0x20(%eax),%edx
082e626d +0x21:  mov    0xc(%ebp),%eax
082e6270 +0x24:  mov    %eax,0x4(%esp)
082e6274 +0x28:  mov    %edx,(%esp)
082e6277 +0x2b:  call   082e5f36 <_ZN11pvp_assault16CCandidateMatrix20RemoveCandidatePointEPSt6vectorI7MapAreaSaIS2_EE>  ; pvp_assault::CCandidateMatrix::RemoveCandidatePoint(std::vector<MapArea, std::allocator<MapArea> >*)
082e627c +0x30:  mov    0x8(%ebp),%eax
082e627f +0x33:  add    $0x14,%eax
082e6282 +0x36:  mov    %eax,(%esp)
082e6285 +0x39:  call   082e5fee <_ZN11pvp_assault16CCandidateMatrix21ArrangeCandidatePointEv>  ; pvp_assault::CCandidateMatrix::ArrangeCandidatePoint()
082e628a +0x3e:  mov    0x8(%ebp),%eax
082e628d +0x41:  add    $0x20,%eax
082e6290 +0x44:  mov    %eax,(%esp)
082e6293 +0x47:  call   082e5fee <_ZN11pvp_assault16CCandidateMatrix21ArrangeCandidatePointEv>  ; pvp_assault::CCandidateMatrix::ArrangeCandidatePoint()
082e6298 +0x4c:  mov    $0x1,%eax
082e629d +0x51:  leave
082e629e +0x52:  ret
082e629f +0x53:  nop
```

## 反编译 C

```c
// pvp_assault::CDynamicDisposition::SetVirtualMap @ 0x82e624c

/* pvp_assault::CDynamicDisposition::SetVirtualMap(std::vector<MapArea, std::allocator<MapArea> >*)
    */

undefined4 __thiscall
pvp_assault::CDynamicDisposition::SetVirtualMap(CDynamicDisposition *this,vector *param_1)

{
  CCandidateMatrix::RemoveCandidatePoint((CCandidateMatrix *)(this + 0x14),param_1);
  CCandidateMatrix::RemoveCandidatePoint((CCandidateMatrix *)(this + 0x20),param_1);
  CCandidateMatrix::ArrangeCandidatePoint();
  CCandidateMatrix::ArrangeCandidatePoint();
  return 1;
}
```
