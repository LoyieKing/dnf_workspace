# CalcItemDropRate

`_ZNK21CHARAC_LOAD_MERCENARY16CalcItemDropRateEP5CUser`

`CHARAC_LOAD_MERCENARY::CalcItemDropRate(CUser*) const`

| 类 | 地址 |
|---|---|
| `CHARAC_LOAD_MERCENARY` | `0x081b2d6a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b2d6a  _ZNK21CHARAC_LOAD_MERCENARY16CalcItemDropRateEP5CUser
#           CHARAC_LOAD_MERCENARY::CalcItemDropRate(CUser*) const
# range [0x081b2d6a, 0x081b2e85]
081b2d6a +0x000:  push   %ebp
081b2d6b +0x001:  mov    %esp,%ebp
081b2d6d +0x003:  sub    $0x68,%esp
081b2d70 +0x006:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081b2d75 +0x00b:  add    $0xa8e4,%eax
081b2d7a +0x010:  mov    %eax,-0x20(%ebp)
081b2d7d +0x013:  mov    0x8(%ebp),%eax
081b2d80 +0x016:  movzwl 0x4(%eax),%eax
081b2d84 +0x01a:  movswl %ax,%edx
081b2d87 +0x01d:  lea    -0x28(%ebp),%eax
081b2d8a +0x020:  mov    -0x20(%ebp),%ecx
081b2d8d +0x023:  mov    %ecx,0x8(%esp)
081b2d91 +0x027:  mov    %edx,0x4(%esp)
081b2d95 +0x02b:  mov    %eax,(%esp)
081b2d98 +0x02e:  call   081b495d <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x1d1>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x1d1
081b2d9d +0x033:  sub    $0x4,%esp
081b2da0 +0x036:  mov    -0x24(%ebp),%eax
081b2da3 +0x039:  mov    %eax,-0x1c(%ebp)
081b2da6 +0x03c:  mov    0x8(%ebp),%eax
081b2da9 +0x03f:  mov    %eax,(%esp)
081b2dac +0x042:  call   081b2c1e <_ZNK21CHARAC_LOAD_MERCENARY14GetPeriodBonusEv>  ; CHARAC_LOAD_MERCENARY::GetPeriodBonus() const
081b2db1 +0x047:  fstps  -0x18(%ebp)
081b2db4 +0x04a:  mov    0x8(%ebp),%eax
081b2db7 +0x04d:  mov    %eax,(%esp)
081b2dba +0x050:  call   081b2c94 <_ZNK21CHARAC_LOAD_MERCENARY14GetAvatarBonusEv>  ; CHARAC_LOAD_MERCENARY::GetAvatarBonus() const
081b2dbf +0x055:  fstps  -0x14(%ebp)
081b2dc2 +0x058:  movl   $0x0,0x4(%esp)
081b2dca +0x060:  mov    0x8(%ebp),%eax
081b2dcd +0x063:  mov    %eax,(%esp)
081b2dd0 +0x066:  call   081b2f32 <_ZNK21CHARAC_LOAD_MERCENARY24GetCompetitionPeriodTermEPb>  ; CHARAC_LOAD_MERCENARY::GetCompetitionPeriodTerm(bool*) const
081b2dd5 +0x06b:  mov    %eax,-0x10(%ebp)
081b2dd8 +0x06e:  fildl  -0x1c(%ebp)
081b2ddb +0x071:  fmuls  -0x18(%ebp)
081b2dde +0x074:  fmuls  -0x14(%ebp)
081b2de1 +0x077:  fildl  -0x10(%ebp)
081b2de4 +0x07a:  fmulp  %st,%st(1)
081b2de6 +0x07c:  fnstcw -0x2a(%ebp)
081b2de9 +0x07f:  movzwl -0x2a(%ebp),%eax
081b2ded +0x083:  mov    $0xc,%ah
081b2def +0x085:  mov    %ax,-0x2c(%ebp)
081b2df3 +0x089:  fldcw  -0x2c(%ebp)
081b2df6 +0x08c:  fistpl -0xc(%ebp)
081b2df9 +0x08f:  fldcw  -0x2a(%ebp)
081b2dfc +0x092:  cmpl   $0x0,0xc(%ebp)
081b2e00 +0x096:  je     081b2e18 <+0xae>
081b2e02 +0x098:  mov    0xc(%ebp),%eax
081b2e05 +0x09b:  mov    %eax,(%esp)
081b2e08 +0x09e:  call   0814589c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x31f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x31f
081b2e0d +0x0a3:  test   %al,%al
081b2e0f +0x0a5:  je     081b2e18 <+0xae>
081b2e11 +0x0a7:  mov    $0x1,%eax
081b2e16 +0x0ac:  jmp    081b2e1d <+0xb3>
081b2e18 +0x0ae:  mov    $0x0,%eax
081b2e1d +0x0b3:  test   %al,%al
081b2e1f +0x0b5:  je     081b2e74 <+0x10a>
081b2e21 +0x0b7:  flds   -0x14(%ebp)
081b2e24 +0x0ba:  flds   -0x18(%ebp)
081b2e27 +0x0bd:  fxch   %st(1)
081b2e29 +0x0bf:  mov    -0xc(%ebp),%eax
081b2e2c +0x0c2:  mov    %eax,0x20(%esp)
081b2e30 +0x0c6:  mov    -0x10(%ebp),%eax
081b2e33 +0x0c9:  mov    %eax,0x1c(%esp)
081b2e37 +0x0cd:  fstpl  0x14(%esp)
081b2e3b +0x0d1:  fstpl  0xc(%esp)
081b2e3f +0x0d5:  mov    -0x1c(%ebp),%eax
081b2e42 +0x0d8:  mov    %eax,0x8(%esp)
081b2e46 +0x0dc:  movl   $"\nbase:%d * period:%.2f * avatar:%.2f * term:%d = %d\n",0x4(%esp)
081b2e4e +0x0e4:  movl   $&_ZZNK21CHARAC_LOAD_MERCENARY16CalcItemDropRateEP5CUserE6buffer,(%esp)
081b2e55 +0x0eb:  call   0807e440 <_init+0xd38>
081b2e5a +0x0f0:  movl   $&_ZZNK21CHARAC_LOAD_MERCENARY16CalcItemDropRateEP5CUserE6buffer,0x8(%esp)
081b2e62 +0x0f8:  mov    0xc(%ebp),%eax
081b2e65 +0x0fb:  mov    %eax,0x4(%esp)
081b2e69 +0x0ff:  mov    0x8(%ebp),%eax
081b2e6c +0x102:  mov    %eax,(%esp)
081b2e6f +0x105:  call   081b4190 <_ZNK21CHARAC_LOAD_MERCENARY18SendMessageToCUserEP5CUserPc>  ; CHARAC_LOAD_MERCENARY::SendMessageToCUser(CUser*, char*) const
081b2e74 +0x10a:  cmpl   $0x0,-0xc(%ebp)
081b2e78 +0x10e:  jg     081b2e81 <+0x117>
081b2e7a +0x110:  mov    $0xffffffff,%eax
081b2e7f +0x115:  jmp    081b2e84 <+0x11a>
081b2e81 +0x117:  mov    -0xc(%ebp),%eax
081b2e84 +0x11a:  leave
081b2e85 +0x11b:  ret
```

