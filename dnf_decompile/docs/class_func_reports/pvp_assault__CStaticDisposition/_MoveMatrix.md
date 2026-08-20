# _MoveMatrix

`_ZN11pvp_assault18CStaticDisposition11_MoveMatrixERKNS_7Point2dE`

`pvp_assault::CStaticDisposition::_MoveMatrix(pvp_assault::Point2d const&)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CStaticDisposition` | `0x082e6498` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e6498  _ZN11pvp_assault18CStaticDisposition11_MoveMatrixERKNS_7Point2dE
#           pvp_assault::CStaticDisposition::_MoveMatrix(pvp_assault::Point2d const&)
# range [0x082e6498, 0x082e64f1]
082e6498 +0x00:  push   %ebp
082e6499 +0x01:  mov    %esp,%ebp
082e649b +0x03:  sub    $0x28,%esp
082e649e +0x06:  movl   $0x0,-0xc(%ebp)
082e64a5 +0x0d:  jmp    082e64cf <+0x37>
082e64a7 +0x0f:  mov    -0xc(%ebp),%edx
082e64aa +0x12:  mov    %edx,%eax
082e64ac +0x14:  add    %eax,%eax
082e64ae +0x16:  add    %edx,%eax
082e64b0 +0x18:  shl    $0x2,%eax
082e64b3 +0x1b:  add    $0x10,%eax
082e64b6 +0x1e:  add    0x8(%ebp),%eax
082e64b9 +0x21:  lea    0x4(%eax),%edx
082e64bc +0x24:  mov    0xc(%ebp),%eax
082e64bf +0x27:  mov    %eax,0x4(%esp)
082e64c3 +0x2b:  mov    %edx,(%esp)
082e64c6 +0x2e:  call   082e597c <_ZN11pvp_assault12CExtraMatrix9MovePointERKNS_7Point2dE>  ; pvp_assault::CExtraMatrix::MovePoint(pvp_assault::Point2d const&)
082e64cb +0x33:  addl   $0x1,-0xc(%ebp)
082e64cf +0x37:  cmpl   $0x1,-0xc(%ebp)
082e64d3 +0x3b:  setle  %al
082e64d6 +0x3e:  test   %al,%al
082e64d8 +0x40:  jne    082e64a7 <+0xf>
082e64da +0x42:  mov    0x8(%ebp),%eax
082e64dd +0x45:  lea    0xc(%eax),%edx
082e64e0 +0x48:  mov    0xc(%ebp),%eax
082e64e3 +0x4b:  mov    %eax,0x4(%esp)
082e64e7 +0x4f:  mov    %edx,(%esp)
082e64ea +0x52:  call   082f04c0 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x244>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x244
082e64ef +0x57:  leave
082e64f0 +0x58:  ret
082e64f1 +0x59:  nop
```

## 反编译 C

```c
// pvp_assault::CStaticDisposition::_MoveMatrix @ 0x82e6498

/* pvp_assault::CStaticDisposition::_MoveMatrix(pvp_assault::Point2d const&) */

void __thiscall
pvp_assault::CStaticDisposition::_MoveMatrix(CStaticDisposition *this,Point2d *param_1)

{
  int local_10;
  
  for (local_10 = 0; local_10 < 2; local_10 = local_10 + 1) {
    CExtraMatrix::MovePoint((CExtraMatrix *)(this + local_10 * 0xc + 0x14),param_1);
  }
  Point2d::operator+=((Point2d *)(this + 0xc),param_1);
  return;
}
```
