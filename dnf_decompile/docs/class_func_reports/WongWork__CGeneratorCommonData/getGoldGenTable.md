# getGoldGenTable

`_ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh`

`WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)`

| 类 | 地址 |
|---|---|
| `WongWork::CGeneratorCommonData` | `0x08533424` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08533424  _ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh
#           WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)
# range [0x08533424, 0x085334a3]
08533424 +0x00:  push   %ebp
08533425 +0x01:  mov    %esp,%ebp
08533427 +0x03:  push   %esi
08533428 +0x04:  push   %ebx
08533429 +0x05:  sub    $0x20,%esp
0853342c +0x08:  mov    0xc(%ebp),%eax
0853342f +0x0b:  mov    %al,-0xc(%ebp)
08533432 +0x0e:  cmpb   $0xc8,-0xc(%ebp)
08533436 +0x12:  jbe    08533451 <+0x2d>
08533438 +0x14:  mov    0x8(%ebp),%eax
0853343b +0x17:  mov    0x4(%eax),%edx
0853343e +0x1a:  mov    (%eax),%eax
08533440 +0x1c:  mov    %eax,&_ZZN8WongWork20CGeneratorCommonData15getGoldGenTableEhE3ret
08533445 +0x21:  mov    %edx,&_ZZN8WongWork20CGeneratorCommonData15getGoldGenTableEhE3ret+0x4
0853344b +0x27:  movb   $0x0,-0xc(%ebp)
0853344f +0x2b:  jmp    0853346b <+0x47>
08533451 +0x2d:  movzbl -0xc(%ebp),%edx
08533455 +0x31:  mov    0x8(%ebp),%eax
08533458 +0x34:  lea    (%eax,%edx,8),%edx
0853345b +0x37:  mov    (%edx),%eax
0853345d +0x39:  mov    0x4(%edx),%edx
08533460 +0x3c:  mov    %eax,&_ZZN8WongWork20CGeneratorCommonData15getGoldGenTableEhE3ret
08533465 +0x41:  mov    %edx,&_ZZN8WongWork20CGeneratorCommonData15getGoldGenTableEhE3ret+0x4
0853346b +0x47:  mov    &_ZZN8WongWork20CGeneratorCommonData15getGoldGenTableEhE3ret,%esi
08533471 +0x4d:  movzbl -0xc(%ebp),%ebx
08533475 +0x51:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0853347a +0x56:  mov    %eax,(%esp)
0853347d +0x59:  call   084e92fc <_GLOBAL__I__Z7getUserj+0x2ae>  ; global constructors keyed to getUser(unsigned int)+0x2ae
08533482 +0x5e:  mov    %esi,0x8(%esp)
08533486 +0x62:  mov    %ebx,0x4(%esp)
0853348a +0x66:  mov    %eax,(%esp)
0853348d +0x69:  call   082f89bc <_ZN28CAutoMarketConditionsControl21GetGoldDropAmountRateEii>  ; CAutoMarketConditionsControl::GetGoldDropAmountRate(int, int)
08533492 +0x6e:  mov    %eax,&_ZZN8WongWork20CGeneratorCommonData15getGoldGenTableEhE3ret
08533497 +0x73:  mov    $&_ZZN8WongWork20CGeneratorCommonData15getGoldGenTableEhE3ret,%eax
0853349c +0x78:  add    $0x20,%esp
0853349f +0x7b:  pop    %ebx
085334a0 +0x7c:  pop    %esi
085334a1 +0x7d:  pop    %ebp
085334a2 +0x7e:  ret
085334a3 +0x7f:  nop
```

## 反编译 C

```c
// WongWork::CGeneratorCommonData::getGoldGenTable @ 0x8533424

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char) */

undefined4 * __thiscall
WongWork::CGeneratorCommonData::getGoldGenTable(CGeneratorCommonData *this,uchar param_1)

{
  int iVar1;
  CDataManager *this_00;
  CAutoMarketConditionsControl *this_01;
  byte local_10;
  
  local_10 = param_1;
  if (param_1 < 0xc9) {
    getGoldGenTable(unsigned_char)::ret = *(int *)(this + (uint)param_1 * 8);
    _DAT_0943ded4 = *(int *)(this + (uint)param_1 * 8 + 4);
  }
  else {
    _DAT_0943ded4 = *(int *)(this + 4);
    getGoldGenTable(unsigned_char)::ret = *(int *)this;
    local_10 = 0;
  }
  iVar1 = getGoldGenTable(unsigned_char)::ret;
  this_00 = (CDataManager *)G_CDataManager();
  this_01 = (CAutoMarketConditionsControl *)CDataManager::GetAutoMarketContitionsControl(this_00);
  getGoldGenTable(unsigned_char)::ret =
       CAutoMarketConditionsControl::GetGoldDropAmountRate(this_01,(uint)local_10,iVar1);
  return &getGoldGenTable(unsigned_char)::ret;
}
```