## 反编译 C

```c
// CHARAC_LOAD_MERCENARY::CalcItemDropRate @ 0x81b2d6a

/* CHARAC_LOAD_MERCENARY::CalcItemDropRate(CUser*) const */

int __thiscall CHARAC_LOAD_MERCENARY::CalcItemDropRate(CHARAC_LOAD_MERCENARY *this,CUser *param_1)

{
  bool bVar1;
  char cVar2;
  longdouble lVar3;
  undefined1 local_2c [4];
  int local_28;
  int local_24;
  int local_20;
  float local_1c;
  float local_18;
  int local_14;
  int local_10;
  
  local_24 = G_CDataManager();
  local_24 = local_24 + 0xa8e4;
  Find_max_value_lower_N<std::pair<int,int>>((int)local_2c,(vector *)(int)*(short *)(this + 4));
  local_20 = local_28;
  lVar3 = (longdouble)GetPeriodBonus(this);
  local_1c = (float)lVar3;
  lVar3 = (longdouble)GetAvatarBonus(this);
  local_18 = (float)lVar3;
  local_14 = GetCompetitionPeriodTerm(this,(bool *)0x0);
  local_10 = (int)ROUND((float)local_14 * (float)local_20 * local_1c * local_18);
  if ((param_1 == (CUser *)0x0) || (cVar2 = CUser::isGMUser(param_1), cVar2 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    sprintf(CalcItemDropRate(CUser*)::buffer,
            "\nbase:%d * period:%.2f * avatar:%.2f * term:%d = %d\n",local_20,(double)local_1c,
            (double)local_18,local_14,local_10);
    SendMessageToCUser((CUser *)this,(char *)param_1);
  }
  if (local_10 < 1) {
    local_10 = -1;
  }
  return local_10;
}
```
