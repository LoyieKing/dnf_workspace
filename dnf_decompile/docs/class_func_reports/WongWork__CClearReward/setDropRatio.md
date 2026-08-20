# setDropRatio

`_ZN8WongWork12CClearReward12setDropRatioEf`

`WongWork::CClearReward::setDropRatio(float)`

| 类 | 地址 |
|---|---|
| `WongWork::CClearReward` | `0x085385c8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085385c8  _ZN8WongWork12CClearReward12setDropRatioEf
#           WongWork::CClearReward::setDropRatio(float)
# range [0x085385c8, 0x08538693]
085385c8 +0x00:  push   %ebp
085385c9 +0x01:  mov    %esp,%ebp
085385cb +0x03:  sub    $0x38,%esp
085385ce +0x06:  movl   $0x0,-0x14(%ebp)
085385d5 +0x0d:  jmp    08538683 <+0xbb>
085385da +0x12:  mov    -0x14(%ebp),%edx
085385dd +0x15:  mov    %edx,%eax
085385df +0x17:  add    %eax,%eax
085385e1 +0x19:  add    %edx,%eax
085385e3 +0x1b:  shl    $0x2,%eax
085385e6 +0x1e:  add    $0x10,%eax
085385e9 +0x21:  add    0x8(%ebp),%eax
085385ec +0x24:  lea    0x8(%eax),%ecx
085385ef +0x27:  mov    -0x14(%ebp),%edx
085385f2 +0x2a:  mov    %edx,%eax
085385f4 +0x2c:  add    %eax,%eax
085385f6 +0x2e:  add    %edx,%eax
085385f8 +0x30:  shl    $0x2,%eax
085385fb +0x33:  add    $0x60,%eax
085385fe +0x36:  add    0x8(%ebp),%eax
08538601 +0x39:  mov    %ecx,0x4(%esp)
08538605 +0x3d:  mov    %eax,(%esp)
08538608 +0x40:  call   0853bac4 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x1d50>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x1d50
0853860d +0x45:  movl   $0x0,-0x10(%ebp)
08538614 +0x4c:  jmp    0853865b <+0x93>
08538616 +0x4e:  mov    -0x14(%ebp),%edx
08538619 +0x51:  mov    %edx,%eax
0853861b +0x53:  add    %eax,%eax
0853861d +0x55:  add    %edx,%eax
0853861f +0x57:  shl    $0x2,%eax
08538622 +0x5a:  add    $0x60,%eax
08538625 +0x5d:  add    0x8(%ebp),%eax
08538628 +0x60:  mov    -0x10(%ebp),%edx
0853862b +0x63:  mov    %edx,0x4(%esp)
0853862f +0x67:  mov    %eax,(%esp)
08538632 +0x6a:  call   0853bd58 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x1fe4>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x1fe4
08538637 +0x6f:  mov    %eax,-0xc(%ebp)
0853863a +0x72:  mov    -0xc(%ebp),%eax
0853863d +0x75:  mov    0x8(%eax),%eax
08538640 +0x78:  mov    %eax,-0x1c(%ebp)
08538643 +0x7b:  fildl  -0x1c(%ebp)
08538646 +0x7e:  fmuls  0xc(%ebp)
08538649 +0x81:  fstps  (%esp)
0853864c +0x84:  call   0853abe5 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0xe71>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0xe71
08538651 +0x89:  mov    -0xc(%ebp),%edx
08538654 +0x8c:  mov    %eax,0x8(%edx)
08538657 +0x8f:  addl   $0x1,-0x10(%ebp)
0853865b +0x93:  mov    -0x14(%ebp),%edx
0853865e +0x96:  mov    %edx,%eax
08538660 +0x98:  add    %eax,%eax
08538662 +0x9a:  add    %edx,%eax
08538664 +0x9c:  shl    $0x2,%eax
08538667 +0x9f:  add    $0x60,%eax
0853866a +0xa2:  add    0x8(%ebp),%eax
0853866d +0xa5:  mov    %eax,(%esp)
08538670 +0xa8:  call   0853bd36 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x1fc2>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x1fc2
08538675 +0xad:  cmp    -0x10(%ebp),%eax
08538678 +0xb0:  seta   %al
0853867b +0xb3:  test   %al,%al
0853867d +0xb5:  jne    08538616 <+0x4e>
0853867f +0xb7:  addl   $0x1,-0x14(%ebp)
08538683 +0xbb:  cmpl   $0x5,-0x14(%ebp)
08538687 +0xbf:  setle  %al
0853868a +0xc2:  test   %al,%al
0853868c +0xc4:  jne    085385da <+0x12>
08538692 +0xca:  leave
08538693 +0xcb:  ret
```

## 反编译 C

```c
// WongWork::CClearReward::setDropRatio @ 0x85385c8

/* WongWork::CClearReward::setDropRatio(float) */

void __thiscall WongWork::CClearReward::setDropRatio(CClearReward *this,float param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int local_18;
  uint local_14;
  
  for (local_18 = 0; local_18 < 6; local_18 = local_18 + 1) {
    std::
    vector<WongWork::CClearReward::stGenItemProb_t,std::allocator<WongWork::CClearReward::stGenItemProb_t>>
    ::operator=((vector<WongWork::CClearReward::stGenItemProb_t,std::allocator<WongWork::CClearReward::stGenItemProb_t>>
                 *)(this + local_18 * 0xc + 0x60),(vector *)(this + local_18 * 0xc + 0x18));
    local_14 = 0;
    while( true ) {
      uVar3 = std::
              vector<WongWork::CClearReward::stGenItemProb_t,std::allocator<WongWork::CClearReward::stGenItemProb_t>>
              ::size((vector<WongWork::CClearReward::stGenItemProb_t,std::allocator<WongWork::CClearReward::stGenItemProb_t>>
                      *)(this + local_18 * 0xc + 0x60));
      if (uVar3 <= local_14) break;
      iVar1 = std::
              vector<WongWork::CClearReward::stGenItemProb_t,std::allocator<WongWork::CClearReward::stGenItemProb_t>>
              ::operator[]((vector<WongWork::CClearReward::stGenItemProb_t,std::allocator<WongWork::CClearReward::stGenItemProb_t>>
                            *)(this + local_18 * 0xc + 0x60),local_14);
      uVar2 = roundFloat((float)*(int *)(iVar1 + 8) * param_1);
      *(undefined4 *)(iVar1 + 8) = uVar2;
      local_14 = local_14 + 1;
    }
  }
  return;
}
```
