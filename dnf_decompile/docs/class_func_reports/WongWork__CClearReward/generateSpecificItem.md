# generateSpecificItem

`_ZN8WongWork12CClearReward20generateSpecificItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE`

`WongWork::CClearReward::generateSpecificItem(WongWork::stGenerateRefData_t const&, WongWork::stGenerateResult_t&)`

| 类 | 地址 |
|---|---|
| `WongWork::CClearReward` | `0x08538c84` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08538c84  _ZN8WongWork12CClearReward20generateSpecificItemERKNS_19stGenerateRefData_tERNS_18stGenerateResult_tE
#           WongWork::CClearReward::generateSpecificItem(WongWork::stGenerateRefData_t const&, WongWork::stGenerateResult_t&)
# range [0x08538c84, 0x08538e63]
08538c84 +0x000:  push   %ebp
08538c85 +0x001:  mov    %esp,%ebp
08538c87 +0x003:  push   %ebx
08538c88 +0x004:  sub    $0x84,%esp
08538c8e +0x00a:  mov    0xc(%ebp),%eax
08538c91 +0x00d:  add    $0x34,%eax
08538c94 +0x010:  mov    %eax,-0x24(%ebp)
08538c97 +0x013:  mov    -0x24(%ebp),%eax
08538c9a +0x016:  movzbl 0x2(%eax),%eax
08538c9e +0x01a:  movzbl %al,%eax
08538ca1 +0x01d:  lea    -0x1(%eax),%edx
08538ca4 +0x020:  mov    0x8(%ebp),%eax
08538ca7 +0x023:  add    $0x38,%edx
08538caa +0x026:  flds   0xc(%eax,%edx,4)
08538cae +0x02a:  mov    -0x24(%ebp),%eax
08538cb1 +0x02d:  movzbl 0x1(%eax),%eax
08538cb5 +0x031:  movzbl %al,%edx
08538cb8 +0x034:  mov    0x8(%ebp),%eax
08538cbb +0x037:  add    $0x34,%edx
08538cbe +0x03a:  flds   0x8(%eax,%edx,4)
08538cc2 +0x03e:  fmulp  %st,%st(1)
08538cc4 +0x040:  fstps  -0x74(%ebp)
08538cc7 +0x043:  mov    -0x24(%ebp),%eax
08538cca +0x046:  mov    0x4(%eax),%ebx
08538ccd +0x049:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08538cd2 +0x04e:  add    $0x68,%eax
08538cd5 +0x051:  mov    %ebx,0x4(%esp)
08538cd9 +0x055:  mov    %eax,(%esp)
08538cdc +0x058:  call   08a8c28c <_ZNK21ServerParameterScript17GetExpBonusWeightE15eRankBonusIndex>  ; ServerParameterScript::GetExpBonusWeight(eRankBonusIndex) const
08538ce1 +0x05d:  fld1
08538ce3 +0x05f:  faddp  %st,%st(1)
08538ce5 +0x061:  fmuls  -0x74(%ebp)
08538ce8 +0x064:  fstps  -0x20(%ebp)
08538ceb +0x067:  mov    -0x24(%ebp),%eax
08538cee +0x06a:  movzbl (%eax),%eax
08538cf1 +0x06d:  movzbl %al,%edx
08538cf4 +0x070:  mov    0x8(%ebp),%eax
08538cf7 +0x073:  mov    0x4(%eax),%eax
08538cfa +0x076:  mov    %edx,0x4(%esp)
08538cfe +0x07a:  mov    %eax,(%esp)
08538d01 +0x07d:  call   08533424 <_ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh>  ; WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)
08538d06 +0x082:  mov    %eax,-0x1c(%ebp)
08538d09 +0x085:  mov    -0x1c(%ebp),%eax
08538d0c +0x088:  mov    (%eax),%eax
08538d0e +0x08a:  imul   $0xaf,%eax,%ecx
08538d14 +0x090:  mov    $0x10624dd3,%edx
08538d19 +0x095:  mov    %ecx,%eax
08538d1b +0x097:  imul   %edx
08538d1d +0x099:  sar    $0x6,%edx
08538d20 +0x09c:  mov    %ecx,%eax
08538d22 +0x09e:  sar    $0x1f,%eax
08538d25 +0x0a1:  mov    %edx,%ecx
08538d27 +0x0a3:  sub    %eax,%ecx
08538d29 +0x0a5:  mov    %ecx,%eax
08538d2b +0x0a7:  mov    %eax,-0x18(%ebp)
08538d2e +0x0aa:  mov    -0x24(%ebp),%eax
08538d31 +0x0ad:  movzwl 0x8(%eax),%eax
08538d35 +0x0b1:  movzwl %ax,%edx
08538d38 +0x0b4:  mov    -0x24(%ebp),%eax
08538d3b +0x0b7:  movzwl 0xe(%eax),%eax
08538d3f +0x0bb:  movzwl %ax,%eax
08538d42 +0x0be:  lea    (%eax,%eax,1),%ecx
08538d45 +0x0c1:  mov    -0x24(%ebp),%eax
08538d48 +0x0c4:  movzwl 0xa(%eax),%eax
08538d4c +0x0c8:  movzwl %ax,%eax
08538d4f +0x0cb:  lea    (%ecx,%eax,1),%eax
08538d52 +0x0ce:  add    %eax,%eax
08538d54 +0x0d0:  lea    (%edx,%eax,1),%eax
08538d57 +0x0d3:  imul   -0x18(%ebp),%eax
08538d5b +0x0d7:  mov    %eax,%edx
08538d5d +0x0d9:  shr    $0x1f,%edx
08538d60 +0x0dc:  lea    (%edx,%eax,1),%eax
08538d63 +0x0df:  sar    %eax
08538d65 +0x0e1:  mov    %eax,-0x6c(%ebp)
08538d68 +0x0e4:  fildl  -0x6c(%ebp)
08538d6b +0x0e7:  fmuls  -0x20(%ebp)
08538d6e +0x0ea:  fnstcw -0x6e(%ebp)
08538d71 +0x0ed:  movzwl -0x6e(%ebp),%eax
08538d75 +0x0f1:  mov    $0xc,%ah
08538d77 +0x0f3:  mov    %ax,-0x70(%ebp)
08538d7b +0x0f7:  fldcw  -0x70(%ebp)
08538d7e +0x0fa:  fistpl -0x14(%ebp)
08538d81 +0x0fd:  fldcw  -0x6e(%ebp)
08538d84 +0x100:  movl   $0x0,-0x10(%ebp)
08538d8b +0x107:  jmp    08538e43 <+0x1bf>
08538d90 +0x10c:  fildl  -0x14(%ebp)
08538d93 +0x10f:  flds   &data#0d86eb63(.rodata)
08538d99 +0x115:  fdivrp %st,%st(1)
08538d9b +0x117:  mov    -0x24(%ebp),%eax
08538d9e +0x11a:  movzbl 0x2(%eax),%eax
08538da2 +0x11e:  movzbl %al,%eax
08538da5 +0x121:  mov    %eax,-0x6c(%ebp)
08538da8 +0x124:  fildl  -0x6c(%ebp)
08538dab +0x127:  fdivrp %st,%st(1)
08538dad +0x129:  fmuls  -0x20(%ebp)
08538db0 +0x12c:  fnstcw -0x6e(%ebp)
08538db3 +0x12f:  movzwl -0x6e(%ebp),%eax
08538db7 +0x133:  mov    $0xc,%ah
08538db9 +0x135:  mov    %ax,-0x70(%ebp)
08538dbd +0x139:  fldcw  -0x70(%ebp)
08538dc0 +0x13c:  fistpl -0x6c(%ebp)
08538dc3 +0x13f:  fldcw  -0x6e(%ebp)
08538dc6 +0x142:  mov    -0x6c(%ebp),%ebx
08538dc9 +0x145:  mov    -0x1c(%ebp),%eax
08538dcc +0x148:  mov    0x4(%eax),%eax
08538dcf +0x14b:  mov    -0x1c(%ebp),%edx
08538dd2 +0x14e:  mov    0x4(%edx),%edx
08538dd5 +0x151:  neg    %edx
08538dd7 +0x153:  mov    %eax,0x4(%esp)
08538ddb +0x157:  mov    %edx,(%esp)
08538dde +0x15a:  call   08539d90 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x1c>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x1c
08538de3 +0x15f:  add    $0x64,%eax
08538de6 +0x162:  mov    %ebx,%ecx
08538de8 +0x164:  imul   %eax,%ecx
08538deb +0x167:  mov    $0x51eb851f,%edx
08538df0 +0x16c:  mov    %ecx,%eax
08538df2 +0x16e:  imul   %edx
08538df4 +0x170:  sar    $0x5,%edx
08538df7 +0x173:  mov    %ecx,%eax
08538df9 +0x175:  sar    $0x1f,%eax
08538dfc +0x178:  mov    %edx,%ecx
08538dfe +0x17a:  sub    %eax,%ecx
08538e00 +0x17c:  mov    %ecx,%eax
08538e02 +0x17e:  mov    %eax,-0xc(%ebp)
08538e05 +0x181:  lea    -0x61(%ebp),%eax
08538e08 +0x184:  mov    %eax,(%esp)
08538e0b +0x187:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08538e10 +0x18c:  movb   $0x2,-0x60(%ebp)
08538e14 +0x190:  movl   $0x0,-0x5f(%ebp)
08538e1b +0x197:  mov    -0xc(%ebp),%eax
08538e1e +0x19a:  mov    %eax,0x4(%esp)
08538e22 +0x19e:  lea    -0x61(%ebp),%eax
08538e25 +0x1a1:  mov    %eax,(%esp)
08538e28 +0x1a4:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
08538e2d +0x1a9:  mov    0x10(%ebp),%eax
08538e30 +0x1ac:  lea    -0x61(%ebp),%edx
08538e33 +0x1af:  mov    %edx,0x4(%esp)
08538e37 +0x1b3:  mov    %eax,(%esp)
08538e3a +0x1b6:  call   08237262 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc90c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc90c
08538e3f +0x1bb:  addl   $0x1,-0x10(%ebp)
08538e43 +0x1bf:  mov    -0x24(%ebp),%eax
08538e46 +0x1c2:  movzbl 0x2(%eax),%eax
08538e4a +0x1c6:  movzbl %al,%eax
08538e4d +0x1c9:  cmp    -0x10(%ebp),%eax
08538e50 +0x1cc:  setg   %al
08538e53 +0x1cf:  test   %al,%al
08538e55 +0x1d1:  jne    08538d90 <+0x10c>
08538e5b +0x1d7:  add    $0x84,%esp
08538e61 +0x1dd:  pop    %ebx
08538e62 +0x1de:  pop    %ebp
08538e63 +0x1df:  ret
```

## 反编译 C

```c
// WongWork::CClearReward::generateSpecificItem @ 0x8538c84

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WongWork::CClearReward::generateSpecificItem(WongWork::stGenerateRefData_t const&,
   WongWork::stGenerateResult_t&) */

