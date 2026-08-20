# AddPoint

`_ZN11pvp_assault12CExtraMatrix8AddPointENS_7Point2dE`

`pvp_assault::CExtraMatrix::AddPoint(pvp_assault::Point2d)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CExtraMatrix` | `0x082e5962` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e5962  _ZN11pvp_assault12CExtraMatrix8AddPointENS_7Point2dE
#           pvp_assault::CExtraMatrix::AddPoint(pvp_assault::Point2d)
# range [0x082e5962, 0x082e597b]
082e5962 +0x00:  push   %ebp
082e5963 +0x01:  mov    %esp,%ebp
082e5965 +0x03:  sub    $0x18,%esp
082e5968 +0x06:  mov    0x8(%ebp),%eax
082e596b +0x09:  lea    0xc(%ebp),%edx
082e596e +0x0c:  mov    %edx,0x4(%esp)
082e5972 +0x10:  mov    %eax,(%esp)
082e5975 +0x13:  call   082f16bc <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1440>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1440
082e597a +0x18:  leave
082e597b +0x19:  ret
```

## 反编译 C

```c
// pvp_assault::CExtraMatrix::AddPoint @ 0x82e5962

/* pvp_assault::CExtraMatrix::AddPoint(pvp_assault::Point2d) */

void pvp_assault::CExtraMatrix::AddPoint
               (vector<pvp_assault::Point2d,std::allocator<pvp_assault::Point2d>> *param_1)

{
  std::vector<pvp_assault::Point2d,std::allocator<pvp_assault::Point2d>>::push_back
            (param_1,(Point2d *)&stack0x00000008);
  return;
}
```
