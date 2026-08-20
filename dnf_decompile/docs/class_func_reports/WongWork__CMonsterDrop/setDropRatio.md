# setDropRatio

`_ZN8WongWork12CMonsterDrop12setDropRatioEf`

`WongWork::CMonsterDrop::setDropRatio(float)`

| 类 | 地址 |
|---|---|
| `WongWork::CMonsterDrop` | `0x08535cf8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08535cf8  _ZN8WongWork12CMonsterDrop12setDropRatioEf
#           WongWork::CMonsterDrop::setDropRatio(float)
# range [0x08535cf8, 0x08535dc7]
08535cf8 +0x00:  push   %ebp
08535cf9 +0x01:  mov    %esp,%ebp
08535cfb +0x03:  push   %ebx
08535cfc +0x04:  sub    $0x34,%esp
08535cff +0x07:  mov    0x8(%ebp),%eax
08535d02 +0x0a:  lea    0x18(%eax),%edx
08535d05 +0x0d:  mov    0x8(%ebp),%eax
08535d08 +0x10:  add    $0x24,%eax
08535d0b +0x13:  mov    %edx,0x4(%esp)
08535d0f +0x17:  mov    %eax,(%esp)
08535d12 +0x1a:  call   0853b65a <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x18e6>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x18e6
08535d17 +0x1f:  movl   $0x0,-0x14(%ebp)
08535d1e +0x26:  jmp    08535d79 <+0x81>
08535d20 +0x28:  mov    0x8(%ebp),%eax
08535d23 +0x2b:  lea    0x24(%eax),%edx
08535d26 +0x2e:  mov    -0x14(%ebp),%eax
08535d29 +0x31:  mov    %eax,0x4(%esp)
08535d2d +0x35:  mov    %edx,(%esp)
08535d30 +0x38:  call   0853b904 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x1b90>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x1b90
08535d35 +0x3d:  mov    %eax,-0x10(%ebp)
08535d38 +0x40:  movl   $0x0,-0xc(%ebp)
08535d3f +0x47:  jmp    08535d6a <+0x72>
08535d41 +0x49:  mov    -0xc(%ebp),%ebx
08535d44 +0x4c:  mov    -0xc(%ebp),%edx
08535d47 +0x4f:  mov    -0x10(%ebp),%eax
08535d4a +0x52:  mov    0x8(%eax,%edx,4),%eax
08535d4e +0x56:  mov    %eax,-0x1c(%ebp)
08535d51 +0x59:  fildl  -0x1c(%ebp)
08535d54 +0x5c:  fmuls  0xc(%ebp)
08535d57 +0x5f:  fstps  (%esp)
08535d5a +0x62:  call   0853abe5 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0xe71>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0xe71
08535d5f +0x67:  mov    -0x10(%ebp),%edx
08535d62 +0x6a:  mov    %eax,0x8(%edx,%ebx,4)
08535d66 +0x6e:  addl   $0x1,-0xc(%ebp)
08535d6a +0x72:  cmpl   $0x4,-0xc(%ebp)
08535d6e +0x76:  setle  %al
08535d71 +0x79:  test   %al,%al
08535d73 +0x7b:  jne    08535d41 <+0x49>
08535d75 +0x7d:  addl   $0x1,-0x14(%ebp)
08535d79 +0x81:  mov    0x8(%ebp),%eax
08535d7c +0x84:  add    $0x24,%eax
08535d7f +0x87:  mov    %eax,(%esp)
08535d82 +0x8a:  call   0853b8e2 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x1b6e>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x1b6e
08535d87 +0x8f:  cmp    -0x14(%ebp),%eax
08535d8a +0x92:  seta   %al
08535d8d +0x95:  test   %al,%al
08535d8f +0x97:  jne    08535d20 <+0x28>
08535d91 +0x99:  mov    0x8(%ebp),%eax
08535d94 +0x9c:  lea    0x4706c(%eax),%edx
08535d9a +0xa2:  mov    0xc(%ebp),%eax
08535d9d +0xa5:  mov    %eax,0x4(%esp)
08535da1 +0xa9:  mov    %edx,(%esp)
08535da4 +0xac:  call   085359e8 <_ZN8WongWork19CSpecialMonsterDrop12setDropRatioEf>  ; WongWork::CSpecialMonsterDrop::setDropRatio(float)
08535da9 +0xb1:  mov    0x8(%ebp),%eax
08535dac +0xb4:  lea    &_ZL14gUnicodeBuffer+0x19380(%eax),%edx
08535db2 +0xba:  mov    0xc(%ebp),%eax
08535db5 +0xbd:  mov    %eax,0x4(%esp)
08535db9 +0xc1:  mov    %edx,(%esp)
08535dbc +0xc4:  call   08535948 <_ZN8WongWork17CMonsterDrop_Hell12setDropRatioEf>  ; WongWork::CMonsterDrop_Hell::setDropRatio(float)
08535dc1 +0xc9:  add    $0x34,%esp
08535dc4 +0xcc:  pop    %ebx
08535dc5 +0xcd:  pop    %ebp
08535dc6 +0xce:  ret
08535dc7 +0xcf:  nop
```

## 反编译 C

```c
// WongWork::CMonsterDrop::setDropRatio @ 0x8535cf8

/* WongWork::CMonsterDrop::setDropRatio(float) */

void __thiscall WongWork::CMonsterDrop::setDropRatio(CMonsterDrop *this,float param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint local_18;
  int local_10;
  
  std::
  vector<WongWork::CMonsterDrop::stGenItemProb_t,std::allocator<WongWork::CMonsterDrop::stGenItemProb_t>>
  ::operator=((vector<WongWork::CMonsterDrop::stGenItemProb_t,std::allocator<WongWork::CMonsterDrop::stGenItemProb_t>>
               *)(this + 0x24),(vector *)(this + 0x18));
  local_18 = 0;
  while( true ) {
    uVar3 = std::
            vector<WongWork::CMonsterDrop::stGenItemProb_t,std::allocator<WongWork::CMonsterDrop::stGenItemProb_t>>
            ::size((vector<WongWork::CMonsterDrop::stGenItemProb_t,std::allocator<WongWork::CMonsterDrop::stGenItemProb_t>>
                    *)(this + 0x24));
    if (uVar3 <= local_18) break;
    iVar1 = std::
            vector<WongWork::CMonsterDrop::stGenItemProb_t,std::allocator<WongWork::CMonsterDrop::stGenItemProb_t>>
            ::operator[]((vector<WongWork::CMonsterDrop::stGenItemProb_t,std::allocator<WongWork::CMonsterDrop::stGenItemProb_t>>
                          *)(this + 0x24),local_18);
    for (local_10 = 0; local_10 < 5; local_10 = local_10 + 1) {
      uVar2 = roundFloat((float)*(int *)(iVar1 + 8 + local_10 * 4) * param_1);
      *(undefined4 *)(iVar1 + 8 + local_10 * 4) = uVar2;
    }
    local_18 = local_18 + 1;
  }
  CSpecialMonsterDrop::setDropRatio((CSpecialMonsterDrop *)(this + 0x4706c),param_1);
  CMonsterDrop_Hell::setDropRatio((CMonsterDrop_Hell *)(this + 0x238ac),param_1);
  return;
}
```
