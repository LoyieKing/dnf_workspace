# setDropRatio

`_ZN8WongWork17CMonsterDrop_Hell12setDropRatioEf`

`WongWork::CMonsterDrop_Hell::setDropRatio(float)`

| 类 | 地址 |
|---|---|
| `WongWork::CMonsterDrop_Hell` | `0x08535948` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08535948  _ZN8WongWork17CMonsterDrop_Hell12setDropRatioEf
#           WongWork::CMonsterDrop_Hell::setDropRatio(float)
# range [0x08535948, 0x085359e7]
08535948 +0x00:  push   %ebp
08535949 +0x01:  mov    %esp,%ebp
0853594b +0x03:  push   %ebx
0853594c +0x04:  sub    $0x34,%esp
0853594f +0x07:  mov    0x8(%ebp),%eax
08535952 +0x0a:  lea    0x18(%eax),%edx
08535955 +0x0d:  mov    0x8(%ebp),%eax
08535958 +0x10:  add    $0x24,%eax
0853595b +0x13:  mov    %edx,0x4(%esp)
0853595f +0x17:  mov    %eax,(%esp)
08535962 +0x1a:  call   0853b0c2 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x134e>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x134e
08535967 +0x1f:  movl   $0x0,-0x14(%ebp)
0853596e +0x26:  jmp    085359c9 <+0x81>
08535970 +0x28:  mov    0x8(%ebp),%eax
08535973 +0x2b:  lea    0x24(%eax),%edx
08535976 +0x2e:  mov    -0x14(%ebp),%eax
08535979 +0x31:  mov    %eax,0x4(%esp)
0853597d +0x35:  mov    %edx,(%esp)
08535980 +0x38:  call   0853b0a0 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x132c>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x132c
08535985 +0x3d:  mov    %eax,-0x10(%ebp)
08535988 +0x40:  movl   $0x0,-0xc(%ebp)
0853598f +0x47:  jmp    085359ba <+0x72>
08535991 +0x49:  mov    -0xc(%ebp),%ebx
08535994 +0x4c:  mov    -0xc(%ebp),%edx
08535997 +0x4f:  mov    -0x10(%ebp),%eax
0853599a +0x52:  mov    0x8(%eax,%edx,4),%eax
0853599e +0x56:  mov    %eax,-0x1c(%ebp)
085359a1 +0x59:  fildl  -0x1c(%ebp)
085359a4 +0x5c:  fmuls  0xc(%ebp)
085359a7 +0x5f:  fstps  (%esp)
085359aa +0x62:  call   0853abe5 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0xe71>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0xe71
085359af +0x67:  mov    -0x10(%ebp),%edx
085359b2 +0x6a:  mov    %eax,0x8(%edx,%ebx,4)
085359b6 +0x6e:  addl   $0x1,-0xc(%ebp)
085359ba +0x72:  cmpl   $0x4,-0xc(%ebp)
085359be +0x76:  setle  %al
085359c1 +0x79:  test   %al,%al
085359c3 +0x7b:  jne    08535991 <+0x49>
085359c5 +0x7d:  addl   $0x1,-0x14(%ebp)
085359c9 +0x81:  mov    0x8(%ebp),%eax
085359cc +0x84:  add    $0x24,%eax
085359cf +0x87:  mov    %eax,(%esp)
085359d2 +0x8a:  call   0853b07e <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x130a>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x130a
085359d7 +0x8f:  cmp    -0x14(%ebp),%eax
085359da +0x92:  seta   %al
085359dd +0x95:  test   %al,%al
085359df +0x97:  jne    08535970 <+0x28>
085359e1 +0x99:  add    $0x34,%esp
085359e4 +0x9c:  pop    %ebx
085359e5 +0x9d:  pop    %ebp
085359e6 +0x9e:  ret
085359e7 +0x9f:  nop
```

## 反编译 C

```c
// WongWork::CMonsterDrop_Hell::setDropRatio @ 0x8535948

/* WongWork::CMonsterDrop_Hell::setDropRatio(float) */

void __thiscall WongWork::CMonsterDrop_Hell::setDropRatio(CMonsterDrop_Hell *this,float param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint local_18;
  int local_10;
  
  std::
  vector<WongWork::CMonsterDrop_Hell::stGenItemProb_t,std::allocator<WongWork::CMonsterDrop_Hell::stGenItemProb_t>>
  ::operator=((vector<WongWork::CMonsterDrop_Hell::stGenItemProb_t,std::allocator<WongWork::CMonsterDrop_Hell::stGenItemProb_t>>
               *)(this + 0x24),(vector *)(this + 0x18));
  local_18 = 0;
  while( true ) {
    uVar3 = std::
            vector<WongWork::CMonsterDrop_Hell::stGenItemProb_t,std::allocator<WongWork::CMonsterDrop_Hell::stGenItemProb_t>>
            ::size((vector<WongWork::CMonsterDrop_Hell::stGenItemProb_t,std::allocator<WongWork::CMonsterDrop_Hell::stGenItemProb_t>>
                    *)(this + 0x24));
    if (uVar3 <= local_18) break;
    iVar1 = std::
            vector<WongWork::CMonsterDrop_Hell::stGenItemProb_t,std::allocator<WongWork::CMonsterDrop_Hell::stGenItemProb_t>>
            ::operator[]((vector<WongWork::CMonsterDrop_Hell::stGenItemProb_t,std::allocator<WongWork::CMonsterDrop_Hell::stGenItemProb_t>>
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
