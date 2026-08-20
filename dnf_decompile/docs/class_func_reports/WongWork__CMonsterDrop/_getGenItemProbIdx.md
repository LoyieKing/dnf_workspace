# _getGenItemProbIdx

`_ZN8WongWork12CMonsterDrop18_getGenItemProbIdxEi`

`WongWork::CMonsterDrop::_getGenItemProbIdx(int)`

| 类 | 地址 |
|---|---|
| `WongWork::CMonsterDrop` | `0x085372ee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085372ee  _ZN8WongWork12CMonsterDrop18_getGenItemProbIdxEi
#           WongWork::CMonsterDrop::_getGenItemProbIdx(int)
# range [0x085372ee, 0x0853736d]
085372ee +0x00:  push   %ebp
085372ef +0x01:  mov    %esp,%ebp
085372f1 +0x03:  sub    $0x28,%esp
085372f4 +0x06:  movl   $0x0,-0x10(%ebp)
085372fb +0x0d:  jmp    0853732e <+0x40>
085372fd +0x0f:  mov    0x8(%ebp),%eax
08537300 +0x12:  lea    0x24(%eax),%edx
08537303 +0x15:  mov    -0x10(%ebp),%eax
08537306 +0x18:  mov    %eax,0x4(%esp)
0853730a +0x1c:  mov    %edx,(%esp)
0853730d +0x1f:  call   0853b904 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x1b90>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x1b90
08537312 +0x24:  mov    %eax,-0xc(%ebp)
08537315 +0x27:  mov    -0xc(%ebp),%eax
08537318 +0x2a:  mov    (%eax),%eax
0853731a +0x2c:  cmp    0xc(%ebp),%eax
0853731d +0x2f:  jg     0853732a <+0x3c>
0853731f +0x31:  mov    -0xc(%ebp),%eax
08537322 +0x34:  mov    0x4(%eax),%eax
08537325 +0x37:  cmp    0xc(%ebp),%eax
08537328 +0x3a:  jge    08537348 <+0x5a>
0853732a +0x3c:  addl   $0x1,-0x10(%ebp)
0853732e +0x40:  mov    0x8(%ebp),%eax
08537331 +0x43:  add    $0x24,%eax
08537334 +0x46:  mov    %eax,(%esp)
08537337 +0x49:  call   0853b8e2 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x1b6e>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x1b6e
0853733c +0x4e:  cmp    -0x10(%ebp),%eax
0853733f +0x51:  seta   %al
08537342 +0x54:  test   %al,%al
08537344 +0x56:  jne    085372fd <+0xf>
08537346 +0x58:  jmp    08537349 <+0x5b>
08537348 +0x5a:  nop
08537349 +0x5b:  mov    0x8(%ebp),%eax
0853734c +0x5e:  add    $0x24,%eax
0853734f +0x61:  mov    %eax,(%esp)
08537352 +0x64:  call   0853b8e2 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x1b6e>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x1b6e
08537357 +0x69:  cmp    -0x10(%ebp),%eax
0853735a +0x6c:  setbe  %al
0853735d +0x6f:  test   %al,%al
0853735f +0x71:  je     08537368 <+0x7a>
08537361 +0x73:  mov    $0xffffffff,%eax
08537366 +0x78:  jmp    0853736b <+0x7d>
08537368 +0x7a:  mov    -0x10(%ebp),%eax
0853736b +0x7d:  leave
0853736c +0x7e:  ret
0853736d +0x7f:  nop
```

## 反编译 C

```c
// WongWork::CMonsterDrop::_getGenItemProbIdx @ 0x85372ee

/* WongWork::CMonsterDrop::_getGenItemProbIdx(int) */

uint __thiscall WongWork::CMonsterDrop::_getGenItemProbIdx(CMonsterDrop *this,int param_1)

{
  int *piVar1;
  uint uVar2;
  uint local_14;
  
  local_14 = 0;
  while ((uVar2 = std::
                  vector<WongWork::CMonsterDrop::stGenItemProb_t,std::allocator<WongWork::CMonsterDrop::stGenItemProb_t>>
                  ::size((vector<WongWork::CMonsterDrop::stGenItemProb_t,std::allocator<WongWork::CMonsterDrop::stGenItemProb_t>>
                          *)(this + 0x24)), local_14 < uVar2 &&
         ((piVar1 = (int *)std::
                           vector<WongWork::CMonsterDrop::stGenItemProb_t,std::allocator<WongWork::CMonsterDrop::stGenItemProb_t>>
                           ::operator[]((vector<WongWork::CMonsterDrop::stGenItemProb_t,std::allocator<WongWork::CMonsterDrop::stGenItemProb_t>>
                                         *)(this + 0x24),local_14), param_1 < *piVar1 ||
          (piVar1[1] < param_1))))) {
    local_14 = local_14 + 1;
  }
  uVar2 = std::
          vector<WongWork::CMonsterDrop::stGenItemProb_t,std::allocator<WongWork::CMonsterDrop::stGenItemProb_t>>
          ::size((vector<WongWork::CMonsterDrop::stGenItemProb_t,std::allocator<WongWork::CMonsterDrop::stGenItemProb_t>>
                  *)(this + 0x24));
  if (uVar2 <= local_14) {
    local_14 = 0xffffffff;
  }
  return local_14;
}
```
