# _getGenItemProbIdx

`_ZN8WongWork19CSpecialMonsterDrop18_getGenItemProbIdxEi`

`WongWork::CSpecialMonsterDrop::_getGenItemProbIdx(int)`

| 类 | 地址 |
|---|---|
| `WongWork::CSpecialMonsterDrop` | `0x0853736e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0853736e  _ZN8WongWork19CSpecialMonsterDrop18_getGenItemProbIdxEi
#           WongWork::CSpecialMonsterDrop::_getGenItemProbIdx(int)
# range [0x0853736e, 0x085373ed]
0853736e +0x00:  push   %ebp
0853736f +0x01:  mov    %esp,%ebp
08537371 +0x03:  sub    $0x28,%esp
08537374 +0x06:  movl   $0x0,-0x10(%ebp)
0853737b +0x0d:  jmp    085373ae <+0x40>
0853737d +0x0f:  mov    0x8(%ebp),%eax
08537380 +0x12:  lea    0x24(%eax),%edx
08537383 +0x15:  mov    -0x10(%ebp),%eax
08537386 +0x18:  mov    %eax,0x4(%esp)
0853738a +0x1c:  mov    %edx,(%esp)
0853738d +0x1f:  call   0853b5f4 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x1880>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x1880
08537392 +0x24:  mov    %eax,-0xc(%ebp)
08537395 +0x27:  mov    -0xc(%ebp),%eax
08537398 +0x2a:  mov    (%eax),%eax
0853739a +0x2c:  cmp    0xc(%ebp),%eax
0853739d +0x2f:  jg     085373aa <+0x3c>
0853739f +0x31:  mov    -0xc(%ebp),%eax
085373a2 +0x34:  mov    0x4(%eax),%eax
085373a5 +0x37:  cmp    0xc(%ebp),%eax
085373a8 +0x3a:  jge    085373c8 <+0x5a>
085373aa +0x3c:  addl   $0x1,-0x10(%ebp)
085373ae +0x40:  mov    0x8(%ebp),%eax
085373b1 +0x43:  add    $0x24,%eax
085373b4 +0x46:  mov    %eax,(%esp)
085373b7 +0x49:  call   0853b5d2 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x185e>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x185e
085373bc +0x4e:  cmp    -0x10(%ebp),%eax
085373bf +0x51:  seta   %al
085373c2 +0x54:  test   %al,%al
085373c4 +0x56:  jne    0853737d <+0xf>
085373c6 +0x58:  jmp    085373c9 <+0x5b>
085373c8 +0x5a:  nop
085373c9 +0x5b:  mov    0x8(%ebp),%eax
085373cc +0x5e:  add    $0x24,%eax
085373cf +0x61:  mov    %eax,(%esp)
085373d2 +0x64:  call   0853b5d2 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x185e>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x185e
085373d7 +0x69:  cmp    -0x10(%ebp),%eax
085373da +0x6c:  setbe  %al
085373dd +0x6f:  test   %al,%al
085373df +0x71:  je     085373e8 <+0x7a>
085373e1 +0x73:  mov    $0xffffffff,%eax
085373e6 +0x78:  jmp    085373eb <+0x7d>
085373e8 +0x7a:  mov    -0x10(%ebp),%eax
085373eb +0x7d:  leave
085373ec +0x7e:  ret
085373ed +0x7f:  nop
```

## 反编译 C

```c
// WongWork::CSpecialMonsterDrop::_getGenItemProbIdx @ 0x853736e

/* WongWork::CSpecialMonsterDrop::_getGenItemProbIdx(int) */

uint __thiscall
WongWork::CSpecialMonsterDrop::_getGenItemProbIdx(CSpecialMonsterDrop *this,int param_1)

{
  int *piVar1;
  uint uVar2;
  uint local_14;
  
  local_14 = 0;
  while ((uVar2 = std::
                  vector<WongWork::CSpecialMonsterDrop::stGenItemProb_t,std::allocator<WongWork::CSpecialMonsterDrop::stGenItemProb_t>>
                  ::size((vector<WongWork::CSpecialMonsterDrop::stGenItemProb_t,std::allocator<WongWork::CSpecialMonsterDrop::stGenItemProb_t>>
                          *)(this + 0x24)), local_14 < uVar2 &&
         ((piVar1 = (int *)std::
                           vector<WongWork::CSpecialMonsterDrop::stGenItemProb_t,std::allocator<WongWork::CSpecialMonsterDrop::stGenItemProb_t>>
                           ::operator[]((vector<WongWork::CSpecialMonsterDrop::stGenItemProb_t,std::allocator<WongWork::CSpecialMonsterDrop::stGenItemProb_t>>
                                         *)(this + 0x24),local_14), param_1 < *piVar1 ||
          (piVar1[1] < param_1))))) {
    local_14 = local_14 + 1;
  }
  uVar2 = std::
          vector<WongWork::CSpecialMonsterDrop::stGenItemProb_t,std::allocator<WongWork::CSpecialMonsterDrop::stGenItemProb_t>>
          ::size((vector<WongWork::CSpecialMonsterDrop::stGenItemProb_t,std::allocator<WongWork::CSpecialMonsterDrop::stGenItemProb_t>>
                  *)(this + 0x24));
  if (uVar2 <= local_14) {
    local_14 = 0xffffffff;
  }
  return local_14;
}
```