void __thiscall
WongWork::CClearReward::generateSpecificItem
          (CClearReward *this,stGenerateRefData_t *param_1,stGenerateResult_t *param_2)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  longdouble lVar5;
  Inven_Item local_65;
  undefined1 local_64;
  undefined4 local_63;
  stGenerateRefData_t *local_28;
  float local_24;
  int *local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_28 = param_1 + 0x34;
  fVar1 = *(float *)(this + ((byte)param_1[0x36] + 0x37) * 4 + 0xc);
  fVar2 = *(float *)(this + ((byte)param_1[0x35] + 0x34) * 4 + 8);
  uVar3 = *(undefined4 *)(param_1 + 0x38);
  iVar4 = G_CDataManager();
  lVar5 = (longdouble)
          ServerParameterScript::GetExpBonusWeight((ServerParameterScript *)(iVar4 + 0x68),uVar3);
  local_24 = (float)(((longdouble)1 + lVar5) * (longdouble)(fVar2 * fVar1));
  local_20 = (int *)CGeneratorCommonData::getGoldGenTable
                              (*(CGeneratorCommonData **)(this + 4),(uchar)*local_28);
  local_1c = (*local_20 * 0xaf) / 1000;
  local_18 = (int)ROUND((float)((int)(((uint)*(ushort *)(local_28 + 8) +
                                      ((uint)*(ushort *)(local_28 + 0xe) * 2 +
                                      (uint)*(ushort *)(local_28 + 10)) * 2) * local_1c) / 2) *
                        local_24);
  for (local_14 = 0; local_14 < (int)(uint)(byte)local_28[2]; local_14 = local_14 + 1) {
    fVar1 = (((float)local_18 / _DAT_08c9a6d8) / (float)(byte)local_28[2]) * local_24;
    iVar4 = GetRandomRange(-local_20[1],local_20[1]);
    local_10 = ((int)ROUND(fVar1) * (iVar4 + 100)) / 100;
    Inven_Item::Inven_Item(&local_65);
    local_64 = 2;
    local_63 = 0;
    Inven_Item::set_add_info(&local_65,local_10);
    std::vector<Inven_Item,std::allocator<Inven_Item>>::push_back
              ((vector<Inven_Item,std::allocator<Inven_Item>> *)param_2,&local_65);
  }
  return;
}
```
