# setDropRatio

`_ZN8WongWork19CSpecialMonsterDrop12setDropRatioEf`

`WongWork::CSpecialMonsterDrop::setDropRatio(float)`

| 类 | 地址 |
|---|---|
| `WongWork::CSpecialMonsterDrop` | `0x085359e8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085359e8  _ZN8WongWork19CSpecialMonsterDrop12setDropRatioEf
#           WongWork::CSpecialMonsterDrop::setDropRatio(float)
# range [0x085359e8, 0x08535a87]
085359e8 +0x00:  push   %ebp
085359e9 +0x01:  mov    %esp,%ebp
085359eb +0x03:  push   %ebx
085359ec +0x04:  sub    $0x34,%esp
085359ef +0x07:  mov    0x8(%ebp),%eax
085359f2 +0x0a:  lea    0x18(%eax),%edx
085359f5 +0x0d:  mov    0x8(%ebp),%eax
085359f8 +0x10:  add    $0x24,%eax
085359fb +0x13:  mov    %edx,0x4(%esp)
085359ff +0x17:  mov    %eax,(%esp)
08535a02 +0x1a:  call   0853b34a <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x15d6>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x15d6
08535a07 +0x1f:  movl   $0x0,-0x14(%ebp)
08535a0e +0x26:  jmp    08535a69 <+0x81>
08535a10 +0x28:  mov    0x8(%ebp),%eax
08535a13 +0x2b:  lea    0x24(%eax),%edx
08535a16 +0x2e:  mov    -0x14(%ebp),%eax
08535a19 +0x31:  mov    %eax,0x4(%esp)
08535a1d +0x35:  mov    %edx,(%esp)
08535a20 +0x38:  call   0853b5f4 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x1880>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x1880
08535a25 +0x3d:  mov    %eax,-0x10(%ebp)
08535a28 +0x40:  movl   $0x0,-0xc(%ebp)
08535a2f +0x47:  jmp    08535a5a <+0x72>
08535a31 +0x49:  mov    -0xc(%ebp),%ebx
08535a34 +0x4c:  mov    -0xc(%ebp),%edx
08535a37 +0x4f:  mov    -0x10(%ebp),%eax
08535a3a +0x52:  mov    0x8(%eax,%edx,4),%eax
08535a3e +0x56:  mov    %eax,-0x1c(%ebp)
08535a41 +0x59:  fildl  -0x1c(%ebp)
08535a44 +0x5c:  fmuls  0xc(%ebp)
08535a47 +0x5f:  fstps  (%esp)
08535a4a +0x62:  call   0853abe5 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0xe71>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0xe71
08535a4f +0x67:  mov    -0x10(%ebp),%edx
08535a52 +0x6a:  mov    %eax,0x8(%edx,%ebx,4)
08535a56 +0x6e:  addl   $0x1,-0xc(%ebp)
08535a5a +0x72:  cmpl   $0x4,-0xc(%ebp)
08535a5e +0x76:  setle  %al
08535a61 +0x79:  test   %al,%al
08535a63 +0x7b:  jne    08535a31 <+0x49>
08535a65 +0x7d:  addl   $0x1,-0x14(%ebp)
08535a69 +0x81:  mov    0x8(%ebp),%eax
08535a6c +0x84:  add    $0x24,%eax
08535a6f +0x87:  mov    %eax,(%esp)
08535a72 +0x8a:  call   0853b5d2 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x185e>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x185e
08535a77 +0x8f:  cmp    -0x14(%ebp),%eax
08535a7a +0x92:  seta   %al
08535a7d +0x95:  test   %al,%al
08535a7f +0x97:  jne    08535a10 <+0x28>
08535a81 +0x99:  add    $0x34,%esp
08535a84 +0x9c:  pop    %ebx
08535a85 +0x9d:  pop    %ebp
08535a86 +0x9e:  ret
08535a87 +0x9f:  nop
```

## 反编译 C

```c
// WongWork::CSpecialMonsterDrop::setDropRatio @ 0x85359e8

/* WongWork::CSpecialMonsterDrop::setDropRatio(float) */

void __thiscall WongWork::CSpecialMonsterDrop::setDropRatio(CSpecialMonsterDrop *this,float param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint local_18;
  int local_10;
  
  std::
  vector<WongWork::CSpecialMonsterDrop::stGenItemProb_t,std::allocator<WongWork::CSpecialMonsterDrop::stGenItemProb_t>>
  ::operator=((vector<WongWork::CSpecialMonsterDrop::stGenItemProb_t,std::allocator<WongWork::CSpecialMonsterDrop::stGenItemProb_t>>
               *)(this + 0x24),(vector *)(this + 0x18));
  local_18 = 0;
  while( true ) {
    uVar3 = std::
            vector<WongWork::CSpecialMonsterDrop::stGenItemProb_t,std::allocator<WongWork::CSpecialMonsterDrop::stGenItemProb_t>>
            ::size((vector<WongWork::CSpecialMonsterDrop::stGenItemProb_t,std::allocator<WongWork::CSpecialMonsterDrop::stGenItemProb_t>>
                    *)(this + 0x24));
    if (uVar3 <= local_18) break;
    iVar1 = std::
            vector<WongWork::CSpecialMonsterDrop::stGenItemProb_t,std::allocator<WongWork::CSpecialMonsterDrop::stGenItemProb_t>>
            ::operator[]((vector<WongWork::CSpecialMonsterDrop::stGenItemProb_t,std::allocator<WongWork::CSpecialMonsterDrop::stGenItemProb_t>>
                          *)(this + 0x24),local_18);
    for (local_10 = 0; local_10 < 5; local_10 = local_10 + 1) {
      uVar2 = roundFloat((float)*(int *)(iVar1 + 8 + local_10 * 4) * param_1);
      *(undefined4 *)(iVar1 + 8 + local_10 * 4) = uVar2;
    }
    local_18 = local_18 + 1;
  }
  return;
}
```
